// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

// class AbstractFile | File: ../IO/AbstractFile.h
static void Register_AbstractFile(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AbstractFile(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AbstractFile";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct AllocatorBlock | File: ../Container/Allocator.h
static void Register_AllocatorBlock(asIScriptEngine* engine)
{
    // AllocatorBlock::~AllocatorBlock() | Implicitly-declared
    engine->RegisterObjectBehaviour("AllocatorBlock", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AllocatorBlock), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AllocatorBlock(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AllocatorBlock";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct AllocatorNode | File: ../Container/Allocator.h
static void Register_AllocatorNode(asIScriptEngine* engine)
{
    // AllocatorNode::~AllocatorNode() | Implicitly-declared
    engine->RegisterObjectBehaviour("AllocatorNode", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AllocatorNode), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AllocatorNode(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AllocatorNode";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Animatable | File: ../Scene/Animatable.h
static void Register_Animatable(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Animatable(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Animatable";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class AnimatedModel | File: ../Graphics/AnimatedModel.h
static void Register_AnimatedModel(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AnimatedModel(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AnimatedModel";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Animation | File: ../Graphics/Animation.h
static void Register_Animation(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Animation(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Animation";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct AnimationControl | File: ../Graphics/AnimationController.h
static void Register_AnimationControl(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AnimationControl(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AnimationControl";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class AnimationController | File: ../Graphics/AnimationController.h
static void Register_AnimationController(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AnimationController(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AnimationController";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct AnimationKeyFrame | File: ../Graphics/Animation.h
static void Register_AnimationKeyFrame(asIScriptEngine* engine)
{
    // AnimationKeyFrame::~AnimationKeyFrame() | Implicitly-declared
    engine->RegisterObjectBehaviour("AnimationKeyFrame", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AnimationKeyFrame), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AnimationKeyFrame(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AnimationKeyFrame";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class AnimationState | File: ../Graphics/AnimationState.h
static void Register_AnimationState(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AnimationState(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AnimationState";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct AnimationStateTrack | File: ../Graphics/AnimationState.h
static void Register_AnimationStateTrack(asIScriptEngine* engine)
{
    // AnimationStateTrack::~AnimationStateTrack()
    engine->RegisterObjectBehaviour("AnimationStateTrack", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AnimationStateTrack), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AnimationStateTrack(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AnimationStateTrack";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct AnimationTrack | File: ../Graphics/Animation.h
static void Register_AnimationTrack(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AnimationTrack(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AnimationTrack";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct AnimationTriggerPoint | File: ../Graphics/Animation.h
static void Register_AnimationTriggerPoint(asIScriptEngine* engine)
{
    // AnimationTriggerPoint::~AnimationTriggerPoint() | Implicitly-declared
    engine->RegisterObjectBehaviour("AnimationTriggerPoint", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AnimationTriggerPoint), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AnimationTriggerPoint(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AnimationTriggerPoint";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class AreaAllocator | File: ../Math/AreaAllocator.h
static void Register_AreaAllocator(asIScriptEngine* engine)
{
    // AreaAllocator::~AreaAllocator() | Implicitly-declared
    engine->RegisterObjectBehaviour("AreaAllocator", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AreaAllocator), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AreaAllocator(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AreaAllocator";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct AsyncProgress | File: ../Scene/Scene.h
static void Register_AsyncProgress(asIScriptEngine* engine)
{
    // AsyncProgress::~AsyncProgress() | Implicitly-declared
    engine->RegisterObjectBehaviour("AsyncProgress", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AsyncProgress), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AsyncProgress(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AsyncProgress";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class AttributeAccessor | File: ../Core/Attribute.h
static void Register_AttributeAccessor(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AttributeAccessor(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AttributeAccessor";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class AttributeAnimationInfo | File: ../Scene/Animatable.h
static void Register_AttributeAnimationInfo(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AttributeAnimationInfo(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AttributeAnimationInfo";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct AttributeInfo | File: ../Core/Attribute.h
static void Register_AttributeInfo(asIScriptEngine* engine)
{
    // AttributeInfo::~AttributeInfo() | Implicitly-declared
    engine->RegisterObjectBehaviour("AttributeInfo", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AttributeInfo), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AttributeInfo(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AttributeInfo";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Audio | File: ../Audio/Audio.h
static void Register_Audio(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Audio(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Audio";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct BackgroundLoadItem | File: ../Resource/BackgroundLoader.h
static void Register_BackgroundLoadItem(asIScriptEngine* engine)
{
    // BackgroundLoadItem::~BackgroundLoadItem() | Implicitly-declared
    engine->RegisterObjectBehaviour("BackgroundLoadItem", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(BackgroundLoadItem), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_BackgroundLoadItem(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "BackgroundLoadItem";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct Batch | File: ../Graphics/Batch.h
static void Register_Batch(asIScriptEngine* engine)
{
    // Batch::~Batch() | Implicitly-declared
    engine->RegisterObjectBehaviour("Batch", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Batch), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Batch(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Batch";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct BatchGroup | File: ../Graphics/Batch.h
static void Register_BatchGroup(asIScriptEngine* engine)
{
    // BatchGroup::~BatchGroup()=default
    engine->RegisterObjectBehaviour("BatchGroup", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(BatchGroup), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_BatchGroup(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "BatchGroup";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct BatchGroupKey | File: ../Graphics/Batch.h
static void Register_BatchGroupKey(asIScriptEngine* engine)
{
    // BatchGroupKey::~BatchGroupKey() | Implicitly-declared
    engine->RegisterObjectBehaviour("BatchGroupKey", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(BatchGroupKey), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_BatchGroupKey(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "BatchGroupKey";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct BatchQueue | File: ../Graphics/Batch.h
static void Register_BatchQueue(asIScriptEngine* engine)
{
    // BatchQueue::~BatchQueue() | Implicitly-declared
    engine->RegisterObjectBehaviour("BatchQueue", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(BatchQueue), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_BatchQueue(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "BatchQueue";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct BiasParameters | File: ../Graphics/Light.h
static void Register_BiasParameters(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_BiasParameters(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "BiasParameters";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct Billboard | File: ../Graphics/BillboardSet.h
static void Register_Billboard(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Billboard(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Billboard";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class BillboardSet | File: ../Graphics/BillboardSet.h
static void Register_BillboardSet(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_BillboardSet(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "BillboardSet";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct Bone | File: ../Graphics/Skeleton.h
static void Register_Bone(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Bone(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Bone";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class BorderImage | File: ../UI/BorderImage.h
static void Register_BorderImage(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_BorderImage(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "BorderImage";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class BoundingBox | File: ../Math/BoundingBox.h
static void Register_BoundingBox(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_BoundingBox(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "BoundingBox";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class BufferedSoundStream | File: ../Audio/BufferedSoundStream.h
static void Register_BufferedSoundStream(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_BufferedSoundStream(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "BufferedSoundStream";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Button | File: ../UI/Button.h
static void Register_Button(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Button(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Button";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Camera | File: ../Graphics/Camera.h
static void Register_Camera(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Camera(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Camera";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct CascadeParameters | File: ../Graphics/Light.h
static void Register_CascadeParameters(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CascadeParameters(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CascadeParameters";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct CharLocation | File: ../UI/Text.h
static void Register_CharLocation(asIScriptEngine* engine)
{
    // CharLocation::~CharLocation() | Implicitly-declared
    engine->RegisterObjectBehaviour("CharLocation", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(CharLocation), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CharLocation(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CharLocation";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class CheckBox | File: ../UI/CheckBox.h
static void Register_CheckBox(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CheckBox(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CheckBox";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Color | File: ../Math/Color.h
static void Register_Color(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Color(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Color";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ColorFrame | File: ../Graphics/ParticleEffect.h
static void Register_ColorFrame(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ColorFrame(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ColorFrame";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Component | File: ../Scene/Component.h
static void Register_Component(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Component";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ComponentReplicationState | File: ../Scene/ReplicationState.h
static void Register_ComponentReplicationState(asIScriptEngine* engine)
{
    // ComponentReplicationState::~ComponentReplicationState() | Implicitly-declared
    engine->RegisterObjectBehaviour("ComponentReplicationState", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ComponentReplicationState), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ComponentReplicationState(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ComponentReplicationState";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct CompressedLevel | File: ../Resource/Image.h
static void Register_CompressedLevel(asIScriptEngine* engine)
{
    // CompressedLevel::~CompressedLevel() | Implicitly-declared
    engine->RegisterObjectBehaviour("CompressedLevel", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(CompressedLevel), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CompressedLevel(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CompressedLevel";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Condition | File: ../Core/Condition.h
static void Register_Condition(asIScriptEngine* engine)
{
    // Condition::~Condition()
    engine->RegisterObjectBehaviour("Condition", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Condition), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Condition(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Condition";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Console | File: ../Engine/Console.h
static void Register_Console(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Console(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Console";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstantBuffer | File: ../Graphics/ConstantBuffer.h
static void Register_ConstantBuffer(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstantBuffer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstantBuffer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Context | File: ../Core/Context.h
static void Register_Context(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Context(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Context";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Controls | File: ../Input/Controls.h
static void Register_Controls(asIScriptEngine* engine)
{
    // Controls::~Controls()
    engine->RegisterObjectBehaviour("Controls", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Controls), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Controls(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Controls";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Cursor | File: ../UI/Cursor.h
static void Register_Cursor(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Cursor(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Cursor";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct CursorShapeInfo | File: ../UI/Cursor.h
static void Register_CursorShapeInfo(asIScriptEngine* engine)
{
    // CursorShapeInfo::~CursorShapeInfo() | Implicitly-declared
    engine->RegisterObjectBehaviour("CursorShapeInfo", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(CursorShapeInfo), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CursorShapeInfo(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CursorShapeInfo";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class CustomGeometry | File: ../Graphics/CustomGeometry.h
static void Register_CustomGeometry(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CustomGeometry(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CustomGeometry";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct CustomGeometryVertex | File: ../Graphics/CustomGeometry.h
static void Register_CustomGeometryVertex(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CustomGeometryVertex(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CustomGeometryVertex";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class DebugHud | File: ../Engine/DebugHud.h
static void Register_DebugHud(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DebugHud(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DebugHud";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct DebugLine | File: ../Graphics/DebugRenderer.h
static void Register_DebugLine(asIScriptEngine* engine)
{
    // DebugLine::~DebugLine() | Implicitly-declared
    engine->RegisterObjectBehaviour("DebugLine", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(DebugLine), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DebugLine(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DebugLine";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class DebugRenderer | File: ../Graphics/DebugRenderer.h
static void Register_DebugRenderer(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DebugRenderer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DebugRenderer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct DebugTriangle | File: ../Graphics/DebugRenderer.h
static void Register_DebugTriangle(asIScriptEngine* engine)
{
    // DebugTriangle::~DebugTriangle() | Implicitly-declared
    engine->RegisterObjectBehaviour("DebugTriangle", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(DebugTriangle), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DebugTriangle(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DebugTriangle";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct Decal | File: ../Graphics/DecalSet.h
static void Register_Decal(asIScriptEngine* engine)
{
    // Decal::~Decal() | Implicitly-declared
    engine->RegisterObjectBehaviour("Decal", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Decal), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Decal(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Decal";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class DecalSet | File: ../Graphics/DecalSet.h
static void Register_DecalSet(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DecalSet(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DecalSet";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct DecalVertex | File: ../Graphics/DecalSet.h
static void Register_DecalVertex(asIScriptEngine* engine)
{
    // DecalVertex::~DecalVertex() | Implicitly-declared
    engine->RegisterObjectBehaviour("DecalVertex", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(DecalVertex), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DecalVertex(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DecalVertex";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct DepthValue | File: ../Graphics/OcclusionBuffer.h
static void Register_DepthValue(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DepthValue(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DepthValue";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Deserializer | File: ../IO/Deserializer.h
static void Register_Deserializer(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Deserializer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Deserializer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct DirtyBits | File: ../Scene/ReplicationState.h
static void Register_DirtyBits(asIScriptEngine* engine)
{
    // DirtyBits::~DirtyBits() | Implicitly-declared
    engine->RegisterObjectBehaviour("DirtyBits", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(DirtyBits), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DirtyBits(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DirtyBits";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Drawable | File: ../Graphics/Drawable.h
static void Register_Drawable(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Drawable(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Drawable";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class DropDownList | File: ../UI/DropDownList.h
static void Register_DropDownList(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DropDownList(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DropDownList";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Engine | File: ../Engine/Engine.h
static void Register_Engine(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Engine(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Engine";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class EventProfiler | File: ../Core/EventProfiler.h
static void Register_EventProfiler(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_EventProfiler(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "EventProfiler";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class EventReceiverGroup | File: ../Core/Context.h
static void Register_EventReceiverGroup(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_EventReceiverGroup(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "EventReceiverGroup";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class File | File: ../IO/File.h
static void Register_File(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_File(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "File";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class FileSelector | File: ../UI/FileSelector.h
static void Register_FileSelector(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_FileSelector(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "FileSelector";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct FileSelectorEntry | File: ../UI/FileSelector.h
static void Register_FileSelectorEntry(asIScriptEngine* engine)
{
    // FileSelectorEntry::~FileSelectorEntry() | Implicitly-declared
    engine->RegisterObjectBehaviour("FileSelectorEntry", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(FileSelectorEntry), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_FileSelectorEntry(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "FileSelectorEntry";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class FileSystem | File: ../IO/FileSystem.h
static void Register_FileSystem(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_FileSystem(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "FileSystem";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class FileWatcher | File: ../IO/FileWatcher.h
static void Register_FileWatcher(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_FileWatcher(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "FileWatcher";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct FocusParameters | File: ../Graphics/Light.h
static void Register_FocusParameters(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_FocusParameters(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "FocusParameters";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Font | File: ../UI/Font.h
static void Register_Font(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Font(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Font";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class FontFace | File: ../UI/FontFace.h
static void Register_FontFace(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_FontFace(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "FontFace";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class FontFaceBitmap | File: ../UI/FontFaceBitmap.h
static void Register_FontFaceBitmap(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_FontFaceBitmap(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "FontFaceBitmap";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class FontFaceFreeType | File: ../UI/FontFaceFreeType.h
static void Register_FontFaceFreeType(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_FontFaceFreeType(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "FontFaceFreeType";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct FontGlyph | File: ../UI/FontFace.h
static void Register_FontGlyph(asIScriptEngine* engine)
{
    // FontGlyph::~FontGlyph() | Implicitly-declared
    engine->RegisterObjectBehaviour("FontGlyph", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(FontGlyph), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_FontGlyph(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "FontGlyph";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct FrameInfo | File: ../Graphics/Drawable.h
static void Register_FrameInfo(asIScriptEngine* engine)
{
    // FrameInfo::~FrameInfo() | Implicitly-declared
    engine->RegisterObjectBehaviour("FrameInfo", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(FrameInfo), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_FrameInfo(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "FrameInfo";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Frustum | File: ../Math/Frustum.h
static void Register_Frustum(asIScriptEngine* engine)
{
    // Frustum::~Frustum() | Implicitly-declared
    engine->RegisterObjectBehaviour("Frustum", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Frustum), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Frustum(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Frustum";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class GPUObject | File: ../Graphics/GPUObject.h
static void Register_GPUObject(asIScriptEngine* engine)
{
    // virtual GPUObject::~GPUObject()
    engine->RegisterObjectBehaviour("GPUObject", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(GPUObject), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_GPUObject(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "GPUObject";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Geometry | File: ../Graphics/Geometry.h
static void Register_Geometry(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Geometry(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Geometry";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct GeometryDesc | File: ../Graphics/Model.h
static void Register_GeometryDesc(asIScriptEngine* engine)
{
    // GeometryDesc::~GeometryDesc() | Implicitly-declared
    engine->RegisterObjectBehaviour("GeometryDesc", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(GeometryDesc), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_GeometryDesc(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "GeometryDesc";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Graphics | File: ../Graphics/Graphics.h
static void Register_Graphics(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Graphics(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Graphics";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class HashBase | File: ../Container/HashBase.h
static void Register_HashBase(asIScriptEngine* engine)
{
    // HashBase::~HashBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("HashBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(HashBase), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_HashBase(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "HashBase";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct HashIteratorBase | File: ../Container/HashBase.h
static void Register_HashIteratorBase(asIScriptEngine* engine)
{
    // HashIteratorBase::~HashIteratorBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("HashIteratorBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(HashIteratorBase), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_HashIteratorBase(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "HashIteratorBase";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct HashNodeBase | File: ../Container/HashBase.h
static void Register_HashNodeBase(asIScriptEngine* engine)
{
    // HashNodeBase::~HashNodeBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("HashNodeBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(HashNodeBase), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_HashNodeBase(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "HashNodeBase";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class HiresTimer | File: ../Core/Timer.h
static void Register_HiresTimer(asIScriptEngine* engine)
{
    // HiresTimer::~HiresTimer() | Implicitly-declared
    engine->RegisterObjectBehaviour("HiresTimer", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(HiresTimer), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_HiresTimer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "HiresTimer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Image | File: ../Resource/Image.h
static void Register_Image(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Image(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Image";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class IndexBuffer | File: ../Graphics/IndexBuffer.h
static void Register_IndexBuffer(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_IndexBuffer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "IndexBuffer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct IndexBufferDesc | File: ../Graphics/Model.h
static void Register_IndexBufferDesc(asIScriptEngine* engine)
{
    // IndexBufferDesc::~IndexBufferDesc() | Implicitly-declared
    engine->RegisterObjectBehaviour("IndexBufferDesc", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(IndexBufferDesc), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_IndexBufferDesc(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "IndexBufferDesc";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Input | File: ../Input/Input.h
static void Register_Input(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Input(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Input";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct InstanceData | File: ../Graphics/Batch.h
static void Register_InstanceData(asIScriptEngine* engine)
{
    // InstanceData::~InstanceData() | Implicitly-declared
    engine->RegisterObjectBehaviour("InstanceData", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(InstanceData), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_InstanceData(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "InstanceData";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class IntRect | File: ../Math/Rect.h
static void Register_IntRect(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_IntRect(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "IntRect";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class IntVector2 | File: ../Math/Vector2.h
static void Register_IntVector2(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_IntVector2(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "IntVector2";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class IntVector3 | File: ../Math/Vector3.h
static void Register_IntVector3(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_IntVector3(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "IntVector3";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class JSONFile | File: ../Resource/JSONFile.h
static void Register_JSONFile(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_JSONFile(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "JSONFile";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class JSONValue | File: ../Resource/JSONValue.h
static void Register_JSONValue(asIScriptEngine* engine)
{
    // JSONValue::~JSONValue()
    engine->RegisterObjectBehaviour("JSONValue", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(JSONValue), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_JSONValue(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "JSONValue";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct JoystickState | File: ../Input/Input.h
static void Register_JoystickState(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_JoystickState(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "JoystickState";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Light | File: ../Graphics/Light.h
static void Register_Light(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Light(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Light";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct LightBatchQueue | File: ../Graphics/Batch.h
static void Register_LightBatchQueue(asIScriptEngine* engine)
{
    // LightBatchQueue::~LightBatchQueue() | Implicitly-declared
    engine->RegisterObjectBehaviour("LightBatchQueue", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(LightBatchQueue), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_LightBatchQueue(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "LightBatchQueue";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct LightQueryResult | File: ../Graphics/View.h
static void Register_LightQueryResult(asIScriptEngine* engine)
{
    // LightQueryResult::~LightQueryResult() | Implicitly-declared
    engine->RegisterObjectBehaviour("LightQueryResult", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(LightQueryResult), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_LightQueryResult(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "LightQueryResult";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class LineEdit | File: ../UI/LineEdit.h
static void Register_LineEdit(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_LineEdit(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "LineEdit";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct LinkedListNode | File: ../Container/LinkedList.h
static void Register_LinkedListNode(asIScriptEngine* engine)
{
    // LinkedListNode::~LinkedListNode() | Implicitly-declared
    engine->RegisterObjectBehaviour("LinkedListNode", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(LinkedListNode), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_LinkedListNode(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "LinkedListNode";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ListBase | File: ../Container/ListBase.h
static void Register_ListBase(asIScriptEngine* engine)
{
    // ListBase::~ListBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("ListBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ListBase), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ListBase(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ListBase";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ListIteratorBase | File: ../Container/ListBase.h
static void Register_ListIteratorBase(asIScriptEngine* engine)
{
    // ListIteratorBase::~ListIteratorBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("ListIteratorBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ListIteratorBase), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ListIteratorBase(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ListIteratorBase";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ListNodeBase | File: ../Container/ListBase.h
static void Register_ListNodeBase(asIScriptEngine* engine)
{
    // ListNodeBase::~ListNodeBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("ListNodeBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ListNodeBase), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ListNodeBase(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ListNodeBase";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ListView | File: ../UI/ListView.h
static void Register_ListView(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ListView(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ListView";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Localization | File: ../Resource/Localization.h
static void Register_Localization(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Localization(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Localization";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Log | File: ../IO/Log.h
static void Register_Log(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Log(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Log";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class LogicComponent | File: ../Scene/LogicComponent.h
static void Register_LogicComponent(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_LogicComponent(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "LogicComponent";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Material | File: ../Graphics/Material.h
static void Register_Material(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Material(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Material";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct MaterialShaderParameter | File: ../Graphics/Material.h
static void Register_MaterialShaderParameter(asIScriptEngine* engine)
{
    // MaterialShaderParameter::~MaterialShaderParameter() | Implicitly-declared
    engine->RegisterObjectBehaviour("MaterialShaderParameter", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(MaterialShaderParameter), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_MaterialShaderParameter(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "MaterialShaderParameter";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Matrix2 | File: ../Math/Matrix2.h
static void Register_Matrix2(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Matrix2(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Matrix2";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Matrix3 | File: ../Math/Matrix3.h
static void Register_Matrix3(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Matrix3(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Matrix3";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Matrix3x4 | File: ../Math/Matrix3x4.h
static void Register_Matrix3x4(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Matrix3x4(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Matrix3x4";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Matrix4 | File: ../Math/Matrix4.h
static void Register_Matrix4(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Matrix4(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Matrix4";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Menu | File: ../UI/Menu.h
static void Register_Menu(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Menu(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Menu";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class MessageBox | File: ../UI/MessageBox.h
static void Register_MessageBox(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_MessageBox(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "MessageBox";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Model | File: ../Graphics/Model.h
static void Register_Model(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Model(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Model";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ModelMorph | File: ../Graphics/Model.h
static void Register_ModelMorph(asIScriptEngine* engine)
{
    // ModelMorph::~ModelMorph() | Implicitly-declared
    engine->RegisterObjectBehaviour("ModelMorph", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ModelMorph), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ModelMorph(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ModelMorph";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Mutex | File: ../Core/Mutex.h
static void Register_Mutex(asIScriptEngine* engine)
{
    // Mutex::~Mutex()
    engine->RegisterObjectBehaviour("Mutex", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Mutex), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Mutex(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Mutex";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class MutexLock | File: ../Core/Mutex.h
static void Register_MutexLock(asIScriptEngine* engine)
{
    // MutexLock::~MutexLock()
    engine->RegisterObjectBehaviour("MutexLock", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(MutexLock), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_MutexLock(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "MutexLock";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class NamedPipe | File: ../IO/NamedPipe.h
static void Register_NamedPipe(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NamedPipe(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NamedPipe";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct NetworkState | File: ../Scene/ReplicationState.h
static void Register_NetworkState(asIScriptEngine* engine)
{
    // NetworkState::~NetworkState() | Implicitly-declared
    engine->RegisterObjectBehaviour("NetworkState", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NetworkState), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NetworkState(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NetworkState";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Node | File: ../Scene/Node.h
static void Register_Node(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Node(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Node";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct NodeImpl | File: ../Scene/Node.h
static void Register_NodeImpl(asIScriptEngine* engine)
{
    // NodeImpl::~NodeImpl() | Implicitly-declared
    engine->RegisterObjectBehaviour("NodeImpl", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NodeImpl), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NodeImpl(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NodeImpl";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct NodeReplicationState | File: ../Scene/ReplicationState.h
static void Register_NodeReplicationState(asIScriptEngine* engine)
{
    // NodeReplicationState::~NodeReplicationState() | Implicitly-declared
    engine->RegisterObjectBehaviour("NodeReplicationState", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NodeReplicationState), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NodeReplicationState(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NodeReplicationState";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Object | File: ../Core/Object.h
static void Register_Object(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Object(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Object";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ObjectAnimation | File: ../Scene/ObjectAnimation.h
static void Register_ObjectAnimation(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ObjectAnimation(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ObjectAnimation";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ObjectFactory | File: ../Core/Object.h
static void Register_ObjectFactory(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ObjectFactory(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ObjectFactory";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct OcclusionBatch | File: ../Graphics/OcclusionBuffer.h
static void Register_OcclusionBatch(asIScriptEngine* engine)
{
    // OcclusionBatch::~OcclusionBatch() | Implicitly-declared
    engine->RegisterObjectBehaviour("OcclusionBatch", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(OcclusionBatch), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_OcclusionBatch(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "OcclusionBatch";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class OcclusionBuffer | File: ../Graphics/OcclusionBuffer.h
static void Register_OcclusionBuffer(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_OcclusionBuffer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "OcclusionBuffer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct OcclusionBufferData | File: ../Graphics/OcclusionBuffer.h
static void Register_OcclusionBufferData(asIScriptEngine* engine)
{
    // OcclusionBufferData::~OcclusionBufferData() | Implicitly-declared
    engine->RegisterObjectBehaviour("OcclusionBufferData", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(OcclusionBufferData), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_OcclusionBufferData(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "OcclusionBufferData";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Octree | File: ../Graphics/Octree.h
static void Register_Octree(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Octree(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Octree";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct OctreeQueryResult | File: ../Graphics/OctreeQuery.h
static void Register_OctreeQueryResult(asIScriptEngine* engine)
{
    // OctreeQueryResult::~OctreeQueryResult() | Implicitly-declared
    engine->RegisterObjectBehaviour("OctreeQueryResult", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(OctreeQueryResult), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_OctreeQueryResult(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "OctreeQueryResult";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class OggVorbisSoundStream | File: ../Audio/OggVorbisSoundStream.h
static void Register_OggVorbisSoundStream(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_OggVorbisSoundStream(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "OggVorbisSoundStream";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct PackageEntry | File: ../IO/PackageFile.h
static void Register_PackageEntry(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PackageEntry(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PackageEntry";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class PackageFile | File: ../IO/PackageFile.h
static void Register_PackageFile(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PackageFile(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PackageFile";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct Particle | File: ../Graphics/ParticleEmitter.h
static void Register_Particle(asIScriptEngine* engine)
{
    // Particle::~Particle() | Implicitly-declared
    engine->RegisterObjectBehaviour("Particle", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Particle), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Particle(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Particle";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ParticleEffect | File: ../Graphics/ParticleEffect.h
static void Register_ParticleEffect(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ParticleEffect(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ParticleEffect";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ParticleEmitter | File: ../Graphics/ParticleEmitter.h
static void Register_ParticleEmitter(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ParticleEmitter(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ParticleEmitter";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Pass | File: ../Graphics/Technique.h
static void Register_Pass(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Pass(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Pass";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct PerThreadSceneResult | File: ../Graphics/View.h
static void Register_PerThreadSceneResult(asIScriptEngine* engine)
{
    // PerThreadSceneResult::~PerThreadSceneResult() | Implicitly-declared
    engine->RegisterObjectBehaviour("PerThreadSceneResult", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PerThreadSceneResult), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PerThreadSceneResult(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PerThreadSceneResult";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Plane | File: ../Math/Plane.h
static void Register_Plane(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Plane(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Plane";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Polyhedron | File: ../Math/Polyhedron.h
static void Register_Polyhedron(asIScriptEngine* engine)
{
    // Polyhedron::~Polyhedron() noexcept=default
    engine->RegisterObjectBehaviour("Polyhedron", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Polyhedron), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Polyhedron(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Polyhedron";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Profiler | File: ../Core/Profiler.h
static void Register_Profiler(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Profiler(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Profiler";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ProgressBar | File: ../UI/ProgressBar.h
static void Register_ProgressBar(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ProgressBar(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ProgressBar";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Quaternion | File: ../Math/Quaternion.h
static void Register_Quaternion(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Quaternion(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Quaternion";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Ray | File: ../Math/Ray.h
static void Register_Ray(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Ray(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Ray";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct RayQueryResult | File: ../Graphics/OctreeQuery.h
static void Register_RayQueryResult(asIScriptEngine* engine)
{
    // RayQueryResult::~RayQueryResult() | Implicitly-declared
    engine->RegisterObjectBehaviour("RayQueryResult", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(RayQueryResult), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RayQueryResult(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RayQueryResult";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Rect | File: ../Math/Rect.h
static void Register_Rect(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Rect(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Rect";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct RefCount | File: ../Container/RefCounted.h
static void Register_RefCount(asIScriptEngine* engine)
{
    // RefCount::~RefCount()
    engine->RegisterObjectBehaviour("RefCount", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(RefCount), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RefCount(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RefCount";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class RefCounted | File: ../Container/RefCounted.h
static void Register_RefCounted(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RefCounted(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RefCounted";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class RenderPath | File: ../Graphics/RenderPath.h
static void Register_RenderPath(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RenderPath(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RenderPath";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct RenderPathCommand | File: ../Graphics/RenderPath.h
static void Register_RenderPathCommand(asIScriptEngine* engine)
{
    // RenderPathCommand::~RenderPathCommand() | Implicitly-declared
    engine->RegisterObjectBehaviour("RenderPathCommand", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(RenderPathCommand), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RenderPathCommand(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RenderPathCommand";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class RenderSurface | File: ../Graphics/RenderSurface.h
static void Register_RenderSurface(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RenderSurface(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RenderSurface";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct RenderTargetInfo | File: ../Graphics/RenderPath.h
static void Register_RenderTargetInfo(asIScriptEngine* engine)
{
    // RenderTargetInfo::~RenderTargetInfo() | Implicitly-declared
    engine->RegisterObjectBehaviour("RenderTargetInfo", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(RenderTargetInfo), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RenderTargetInfo(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RenderTargetInfo";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Renderer | File: ../Graphics/Renderer.h
static void Register_Renderer(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Renderer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Renderer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ReplicationState | File: ../Scene/ReplicationState.h
static void Register_ReplicationState(asIScriptEngine* engine)
{
    // ReplicationState::~ReplicationState() | Implicitly-declared
    engine->RegisterObjectBehaviour("ReplicationState", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ReplicationState), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ReplicationState(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ReplicationState";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Resource | File: ../Resource/Resource.h
static void Register_Resource(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Resource(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Resource";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ResourceCache | File: ../Resource/ResourceCache.h
static void Register_ResourceCache(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ResourceCache(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ResourceCache";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ResourceGroup | File: ../Resource/ResourceCache.h
static void Register_ResourceGroup(asIScriptEngine* engine)
{
    // ResourceGroup::~ResourceGroup() | Implicitly-declared
    engine->RegisterObjectBehaviour("ResourceGroup", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ResourceGroup), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ResourceGroup(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ResourceGroup";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ResourceRef | File: ../Core/Variant.h
static void Register_ResourceRef(asIScriptEngine* engine)
{
    // ResourceRef::~ResourceRef() | Implicitly-declared
    engine->RegisterObjectBehaviour("ResourceRef", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ResourceRef), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ResourceRef(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ResourceRef";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ResourceRefList | File: ../Core/Variant.h
static void Register_ResourceRefList(asIScriptEngine* engine)
{
    // ResourceRefList::~ResourceRefList() | Implicitly-declared
    engine->RegisterObjectBehaviour("ResourceRefList", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ResourceRefList), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ResourceRefList(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ResourceRefList";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ResourceWithMetadata | File: ../Resource/Resource.h
static void Register_ResourceWithMetadata(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ResourceWithMetadata(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ResourceWithMetadata";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class RibbonTrail | File: ../Graphics/RibbonTrail.h
static void Register_RibbonTrail(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RibbonTrail(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RibbonTrail";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Scene | File: ../Scene/Scene.h
static void Register_Scene(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Scene(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Scene";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ScenePassInfo | File: ../Graphics/View.h
static void Register_ScenePassInfo(asIScriptEngine* engine)
{
    // ScenePassInfo::~ScenePassInfo() | Implicitly-declared
    engine->RegisterObjectBehaviour("ScenePassInfo", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ScenePassInfo), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ScenePassInfo(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ScenePassInfo";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct SceneReplicationState | File: ../Scene/ReplicationState.h
static void Register_SceneReplicationState(asIScriptEngine* engine)
{
    // SceneReplicationState::~SceneReplicationState() | Implicitly-declared
    engine->RegisterObjectBehaviour("SceneReplicationState", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(SceneReplicationState), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SceneReplicationState(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SceneReplicationState";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class SceneResolver | File: ../Scene/SceneResolver.h
static void Register_SceneResolver(asIScriptEngine* engine)
{
    // SceneResolver::~SceneResolver()
    engine->RegisterObjectBehaviour("SceneResolver", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(SceneResolver), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SceneResolver(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SceneResolver";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ScratchBuffer | File: ../Graphics/Graphics.h
static void Register_ScratchBuffer(asIScriptEngine* engine)
{
    // ScratchBuffer::~ScratchBuffer() | Implicitly-declared
    engine->RegisterObjectBehaviour("ScratchBuffer", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ScratchBuffer), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ScratchBuffer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ScratchBuffer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ScreenModeParams | File: ../Graphics/Graphics.h
static void Register_ScreenModeParams(asIScriptEngine* engine)
{
    // ScreenModeParams::~ScreenModeParams() | Implicitly-declared
    engine->RegisterObjectBehaviour("ScreenModeParams", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ScreenModeParams), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ScreenModeParams(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ScreenModeParams";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ScrollBar | File: ../UI/ScrollBar.h
static void Register_ScrollBar(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ScrollBar(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ScrollBar";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ScrollView | File: ../UI/ScrollView.h
static void Register_ScrollView(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ScrollView(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ScrollView";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Serializable | File: ../Scene/Serializable.h
static void Register_Serializable(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Serializable(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Serializable";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Serializer | File: ../IO/Serializer.h
static void Register_Serializer(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Serializer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Serializer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Shader | File: ../Graphics/Shader.h
static void Register_Shader(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Shader(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Shader";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ShaderParameter | File: ../Graphics/ShaderVariation.h
static void Register_ShaderParameter(asIScriptEngine* engine)
{
    // ShaderParameter::~ShaderParameter() | Implicitly-declared
    engine->RegisterObjectBehaviour("ShaderParameter", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ShaderParameter), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ShaderParameter(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ShaderParameter";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ShaderParameterAnimationInfo | File: ../Graphics/Material.h
static void Register_ShaderParameterAnimationInfo(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ShaderParameterAnimationInfo(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ShaderParameterAnimationInfo";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ShaderPrecache | File: ../Graphics/ShaderPrecache.h
static void Register_ShaderPrecache(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ShaderPrecache(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ShaderPrecache";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ShaderVariation | File: ../Graphics/ShaderVariation.h
static void Register_ShaderVariation(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ShaderVariation(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ShaderVariation";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ShadowBatchQueue | File: ../Graphics/Batch.h
static void Register_ShadowBatchQueue(asIScriptEngine* engine)
{
    // ShadowBatchQueue::~ShadowBatchQueue() | Implicitly-declared
    engine->RegisterObjectBehaviour("ShadowBatchQueue", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ShadowBatchQueue), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ShadowBatchQueue(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ShadowBatchQueue";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Skeleton | File: ../Graphics/Skeleton.h
static void Register_Skeleton(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Skeleton(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Skeleton";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Skybox | File: ../Graphics/Skybox.h
static void Register_Skybox(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Skybox(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Skybox";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Slider | File: ../UI/Slider.h
static void Register_Slider(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Slider(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Slider";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class SmoothedTransform | File: ../Scene/SmoothedTransform.h
static void Register_SmoothedTransform(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SmoothedTransform(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SmoothedTransform";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Sound | File: ../Audio/Sound.h
static void Register_Sound(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Sound(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Sound";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class SoundListener | File: ../Audio/SoundListener.h
static void Register_SoundListener(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SoundListener(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SoundListener";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class SoundSource | File: ../Audio/SoundSource.h
static void Register_SoundSource(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SoundSource(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SoundSource";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class SoundSource3D | File: ../Audio/SoundSource3D.h
static void Register_SoundSource3D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SoundSource3D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SoundSource3D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class SoundStream | File: ../Audio/SoundStream.h
static void Register_SoundStream(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SoundStream(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SoundStream";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct SourceBatch | File: ../Graphics/Drawable.h
static void Register_SourceBatch(asIScriptEngine* engine)
{
    // SourceBatch::~SourceBatch()
    engine->RegisterObjectBehaviour("SourceBatch", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(SourceBatch), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SourceBatch(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SourceBatch";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Sphere | File: ../Math/Sphere.h
static void Register_Sphere(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Sphere(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Sphere";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Spline | File: ../Core/Spline.h
static void Register_Spline(asIScriptEngine* engine)
{
    // Spline::~Spline() | Implicitly-declared
    engine->RegisterObjectBehaviour("Spline", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Spline), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Spline(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Spline";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class SplinePath | File: ../Scene/SplinePath.h
static void Register_SplinePath(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SplinePath(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SplinePath";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Sprite | File: ../UI/Sprite.h
static void Register_Sprite(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Sprite(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Sprite";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class StaticModel | File: ../Graphics/StaticModel.h
static void Register_StaticModel(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_StaticModel(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "StaticModel";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct StaticModelGeometryData | File: ../Graphics/StaticModel.h
static void Register_StaticModelGeometryData(asIScriptEngine* engine)
{
    // StaticModelGeometryData::~StaticModelGeometryData() | Implicitly-declared
    engine->RegisterObjectBehaviour("StaticModelGeometryData", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(StaticModelGeometryData), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_StaticModelGeometryData(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "StaticModelGeometryData";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class StaticModelGroup | File: ../Graphics/StaticModelGroup.h
static void Register_StaticModelGroup(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_StaticModelGroup(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "StaticModelGroup";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct StoredLogMessage | File: ../IO/Log.h
static void Register_StoredLogMessage(asIScriptEngine* engine)
{
    // StoredLogMessage::~StoredLogMessage() | Implicitly-declared
    engine->RegisterObjectBehaviour("StoredLogMessage", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(StoredLogMessage), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_StoredLogMessage(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "StoredLogMessage";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class String | File: ../Container/Str.h
static void Register_String(asIScriptEngine* engine)
{
    // explicit String::String(long value)
    // Not registered because have @nobind mark

    // explicit String::String(unsigned long value)
    // Not registered because have @nobind mark

    // String::~String()
    engine->RegisterObjectBehaviour("String", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(String), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_String(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "String";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class StringHash | File: ../Math/StringHash.h
static void Register_StringHash(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_StringHash(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "StringHash";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class StringHashRegister | File: ../Core/StringHashRegister.h
static void Register_StringHashRegister(asIScriptEngine* engine)
{
    // StringHashRegister::~StringHashRegister()
    engine->RegisterObjectBehaviour("StringHashRegister", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(StringHashRegister), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_StringHashRegister(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "StringHashRegister";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Technique | File: ../Graphics/Technique.h
static void Register_Technique(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Technique(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Technique";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct TechniqueEntry | File: ../Graphics/Material.h
static void Register_TechniqueEntry(asIScriptEngine* engine)
{
    // TechniqueEntry::~TechniqueEntry() noexcept=default
    engine->RegisterObjectBehaviour("TechniqueEntry", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(TechniqueEntry), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TechniqueEntry(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TechniqueEntry";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Terrain | File: ../Graphics/Terrain.h
static void Register_Terrain(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Terrain(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Terrain";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class TerrainPatch | File: ../Graphics/TerrainPatch.h
static void Register_TerrainPatch(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TerrainPatch(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TerrainPatch";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Text | File: ../UI/Text.h
static void Register_Text(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Text(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Text";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Text3D | File: ../UI/Text3D.h
static void Register_Text3D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Text3D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Text3D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Texture | File: ../Graphics/Texture.h
static void Register_Texture(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Texture(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Texture";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Texture2D | File: ../Graphics/Texture2D.h
static void Register_Texture2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Texture2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Texture2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Texture2DArray | File: ../Graphics/Texture2DArray.h
static void Register_Texture2DArray(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Texture2DArray(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Texture2DArray";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Texture3D | File: ../Graphics/Texture3D.h
static void Register_Texture3D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Texture3D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Texture3D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class TextureCube | File: ../Graphics/TextureCube.h
static void Register_TextureCube(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TextureCube(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TextureCube";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct TextureFrame | File: ../Graphics/ParticleEffect.h
static void Register_TextureFrame(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TextureFrame(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TextureFrame";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Time | File: ../Core/Timer.h
static void Register_Time(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Time(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Time";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Timer | File: ../Core/Timer.h
static void Register_Timer(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Timer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Timer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ToolTip | File: ../UI/ToolTip.h
static void Register_ToolTip(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ToolTip(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ToolTip";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct TouchState | File: ../Input/Input.h
static void Register_TouchState(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TouchState(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TouchState";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct TrailPoint | File: ../Graphics/RibbonTrail.h
static void Register_TrailPoint(asIScriptEngine* engine)
{
    // TrailPoint::~TrailPoint() | Implicitly-declared
    engine->RegisterObjectBehaviour("TrailPoint", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(TrailPoint), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TrailPoint(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TrailPoint";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class UI | File: ../UI/UI.h
static void Register_UI(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_UI(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "UI";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class UIBatch | File: ../UI/UIBatch.h
static void Register_UIBatch(asIScriptEngine* engine)
{
    // UIBatch::~UIBatch() | Implicitly-declared
    engine->RegisterObjectBehaviour("UIBatch", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(UIBatch), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_UIBatch(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "UIBatch";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class UIComponent | File: ../UI/UIComponent.h
static void Register_UIComponent(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_UIComponent(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "UIComponent";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class UIElement | File: ../UI/UIElement.h
static void Register_UIElement(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_UIElement(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "UIElement";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class UISelectable | File: ../UI/UISelectable.h
static void Register_UISelectable(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_UISelectable(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "UISelectable";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class UnknownComponent | File: ../Scene/UnknownComponent.h
static void Register_UnknownComponent(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_UnknownComponent(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "UnknownComponent";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct VAnimEventFrame | File: ../Scene/ValueAnimation.h
static void Register_VAnimEventFrame(asIScriptEngine* engine)
{
    // VAnimEventFrame::~VAnimEventFrame() | Implicitly-declared
    engine->RegisterObjectBehaviour("VAnimEventFrame", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VAnimEventFrame), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_VAnimEventFrame(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "VAnimEventFrame";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct VAnimKeyFrame | File: ../Scene/ValueAnimation.h
static void Register_VAnimKeyFrame(asIScriptEngine* engine)
{
    // VAnimKeyFrame::~VAnimKeyFrame() | Implicitly-declared
    engine->RegisterObjectBehaviour("VAnimKeyFrame", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VAnimKeyFrame), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_VAnimKeyFrame(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "VAnimKeyFrame";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ValueAnimation | File: ../Scene/ValueAnimation.h
static void Register_ValueAnimation(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ValueAnimation(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ValueAnimation";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ValueAnimationInfo | File: ../Scene/ValueAnimationInfo.h
static void Register_ValueAnimationInfo(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ValueAnimationInfo(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ValueAnimationInfo";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Variant | File: ../Core/Variant.h
static void Register_Variant(asIScriptEngine* engine)
{
    // Variant::~Variant()
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Variant), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Variant(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Variant";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Vector2 | File: ../Math/Vector2.h
static void Register_Vector2(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Vector2(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Vector2";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Vector3 | File: ../Math/Vector3.h
static void Register_Vector3(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Vector3(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Vector3";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Vector4 | File: ../Math/Vector4.h
static void Register_Vector4(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Vector4(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Vector4";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class VectorBase | File: ../Container/VectorBase.h
static void Register_VectorBase(asIScriptEngine* engine)
{
    // VectorBase::~VectorBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("VectorBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VectorBase), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_VectorBase(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "VectorBase";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class VectorBuffer | File: ../IO/VectorBuffer.h
static void Register_VectorBuffer(asIScriptEngine* engine)
{
    // VectorBuffer::~VectorBuffer() | Implicitly-declared
    engine->RegisterObjectBehaviour("VectorBuffer", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VectorBuffer), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_VectorBuffer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "VectorBuffer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class VertexBuffer | File: ../Graphics/VertexBuffer.h
static void Register_VertexBuffer(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_VertexBuffer(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "VertexBuffer";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct VertexBufferDesc | File: ../Graphics/Model.h
static void Register_VertexBufferDesc(asIScriptEngine* engine)
{
    // VertexBufferDesc::~VertexBufferDesc() | Implicitly-declared
    engine->RegisterObjectBehaviour("VertexBufferDesc", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VertexBufferDesc), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_VertexBufferDesc(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "VertexBufferDesc";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct VertexBufferMorph | File: ../Graphics/Model.h
static void Register_VertexBufferMorph(asIScriptEngine* engine)
{
    // VertexBufferMorph::~VertexBufferMorph() | Implicitly-declared
    engine->RegisterObjectBehaviour("VertexBufferMorph", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VertexBufferMorph), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_VertexBufferMorph(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "VertexBufferMorph";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct VertexElement | File: ../Graphics/GraphicsDefs.h
static void Register_VertexElement(asIScriptEngine* engine)
{
    // VertexElement::~VertexElement() | Implicitly-declared
    engine->RegisterObjectBehaviour("VertexElement", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VertexElement), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_VertexElement(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "VertexElement";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class View | File: ../Graphics/View.h
static void Register_View(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_View(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "View";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class View3D | File: ../UI/View3D.h
static void Register_View3D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_View3D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "View3D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Viewport | File: ../Graphics/Viewport.h
static void Register_Viewport(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Viewport(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Viewport";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Window | File: ../UI/Window.h
static void Register_Window(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Window(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Window";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct WindowModeParams | File: ../Graphics/Graphics.h
static void Register_WindowModeParams(asIScriptEngine* engine)
{
    // WindowModeParams::~WindowModeParams() | Implicitly-declared
    engine->RegisterObjectBehaviour("WindowModeParams", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(WindowModeParams), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_WindowModeParams(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "WindowModeParams";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class WorkQueue | File: ../Core/WorkQueue.h
static void Register_WorkQueue(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_WorkQueue(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "WorkQueue";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class XMLElement | File: ../Resource/XMLElement.h
static void Register_XMLElement(asIScriptEngine* engine)
{
    // XMLElement::~XMLElement()
    engine->RegisterObjectBehaviour("XMLElement", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(XMLElement), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_XMLElement(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "XMLElement";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class XMLFile | File: ../Resource/XMLFile.h
static void Register_XMLFile(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_XMLFile(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "XMLFile";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class XPathQuery | File: ../Resource/XMLElement.h
static void Register_XPathQuery(asIScriptEngine* engine)
{
    // XPathQuery::~XPathQuery()
    engine->RegisterObjectBehaviour("XPathQuery", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(XPathQuery), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_XPathQuery(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "XPathQuery";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class XPathResultSet | File: ../Resource/XMLElement.h
static void Register_XPathResultSet(asIScriptEngine* engine)
{
    // XPathResultSet::~XPathResultSet()
    engine->RegisterObjectBehaviour("XPathResultSet", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(XPathResultSet), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_XPathResultSet(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "XPathResultSet";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Zone | File: ../Graphics/Zone.h
static void Register_Zone(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Zone(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Zone";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

#ifdef URHO3D_DATABASE

// class Database | File: ../Database/Database.h
static void Register_Database(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Database(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Database";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

#endif // def URHO3D_DATABASE

#ifdef URHO3D_IK

// class IKConstraint | File: ../IK/IKConstraint.h
static void Register_IKConstraint(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_IKConstraint(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "IKConstraint";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class IKEffector | File: ../IK/IKEffector.h
static void Register_IKEffector(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_IKEffector(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "IKEffector";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class IKSolver | File: ../IK/IKSolver.h
static void Register_IKSolver(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_IKSolver(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "IKSolver";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

#endif // def URHO3D_IK

#ifdef URHO3D_NAVIGATION

// class CrowdAgent | File: ../Navigation/CrowdAgent.h
static void Register_CrowdAgent(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CrowdAgent(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CrowdAgent";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class CrowdManager | File: ../Navigation/CrowdManager.h
static void Register_CrowdManager(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CrowdManager(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CrowdManager";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct CrowdObstacleAvoidanceParams | File: ../Navigation/CrowdManager.h
static void Register_CrowdObstacleAvoidanceParams(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CrowdObstacleAvoidanceParams(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CrowdObstacleAvoidanceParams";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class DynamicNavigationMesh | File: ../Navigation/DynamicNavigationMesh.h
static void Register_DynamicNavigationMesh(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DynamicNavigationMesh(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DynamicNavigationMesh";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class NavArea | File: ../Navigation/NavArea.h
static void Register_NavArea(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NavArea(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NavArea";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct NavAreaStub | File: ../Navigation/NavBuildData.h
static void Register_NavAreaStub(asIScriptEngine* engine)
{
    // NavAreaStub::~NavAreaStub() | Implicitly-declared
    engine->RegisterObjectBehaviour("NavAreaStub", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NavAreaStub), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NavAreaStub(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NavAreaStub";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct NavBuildData | File: ../Navigation/NavBuildData.h
static void Register_NavBuildData(asIScriptEngine* engine)
{
    // virtual NavBuildData::~NavBuildData()
    engine->RegisterObjectBehaviour("NavBuildData", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NavBuildData), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NavBuildData(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NavBuildData";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Navigable | File: ../Navigation/Navigable.h
static void Register_Navigable(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Navigable(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Navigable";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct NavigationGeometryInfo | File: ../Navigation/NavigationMesh.h
static void Register_NavigationGeometryInfo(asIScriptEngine* engine)
{
    // NavigationGeometryInfo::~NavigationGeometryInfo() | Implicitly-declared
    engine->RegisterObjectBehaviour("NavigationGeometryInfo", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NavigationGeometryInfo), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NavigationGeometryInfo(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NavigationGeometryInfo";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class NavigationMesh | File: ../Navigation/NavigationMesh.h
static void Register_NavigationMesh(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NavigationMesh(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NavigationMesh";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct NavigationPathPoint | File: ../Navigation/NavigationMesh.h
static void Register_NavigationPathPoint(asIScriptEngine* engine)
{
    // NavigationPathPoint::~NavigationPathPoint() | Implicitly-declared
    engine->RegisterObjectBehaviour("NavigationPathPoint", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NavigationPathPoint), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NavigationPathPoint(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NavigationPathPoint";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Obstacle | File: ../Navigation/Obstacle.h
static void Register_Obstacle(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Obstacle(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Obstacle";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class OffMeshConnection | File: ../Navigation/OffMeshConnection.h
static void Register_OffMeshConnection(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_OffMeshConnection(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "OffMeshConnection";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct SimpleNavBuildData | File: ../Navigation/NavBuildData.h
static void Register_SimpleNavBuildData(asIScriptEngine* engine)
{
    // SimpleNavBuildData::~SimpleNavBuildData() override
    engine->RegisterObjectBehaviour("SimpleNavBuildData", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(SimpleNavBuildData), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SimpleNavBuildData(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SimpleNavBuildData";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

#endif // def URHO3D_NAVIGATION

#ifdef URHO3D_NETWORK

// class Connection | File: ../Network/Connection.h
static void Register_Connection(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Connection(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Connection";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class HttpRequest | File: ../Network/HttpRequest.h
static void Register_HttpRequest(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_HttpRequest(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "HttpRequest";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Network | File: ../Network/Network.h
static void Register_Network(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Network(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Network";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class NetworkPriority | File: ../Network/NetworkPriority.h
static void Register_NetworkPriority(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_NetworkPriority(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "NetworkPriority";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct PackageDownload | File: ../Network/Connection.h
static void Register_PackageDownload(asIScriptEngine* engine)
{
    // PackageDownload::~PackageDownload() | Implicitly-declared
    engine->RegisterObjectBehaviour("PackageDownload", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PackageDownload), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PackageDownload(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PackageDownload";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct PackageUpload | File: ../Network/Connection.h
static void Register_PackageUpload(asIScriptEngine* engine)
{
    // PackageUpload::~PackageUpload() | Implicitly-declared
    engine->RegisterObjectBehaviour("PackageUpload", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PackageUpload), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PackageUpload(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PackageUpload";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct RemoteEvent | File: ../Network/Connection.h
static void Register_RemoteEvent(asIScriptEngine* engine)
{
    // RemoteEvent::~RemoteEvent() | Implicitly-declared
    engine->RegisterObjectBehaviour("RemoteEvent", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(RemoteEvent), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RemoteEvent(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RemoteEvent";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

#endif // def URHO3D_NETWORK

#ifdef URHO3D_PHYSICS

// struct CollisionGeometryData | File: ../Physics/CollisionShape.h
static void Register_CollisionGeometryData(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CollisionGeometryData(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CollisionGeometryData";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class CollisionShape | File: ../Physics/CollisionShape.h
static void Register_CollisionShape(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CollisionShape(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CollisionShape";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Constraint | File: ../Physics/Constraint.h
static void Register_Constraint(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Constraint(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Constraint";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ConvexData | File: ../Physics/CollisionShape.h
static void Register_ConvexData(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConvexData(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConvexData";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct DelayedWorldTransform | File: ../Physics/PhysicsWorld.h
static void Register_DelayedWorldTransform(asIScriptEngine* engine)
{
    // DelayedWorldTransform::~DelayedWorldTransform() | Implicitly-declared
    engine->RegisterObjectBehaviour("DelayedWorldTransform", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(DelayedWorldTransform), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DelayedWorldTransform(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DelayedWorldTransform";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct GImpactMeshData | File: ../Physics/CollisionShape.h
static void Register_GImpactMeshData(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_GImpactMeshData(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "GImpactMeshData";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct HeightfieldData | File: ../Physics/CollisionShape.h
static void Register_HeightfieldData(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_HeightfieldData(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "HeightfieldData";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct ManifoldPair | File: ../Physics/PhysicsWorld.h
static void Register_ManifoldPair(asIScriptEngine* engine)
{
    // ManifoldPair::~ManifoldPair() | Implicitly-declared
    engine->RegisterObjectBehaviour("ManifoldPair", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ManifoldPair), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ManifoldPair(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ManifoldPair";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct PhysicsRaycastResult | File: ../Physics/PhysicsWorld.h
static void Register_PhysicsRaycastResult(asIScriptEngine* engine)
{
    // PhysicsRaycastResult::~PhysicsRaycastResult() | Implicitly-declared
    engine->RegisterObjectBehaviour("PhysicsRaycastResult", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PhysicsRaycastResult), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PhysicsRaycastResult(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PhysicsRaycastResult";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class PhysicsWorld | File: ../Physics/PhysicsWorld.h
static void Register_PhysicsWorld(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PhysicsWorld(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PhysicsWorld";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct PhysicsWorldConfig | File: ../Physics/PhysicsWorld.h
static void Register_PhysicsWorldConfig(asIScriptEngine* engine)
{
    // PhysicsWorldConfig::~PhysicsWorldConfig() | Implicitly-declared
    engine->RegisterObjectBehaviour("PhysicsWorldConfig", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PhysicsWorldConfig), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PhysicsWorldConfig(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PhysicsWorldConfig";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class RaycastVehicle | File: ../Physics/RaycastVehicle.h
static void Register_RaycastVehicle(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RaycastVehicle(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RaycastVehicle";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class RigidBody | File: ../Physics/RigidBody.h
static void Register_RigidBody(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RigidBody(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RigidBody";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct TriangleMeshData | File: ../Physics/CollisionShape.h
static void Register_TriangleMeshData(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TriangleMeshData(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TriangleMeshData";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

#endif // def URHO3D_PHYSICS

#ifdef URHO3D_URHO2D

// class AnimatedSprite2D | File: ../Urho2D/AnimatedSprite2D.h
static void Register_AnimatedSprite2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AnimatedSprite2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AnimatedSprite2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class AnimationSet2D | File: ../Urho2D/AnimationSet2D.h
static void Register_AnimationSet2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_AnimationSet2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "AnimationSet2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class CollisionBox2D | File: ../Urho2D/CollisionBox2D.h
static void Register_CollisionBox2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CollisionBox2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CollisionBox2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class CollisionChain2D | File: ../Urho2D/CollisionChain2D.h
static void Register_CollisionChain2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CollisionChain2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CollisionChain2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class CollisionCircle2D | File: ../Urho2D/CollisionCircle2D.h
static void Register_CollisionCircle2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CollisionCircle2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CollisionCircle2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class CollisionEdge2D | File: ../Urho2D/CollisionEdge2D.h
static void Register_CollisionEdge2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CollisionEdge2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CollisionEdge2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class CollisionPolygon2D | File: ../Urho2D/CollisionPolygon2D.h
static void Register_CollisionPolygon2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CollisionPolygon2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CollisionPolygon2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class CollisionShape2D | File: ../Urho2D/CollisionShape2D.h
static void Register_CollisionShape2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_CollisionShape2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "CollisionShape2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Constraint2D | File: ../Urho2D/Constraint2D.h
static void Register_Constraint2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Constraint2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Constraint2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintDistance2D | File: ../Urho2D/ConstraintDistance2D.h
static void Register_ConstraintDistance2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintDistance2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintDistance2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintFriction2D | File: ../Urho2D/ConstraintFriction2D.h
static void Register_ConstraintFriction2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintFriction2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintFriction2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintGear2D | File: ../Urho2D/ConstraintGear2D.h
static void Register_ConstraintGear2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintGear2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintGear2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintMotor2D | File: ../Urho2D/ConstraintMotor2D.h
static void Register_ConstraintMotor2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintMotor2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintMotor2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintMouse2D | File: ../Urho2D/ConstraintMouse2D.h
static void Register_ConstraintMouse2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintMouse2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintMouse2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintPrismatic2D | File: ../Urho2D/ConstraintPrismatic2D.h
static void Register_ConstraintPrismatic2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintPrismatic2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintPrismatic2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintPulley2D | File: ../Urho2D/ConstraintPulley2D.h
static void Register_ConstraintPulley2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintPulley2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintPulley2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintRevolute2D | File: ../Urho2D/ConstraintRevolute2D.h
static void Register_ConstraintRevolute2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintRevolute2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintRevolute2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintRope2D | File: ../Urho2D/ConstraintRope2D.h
static void Register_ConstraintRope2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintRope2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintRope2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintWeld2D | File: ../Urho2D/ConstraintWeld2D.h
static void Register_ConstraintWeld2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintWeld2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintWeld2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ConstraintWheel2D | File: ../Urho2D/ConstraintWheel2D.h
static void Register_ConstraintWheel2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ConstraintWheel2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ConstraintWheel2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct DelayedWorldTransform2D | File: ../Urho2D/PhysicsWorld2D.h
static void Register_DelayedWorldTransform2D(asIScriptEngine* engine)
{
    // DelayedWorldTransform2D::~DelayedWorldTransform2D() | Implicitly-declared
    engine->RegisterObjectBehaviour("DelayedWorldTransform2D", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(DelayedWorldTransform2D), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_DelayedWorldTransform2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "DelayedWorldTransform2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Drawable2D | File: ../Urho2D/Drawable2D.h
static void Register_Drawable2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Drawable2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Drawable2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct Particle2D | File: ../Urho2D/ParticleEmitter2D.h
static void Register_Particle2D(asIScriptEngine* engine)
{
    // Particle2D::~Particle2D() | Implicitly-declared
    engine->RegisterObjectBehaviour("Particle2D", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Particle2D), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Particle2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Particle2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ParticleEffect2D | File: ../Urho2D/ParticleEffect2D.h
static void Register_ParticleEffect2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ParticleEffect2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ParticleEffect2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class ParticleEmitter2D | File: ../Urho2D/ParticleEmitter2D.h
static void Register_ParticleEmitter2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_ParticleEmitter2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "ParticleEmitter2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct PhysicsRaycastResult2D | File: ../Urho2D/PhysicsWorld2D.h
static void Register_PhysicsRaycastResult2D(asIScriptEngine* engine)
{
    // PhysicsRaycastResult2D::~PhysicsRaycastResult2D() | Implicitly-declared
    engine->RegisterObjectBehaviour("PhysicsRaycastResult2D", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PhysicsRaycastResult2D), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PhysicsRaycastResult2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PhysicsRaycastResult2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class PhysicsWorld2D | File: ../Urho2D/PhysicsWorld2D.h
static void Register_PhysicsWorld2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PhysicsWorld2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PhysicsWorld2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class PropertySet2D | File: ../Urho2D/TileMapDefs2D.h
static void Register_PropertySet2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_PropertySet2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "PropertySet2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Renderer2D | File: ../Urho2D/Renderer2D.h
static void Register_Renderer2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Renderer2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Renderer2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class RigidBody2D | File: ../Urho2D/RigidBody2D.h
static void Register_RigidBody2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_RigidBody2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "RigidBody2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct SourceBatch2D | File: ../Urho2D/Drawable2D.h
static void Register_SourceBatch2D(asIScriptEngine* engine)
{
    // SourceBatch2D::~SourceBatch2D() | Implicitly-declared
    engine->RegisterObjectBehaviour("SourceBatch2D", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(SourceBatch2D), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SourceBatch2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SourceBatch2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Sprite2D | File: ../Urho2D/Sprite2D.h
static void Register_Sprite2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Sprite2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Sprite2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class SpriteSheet2D | File: ../Urho2D/SpriteSheet2D.h
static void Register_SpriteSheet2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_SpriteSheet2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "SpriteSheet2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class StaticSprite2D | File: ../Urho2D/StaticSprite2D.h
static void Register_StaticSprite2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_StaticSprite2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "StaticSprite2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class StretchableSprite2D | File: ../Urho2D/StretchableSprite2D.h
static void Register_StretchableSprite2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_StretchableSprite2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "StretchableSprite2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class Tile2D | File: ../Urho2D/TileMapDefs2D.h
static void Register_Tile2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Tile2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Tile2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class TileMap2D | File: ../Urho2D/TileMap2D.h
static void Register_TileMap2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TileMap2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TileMap2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct TileMapInfo2D | File: ../Urho2D/TileMapDefs2D.h
static void Register_TileMapInfo2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TileMapInfo2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TileMapInfo2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class TileMapLayer2D | File: ../Urho2D/TileMapLayer2D.h
static void Register_TileMapLayer2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TileMapLayer2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TileMapLayer2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class TileMapObject2D | File: ../Urho2D/TileMapDefs2D.h
static void Register_TileMapObject2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TileMapObject2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TileMapObject2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class TmxFile2D | File: ../Urho2D/TmxFile2D.h
static void Register_TmxFile2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TmxFile2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TmxFile2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class TmxImageLayer2D | File: ../Urho2D/TmxFile2D.h
static void Register_TmxImageLayer2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TmxImageLayer2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TmxImageLayer2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class TmxLayer2D | File: ../Urho2D/TmxFile2D.h
static void Register_TmxLayer2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TmxLayer2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TmxLayer2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class TmxObjectGroup2D | File: ../Urho2D/TmxFile2D.h
static void Register_TmxObjectGroup2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TmxObjectGroup2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TmxObjectGroup2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// class TmxTileLayer2D | File: ../Urho2D/TmxFile2D.h
static void Register_TmxTileLayer2D(asIScriptEngine* engine)
{
    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_TmxTileLayer2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "TmxTileLayer2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

// struct Vertex2D | File: ../Urho2D/Drawable2D.h
static void Register_Vertex2D(asIScriptEngine* engine)
{
    // Vertex2D::~Vertex2D() | Implicitly-declared
    engine->RegisterObjectBehaviour("Vertex2D", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Vertex2D), AS_CALL_CDECL_OBJFIRST);

    Vector<RegisterObjectMethodArgs> methods;
    Vector<RegisterGlobalFunctionArgs> staticMethods;
    Vector<RegisterObjectPropertyArgs> fields;
    Vector<RegisterObjectMethodArgs> wrappedFields;
    Vector<RegisterGlobalPropertyArgs> staticFields;
    CollectMembers_Vertex2D(methods, staticMethods, fields, wrappedFields, staticFields);
    const char* asClassName = "Vertex2D";

    for (const RegisterObjectMethodArgs& method : methods)
        engine->RegisterObjectMethod(asClassName, method.asDeclaration_.CString(), method.funcPointer_, method.callConv_);

    for (const RegisterGlobalFunctionArgs& staticMethod : staticMethods)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalFunction(staticMethod.asDeclaration_.CString(), staticMethod.funcPointer_, staticMethod.callConv_);
        engine->SetDefaultNamespace("");
    }

    for (const RegisterObjectPropertyArgs& field : fields)
        engine->RegisterObjectProperty(asClassName, field.asDeclaration_.CString(), field.byteOffset_);

    for (const RegisterObjectMethodArgs& wrappedField : wrappedFields)
        engine->RegisterObjectMethod(asClassName, wrappedField.asDeclaration_.CString(), wrappedField.funcPointer_, wrappedField.callConv_);

    for (const RegisterGlobalPropertyArgs& staticField : staticFields)
    {
        engine->SetDefaultNamespace(asClassName);
        engine->RegisterGlobalProperty(staticField.asDeclaration_.CString(), staticField.pointer_);
        engine->SetDefaultNamespace("");
    }
}

#endif // def URHO3D_URHO2D

void ASRegisterGeneratedClasses(asIScriptEngine* engine)
{
    Register_AbstractFile(engine);
    Register_AllocatorBlock(engine);
    Register_AllocatorNode(engine);
    Register_Animatable(engine);
    Register_AnimatedModel(engine);
    Register_Animation(engine);
    Register_AnimationControl(engine);
    Register_AnimationController(engine);
    Register_AnimationKeyFrame(engine);
    Register_AnimationState(engine);
    Register_AnimationStateTrack(engine);
    Register_AnimationTrack(engine);
    Register_AnimationTriggerPoint(engine);
    Register_AreaAllocator(engine);
    Register_AsyncProgress(engine);
    Register_AttributeAccessor(engine);
    Register_AttributeAnimationInfo(engine);
    Register_AttributeInfo(engine);
    Register_Audio(engine);
    Register_BackgroundLoadItem(engine);
    Register_Batch(engine);
    Register_BatchGroup(engine);
    Register_BatchGroupKey(engine);
    Register_BatchQueue(engine);
    Register_BiasParameters(engine);
    Register_Billboard(engine);
    Register_BillboardSet(engine);
    Register_Bone(engine);
    Register_BorderImage(engine);
    Register_BoundingBox(engine);
    Register_BufferedSoundStream(engine);
    Register_Button(engine);
    Register_Camera(engine);
    Register_CascadeParameters(engine);
    Register_CharLocation(engine);
    Register_CheckBox(engine);
    Register_Color(engine);
    Register_ColorFrame(engine);
    Register_Component(engine);
    Register_ComponentReplicationState(engine);
    Register_CompressedLevel(engine);
    Register_Condition(engine);
    Register_Console(engine);
    Register_ConstantBuffer(engine);
    Register_Context(engine);
    Register_Controls(engine);
    Register_Cursor(engine);
    Register_CursorShapeInfo(engine);
    Register_CustomGeometry(engine);
    Register_CustomGeometryVertex(engine);
    Register_DebugHud(engine);
    Register_DebugLine(engine);
    Register_DebugRenderer(engine);
    Register_DebugTriangle(engine);
    Register_Decal(engine);
    Register_DecalSet(engine);
    Register_DecalVertex(engine);
    Register_DepthValue(engine);
    Register_Deserializer(engine);
    Register_DirtyBits(engine);
    Register_Drawable(engine);
    Register_DropDownList(engine);
    Register_Engine(engine);
    Register_EventProfiler(engine);
    Register_EventReceiverGroup(engine);
    Register_File(engine);
    Register_FileSelector(engine);
    Register_FileSelectorEntry(engine);
    Register_FileSystem(engine);
    Register_FileWatcher(engine);
    Register_FocusParameters(engine);
    Register_Font(engine);
    Register_FontFace(engine);
    Register_FontFaceBitmap(engine);
    Register_FontFaceFreeType(engine);
    Register_FontGlyph(engine);
    Register_FrameInfo(engine);
    Register_Frustum(engine);
    Register_GPUObject(engine);
    Register_Geometry(engine);
    Register_GeometryDesc(engine);
    Register_Graphics(engine);
    Register_HashBase(engine);
    Register_HashIteratorBase(engine);
    Register_HashNodeBase(engine);
    Register_HiresTimer(engine);
    Register_Image(engine);
    Register_IndexBuffer(engine);
    Register_IndexBufferDesc(engine);
    Register_Input(engine);
    Register_InstanceData(engine);
    Register_IntRect(engine);
    Register_IntVector2(engine);
    Register_IntVector3(engine);
    Register_JSONFile(engine);
    Register_JSONValue(engine);
    Register_JoystickState(engine);
    Register_Light(engine);
    Register_LightBatchQueue(engine);
    Register_LightQueryResult(engine);
    Register_LineEdit(engine);
    Register_LinkedListNode(engine);
    Register_ListBase(engine);
    Register_ListIteratorBase(engine);
    Register_ListNodeBase(engine);
    Register_ListView(engine);
    Register_Localization(engine);
    Register_Log(engine);
    Register_LogicComponent(engine);
    Register_Material(engine);
    Register_MaterialShaderParameter(engine);
    Register_Matrix2(engine);
    Register_Matrix3(engine);
    Register_Matrix3x4(engine);
    Register_Matrix4(engine);
    Register_Menu(engine);
    Register_MessageBox(engine);
    Register_Model(engine);
    Register_ModelMorph(engine);
    Register_Mutex(engine);
    Register_MutexLock(engine);
    Register_NamedPipe(engine);
    Register_NetworkState(engine);
    Register_Node(engine);
    Register_NodeImpl(engine);
    Register_NodeReplicationState(engine);
    Register_Object(engine);
    Register_ObjectAnimation(engine);
    Register_ObjectFactory(engine);
    Register_OcclusionBatch(engine);
    Register_OcclusionBuffer(engine);
    Register_OcclusionBufferData(engine);
    Register_Octree(engine);
    Register_OctreeQueryResult(engine);
    Register_OggVorbisSoundStream(engine);
    Register_PackageEntry(engine);
    Register_PackageFile(engine);
    Register_Particle(engine);
    Register_ParticleEffect(engine);
    Register_ParticleEmitter(engine);
    Register_Pass(engine);
    Register_PerThreadSceneResult(engine);
    Register_Plane(engine);
    Register_Polyhedron(engine);
    Register_Profiler(engine);
    Register_ProgressBar(engine);
    Register_Quaternion(engine);
    Register_Ray(engine);
    Register_RayQueryResult(engine);
    Register_Rect(engine);
    Register_RefCount(engine);
    Register_RefCounted(engine);
    Register_RenderPath(engine);
    Register_RenderPathCommand(engine);
    Register_RenderSurface(engine);
    Register_RenderTargetInfo(engine);
    Register_Renderer(engine);
    Register_ReplicationState(engine);
    Register_Resource(engine);
    Register_ResourceCache(engine);
    Register_ResourceGroup(engine);
    Register_ResourceRef(engine);
    Register_ResourceRefList(engine);
    Register_ResourceWithMetadata(engine);
    Register_RibbonTrail(engine);
    Register_Scene(engine);
    Register_ScenePassInfo(engine);
    Register_SceneReplicationState(engine);
    Register_SceneResolver(engine);
    Register_ScratchBuffer(engine);
    Register_ScreenModeParams(engine);
    Register_ScrollBar(engine);
    Register_ScrollView(engine);
    Register_Serializable(engine);
    Register_Serializer(engine);
    Register_Shader(engine);
    Register_ShaderParameter(engine);
    Register_ShaderParameterAnimationInfo(engine);
    Register_ShaderPrecache(engine);
    Register_ShaderVariation(engine);
    Register_ShadowBatchQueue(engine);
    Register_Skeleton(engine);
    Register_Skybox(engine);
    Register_Slider(engine);
    Register_SmoothedTransform(engine);
    Register_Sound(engine);
    Register_SoundListener(engine);
    Register_SoundSource(engine);
    Register_SoundSource3D(engine);
    Register_SoundStream(engine);
    Register_SourceBatch(engine);
    Register_Sphere(engine);
    Register_Spline(engine);
    Register_SplinePath(engine);
    Register_Sprite(engine);
    Register_StaticModel(engine);
    Register_StaticModelGeometryData(engine);
    Register_StaticModelGroup(engine);
    Register_StoredLogMessage(engine);
    Register_String(engine);
    Register_StringHash(engine);
    Register_StringHashRegister(engine);
    Register_Technique(engine);
    Register_TechniqueEntry(engine);
    Register_Terrain(engine);
    Register_TerrainPatch(engine);
    Register_Text(engine);
    Register_Text3D(engine);
    Register_Texture(engine);
    Register_Texture2D(engine);
    Register_Texture2DArray(engine);
    Register_Texture3D(engine);
    Register_TextureCube(engine);
    Register_TextureFrame(engine);
    Register_Time(engine);
    Register_Timer(engine);
    Register_ToolTip(engine);
    Register_TouchState(engine);
    Register_TrailPoint(engine);
    Register_UI(engine);
    Register_UIBatch(engine);
    Register_UIComponent(engine);
    Register_UIElement(engine);
    Register_UISelectable(engine);
    Register_UnknownComponent(engine);
    Register_VAnimEventFrame(engine);
    Register_VAnimKeyFrame(engine);
    Register_ValueAnimation(engine);
    Register_ValueAnimationInfo(engine);
    Register_Variant(engine);
    Register_Vector2(engine);
    Register_Vector3(engine);
    Register_Vector4(engine);
    Register_VectorBase(engine);
    Register_VectorBuffer(engine);
    Register_VertexBuffer(engine);
    Register_VertexBufferDesc(engine);
    Register_VertexBufferMorph(engine);
    Register_VertexElement(engine);
    Register_View(engine);
    Register_View3D(engine);
    Register_Viewport(engine);
    Register_Window(engine);
    Register_WindowModeParams(engine);
    Register_WorkQueue(engine);
    Register_XMLElement(engine);
    Register_XMLFile(engine);
    Register_XPathQuery(engine);
    Register_XPathResultSet(engine);
    Register_Zone(engine);

#ifdef URHO3D_DATABASE
    Register_Database(engine);
#endif

#ifdef URHO3D_IK
    Register_IKConstraint(engine);
    Register_IKEffector(engine);
    Register_IKSolver(engine);
#endif

#ifdef URHO3D_NAVIGATION
    Register_CrowdAgent(engine);
    Register_CrowdManager(engine);
    Register_CrowdObstacleAvoidanceParams(engine);
    Register_DynamicNavigationMesh(engine);
    Register_NavArea(engine);
    Register_NavAreaStub(engine);
    Register_NavBuildData(engine);
    Register_Navigable(engine);
    Register_NavigationGeometryInfo(engine);
    Register_NavigationMesh(engine);
    Register_NavigationPathPoint(engine);
    Register_Obstacle(engine);
    Register_OffMeshConnection(engine);
    Register_SimpleNavBuildData(engine);
#endif

#ifdef URHO3D_NETWORK
    Register_Connection(engine);
    Register_HttpRequest(engine);
    Register_Network(engine);
    Register_NetworkPriority(engine);
    Register_PackageDownload(engine);
    Register_PackageUpload(engine);
    Register_RemoteEvent(engine);
#endif

#ifdef URHO3D_PHYSICS
    Register_CollisionGeometryData(engine);
    Register_CollisionShape(engine);
    Register_Constraint(engine);
    Register_ConvexData(engine);
    Register_DelayedWorldTransform(engine);
    Register_GImpactMeshData(engine);
    Register_HeightfieldData(engine);
    Register_ManifoldPair(engine);
    Register_PhysicsRaycastResult(engine);
    Register_PhysicsWorld(engine);
    Register_PhysicsWorldConfig(engine);
    Register_RaycastVehicle(engine);
    Register_RigidBody(engine);
    Register_TriangleMeshData(engine);
#endif

#ifdef URHO3D_URHO2D
    Register_AnimatedSprite2D(engine);
    Register_AnimationSet2D(engine);
    Register_CollisionBox2D(engine);
    Register_CollisionChain2D(engine);
    Register_CollisionCircle2D(engine);
    Register_CollisionEdge2D(engine);
    Register_CollisionPolygon2D(engine);
    Register_CollisionShape2D(engine);
    Register_Constraint2D(engine);
    Register_ConstraintDistance2D(engine);
    Register_ConstraintFriction2D(engine);
    Register_ConstraintGear2D(engine);
    Register_ConstraintMotor2D(engine);
    Register_ConstraintMouse2D(engine);
    Register_ConstraintPrismatic2D(engine);
    Register_ConstraintPulley2D(engine);
    Register_ConstraintRevolute2D(engine);
    Register_ConstraintRope2D(engine);
    Register_ConstraintWeld2D(engine);
    Register_ConstraintWheel2D(engine);
    Register_DelayedWorldTransform2D(engine);
    Register_Drawable2D(engine);
    Register_Particle2D(engine);
    Register_ParticleEffect2D(engine);
    Register_ParticleEmitter2D(engine);
    Register_PhysicsRaycastResult2D(engine);
    Register_PhysicsWorld2D(engine);
    Register_PropertySet2D(engine);
    Register_Renderer2D(engine);
    Register_RigidBody2D(engine);
    Register_SourceBatch2D(engine);
    Register_Sprite2D(engine);
    Register_SpriteSheet2D(engine);
    Register_StaticSprite2D(engine);
    Register_StretchableSprite2D(engine);
    Register_Tile2D(engine);
    Register_TileMap2D(engine);
    Register_TileMapInfo2D(engine);
    Register_TileMapLayer2D(engine);
    Register_TileMapObject2D(engine);
    Register_TmxFile2D(engine);
    Register_TmxImageLayer2D(engine);
    Register_TmxLayer2D(engine);
    Register_TmxObjectGroup2D(engine);
    Register_TmxTileLayer2D(engine);
    Register_Vertex2D(engine);
#endif
}

}
