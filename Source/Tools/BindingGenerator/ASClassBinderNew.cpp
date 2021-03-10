//
// Copyright (c) 2008-2020 the Urho3D project.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#include "ASResult.h"
#include "ASUtils.h"
#include "Tuning.h"
#include "Utils.h"
#include "XmlAnalyzer.h"
#include "XmlSourceData.h"

#include <cassert>
#include <fstream>
#include <iostream>
#include <regex>
#include <vector>

namespace ASBindingGenerator
{

static void RegisterObjectType(const ClassAnalyzer& classAnalyzer, ProcessedClass& inoutProcessedClass)
{
    string className = classAnalyzer.GetClassName();

    if (classAnalyzer.IsRefCounted() || Contains(classAnalyzer.GetComment(), "FAKE_REF"))
    {
        inoutProcessedClass.objectTypeRegistration_ = "engine->RegisterObjectType(\"" + className + "\", 0, asOBJ_REF);";
    }
    else // Value type
    {
        string flags = "asOBJ_VALUE | asGetTypeTraits<" + className + ">()";

        if (classAnalyzer.IsPod())
        {
            flags += " | asOBJ_POD";

            if (classAnalyzer.AllFloats())
                flags += " | asOBJ_APP_CLASS_ALLFLOATS";
            else if (classAnalyzer.AllInts())
                flags += " | asOBJ_APP_CLASS_ALLINTS";
        }

        inoutProcessedClass.objectTypeRegistration_ = "engine->RegisterObjectType(\"" + className + "\", sizeof(" + className + "), " + flags + ");";
    }
}

static bool IsConstructorRequired(const ClassAnalyzer& classAnalyzer)
{
    if (classAnalyzer.IsRefCounted())
        return false;

    if (Contains(classAnalyzer.GetComment(), "FAKE_REF"))
        return false;

    if (classAnalyzer.IsPod())
        return false;

    return true;
}

static bool IsDestructorRequired(const ClassAnalyzer& classAnalyzer)
{
    if (classAnalyzer.IsRefCounted())
        return false;

    if (Contains(classAnalyzer.GetComment(), "FAKE_REF"))
        return false;

    if (classAnalyzer.IsPod())
        return false;

    return true;
}

// Iterate over overrided funcions
static bool HaveMark(const MethodAnalyzer& methodAnalyzer, const string& mark)
{
    if (Contains(methodAnalyzer.GetComment(), mark))
        return true;

    shared_ptr<MethodAnalyzer> reimplements = methodAnalyzer.Reimplements();

    if (!reimplements)
        return false;

    return HaveMark(*reimplements, mark);
}

static void RegisterConstructor(const MethodAnalyzer& methodAnalyzer, ProcessedClass& processedClass)
{
    ClassAnalyzer classAnalyzer = methodAnalyzer.GetClass();

    if (classAnalyzer.IsAbstract())
        return;

    if (HaveMark(methodAnalyzer, "NO_BIND"))
    {
        MemberRegistrationError regError;
        regError.name_ = methodAnalyzer.GetName();
        regError.comment_ = methodAnalyzer.GetDeclaration();
        regError.message_ = "Not registered because have @nobind mark";
        processedClass.unregisteredSpecialMethods_.push_back(regError);
        return;
    }

    if (HaveMark(methodAnalyzer, "MANUAL_BIND"))
    {
        MemberRegistrationError regError;
        regError.name_ = methodAnalyzer.GetName();
        regError.comment_ = methodAnalyzer.GetDeclaration();
        regError.message_ = "Not registered because have @manualbind mark";
        processedClass.unregisteredSpecialMethods_.push_back(regError);
        return;
    }

    SpecialMethodRegistration result;
    //result.name_ = methodAnalyzer.GetName();
    result.comment_ = methodAnalyzer.GetDeclaration();
    
    string asClassName = classAnalyzer.GetClassName();
    string cppClassName = classAnalyzer.GetClassName();
    vector<ParamAnalyzer> params = methodAnalyzer.GetParams();

    if (params.empty()) // Default constructor
    {
        if (classAnalyzer.IsRefCounted() || Contains(classAnalyzer.GetComment(), "FAKE_REF"))
            result.registration_ = "engine->RegisterObjectBehaviour(\"" + asClassName + "\", asBEHAVE_FACTORY, \"" + asClassName + "@+ f()\", asFUNCTION(ASCompatibleFactory<" + cppClassName + ">), AS_CALL_CDECL);";
        else
            result.registration_ = "engine->RegisterObjectBehaviour(\"" + asClassName + "\", asBEHAVE_CONSTRUCT, \"void f()\", asFUNCTION(ASCompatibleConstructor<" + cppClassName + ">), AS_CALL_CDECL_OBJFIRST);";

        result.comment_ = methodAnalyzer.GetLocation(); // Rewrite comment
        processedClass.defaultConstructor_ = make_shared<SpecialMethodRegistration>(result);
        return;
    }


    vector<ConvertedVariable> convertedParams;
    for (const ParamAnalyzer& param : params)
    {
        ConvertedVariable convertedParam;

        try
        {
            convertedParam = CppVariableToAS(param.GetType(), VariableUsage::FunctionParameter, param.GetDeclname(), param.GetDefval());
        }
        catch (const Exception& e)
        {
            MemberRegistrationError regError;
            regError.name_ = methodAnalyzer.GetName();
            regError.comment_ = methodAnalyzer.GetDeclaration();
            regError.message_ = e.what();
            processedClass.unregisteredSpecialMethods_.push_back(regError);
            return;
        }

        convertedParams.push_back(convertedParam);
    }

    bool needWrapper = false;
    for (const ConvertedVariable& convertedParam : convertedParams)
    {
        if (convertedParam.NeedWrapper())
            needWrapper = true;
    }

    if (classAnalyzer.IsRefCounted() || Contains(classAnalyzer.GetComment(), "FAKE_REF"))
    {
        string asDeclaration = asClassName + "@+ f(" + JoinASDeclarations(convertedParams) + ")";
        result.registration_ = result.registration_ =
            "engine->RegisterObjectBehaviour(\"" + asClassName + "\", asBEHAVE_FACTORY, \"" + asDeclaration + "\", AS_FUNCTION("
            + GenerateWrapperName(methodAnalyzer) + ") , AS_CALL_CDECL);";

        result.glue_ = GenerateFactoryWrapper(methodAnalyzer, convertedParams);
    }
    else
    {
        string asDeclaration = "void f(" + JoinASDeclarations(convertedParams) + ")";
        result.registration_ = "engine->RegisterObjectBehaviour(\"" + asClassName + "\", asBEHAVE_CONSTRUCT, \"" + asDeclaration +
            "\", AS_FUNCTION_OBJFIRST(" + GenerateWrapperName(methodAnalyzer) + "), AS_CALL_CDECL_OBJFIRST);";

        result.glue_ = GenerateConstructorWrapper(methodAnalyzer, convertedParams);
    }

    processedClass.nonDefaultConstructors_.push_back(result);
}

static void RegisterDestructor(const ClassAnalyzer& classAnalyzer, ProcessedClass& processedClass)
{
    if (classAnalyzer.IsRefCounted())
        return;

    if (Contains(classAnalyzer.GetComment(), "FAKE_REF"))
        return;

    string className = classAnalyzer.GetClassName();
    string wrapperName = className + "_Destructor";

    shared_ptr<SpecialMethodRegistration> result = make_shared<SpecialMethodRegistration>();

    //result->name_ = "~" + className;

    result->registration_ = "engine->RegisterObjectBehaviour(\"" + className + "\", asBEHAVE_DESTRUCT, \"void f()\", AS_DESTRUCTOR(" + className + "), AS_CALL_CDECL_OBJFIRST);";

    shared_ptr<MethodAnalyzer> thisDestructor = classAnalyzer.GetDefinedThisDestructor();

    if (thisDestructor)
    {
        result->comment_ = thisDestructor->GetDeclaration();
        processedClass.destructor_ = result;
    }
    else if (!classAnalyzer.HasThisDestructor() && IsDestructorRequired(classAnalyzer))
    {
        result->comment_ = className + "::~" + className + "() | Implicitly-declared";
        processedClass.destructor_ = result;
    }
}

// https://www.angelcode.com/angelscript/sdk/docs/manual/doc_script_class_ops.html
static string CppMethodNameToAS(const MethodAnalyzer& methodAnalyzer)
{
    string name = methodAnalyzer.GetName();

    if (name == "operator=")
        return "opAssign";

    if (name == "operator+")
        return "opAdd";

    if (name == "operator-")
    {
        if (!methodAnalyzer.GetParams().size()) // If no params
            return "opNeg";               // then unary minus
        else
            return "opSub";
    }

    if (name == "operator*")
        return "opMul";

    if (name == "operator/")
        return "opDiv";

    if (name == "operator+=")
        return "opAddAssign";

    if (name == "operator-=")
        return "opSubAssign";

    if (name == "operator*=")
        return "opMulAssign";

    if (name == "operator/=")
        return "opDivAssign";

    if (name == "operator==")
        return "opEquals";

    if (name == "operator[]")
        return "opIndex";

    // Conversion to another type operator
    if (StartsWith(name, "operator "))
    {
        if (methodAnalyzer.IsExplicit())
            return "opConv";
        else
            return "opImplConv";
    }

    if (name == "operator!=")
        throw Exception("Only operator== is needed");

    if (name == "operator<")
        throw Exception("Registerd as opCmp separately");

    if (name == "operator>")
        throw Exception("Registerd as opCmp separately");

    return name;
}

// https://www.angelcode.com/angelscript/sdk/docs/manual/doc_reg_objprop.html
static string CppMethodNameToASProperty(const MethodAnalyzer& methodAnalyzer)
{
    string name = methodAnalyzer.GetName();

    if (StartsWith(name, "Is") || StartsWith(name, "Get"))
    {
        string result = CutStart(name, "Is");
        result = CutStart(result, "Get");
        result = "get_" + FirstCharToLower(result);
        return result;
    }

    if (StartsWith(name, "Set"))
    {
        string result = CutStart(name, "Set");
        result = "set_" + FirstCharToLower(result);
        return result;
    }

    if (methodAnalyzer.CanBeGetProperty())
    {
        string result = name;
        result = "get_" + FirstCharToLower(result);
        return result;
    }

    if (methodAnalyzer.CanBeSetProperty())
    {
        string result = name;
        result = "set_" + FirstCharToLower(result);
        return result;
    }

    throw Exception("Can not be property");
}

// Can return BIND_AS_ALIAS_xxxx or BIND_AS_PROPERTY
// Return "" if no this marks
static string GetPropertyMark(const MethodAnalyzer& methodAnalyzer)
{
    string comment = methodAnalyzer.GetComment();

    smatch match;
    regex_match(comment, match, regex(".*\\b(BIND_AS_ALIAS_.+?)\\b.*"));
    if (match.size() == 2)
        return match[1].str();

    regex_match(comment, match, regex(".*\\bBIND_AS_PROPERTY\\b.*"));
    if (match.size() == 1)
        return "BIND_AS_PROPERTY";

    shared_ptr<MethodAnalyzer> reimplements = methodAnalyzer.Reimplements();

    if (!reimplements)
        return "";

    return GetPropertyMark(*reimplements);
}

static void RegisterMethod(const MethodAnalyzer& methodAnalyzer, ProcessedClass& processedClass)
{
    if (methodAnalyzer.IsTemplate())
        return;

    if (methodAnalyzer.IsDeleted())
        return;

    if (methodAnalyzer.IsStatic())
    {
        if (HaveMark(methodAnalyzer, "NO_BIND"))
        {
            MemberRegistrationError regError;
            regError.name_ = methodAnalyzer.GetName();
            regError.comment_ = methodAnalyzer.GetDeclaration();
            regError.message_ = "Not registered because have @nobind mark";
            processedClass.unregisteredStaticMethods_.push_back(regError);
            return;
        }

        if (HaveMark(methodAnalyzer, "MANUAL_BIND"))
        {
            MemberRegistrationError regError;
            regError.name_ = methodAnalyzer.GetName();
            regError.comment_ = methodAnalyzer.GetDeclaration();
            regError.message_ = "Not registered because have @manualbind mark";
            processedClass.unregisteredStaticMethods_.push_back(regError);
            return;
        }

        ClassStaticFunctionAnalyzer staticMethodAnalyzer(methodAnalyzer.GetClass(), methodAnalyzer.GetMemberdef());

        vector<ParamAnalyzer> params = staticMethodAnalyzer.GetParams();
        vector<ConvertedVariable> convertedParams;
        string outGlue;
        bool needWrapper = false;

        for (const ParamAnalyzer& param : params)
        {
            ConvertedVariable conv;
            try
            {
                conv = CppVariableToAS(param.GetType(), VariableUsage::FunctionParameter, param.GetDeclname(), param.GetDefval());
            }
            catch (const Exception& e)
            {
                MemberRegistrationError regError;
                regError.name_ = staticMethodAnalyzer.GetName();
                regError.comment_ = methodAnalyzer.GetDeclaration();
                regError.message_ = e.what();
                processedClass.unregisteredStaticMethods_.push_back(regError);
                return;
            }

            if (conv.NeedWrapper())
                needWrapper = true;

            convertedParams.push_back(conv);
        }

        ConvertedVariable convertedReturn;

        try
        {
            convertedReturn = CppVariableToAS(staticMethodAnalyzer.GetReturnType(), VariableUsage::FunctionReturn);
        }
        catch (const Exception& e)
        {
            MemberRegistrationError regError;
            regError.name_ = staticMethodAnalyzer.GetName();
            regError.comment_ = methodAnalyzer.GetDeclaration();
            regError.message_ = e.what();
            processedClass.unregisteredStaticMethods_.push_back(regError);
            return;
        }

        if (convertedReturn.NeedWrapper())
            needWrapper = true;

        string asFunctionName = staticMethodAnalyzer.GetName();
        string className = staticMethodAnalyzer.GetClassName();

        string decl = convertedReturn.asDeclaration_ + " " + asFunctionName + "(" + JoinASDeclarations(convertedParams) + ")";

        StaticMethodRegistration result;
        result.cppDeclaration_ = methodAnalyzer.GetDeclaration();
        result.name_ = staticMethodAnalyzer.GetName();
        result.registration_.asDeclarations_.push_back(decl);
        result.registration_.callConv_ = "AS_CALL_CDECL";
        
        if (needWrapper)
            result.registration_.funcPointer_ = "AS_FUNCTION(" + GenerateWrapperName(staticMethodAnalyzer) + ")";
        else
            result.registration_.funcPointer_ = Generate_asFUNCTIONPR(staticMethodAnalyzer);

        if (needWrapper)
            result.glue_ = GenerateWrapper(staticMethodAnalyzer, convertedParams, convertedReturn);

        processedClass.staticMethods_.push_back(result);

        return;
    }

    if (HaveMark(methodAnalyzer, "NO_BIND"))
    {
        MemberRegistrationError regError;
        regError.name_ = methodAnalyzer.GetName();
        regError.comment_ = methodAnalyzer.GetDeclaration();
        regError.message_ = "Not registered because have @nobind mark";
        processedClass.unregisteredMethods_.push_back(regError);
        return;
    }

    if (HaveMark(methodAnalyzer, "MANUAL_BIND"))
    {
        MemberRegistrationError regError;
        regError.name_ = methodAnalyzer.GetName();
        regError.comment_ = methodAnalyzer.GetDeclaration();
        regError.message_ = "Not registered because have @manualbind mark";
        processedClass.unregisteredMethods_.push_back(regError);
        return;
    }

    vector<ParamAnalyzer> params = methodAnalyzer.GetParams();
    vector<ConvertedVariable> convertedParams;
    bool needWrapper = false;

    for (const ParamAnalyzer& param : params)
    {
        ConvertedVariable conv;

        try
        {
            conv = CppVariableToAS(param.GetType(), VariableUsage::FunctionParameter, param.GetDeclname(), param.GetDefval());
        }
        catch (const Exception& e)
        {
            MemberRegistrationError regError;
            regError.name_ = methodAnalyzer.GetName();
            regError.comment_ = methodAnalyzer.GetDeclaration();
            regError.message_ = e.what();
            processedClass.unregisteredMethods_.push_back(regError);
            return;
        }

        convertedParams.push_back(conv);

        if (conv.NeedWrapper())
            needWrapper = true;
    }

    ConvertedVariable retConv;

    try
    {
        retConv = CppVariableToAS(methodAnalyzer.GetReturnType(), VariableUsage::FunctionReturn);
    }
    catch (const Exception& e)
    {
        MemberRegistrationError regError;
        regError.name_ = methodAnalyzer.GetName();
        regError.comment_ = methodAnalyzer.GetDeclaration();
        regError.message_ = e.what();
        processedClass.unregisteredMethods_.push_back(regError);
        return;
    }

    if (retConv.NeedWrapper())
        needWrapper = true;

    string asReturnType = retConv.asDeclaration_;

    string asFunctionName = methodAnalyzer.GetName();
    if (methodAnalyzer.IsConsversionOperator())
        asReturnType = CutStart(asFunctionName, "operator ");
    
    try
    {
        asFunctionName = CppMethodNameToAS(methodAnalyzer);
    }
    catch (const Exception& e)
    {
        MemberRegistrationError regError;
        regError.name_ = methodAnalyzer.GetName();
        regError.comment_ = methodAnalyzer.GetDeclaration();
        regError.message_ = e.what();
        processedClass.unregisteredMethods_.push_back(regError);
        return;
    }

    MethodRegistration result;
    result.name_ = methodAnalyzer.GetName();
    result.cppDeclaration_ = ReplaceAll(methodAnalyzer.GetDeclaration(), "\"", "\\\"");

    if (needWrapper)
    {
        result.glue_ = GenerateWrapper(methodAnalyzer, false, convertedParams, retConv);
        result.registration_.funcPointer_ = "AS_FUNCTION_OBJFIRST(" + GenerateWrapperName(methodAnalyzer) + ")";
        result.registration_.callConv_ = "AS_CALL_CDECL_OBJFIRST";
    }
    else
    {
        result.registration_.funcPointer_ = Generate_asMETHODPR(methodAnalyzer, false);
        result.registration_.callConv_ = "AS_CALL_THISCALL";
    }

    string decl = asReturnType + " " + asFunctionName + "(" + JoinASDeclarations(convertedParams) + ")";

    if (methodAnalyzer.IsConst())
        decl += " const";

    result.registration_.asDeclarations_.push_back(decl);

    // Also register as property if needed
    string propertyMark = GetPropertyMark(methodAnalyzer);
    if (!propertyMark.empty())
    {
        if (StartsWith(propertyMark, "BIND_AS_ALIAS_"))
        {
            asFunctionName = CutStart(propertyMark, "BIND_AS_ALIAS_");
        }
        else
        {
            try
            {
                asFunctionName = CppMethodNameToASProperty(methodAnalyzer);
            }
            catch (const Exception& e)
            {
                MemberRegistrationError regError;
                regError.name_ = methodAnalyzer.GetName();
                regError.comment_ = methodAnalyzer.GetDeclaration();
                regError.message_ = e.what();
                processedClass.unregisteredMethods_.push_back(regError);
                return;
            }
        }

        decl = asReturnType + " " + asFunctionName + "(" + JoinASDeclarations(convertedParams) + ")";

        if (methodAnalyzer.IsConst())
            decl += " const";

        result.registration_.asDeclarations_.push_back(decl);
    }

    processedClass.methods_.push_back(result);
}

static void RegisterField(const FieldAnalyzer& fieldAnalyzer, ProcessedClass& processedClass)
{
    if (Contains(fieldAnalyzer.GetComment(), "NO_BIND"))
    {
        MemberRegistrationError regError;
        regError.name_ = fieldAnalyzer.GetName();
        regError.comment_ = fieldAnalyzer.GetDeclaration();
        regError.message_ = "Not registered because have @nobind mark";
        processedClass.unregisteredFields_.push_back(regError);
        return;
    }

    if (Contains(fieldAnalyzer.GetComment(), "MANUAL_BIND"))
    {
        MemberRegistrationError regError;
        regError.name_ = fieldAnalyzer.GetName();
        regError.comment_ = fieldAnalyzer.GetDeclaration();
        regError.message_ = "Not registered because have @manualbind mark";
        processedClass.unregisteredFields_.push_back(regError);
        return;
    }

    if (fieldAnalyzer.IsStatic())
    {
        string asType;

        try
        {
            asType = CppTypeToAS(fieldAnalyzer.GetType(), TypeUsage::StaticField);
        }
        catch (const Exception& e)
        {
            MemberRegistrationError regError;
            regError.name_ = fieldAnalyzer.GetName();
            regError.comment_ = fieldAnalyzer.GetDeclaration();
            regError.message_ = e.what();
            processedClass.unregisteredStaticFields_.push_back(regError);
            return;
        }

        if (fieldAnalyzer.GetType().IsConst())
            asType = "const " + asType;

        asType = ReplaceAll(asType, "struct ", "");

        string cppClassName = fieldAnalyzer.GetClassName();
        string asPropertyName = fieldAnalyzer.GetName();

        StaticFieldRegistration result;
        result.cppDeclaration_ = fieldAnalyzer.GetDeclaration();
        result.name_ = fieldAnalyzer.GetName();
        result.registration_.asDeclarations_.push_back(asType + " " + asPropertyName);
        result.registration_.pointer_ = "(void*)&" + cppClassName + "::" + fieldAnalyzer.GetName();

        processedClass.staticFields_.push_back(result);
    }
    else
    {
        if (fieldAnalyzer.IsArray())
        {
            MemberRegistrationError regError;
            regError.name_ = fieldAnalyzer.GetName();
            regError.comment_ = fieldAnalyzer.GetDeclaration();
            regError.message_ = "Not registered because array";
            processedClass.unregisteredFields_.push_back(regError);
            return;
        }

        if (fieldAnalyzer.GetType().IsPointer())
        {
            MemberRegistrationError regError;
            regError.name_ = fieldAnalyzer.GetName();
            regError.comment_ = fieldAnalyzer.GetDeclaration();
            regError.message_ = "Not registered because pointer";
            processedClass.unregisteredFields_.push_back(regError);
            return;
        }

        string asPropertyType;

        try
        {
            asPropertyType = CppTypeToAS(fieldAnalyzer.GetType(), TypeUsage::Field);
        }
        catch (const Exception& e)
        {
            MemberRegistrationError regError;
            regError.name_ = fieldAnalyzer.GetName();
            regError.comment_ = fieldAnalyzer.GetDeclaration();
            regError.message_ = e.what();
            processedClass.unregisteredFields_.push_back(regError);
            return;
        }

        string cppFieldName = fieldAnalyzer.GetName();
        assert(!cppFieldName.empty());
        string asPropertyName = CutEnd(cppFieldName, "_");

        string cppClassName = fieldAnalyzer.GetClassName();

        FieldRegistration result;
        result.name_ = cppFieldName;
        result.cppDeclaration_ = fieldAnalyzer.GetDeclaration();
        result.registration_.asDeclarations_.push_back(asPropertyType + " " + asPropertyName);
        result.registration_.byteOffset_ = "offsetof(" + cppClassName + ", " + cppFieldName + ")";

        processedClass.fields_.push_back(result);
    }
}

static void ProcessClass(const ClassAnalyzer& classAnalyzer)
{
    if (classAnalyzer.IsInternal())
        return;

    // TODO: Remove
    if (classAnalyzer.IsTemplate())
        return;

    string header = classAnalyzer.GetHeaderFile();
    Result::AddHeader(header);

    if (IsIgnoredHeader(header))
        return;

    ProcessedClass processedClass;
    processedClass.name_ = classAnalyzer.GetClassName();
    processedClass.dirName_ = classAnalyzer.GetDirName();
    processedClass.comment_ = classAnalyzer.GetLocation();
    processedClass.insideDefine_ = InsideDefine(header);

    vector<MethodAnalyzer> methods = classAnalyzer.GetThisPublicMethods();
    for (const MethodAnalyzer& method : methods)
    {
        if (method.IsThisConstructor())
            RegisterConstructor(method, processedClass);
        else if (method.IsDestructor())
            continue;
        else if (method.IsConstructor())
            continue;
        else
            RegisterMethod(method, processedClass);
    }

    // TODO отдельный класс для статических методов?
    vector<MethodAnalyzer> staticMethods = classAnalyzer.GetThisPublicStaticMethods();
    for (const MethodAnalyzer& staticMethod : staticMethods)
    {
        RegisterMethod(staticMethod, processedClass);
    }

    vector<FieldAnalyzer> fields = classAnalyzer.GetThisPublicFields();
    for (const FieldAnalyzer& field : fields)
        RegisterField(field, processedClass);

    vector<FieldAnalyzer> staticFields = classAnalyzer.GetThisPublicStaticFields();
    for (const FieldAnalyzer& staticField : staticFields)
        RegisterField(staticField, processedClass);

    if (classAnalyzer.IsAbstract() && !(classAnalyzer.IsRefCounted() || Contains(classAnalyzer.GetComment(), "FAKE_REF")))
    {
        processedClass.objectTypeRegistration_ = "// Not registered because value types can not be abstract";
        processedClass.noBind_ = true;
        Result::classes_.push_back(processedClass);
        return;
    }

    string classComment = classAnalyzer.GetComment();

    if (Contains(classComment, "NO_BIND"))
    {
        processedClass.objectTypeRegistration_ = "// Not registered because have @nobind mark";
        processedClass.noBind_ = true;
        Result::classes_.push_back(processedClass);
        return;
    }

    if (Contains(classComment, "MANUAL_BIND"))
    {
        processedClass.objectTypeRegistration_ = "// Not registered because have @manualbind mark";
        processedClass.noBind_ = true;
        Result::classes_.push_back(processedClass);
        return;
    }

    RegisterObjectType(classAnalyzer, processedClass);

    vector<ClassAnalyzer> baseClasses = classAnalyzer.GetBaseClasses();
    for (const ClassAnalyzer& baseClass : baseClasses)
        processedClass.baseClassNames_.push_back(baseClass.GetClassName());

    processedClass.hiddenMethods_ = classAnalyzer.GetHiddenMethods();
    processedClass.hiddenStaticMethods_ = classAnalyzer.GetHiddenStaticMethods();
    processedClass.hiddenFields_ = classAnalyzer.GetHiddenFields();
    processedClass.hiddenStaticFields_ = classAnalyzer.GetHiddenStaticFields();

    if (classAnalyzer.IsAbstract()) // Abstract refcounted type
    {
        Result::classes_.push_back(processedClass);
        return;
    }

    if (!classAnalyzer.HasThisConstructor() && IsConstructorRequired(classAnalyzer))
    {
        shared_ptr<SpecialMethodRegistration> result = make_shared<SpecialMethodRegistration>();
        string cppClassName = classAnalyzer.GetClassName();
        string asClassName = classAnalyzer.GetClassName();

        if (classAnalyzer.IsRefCounted() || Contains(classAnalyzer.GetComment(), "FAKE_REF"))
            result->registration_ = "engine->RegisterObjectBehaviour(\"" + asClassName + "\", asBEHAVE_FACTORY, \"" + asClassName + "@+ f()\", asFUNCTION(ASCompatibleFactory<" + cppClassName + ">), AS_CALL_CDECL);";
        else
            result->registration_ = "engine->RegisterObjectBehaviour(\"" + asClassName + "\", asBEHAVE_CONSTRUCT, \"void f()\", asFUNCTION(ASCompatibleConstructor<" + cppClassName + ">), AS_CALL_CDECL_OBJFIRST);";

        result->comment_ = cppClassName + "::" + cppClassName + "() | Implicitly-declared";
        processedClass.defaultConstructor_ = result;
    }

    RegisterDestructor(classAnalyzer, processedClass);

    Result::classes_.push_back(processedClass);
}

void ProcessAllClassesNew()
{
#if 0
    // Old order of classes for tests
    vector<string> classIDs;
    classIDs.reserve(SourceData::classesByID_.size());
    for (pair<const string, xml_node>& it : SourceData::classesByID_)
        classIDs.push_back(it.first);
    sort(classIDs.begin(), classIDs.end());

    for (string classID : classIDs)
    {
        xml_node compounddef = SourceData::classesByID_[classID];
        ClassAnalyzer analyzer(compounddef);
        ProcessClass(analyzer);
    }
#else
    for (auto element : SourceData::classesByID_)
    {
        xml_node compounddef = element.second;
        ClassAnalyzer analyzer(compounddef);
        ProcessClass(analyzer);
    }
#endif
}

} // namespace ASBindingGenerator
