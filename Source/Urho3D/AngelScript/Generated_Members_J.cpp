// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_J(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void JSONFile::RegisterObject(Context* context) | File: ../Resource/JSONFile.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(JSONFile, "JSONFile")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(JSONFile, "JSONFile")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(JSONFile, "JSONFile")
#endif
#ifdef REGISTER_MANUAL_PART_JSONFile
    REGISTER_MANUAL_PART_JSONFile(JSONFile, "JSONFile")
#endif
    RegisterSubclass<Resource, JSONFile>(engine, "Resource", "JSONFile");
    RegisterSubclass<Object, JSONFile>(engine, "Object", "JSONFile");
    RegisterSubclass<RefCounted, JSONFile>(engine, "RefCounted", "JSONFile");

    // static JSONNumberType JSONValue::GetNumberTypeFromName(const String& typeName) | File: ../Resource/JSONValue.h
    engine->SetDefaultNamespace("JSONValue");
    engine->RegisterGlobalFunction("JSONNumberType GetNumberTypeFromName(const String&in)", AS_FUNCTIONPR(JSONValue::GetNumberTypeFromName, (const String&), JSONNumberType), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static JSONNumberType JSONValue::GetNumberTypeFromName(const char* typeName) | File: ../Resource/JSONValue.h
    // Error: type "const char*" can not automatically bind
    // static String JSONValue::GetNumberTypeName(JSONNumberType type) | File: ../Resource/JSONValue.h
    engine->SetDefaultNamespace("JSONValue");
    engine->RegisterGlobalFunction("String GetNumberTypeName(JSONNumberType)", AS_FUNCTIONPR(JSONValue::GetNumberTypeName, (JSONNumberType), String), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static JSONValueType JSONValue::GetValueTypeFromName(const String& typeName) | File: ../Resource/JSONValue.h
    engine->SetDefaultNamespace("JSONValue");
    engine->RegisterGlobalFunction("JSONValueType GetValueTypeFromName(const String&in)", AS_FUNCTIONPR(JSONValue::GetValueTypeFromName, (const String&), JSONValueType), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static JSONValueType JSONValue::GetValueTypeFromName(const char* typeName) | File: ../Resource/JSONValue.h
    // Error: type "const char*" can not automatically bind
    // static String JSONValue::GetValueTypeName(JSONValueType type) | File: ../Resource/JSONValue.h
    engine->SetDefaultNamespace("JSONValue");
    engine->RegisterGlobalFunction("String GetValueTypeName(JSONValueType)", AS_FUNCTIONPR(JSONValue::GetValueTypeName, (JSONValueType), String), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_JSONValue
    REGISTER_MANUAL_PART_JSONValue(JSONValue, "JSONValue")
#endif

    // JoystickState& JoystickState::operator=(const JoystickState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<JoystickState>(engine, "JoystickState");
    engine->RegisterObjectBehaviour("JoystickState", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("JoystickState", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_JoystickState
    REGISTER_MANUAL_PART_JoystickState(JoystickState, "JoystickState")
#endif

}

}
