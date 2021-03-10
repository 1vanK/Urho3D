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

    #ifdef REGISTER_CLASS_MANUAL_PART_AbstractFile
        REGISTER_CLASS_MANUAL_PART_AbstractFile();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_AllocatorBlock
        REGISTER_CLASS_MANUAL_PART_AllocatorBlock();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_AllocatorNode
        REGISTER_CLASS_MANUAL_PART_AllocatorNode();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Animatable
        REGISTER_CLASS_MANUAL_PART_Animatable();
    #endif
}

// explicit AnimatedModel::AnimatedModel(Context* context)
static AnimatedModel* AnimatedModel_AnimatedModel_Context()
{
    Context* context = GetScriptContext();
    return new AnimatedModel(context);
}

// class AnimatedModel | File: ../Graphics/AnimatedModel.h
static void Register_AnimatedModel(asIScriptEngine* engine)
{
    // explicit AnimatedModel::AnimatedModel(Context* context)
    engine->RegisterObjectBehaviour("AnimatedModel", asBEHAVE_FACTORY, "AnimatedModel@+ f()", AS_FUNCTION(AnimatedModel_AnimatedModel_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimatedModel
        REGISTER_CLASS_MANUAL_PART_AnimatedModel();
    #endif
}

// explicit Animation::Animation(Context* context)
static Animation* Animation_Animation_Context()
{
    Context* context = GetScriptContext();
    return new Animation(context);
}

// class Animation | File: ../Graphics/Animation.h
static void Register_Animation(asIScriptEngine* engine)
{
    // explicit Animation::Animation(Context* context)
    engine->RegisterObjectBehaviour("Animation", asBEHAVE_FACTORY, "Animation@+ f()", AS_FUNCTION(Animation_Animation_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Animation
        REGISTER_CLASS_MANUAL_PART_Animation();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationControl
        REGISTER_CLASS_MANUAL_PART_AnimationControl();
    #endif
}

// explicit AnimationController::AnimationController(Context* context)
static AnimationController* AnimationController_AnimationController_Context()
{
    Context* context = GetScriptContext();
    return new AnimationController(context);
}

// class AnimationController | File: ../Graphics/AnimationController.h
static void Register_AnimationController(asIScriptEngine* engine)
{
    // explicit AnimationController::AnimationController(Context* context)
    engine->RegisterObjectBehaviour("AnimationController", asBEHAVE_FACTORY, "AnimationController@+ f()", AS_FUNCTION(AnimationController_AnimationController_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationController
        REGISTER_CLASS_MANUAL_PART_AnimationController();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationKeyFrame
        REGISTER_CLASS_MANUAL_PART_AnimationKeyFrame();
    #endif
}

// AnimationState::AnimationState(AnimatedModel* model, Animation* animation)
static AnimationState* AnimationState_AnimationState_AnimatedModel_Animation(AnimatedModel* model, Animation* animation)
{
    return new AnimationState(model, animation);
}

// AnimationState::AnimationState(Node* node, Animation* animation)
static AnimationState* AnimationState_AnimationState_Node_Animation(Node* node, Animation* animation)
{
    return new AnimationState(node, animation);
}

// class AnimationState | File: ../Graphics/AnimationState.h
static void Register_AnimationState(asIScriptEngine* engine)
{
    // AnimationState::AnimationState(AnimatedModel* model, Animation* animation)
    engine->RegisterObjectBehaviour("AnimationState", asBEHAVE_FACTORY, "AnimationState@+ f(AnimatedModel@+, Animation@+)", AS_FUNCTION(AnimationState_AnimationState_AnimatedModel_Animation) , AS_CALL_CDECL);
    // AnimationState::AnimationState(Node* node, Animation* animation)
    engine->RegisterObjectBehaviour("AnimationState", asBEHAVE_FACTORY, "AnimationState@+ f(Node@+, Animation@+)", AS_FUNCTION(AnimationState_AnimationState_Node_Animation) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationState
        REGISTER_CLASS_MANUAL_PART_AnimationState();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationStateTrack
        REGISTER_CLASS_MANUAL_PART_AnimationStateTrack();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationTrack
        REGISTER_CLASS_MANUAL_PART_AnimationTrack();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationTriggerPoint
        REGISTER_CLASS_MANUAL_PART_AnimationTriggerPoint();
    #endif
}

// AreaAllocator::AreaAllocator(int width, int height, bool fastMode=true)
static void AreaAllocator_AreaAllocator_int_int_bool(AreaAllocator* ptr, int width, int height, bool fastMode)
{
    new(ptr) AreaAllocator(width, height, fastMode);
}

// AreaAllocator::AreaAllocator(int width, int height, int maxWidth, int maxHeight, bool fastMode=true)
static void AreaAllocator_AreaAllocator_int_int_int_int_bool(AreaAllocator* ptr, int width, int height, int maxWidth, int maxHeight, bool fastMode)
{
    new(ptr) AreaAllocator(width, height, maxWidth, maxHeight, fastMode);
}

// class AreaAllocator | File: ../Math/AreaAllocator.h
static void Register_AreaAllocator(asIScriptEngine* engine)
{
    // AreaAllocator::AreaAllocator(int width, int height, bool fastMode=true)
    engine->RegisterObjectBehaviour("AreaAllocator", asBEHAVE_CONSTRUCT, "void f(int, int, bool = true)", AS_FUNCTION_OBJFIRST(AreaAllocator_AreaAllocator_int_int_bool), AS_CALL_CDECL_OBJFIRST);
    // AreaAllocator::AreaAllocator(int width, int height, int maxWidth, int maxHeight, bool fastMode=true)
    engine->RegisterObjectBehaviour("AreaAllocator", asBEHAVE_CONSTRUCT, "void f(int, int, int, int, bool = true)", AS_FUNCTION_OBJFIRST(AreaAllocator_AreaAllocator_int_int_int_int_bool), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_AreaAllocator
        REGISTER_CLASS_MANUAL_PART_AreaAllocator();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_AsyncProgress
        REGISTER_CLASS_MANUAL_PART_AsyncProgress();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_AttributeAccessor
        REGISTER_CLASS_MANUAL_PART_AttributeAccessor();
    #endif
}

// AttributeAnimationInfo::AttributeAnimationInfo(Animatable* animatable, const AttributeInfo& attributeInfo, ValueAnimation* attributeAnimation, WrapMode wrapMode, float speed)
static AttributeAnimationInfo* AttributeAnimationInfo_AttributeAnimationInfo_Animatable_AttributeInfo_ValueAnimation_WrapMode_float(Animatable* animatable, const AttributeInfo& attributeInfo, ValueAnimation* attributeAnimation, WrapMode wrapMode, float speed)
{
    return new AttributeAnimationInfo(animatable, attributeInfo, attributeAnimation, wrapMode, speed);
}

// AttributeAnimationInfo::AttributeAnimationInfo(const AttributeAnimationInfo& other)
static AttributeAnimationInfo* AttributeAnimationInfo_AttributeAnimationInfo_AttributeAnimationInfo(const AttributeAnimationInfo& other)
{
    return new AttributeAnimationInfo(other);
}

// class AttributeAnimationInfo | File: ../Scene/Animatable.h
static void Register_AttributeAnimationInfo(asIScriptEngine* engine)
{
    // AttributeAnimationInfo::AttributeAnimationInfo(Animatable* animatable, const AttributeInfo& attributeInfo, ValueAnimation* attributeAnimation, WrapMode wrapMode, float speed)
    engine->RegisterObjectBehaviour("AttributeAnimationInfo", asBEHAVE_FACTORY, "AttributeAnimationInfo@+ f(Animatable@+, const AttributeInfo&in, ValueAnimation@+, WrapMode, float)", AS_FUNCTION(AttributeAnimationInfo_AttributeAnimationInfo_Animatable_AttributeInfo_ValueAnimation_WrapMode_float) , AS_CALL_CDECL);
    // AttributeAnimationInfo::AttributeAnimationInfo(const AttributeAnimationInfo& other)
    engine->RegisterObjectBehaviour("AttributeAnimationInfo", asBEHAVE_FACTORY, "AttributeAnimationInfo@+ f(const AttributeAnimationInfo&in)", AS_FUNCTION(AttributeAnimationInfo_AttributeAnimationInfo_AttributeAnimationInfo) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_AttributeAnimationInfo
        REGISTER_CLASS_MANUAL_PART_AttributeAnimationInfo();
    #endif
}

// struct AttributeInfo | File: ../Core/Attribute.h
static void Register_AttributeInfo(asIScriptEngine* engine)
{
    // AttributeInfo::AttributeInfo(VariantType type, const char* name, const SharedPtr<AttributeAccessor>& accessor, const char** enumNames, const Variant& defaultValue, AttributeModeFlags mode)
    // Error: type "const char*" can not automatically bind


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

    #ifdef REGISTER_CLASS_MANUAL_PART_AttributeInfo
        REGISTER_CLASS_MANUAL_PART_AttributeInfo();
    #endif
}

// explicit Audio::Audio(Context* context)
static Audio* Audio_Audio_Context()
{
    Context* context = GetScriptContext();
    return new Audio(context);
}

// class Audio | File: ../Audio/Audio.h
static void Register_Audio(asIScriptEngine* engine)
{
    // explicit Audio::Audio(Context* context)
    engine->RegisterObjectBehaviour("Audio", asBEHAVE_FACTORY, "Audio@+ f()", AS_FUNCTION(Audio_Audio_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Audio
        REGISTER_CLASS_MANUAL_PART_Audio();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_BackgroundLoadItem
        REGISTER_CLASS_MANUAL_PART_BackgroundLoadItem();
    #endif
}

// explicit Batch::Batch(const SourceBatch& rhs)
static void Batch_Batch_SourceBatch(Batch* ptr, const SourceBatch& rhs)
{
    new(ptr) Batch(rhs);
}

// struct Batch | File: ../Graphics/Batch.h
static void Register_Batch(asIScriptEngine* engine)
{
    // explicit Batch::Batch(const SourceBatch& rhs)
    engine->RegisterObjectBehaviour("Batch", asBEHAVE_CONSTRUCT, "void f(const SourceBatch&in)", AS_FUNCTION_OBJFIRST(Batch_Batch_SourceBatch), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_Batch
        REGISTER_CLASS_MANUAL_PART_Batch();
    #endif
}

// explicit BatchGroup::BatchGroup(const Batch& batch)
static void BatchGroup_BatchGroup_Batch(BatchGroup* ptr, const Batch& batch)
{
    new(ptr) BatchGroup(batch);
}

// struct BatchGroup | File: ../Graphics/Batch.h
static void Register_BatchGroup(asIScriptEngine* engine)
{
    // explicit BatchGroup::BatchGroup(const Batch& batch)
    engine->RegisterObjectBehaviour("BatchGroup", asBEHAVE_CONSTRUCT, "void f(const Batch&in)", AS_FUNCTION_OBJFIRST(BatchGroup_BatchGroup_Batch), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_BatchGroup
        REGISTER_CLASS_MANUAL_PART_BatchGroup();
    #endif
}

// explicit BatchGroupKey::BatchGroupKey(const Batch& batch)
static void BatchGroupKey_BatchGroupKey_Batch(BatchGroupKey* ptr, const Batch& batch)
{
    new(ptr) BatchGroupKey(batch);
}

// struct BatchGroupKey | File: ../Graphics/Batch.h
static void Register_BatchGroupKey(asIScriptEngine* engine)
{
    // explicit BatchGroupKey::BatchGroupKey(const Batch& batch)
    engine->RegisterObjectBehaviour("BatchGroupKey", asBEHAVE_CONSTRUCT, "void f(const Batch&in)", AS_FUNCTION_OBJFIRST(BatchGroupKey_BatchGroupKey_Batch), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_BatchGroupKey
        REGISTER_CLASS_MANUAL_PART_BatchGroupKey();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_BatchQueue
        REGISTER_CLASS_MANUAL_PART_BatchQueue();
    #endif
}

// BiasParameters::BiasParameters(float constantBias, float slopeScaledBias, float normalOffset=0.0f)
static void BiasParameters_BiasParameters_float_float_float(BiasParameters* ptr, float constantBias, float slopeScaledBias, float normalOffset)
{
    new(ptr) BiasParameters(constantBias, slopeScaledBias, normalOffset);
}

// struct BiasParameters | File: ../Graphics/Light.h
static void Register_BiasParameters(asIScriptEngine* engine)
{
    // BiasParameters::BiasParameters(float constantBias, float slopeScaledBias, float normalOffset=0.0f)
    engine->RegisterObjectBehaviour("BiasParameters", asBEHAVE_CONSTRUCT, "void f(float, float, float = 0.0f)", AS_FUNCTION_OBJFIRST(BiasParameters_BiasParameters_float_float_float), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_BiasParameters
        REGISTER_CLASS_MANUAL_PART_BiasParameters();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Billboard
        REGISTER_CLASS_MANUAL_PART_Billboard();
    #endif
}

// explicit BillboardSet::BillboardSet(Context* context)
static BillboardSet* BillboardSet_BillboardSet_Context()
{
    Context* context = GetScriptContext();
    return new BillboardSet(context);
}

// class BillboardSet | File: ../Graphics/BillboardSet.h
static void Register_BillboardSet(asIScriptEngine* engine)
{
    // explicit BillboardSet::BillboardSet(Context* context)
    engine->RegisterObjectBehaviour("BillboardSet", asBEHAVE_FACTORY, "BillboardSet@+ f()", AS_FUNCTION(BillboardSet_BillboardSet_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_BillboardSet
        REGISTER_CLASS_MANUAL_PART_BillboardSet();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Bone
        REGISTER_CLASS_MANUAL_PART_Bone();
    #endif
}

// explicit BorderImage::BorderImage(Context* context)
static BorderImage* BorderImage_BorderImage_Context()
{
    Context* context = GetScriptContext();
    return new BorderImage(context);
}

// class BorderImage | File: ../UI/BorderImage.h
static void Register_BorderImage(asIScriptEngine* engine)
{
    // explicit BorderImage::BorderImage(Context* context)
    engine->RegisterObjectBehaviour("BorderImage", asBEHAVE_FACTORY, "BorderImage@+ f()", AS_FUNCTION(BorderImage_BorderImage_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_BorderImage
        REGISTER_CLASS_MANUAL_PART_BorderImage();
    #endif
}

// BoundingBox::BoundingBox(const BoundingBox& box) noexcept
static void BoundingBox_BoundingBox_BoundingBox(BoundingBox* ptr, const BoundingBox& box)
{
    new(ptr) BoundingBox(box);
}

// explicit BoundingBox::BoundingBox(const Rect& rect) noexcept
static void BoundingBox_BoundingBox_Rect(BoundingBox* ptr, const Rect& rect)
{
    new(ptr) BoundingBox(rect);
}

// BoundingBox::BoundingBox(const Vector3& min, const Vector3& max) noexcept
static void BoundingBox_BoundingBox_Vector3_Vector3(BoundingBox* ptr, const Vector3& min, const Vector3& max)
{
    new(ptr) BoundingBox(min, max);
}

// BoundingBox::BoundingBox(float min, float max) noexcept
static void BoundingBox_BoundingBox_float_float(BoundingBox* ptr, float min, float max)
{
    new(ptr) BoundingBox(min, max);
}

// explicit BoundingBox::BoundingBox(const Frustum& frustum)
static void BoundingBox_BoundingBox_Frustum(BoundingBox* ptr, const Frustum& frustum)
{
    new(ptr) BoundingBox(frustum);
}

// explicit BoundingBox::BoundingBox(const Polyhedron& poly)
static void BoundingBox_BoundingBox_Polyhedron(BoundingBox* ptr, const Polyhedron& poly)
{
    new(ptr) BoundingBox(poly);
}

// explicit BoundingBox::BoundingBox(const Sphere& sphere)
static void BoundingBox_BoundingBox_Sphere(BoundingBox* ptr, const Sphere& sphere)
{
    new(ptr) BoundingBox(sphere);
}

// class BoundingBox | File: ../Math/BoundingBox.h
static void Register_BoundingBox(asIScriptEngine* engine)
{
    // BoundingBox::BoundingBox(const Vector3* vertices, unsigned count)
    // Error: type "const Vector3*" can not automatically bind

    // BoundingBox::BoundingBox(const BoundingBox& box) noexcept
    engine->RegisterObjectBehaviour("BoundingBox", asBEHAVE_CONSTRUCT, "void f(const BoundingBox&in)", AS_FUNCTION_OBJFIRST(BoundingBox_BoundingBox_BoundingBox), AS_CALL_CDECL_OBJFIRST);
    // explicit BoundingBox::BoundingBox(const Rect& rect) noexcept
    engine->RegisterObjectBehaviour("BoundingBox", asBEHAVE_CONSTRUCT, "void f(const Rect&in)", AS_FUNCTION_OBJFIRST(BoundingBox_BoundingBox_Rect), AS_CALL_CDECL_OBJFIRST);
    // BoundingBox::BoundingBox(const Vector3& min, const Vector3& max) noexcept
    engine->RegisterObjectBehaviour("BoundingBox", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(BoundingBox_BoundingBox_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);
    // BoundingBox::BoundingBox(float min, float max) noexcept
    engine->RegisterObjectBehaviour("BoundingBox", asBEHAVE_CONSTRUCT, "void f(float, float)", AS_FUNCTION_OBJFIRST(BoundingBox_BoundingBox_float_float), AS_CALL_CDECL_OBJFIRST);
    // explicit BoundingBox::BoundingBox(const Frustum& frustum)
    engine->RegisterObjectBehaviour("BoundingBox", asBEHAVE_CONSTRUCT, "void f(const Frustum&in)", AS_FUNCTION_OBJFIRST(BoundingBox_BoundingBox_Frustum), AS_CALL_CDECL_OBJFIRST);
    // explicit BoundingBox::BoundingBox(const Polyhedron& poly)
    engine->RegisterObjectBehaviour("BoundingBox", asBEHAVE_CONSTRUCT, "void f(const Polyhedron&in)", AS_FUNCTION_OBJFIRST(BoundingBox_BoundingBox_Polyhedron), AS_CALL_CDECL_OBJFIRST);
    // explicit BoundingBox::BoundingBox(const Sphere& sphere)
    engine->RegisterObjectBehaviour("BoundingBox", asBEHAVE_CONSTRUCT, "void f(const Sphere&in)", AS_FUNCTION_OBJFIRST(BoundingBox_BoundingBox_Sphere), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_BoundingBox
        REGISTER_CLASS_MANUAL_PART_BoundingBox();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_BufferedSoundStream
        REGISTER_CLASS_MANUAL_PART_BufferedSoundStream();
    #endif
}

// explicit Button::Button(Context* context)
static Button* Button_Button_Context()
{
    Context* context = GetScriptContext();
    return new Button(context);
}

// class Button | File: ../UI/Button.h
static void Register_Button(asIScriptEngine* engine)
{
    // explicit Button::Button(Context* context)
    engine->RegisterObjectBehaviour("Button", asBEHAVE_FACTORY, "Button@+ f()", AS_FUNCTION(Button_Button_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Button
        REGISTER_CLASS_MANUAL_PART_Button();
    #endif
}

// explicit Camera::Camera(Context* context)
static Camera* Camera_Camera_Context()
{
    Context* context = GetScriptContext();
    return new Camera(context);
}

// class Camera | File: ../Graphics/Camera.h
static void Register_Camera(asIScriptEngine* engine)
{
    // explicit Camera::Camera(Context* context)
    engine->RegisterObjectBehaviour("Camera", asBEHAVE_FACTORY, "Camera@+ f()", AS_FUNCTION(Camera_Camera_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Camera
        REGISTER_CLASS_MANUAL_PART_Camera();
    #endif
}

// CascadeParameters::CascadeParameters(float split1, float split2, float split3, float split4, float fadeStart, float biasAutoAdjust=1.0f)
static void CascadeParameters_CascadeParameters_float_float_float_float_float_float(CascadeParameters* ptr, float split1, float split2, float split3, float split4, float fadeStart, float biasAutoAdjust)
{
    new(ptr) CascadeParameters(split1, split2, split3, split4, fadeStart, biasAutoAdjust);
}

// struct CascadeParameters | File: ../Graphics/Light.h
static void Register_CascadeParameters(asIScriptEngine* engine)
{
    // CascadeParameters::CascadeParameters(float split1, float split2, float split3, float split4, float fadeStart, float biasAutoAdjust=1.0f)
    engine->RegisterObjectBehaviour("CascadeParameters", asBEHAVE_CONSTRUCT, "void f(float, float, float, float, float, float = 1.0f)", AS_FUNCTION_OBJFIRST(CascadeParameters_CascadeParameters_float_float_float_float_float_float), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CascadeParameters
        REGISTER_CLASS_MANUAL_PART_CascadeParameters();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_CharLocation
        REGISTER_CLASS_MANUAL_PART_CharLocation();
    #endif
}

// explicit CheckBox::CheckBox(Context* context)
static CheckBox* CheckBox_CheckBox_Context()
{
    Context* context = GetScriptContext();
    return new CheckBox(context);
}

// class CheckBox | File: ../UI/CheckBox.h
static void Register_CheckBox(asIScriptEngine* engine)
{
    // explicit CheckBox::CheckBox(Context* context)
    engine->RegisterObjectBehaviour("CheckBox", asBEHAVE_FACTORY, "CheckBox@+ f()", AS_FUNCTION(CheckBox_CheckBox_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CheckBox
        REGISTER_CLASS_MANUAL_PART_CheckBox();
    #endif
}

// Color::Color(const Color& color) noexcept=default
static void Color_Color_Color(Color* ptr, const Color& color)
{
    new(ptr) Color(color);
}

// Color::Color(const Color& color, float a) noexcept
static void Color_Color_Color_float(Color* ptr, const Color& color, float a)
{
    new(ptr) Color(color, a);
}

// Color::Color(float r, float g, float b) noexcept
static void Color_Color_float_float_float(Color* ptr, float r, float g, float b)
{
    new(ptr) Color(r, g, b);
}

// Color::Color(float r, float g, float b, float a) noexcept
static void Color_Color_float_float_float_float(Color* ptr, float r, float g, float b, float a)
{
    new(ptr) Color(r, g, b, a);
}

// explicit Color::Color(const Vector3& color)
static void Color_Color_Vector3(Color* ptr, const Vector3& color)
{
    new(ptr) Color(color);
}

// explicit Color::Color(const Vector4& color)
static void Color_Color_Vector4(Color* ptr, const Vector4& color)
{
    new(ptr) Color(color);
}

// class Color | File: ../Math/Color.h
static void Register_Color(asIScriptEngine* engine)
{
    // explicit Color::Color(const float* data) noexcept
    // Error: type "const float*" can not automatically bind
    // explicit Color::Color(unsigned color, const ChannelMask& mask=ABGR)
    // Error: type "const ChannelMask&" can not automatically bind

    // Color::Color(const Color& color) noexcept=default
    engine->RegisterObjectBehaviour("Color", asBEHAVE_CONSTRUCT, "void f(const Color&in)", AS_FUNCTION_OBJFIRST(Color_Color_Color), AS_CALL_CDECL_OBJFIRST);
    // Color::Color(const Color& color, float a) noexcept
    engine->RegisterObjectBehaviour("Color", asBEHAVE_CONSTRUCT, "void f(const Color&in, float)", AS_FUNCTION_OBJFIRST(Color_Color_Color_float), AS_CALL_CDECL_OBJFIRST);
    // Color::Color(float r, float g, float b) noexcept
    engine->RegisterObjectBehaviour("Color", asBEHAVE_CONSTRUCT, "void f(float, float, float)", AS_FUNCTION_OBJFIRST(Color_Color_float_float_float), AS_CALL_CDECL_OBJFIRST);
    // Color::Color(float r, float g, float b, float a) noexcept
    engine->RegisterObjectBehaviour("Color", asBEHAVE_CONSTRUCT, "void f(float, float, float, float)", AS_FUNCTION_OBJFIRST(Color_Color_float_float_float_float), AS_CALL_CDECL_OBJFIRST);
    // explicit Color::Color(const Vector3& color)
    engine->RegisterObjectBehaviour("Color", asBEHAVE_CONSTRUCT, "void f(const Vector3&in)", AS_FUNCTION_OBJFIRST(Color_Color_Vector3), AS_CALL_CDECL_OBJFIRST);
    // explicit Color::Color(const Vector4& color)
    engine->RegisterObjectBehaviour("Color", asBEHAVE_CONSTRUCT, "void f(const Vector4&in)", AS_FUNCTION_OBJFIRST(Color_Color_Vector4), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Color
        REGISTER_CLASS_MANUAL_PART_Color();
    #endif
}

// explicit ColorFrame::ColorFrame(const Color& color)
static ColorFrame* ColorFrame_ColorFrame_Color(const Color& color)
{
    return new ColorFrame(color);
}

// ColorFrame::ColorFrame(const Color& color, float time)
static ColorFrame* ColorFrame_ColorFrame_Color_float(const Color& color, float time)
{
    return new ColorFrame(color, time);
}

// struct ColorFrame | File: ../Graphics/ParticleEffect.h
static void Register_ColorFrame(asIScriptEngine* engine)
{
    // explicit ColorFrame::ColorFrame(const Color& color)
    engine->RegisterObjectBehaviour("ColorFrame", asBEHAVE_FACTORY, "ColorFrame@+ f(const Color&in)", AS_FUNCTION(ColorFrame_ColorFrame_Color) , AS_CALL_CDECL);
    // ColorFrame::ColorFrame(const Color& color, float time)
    engine->RegisterObjectBehaviour("ColorFrame", asBEHAVE_FACTORY, "ColorFrame@+ f(const Color&in, float)", AS_FUNCTION(ColorFrame_ColorFrame_Color_float) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ColorFrame
        REGISTER_CLASS_MANUAL_PART_ColorFrame();
    #endif
}

// explicit Component::Component(Context* context)
static Component* Component_Component_Context()
{
    Context* context = GetScriptContext();
    return new Component(context);
}

// class Component | File: ../Scene/Component.h
static void Register_Component(asIScriptEngine* engine)
{
    // explicit Component::Component(Context* context)
    engine->RegisterObjectBehaviour("Component", asBEHAVE_FACTORY, "Component@+ f()", AS_FUNCTION(Component_Component_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Component
        REGISTER_CLASS_MANUAL_PART_Component();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ComponentReplicationState
        REGISTER_CLASS_MANUAL_PART_ComponentReplicationState();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_CompressedLevel
        REGISTER_CLASS_MANUAL_PART_CompressedLevel();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Condition
        REGISTER_CLASS_MANUAL_PART_Condition();
    #endif
}

// explicit Console::Console(Context* context)
static Console* Console_Console_Context()
{
    Context* context = GetScriptContext();
    return new Console(context);
}

// class Console | File: ../Engine/Console.h
static void Register_Console(asIScriptEngine* engine)
{
    // explicit Console::Console(Context* context)
    engine->RegisterObjectBehaviour("Console", asBEHAVE_FACTORY, "Console@+ f()", AS_FUNCTION(Console_Console_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Console
        REGISTER_CLASS_MANUAL_PART_Console();
    #endif
}

// explicit ConstantBuffer::ConstantBuffer(Context* context)
static ConstantBuffer* ConstantBuffer_ConstantBuffer_Context()
{
    Context* context = GetScriptContext();
    return new ConstantBuffer(context);
}

// class ConstantBuffer | File: ../Graphics/ConstantBuffer.h
static void Register_ConstantBuffer(asIScriptEngine* engine)
{
    // explicit ConstantBuffer::ConstantBuffer(Context* context)
    engine->RegisterObjectBehaviour("ConstantBuffer", asBEHAVE_FACTORY, "ConstantBuffer@+ f()", AS_FUNCTION(ConstantBuffer_ConstantBuffer_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstantBuffer
        REGISTER_CLASS_MANUAL_PART_ConstantBuffer();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Context
        REGISTER_CLASS_MANUAL_PART_Context();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Controls
        REGISTER_CLASS_MANUAL_PART_Controls();
    #endif
}

// explicit Cursor::Cursor(Context* context)
static Cursor* Cursor_Cursor_Context()
{
    Context* context = GetScriptContext();
    return new Cursor(context);
}

// class Cursor | File: ../UI/Cursor.h
static void Register_Cursor(asIScriptEngine* engine)
{
    // explicit Cursor::Cursor(Context* context)
    engine->RegisterObjectBehaviour("Cursor", asBEHAVE_FACTORY, "Cursor@+ f()", AS_FUNCTION(Cursor_Cursor_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Cursor
        REGISTER_CLASS_MANUAL_PART_Cursor();
    #endif
}

// explicit CursorShapeInfo::CursorShapeInfo(int systemCursor)
static void CursorShapeInfo_CursorShapeInfo_int(CursorShapeInfo* ptr, int systemCursor)
{
    new(ptr) CursorShapeInfo(systemCursor);
}

// struct CursorShapeInfo | File: ../UI/Cursor.h
static void Register_CursorShapeInfo(asIScriptEngine* engine)
{
    // explicit CursorShapeInfo::CursorShapeInfo(int systemCursor)
    engine->RegisterObjectBehaviour("CursorShapeInfo", asBEHAVE_CONSTRUCT, "void f(int)", AS_FUNCTION_OBJFIRST(CursorShapeInfo_CursorShapeInfo_int), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_CursorShapeInfo
        REGISTER_CLASS_MANUAL_PART_CursorShapeInfo();
    #endif
}

// explicit CustomGeometry::CustomGeometry(Context* context)
static CustomGeometry* CustomGeometry_CustomGeometry_Context()
{
    Context* context = GetScriptContext();
    return new CustomGeometry(context);
}

// class CustomGeometry | File: ../Graphics/CustomGeometry.h
static void Register_CustomGeometry(asIScriptEngine* engine)
{
    // explicit CustomGeometry::CustomGeometry(Context* context)
    engine->RegisterObjectBehaviour("CustomGeometry", asBEHAVE_FACTORY, "CustomGeometry@+ f()", AS_FUNCTION(CustomGeometry_CustomGeometry_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CustomGeometry
        REGISTER_CLASS_MANUAL_PART_CustomGeometry();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_CustomGeometryVertex
        REGISTER_CLASS_MANUAL_PART_CustomGeometryVertex();
    #endif
}

// explicit DebugHud::DebugHud(Context* context)
static DebugHud* DebugHud_DebugHud_Context()
{
    Context* context = GetScriptContext();
    return new DebugHud(context);
}

// class DebugHud | File: ../Engine/DebugHud.h
static void Register_DebugHud(asIScriptEngine* engine)
{
    // explicit DebugHud::DebugHud(Context* context)
    engine->RegisterObjectBehaviour("DebugHud", asBEHAVE_FACTORY, "DebugHud@+ f()", AS_FUNCTION(DebugHud_DebugHud_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_DebugHud
        REGISTER_CLASS_MANUAL_PART_DebugHud();
    #endif
}

// DebugLine::DebugLine(const Vector3& start, const Vector3& end, unsigned color)
static void DebugLine_DebugLine_Vector3_Vector3_unsigned(DebugLine* ptr, const Vector3& start, const Vector3& end, unsigned color)
{
    new(ptr) DebugLine(start, end, color);
}

// struct DebugLine | File: ../Graphics/DebugRenderer.h
static void Register_DebugLine(asIScriptEngine* engine)
{
    // DebugLine::DebugLine(const Vector3& start, const Vector3& end, unsigned color)
    engine->RegisterObjectBehaviour("DebugLine", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in, uint)", AS_FUNCTION_OBJFIRST(DebugLine_DebugLine_Vector3_Vector3_unsigned), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_DebugLine
        REGISTER_CLASS_MANUAL_PART_DebugLine();
    #endif
}

// explicit DebugRenderer::DebugRenderer(Context* context)
static DebugRenderer* DebugRenderer_DebugRenderer_Context()
{
    Context* context = GetScriptContext();
    return new DebugRenderer(context);
}

// class DebugRenderer | File: ../Graphics/DebugRenderer.h
static void Register_DebugRenderer(asIScriptEngine* engine)
{
    // explicit DebugRenderer::DebugRenderer(Context* context)
    engine->RegisterObjectBehaviour("DebugRenderer", asBEHAVE_FACTORY, "DebugRenderer@+ f()", AS_FUNCTION(DebugRenderer_DebugRenderer_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_DebugRenderer
        REGISTER_CLASS_MANUAL_PART_DebugRenderer();
    #endif
}

// DebugTriangle::DebugTriangle(const Vector3& v1, const Vector3& v2, const Vector3& v3, unsigned color)
static void DebugTriangle_DebugTriangle_Vector3_Vector3_Vector3_unsigned(DebugTriangle* ptr, const Vector3& v1, const Vector3& v2, const Vector3& v3, unsigned color)
{
    new(ptr) DebugTriangle(v1, v2, v3, color);
}

// struct DebugTriangle | File: ../Graphics/DebugRenderer.h
static void Register_DebugTriangle(asIScriptEngine* engine)
{
    // DebugTriangle::DebugTriangle(const Vector3& v1, const Vector3& v2, const Vector3& v3, unsigned color)
    engine->RegisterObjectBehaviour("DebugTriangle", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in, const Vector3&in, uint)", AS_FUNCTION_OBJFIRST(DebugTriangle_DebugTriangle_Vector3_Vector3_Vector3_unsigned), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_DebugTriangle
        REGISTER_CLASS_MANUAL_PART_DebugTriangle();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Decal
        REGISTER_CLASS_MANUAL_PART_Decal();
    #endif
}

// explicit DecalSet::DecalSet(Context* context)
static DecalSet* DecalSet_DecalSet_Context()
{
    Context* context = GetScriptContext();
    return new DecalSet(context);
}

// class DecalSet | File: ../Graphics/DecalSet.h
static void Register_DecalSet(asIScriptEngine* engine)
{
    // explicit DecalSet::DecalSet(Context* context)
    engine->RegisterObjectBehaviour("DecalSet", asBEHAVE_FACTORY, "DecalSet@+ f()", AS_FUNCTION(DecalSet_DecalSet_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_DecalSet
        REGISTER_CLASS_MANUAL_PART_DecalSet();
    #endif
}

// DecalVertex::DecalVertex(const Vector3& position, const Vector3& normal)
static void DecalVertex_DecalVertex_Vector3_Vector3(DecalVertex* ptr, const Vector3& position, const Vector3& normal)
{
    new(ptr) DecalVertex(position, normal);
}

// struct DecalVertex | File: ../Graphics/DecalSet.h
static void Register_DecalVertex(asIScriptEngine* engine)
{
    // DecalVertex::DecalVertex(const Vector3& position, const Vector3& normal, const float* blendWeights, const unsigned char* blendIndices)
    // Error: type "const float*" can not automatically bind

    // DecalVertex::DecalVertex(const Vector3& position, const Vector3& normal)
    engine->RegisterObjectBehaviour("DecalVertex", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(DecalVertex_DecalVertex_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_DecalVertex
        REGISTER_CLASS_MANUAL_PART_DecalVertex();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_DepthValue
        REGISTER_CLASS_MANUAL_PART_DepthValue();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Deserializer
        REGISTER_CLASS_MANUAL_PART_Deserializer();
    #endif
}

// DirtyBits::DirtyBits(const DirtyBits& bits)
static void DirtyBits_DirtyBits_DirtyBits(DirtyBits* ptr, const DirtyBits& bits)
{
    new(ptr) DirtyBits(bits);
}

// struct DirtyBits | File: ../Scene/ReplicationState.h
static void Register_DirtyBits(asIScriptEngine* engine)
{
    // DirtyBits::DirtyBits(const DirtyBits& bits)
    engine->RegisterObjectBehaviour("DirtyBits", asBEHAVE_CONSTRUCT, "void f(const DirtyBits&in)", AS_FUNCTION_OBJFIRST(DirtyBits_DirtyBits_DirtyBits), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_DirtyBits
        REGISTER_CLASS_MANUAL_PART_DirtyBits();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Drawable
        REGISTER_CLASS_MANUAL_PART_Drawable();
    #endif
}

// explicit DropDownList::DropDownList(Context* context)
static DropDownList* DropDownList_DropDownList_Context()
{
    Context* context = GetScriptContext();
    return new DropDownList(context);
}

// class DropDownList | File: ../UI/DropDownList.h
static void Register_DropDownList(asIScriptEngine* engine)
{
    // explicit DropDownList::DropDownList(Context* context)
    engine->RegisterObjectBehaviour("DropDownList", asBEHAVE_FACTORY, "DropDownList@+ f()", AS_FUNCTION(DropDownList_DropDownList_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_DropDownList
        REGISTER_CLASS_MANUAL_PART_DropDownList();
    #endif
}

// explicit Engine::Engine(Context* context)
static Engine* Engine_Engine_Context()
{
    Context* context = GetScriptContext();
    return new Engine(context);
}

// class Engine | File: ../Engine/Engine.h
static void Register_Engine(asIScriptEngine* engine)
{
    // explicit Engine::Engine(Context* context)
    engine->RegisterObjectBehaviour("Engine", asBEHAVE_FACTORY, "Engine@+ f()", AS_FUNCTION(Engine_Engine_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Engine
        REGISTER_CLASS_MANUAL_PART_Engine();
    #endif
}

// explicit EventProfiler::EventProfiler(Context* context)
static EventProfiler* EventProfiler_EventProfiler_Context()
{
    Context* context = GetScriptContext();
    return new EventProfiler(context);
}

// class EventProfiler | File: ../Core/EventProfiler.h
static void Register_EventProfiler(asIScriptEngine* engine)
{
    // explicit EventProfiler::EventProfiler(Context* context)
    engine->RegisterObjectBehaviour("EventProfiler", asBEHAVE_FACTORY, "EventProfiler@+ f()", AS_FUNCTION(EventProfiler_EventProfiler_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_EventProfiler
        REGISTER_CLASS_MANUAL_PART_EventProfiler();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_EventReceiverGroup
        REGISTER_CLASS_MANUAL_PART_EventReceiverGroup();
    #endif
}

// explicit File::File(Context* context)
static File* File_File_Context()
{
    Context* context = GetScriptContext();
    return new File(context);
}

// File::File(Context* context, const String& fileName, FileMode mode=FILE_READ)
static File* File_File_Context_String_FileMode(const String& fileName, FileMode mode)
{
    Context* context = GetScriptContext();
    return new File(context, fileName, mode);
}

// File::File(Context* context, PackageFile* package, const String& fileName)
static File* File_File_Context_PackageFile_String(PackageFile* package, const String& fileName)
{
    Context* context = GetScriptContext();
    return new File(context, package, fileName);
}

// class File | File: ../IO/File.h
static void Register_File(asIScriptEngine* engine)
{
    // explicit File::File(Context* context)
    engine->RegisterObjectBehaviour("File", asBEHAVE_FACTORY, "File@+ f()", AS_FUNCTION(File_File_Context) , AS_CALL_CDECL);
    // File::File(Context* context, const String& fileName, FileMode mode=FILE_READ)
    engine->RegisterObjectBehaviour("File", asBEHAVE_FACTORY, "File@+ f(const String&in, FileMode = FILE_READ)", AS_FUNCTION(File_File_Context_String_FileMode) , AS_CALL_CDECL);
    // File::File(Context* context, PackageFile* package, const String& fileName)
    engine->RegisterObjectBehaviour("File", asBEHAVE_FACTORY, "File@+ f(PackageFile@+, const String&in)", AS_FUNCTION(File_File_Context_PackageFile_String) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_File
        REGISTER_CLASS_MANUAL_PART_File();
    #endif
}

// explicit FileSelector::FileSelector(Context* context)
static FileSelector* FileSelector_FileSelector_Context()
{
    Context* context = GetScriptContext();
    return new FileSelector(context);
}

// class FileSelector | File: ../UI/FileSelector.h
static void Register_FileSelector(asIScriptEngine* engine)
{
    // explicit FileSelector::FileSelector(Context* context)
    engine->RegisterObjectBehaviour("FileSelector", asBEHAVE_FACTORY, "FileSelector@+ f()", AS_FUNCTION(FileSelector_FileSelector_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_FileSelector
        REGISTER_CLASS_MANUAL_PART_FileSelector();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_FileSelectorEntry
        REGISTER_CLASS_MANUAL_PART_FileSelectorEntry();
    #endif
}

// explicit FileSystem::FileSystem(Context* context)
static FileSystem* FileSystem_FileSystem_Context()
{
    Context* context = GetScriptContext();
    return new FileSystem(context);
}

// class FileSystem | File: ../IO/FileSystem.h
static void Register_FileSystem(asIScriptEngine* engine)
{
    // explicit FileSystem::FileSystem(Context* context)
    engine->RegisterObjectBehaviour("FileSystem", asBEHAVE_FACTORY, "FileSystem@+ f()", AS_FUNCTION(FileSystem_FileSystem_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_FileSystem
        REGISTER_CLASS_MANUAL_PART_FileSystem();
    #endif
}

// explicit FileWatcher::FileWatcher(Context* context)
static FileWatcher* FileWatcher_FileWatcher_Context()
{
    Context* context = GetScriptContext();
    return new FileWatcher(context);
}

// class FileWatcher | File: ../IO/FileWatcher.h
static void Register_FileWatcher(asIScriptEngine* engine)
{
    // explicit FileWatcher::FileWatcher(Context* context)
    engine->RegisterObjectBehaviour("FileWatcher", asBEHAVE_FACTORY, "FileWatcher@+ f()", AS_FUNCTION(FileWatcher_FileWatcher_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_FileWatcher
        REGISTER_CLASS_MANUAL_PART_FileWatcher();
    #endif
}

// FocusParameters::FocusParameters(bool focus, bool nonUniform, bool autoSize, float quantize, float minView)
static void FocusParameters_FocusParameters_bool_bool_bool_float_float(FocusParameters* ptr, bool focus, bool nonUniform, bool autoSize, float quantize, float minView)
{
    new(ptr) FocusParameters(focus, nonUniform, autoSize, quantize, minView);
}

// struct FocusParameters | File: ../Graphics/Light.h
static void Register_FocusParameters(asIScriptEngine* engine)
{
    // FocusParameters::FocusParameters(bool focus, bool nonUniform, bool autoSize, float quantize, float minView)
    engine->RegisterObjectBehaviour("FocusParameters", asBEHAVE_CONSTRUCT, "void f(bool, bool, bool, float, float)", AS_FUNCTION_OBJFIRST(FocusParameters_FocusParameters_bool_bool_bool_float_float), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_FocusParameters
        REGISTER_CLASS_MANUAL_PART_FocusParameters();
    #endif
}

// explicit Font::Font(Context* context)
static Font* Font_Font_Context()
{
    Context* context = GetScriptContext();
    return new Font(context);
}

// class Font | File: ../UI/Font.h
static void Register_Font(asIScriptEngine* engine)
{
    // explicit Font::Font(Context* context)
    engine->RegisterObjectBehaviour("Font", asBEHAVE_FACTORY, "Font@+ f()", AS_FUNCTION(Font_Font_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Font
        REGISTER_CLASS_MANUAL_PART_Font();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_FontFace
        REGISTER_CLASS_MANUAL_PART_FontFace();
    #endif
}

// explicit FontFaceBitmap::FontFaceBitmap(Font* font)
static FontFaceBitmap* FontFaceBitmap_FontFaceBitmap_Font(Font* font)
{
    return new FontFaceBitmap(font);
}

// class FontFaceBitmap | File: ../UI/FontFaceBitmap.h
static void Register_FontFaceBitmap(asIScriptEngine* engine)
{
    // explicit FontFaceBitmap::FontFaceBitmap(Font* font)
    engine->RegisterObjectBehaviour("FontFaceBitmap", asBEHAVE_FACTORY, "FontFaceBitmap@+ f(Font@+)", AS_FUNCTION(FontFaceBitmap_FontFaceBitmap_Font) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_FontFaceBitmap
        REGISTER_CLASS_MANUAL_PART_FontFaceBitmap();
    #endif
}

// explicit FontFaceFreeType::FontFaceFreeType(Font* font)
static FontFaceFreeType* FontFaceFreeType_FontFaceFreeType_Font(Font* font)
{
    return new FontFaceFreeType(font);
}

// class FontFaceFreeType | File: ../UI/FontFaceFreeType.h
static void Register_FontFaceFreeType(asIScriptEngine* engine)
{
    // explicit FontFaceFreeType::FontFaceFreeType(Font* font)
    engine->RegisterObjectBehaviour("FontFaceFreeType", asBEHAVE_FACTORY, "FontFaceFreeType@+ f(Font@+)", AS_FUNCTION(FontFaceFreeType_FontFaceFreeType_Font) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_FontFaceFreeType
        REGISTER_CLASS_MANUAL_PART_FontFaceFreeType();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_FontGlyph
        REGISTER_CLASS_MANUAL_PART_FontGlyph();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_FrameInfo
        REGISTER_CLASS_MANUAL_PART_FrameInfo();
    #endif
}

// Frustum::Frustum(const Frustum& frustum) noexcept
static void Frustum_Frustum_Frustum(Frustum* ptr, const Frustum& frustum)
{
    new(ptr) Frustum(frustum);
}

// class Frustum | File: ../Math/Frustum.h
static void Register_Frustum(asIScriptEngine* engine)
{
    // Frustum::Frustum(const Frustum& frustum) noexcept
    engine->RegisterObjectBehaviour("Frustum", asBEHAVE_CONSTRUCT, "void f(const Frustum&in)", AS_FUNCTION_OBJFIRST(Frustum_Frustum_Frustum), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_Frustum
        REGISTER_CLASS_MANUAL_PART_Frustum();
    #endif
}

// explicit GPUObject::GPUObject(Graphics* graphics)
static void GPUObject_GPUObject_Graphics(GPUObject* ptr, Graphics* graphics)
{
    new(ptr) GPUObject(graphics);
}

// class GPUObject | File: ../Graphics/GPUObject.h
static void Register_GPUObject(asIScriptEngine* engine)
{
    // explicit GPUObject::GPUObject(Graphics* graphics)
    engine->RegisterObjectBehaviour("GPUObject", asBEHAVE_CONSTRUCT, "void f(Graphics@+)", AS_FUNCTION_OBJFIRST(GPUObject_GPUObject_Graphics), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_GPUObject
        REGISTER_CLASS_MANUAL_PART_GPUObject();
    #endif
}

// explicit Geometry::Geometry(Context* context)
static Geometry* Geometry_Geometry_Context()
{
    Context* context = GetScriptContext();
    return new Geometry(context);
}

// class Geometry | File: ../Graphics/Geometry.h
static void Register_Geometry(asIScriptEngine* engine)
{
    // explicit Geometry::Geometry(Context* context)
    engine->RegisterObjectBehaviour("Geometry", asBEHAVE_FACTORY, "Geometry@+ f()", AS_FUNCTION(Geometry_Geometry_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Geometry
        REGISTER_CLASS_MANUAL_PART_Geometry();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_GeometryDesc
        REGISTER_CLASS_MANUAL_PART_GeometryDesc();
    #endif
}

// explicit Graphics::Graphics(Context* context)
static Graphics* Graphics_Graphics_Context()
{
    Context* context = GetScriptContext();
    return new Graphics(context);
}

// class Graphics | File: ../Graphics/Graphics.h
static void Register_Graphics(asIScriptEngine* engine)
{
    // explicit Graphics::Graphics(Context* context)
    engine->RegisterObjectBehaviour("Graphics", asBEHAVE_FACTORY, "Graphics@+ f()", AS_FUNCTION(Graphics_Graphics_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Graphics
        REGISTER_CLASS_MANUAL_PART_Graphics();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_HashBase
        REGISTER_CLASS_MANUAL_PART_HashBase();
    #endif
}

// struct HashIteratorBase | File: ../Container/HashBase.h
static void Register_HashIteratorBase(asIScriptEngine* engine)
{
    // explicit HashIteratorBase::HashIteratorBase(HashNodeBase* ptr)
    // Error: type "HashNodeBase*" can not automatically bind


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

    #ifdef REGISTER_CLASS_MANUAL_PART_HashIteratorBase
        REGISTER_CLASS_MANUAL_PART_HashIteratorBase();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_HashNodeBase
        REGISTER_CLASS_MANUAL_PART_HashNodeBase();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_HiresTimer
        REGISTER_CLASS_MANUAL_PART_HiresTimer();
    #endif
}

// explicit Image::Image(Context* context)
static Image* Image_Image_Context()
{
    Context* context = GetScriptContext();
    return new Image(context);
}

// class Image | File: ../Resource/Image.h
static void Register_Image(asIScriptEngine* engine)
{
    // explicit Image::Image(Context* context)
    engine->RegisterObjectBehaviour("Image", asBEHAVE_FACTORY, "Image@+ f()", AS_FUNCTION(Image_Image_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Image
        REGISTER_CLASS_MANUAL_PART_Image();
    #endif
}

// explicit IndexBuffer::IndexBuffer(Context* context, bool forceHeadless=false)
static IndexBuffer* IndexBuffer_IndexBuffer_Context_bool(bool forceHeadless)
{
    Context* context = GetScriptContext();
    return new IndexBuffer(context, forceHeadless);
}

// class IndexBuffer | File: ../Graphics/IndexBuffer.h
static void Register_IndexBuffer(asIScriptEngine* engine)
{
    // explicit IndexBuffer::IndexBuffer(Context* context, bool forceHeadless=false)
    engine->RegisterObjectBehaviour("IndexBuffer", asBEHAVE_FACTORY, "IndexBuffer@+ f(bool = false)", AS_FUNCTION(IndexBuffer_IndexBuffer_Context_bool) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_IndexBuffer
        REGISTER_CLASS_MANUAL_PART_IndexBuffer();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_IndexBufferDesc
        REGISTER_CLASS_MANUAL_PART_IndexBufferDesc();
    #endif
}

// explicit Input::Input(Context* context)
static Input* Input_Input_Context()
{
    Context* context = GetScriptContext();
    return new Input(context);
}

// class Input | File: ../Input/Input.h
static void Register_Input(asIScriptEngine* engine)
{
    // explicit Input::Input(Context* context)
    engine->RegisterObjectBehaviour("Input", asBEHAVE_FACTORY, "Input@+ f()", AS_FUNCTION(Input_Input_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Input
        REGISTER_CLASS_MANUAL_PART_Input();
    #endif
}

// struct InstanceData | File: ../Graphics/Batch.h
static void Register_InstanceData(asIScriptEngine* engine)
{
    // InstanceData::InstanceData(const Matrix3x4* worldTransform, const void* instancingData, float distance)
    // Error: type "const Matrix3x4*" can not automatically bind


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

    #ifdef REGISTER_CLASS_MANUAL_PART_InstanceData
        REGISTER_CLASS_MANUAL_PART_InstanceData();
    #endif
}

// IntRect::IntRect(const IntVector2& min, const IntVector2& max) noexcept
static void IntRect_IntRect_IntVector2_IntVector2(IntRect* ptr, const IntVector2& min, const IntVector2& max)
{
    new(ptr) IntRect(min, max);
}

// IntRect::IntRect(int left, int top, int right, int bottom) noexcept
static void IntRect_IntRect_int_int_int_int(IntRect* ptr, int left, int top, int right, int bottom)
{
    new(ptr) IntRect(left, top, right, bottom);
}

// class IntRect | File: ../Math/Rect.h
static void Register_IntRect(asIScriptEngine* engine)
{
    // explicit IntRect::IntRect(const int* data) noexcept
    // Error: type "const int*" can not automatically bind

    // IntRect::IntRect(const IntVector2& min, const IntVector2& max) noexcept
    engine->RegisterObjectBehaviour("IntRect", asBEHAVE_CONSTRUCT, "void f(const IntVector2&in, const IntVector2&in)", AS_FUNCTION_OBJFIRST(IntRect_IntRect_IntVector2_IntVector2), AS_CALL_CDECL_OBJFIRST);
    // IntRect::IntRect(int left, int top, int right, int bottom) noexcept
    engine->RegisterObjectBehaviour("IntRect", asBEHAVE_CONSTRUCT, "void f(int, int, int, int)", AS_FUNCTION_OBJFIRST(IntRect_IntRect_int_int_int_int), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_IntRect
        REGISTER_CLASS_MANUAL_PART_IntRect();
    #endif
}

// IntVector2::IntVector2(int x, int y) noexcept
static void IntVector2_IntVector2_int_int(IntVector2* ptr, int x, int y)
{
    new(ptr) IntVector2(x, y);
}

// IntVector2::IntVector2(const IntVector2& rhs) noexcept=default
static void IntVector2_IntVector2_IntVector2(IntVector2* ptr, const IntVector2& rhs)
{
    new(ptr) IntVector2(rhs);
}

// class IntVector2 | File: ../Math/Vector2.h
static void Register_IntVector2(asIScriptEngine* engine)
{
    // explicit IntVector2::IntVector2(const float* data)
    // Error: type "const float*" can not automatically bind
    // explicit IntVector2::IntVector2(const int* data) noexcept
    // Error: type "const int*" can not automatically bind

    // IntVector2::IntVector2(int x, int y) noexcept
    engine->RegisterObjectBehaviour("IntVector2", asBEHAVE_CONSTRUCT, "void f(int, int)", AS_FUNCTION_OBJFIRST(IntVector2_IntVector2_int_int), AS_CALL_CDECL_OBJFIRST);
    // IntVector2::IntVector2(const IntVector2& rhs) noexcept=default
    engine->RegisterObjectBehaviour("IntVector2", asBEHAVE_CONSTRUCT, "void f(const IntVector2&in)", AS_FUNCTION_OBJFIRST(IntVector2_IntVector2_IntVector2), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_IntVector2
        REGISTER_CLASS_MANUAL_PART_IntVector2();
    #endif
}

// IntVector3::IntVector3(int x, int y, int z) noexcept
static void IntVector3_IntVector3_int_int_int(IntVector3* ptr, int x, int y, int z)
{
    new(ptr) IntVector3(x, y, z);
}

// IntVector3::IntVector3(const IntVector3& rhs) noexcept=default
static void IntVector3_IntVector3_IntVector3(IntVector3* ptr, const IntVector3& rhs)
{
    new(ptr) IntVector3(rhs);
}

// class IntVector3 | File: ../Math/Vector3.h
static void Register_IntVector3(asIScriptEngine* engine)
{
    // explicit IntVector3::IntVector3(const int* data) noexcept
    // Error: type "const int*" can not automatically bind

    // IntVector3::IntVector3(int x, int y, int z) noexcept
    engine->RegisterObjectBehaviour("IntVector3", asBEHAVE_CONSTRUCT, "void f(int, int, int)", AS_FUNCTION_OBJFIRST(IntVector3_IntVector3_int_int_int), AS_CALL_CDECL_OBJFIRST);
    // IntVector3::IntVector3(const IntVector3& rhs) noexcept=default
    engine->RegisterObjectBehaviour("IntVector3", asBEHAVE_CONSTRUCT, "void f(const IntVector3&in)", AS_FUNCTION_OBJFIRST(IntVector3_IntVector3_IntVector3), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_IntVector3
        REGISTER_CLASS_MANUAL_PART_IntVector3();
    #endif
}

// explicit JSONFile::JSONFile(Context* context)
static JSONFile* JSONFile_JSONFile_Context()
{
    Context* context = GetScriptContext();
    return new JSONFile(context);
}

// class JSONFile | File: ../Resource/JSONFile.h
static void Register_JSONFile(asIScriptEngine* engine)
{
    // explicit JSONFile::JSONFile(Context* context)
    engine->RegisterObjectBehaviour("JSONFile", asBEHAVE_FACTORY, "JSONFile@+ f()", AS_FUNCTION(JSONFile_JSONFile_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_JSONFile
        REGISTER_CLASS_MANUAL_PART_JSONFile();
    #endif
}

// JSONValue::JSONValue(bool value)
static void JSONValue_JSONValue_bool(JSONValue* ptr, bool value)
{
    new(ptr) JSONValue(value);
}

// JSONValue::JSONValue(int value)
static void JSONValue_JSONValue_int(JSONValue* ptr, int value)
{
    new(ptr) JSONValue(value);
}

// JSONValue::JSONValue(unsigned value)
static void JSONValue_JSONValue_unsigned(JSONValue* ptr, unsigned value)
{
    new(ptr) JSONValue(value);
}

// JSONValue::JSONValue(float value)
static void JSONValue_JSONValue_float(JSONValue* ptr, float value)
{
    new(ptr) JSONValue(value);
}

// JSONValue::JSONValue(double value)
static void JSONValue_JSONValue_double(JSONValue* ptr, double value)
{
    new(ptr) JSONValue(value);
}

// JSONValue::JSONValue(const String& value)
static void JSONValue_JSONValue_String(JSONValue* ptr, const String& value)
{
    new(ptr) JSONValue(value);
}

// JSONValue::JSONValue(const JSONValue& value)
static void JSONValue_JSONValue_JSONValue(JSONValue* ptr, const JSONValue& value)
{
    new(ptr) JSONValue(value);
}

// class JSONValue | File: ../Resource/JSONValue.h
static void Register_JSONValue(asIScriptEngine* engine)
{
    // JSONValue::JSONValue(const JSONArray& value)
    // Error: type "const JSONArray&" can not automatically bind
    // JSONValue::JSONValue(const JSONObject& value)
    // Error: type "const JSONObject&" can not automatically bind
    // JSONValue::JSONValue(const char* value)
    // Error: type "const char*" can not automatically bind

    // JSONValue::JSONValue(bool value)
    engine->RegisterObjectBehaviour("JSONValue", asBEHAVE_CONSTRUCT, "void f(bool)", AS_FUNCTION_OBJFIRST(JSONValue_JSONValue_bool), AS_CALL_CDECL_OBJFIRST);
    // JSONValue::JSONValue(int value)
    engine->RegisterObjectBehaviour("JSONValue", asBEHAVE_CONSTRUCT, "void f(int)", AS_FUNCTION_OBJFIRST(JSONValue_JSONValue_int), AS_CALL_CDECL_OBJFIRST);
    // JSONValue::JSONValue(unsigned value)
    engine->RegisterObjectBehaviour("JSONValue", asBEHAVE_CONSTRUCT, "void f(uint)", AS_FUNCTION_OBJFIRST(JSONValue_JSONValue_unsigned), AS_CALL_CDECL_OBJFIRST);
    // JSONValue::JSONValue(float value)
    engine->RegisterObjectBehaviour("JSONValue", asBEHAVE_CONSTRUCT, "void f(float)", AS_FUNCTION_OBJFIRST(JSONValue_JSONValue_float), AS_CALL_CDECL_OBJFIRST);
    // JSONValue::JSONValue(double value)
    engine->RegisterObjectBehaviour("JSONValue", asBEHAVE_CONSTRUCT, "void f(double)", AS_FUNCTION_OBJFIRST(JSONValue_JSONValue_double), AS_CALL_CDECL_OBJFIRST);
    // JSONValue::JSONValue(const String& value)
    engine->RegisterObjectBehaviour("JSONValue", asBEHAVE_CONSTRUCT, "void f(const String&in)", AS_FUNCTION_OBJFIRST(JSONValue_JSONValue_String), AS_CALL_CDECL_OBJFIRST);
    // JSONValue::JSONValue(const JSONValue& value)
    engine->RegisterObjectBehaviour("JSONValue", asBEHAVE_CONSTRUCT, "void f(const JSONValue&in)", AS_FUNCTION_OBJFIRST(JSONValue_JSONValue_JSONValue), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_JSONValue
        REGISTER_CLASS_MANUAL_PART_JSONValue();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_JoystickState
        REGISTER_CLASS_MANUAL_PART_JoystickState();
    #endif
}

// explicit Light::Light(Context* context)
static Light* Light_Light_Context()
{
    Context* context = GetScriptContext();
    return new Light(context);
}

// class Light | File: ../Graphics/Light.h
static void Register_Light(asIScriptEngine* engine)
{
    // explicit Light::Light(Context* context)
    engine->RegisterObjectBehaviour("Light", asBEHAVE_FACTORY, "Light@+ f()", AS_FUNCTION(Light_Light_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Light
        REGISTER_CLASS_MANUAL_PART_Light();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_LightBatchQueue
        REGISTER_CLASS_MANUAL_PART_LightBatchQueue();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_LightQueryResult
        REGISTER_CLASS_MANUAL_PART_LightQueryResult();
    #endif
}

// explicit LineEdit::LineEdit(Context* context)
static LineEdit* LineEdit_LineEdit_Context()
{
    Context* context = GetScriptContext();
    return new LineEdit(context);
}

// class LineEdit | File: ../UI/LineEdit.h
static void Register_LineEdit(asIScriptEngine* engine)
{
    // explicit LineEdit::LineEdit(Context* context)
    engine->RegisterObjectBehaviour("LineEdit", asBEHAVE_FACTORY, "LineEdit@+ f()", AS_FUNCTION(LineEdit_LineEdit_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_LineEdit
        REGISTER_CLASS_MANUAL_PART_LineEdit();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_LinkedListNode
        REGISTER_CLASS_MANUAL_PART_LinkedListNode();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ListBase
        REGISTER_CLASS_MANUAL_PART_ListBase();
    #endif
}

// struct ListIteratorBase | File: ../Container/ListBase.h
static void Register_ListIteratorBase(asIScriptEngine* engine)
{
    // explicit ListIteratorBase::ListIteratorBase(ListNodeBase* ptr)
    // Error: type "ListNodeBase*" can not automatically bind


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

    #ifdef REGISTER_CLASS_MANUAL_PART_ListIteratorBase
        REGISTER_CLASS_MANUAL_PART_ListIteratorBase();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ListNodeBase
        REGISTER_CLASS_MANUAL_PART_ListNodeBase();
    #endif
}

// explicit ListView::ListView(Context* context)
static ListView* ListView_ListView_Context()
{
    Context* context = GetScriptContext();
    return new ListView(context);
}

// class ListView | File: ../UI/ListView.h
static void Register_ListView(asIScriptEngine* engine)
{
    // explicit ListView::ListView(Context* context)
    engine->RegisterObjectBehaviour("ListView", asBEHAVE_FACTORY, "ListView@+ f()", AS_FUNCTION(ListView_ListView_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ListView
        REGISTER_CLASS_MANUAL_PART_ListView();
    #endif
}

// explicit Localization::Localization(Context* context)
static Localization* Localization_Localization_Context()
{
    Context* context = GetScriptContext();
    return new Localization(context);
}

// class Localization | File: ../Resource/Localization.h
static void Register_Localization(asIScriptEngine* engine)
{
    // explicit Localization::Localization(Context* context)
    engine->RegisterObjectBehaviour("Localization", asBEHAVE_FACTORY, "Localization@+ f()", AS_FUNCTION(Localization_Localization_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Localization
        REGISTER_CLASS_MANUAL_PART_Localization();
    #endif
}

// explicit Log::Log(Context* context)
static Log* Log_Log_Context()
{
    Context* context = GetScriptContext();
    return new Log(context);
}

// class Log | File: ../IO/Log.h
static void Register_Log(asIScriptEngine* engine)
{
    // explicit Log::Log(Context* context)
    engine->RegisterObjectBehaviour("Log", asBEHAVE_FACTORY, "Log@+ f()", AS_FUNCTION(Log_Log_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Log
        REGISTER_CLASS_MANUAL_PART_Log();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_LogicComponent
        REGISTER_CLASS_MANUAL_PART_LogicComponent();
    #endif
}

// explicit Material::Material(Context* context)
static Material* Material_Material_Context()
{
    Context* context = GetScriptContext();
    return new Material(context);
}

// class Material | File: ../Graphics/Material.h
static void Register_Material(asIScriptEngine* engine)
{
    // explicit Material::Material(Context* context)
    engine->RegisterObjectBehaviour("Material", asBEHAVE_FACTORY, "Material@+ f()", AS_FUNCTION(Material_Material_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Material
        REGISTER_CLASS_MANUAL_PART_Material();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_MaterialShaderParameter
        REGISTER_CLASS_MANUAL_PART_MaterialShaderParameter();
    #endif
}

// Matrix2::Matrix2(const Matrix2& matrix) noexcept=default
static void Matrix2_Matrix2_Matrix2(Matrix2* ptr, const Matrix2& matrix)
{
    new(ptr) Matrix2(matrix);
}

// Matrix2::Matrix2(float v00, float v01, float v10, float v11) noexcept
static void Matrix2_Matrix2_float_float_float_float(Matrix2* ptr, float v00, float v01, float v10, float v11)
{
    new(ptr) Matrix2(v00, v01, v10, v11);
}

// class Matrix2 | File: ../Math/Matrix2.h
static void Register_Matrix2(asIScriptEngine* engine)
{
    // explicit Matrix2::Matrix2(const float* data) noexcept
    // Error: type "const float*" can not automatically bind

    // Matrix2::Matrix2(const Matrix2& matrix) noexcept=default
    engine->RegisterObjectBehaviour("Matrix2", asBEHAVE_CONSTRUCT, "void f(const Matrix2&in)", AS_FUNCTION_OBJFIRST(Matrix2_Matrix2_Matrix2), AS_CALL_CDECL_OBJFIRST);
    // Matrix2::Matrix2(float v00, float v01, float v10, float v11) noexcept
    engine->RegisterObjectBehaviour("Matrix2", asBEHAVE_CONSTRUCT, "void f(float, float, float, float)", AS_FUNCTION_OBJFIRST(Matrix2_Matrix2_float_float_float_float), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Matrix2
        REGISTER_CLASS_MANUAL_PART_Matrix2();
    #endif
}

// Matrix3::Matrix3(const Matrix3& matrix) noexcept=default
static void Matrix3_Matrix3_Matrix3(Matrix3* ptr, const Matrix3& matrix)
{
    new(ptr) Matrix3(matrix);
}

// Matrix3::Matrix3(float v00, float v01, float v02, float v10, float v11, float v12, float v20, float v21, float v22) noexcept
static void Matrix3_Matrix3_float_float_float_float_float_float_float_float_float(Matrix3* ptr, float v00, float v01, float v02, float v10, float v11, float v12, float v20, float v21, float v22)
{
    new(ptr) Matrix3(v00, v01, v02, v10, v11, v12, v20, v21, v22);
}

// class Matrix3 | File: ../Math/Matrix3.h
static void Register_Matrix3(asIScriptEngine* engine)
{
    // explicit Matrix3::Matrix3(const float* data) noexcept
    // Error: type "const float*" can not automatically bind

    // Matrix3::Matrix3(const Matrix3& matrix) noexcept=default
    engine->RegisterObjectBehaviour("Matrix3", asBEHAVE_CONSTRUCT, "void f(const Matrix3&in)", AS_FUNCTION_OBJFIRST(Matrix3_Matrix3_Matrix3), AS_CALL_CDECL_OBJFIRST);
    // Matrix3::Matrix3(float v00, float v01, float v02, float v10, float v11, float v12, float v20, float v21, float v22) noexcept
    engine->RegisterObjectBehaviour("Matrix3", asBEHAVE_CONSTRUCT, "void f(float, float, float, float, float, float, float, float, float)", AS_FUNCTION_OBJFIRST(Matrix3_Matrix3_float_float_float_float_float_float_float_float_float), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Matrix3
        REGISTER_CLASS_MANUAL_PART_Matrix3();
    #endif
}

// Matrix3x4::Matrix3x4(const Matrix3x4& matrix) noexcept=default
static void Matrix3x4_Matrix3x4_Matrix3x4(Matrix3x4* ptr, const Matrix3x4& matrix)
{
    new(ptr) Matrix3x4(matrix);
}

// explicit Matrix3x4::Matrix3x4(const Matrix3& matrix) noexcept
static void Matrix3x4_Matrix3x4_Matrix3(Matrix3x4* ptr, const Matrix3& matrix)
{
    new(ptr) Matrix3x4(matrix);
}

// explicit Matrix3x4::Matrix3x4(const Matrix4& matrix) noexcept
static void Matrix3x4_Matrix3x4_Matrix4(Matrix3x4* ptr, const Matrix4& matrix)
{
    new(ptr) Matrix3x4(matrix);
}

// Matrix3x4::Matrix3x4(float v00, float v01, float v02, float v03, float v10, float v11, float v12, float v13, float v20, float v21, float v22, float v23) noexcept
static void Matrix3x4_Matrix3x4_float_float_float_float_float_float_float_float_float_float_float_float(Matrix3x4* ptr, float v00, float v01, float v02, float v03, float v10, float v11, float v12, float v13, float v20, float v21, float v22, float v23)
{
    new(ptr) Matrix3x4(v00, v01, v02, v03, v10, v11, v12, v13, v20, v21, v22, v23);
}

// Matrix3x4::Matrix3x4(const Vector3& translation, const Quaternion& rotation, float scale) noexcept
static void Matrix3x4_Matrix3x4_Vector3_Quaternion_float(Matrix3x4* ptr, const Vector3& translation, const Quaternion& rotation, float scale)
{
    new(ptr) Matrix3x4(translation, rotation, scale);
}

// Matrix3x4::Matrix3x4(const Vector3& translation, const Quaternion& rotation, const Vector3& scale) noexcept
static void Matrix3x4_Matrix3x4_Vector3_Quaternion_Vector3(Matrix3x4* ptr, const Vector3& translation, const Quaternion& rotation, const Vector3& scale)
{
    new(ptr) Matrix3x4(translation, rotation, scale);
}

// class Matrix3x4 | File: ../Math/Matrix3x4.h
static void Register_Matrix3x4(asIScriptEngine* engine)
{
    // explicit Matrix3x4::Matrix3x4(const float* data) noexcept
    // Error: type "const float*" can not automatically bind

    // Matrix3x4::Matrix3x4(const Matrix3x4& matrix) noexcept=default
    engine->RegisterObjectBehaviour("Matrix3x4", asBEHAVE_CONSTRUCT, "void f(const Matrix3x4&in)", AS_FUNCTION_OBJFIRST(Matrix3x4_Matrix3x4_Matrix3x4), AS_CALL_CDECL_OBJFIRST);
    // explicit Matrix3x4::Matrix3x4(const Matrix3& matrix) noexcept
    engine->RegisterObjectBehaviour("Matrix3x4", asBEHAVE_CONSTRUCT, "void f(const Matrix3&in)", AS_FUNCTION_OBJFIRST(Matrix3x4_Matrix3x4_Matrix3), AS_CALL_CDECL_OBJFIRST);
    // explicit Matrix3x4::Matrix3x4(const Matrix4& matrix) noexcept
    engine->RegisterObjectBehaviour("Matrix3x4", asBEHAVE_CONSTRUCT, "void f(const Matrix4&in)", AS_FUNCTION_OBJFIRST(Matrix3x4_Matrix3x4_Matrix4), AS_CALL_CDECL_OBJFIRST);
    // Matrix3x4::Matrix3x4(float v00, float v01, float v02, float v03, float v10, float v11, float v12, float v13, float v20, float v21, float v22, float v23) noexcept
    engine->RegisterObjectBehaviour("Matrix3x4", asBEHAVE_CONSTRUCT, "void f(float, float, float, float, float, float, float, float, float, float, float, float)", AS_FUNCTION_OBJFIRST(Matrix3x4_Matrix3x4_float_float_float_float_float_float_float_float_float_float_float_float), AS_CALL_CDECL_OBJFIRST);
    // Matrix3x4::Matrix3x4(const Vector3& translation, const Quaternion& rotation, float scale) noexcept
    engine->RegisterObjectBehaviour("Matrix3x4", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Quaternion&in, float)", AS_FUNCTION_OBJFIRST(Matrix3x4_Matrix3x4_Vector3_Quaternion_float), AS_CALL_CDECL_OBJFIRST);
    // Matrix3x4::Matrix3x4(const Vector3& translation, const Quaternion& rotation, const Vector3& scale) noexcept
    engine->RegisterObjectBehaviour("Matrix3x4", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Quaternion&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(Matrix3x4_Matrix3x4_Vector3_Quaternion_Vector3), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Matrix3x4
        REGISTER_CLASS_MANUAL_PART_Matrix3x4();
    #endif
}

// Matrix4::Matrix4(const Matrix4& matrix) noexcept
static void Matrix4_Matrix4_Matrix4(Matrix4* ptr, const Matrix4& matrix)
{
    new(ptr) Matrix4(matrix);
}

// explicit Matrix4::Matrix4(const Matrix3& matrix) noexcept
static void Matrix4_Matrix4_Matrix3(Matrix4* ptr, const Matrix3& matrix)
{
    new(ptr) Matrix4(matrix);
}

// Matrix4::Matrix4(float v00, float v01, float v02, float v03, float v10, float v11, float v12, float v13, float v20, float v21, float v22, float v23, float v30, float v31, float v32, float v33) noexcept
static void Matrix4_Matrix4_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float(Matrix4* ptr, float v00, float v01, float v02, float v03, float v10, float v11, float v12, float v13, float v20, float v21, float v22, float v23, float v30, float v31, float v32, float v33)
{
    new(ptr) Matrix4(v00, v01, v02, v03, v10, v11, v12, v13, v20, v21, v22, v23, v30, v31, v32, v33);
}

// class Matrix4 | File: ../Math/Matrix4.h
static void Register_Matrix4(asIScriptEngine* engine)
{
    // explicit Matrix4::Matrix4(const float* data) noexcept
    // Error: type "const float*" can not automatically bind

    // Matrix4::Matrix4(const Matrix4& matrix) noexcept
    engine->RegisterObjectBehaviour("Matrix4", asBEHAVE_CONSTRUCT, "void f(const Matrix4&in)", AS_FUNCTION_OBJFIRST(Matrix4_Matrix4_Matrix4), AS_CALL_CDECL_OBJFIRST);
    // explicit Matrix4::Matrix4(const Matrix3& matrix) noexcept
    engine->RegisterObjectBehaviour("Matrix4", asBEHAVE_CONSTRUCT, "void f(const Matrix3&in)", AS_FUNCTION_OBJFIRST(Matrix4_Matrix4_Matrix3), AS_CALL_CDECL_OBJFIRST);
    // Matrix4::Matrix4(float v00, float v01, float v02, float v03, float v10, float v11, float v12, float v13, float v20, float v21, float v22, float v23, float v30, float v31, float v32, float v33) noexcept
    engine->RegisterObjectBehaviour("Matrix4", asBEHAVE_CONSTRUCT, "void f(float, float, float, float, float, float, float, float, float, float, float, float, float, float, float, float)", AS_FUNCTION_OBJFIRST(Matrix4_Matrix4_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Matrix4
        REGISTER_CLASS_MANUAL_PART_Matrix4();
    #endif
}

// explicit Menu::Menu(Context* context)
static Menu* Menu_Menu_Context()
{
    Context* context = GetScriptContext();
    return new Menu(context);
}

// class Menu | File: ../UI/Menu.h
static void Register_Menu(asIScriptEngine* engine)
{
    // explicit Menu::Menu(Context* context)
    engine->RegisterObjectBehaviour("Menu", asBEHAVE_FACTORY, "Menu@+ f()", AS_FUNCTION(Menu_Menu_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Menu
        REGISTER_CLASS_MANUAL_PART_Menu();
    #endif
}

// explicit MessageBox::MessageBox(Context* context, const String& messageString=String::EMPTY, const String& titleString=String::EMPTY, XMLFile* layoutFile=nullptr, XMLFile* styleFile=nullptr)
static MessageBox* MessageBox_MessageBox_Context_String_String_XMLFile_XMLFile(const String& messageString, const String& titleString, XMLFile* layoutFile, XMLFile* styleFile)
{
    Context* context = GetScriptContext();
    return new MessageBox(context, messageString, titleString, layoutFile, styleFile);
}

// class MessageBox | File: ../UI/MessageBox.h
static void Register_MessageBox(asIScriptEngine* engine)
{
    // explicit MessageBox::MessageBox(Context* context, const String& messageString=String::EMPTY, const String& titleString=String::EMPTY, XMLFile* layoutFile=nullptr, XMLFile* styleFile=nullptr)
    engine->RegisterObjectBehaviour("MessageBox", asBEHAVE_FACTORY, "MessageBox@+ f(const String&in = String::EMPTY, const String&in = String::EMPTY, XMLFile@+ = null, XMLFile@+ = null)", AS_FUNCTION(MessageBox_MessageBox_Context_String_String_XMLFile_XMLFile) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_MessageBox
        REGISTER_CLASS_MANUAL_PART_MessageBox();
    #endif
}

// explicit Model::Model(Context* context)
static Model* Model_Model_Context()
{
    Context* context = GetScriptContext();
    return new Model(context);
}

// class Model | File: ../Graphics/Model.h
static void Register_Model(asIScriptEngine* engine)
{
    // explicit Model::Model(Context* context)
    engine->RegisterObjectBehaviour("Model", asBEHAVE_FACTORY, "Model@+ f()", AS_FUNCTION(Model_Model_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Model
        REGISTER_CLASS_MANUAL_PART_Model();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ModelMorph
        REGISTER_CLASS_MANUAL_PART_ModelMorph();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Mutex
        REGISTER_CLASS_MANUAL_PART_Mutex();
    #endif
}

// explicit MutexLock::MutexLock(Mutex& mutex)
static void MutexLock_MutexLock_Mutex(MutexLock* ptr, Mutex& mutex)
{
    new(ptr) MutexLock(mutex);
}

// class MutexLock | File: ../Core/Mutex.h
static void Register_MutexLock(asIScriptEngine* engine)
{
    // MutexLock::MutexLock(const MutexLock& rhs)=delete
    // Not registered because deleted

    // explicit MutexLock::MutexLock(Mutex& mutex)
    engine->RegisterObjectBehaviour("MutexLock", asBEHAVE_CONSTRUCT, "void f(Mutex&)", AS_FUNCTION_OBJFIRST(MutexLock_MutexLock_Mutex), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_MutexLock
        REGISTER_CLASS_MANUAL_PART_MutexLock();
    #endif
}

// explicit NamedPipe::NamedPipe(Context* context)
static NamedPipe* NamedPipe_NamedPipe_Context()
{
    Context* context = GetScriptContext();
    return new NamedPipe(context);
}

// NamedPipe::NamedPipe(Context* context, const String& name, bool isServer)
static NamedPipe* NamedPipe_NamedPipe_Context_String_bool(const String& name, bool isServer)
{
    Context* context = GetScriptContext();
    return new NamedPipe(context, name, isServer);
}

// class NamedPipe | File: ../IO/NamedPipe.h
static void Register_NamedPipe(asIScriptEngine* engine)
{
    // explicit NamedPipe::NamedPipe(Context* context)
    engine->RegisterObjectBehaviour("NamedPipe", asBEHAVE_FACTORY, "NamedPipe@+ f()", AS_FUNCTION(NamedPipe_NamedPipe_Context) , AS_CALL_CDECL);
    // NamedPipe::NamedPipe(Context* context, const String& name, bool isServer)
    engine->RegisterObjectBehaviour("NamedPipe", asBEHAVE_FACTORY, "NamedPipe@+ f(const String&in, bool)", AS_FUNCTION(NamedPipe_NamedPipe_Context_String_bool) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_NamedPipe
        REGISTER_CLASS_MANUAL_PART_NamedPipe();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_NetworkState
        REGISTER_CLASS_MANUAL_PART_NetworkState();
    #endif
}

// explicit Node::Node(Context* context)
static Node* Node_Node_Context()
{
    Context* context = GetScriptContext();
    return new Node(context);
}

// class Node | File: ../Scene/Node.h
static void Register_Node(asIScriptEngine* engine)
{
    // explicit Node::Node(Context* context)
    engine->RegisterObjectBehaviour("Node", asBEHAVE_FACTORY, "Node@+ f()", AS_FUNCTION(Node_Node_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Node
        REGISTER_CLASS_MANUAL_PART_Node();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_NodeImpl
        REGISTER_CLASS_MANUAL_PART_NodeImpl();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_NodeReplicationState
        REGISTER_CLASS_MANUAL_PART_NodeReplicationState();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Object
        REGISTER_CLASS_MANUAL_PART_Object();
    #endif
}

// explicit ObjectAnimation::ObjectAnimation(Context* context)
static ObjectAnimation* ObjectAnimation_ObjectAnimation_Context()
{
    Context* context = GetScriptContext();
    return new ObjectAnimation(context);
}

// class ObjectAnimation | File: ../Scene/ObjectAnimation.h
static void Register_ObjectAnimation(asIScriptEngine* engine)
{
    // explicit ObjectAnimation::ObjectAnimation(Context* context)
    engine->RegisterObjectBehaviour("ObjectAnimation", asBEHAVE_FACTORY, "ObjectAnimation@+ f()", AS_FUNCTION(ObjectAnimation_ObjectAnimation_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ObjectAnimation
        REGISTER_CLASS_MANUAL_PART_ObjectAnimation();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ObjectFactory
        REGISTER_CLASS_MANUAL_PART_ObjectFactory();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_OcclusionBatch
        REGISTER_CLASS_MANUAL_PART_OcclusionBatch();
    #endif
}

// explicit OcclusionBuffer::OcclusionBuffer(Context* context)
static OcclusionBuffer* OcclusionBuffer_OcclusionBuffer_Context()
{
    Context* context = GetScriptContext();
    return new OcclusionBuffer(context);
}

// class OcclusionBuffer | File: ../Graphics/OcclusionBuffer.h
static void Register_OcclusionBuffer(asIScriptEngine* engine)
{
    // explicit OcclusionBuffer::OcclusionBuffer(Context* context)
    engine->RegisterObjectBehaviour("OcclusionBuffer", asBEHAVE_FACTORY, "OcclusionBuffer@+ f()", AS_FUNCTION(OcclusionBuffer_OcclusionBuffer_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_OcclusionBuffer
        REGISTER_CLASS_MANUAL_PART_OcclusionBuffer();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_OcclusionBufferData
        REGISTER_CLASS_MANUAL_PART_OcclusionBufferData();
    #endif
}

// explicit Octree::Octree(Context* context)
static Octree* Octree_Octree_Context()
{
    Context* context = GetScriptContext();
    return new Octree(context);
}

// class Octree | File: ../Graphics/Octree.h
static void Register_Octree(asIScriptEngine* engine)
{
    // explicit Octree::Octree(Context* context)
    engine->RegisterObjectBehaviour("Octree", asBEHAVE_FACTORY, "Octree@+ f()", AS_FUNCTION(Octree_Octree_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Octree
        REGISTER_CLASS_MANUAL_PART_Octree();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_OctreeQueryResult
        REGISTER_CLASS_MANUAL_PART_OctreeQueryResult();
    #endif
}

// explicit OggVorbisSoundStream::OggVorbisSoundStream(const Sound* sound)
static OggVorbisSoundStream* OggVorbisSoundStream_OggVorbisSoundStream_Sound(const Sound* sound)
{
    return new OggVorbisSoundStream(sound);
}

// class OggVorbisSoundStream | File: ../Audio/OggVorbisSoundStream.h
static void Register_OggVorbisSoundStream(asIScriptEngine* engine)
{
    // explicit OggVorbisSoundStream::OggVorbisSoundStream(const Sound* sound)
    engine->RegisterObjectBehaviour("OggVorbisSoundStream", asBEHAVE_FACTORY, "OggVorbisSoundStream@+ f(Sound@+)", AS_FUNCTION(OggVorbisSoundStream_OggVorbisSoundStream_Sound) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_OggVorbisSoundStream
        REGISTER_CLASS_MANUAL_PART_OggVorbisSoundStream();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_PackageEntry
        REGISTER_CLASS_MANUAL_PART_PackageEntry();
    #endif
}

// explicit PackageFile::PackageFile(Context* context)
static PackageFile* PackageFile_PackageFile_Context()
{
    Context* context = GetScriptContext();
    return new PackageFile(context);
}

// PackageFile::PackageFile(Context* context, const String& fileName, unsigned startOffset=0)
static PackageFile* PackageFile_PackageFile_Context_String_unsigned(const String& fileName, unsigned startOffset)
{
    Context* context = GetScriptContext();
    return new PackageFile(context, fileName, startOffset);
}

// class PackageFile | File: ../IO/PackageFile.h
static void Register_PackageFile(asIScriptEngine* engine)
{
    // explicit PackageFile::PackageFile(Context* context)
    engine->RegisterObjectBehaviour("PackageFile", asBEHAVE_FACTORY, "PackageFile@+ f()", AS_FUNCTION(PackageFile_PackageFile_Context) , AS_CALL_CDECL);
    // PackageFile::PackageFile(Context* context, const String& fileName, unsigned startOffset=0)
    engine->RegisterObjectBehaviour("PackageFile", asBEHAVE_FACTORY, "PackageFile@+ f(const String&in, uint = 0)", AS_FUNCTION(PackageFile_PackageFile_Context_String_unsigned) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_PackageFile
        REGISTER_CLASS_MANUAL_PART_PackageFile();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Particle
        REGISTER_CLASS_MANUAL_PART_Particle();
    #endif
}

// explicit ParticleEffect::ParticleEffect(Context* context)
static ParticleEffect* ParticleEffect_ParticleEffect_Context()
{
    Context* context = GetScriptContext();
    return new ParticleEffect(context);
}

// class ParticleEffect | File: ../Graphics/ParticleEffect.h
static void Register_ParticleEffect(asIScriptEngine* engine)
{
    // explicit ParticleEffect::ParticleEffect(Context* context)
    engine->RegisterObjectBehaviour("ParticleEffect", asBEHAVE_FACTORY, "ParticleEffect@+ f()", AS_FUNCTION(ParticleEffect_ParticleEffect_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ParticleEffect
        REGISTER_CLASS_MANUAL_PART_ParticleEffect();
    #endif
}

// explicit ParticleEmitter::ParticleEmitter(Context* context)
static ParticleEmitter* ParticleEmitter_ParticleEmitter_Context()
{
    Context* context = GetScriptContext();
    return new ParticleEmitter(context);
}

// class ParticleEmitter | File: ../Graphics/ParticleEmitter.h
static void Register_ParticleEmitter(asIScriptEngine* engine)
{
    // explicit ParticleEmitter::ParticleEmitter(Context* context)
    engine->RegisterObjectBehaviour("ParticleEmitter", asBEHAVE_FACTORY, "ParticleEmitter@+ f()", AS_FUNCTION(ParticleEmitter_ParticleEmitter_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ParticleEmitter
        REGISTER_CLASS_MANUAL_PART_ParticleEmitter();
    #endif
}

// explicit Pass::Pass(const String& name)
static Pass* Pass_Pass_String(const String& name)
{
    return new Pass(name);
}

// class Pass | File: ../Graphics/Technique.h
static void Register_Pass(asIScriptEngine* engine)
{
    // explicit Pass::Pass(const String& name)
    engine->RegisterObjectBehaviour("Pass", asBEHAVE_FACTORY, "Pass@+ f(const String&in)", AS_FUNCTION(Pass_Pass_String) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Pass
        REGISTER_CLASS_MANUAL_PART_Pass();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_PerThreadSceneResult
        REGISTER_CLASS_MANUAL_PART_PerThreadSceneResult();
    #endif
}

// Plane::Plane(const Plane& plane) noexcept=default
static void Plane_Plane_Plane(Plane* ptr, const Plane& plane)
{
    new(ptr) Plane(plane);
}

// Plane::Plane(const Vector3& v0, const Vector3& v1, const Vector3& v2) noexcept
static void Plane_Plane_Vector3_Vector3_Vector3(Plane* ptr, const Vector3& v0, const Vector3& v1, const Vector3& v2)
{
    new(ptr) Plane(v0, v1, v2);
}

// Plane::Plane(const Vector3& normal, const Vector3& point) noexcept
static void Plane_Plane_Vector3_Vector3(Plane* ptr, const Vector3& normal, const Vector3& point)
{
    new(ptr) Plane(normal, point);
}

// explicit Plane::Plane(const Vector4& plane) noexcept
static void Plane_Plane_Vector4(Plane* ptr, const Vector4& plane)
{
    new(ptr) Plane(plane);
}

// class Plane | File: ../Math/Plane.h
static void Register_Plane(asIScriptEngine* engine)
{
    // Plane::Plane(const Plane& plane) noexcept=default
    engine->RegisterObjectBehaviour("Plane", asBEHAVE_CONSTRUCT, "void f(const Plane&in)", AS_FUNCTION_OBJFIRST(Plane_Plane_Plane), AS_CALL_CDECL_OBJFIRST);
    // Plane::Plane(const Vector3& v0, const Vector3& v1, const Vector3& v2) noexcept
    engine->RegisterObjectBehaviour("Plane", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(Plane_Plane_Vector3_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);
    // Plane::Plane(const Vector3& normal, const Vector3& point) noexcept
    engine->RegisterObjectBehaviour("Plane", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(Plane_Plane_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);
    // explicit Plane::Plane(const Vector4& plane) noexcept
    engine->RegisterObjectBehaviour("Plane", asBEHAVE_CONSTRUCT, "void f(const Vector4&in)", AS_FUNCTION_OBJFIRST(Plane_Plane_Vector4), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Plane
        REGISTER_CLASS_MANUAL_PART_Plane();
    #endif
}

// Polyhedron::Polyhedron(const Polyhedron& polyhedron)
static void Polyhedron_Polyhedron_Polyhedron(Polyhedron* ptr, const Polyhedron& polyhedron)
{
    new(ptr) Polyhedron(polyhedron);
}

// explicit Polyhedron::Polyhedron(const BoundingBox& box)
static void Polyhedron_Polyhedron_BoundingBox(Polyhedron* ptr, const BoundingBox& box)
{
    new(ptr) Polyhedron(box);
}

// explicit Polyhedron::Polyhedron(const Frustum& frustum)
static void Polyhedron_Polyhedron_Frustum(Polyhedron* ptr, const Frustum& frustum)
{
    new(ptr) Polyhedron(frustum);
}

// class Polyhedron | File: ../Math/Polyhedron.h
static void Register_Polyhedron(asIScriptEngine* engine)
{
    // explicit Polyhedron::Polyhedron(const Vector<PODVector<Vector3>>& faces)
    // Error: type "const Vector<PODVector<Vector3>>&" can not automatically bind

    // Polyhedron::Polyhedron(const Polyhedron& polyhedron)
    engine->RegisterObjectBehaviour("Polyhedron", asBEHAVE_CONSTRUCT, "void f(const Polyhedron&in)", AS_FUNCTION_OBJFIRST(Polyhedron_Polyhedron_Polyhedron), AS_CALL_CDECL_OBJFIRST);
    // explicit Polyhedron::Polyhedron(const BoundingBox& box)
    engine->RegisterObjectBehaviour("Polyhedron", asBEHAVE_CONSTRUCT, "void f(const BoundingBox&in)", AS_FUNCTION_OBJFIRST(Polyhedron_Polyhedron_BoundingBox), AS_CALL_CDECL_OBJFIRST);
    // explicit Polyhedron::Polyhedron(const Frustum& frustum)
    engine->RegisterObjectBehaviour("Polyhedron", asBEHAVE_CONSTRUCT, "void f(const Frustum&in)", AS_FUNCTION_OBJFIRST(Polyhedron_Polyhedron_Frustum), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_Polyhedron
        REGISTER_CLASS_MANUAL_PART_Polyhedron();
    #endif
}

// explicit Profiler::Profiler(Context* context)
static Profiler* Profiler_Profiler_Context()
{
    Context* context = GetScriptContext();
    return new Profiler(context);
}

// class Profiler | File: ../Core/Profiler.h
static void Register_Profiler(asIScriptEngine* engine)
{
    // explicit Profiler::Profiler(Context* context)
    engine->RegisterObjectBehaviour("Profiler", asBEHAVE_FACTORY, "Profiler@+ f()", AS_FUNCTION(Profiler_Profiler_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Profiler
        REGISTER_CLASS_MANUAL_PART_Profiler();
    #endif
}

// explicit ProgressBar::ProgressBar(Context* context)
static ProgressBar* ProgressBar_ProgressBar_Context()
{
    Context* context = GetScriptContext();
    return new ProgressBar(context);
}

// class ProgressBar | File: ../UI/ProgressBar.h
static void Register_ProgressBar(asIScriptEngine* engine)
{
    // explicit ProgressBar::ProgressBar(Context* context)
    engine->RegisterObjectBehaviour("ProgressBar", asBEHAVE_FACTORY, "ProgressBar@+ f()", AS_FUNCTION(ProgressBar_ProgressBar_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ProgressBar
        REGISTER_CLASS_MANUAL_PART_ProgressBar();
    #endif
}

// Quaternion::Quaternion(const Quaternion& quat) noexcept
static void Quaternion_Quaternion_Quaternion(Quaternion* ptr, const Quaternion& quat)
{
    new(ptr) Quaternion(quat);
}

// Quaternion::Quaternion(float w, float x, float y, float z) noexcept
static void Quaternion_Quaternion_float_float_float_float(Quaternion* ptr, float w, float x, float y, float z)
{
    new(ptr) Quaternion(w, x, y, z);
}

// Quaternion::Quaternion(float angle, const Vector3& axis) noexcept
static void Quaternion_Quaternion_float_Vector3(Quaternion* ptr, float angle, const Vector3& axis)
{
    new(ptr) Quaternion(angle, axis);
}

// explicit Quaternion::Quaternion(float angle) noexcept
static void Quaternion_Quaternion_float(Quaternion* ptr, float angle)
{
    new(ptr) Quaternion(angle);
}

// Quaternion::Quaternion(float x, float y, float z) noexcept
static void Quaternion_Quaternion_float_float_float(Quaternion* ptr, float x, float y, float z)
{
    new(ptr) Quaternion(x, y, z);
}

// explicit Quaternion::Quaternion(const Vector3& angles) noexcept
static void Quaternion_Quaternion_Vector3(Quaternion* ptr, const Vector3& angles)
{
    new(ptr) Quaternion(angles);
}

// Quaternion::Quaternion(const Vector3& start, const Vector3& end) noexcept
static void Quaternion_Quaternion_Vector3_Vector3(Quaternion* ptr, const Vector3& start, const Vector3& end)
{
    new(ptr) Quaternion(start, end);
}

// Quaternion::Quaternion(const Vector3& xAxis, const Vector3& yAxis, const Vector3& zAxis) noexcept
static void Quaternion_Quaternion_Vector3_Vector3_Vector3(Quaternion* ptr, const Vector3& xAxis, const Vector3& yAxis, const Vector3& zAxis)
{
    new(ptr) Quaternion(xAxis, yAxis, zAxis);
}

// explicit Quaternion::Quaternion(const Matrix3& matrix) noexcept
static void Quaternion_Quaternion_Matrix3(Quaternion* ptr, const Matrix3& matrix)
{
    new(ptr) Quaternion(matrix);
}

// class Quaternion | File: ../Math/Quaternion.h
static void Register_Quaternion(asIScriptEngine* engine)
{
    // explicit Quaternion::Quaternion(const float* data) noexcept
    // Error: type "const float*" can not automatically bind

    // Quaternion::Quaternion(const Quaternion& quat) noexcept
    engine->RegisterObjectBehaviour("Quaternion", asBEHAVE_CONSTRUCT, "void f(const Quaternion&in)", AS_FUNCTION_OBJFIRST(Quaternion_Quaternion_Quaternion), AS_CALL_CDECL_OBJFIRST);
    // Quaternion::Quaternion(float w, float x, float y, float z) noexcept
    engine->RegisterObjectBehaviour("Quaternion", asBEHAVE_CONSTRUCT, "void f(float, float, float, float)", AS_FUNCTION_OBJFIRST(Quaternion_Quaternion_float_float_float_float), AS_CALL_CDECL_OBJFIRST);
    // Quaternion::Quaternion(float angle, const Vector3& axis) noexcept
    engine->RegisterObjectBehaviour("Quaternion", asBEHAVE_CONSTRUCT, "void f(float, const Vector3&in)", AS_FUNCTION_OBJFIRST(Quaternion_Quaternion_float_Vector3), AS_CALL_CDECL_OBJFIRST);
    // explicit Quaternion::Quaternion(float angle) noexcept
    engine->RegisterObjectBehaviour("Quaternion", asBEHAVE_CONSTRUCT, "void f(float)", AS_FUNCTION_OBJFIRST(Quaternion_Quaternion_float), AS_CALL_CDECL_OBJFIRST);
    // Quaternion::Quaternion(float x, float y, float z) noexcept
    engine->RegisterObjectBehaviour("Quaternion", asBEHAVE_CONSTRUCT, "void f(float, float, float)", AS_FUNCTION_OBJFIRST(Quaternion_Quaternion_float_float_float), AS_CALL_CDECL_OBJFIRST);
    // explicit Quaternion::Quaternion(const Vector3& angles) noexcept
    engine->RegisterObjectBehaviour("Quaternion", asBEHAVE_CONSTRUCT, "void f(const Vector3&in)", AS_FUNCTION_OBJFIRST(Quaternion_Quaternion_Vector3), AS_CALL_CDECL_OBJFIRST);
    // Quaternion::Quaternion(const Vector3& start, const Vector3& end) noexcept
    engine->RegisterObjectBehaviour("Quaternion", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(Quaternion_Quaternion_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);
    // Quaternion::Quaternion(const Vector3& xAxis, const Vector3& yAxis, const Vector3& zAxis) noexcept
    engine->RegisterObjectBehaviour("Quaternion", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(Quaternion_Quaternion_Vector3_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);
    // explicit Quaternion::Quaternion(const Matrix3& matrix) noexcept
    engine->RegisterObjectBehaviour("Quaternion", asBEHAVE_CONSTRUCT, "void f(const Matrix3&in)", AS_FUNCTION_OBJFIRST(Quaternion_Quaternion_Matrix3), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Quaternion
        REGISTER_CLASS_MANUAL_PART_Quaternion();
    #endif
}

// Ray::Ray(const Vector3& origin, const Vector3& direction) noexcept
static void Ray_Ray_Vector3_Vector3(Ray* ptr, const Vector3& origin, const Vector3& direction)
{
    new(ptr) Ray(origin, direction);
}

// Ray::Ray(const Ray& ray) noexcept=default
static void Ray_Ray_Ray(Ray* ptr, const Ray& ray)
{
    new(ptr) Ray(ray);
}

// class Ray | File: ../Math/Ray.h
static void Register_Ray(asIScriptEngine* engine)
{
    // Ray::Ray(const Vector3& origin, const Vector3& direction) noexcept
    engine->RegisterObjectBehaviour("Ray", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(Ray_Ray_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);
    // Ray::Ray(const Ray& ray) noexcept=default
    engine->RegisterObjectBehaviour("Ray", asBEHAVE_CONSTRUCT, "void f(const Ray&in)", AS_FUNCTION_OBJFIRST(Ray_Ray_Ray), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Ray
        REGISTER_CLASS_MANUAL_PART_Ray();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_RayQueryResult
        REGISTER_CLASS_MANUAL_PART_RayQueryResult();
    #endif
}

// Rect::Rect(const Vector2& min, const Vector2& max) noexcept
static void Rect_Rect_Vector2_Vector2(Rect* ptr, const Vector2& min, const Vector2& max)
{
    new(ptr) Rect(min, max);
}

// Rect::Rect(float left, float top, float right, float bottom) noexcept
static void Rect_Rect_float_float_float_float(Rect* ptr, float left, float top, float right, float bottom)
{
    new(ptr) Rect(left, top, right, bottom);
}

// explicit Rect::Rect(const Vector4& vector) noexcept
static void Rect_Rect_Vector4(Rect* ptr, const Vector4& vector)
{
    new(ptr) Rect(vector);
}

// Rect::Rect(const Rect& rect) noexcept=default
static void Rect_Rect_Rect(Rect* ptr, const Rect& rect)
{
    new(ptr) Rect(rect);
}

// class Rect | File: ../Math/Rect.h
static void Register_Rect(asIScriptEngine* engine)
{
    // explicit Rect::Rect(const float* data) noexcept
    // Error: type "const float*" can not automatically bind

    // Rect::Rect(const Vector2& min, const Vector2& max) noexcept
    engine->RegisterObjectBehaviour("Rect", asBEHAVE_CONSTRUCT, "void f(const Vector2&in, const Vector2&in)", AS_FUNCTION_OBJFIRST(Rect_Rect_Vector2_Vector2), AS_CALL_CDECL_OBJFIRST);
    // Rect::Rect(float left, float top, float right, float bottom) noexcept
    engine->RegisterObjectBehaviour("Rect", asBEHAVE_CONSTRUCT, "void f(float, float, float, float)", AS_FUNCTION_OBJFIRST(Rect_Rect_float_float_float_float), AS_CALL_CDECL_OBJFIRST);
    // explicit Rect::Rect(const Vector4& vector) noexcept
    engine->RegisterObjectBehaviour("Rect", asBEHAVE_CONSTRUCT, "void f(const Vector4&in)", AS_FUNCTION_OBJFIRST(Rect_Rect_Vector4), AS_CALL_CDECL_OBJFIRST);
    // Rect::Rect(const Rect& rect) noexcept=default
    engine->RegisterObjectBehaviour("Rect", asBEHAVE_CONSTRUCT, "void f(const Rect&in)", AS_FUNCTION_OBJFIRST(Rect_Rect_Rect), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Rect
        REGISTER_CLASS_MANUAL_PART_Rect();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_RefCount
        REGISTER_CLASS_MANUAL_PART_RefCount();
    #endif
}

// class RefCounted | File: ../Container/RefCounted.h
static void Register_RefCounted(asIScriptEngine* engine)
{
    // RefCounted::RefCounted(const RefCounted& rhs)=delete
    // Not registered because deleted

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

    #ifdef REGISTER_CLASS_MANUAL_PART_RefCounted
        REGISTER_CLASS_MANUAL_PART_RefCounted();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_RenderPath
        REGISTER_CLASS_MANUAL_PART_RenderPath();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_RenderPathCommand
        REGISTER_CLASS_MANUAL_PART_RenderPathCommand();
    #endif
}

// explicit RenderSurface::RenderSurface(Texture* parentTexture)
static RenderSurface* RenderSurface_RenderSurface_Texture(Texture* parentTexture)
{
    return new RenderSurface(parentTexture);
}

// class RenderSurface | File: ../Graphics/RenderSurface.h
static void Register_RenderSurface(asIScriptEngine* engine)
{
    // explicit RenderSurface::RenderSurface(Texture* parentTexture)
    engine->RegisterObjectBehaviour("RenderSurface", asBEHAVE_FACTORY, "RenderSurface@+ f(Texture@+)", AS_FUNCTION(RenderSurface_RenderSurface_Texture) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_RenderSurface
        REGISTER_CLASS_MANUAL_PART_RenderSurface();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_RenderTargetInfo
        REGISTER_CLASS_MANUAL_PART_RenderTargetInfo();
    #endif
}

// explicit Renderer::Renderer(Context* context)
static Renderer* Renderer_Renderer_Context()
{
    Context* context = GetScriptContext();
    return new Renderer(context);
}

// class Renderer | File: ../Graphics/Renderer.h
static void Register_Renderer(asIScriptEngine* engine)
{
    // explicit Renderer::Renderer(Context* context)
    engine->RegisterObjectBehaviour("Renderer", asBEHAVE_FACTORY, "Renderer@+ f()", AS_FUNCTION(Renderer_Renderer_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Renderer
        REGISTER_CLASS_MANUAL_PART_Renderer();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ReplicationState
        REGISTER_CLASS_MANUAL_PART_ReplicationState();
    #endif
}

// explicit Resource::Resource(Context* context)
static Resource* Resource_Resource_Context()
{
    Context* context = GetScriptContext();
    return new Resource(context);
}

// class Resource | File: ../Resource/Resource.h
static void Register_Resource(asIScriptEngine* engine)
{
    // explicit Resource::Resource(Context* context)
    engine->RegisterObjectBehaviour("Resource", asBEHAVE_FACTORY, "Resource@+ f()", AS_FUNCTION(Resource_Resource_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Resource
        REGISTER_CLASS_MANUAL_PART_Resource();
    #endif
}

// explicit ResourceCache::ResourceCache(Context* context)
static ResourceCache* ResourceCache_ResourceCache_Context()
{
    Context* context = GetScriptContext();
    return new ResourceCache(context);
}

// class ResourceCache | File: ../Resource/ResourceCache.h
static void Register_ResourceCache(asIScriptEngine* engine)
{
    // explicit ResourceCache::ResourceCache(Context* context)
    engine->RegisterObjectBehaviour("ResourceCache", asBEHAVE_FACTORY, "ResourceCache@+ f()", AS_FUNCTION(ResourceCache_ResourceCache_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ResourceCache
        REGISTER_CLASS_MANUAL_PART_ResourceCache();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ResourceGroup
        REGISTER_CLASS_MANUAL_PART_ResourceGroup();
    #endif
}

// explicit ResourceRef::ResourceRef(StringHash type)
static void ResourceRef_ResourceRef_StringHash(ResourceRef* ptr, StringHash type)
{
    new(ptr) ResourceRef(type);
}

// ResourceRef::ResourceRef(StringHash type, const String& name)
static void ResourceRef_ResourceRef_StringHash_String(ResourceRef* ptr, StringHash type, const String& name)
{
    new(ptr) ResourceRef(type, name);
}

// ResourceRef::ResourceRef(const String& type, const String& name)
static void ResourceRef_ResourceRef_String_String(ResourceRef* ptr, const String& type, const String& name)
{
    new(ptr) ResourceRef(type, name);
}

// ResourceRef::ResourceRef(const ResourceRef& rhs)=default
static void ResourceRef_ResourceRef_ResourceRef(ResourceRef* ptr, const ResourceRef& rhs)
{
    new(ptr) ResourceRef(rhs);
}

// struct ResourceRef | File: ../Core/Variant.h
static void Register_ResourceRef(asIScriptEngine* engine)
{
    // ResourceRef::ResourceRef(const char* type, const char* name)
    // Error: type "const char*" can not automatically bind

    // explicit ResourceRef::ResourceRef(StringHash type)
    engine->RegisterObjectBehaviour("ResourceRef", asBEHAVE_CONSTRUCT, "void f(StringHash)", AS_FUNCTION_OBJFIRST(ResourceRef_ResourceRef_StringHash), AS_CALL_CDECL_OBJFIRST);
    // ResourceRef::ResourceRef(StringHash type, const String& name)
    engine->RegisterObjectBehaviour("ResourceRef", asBEHAVE_CONSTRUCT, "void f(StringHash, const String&in)", AS_FUNCTION_OBJFIRST(ResourceRef_ResourceRef_StringHash_String), AS_CALL_CDECL_OBJFIRST);
    // ResourceRef::ResourceRef(const String& type, const String& name)
    engine->RegisterObjectBehaviour("ResourceRef", asBEHAVE_CONSTRUCT, "void f(const String&in, const String&in)", AS_FUNCTION_OBJFIRST(ResourceRef_ResourceRef_String_String), AS_CALL_CDECL_OBJFIRST);
    // ResourceRef::ResourceRef(const ResourceRef& rhs)=default
    engine->RegisterObjectBehaviour("ResourceRef", asBEHAVE_CONSTRUCT, "void f(const ResourceRef&in)", AS_FUNCTION_OBJFIRST(ResourceRef_ResourceRef_ResourceRef), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_ResourceRef
        REGISTER_CLASS_MANUAL_PART_ResourceRef();
    #endif
}

// explicit ResourceRefList::ResourceRefList(StringHash type)
static void ResourceRefList_ResourceRefList_StringHash(ResourceRefList* ptr, StringHash type)
{
    new(ptr) ResourceRefList(type);
}

// ResourceRefList::ResourceRefList(StringHash type, const StringVector& names)
static void ResourceRefList_ResourceRefList_StringHash_StringVector(ResourceRefList* ptr, StringHash type, CScriptArray* names_conv)
{
    StringVector names = ArrayToVector<String>(names_conv);
    new(ptr) ResourceRefList(type, names);
}

// struct ResourceRefList | File: ../Core/Variant.h
static void Register_ResourceRefList(asIScriptEngine* engine)
{
    // explicit ResourceRefList::ResourceRefList(StringHash type)
    engine->RegisterObjectBehaviour("ResourceRefList", asBEHAVE_CONSTRUCT, "void f(StringHash)", AS_FUNCTION_OBJFIRST(ResourceRefList_ResourceRefList_StringHash), AS_CALL_CDECL_OBJFIRST);
    // ResourceRefList::ResourceRefList(StringHash type, const StringVector& names)
    engine->RegisterObjectBehaviour("ResourceRefList", asBEHAVE_CONSTRUCT, "void f(StringHash, Array<String>@+)", AS_FUNCTION_OBJFIRST(ResourceRefList_ResourceRefList_StringHash_StringVector), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_ResourceRefList
        REGISTER_CLASS_MANUAL_PART_ResourceRefList();
    #endif
}

// explicit ResourceWithMetadata::ResourceWithMetadata(Context* context)
static ResourceWithMetadata* ResourceWithMetadata_ResourceWithMetadata_Context()
{
    Context* context = GetScriptContext();
    return new ResourceWithMetadata(context);
}

// class ResourceWithMetadata | File: ../Resource/Resource.h
static void Register_ResourceWithMetadata(asIScriptEngine* engine)
{
    // explicit ResourceWithMetadata::ResourceWithMetadata(Context* context)
    engine->RegisterObjectBehaviour("ResourceWithMetadata", asBEHAVE_FACTORY, "ResourceWithMetadata@+ f()", AS_FUNCTION(ResourceWithMetadata_ResourceWithMetadata_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ResourceWithMetadata
        REGISTER_CLASS_MANUAL_PART_ResourceWithMetadata();
    #endif
}

// explicit RibbonTrail::RibbonTrail(Context* context)
static RibbonTrail* RibbonTrail_RibbonTrail_Context()
{
    Context* context = GetScriptContext();
    return new RibbonTrail(context);
}

// class RibbonTrail | File: ../Graphics/RibbonTrail.h
static void Register_RibbonTrail(asIScriptEngine* engine)
{
    // explicit RibbonTrail::RibbonTrail(Context* context)
    engine->RegisterObjectBehaviour("RibbonTrail", asBEHAVE_FACTORY, "RibbonTrail@+ f()", AS_FUNCTION(RibbonTrail_RibbonTrail_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_RibbonTrail
        REGISTER_CLASS_MANUAL_PART_RibbonTrail();
    #endif
}

// explicit Scene::Scene(Context* context)
static Scene* Scene_Scene_Context()
{
    Context* context = GetScriptContext();
    return new Scene(context);
}

// class Scene | File: ../Scene/Scene.h
static void Register_Scene(asIScriptEngine* engine)
{
    // explicit Scene::Scene(Context* context)
    engine->RegisterObjectBehaviour("Scene", asBEHAVE_FACTORY, "Scene@+ f()", AS_FUNCTION(Scene_Scene_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Scene
        REGISTER_CLASS_MANUAL_PART_Scene();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ScenePassInfo
        REGISTER_CLASS_MANUAL_PART_ScenePassInfo();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_SceneReplicationState
        REGISTER_CLASS_MANUAL_PART_SceneReplicationState();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_SceneResolver
        REGISTER_CLASS_MANUAL_PART_SceneResolver();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ScratchBuffer
        REGISTER_CLASS_MANUAL_PART_ScratchBuffer();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ScreenModeParams
        REGISTER_CLASS_MANUAL_PART_ScreenModeParams();
    #endif
}

// explicit ScrollBar::ScrollBar(Context* context)
static ScrollBar* ScrollBar_ScrollBar_Context()
{
    Context* context = GetScriptContext();
    return new ScrollBar(context);
}

// class ScrollBar | File: ../UI/ScrollBar.h
static void Register_ScrollBar(asIScriptEngine* engine)
{
    // explicit ScrollBar::ScrollBar(Context* context)
    engine->RegisterObjectBehaviour("ScrollBar", asBEHAVE_FACTORY, "ScrollBar@+ f()", AS_FUNCTION(ScrollBar_ScrollBar_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ScrollBar
        REGISTER_CLASS_MANUAL_PART_ScrollBar();
    #endif
}

// explicit ScrollView::ScrollView(Context* context)
static ScrollView* ScrollView_ScrollView_Context()
{
    Context* context = GetScriptContext();
    return new ScrollView(context);
}

// class ScrollView | File: ../UI/ScrollView.h
static void Register_ScrollView(asIScriptEngine* engine)
{
    // explicit ScrollView::ScrollView(Context* context)
    engine->RegisterObjectBehaviour("ScrollView", asBEHAVE_FACTORY, "ScrollView@+ f()", AS_FUNCTION(ScrollView_ScrollView_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ScrollView
        REGISTER_CLASS_MANUAL_PART_ScrollView();
    #endif
}

// explicit Serializable::Serializable(Context* context)
static Serializable* Serializable_Serializable_Context()
{
    Context* context = GetScriptContext();
    return new Serializable(context);
}

// class Serializable | File: ../Scene/Serializable.h
static void Register_Serializable(asIScriptEngine* engine)
{
    // explicit Serializable::Serializable(Context* context)
    engine->RegisterObjectBehaviour("Serializable", asBEHAVE_FACTORY, "Serializable@+ f()", AS_FUNCTION(Serializable_Serializable_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Serializable
        REGISTER_CLASS_MANUAL_PART_Serializable();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Serializer
        REGISTER_CLASS_MANUAL_PART_Serializer();
    #endif
}

// explicit Shader::Shader(Context* context)
static Shader* Shader_Shader_Context()
{
    Context* context = GetScriptContext();
    return new Shader(context);
}

// class Shader | File: ../Graphics/Shader.h
static void Register_Shader(asIScriptEngine* engine)
{
    // explicit Shader::Shader(Context* context)
    engine->RegisterObjectBehaviour("Shader", asBEHAVE_FACTORY, "Shader@+ f()", AS_FUNCTION(Shader_Shader_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Shader
        REGISTER_CLASS_MANUAL_PART_Shader();
    #endif
}

// ShaderParameter::ShaderParameter(const String& name, unsigned glType, int location)
static void ShaderParameter_ShaderParameter_String_unsigned_int(ShaderParameter* ptr, const String& name, unsigned glType, int location)
{
    new(ptr) ShaderParameter(name, glType, location);
}

// ShaderParameter::ShaderParameter(ShaderType type, const String& name, unsigned offset, unsigned size, unsigned buffer)
static void ShaderParameter_ShaderParameter_ShaderType_String_unsigned_unsigned_unsigned(ShaderParameter* ptr, ShaderType type, const String& name, unsigned offset, unsigned size, unsigned buffer)
{
    new(ptr) ShaderParameter(type, name, offset, size, buffer);
}

// ShaderParameter::ShaderParameter(ShaderType type, const String& name, unsigned reg, unsigned regCount)
static void ShaderParameter_ShaderParameter_ShaderType_String_unsigned_unsigned(ShaderParameter* ptr, ShaderType type, const String& name, unsigned reg, unsigned regCount)
{
    new(ptr) ShaderParameter(type, name, reg, regCount);
}

// struct ShaderParameter | File: ../Graphics/ShaderVariation.h
static void Register_ShaderParameter(asIScriptEngine* engine)
{
    // ShaderParameter::ShaderParameter(const String& name, unsigned glType, int location)
    engine->RegisterObjectBehaviour("ShaderParameter", asBEHAVE_CONSTRUCT, "void f(const String&in, uint, int)", AS_FUNCTION_OBJFIRST(ShaderParameter_ShaderParameter_String_unsigned_int), AS_CALL_CDECL_OBJFIRST);
    // ShaderParameter::ShaderParameter(ShaderType type, const String& name, unsigned offset, unsigned size, unsigned buffer)
    engine->RegisterObjectBehaviour("ShaderParameter", asBEHAVE_CONSTRUCT, "void f(ShaderType, const String&in, uint, uint, uint)", AS_FUNCTION_OBJFIRST(ShaderParameter_ShaderParameter_ShaderType_String_unsigned_unsigned_unsigned), AS_CALL_CDECL_OBJFIRST);
    // ShaderParameter::ShaderParameter(ShaderType type, const String& name, unsigned reg, unsigned regCount)
    engine->RegisterObjectBehaviour("ShaderParameter", asBEHAVE_CONSTRUCT, "void f(ShaderType, const String&in, uint, uint)", AS_FUNCTION_OBJFIRST(ShaderParameter_ShaderParameter_ShaderType_String_unsigned_unsigned), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_ShaderParameter
        REGISTER_CLASS_MANUAL_PART_ShaderParameter();
    #endif
}

// ShaderParameterAnimationInfo::ShaderParameterAnimationInfo(Material* material, const String& name, ValueAnimation* attributeAnimation, WrapMode wrapMode, float speed)
static ShaderParameterAnimationInfo* ShaderParameterAnimationInfo_ShaderParameterAnimationInfo_Material_String_ValueAnimation_WrapMode_float(Material* material, const String& name, ValueAnimation* attributeAnimation, WrapMode wrapMode, float speed)
{
    return new ShaderParameterAnimationInfo(material, name, attributeAnimation, wrapMode, speed);
}

// ShaderParameterAnimationInfo::ShaderParameterAnimationInfo(const ShaderParameterAnimationInfo& other)
static ShaderParameterAnimationInfo* ShaderParameterAnimationInfo_ShaderParameterAnimationInfo_ShaderParameterAnimationInfo(const ShaderParameterAnimationInfo& other)
{
    return new ShaderParameterAnimationInfo(other);
}

// class ShaderParameterAnimationInfo | File: ../Graphics/Material.h
static void Register_ShaderParameterAnimationInfo(asIScriptEngine* engine)
{
    // ShaderParameterAnimationInfo::ShaderParameterAnimationInfo(Material* material, const String& name, ValueAnimation* attributeAnimation, WrapMode wrapMode, float speed)
    engine->RegisterObjectBehaviour("ShaderParameterAnimationInfo", asBEHAVE_FACTORY, "ShaderParameterAnimationInfo@+ f(Material@+, const String&in, ValueAnimation@+, WrapMode, float)", AS_FUNCTION(ShaderParameterAnimationInfo_ShaderParameterAnimationInfo_Material_String_ValueAnimation_WrapMode_float) , AS_CALL_CDECL);
    // ShaderParameterAnimationInfo::ShaderParameterAnimationInfo(const ShaderParameterAnimationInfo& other)
    engine->RegisterObjectBehaviour("ShaderParameterAnimationInfo", asBEHAVE_FACTORY, "ShaderParameterAnimationInfo@+ f(const ShaderParameterAnimationInfo&in)", AS_FUNCTION(ShaderParameterAnimationInfo_ShaderParameterAnimationInfo_ShaderParameterAnimationInfo) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ShaderParameterAnimationInfo
        REGISTER_CLASS_MANUAL_PART_ShaderParameterAnimationInfo();
    #endif
}

// ShaderPrecache::ShaderPrecache(Context* context, const String& fileName)
static ShaderPrecache* ShaderPrecache_ShaderPrecache_Context_String(const String& fileName)
{
    Context* context = GetScriptContext();
    return new ShaderPrecache(context, fileName);
}

// class ShaderPrecache | File: ../Graphics/ShaderPrecache.h
static void Register_ShaderPrecache(asIScriptEngine* engine)
{
    // ShaderPrecache::ShaderPrecache(Context* context, const String& fileName)
    engine->RegisterObjectBehaviour("ShaderPrecache", asBEHAVE_FACTORY, "ShaderPrecache@+ f(const String&in)", AS_FUNCTION(ShaderPrecache_ShaderPrecache_Context_String) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ShaderPrecache
        REGISTER_CLASS_MANUAL_PART_ShaderPrecache();
    #endif
}

// ShaderVariation::ShaderVariation(Shader* owner, ShaderType type)
static ShaderVariation* ShaderVariation_ShaderVariation_Shader_ShaderType(Shader* owner, ShaderType type)
{
    return new ShaderVariation(owner, type);
}

// class ShaderVariation | File: ../Graphics/ShaderVariation.h
static void Register_ShaderVariation(asIScriptEngine* engine)
{
    // ShaderVariation::ShaderVariation(Shader* owner, ShaderType type)
    engine->RegisterObjectBehaviour("ShaderVariation", asBEHAVE_FACTORY, "ShaderVariation@+ f(Shader@+, ShaderType)", AS_FUNCTION(ShaderVariation_ShaderVariation_Shader_ShaderType) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ShaderVariation
        REGISTER_CLASS_MANUAL_PART_ShaderVariation();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ShadowBatchQueue
        REGISTER_CLASS_MANUAL_PART_ShadowBatchQueue();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Skeleton
        REGISTER_CLASS_MANUAL_PART_Skeleton();
    #endif
}

// explicit Skybox::Skybox(Context* context)
static Skybox* Skybox_Skybox_Context()
{
    Context* context = GetScriptContext();
    return new Skybox(context);
}

// class Skybox | File: ../Graphics/Skybox.h
static void Register_Skybox(asIScriptEngine* engine)
{
    // explicit Skybox::Skybox(Context* context)
    engine->RegisterObjectBehaviour("Skybox", asBEHAVE_FACTORY, "Skybox@+ f()", AS_FUNCTION(Skybox_Skybox_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Skybox
        REGISTER_CLASS_MANUAL_PART_Skybox();
    #endif
}

// explicit Slider::Slider(Context* context)
static Slider* Slider_Slider_Context()
{
    Context* context = GetScriptContext();
    return new Slider(context);
}

// class Slider | File: ../UI/Slider.h
static void Register_Slider(asIScriptEngine* engine)
{
    // explicit Slider::Slider(Context* context)
    engine->RegisterObjectBehaviour("Slider", asBEHAVE_FACTORY, "Slider@+ f()", AS_FUNCTION(Slider_Slider_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Slider
        REGISTER_CLASS_MANUAL_PART_Slider();
    #endif
}

// explicit SmoothedTransform::SmoothedTransform(Context* context)
static SmoothedTransform* SmoothedTransform_SmoothedTransform_Context()
{
    Context* context = GetScriptContext();
    return new SmoothedTransform(context);
}

// class SmoothedTransform | File: ../Scene/SmoothedTransform.h
static void Register_SmoothedTransform(asIScriptEngine* engine)
{
    // explicit SmoothedTransform::SmoothedTransform(Context* context)
    engine->RegisterObjectBehaviour("SmoothedTransform", asBEHAVE_FACTORY, "SmoothedTransform@+ f()", AS_FUNCTION(SmoothedTransform_SmoothedTransform_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_SmoothedTransform
        REGISTER_CLASS_MANUAL_PART_SmoothedTransform();
    #endif
}

// explicit Sound::Sound(Context* context)
static Sound* Sound_Sound_Context()
{
    Context* context = GetScriptContext();
    return new Sound(context);
}

// class Sound | File: ../Audio/Sound.h
static void Register_Sound(asIScriptEngine* engine)
{
    // explicit Sound::Sound(Context* context)
    engine->RegisterObjectBehaviour("Sound", asBEHAVE_FACTORY, "Sound@+ f()", AS_FUNCTION(Sound_Sound_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Sound
        REGISTER_CLASS_MANUAL_PART_Sound();
    #endif
}

// explicit SoundListener::SoundListener(Context* context)
static SoundListener* SoundListener_SoundListener_Context()
{
    Context* context = GetScriptContext();
    return new SoundListener(context);
}

// class SoundListener | File: ../Audio/SoundListener.h
static void Register_SoundListener(asIScriptEngine* engine)
{
    // explicit SoundListener::SoundListener(Context* context)
    engine->RegisterObjectBehaviour("SoundListener", asBEHAVE_FACTORY, "SoundListener@+ f()", AS_FUNCTION(SoundListener_SoundListener_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_SoundListener
        REGISTER_CLASS_MANUAL_PART_SoundListener();
    #endif
}

// explicit SoundSource::SoundSource(Context* context)
static SoundSource* SoundSource_SoundSource_Context()
{
    Context* context = GetScriptContext();
    return new SoundSource(context);
}

// class SoundSource | File: ../Audio/SoundSource.h
static void Register_SoundSource(asIScriptEngine* engine)
{
    // explicit SoundSource::SoundSource(Context* context)
    engine->RegisterObjectBehaviour("SoundSource", asBEHAVE_FACTORY, "SoundSource@+ f()", AS_FUNCTION(SoundSource_SoundSource_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_SoundSource
        REGISTER_CLASS_MANUAL_PART_SoundSource();
    #endif
}

// explicit SoundSource3D::SoundSource3D(Context* context)
static SoundSource3D* SoundSource3D_SoundSource3D_Context()
{
    Context* context = GetScriptContext();
    return new SoundSource3D(context);
}

// class SoundSource3D | File: ../Audio/SoundSource3D.h
static void Register_SoundSource3D(asIScriptEngine* engine)
{
    // explicit SoundSource3D::SoundSource3D(Context* context)
    engine->RegisterObjectBehaviour("SoundSource3D", asBEHAVE_FACTORY, "SoundSource3D@+ f()", AS_FUNCTION(SoundSource3D_SoundSource3D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_SoundSource3D
        REGISTER_CLASS_MANUAL_PART_SoundSource3D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_SoundStream
        REGISTER_CLASS_MANUAL_PART_SoundStream();
    #endif
}

// SourceBatch::SourceBatch(const SourceBatch& batch)
static void SourceBatch_SourceBatch_SourceBatch(SourceBatch* ptr, const SourceBatch& batch)
{
    new(ptr) SourceBatch(batch);
}

// struct SourceBatch | File: ../Graphics/Drawable.h
static void Register_SourceBatch(asIScriptEngine* engine)
{
    // SourceBatch::SourceBatch(const SourceBatch& batch)
    engine->RegisterObjectBehaviour("SourceBatch", asBEHAVE_CONSTRUCT, "void f(const SourceBatch&in)", AS_FUNCTION_OBJFIRST(SourceBatch_SourceBatch_SourceBatch), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_SourceBatch
        REGISTER_CLASS_MANUAL_PART_SourceBatch();
    #endif
}

// Sphere::Sphere(const Sphere& sphere) noexcept=default
static void Sphere_Sphere_Sphere(Sphere* ptr, const Sphere& sphere)
{
    new(ptr) Sphere(sphere);
}

// Sphere::Sphere(const Vector3& center, float radius) noexcept
static void Sphere_Sphere_Vector3_float(Sphere* ptr, const Vector3& center, float radius)
{
    new(ptr) Sphere(center, radius);
}

// explicit Sphere::Sphere(const BoundingBox& box) noexcept
static void Sphere_Sphere_BoundingBox(Sphere* ptr, const BoundingBox& box)
{
    new(ptr) Sphere(box);
}

// explicit Sphere::Sphere(const Frustum& frustum) noexcept
static void Sphere_Sphere_Frustum(Sphere* ptr, const Frustum& frustum)
{
    new(ptr) Sphere(frustum);
}

// explicit Sphere::Sphere(const Polyhedron& poly) noexcept
static void Sphere_Sphere_Polyhedron(Sphere* ptr, const Polyhedron& poly)
{
    new(ptr) Sphere(poly);
}

// class Sphere | File: ../Math/Sphere.h
static void Register_Sphere(asIScriptEngine* engine)
{
    // Sphere::Sphere(const Vector3* vertices, unsigned count) noexcept
    // Error: type "const Vector3*" can not automatically bind

    // Sphere::Sphere(const Sphere& sphere) noexcept=default
    engine->RegisterObjectBehaviour("Sphere", asBEHAVE_CONSTRUCT, "void f(const Sphere&in)", AS_FUNCTION_OBJFIRST(Sphere_Sphere_Sphere), AS_CALL_CDECL_OBJFIRST);
    // Sphere::Sphere(const Vector3& center, float radius) noexcept
    engine->RegisterObjectBehaviour("Sphere", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, float)", AS_FUNCTION_OBJFIRST(Sphere_Sphere_Vector3_float), AS_CALL_CDECL_OBJFIRST);
    // explicit Sphere::Sphere(const BoundingBox& box) noexcept
    engine->RegisterObjectBehaviour("Sphere", asBEHAVE_CONSTRUCT, "void f(const BoundingBox&in)", AS_FUNCTION_OBJFIRST(Sphere_Sphere_BoundingBox), AS_CALL_CDECL_OBJFIRST);
    // explicit Sphere::Sphere(const Frustum& frustum) noexcept
    engine->RegisterObjectBehaviour("Sphere", asBEHAVE_CONSTRUCT, "void f(const Frustum&in)", AS_FUNCTION_OBJFIRST(Sphere_Sphere_Frustum), AS_CALL_CDECL_OBJFIRST);
    // explicit Sphere::Sphere(const Polyhedron& poly) noexcept
    engine->RegisterObjectBehaviour("Sphere", asBEHAVE_CONSTRUCT, "void f(const Polyhedron&in)", AS_FUNCTION_OBJFIRST(Sphere_Sphere_Polyhedron), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Sphere
        REGISTER_CLASS_MANUAL_PART_Sphere();
    #endif
}

// explicit Spline::Spline(InterpolationMode mode)
static void Spline_Spline_InterpolationMode(Spline* ptr, InterpolationMode mode)
{
    new(ptr) Spline(mode);
}

// Spline::Spline(const Spline& rhs)=default
static void Spline_Spline_Spline(Spline* ptr, const Spline& rhs)
{
    new(ptr) Spline(rhs);
}

// class Spline | File: ../Core/Spline.h
static void Register_Spline(asIScriptEngine* engine)
{
    // explicit Spline::Spline(const Vector<Variant>& knots, InterpolationMode mode=BEZIER_CURVE)
    // Error: type "const Vector<Variant>&" can not automatically bind

    // explicit Spline::Spline(InterpolationMode mode)
    engine->RegisterObjectBehaviour("Spline", asBEHAVE_CONSTRUCT, "void f(InterpolationMode)", AS_FUNCTION_OBJFIRST(Spline_Spline_InterpolationMode), AS_CALL_CDECL_OBJFIRST);
    // Spline::Spline(const Spline& rhs)=default
    engine->RegisterObjectBehaviour("Spline", asBEHAVE_CONSTRUCT, "void f(const Spline&in)", AS_FUNCTION_OBJFIRST(Spline_Spline_Spline), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_Spline
        REGISTER_CLASS_MANUAL_PART_Spline();
    #endif
}

// explicit SplinePath::SplinePath(Context* context)
static SplinePath* SplinePath_SplinePath_Context()
{
    Context* context = GetScriptContext();
    return new SplinePath(context);
}

// class SplinePath | File: ../Scene/SplinePath.h
static void Register_SplinePath(asIScriptEngine* engine)
{
    // explicit SplinePath::SplinePath(Context* context)
    engine->RegisterObjectBehaviour("SplinePath", asBEHAVE_FACTORY, "SplinePath@+ f()", AS_FUNCTION(SplinePath_SplinePath_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_SplinePath
        REGISTER_CLASS_MANUAL_PART_SplinePath();
    #endif
}

// explicit Sprite::Sprite(Context* context)
static Sprite* Sprite_Sprite_Context()
{
    Context* context = GetScriptContext();
    return new Sprite(context);
}

// class Sprite | File: ../UI/Sprite.h
static void Register_Sprite(asIScriptEngine* engine)
{
    // explicit Sprite::Sprite(Context* context)
    engine->RegisterObjectBehaviour("Sprite", asBEHAVE_FACTORY, "Sprite@+ f()", AS_FUNCTION(Sprite_Sprite_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Sprite
        REGISTER_CLASS_MANUAL_PART_Sprite();
    #endif
}

// explicit StaticModel::StaticModel(Context* context)
static StaticModel* StaticModel_StaticModel_Context()
{
    Context* context = GetScriptContext();
    return new StaticModel(context);
}

// class StaticModel | File: ../Graphics/StaticModel.h
static void Register_StaticModel(asIScriptEngine* engine)
{
    // explicit StaticModel::StaticModel(Context* context)
    engine->RegisterObjectBehaviour("StaticModel", asBEHAVE_FACTORY, "StaticModel@+ f()", AS_FUNCTION(StaticModel_StaticModel_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_StaticModel
        REGISTER_CLASS_MANUAL_PART_StaticModel();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_StaticModelGeometryData
        REGISTER_CLASS_MANUAL_PART_StaticModelGeometryData();
    #endif
}

// explicit StaticModelGroup::StaticModelGroup(Context* context)
static StaticModelGroup* StaticModelGroup_StaticModelGroup_Context()
{
    Context* context = GetScriptContext();
    return new StaticModelGroup(context);
}

// class StaticModelGroup | File: ../Graphics/StaticModelGroup.h
static void Register_StaticModelGroup(asIScriptEngine* engine)
{
    // explicit StaticModelGroup::StaticModelGroup(Context* context)
    engine->RegisterObjectBehaviour("StaticModelGroup", asBEHAVE_FACTORY, "StaticModelGroup@+ f()", AS_FUNCTION(StaticModelGroup_StaticModelGroup_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_StaticModelGroup
        REGISTER_CLASS_MANUAL_PART_StaticModelGroup();
    #endif
}

// StoredLogMessage::StoredLogMessage(const String& message, int level, bool error)
static void StoredLogMessage_StoredLogMessage_String_int_bool(StoredLogMessage* ptr, const String& message, int level, bool error)
{
    new(ptr) StoredLogMessage(message, level, error);
}

// struct StoredLogMessage | File: ../IO/Log.h
static void Register_StoredLogMessage(asIScriptEngine* engine)
{
    // StoredLogMessage::StoredLogMessage(const String& message, int level, bool error)
    engine->RegisterObjectBehaviour("StoredLogMessage", asBEHAVE_CONSTRUCT, "void f(const String&in, int, bool)", AS_FUNCTION_OBJFIRST(StoredLogMessage_StoredLogMessage_String_int_bool), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_StoredLogMessage
        REGISTER_CLASS_MANUAL_PART_StoredLogMessage();
    #endif
}

// String::String(const String& str)
static void String_String_String(String* ptr, const String& str)
{
    new(ptr) String(str);
}

// explicit String::String(int value)
static void String_String_int(String* ptr, int value)
{
    new(ptr) String(value);
}

// explicit String::String(short value)
static void String_String_short(String* ptr, short value)
{
    new(ptr) String(value);
}

// explicit String::String(long long value)
static void String_String_longlong(String* ptr, long long value)
{
    new(ptr) String(value);
}

// explicit String::String(unsigned value)
static void String_String_unsigned(String* ptr, unsigned value)
{
    new(ptr) String(value);
}

// explicit String::String(unsigned short value)
static void String_String_unsignedshort(String* ptr, unsigned short value)
{
    new(ptr) String(value);
}

// explicit String::String(unsigned long long value)
static void String_String_unsignedlonglong(String* ptr, unsigned long long value)
{
    new(ptr) String(value);
}

// explicit String::String(float value)
static void String_String_float(String* ptr, float value)
{
    new(ptr) String(value);
}

// explicit String::String(double value)
static void String_String_double(String* ptr, double value)
{
    new(ptr) String(value);
}

// explicit String::String(bool value)
static void String_String_bool(String* ptr, bool value)
{
    new(ptr) String(value);
}

// explicit String::String(char value)
static void String_String_char(String* ptr, char value)
{
    new(ptr) String(value);
}

// explicit String::String(char value, unsigned length)
static void String_String_char_unsigned(String* ptr, char value, unsigned length)
{
    new(ptr) String(value, length);
}

// class String | File: ../Container/Str.h
static void Register_String(asIScriptEngine* engine)
{
    // String::String(String&& str) noexcept
    // Error: type "String&&" can not automatically bind
    // String::String(char* str)
    // Error: type "char*" can not automatically bind
    // String::String(const char* str)
    // Error: type "const char*" can not automatically bind
    // String::String(const char* str, unsigned length)
    // Error: type "const char*" can not automatically bind
    // explicit String::String(const WString& str)
    // Error: type "WString" can not automatically bind bacause have @nobind mark
    // explicit String::String(const wchar_t* str)
    // Error: type "const wchar_t*" can not automatically bind
    // explicit String::String(long value)
    // Not registered because have @nobind mark
    // explicit String::String(unsigned long value)
    // Not registered because have @nobind mark
    // explicit String::String(wchar_t* str)
    // Error: type "wchar_t*" can not automatically bind
    // template<class T> explicit String::String(const T& value)
    // Error: type "const T&" can not automatically bind

    // String::String(const String& str)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(const String&in)", AS_FUNCTION_OBJFIRST(String_String_String), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(int value)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(int)", AS_FUNCTION_OBJFIRST(String_String_int), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(short value)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(int16)", AS_FUNCTION_OBJFIRST(String_String_short), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(long long value)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(int64)", AS_FUNCTION_OBJFIRST(String_String_longlong), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(unsigned value)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(uint)", AS_FUNCTION_OBJFIRST(String_String_unsigned), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(unsigned short value)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(uint16)", AS_FUNCTION_OBJFIRST(String_String_unsignedshort), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(unsigned long long value)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(uint64)", AS_FUNCTION_OBJFIRST(String_String_unsignedlonglong), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(float value)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(float)", AS_FUNCTION_OBJFIRST(String_String_float), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(double value)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(double)", AS_FUNCTION_OBJFIRST(String_String_double), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(bool value)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(bool)", AS_FUNCTION_OBJFIRST(String_String_bool), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(char value)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(int8)", AS_FUNCTION_OBJFIRST(String_String_char), AS_CALL_CDECL_OBJFIRST);
    // explicit String::String(char value, unsigned length)
    engine->RegisterObjectBehaviour("String", asBEHAVE_CONSTRUCT, "void f(int8, uint)", AS_FUNCTION_OBJFIRST(String_String_char_unsigned), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_String
        REGISTER_CLASS_MANUAL_PART_String();
    #endif
}

// StringHash::StringHash(const StringHash& rhs) noexcept=default
static void StringHash_StringHash_StringHash(StringHash* ptr, const StringHash& rhs)
{
    new(ptr) StringHash(rhs);
}

// explicit StringHash::StringHash(unsigned value) noexcept
static void StringHash_StringHash_unsigned(StringHash* ptr, unsigned value)
{
    new(ptr) StringHash(value);
}

// StringHash::StringHash(const String& str) noexcept
static void StringHash_StringHash_String(StringHash* ptr, const String& str)
{
    new(ptr) StringHash(str);
}

// class StringHash | File: ../Math/StringHash.h
static void Register_StringHash(asIScriptEngine* engine)
{
    // StringHash::StringHash(const char* str) noexcept
    // Error: type "const char*" can not automatically bind

    // StringHash::StringHash(const StringHash& rhs) noexcept=default
    engine->RegisterObjectBehaviour("StringHash", asBEHAVE_CONSTRUCT, "void f(const StringHash&in)", AS_FUNCTION_OBJFIRST(StringHash_StringHash_StringHash), AS_CALL_CDECL_OBJFIRST);
    // explicit StringHash::StringHash(unsigned value) noexcept
    engine->RegisterObjectBehaviour("StringHash", asBEHAVE_CONSTRUCT, "void f(uint)", AS_FUNCTION_OBJFIRST(StringHash_StringHash_unsigned), AS_CALL_CDECL_OBJFIRST);
    // StringHash::StringHash(const String& str) noexcept
    engine->RegisterObjectBehaviour("StringHash", asBEHAVE_CONSTRUCT, "void f(const String&in)", AS_FUNCTION_OBJFIRST(StringHash_StringHash_String), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_StringHash
        REGISTER_CLASS_MANUAL_PART_StringHash();
    #endif
}

// StringHashRegister::StringHashRegister(bool threadSafe)
static void StringHashRegister_StringHashRegister_bool(StringHashRegister* ptr, bool threadSafe)
{
    new(ptr) StringHashRegister(threadSafe);
}

// class StringHashRegister | File: ../Core/StringHashRegister.h
static void Register_StringHashRegister(asIScriptEngine* engine)
{
    // StringHashRegister::StringHashRegister(bool threadSafe)
    engine->RegisterObjectBehaviour("StringHashRegister", asBEHAVE_CONSTRUCT, "void f(bool)", AS_FUNCTION_OBJFIRST(StringHashRegister_StringHashRegister_bool), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_StringHashRegister
        REGISTER_CLASS_MANUAL_PART_StringHashRegister();
    #endif
}

// explicit Technique::Technique(Context* context)
static Technique* Technique_Technique_Context()
{
    Context* context = GetScriptContext();
    return new Technique(context);
}

// class Technique | File: ../Graphics/Technique.h
static void Register_Technique(asIScriptEngine* engine)
{
    // explicit Technique::Technique(Context* context)
    engine->RegisterObjectBehaviour("Technique", asBEHAVE_FACTORY, "Technique@+ f()", AS_FUNCTION(Technique_Technique_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Technique
        REGISTER_CLASS_MANUAL_PART_Technique();
    #endif
}

// TechniqueEntry::TechniqueEntry(Technique* tech, MaterialQuality qualityLevel, float lodDistance) noexcept
static void TechniqueEntry_TechniqueEntry_Technique_MaterialQuality_float(TechniqueEntry* ptr, Technique* tech, MaterialQuality qualityLevel, float lodDistance)
{
    new(ptr) TechniqueEntry(tech, qualityLevel, lodDistance);
}

// struct TechniqueEntry | File: ../Graphics/Material.h
static void Register_TechniqueEntry(asIScriptEngine* engine)
{
    // TechniqueEntry::TechniqueEntry(Technique* tech, MaterialQuality qualityLevel, float lodDistance) noexcept
    engine->RegisterObjectBehaviour("TechniqueEntry", asBEHAVE_CONSTRUCT, "void f(Technique@+, MaterialQuality, float)", AS_FUNCTION_OBJFIRST(TechniqueEntry_TechniqueEntry_Technique_MaterialQuality_float), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_TechniqueEntry
        REGISTER_CLASS_MANUAL_PART_TechniqueEntry();
    #endif
}

// explicit Terrain::Terrain(Context* context)
static Terrain* Terrain_Terrain_Context()
{
    Context* context = GetScriptContext();
    return new Terrain(context);
}

// class Terrain | File: ../Graphics/Terrain.h
static void Register_Terrain(asIScriptEngine* engine)
{
    // explicit Terrain::Terrain(Context* context)
    engine->RegisterObjectBehaviour("Terrain", asBEHAVE_FACTORY, "Terrain@+ f()", AS_FUNCTION(Terrain_Terrain_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Terrain
        REGISTER_CLASS_MANUAL_PART_Terrain();
    #endif
}

// explicit TerrainPatch::TerrainPatch(Context* context)
static TerrainPatch* TerrainPatch_TerrainPatch_Context()
{
    Context* context = GetScriptContext();
    return new TerrainPatch(context);
}

// class TerrainPatch | File: ../Graphics/TerrainPatch.h
static void Register_TerrainPatch(asIScriptEngine* engine)
{
    // explicit TerrainPatch::TerrainPatch(Context* context)
    engine->RegisterObjectBehaviour("TerrainPatch", asBEHAVE_FACTORY, "TerrainPatch@+ f()", AS_FUNCTION(TerrainPatch_TerrainPatch_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_TerrainPatch
        REGISTER_CLASS_MANUAL_PART_TerrainPatch();
    #endif
}

// explicit Text::Text(Context* context)
static Text* Text_Text_Context()
{
    Context* context = GetScriptContext();
    return new Text(context);
}

// class Text | File: ../UI/Text.h
static void Register_Text(asIScriptEngine* engine)
{
    // explicit Text::Text(Context* context)
    engine->RegisterObjectBehaviour("Text", asBEHAVE_FACTORY, "Text@+ f()", AS_FUNCTION(Text_Text_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Text
        REGISTER_CLASS_MANUAL_PART_Text();
    #endif
}

// explicit Text3D::Text3D(Context* context)
static Text3D* Text3D_Text3D_Context()
{
    Context* context = GetScriptContext();
    return new Text3D(context);
}

// class Text3D | File: ../UI/Text3D.h
static void Register_Text3D(asIScriptEngine* engine)
{
    // explicit Text3D::Text3D(Context* context)
    engine->RegisterObjectBehaviour("Text3D", asBEHAVE_FACTORY, "Text3D@+ f()", AS_FUNCTION(Text3D_Text3D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Text3D
        REGISTER_CLASS_MANUAL_PART_Text3D();
    #endif
}

// explicit Texture::Texture(Context* context)
static Texture* Texture_Texture_Context()
{
    Context* context = GetScriptContext();
    return new Texture(context);
}

// class Texture | File: ../Graphics/Texture.h
static void Register_Texture(asIScriptEngine* engine)
{
    // explicit Texture::Texture(Context* context)
    engine->RegisterObjectBehaviour("Texture", asBEHAVE_FACTORY, "Texture@+ f()", AS_FUNCTION(Texture_Texture_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Texture
        REGISTER_CLASS_MANUAL_PART_Texture();
    #endif
}

// explicit Texture2D::Texture2D(Context* context)
static Texture2D* Texture2D_Texture2D_Context()
{
    Context* context = GetScriptContext();
    return new Texture2D(context);
}

// class Texture2D | File: ../Graphics/Texture2D.h
static void Register_Texture2D(asIScriptEngine* engine)
{
    // explicit Texture2D::Texture2D(Context* context)
    engine->RegisterObjectBehaviour("Texture2D", asBEHAVE_FACTORY, "Texture2D@+ f()", AS_FUNCTION(Texture2D_Texture2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Texture2D
        REGISTER_CLASS_MANUAL_PART_Texture2D();
    #endif
}

// explicit Texture2DArray::Texture2DArray(Context* context)
static Texture2DArray* Texture2DArray_Texture2DArray_Context()
{
    Context* context = GetScriptContext();
    return new Texture2DArray(context);
}

// class Texture2DArray | File: ../Graphics/Texture2DArray.h
static void Register_Texture2DArray(asIScriptEngine* engine)
{
    // explicit Texture2DArray::Texture2DArray(Context* context)
    engine->RegisterObjectBehaviour("Texture2DArray", asBEHAVE_FACTORY, "Texture2DArray@+ f()", AS_FUNCTION(Texture2DArray_Texture2DArray_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Texture2DArray
        REGISTER_CLASS_MANUAL_PART_Texture2DArray();
    #endif
}

// explicit Texture3D::Texture3D(Context* context)
static Texture3D* Texture3D_Texture3D_Context()
{
    Context* context = GetScriptContext();
    return new Texture3D(context);
}

// class Texture3D | File: ../Graphics/Texture3D.h
static void Register_Texture3D(asIScriptEngine* engine)
{
    // explicit Texture3D::Texture3D(Context* context)
    engine->RegisterObjectBehaviour("Texture3D", asBEHAVE_FACTORY, "Texture3D@+ f()", AS_FUNCTION(Texture3D_Texture3D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Texture3D
        REGISTER_CLASS_MANUAL_PART_Texture3D();
    #endif
}

// explicit TextureCube::TextureCube(Context* context)
static TextureCube* TextureCube_TextureCube_Context()
{
    Context* context = GetScriptContext();
    return new TextureCube(context);
}

// class TextureCube | File: ../Graphics/TextureCube.h
static void Register_TextureCube(asIScriptEngine* engine)
{
    // explicit TextureCube::TextureCube(Context* context)
    engine->RegisterObjectBehaviour("TextureCube", asBEHAVE_FACTORY, "TextureCube@+ f()", AS_FUNCTION(TextureCube_TextureCube_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_TextureCube
        REGISTER_CLASS_MANUAL_PART_TextureCube();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_TextureFrame
        REGISTER_CLASS_MANUAL_PART_TextureFrame();
    #endif
}

// explicit Time::Time(Context* context)
static Time* Time_Time_Context()
{
    Context* context = GetScriptContext();
    return new Time(context);
}

// class Time | File: ../Core/Timer.h
static void Register_Time(asIScriptEngine* engine)
{
    // explicit Time::Time(Context* context)
    engine->RegisterObjectBehaviour("Time", asBEHAVE_FACTORY, "Time@+ f()", AS_FUNCTION(Time_Time_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Time
        REGISTER_CLASS_MANUAL_PART_Time();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Timer
        REGISTER_CLASS_MANUAL_PART_Timer();
    #endif
}

// explicit ToolTip::ToolTip(Context* context)
static ToolTip* ToolTip_ToolTip_Context()
{
    Context* context = GetScriptContext();
    return new ToolTip(context);
}

// class ToolTip | File: ../UI/ToolTip.h
static void Register_ToolTip(asIScriptEngine* engine)
{
    // explicit ToolTip::ToolTip(Context* context)
    engine->RegisterObjectBehaviour("ToolTip", asBEHAVE_FACTORY, "ToolTip@+ f()", AS_FUNCTION(ToolTip_ToolTip_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ToolTip
        REGISTER_CLASS_MANUAL_PART_ToolTip();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_TouchState
        REGISTER_CLASS_MANUAL_PART_TouchState();
    #endif
}

// TrailPoint::TrailPoint(const Vector3& position, const Vector3& forward)
static void TrailPoint_TrailPoint_Vector3_Vector3(TrailPoint* ptr, const Vector3& position, const Vector3& forward)
{
    new(ptr) TrailPoint(position, forward);
}

// struct TrailPoint | File: ../Graphics/RibbonTrail.h
static void Register_TrailPoint(asIScriptEngine* engine)
{
    // TrailPoint::TrailPoint(const Vector3& position, const Vector3& forward)
    engine->RegisterObjectBehaviour("TrailPoint", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(TrailPoint_TrailPoint_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_TrailPoint
        REGISTER_CLASS_MANUAL_PART_TrailPoint();
    #endif
}

// explicit UI::UI(Context* context)
static UI* UI_UI_Context()
{
    Context* context = GetScriptContext();
    return new UI(context);
}

// class UI | File: ../UI/UI.h
static void Register_UI(asIScriptEngine* engine)
{
    // explicit UI::UI(Context* context)
    engine->RegisterObjectBehaviour("UI", asBEHAVE_FACTORY, "UI@+ f()", AS_FUNCTION(UI_UI_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_UI
        REGISTER_CLASS_MANUAL_PART_UI();
    #endif
}

// class UIBatch | File: ../UI/UIBatch.h
static void Register_UIBatch(asIScriptEngine* engine)
{
    // UIBatch::UIBatch(UIElement* element, BlendMode blendMode, const IntRect& scissor, Texture* texture, PODVector<float>* vertexData)
    // Error: type "PODVector<float>*" can not automatically bind


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

    #ifdef REGISTER_CLASS_MANUAL_PART_UIBatch
        REGISTER_CLASS_MANUAL_PART_UIBatch();
    #endif
}

// explicit UIComponent::UIComponent(Context* context)
static UIComponent* UIComponent_UIComponent_Context()
{
    Context* context = GetScriptContext();
    return new UIComponent(context);
}

// class UIComponent | File: ../UI/UIComponent.h
static void Register_UIComponent(asIScriptEngine* engine)
{
    // explicit UIComponent::UIComponent(Context* context)
    engine->RegisterObjectBehaviour("UIComponent", asBEHAVE_FACTORY, "UIComponent@+ f()", AS_FUNCTION(UIComponent_UIComponent_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_UIComponent
        REGISTER_CLASS_MANUAL_PART_UIComponent();
    #endif
}

// explicit UIElement::UIElement(Context* context)
static UIElement* UIElement_UIElement_Context()
{
    Context* context = GetScriptContext();
    return new UIElement(context);
}

// class UIElement | File: ../UI/UIElement.h
static void Register_UIElement(asIScriptEngine* engine)
{
    // explicit UIElement::UIElement(Context* context)
    engine->RegisterObjectBehaviour("UIElement", asBEHAVE_FACTORY, "UIElement@+ f()", AS_FUNCTION(UIElement_UIElement_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_UIElement
        REGISTER_CLASS_MANUAL_PART_UIElement();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_UISelectable
        REGISTER_CLASS_MANUAL_PART_UISelectable();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_UnknownComponent
        REGISTER_CLASS_MANUAL_PART_UnknownComponent();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_VAnimEventFrame
        REGISTER_CLASS_MANUAL_PART_VAnimEventFrame();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_VAnimKeyFrame
        REGISTER_CLASS_MANUAL_PART_VAnimKeyFrame();
    #endif
}

// explicit ValueAnimation::ValueAnimation(Context* context)
static ValueAnimation* ValueAnimation_ValueAnimation_Context()
{
    Context* context = GetScriptContext();
    return new ValueAnimation(context);
}

// class ValueAnimation | File: ../Scene/ValueAnimation.h
static void Register_ValueAnimation(asIScriptEngine* engine)
{
    // explicit ValueAnimation::ValueAnimation(Context* context)
    engine->RegisterObjectBehaviour("ValueAnimation", asBEHAVE_FACTORY, "ValueAnimation@+ f()", AS_FUNCTION(ValueAnimation_ValueAnimation_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ValueAnimation
        REGISTER_CLASS_MANUAL_PART_ValueAnimation();
    #endif
}

// ValueAnimationInfo::ValueAnimationInfo(ValueAnimation* animation, WrapMode wrapMode, float speed)
static ValueAnimationInfo* ValueAnimationInfo_ValueAnimationInfo_ValueAnimation_WrapMode_float(ValueAnimation* animation, WrapMode wrapMode, float speed)
{
    return new ValueAnimationInfo(animation, wrapMode, speed);
}

// ValueAnimationInfo::ValueAnimationInfo(Object* target, ValueAnimation* animation, WrapMode wrapMode, float speed)
static ValueAnimationInfo* ValueAnimationInfo_ValueAnimationInfo_Object_ValueAnimation_WrapMode_float(Object* target, ValueAnimation* animation, WrapMode wrapMode, float speed)
{
    return new ValueAnimationInfo(target, animation, wrapMode, speed);
}

// ValueAnimationInfo::ValueAnimationInfo(const ValueAnimationInfo& other)
static ValueAnimationInfo* ValueAnimationInfo_ValueAnimationInfo_ValueAnimationInfo(const ValueAnimationInfo& other)
{
    return new ValueAnimationInfo(other);
}

// class ValueAnimationInfo | File: ../Scene/ValueAnimationInfo.h
static void Register_ValueAnimationInfo(asIScriptEngine* engine)
{
    // ValueAnimationInfo::ValueAnimationInfo(ValueAnimation* animation, WrapMode wrapMode, float speed)
    engine->RegisterObjectBehaviour("ValueAnimationInfo", asBEHAVE_FACTORY, "ValueAnimationInfo@+ f(ValueAnimation@+, WrapMode, float)", AS_FUNCTION(ValueAnimationInfo_ValueAnimationInfo_ValueAnimation_WrapMode_float) , AS_CALL_CDECL);
    // ValueAnimationInfo::ValueAnimationInfo(Object* target, ValueAnimation* animation, WrapMode wrapMode, float speed)
    engine->RegisterObjectBehaviour("ValueAnimationInfo", asBEHAVE_FACTORY, "ValueAnimationInfo@+ f(Object@+, ValueAnimation@+, WrapMode, float)", AS_FUNCTION(ValueAnimationInfo_ValueAnimationInfo_Object_ValueAnimation_WrapMode_float) , AS_CALL_CDECL);
    // ValueAnimationInfo::ValueAnimationInfo(const ValueAnimationInfo& other)
    engine->RegisterObjectBehaviour("ValueAnimationInfo", asBEHAVE_FACTORY, "ValueAnimationInfo@+ f(const ValueAnimationInfo&in)", AS_FUNCTION(ValueAnimationInfo_ValueAnimationInfo_ValueAnimationInfo) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ValueAnimationInfo
        REGISTER_CLASS_MANUAL_PART_ValueAnimationInfo();
    #endif
}

// Variant::Variant(int value)
static void Variant_Variant_int(Variant* ptr, int value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(long long value)
static void Variant_Variant_longlong(Variant* ptr, long long value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(unsigned value)
static void Variant_Variant_unsigned(Variant* ptr, unsigned value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(unsigned long long value)
static void Variant_Variant_unsignedlonglong(Variant* ptr, unsigned long long value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const StringHash& value)
static void Variant_Variant_StringHash(Variant* ptr, const StringHash& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(bool value)
static void Variant_Variant_bool(Variant* ptr, bool value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(float value)
static void Variant_Variant_float(Variant* ptr, float value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(double value)
static void Variant_Variant_double(Variant* ptr, double value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const Vector2& value)
static void Variant_Variant_Vector2(Variant* ptr, const Vector2& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const Vector3& value)
static void Variant_Variant_Vector3(Variant* ptr, const Vector3& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const Vector4& value)
static void Variant_Variant_Vector4(Variant* ptr, const Vector4& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const Quaternion& value)
static void Variant_Variant_Quaternion(Variant* ptr, const Quaternion& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const Color& value)
static void Variant_Variant_Color(Variant* ptr, const Color& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const String& value)
static void Variant_Variant_String(Variant* ptr, const String& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const VectorBuffer& value)
static void Variant_Variant_VectorBuffer(Variant* ptr, const VectorBuffer& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const ResourceRef& value)
static void Variant_Variant_ResourceRef(Variant* ptr, const ResourceRef& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const ResourceRefList& value)
static void Variant_Variant_ResourceRefList(Variant* ptr, const ResourceRefList& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const VariantMap& value)
static void Variant_Variant_VariantMap(Variant* ptr, const VariantMap& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const StringVector& value)
static void Variant_Variant_StringVector(Variant* ptr, CScriptArray* value_conv)
{
    StringVector value = ArrayToVector<String>(value_conv);
    new(ptr) Variant(value);
}

// Variant::Variant(const Rect& value)
static void Variant_Variant_Rect(Variant* ptr, const Rect& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const IntRect& value)
static void Variant_Variant_IntRect(Variant* ptr, const IntRect& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const IntVector2& value)
static void Variant_Variant_IntVector2(Variant* ptr, const IntVector2& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const IntVector3& value)
static void Variant_Variant_IntVector3(Variant* ptr, const IntVector3& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(RefCounted* value)
static void Variant_Variant_RefCounted(Variant* ptr, RefCounted* value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const Matrix3& value)
static void Variant_Variant_Matrix3(Variant* ptr, const Matrix3& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const Matrix3x4& value)
static void Variant_Variant_Matrix3x4(Variant* ptr, const Matrix3x4& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const Matrix4& value)
static void Variant_Variant_Matrix4(Variant* ptr, const Matrix4& value)
{
    new(ptr) Variant(value);
}

// Variant::Variant(const String& type, const String& value)
static void Variant_Variant_String_String(Variant* ptr, const String& type, const String& value)
{
    new(ptr) Variant(type, value);
}

// Variant::Variant(VariantType type, const String& value)
static void Variant_Variant_VariantType_String(Variant* ptr, VariantType type, const String& value)
{
    new(ptr) Variant(type, value);
}

// Variant::Variant(const Variant& value)
static void Variant_Variant_Variant(Variant* ptr, const Variant& value)
{
    new(ptr) Variant(value);
}

// class Variant | File: ../Core/Variant.h
static void Register_Variant(asIScriptEngine* engine)
{
    // Variant::Variant(VariantType type, const char* value)
    // Error: type "const char*" can not automatically bind
    // Variant::Variant(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // Variant::Variant(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
    // Variant::Variant(const char* type, const char* value)
    // Error: type "const char*" can not automatically bind
    // Variant::Variant(const char* value)
    // Error: type "const char*" can not automatically bind
    // Variant::Variant(void* value)
    // Error: type "void*" can not automatically bind
    // template<class T> Variant::Variant(const CustomVariantValueImpl<T>& value)
    // Error: type "const CustomVariantValueImpl<T>&" can not automatically bind

    // Variant::Variant(int value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(int)", AS_FUNCTION_OBJFIRST(Variant_Variant_int), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(long long value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(int64)", AS_FUNCTION_OBJFIRST(Variant_Variant_longlong), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(unsigned value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(uint)", AS_FUNCTION_OBJFIRST(Variant_Variant_unsigned), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(unsigned long long value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(uint64)", AS_FUNCTION_OBJFIRST(Variant_Variant_unsignedlonglong), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const StringHash& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const StringHash&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_StringHash), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(bool value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(bool)", AS_FUNCTION_OBJFIRST(Variant_Variant_bool), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(float value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(float)", AS_FUNCTION_OBJFIRST(Variant_Variant_float), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(double value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(double)", AS_FUNCTION_OBJFIRST(Variant_Variant_double), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const Vector2& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const Vector2&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_Vector2), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const Vector3& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const Vector3&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_Vector3), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const Vector4& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const Vector4&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_Vector4), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const Quaternion& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const Quaternion&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_Quaternion), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const Color& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const Color&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_Color), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const String& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const String&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_String), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const VectorBuffer& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const VectorBuffer&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_VectorBuffer), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const ResourceRef& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const ResourceRef&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_ResourceRef), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const ResourceRefList& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const ResourceRefList&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_ResourceRefList), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const VariantMap& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const VariantMap&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_VariantMap), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const StringVector& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(Array<String>@+)", AS_FUNCTION_OBJFIRST(Variant_Variant_StringVector), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const Rect& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const Rect&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_Rect), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const IntRect& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const IntRect&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_IntRect), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const IntVector2& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const IntVector2&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_IntVector2), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const IntVector3& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const IntVector3&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_IntVector3), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(RefCounted* value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(RefCounted@+)", AS_FUNCTION_OBJFIRST(Variant_Variant_RefCounted), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const Matrix3& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const Matrix3&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_Matrix3), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const Matrix3x4& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const Matrix3x4&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_Matrix3x4), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const Matrix4& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const Matrix4&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_Matrix4), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const String& type, const String& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const String&in, const String&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_String_String), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(VariantType type, const String& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(VariantType, const String&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_VariantType_String), AS_CALL_CDECL_OBJFIRST);
    // Variant::Variant(const Variant& value)
    engine->RegisterObjectBehaviour("Variant", asBEHAVE_CONSTRUCT, "void f(const Variant&in)", AS_FUNCTION_OBJFIRST(Variant_Variant_Variant), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_Variant
        REGISTER_CLASS_MANUAL_PART_Variant();
    #endif
}

// Vector2::Vector2(const Vector2& vector) noexcept=default
static void Vector2_Vector2_Vector2(Vector2* ptr, const Vector2& vector)
{
    new(ptr) Vector2(vector);
}

// explicit Vector2::Vector2(const IntVector2& vector) noexcept
static void Vector2_Vector2_IntVector2(Vector2* ptr, const IntVector2& vector)
{
    new(ptr) Vector2(vector);
}

// Vector2::Vector2(float x, float y) noexcept
static void Vector2_Vector2_float_float(Vector2* ptr, float x, float y)
{
    new(ptr) Vector2(x, y);
}

// class Vector2 | File: ../Math/Vector2.h
static void Register_Vector2(asIScriptEngine* engine)
{
    // explicit Vector2::Vector2(const float* data) noexcept
    // Error: type "const float*" can not automatically bind

    // Vector2::Vector2(const Vector2& vector) noexcept=default
    engine->RegisterObjectBehaviour("Vector2", asBEHAVE_CONSTRUCT, "void f(const Vector2&in)", AS_FUNCTION_OBJFIRST(Vector2_Vector2_Vector2), AS_CALL_CDECL_OBJFIRST);
    // explicit Vector2::Vector2(const IntVector2& vector) noexcept
    engine->RegisterObjectBehaviour("Vector2", asBEHAVE_CONSTRUCT, "void f(const IntVector2&in)", AS_FUNCTION_OBJFIRST(Vector2_Vector2_IntVector2), AS_CALL_CDECL_OBJFIRST);
    // Vector2::Vector2(float x, float y) noexcept
    engine->RegisterObjectBehaviour("Vector2", asBEHAVE_CONSTRUCT, "void f(float, float)", AS_FUNCTION_OBJFIRST(Vector2_Vector2_float_float), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Vector2
        REGISTER_CLASS_MANUAL_PART_Vector2();
    #endif
}

// Vector3::Vector3(const Vector3& vector) noexcept=default
static void Vector3_Vector3_Vector3(Vector3* ptr, const Vector3& vector)
{
    new(ptr) Vector3(vector);
}

// Vector3::Vector3(const Vector2& vector, float z) noexcept
static void Vector3_Vector3_Vector2_float(Vector3* ptr, const Vector2& vector, float z)
{
    new(ptr) Vector3(vector, z);
}

// explicit Vector3::Vector3(const Vector2& vector) noexcept
static void Vector3_Vector3_Vector2(Vector3* ptr, const Vector2& vector)
{
    new(ptr) Vector3(vector);
}

// explicit Vector3::Vector3(const IntVector3& vector) noexcept
static void Vector3_Vector3_IntVector3(Vector3* ptr, const IntVector3& vector)
{
    new(ptr) Vector3(vector);
}

// Vector3::Vector3(float x, float y, float z) noexcept
static void Vector3_Vector3_float_float_float(Vector3* ptr, float x, float y, float z)
{
    new(ptr) Vector3(x, y, z);
}

// Vector3::Vector3(float x, float y) noexcept
static void Vector3_Vector3_float_float(Vector3* ptr, float x, float y)
{
    new(ptr) Vector3(x, y);
}

// class Vector3 | File: ../Math/Vector3.h
static void Register_Vector3(asIScriptEngine* engine)
{
    // explicit Vector3::Vector3(const float* data) noexcept
    // Error: type "const float*" can not automatically bind

    // Vector3::Vector3(const Vector3& vector) noexcept=default
    engine->RegisterObjectBehaviour("Vector3", asBEHAVE_CONSTRUCT, "void f(const Vector3&in)", AS_FUNCTION_OBJFIRST(Vector3_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);
    // Vector3::Vector3(const Vector2& vector, float z) noexcept
    engine->RegisterObjectBehaviour("Vector3", asBEHAVE_CONSTRUCT, "void f(const Vector2&in, float)", AS_FUNCTION_OBJFIRST(Vector3_Vector3_Vector2_float), AS_CALL_CDECL_OBJFIRST);
    // explicit Vector3::Vector3(const Vector2& vector) noexcept
    engine->RegisterObjectBehaviour("Vector3", asBEHAVE_CONSTRUCT, "void f(const Vector2&in)", AS_FUNCTION_OBJFIRST(Vector3_Vector3_Vector2), AS_CALL_CDECL_OBJFIRST);
    // explicit Vector3::Vector3(const IntVector3& vector) noexcept
    engine->RegisterObjectBehaviour("Vector3", asBEHAVE_CONSTRUCT, "void f(const IntVector3&in)", AS_FUNCTION_OBJFIRST(Vector3_Vector3_IntVector3), AS_CALL_CDECL_OBJFIRST);
    // Vector3::Vector3(float x, float y, float z) noexcept
    engine->RegisterObjectBehaviour("Vector3", asBEHAVE_CONSTRUCT, "void f(float, float, float)", AS_FUNCTION_OBJFIRST(Vector3_Vector3_float_float_float), AS_CALL_CDECL_OBJFIRST);
    // Vector3::Vector3(float x, float y) noexcept
    engine->RegisterObjectBehaviour("Vector3", asBEHAVE_CONSTRUCT, "void f(float, float)", AS_FUNCTION_OBJFIRST(Vector3_Vector3_float_float), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Vector3
        REGISTER_CLASS_MANUAL_PART_Vector3();
    #endif
}

// Vector4::Vector4(const Vector4& vector) noexcept=default
static void Vector4_Vector4_Vector4(Vector4* ptr, const Vector4& vector)
{
    new(ptr) Vector4(vector);
}

// Vector4::Vector4(const Vector3& vector, float w) noexcept
static void Vector4_Vector4_Vector3_float(Vector4* ptr, const Vector3& vector, float w)
{
    new(ptr) Vector4(vector, w);
}

// Vector4::Vector4(float x, float y, float z, float w) noexcept
static void Vector4_Vector4_float_float_float_float(Vector4* ptr, float x, float y, float z, float w)
{
    new(ptr) Vector4(x, y, z, w);
}

// class Vector4 | File: ../Math/Vector4.h
static void Register_Vector4(asIScriptEngine* engine)
{
    // explicit Vector4::Vector4(const float* data) noexcept
    // Error: type "const float*" can not automatically bind

    // Vector4::Vector4(const Vector4& vector) noexcept=default
    engine->RegisterObjectBehaviour("Vector4", asBEHAVE_CONSTRUCT, "void f(const Vector4&in)", AS_FUNCTION_OBJFIRST(Vector4_Vector4_Vector4), AS_CALL_CDECL_OBJFIRST);
    // Vector4::Vector4(const Vector3& vector, float w) noexcept
    engine->RegisterObjectBehaviour("Vector4", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, float)", AS_FUNCTION_OBJFIRST(Vector4_Vector4_Vector3_float), AS_CALL_CDECL_OBJFIRST);
    // Vector4::Vector4(float x, float y, float z, float w) noexcept
    engine->RegisterObjectBehaviour("Vector4", asBEHAVE_CONSTRUCT, "void f(float, float, float, float)", AS_FUNCTION_OBJFIRST(Vector4_Vector4_float_float_float_float), AS_CALL_CDECL_OBJFIRST);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Vector4
        REGISTER_CLASS_MANUAL_PART_Vector4();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_VectorBase
        REGISTER_CLASS_MANUAL_PART_VectorBase();
    #endif
}

// VectorBuffer::VectorBuffer(Deserializer& source, unsigned size)
static void VectorBuffer_VectorBuffer_Deserializer_unsigned(VectorBuffer* ptr, Deserializer& source, unsigned size)
{
    new(ptr) VectorBuffer(source, size);
}

// class VectorBuffer | File: ../IO/VectorBuffer.h
static void Register_VectorBuffer(asIScriptEngine* engine)
{
    // VectorBuffer::VectorBuffer(const void* data, unsigned size)
    // Error: type "const void*" can not automatically bind
    // explicit VectorBuffer::VectorBuffer(const PODVector<unsigned char>& data)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // VectorBuffer::VectorBuffer(Deserializer& source, unsigned size)
    engine->RegisterObjectBehaviour("VectorBuffer", asBEHAVE_CONSTRUCT, "void f(Deserializer&, uint)", AS_FUNCTION_OBJFIRST(VectorBuffer_VectorBuffer_Deserializer_unsigned), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_VectorBuffer
        REGISTER_CLASS_MANUAL_PART_VectorBuffer();
    #endif
}

// explicit VertexBuffer::VertexBuffer(Context* context, bool forceHeadless=false)
static VertexBuffer* VertexBuffer_VertexBuffer_Context_bool(bool forceHeadless)
{
    Context* context = GetScriptContext();
    return new VertexBuffer(context, forceHeadless);
}

// class VertexBuffer | File: ../Graphics/VertexBuffer.h
static void Register_VertexBuffer(asIScriptEngine* engine)
{
    // explicit VertexBuffer::VertexBuffer(Context* context, bool forceHeadless=false)
    engine->RegisterObjectBehaviour("VertexBuffer", asBEHAVE_FACTORY, "VertexBuffer@+ f(bool = false)", AS_FUNCTION(VertexBuffer_VertexBuffer_Context_bool) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_VertexBuffer
        REGISTER_CLASS_MANUAL_PART_VertexBuffer();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_VertexBufferDesc
        REGISTER_CLASS_MANUAL_PART_VertexBufferDesc();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_VertexBufferMorph
        REGISTER_CLASS_MANUAL_PART_VertexBufferMorph();
    #endif
}

// VertexElement::VertexElement(VertexElementType type, VertexElementSemantic semantic, unsigned char index=0, bool perInstance=false) noexcept
static void VertexElement_VertexElement_VertexElementType_VertexElementSemantic_unsignedchar_bool(VertexElement* ptr, VertexElementType type, VertexElementSemantic semantic, unsigned char index, bool perInstance)
{
    new(ptr) VertexElement(type, semantic, index, perInstance);
}

// struct VertexElement | File: ../Graphics/GraphicsDefs.h
static void Register_VertexElement(asIScriptEngine* engine)
{
    // VertexElement::VertexElement(VertexElementType type, VertexElementSemantic semantic, unsigned char index=0, bool perInstance=false) noexcept
    engine->RegisterObjectBehaviour("VertexElement", asBEHAVE_CONSTRUCT, "void f(VertexElementType, VertexElementSemantic, uint8 = 0, bool = false)", AS_FUNCTION_OBJFIRST(VertexElement_VertexElement_VertexElementType_VertexElementSemantic_unsignedchar_bool), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_VertexElement
        REGISTER_CLASS_MANUAL_PART_VertexElement();
    #endif
}

// explicit View::View(Context* context)
static View* View_View_Context()
{
    Context* context = GetScriptContext();
    return new View(context);
}

// class View | File: ../Graphics/View.h
static void Register_View(asIScriptEngine* engine)
{
    // explicit View::View(Context* context)
    engine->RegisterObjectBehaviour("View", asBEHAVE_FACTORY, "View@+ f()", AS_FUNCTION(View_View_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_View
        REGISTER_CLASS_MANUAL_PART_View();
    #endif
}

// explicit View3D::View3D(Context* context)
static View3D* View3D_View3D_Context()
{
    Context* context = GetScriptContext();
    return new View3D(context);
}

// class View3D | File: ../UI/View3D.h
static void Register_View3D(asIScriptEngine* engine)
{
    // explicit View3D::View3D(Context* context)
    engine->RegisterObjectBehaviour("View3D", asBEHAVE_FACTORY, "View3D@+ f()", AS_FUNCTION(View3D_View3D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_View3D
        REGISTER_CLASS_MANUAL_PART_View3D();
    #endif
}

// explicit Viewport::Viewport(Context* context)
static Viewport* Viewport_Viewport_Context()
{
    Context* context = GetScriptContext();
    return new Viewport(context);
}

// Viewport::Viewport(Context* context, Scene* scene, Camera* camera, RenderPath* renderPath=nullptr)
static Viewport* Viewport_Viewport_Context_Scene_Camera_RenderPath(Scene* scene, Camera* camera, RenderPath* renderPath)
{
    Context* context = GetScriptContext();
    return new Viewport(context, scene, camera, renderPath);
}

// Viewport::Viewport(Context* context, Scene* scene, Camera* camera, const IntRect& rect, RenderPath* renderPath=nullptr)
static Viewport* Viewport_Viewport_Context_Scene_Camera_IntRect_RenderPath(Scene* scene, Camera* camera, const IntRect& rect, RenderPath* renderPath)
{
    Context* context = GetScriptContext();
    return new Viewport(context, scene, camera, rect, renderPath);
}

// class Viewport | File: ../Graphics/Viewport.h
static void Register_Viewport(asIScriptEngine* engine)
{
    // explicit Viewport::Viewport(Context* context)
    engine->RegisterObjectBehaviour("Viewport", asBEHAVE_FACTORY, "Viewport@+ f()", AS_FUNCTION(Viewport_Viewport_Context) , AS_CALL_CDECL);
    // Viewport::Viewport(Context* context, Scene* scene, Camera* camera, RenderPath* renderPath=nullptr)
    engine->RegisterObjectBehaviour("Viewport", asBEHAVE_FACTORY, "Viewport@+ f(Scene@+, Camera@+, RenderPath@+ = null)", AS_FUNCTION(Viewport_Viewport_Context_Scene_Camera_RenderPath) , AS_CALL_CDECL);
    // Viewport::Viewport(Context* context, Scene* scene, Camera* camera, const IntRect& rect, RenderPath* renderPath=nullptr)
    engine->RegisterObjectBehaviour("Viewport", asBEHAVE_FACTORY, "Viewport@+ f(Scene@+, Camera@+, const IntRect&in, RenderPath@+ = null)", AS_FUNCTION(Viewport_Viewport_Context_Scene_Camera_IntRect_RenderPath) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Viewport
        REGISTER_CLASS_MANUAL_PART_Viewport();
    #endif
}

// explicit Window::Window(Context* context)
static Window* Window_Window_Context()
{
    Context* context = GetScriptContext();
    return new Window(context);
}

// class Window | File: ../UI/Window.h
static void Register_Window(asIScriptEngine* engine)
{
    // explicit Window::Window(Context* context)
    engine->RegisterObjectBehaviour("Window", asBEHAVE_FACTORY, "Window@+ f()", AS_FUNCTION(Window_Window_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Window
        REGISTER_CLASS_MANUAL_PART_Window();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_WindowModeParams
        REGISTER_CLASS_MANUAL_PART_WindowModeParams();
    #endif
}

// explicit WorkQueue::WorkQueue(Context* context)
static WorkQueue* WorkQueue_WorkQueue_Context()
{
    Context* context = GetScriptContext();
    return new WorkQueue(context);
}

// class WorkQueue | File: ../Core/WorkQueue.h
static void Register_WorkQueue(asIScriptEngine* engine)
{
    // explicit WorkQueue::WorkQueue(Context* context)
    engine->RegisterObjectBehaviour("WorkQueue", asBEHAVE_FACTORY, "WorkQueue@+ f()", AS_FUNCTION(WorkQueue_WorkQueue_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_WorkQueue
        REGISTER_CLASS_MANUAL_PART_WorkQueue();
    #endif
}

// XMLElement::XMLElement(const XMLElement& rhs)
static void XMLElement_XMLElement_XMLElement(XMLElement* ptr, const XMLElement& rhs)
{
    new(ptr) XMLElement(rhs);
}

// class XMLElement | File: ../Resource/XMLElement.h
static void Register_XMLElement(asIScriptEngine* engine)
{
    // XMLElement::XMLElement(XMLFile* file, const XPathResultSet* resultSet, const pugi::xpath_node* xpathNode, unsigned xpathResultIndex)
    // Error: type "const XPathResultSet*" can not automatically bind
    // XMLElement::XMLElement(XMLFile* file, pugi::xml_node_struct* node)
    // Error: type "pugi::xml_node_struct*" can not automatically bind

    // XMLElement::XMLElement(const XMLElement& rhs)
    engine->RegisterObjectBehaviour("XMLElement", asBEHAVE_CONSTRUCT, "void f(const XMLElement&in)", AS_FUNCTION_OBJFIRST(XMLElement_XMLElement_XMLElement), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_XMLElement
        REGISTER_CLASS_MANUAL_PART_XMLElement();
    #endif
}

// explicit XMLFile::XMLFile(Context* context)
static XMLFile* XMLFile_XMLFile_Context()
{
    Context* context = GetScriptContext();
    return new XMLFile(context);
}

// class XMLFile | File: ../Resource/XMLFile.h
static void Register_XMLFile(asIScriptEngine* engine)
{
    // explicit XMLFile::XMLFile(Context* context)
    engine->RegisterObjectBehaviour("XMLFile", asBEHAVE_FACTORY, "XMLFile@+ f()", AS_FUNCTION(XMLFile_XMLFile_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_XMLFile
        REGISTER_CLASS_MANUAL_PART_XMLFile();
    #endif
}

// explicit XPathQuery::XPathQuery(const String& queryString, const String& variableString=String::EMPTY)
static void XPathQuery_XPathQuery_String_String(XPathQuery* ptr, const String& queryString, const String& variableString)
{
    new(ptr) XPathQuery(queryString, variableString);
}

// class XPathQuery | File: ../Resource/XMLElement.h
static void Register_XPathQuery(asIScriptEngine* engine)
{
    // explicit XPathQuery::XPathQuery(const String& queryString, const String& variableString=String::EMPTY)
    engine->RegisterObjectBehaviour("XPathQuery", asBEHAVE_CONSTRUCT, "void f(const String&in, const String&in = String::EMPTY)", AS_FUNCTION_OBJFIRST(XPathQuery_XPathQuery_String_String), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_XPathQuery
        REGISTER_CLASS_MANUAL_PART_XPathQuery();
    #endif
}

// XPathResultSet::XPathResultSet(const XPathResultSet& rhs)
static void XPathResultSet_XPathResultSet_XPathResultSet(XPathResultSet* ptr, const XPathResultSet& rhs)
{
    new(ptr) XPathResultSet(rhs);
}

// class XPathResultSet | File: ../Resource/XMLElement.h
static void Register_XPathResultSet(asIScriptEngine* engine)
{
    // XPathResultSet::XPathResultSet(XMLFile* file, pugi::xpath_node_set* resultSet)
    // Error: type "pugi::xpath_node_set*" can not automatically bind

    // XPathResultSet::XPathResultSet(const XPathResultSet& rhs)
    engine->RegisterObjectBehaviour("XPathResultSet", asBEHAVE_CONSTRUCT, "void f(const XPathResultSet&in)", AS_FUNCTION_OBJFIRST(XPathResultSet_XPathResultSet_XPathResultSet), AS_CALL_CDECL_OBJFIRST);


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

    #ifdef REGISTER_CLASS_MANUAL_PART_XPathResultSet
        REGISTER_CLASS_MANUAL_PART_XPathResultSet();
    #endif
}

// explicit Zone::Zone(Context* context)
static Zone* Zone_Zone_Context()
{
    Context* context = GetScriptContext();
    return new Zone(context);
}

// class Zone | File: ../Graphics/Zone.h
static void Register_Zone(asIScriptEngine* engine)
{
    // explicit Zone::Zone(Context* context)
    engine->RegisterObjectBehaviour("Zone", asBEHAVE_FACTORY, "Zone@+ f()", AS_FUNCTION(Zone_Zone_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Zone
        REGISTER_CLASS_MANUAL_PART_Zone();
    #endif
}

#ifdef URHO3D_DATABASE

// explicit Database::Database(Context* context)
static Database* Database_Database_Context()
{
    Context* context = GetScriptContext();
    return new Database(context);
}

// class Database | File: ../Database/Database.h
static void Register_Database(asIScriptEngine* engine)
{
    // explicit Database::Database(Context* context)
    engine->RegisterObjectBehaviour("Database", asBEHAVE_FACTORY, "Database@+ f()", AS_FUNCTION(Database_Database_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Database
        REGISTER_CLASS_MANUAL_PART_Database();
    #endif
}

#endif // def URHO3D_DATABASE

#ifdef URHO3D_IK

// explicit IKConstraint::IKConstraint(Context* context)
static IKConstraint* IKConstraint_IKConstraint_Context()
{
    Context* context = GetScriptContext();
    return new IKConstraint(context);
}

// class IKConstraint | File: ../IK/IKConstraint.h
static void Register_IKConstraint(asIScriptEngine* engine)
{
    // explicit IKConstraint::IKConstraint(Context* context)
    engine->RegisterObjectBehaviour("IKConstraint", asBEHAVE_FACTORY, "IKConstraint@+ f()", AS_FUNCTION(IKConstraint_IKConstraint_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_IKConstraint
        REGISTER_CLASS_MANUAL_PART_IKConstraint();
    #endif
}

// explicit IKEffector::IKEffector(Context* context)
static IKEffector* IKEffector_IKEffector_Context()
{
    Context* context = GetScriptContext();
    return new IKEffector(context);
}

// class IKEffector | File: ../IK/IKEffector.h
static void Register_IKEffector(asIScriptEngine* engine)
{
    // explicit IKEffector::IKEffector(Context* context)
    engine->RegisterObjectBehaviour("IKEffector", asBEHAVE_FACTORY, "IKEffector@+ f()", AS_FUNCTION(IKEffector_IKEffector_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_IKEffector
        REGISTER_CLASS_MANUAL_PART_IKEffector();
    #endif
}

// explicit IKSolver::IKSolver(Context* context)
static IKSolver* IKSolver_IKSolver_Context()
{
    Context* context = GetScriptContext();
    return new IKSolver(context);
}

// class IKSolver | File: ../IK/IKSolver.h
static void Register_IKSolver(asIScriptEngine* engine)
{
    // explicit IKSolver::IKSolver(Context* context)
    engine->RegisterObjectBehaviour("IKSolver", asBEHAVE_FACTORY, "IKSolver@+ f()", AS_FUNCTION(IKSolver_IKSolver_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_IKSolver
        REGISTER_CLASS_MANUAL_PART_IKSolver();
    #endif
}

#endif // def URHO3D_IK

#ifdef URHO3D_NAVIGATION

// explicit CrowdAgent::CrowdAgent(Context* context)
static CrowdAgent* CrowdAgent_CrowdAgent_Context()
{
    Context* context = GetScriptContext();
    return new CrowdAgent(context);
}

// class CrowdAgent | File: ../Navigation/CrowdAgent.h
static void Register_CrowdAgent(asIScriptEngine* engine)
{
    // explicit CrowdAgent::CrowdAgent(Context* context)
    engine->RegisterObjectBehaviour("CrowdAgent", asBEHAVE_FACTORY, "CrowdAgent@+ f()", AS_FUNCTION(CrowdAgent_CrowdAgent_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CrowdAgent
        REGISTER_CLASS_MANUAL_PART_CrowdAgent();
    #endif
}

// explicit CrowdManager::CrowdManager(Context* context)
static CrowdManager* CrowdManager_CrowdManager_Context()
{
    Context* context = GetScriptContext();
    return new CrowdManager(context);
}

// class CrowdManager | File: ../Navigation/CrowdManager.h
static void Register_CrowdManager(asIScriptEngine* engine)
{
    // explicit CrowdManager::CrowdManager(Context* context)
    engine->RegisterObjectBehaviour("CrowdManager", asBEHAVE_FACTORY, "CrowdManager@+ f()", AS_FUNCTION(CrowdManager_CrowdManager_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CrowdManager
        REGISTER_CLASS_MANUAL_PART_CrowdManager();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_CrowdObstacleAvoidanceParams
        REGISTER_CLASS_MANUAL_PART_CrowdObstacleAvoidanceParams();
    #endif
}

// explicit DynamicNavigationMesh::DynamicNavigationMesh(Context* context)
static DynamicNavigationMesh* DynamicNavigationMesh_DynamicNavigationMesh_Context()
{
    Context* context = GetScriptContext();
    return new DynamicNavigationMesh(context);
}

// class DynamicNavigationMesh | File: ../Navigation/DynamicNavigationMesh.h
static void Register_DynamicNavigationMesh(asIScriptEngine* engine)
{
    // explicit DynamicNavigationMesh::DynamicNavigationMesh(Context* context)
    engine->RegisterObjectBehaviour("DynamicNavigationMesh", asBEHAVE_FACTORY, "DynamicNavigationMesh@+ f()", AS_FUNCTION(DynamicNavigationMesh_DynamicNavigationMesh_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_DynamicNavigationMesh
        REGISTER_CLASS_MANUAL_PART_DynamicNavigationMesh();
    #endif
}

// explicit NavArea::NavArea(Context* context)
static NavArea* NavArea_NavArea_Context()
{
    Context* context = GetScriptContext();
    return new NavArea(context);
}

// class NavArea | File: ../Navigation/NavArea.h
static void Register_NavArea(asIScriptEngine* engine)
{
    // explicit NavArea::NavArea(Context* context)
    engine->RegisterObjectBehaviour("NavArea", asBEHAVE_FACTORY, "NavArea@+ f()", AS_FUNCTION(NavArea_NavArea_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_NavArea
        REGISTER_CLASS_MANUAL_PART_NavArea();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_NavAreaStub
        REGISTER_CLASS_MANUAL_PART_NavAreaStub();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_NavBuildData
        REGISTER_CLASS_MANUAL_PART_NavBuildData();
    #endif
}

// explicit Navigable::Navigable(Context* context)
static Navigable* Navigable_Navigable_Context()
{
    Context* context = GetScriptContext();
    return new Navigable(context);
}

// class Navigable | File: ../Navigation/Navigable.h
static void Register_Navigable(asIScriptEngine* engine)
{
    // explicit Navigable::Navigable(Context* context)
    engine->RegisterObjectBehaviour("Navigable", asBEHAVE_FACTORY, "Navigable@+ f()", AS_FUNCTION(Navigable_Navigable_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Navigable
        REGISTER_CLASS_MANUAL_PART_Navigable();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_NavigationGeometryInfo
        REGISTER_CLASS_MANUAL_PART_NavigationGeometryInfo();
    #endif
}

// explicit NavigationMesh::NavigationMesh(Context* context)
static NavigationMesh* NavigationMesh_NavigationMesh_Context()
{
    Context* context = GetScriptContext();
    return new NavigationMesh(context);
}

// class NavigationMesh | File: ../Navigation/NavigationMesh.h
static void Register_NavigationMesh(asIScriptEngine* engine)
{
    // explicit NavigationMesh::NavigationMesh(Context* context)
    engine->RegisterObjectBehaviour("NavigationMesh", asBEHAVE_FACTORY, "NavigationMesh@+ f()", AS_FUNCTION(NavigationMesh_NavigationMesh_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_NavigationMesh
        REGISTER_CLASS_MANUAL_PART_NavigationMesh();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_NavigationPathPoint
        REGISTER_CLASS_MANUAL_PART_NavigationPathPoint();
    #endif
}

// explicit Obstacle::Obstacle(Context* context)
static Obstacle* Obstacle_Obstacle_Context()
{
    Context* context = GetScriptContext();
    return new Obstacle(context);
}

// class Obstacle | File: ../Navigation/Obstacle.h
static void Register_Obstacle(asIScriptEngine* engine)
{
    // explicit Obstacle::Obstacle(Context* context)
    engine->RegisterObjectBehaviour("Obstacle", asBEHAVE_FACTORY, "Obstacle@+ f()", AS_FUNCTION(Obstacle_Obstacle_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Obstacle
        REGISTER_CLASS_MANUAL_PART_Obstacle();
    #endif
}

// explicit OffMeshConnection::OffMeshConnection(Context* context)
static OffMeshConnection* OffMeshConnection_OffMeshConnection_Context()
{
    Context* context = GetScriptContext();
    return new OffMeshConnection(context);
}

// class OffMeshConnection | File: ../Navigation/OffMeshConnection.h
static void Register_OffMeshConnection(asIScriptEngine* engine)
{
    // explicit OffMeshConnection::OffMeshConnection(Context* context)
    engine->RegisterObjectBehaviour("OffMeshConnection", asBEHAVE_FACTORY, "OffMeshConnection@+ f()", AS_FUNCTION(OffMeshConnection_OffMeshConnection_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_OffMeshConnection
        REGISTER_CLASS_MANUAL_PART_OffMeshConnection();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_SimpleNavBuildData
        REGISTER_CLASS_MANUAL_PART_SimpleNavBuildData();
    #endif
}

#endif // def URHO3D_NAVIGATION

#ifdef URHO3D_NETWORK

// class Connection | File: ../Network/Connection.h
static void Register_Connection(asIScriptEngine* engine)
{
    // Connection::Connection(Context* context, bool isClient, const SLNet::AddressOrGUID& address, SLNet::RakPeerInterface* peer)
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Connection
        REGISTER_CLASS_MANUAL_PART_Connection();
    #endif
}

// HttpRequest::HttpRequest(const String& url, const String& verb, const Vector<String>& headers, const String& postData)
static HttpRequest* HttpRequest_HttpRequest_String_String_VectorString_String(const String& url, const String& verb, CScriptArray* headers_conv, const String& postData)
{
    Vector<String> headers = ArrayToVector<String>(headers_conv);
    return new HttpRequest(url, verb, headers, postData);
}

// class HttpRequest | File: ../Network/HttpRequest.h
static void Register_HttpRequest(asIScriptEngine* engine)
{
    // HttpRequest::HttpRequest(const String& url, const String& verb, const Vector<String>& headers, const String& postData)
    engine->RegisterObjectBehaviour("HttpRequest", asBEHAVE_FACTORY, "HttpRequest@+ f(const String&in, const String&in, Array<String>@+, const String&in)", AS_FUNCTION(HttpRequest_HttpRequest_String_String_VectorString_String) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_HttpRequest
        REGISTER_CLASS_MANUAL_PART_HttpRequest();
    #endif
}

// explicit Network::Network(Context* context)
static Network* Network_Network_Context()
{
    Context* context = GetScriptContext();
    return new Network(context);
}

// class Network | File: ../Network/Network.h
static void Register_Network(asIScriptEngine* engine)
{
    // explicit Network::Network(Context* context)
    engine->RegisterObjectBehaviour("Network", asBEHAVE_FACTORY, "Network@+ f()", AS_FUNCTION(Network_Network_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Network
        REGISTER_CLASS_MANUAL_PART_Network();
    #endif
}

// explicit NetworkPriority::NetworkPriority(Context* context)
static NetworkPriority* NetworkPriority_NetworkPriority_Context()
{
    Context* context = GetScriptContext();
    return new NetworkPriority(context);
}

// class NetworkPriority | File: ../Network/NetworkPriority.h
static void Register_NetworkPriority(asIScriptEngine* engine)
{
    // explicit NetworkPriority::NetworkPriority(Context* context)
    engine->RegisterObjectBehaviour("NetworkPriority", asBEHAVE_FACTORY, "NetworkPriority@+ f()", AS_FUNCTION(NetworkPriority_NetworkPriority_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_NetworkPriority
        REGISTER_CLASS_MANUAL_PART_NetworkPriority();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_PackageDownload
        REGISTER_CLASS_MANUAL_PART_PackageDownload();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_PackageUpload
        REGISTER_CLASS_MANUAL_PART_PackageUpload();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_RemoteEvent
        REGISTER_CLASS_MANUAL_PART_RemoteEvent();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_CollisionGeometryData
        REGISTER_CLASS_MANUAL_PART_CollisionGeometryData();
    #endif
}

// explicit CollisionShape::CollisionShape(Context* context)
static CollisionShape* CollisionShape_CollisionShape_Context()
{
    Context* context = GetScriptContext();
    return new CollisionShape(context);
}

// class CollisionShape | File: ../Physics/CollisionShape.h
static void Register_CollisionShape(asIScriptEngine* engine)
{
    // explicit CollisionShape::CollisionShape(Context* context)
    engine->RegisterObjectBehaviour("CollisionShape", asBEHAVE_FACTORY, "CollisionShape@+ f()", AS_FUNCTION(CollisionShape_CollisionShape_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CollisionShape
        REGISTER_CLASS_MANUAL_PART_CollisionShape();
    #endif
}

// explicit Constraint::Constraint(Context* context)
static Constraint* Constraint_Constraint_Context()
{
    Context* context = GetScriptContext();
    return new Constraint(context);
}

// class Constraint | File: ../Physics/Constraint.h
static void Register_Constraint(asIScriptEngine* engine)
{
    // explicit Constraint::Constraint(Context* context)
    engine->RegisterObjectBehaviour("Constraint", asBEHAVE_FACTORY, "Constraint@+ f()", AS_FUNCTION(Constraint_Constraint_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Constraint
        REGISTER_CLASS_MANUAL_PART_Constraint();
    #endif
}

// ConvexData::ConvexData(Model* model, unsigned lodLevel)
static ConvexData* ConvexData_ConvexData_Model_unsigned(Model* model, unsigned lodLevel)
{
    return new ConvexData(model, lodLevel);
}

// explicit ConvexData::ConvexData(CustomGeometry* custom)
static ConvexData* ConvexData_ConvexData_CustomGeometry(CustomGeometry* custom)
{
    return new ConvexData(custom);
}

// struct ConvexData | File: ../Physics/CollisionShape.h
static void Register_ConvexData(asIScriptEngine* engine)
{
    // ConvexData::ConvexData(Model* model, unsigned lodLevel)
    engine->RegisterObjectBehaviour("ConvexData", asBEHAVE_FACTORY, "ConvexData@+ f(Model@+, uint)", AS_FUNCTION(ConvexData_ConvexData_Model_unsigned) , AS_CALL_CDECL);
    // explicit ConvexData::ConvexData(CustomGeometry* custom)
    engine->RegisterObjectBehaviour("ConvexData", asBEHAVE_FACTORY, "ConvexData@+ f(CustomGeometry@+)", AS_FUNCTION(ConvexData_ConvexData_CustomGeometry) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConvexData
        REGISTER_CLASS_MANUAL_PART_ConvexData();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_DelayedWorldTransform
        REGISTER_CLASS_MANUAL_PART_DelayedWorldTransform();
    #endif
}

// GImpactMeshData::GImpactMeshData(Model* model, unsigned lodLevel)
static GImpactMeshData* GImpactMeshData_GImpactMeshData_Model_unsigned(Model* model, unsigned lodLevel)
{
    return new GImpactMeshData(model, lodLevel);
}

// explicit GImpactMeshData::GImpactMeshData(CustomGeometry* custom)
static GImpactMeshData* GImpactMeshData_GImpactMeshData_CustomGeometry(CustomGeometry* custom)
{
    return new GImpactMeshData(custom);
}

// struct GImpactMeshData | File: ../Physics/CollisionShape.h
static void Register_GImpactMeshData(asIScriptEngine* engine)
{
    // GImpactMeshData::GImpactMeshData(Model* model, unsigned lodLevel)
    engine->RegisterObjectBehaviour("GImpactMeshData", asBEHAVE_FACTORY, "GImpactMeshData@+ f(Model@+, uint)", AS_FUNCTION(GImpactMeshData_GImpactMeshData_Model_unsigned) , AS_CALL_CDECL);
    // explicit GImpactMeshData::GImpactMeshData(CustomGeometry* custom)
    engine->RegisterObjectBehaviour("GImpactMeshData", asBEHAVE_FACTORY, "GImpactMeshData@+ f(CustomGeometry@+)", AS_FUNCTION(GImpactMeshData_GImpactMeshData_CustomGeometry) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_GImpactMeshData
        REGISTER_CLASS_MANUAL_PART_GImpactMeshData();
    #endif
}

// HeightfieldData::HeightfieldData(Terrain* terrain, unsigned lodLevel)
static HeightfieldData* HeightfieldData_HeightfieldData_Terrain_unsigned(Terrain* terrain, unsigned lodLevel)
{
    return new HeightfieldData(terrain, lodLevel);
}

// struct HeightfieldData | File: ../Physics/CollisionShape.h
static void Register_HeightfieldData(asIScriptEngine* engine)
{
    // HeightfieldData::HeightfieldData(Terrain* terrain, unsigned lodLevel)
    engine->RegisterObjectBehaviour("HeightfieldData", asBEHAVE_FACTORY, "HeightfieldData@+ f(Terrain@+, uint)", AS_FUNCTION(HeightfieldData_HeightfieldData_Terrain_unsigned) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_HeightfieldData
        REGISTER_CLASS_MANUAL_PART_HeightfieldData();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_ManifoldPair
        REGISTER_CLASS_MANUAL_PART_ManifoldPair();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_PhysicsRaycastResult
        REGISTER_CLASS_MANUAL_PART_PhysicsRaycastResult();
    #endif
}

// explicit PhysicsWorld::PhysicsWorld(Context* context)
static PhysicsWorld* PhysicsWorld_PhysicsWorld_Context()
{
    Context* context = GetScriptContext();
    return new PhysicsWorld(context);
}

// class PhysicsWorld | File: ../Physics/PhysicsWorld.h
static void Register_PhysicsWorld(asIScriptEngine* engine)
{
    // explicit PhysicsWorld::PhysicsWorld(Context* context)
    engine->RegisterObjectBehaviour("PhysicsWorld", asBEHAVE_FACTORY, "PhysicsWorld@+ f()", AS_FUNCTION(PhysicsWorld_PhysicsWorld_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_PhysicsWorld
        REGISTER_CLASS_MANUAL_PART_PhysicsWorld();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_PhysicsWorldConfig
        REGISTER_CLASS_MANUAL_PART_PhysicsWorldConfig();
    #endif
}

// class RaycastVehicle | File: ../Physics/RaycastVehicle.h
static void Register_RaycastVehicle(asIScriptEngine* engine)
{
    // explicit RaycastVehicle::RaycastVehicle(Urho3D::Context* context)
    // Error: type "Urho3D::Context*" can not automatically bind

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

    #ifdef REGISTER_CLASS_MANUAL_PART_RaycastVehicle
        REGISTER_CLASS_MANUAL_PART_RaycastVehicle();
    #endif
}

// explicit RigidBody::RigidBody(Context* context)
static RigidBody* RigidBody_RigidBody_Context()
{
    Context* context = GetScriptContext();
    return new RigidBody(context);
}

// class RigidBody | File: ../Physics/RigidBody.h
static void Register_RigidBody(asIScriptEngine* engine)
{
    // explicit RigidBody::RigidBody(Context* context)
    engine->RegisterObjectBehaviour("RigidBody", asBEHAVE_FACTORY, "RigidBody@+ f()", AS_FUNCTION(RigidBody_RigidBody_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_RigidBody
        REGISTER_CLASS_MANUAL_PART_RigidBody();
    #endif
}

// TriangleMeshData::TriangleMeshData(Model* model, unsigned lodLevel)
static TriangleMeshData* TriangleMeshData_TriangleMeshData_Model_unsigned(Model* model, unsigned lodLevel)
{
    return new TriangleMeshData(model, lodLevel);
}

// explicit TriangleMeshData::TriangleMeshData(CustomGeometry* custom)
static TriangleMeshData* TriangleMeshData_TriangleMeshData_CustomGeometry(CustomGeometry* custom)
{
    return new TriangleMeshData(custom);
}

// struct TriangleMeshData | File: ../Physics/CollisionShape.h
static void Register_TriangleMeshData(asIScriptEngine* engine)
{
    // TriangleMeshData::TriangleMeshData(Model* model, unsigned lodLevel)
    engine->RegisterObjectBehaviour("TriangleMeshData", asBEHAVE_FACTORY, "TriangleMeshData@+ f(Model@+, uint)", AS_FUNCTION(TriangleMeshData_TriangleMeshData_Model_unsigned) , AS_CALL_CDECL);
    // explicit TriangleMeshData::TriangleMeshData(CustomGeometry* custom)
    engine->RegisterObjectBehaviour("TriangleMeshData", asBEHAVE_FACTORY, "TriangleMeshData@+ f(CustomGeometry@+)", AS_FUNCTION(TriangleMeshData_TriangleMeshData_CustomGeometry) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_TriangleMeshData
        REGISTER_CLASS_MANUAL_PART_TriangleMeshData();
    #endif
}

#endif // def URHO3D_PHYSICS

#ifdef URHO3D_URHO2D

// explicit AnimatedSprite2D::AnimatedSprite2D(Context* context)
static AnimatedSprite2D* AnimatedSprite2D_AnimatedSprite2D_Context()
{
    Context* context = GetScriptContext();
    return new AnimatedSprite2D(context);
}

// class AnimatedSprite2D | File: ../Urho2D/AnimatedSprite2D.h
static void Register_AnimatedSprite2D(asIScriptEngine* engine)
{
    // explicit AnimatedSprite2D::AnimatedSprite2D(Context* context)
    engine->RegisterObjectBehaviour("AnimatedSprite2D", asBEHAVE_FACTORY, "AnimatedSprite2D@+ f()", AS_FUNCTION(AnimatedSprite2D_AnimatedSprite2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimatedSprite2D
        REGISTER_CLASS_MANUAL_PART_AnimatedSprite2D();
    #endif
}

// explicit AnimationSet2D::AnimationSet2D(Context* context)
static AnimationSet2D* AnimationSet2D_AnimationSet2D_Context()
{
    Context* context = GetScriptContext();
    return new AnimationSet2D(context);
}

// class AnimationSet2D | File: ../Urho2D/AnimationSet2D.h
static void Register_AnimationSet2D(asIScriptEngine* engine)
{
    // explicit AnimationSet2D::AnimationSet2D(Context* context)
    engine->RegisterObjectBehaviour("AnimationSet2D", asBEHAVE_FACTORY, "AnimationSet2D@+ f()", AS_FUNCTION(AnimationSet2D_AnimationSet2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationSet2D
        REGISTER_CLASS_MANUAL_PART_AnimationSet2D();
    #endif
}

// explicit CollisionBox2D::CollisionBox2D(Context* context)
static CollisionBox2D* CollisionBox2D_CollisionBox2D_Context()
{
    Context* context = GetScriptContext();
    return new CollisionBox2D(context);
}

// class CollisionBox2D | File: ../Urho2D/CollisionBox2D.h
static void Register_CollisionBox2D(asIScriptEngine* engine)
{
    // explicit CollisionBox2D::CollisionBox2D(Context* context)
    engine->RegisterObjectBehaviour("CollisionBox2D", asBEHAVE_FACTORY, "CollisionBox2D@+ f()", AS_FUNCTION(CollisionBox2D_CollisionBox2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CollisionBox2D
        REGISTER_CLASS_MANUAL_PART_CollisionBox2D();
    #endif
}

// explicit CollisionChain2D::CollisionChain2D(Context* context)
static CollisionChain2D* CollisionChain2D_CollisionChain2D_Context()
{
    Context* context = GetScriptContext();
    return new CollisionChain2D(context);
}

// class CollisionChain2D | File: ../Urho2D/CollisionChain2D.h
static void Register_CollisionChain2D(asIScriptEngine* engine)
{
    // explicit CollisionChain2D::CollisionChain2D(Context* context)
    engine->RegisterObjectBehaviour("CollisionChain2D", asBEHAVE_FACTORY, "CollisionChain2D@+ f()", AS_FUNCTION(CollisionChain2D_CollisionChain2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CollisionChain2D
        REGISTER_CLASS_MANUAL_PART_CollisionChain2D();
    #endif
}

// explicit CollisionCircle2D::CollisionCircle2D(Context* context)
static CollisionCircle2D* CollisionCircle2D_CollisionCircle2D_Context()
{
    Context* context = GetScriptContext();
    return new CollisionCircle2D(context);
}

// class CollisionCircle2D | File: ../Urho2D/CollisionCircle2D.h
static void Register_CollisionCircle2D(asIScriptEngine* engine)
{
    // explicit CollisionCircle2D::CollisionCircle2D(Context* context)
    engine->RegisterObjectBehaviour("CollisionCircle2D", asBEHAVE_FACTORY, "CollisionCircle2D@+ f()", AS_FUNCTION(CollisionCircle2D_CollisionCircle2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CollisionCircle2D
        REGISTER_CLASS_MANUAL_PART_CollisionCircle2D();
    #endif
}

// explicit CollisionEdge2D::CollisionEdge2D(Context* context)
static CollisionEdge2D* CollisionEdge2D_CollisionEdge2D_Context()
{
    Context* context = GetScriptContext();
    return new CollisionEdge2D(context);
}

// class CollisionEdge2D | File: ../Urho2D/CollisionEdge2D.h
static void Register_CollisionEdge2D(asIScriptEngine* engine)
{
    // explicit CollisionEdge2D::CollisionEdge2D(Context* context)
    engine->RegisterObjectBehaviour("CollisionEdge2D", asBEHAVE_FACTORY, "CollisionEdge2D@+ f()", AS_FUNCTION(CollisionEdge2D_CollisionEdge2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CollisionEdge2D
        REGISTER_CLASS_MANUAL_PART_CollisionEdge2D();
    #endif
}

// explicit CollisionPolygon2D::CollisionPolygon2D(Context* context)
static CollisionPolygon2D* CollisionPolygon2D_CollisionPolygon2D_Context()
{
    Context* context = GetScriptContext();
    return new CollisionPolygon2D(context);
}

// class CollisionPolygon2D | File: ../Urho2D/CollisionPolygon2D.h
static void Register_CollisionPolygon2D(asIScriptEngine* engine)
{
    // explicit CollisionPolygon2D::CollisionPolygon2D(Context* context)
    engine->RegisterObjectBehaviour("CollisionPolygon2D", asBEHAVE_FACTORY, "CollisionPolygon2D@+ f()", AS_FUNCTION(CollisionPolygon2D_CollisionPolygon2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_CollisionPolygon2D
        REGISTER_CLASS_MANUAL_PART_CollisionPolygon2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_CollisionShape2D
        REGISTER_CLASS_MANUAL_PART_CollisionShape2D();
    #endif
}

// explicit Constraint2D::Constraint2D(Context* context)
static Constraint2D* Constraint2D_Constraint2D_Context()
{
    Context* context = GetScriptContext();
    return new Constraint2D(context);
}

// class Constraint2D | File: ../Urho2D/Constraint2D.h
static void Register_Constraint2D(asIScriptEngine* engine)
{
    // explicit Constraint2D::Constraint2D(Context* context)
    engine->RegisterObjectBehaviour("Constraint2D", asBEHAVE_FACTORY, "Constraint2D@+ f()", AS_FUNCTION(Constraint2D_Constraint2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Constraint2D
        REGISTER_CLASS_MANUAL_PART_Constraint2D();
    #endif
}

// explicit ConstraintDistance2D::ConstraintDistance2D(Context* context)
static ConstraintDistance2D* ConstraintDistance2D_ConstraintDistance2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintDistance2D(context);
}

// class ConstraintDistance2D | File: ../Urho2D/ConstraintDistance2D.h
static void Register_ConstraintDistance2D(asIScriptEngine* engine)
{
    // explicit ConstraintDistance2D::ConstraintDistance2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintDistance2D", asBEHAVE_FACTORY, "ConstraintDistance2D@+ f()", AS_FUNCTION(ConstraintDistance2D_ConstraintDistance2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintDistance2D
        REGISTER_CLASS_MANUAL_PART_ConstraintDistance2D();
    #endif
}

// explicit ConstraintFriction2D::ConstraintFriction2D(Context* context)
static ConstraintFriction2D* ConstraintFriction2D_ConstraintFriction2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintFriction2D(context);
}

// class ConstraintFriction2D | File: ../Urho2D/ConstraintFriction2D.h
static void Register_ConstraintFriction2D(asIScriptEngine* engine)
{
    // explicit ConstraintFriction2D::ConstraintFriction2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintFriction2D", asBEHAVE_FACTORY, "ConstraintFriction2D@+ f()", AS_FUNCTION(ConstraintFriction2D_ConstraintFriction2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintFriction2D
        REGISTER_CLASS_MANUAL_PART_ConstraintFriction2D();
    #endif
}

// explicit ConstraintGear2D::ConstraintGear2D(Context* context)
static ConstraintGear2D* ConstraintGear2D_ConstraintGear2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintGear2D(context);
}

// class ConstraintGear2D | File: ../Urho2D/ConstraintGear2D.h
static void Register_ConstraintGear2D(asIScriptEngine* engine)
{
    // explicit ConstraintGear2D::ConstraintGear2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintGear2D", asBEHAVE_FACTORY, "ConstraintGear2D@+ f()", AS_FUNCTION(ConstraintGear2D_ConstraintGear2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintGear2D
        REGISTER_CLASS_MANUAL_PART_ConstraintGear2D();
    #endif
}

// explicit ConstraintMotor2D::ConstraintMotor2D(Context* context)
static ConstraintMotor2D* ConstraintMotor2D_ConstraintMotor2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintMotor2D(context);
}

// class ConstraintMotor2D | File: ../Urho2D/ConstraintMotor2D.h
static void Register_ConstraintMotor2D(asIScriptEngine* engine)
{
    // explicit ConstraintMotor2D::ConstraintMotor2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintMotor2D", asBEHAVE_FACTORY, "ConstraintMotor2D@+ f()", AS_FUNCTION(ConstraintMotor2D_ConstraintMotor2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintMotor2D
        REGISTER_CLASS_MANUAL_PART_ConstraintMotor2D();
    #endif
}

// explicit ConstraintMouse2D::ConstraintMouse2D(Context* context)
static ConstraintMouse2D* ConstraintMouse2D_ConstraintMouse2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintMouse2D(context);
}

// class ConstraintMouse2D | File: ../Urho2D/ConstraintMouse2D.h
static void Register_ConstraintMouse2D(asIScriptEngine* engine)
{
    // explicit ConstraintMouse2D::ConstraintMouse2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintMouse2D", asBEHAVE_FACTORY, "ConstraintMouse2D@+ f()", AS_FUNCTION(ConstraintMouse2D_ConstraintMouse2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintMouse2D
        REGISTER_CLASS_MANUAL_PART_ConstraintMouse2D();
    #endif
}

// explicit ConstraintPrismatic2D::ConstraintPrismatic2D(Context* context)
static ConstraintPrismatic2D* ConstraintPrismatic2D_ConstraintPrismatic2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintPrismatic2D(context);
}

// class ConstraintPrismatic2D | File: ../Urho2D/ConstraintPrismatic2D.h
static void Register_ConstraintPrismatic2D(asIScriptEngine* engine)
{
    // explicit ConstraintPrismatic2D::ConstraintPrismatic2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintPrismatic2D", asBEHAVE_FACTORY, "ConstraintPrismatic2D@+ f()", AS_FUNCTION(ConstraintPrismatic2D_ConstraintPrismatic2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintPrismatic2D
        REGISTER_CLASS_MANUAL_PART_ConstraintPrismatic2D();
    #endif
}

// explicit ConstraintPulley2D::ConstraintPulley2D(Context* context)
static ConstraintPulley2D* ConstraintPulley2D_ConstraintPulley2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintPulley2D(context);
}

// class ConstraintPulley2D | File: ../Urho2D/ConstraintPulley2D.h
static void Register_ConstraintPulley2D(asIScriptEngine* engine)
{
    // explicit ConstraintPulley2D::ConstraintPulley2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintPulley2D", asBEHAVE_FACTORY, "ConstraintPulley2D@+ f()", AS_FUNCTION(ConstraintPulley2D_ConstraintPulley2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintPulley2D
        REGISTER_CLASS_MANUAL_PART_ConstraintPulley2D();
    #endif
}

// explicit ConstraintRevolute2D::ConstraintRevolute2D(Context* context)
static ConstraintRevolute2D* ConstraintRevolute2D_ConstraintRevolute2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintRevolute2D(context);
}

// class ConstraintRevolute2D | File: ../Urho2D/ConstraintRevolute2D.h
static void Register_ConstraintRevolute2D(asIScriptEngine* engine)
{
    // explicit ConstraintRevolute2D::ConstraintRevolute2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintRevolute2D", asBEHAVE_FACTORY, "ConstraintRevolute2D@+ f()", AS_FUNCTION(ConstraintRevolute2D_ConstraintRevolute2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintRevolute2D
        REGISTER_CLASS_MANUAL_PART_ConstraintRevolute2D();
    #endif
}

// explicit ConstraintRope2D::ConstraintRope2D(Context* context)
static ConstraintRope2D* ConstraintRope2D_ConstraintRope2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintRope2D(context);
}

// class ConstraintRope2D | File: ../Urho2D/ConstraintRope2D.h
static void Register_ConstraintRope2D(asIScriptEngine* engine)
{
    // explicit ConstraintRope2D::ConstraintRope2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintRope2D", asBEHAVE_FACTORY, "ConstraintRope2D@+ f()", AS_FUNCTION(ConstraintRope2D_ConstraintRope2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintRope2D
        REGISTER_CLASS_MANUAL_PART_ConstraintRope2D();
    #endif
}

// explicit ConstraintWeld2D::ConstraintWeld2D(Context* context)
static ConstraintWeld2D* ConstraintWeld2D_ConstraintWeld2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintWeld2D(context);
}

// class ConstraintWeld2D | File: ../Urho2D/ConstraintWeld2D.h
static void Register_ConstraintWeld2D(asIScriptEngine* engine)
{
    // explicit ConstraintWeld2D::ConstraintWeld2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintWeld2D", asBEHAVE_FACTORY, "ConstraintWeld2D@+ f()", AS_FUNCTION(ConstraintWeld2D_ConstraintWeld2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintWeld2D
        REGISTER_CLASS_MANUAL_PART_ConstraintWeld2D();
    #endif
}

// explicit ConstraintWheel2D::ConstraintWheel2D(Context* context)
static ConstraintWheel2D* ConstraintWheel2D_ConstraintWheel2D_Context()
{
    Context* context = GetScriptContext();
    return new ConstraintWheel2D(context);
}

// class ConstraintWheel2D | File: ../Urho2D/ConstraintWheel2D.h
static void Register_ConstraintWheel2D(asIScriptEngine* engine)
{
    // explicit ConstraintWheel2D::ConstraintWheel2D(Context* context)
    engine->RegisterObjectBehaviour("ConstraintWheel2D", asBEHAVE_FACTORY, "ConstraintWheel2D@+ f()", AS_FUNCTION(ConstraintWheel2D_ConstraintWheel2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintWheel2D
        REGISTER_CLASS_MANUAL_PART_ConstraintWheel2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_DelayedWorldTransform2D
        REGISTER_CLASS_MANUAL_PART_DelayedWorldTransform2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Drawable2D
        REGISTER_CLASS_MANUAL_PART_Drawable2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Particle2D
        REGISTER_CLASS_MANUAL_PART_Particle2D();
    #endif
}

// explicit ParticleEffect2D::ParticleEffect2D(Context* context)
static ParticleEffect2D* ParticleEffect2D_ParticleEffect2D_Context()
{
    Context* context = GetScriptContext();
    return new ParticleEffect2D(context);
}

// class ParticleEffect2D | File: ../Urho2D/ParticleEffect2D.h
static void Register_ParticleEffect2D(asIScriptEngine* engine)
{
    // explicit ParticleEffect2D::ParticleEffect2D(Context* context)
    engine->RegisterObjectBehaviour("ParticleEffect2D", asBEHAVE_FACTORY, "ParticleEffect2D@+ f()", AS_FUNCTION(ParticleEffect2D_ParticleEffect2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ParticleEffect2D
        REGISTER_CLASS_MANUAL_PART_ParticleEffect2D();
    #endif
}

// explicit ParticleEmitter2D::ParticleEmitter2D(Context* context)
static ParticleEmitter2D* ParticleEmitter2D_ParticleEmitter2D_Context()
{
    Context* context = GetScriptContext();
    return new ParticleEmitter2D(context);
}

// class ParticleEmitter2D | File: ../Urho2D/ParticleEmitter2D.h
static void Register_ParticleEmitter2D(asIScriptEngine* engine)
{
    // explicit ParticleEmitter2D::ParticleEmitter2D(Context* context)
    engine->RegisterObjectBehaviour("ParticleEmitter2D", asBEHAVE_FACTORY, "ParticleEmitter2D@+ f()", AS_FUNCTION(ParticleEmitter2D_ParticleEmitter2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_ParticleEmitter2D
        REGISTER_CLASS_MANUAL_PART_ParticleEmitter2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_PhysicsRaycastResult2D
        REGISTER_CLASS_MANUAL_PART_PhysicsRaycastResult2D();
    #endif
}

// explicit PhysicsWorld2D::PhysicsWorld2D(Context* context)
static PhysicsWorld2D* PhysicsWorld2D_PhysicsWorld2D_Context()
{
    Context* context = GetScriptContext();
    return new PhysicsWorld2D(context);
}

// class PhysicsWorld2D | File: ../Urho2D/PhysicsWorld2D.h
static void Register_PhysicsWorld2D(asIScriptEngine* engine)
{
    // explicit PhysicsWorld2D::PhysicsWorld2D(Context* context)
    engine->RegisterObjectBehaviour("PhysicsWorld2D", asBEHAVE_FACTORY, "PhysicsWorld2D@+ f()", AS_FUNCTION(PhysicsWorld2D_PhysicsWorld2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_PhysicsWorld2D
        REGISTER_CLASS_MANUAL_PART_PhysicsWorld2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_PropertySet2D
        REGISTER_CLASS_MANUAL_PART_PropertySet2D();
    #endif
}

// explicit Renderer2D::Renderer2D(Context* context)
static Renderer2D* Renderer2D_Renderer2D_Context()
{
    Context* context = GetScriptContext();
    return new Renderer2D(context);
}

// class Renderer2D | File: ../Urho2D/Renderer2D.h
static void Register_Renderer2D(asIScriptEngine* engine)
{
    // explicit Renderer2D::Renderer2D(Context* context)
    engine->RegisterObjectBehaviour("Renderer2D", asBEHAVE_FACTORY, "Renderer2D@+ f()", AS_FUNCTION(Renderer2D_Renderer2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Renderer2D
        REGISTER_CLASS_MANUAL_PART_Renderer2D();
    #endif
}

// explicit RigidBody2D::RigidBody2D(Context* context)
static RigidBody2D* RigidBody2D_RigidBody2D_Context()
{
    Context* context = GetScriptContext();
    return new RigidBody2D(context);
}

// class RigidBody2D | File: ../Urho2D/RigidBody2D.h
static void Register_RigidBody2D(asIScriptEngine* engine)
{
    // explicit RigidBody2D::RigidBody2D(Context* context)
    engine->RegisterObjectBehaviour("RigidBody2D", asBEHAVE_FACTORY, "RigidBody2D@+ f()", AS_FUNCTION(RigidBody2D_RigidBody2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_RigidBody2D
        REGISTER_CLASS_MANUAL_PART_RigidBody2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_SourceBatch2D
        REGISTER_CLASS_MANUAL_PART_SourceBatch2D();
    #endif
}

// explicit Sprite2D::Sprite2D(Context* context)
static Sprite2D* Sprite2D_Sprite2D_Context()
{
    Context* context = GetScriptContext();
    return new Sprite2D(context);
}

// class Sprite2D | File: ../Urho2D/Sprite2D.h
static void Register_Sprite2D(asIScriptEngine* engine)
{
    // explicit Sprite2D::Sprite2D(Context* context)
    engine->RegisterObjectBehaviour("Sprite2D", asBEHAVE_FACTORY, "Sprite2D@+ f()", AS_FUNCTION(Sprite2D_Sprite2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_Sprite2D
        REGISTER_CLASS_MANUAL_PART_Sprite2D();
    #endif
}

// explicit SpriteSheet2D::SpriteSheet2D(Context* context)
static SpriteSheet2D* SpriteSheet2D_SpriteSheet2D_Context()
{
    Context* context = GetScriptContext();
    return new SpriteSheet2D(context);
}

// class SpriteSheet2D | File: ../Urho2D/SpriteSheet2D.h
static void Register_SpriteSheet2D(asIScriptEngine* engine)
{
    // explicit SpriteSheet2D::SpriteSheet2D(Context* context)
    engine->RegisterObjectBehaviour("SpriteSheet2D", asBEHAVE_FACTORY, "SpriteSheet2D@+ f()", AS_FUNCTION(SpriteSheet2D_SpriteSheet2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_SpriteSheet2D
        REGISTER_CLASS_MANUAL_PART_SpriteSheet2D();
    #endif
}

// explicit StaticSprite2D::StaticSprite2D(Context* context)
static StaticSprite2D* StaticSprite2D_StaticSprite2D_Context()
{
    Context* context = GetScriptContext();
    return new StaticSprite2D(context);
}

// class StaticSprite2D | File: ../Urho2D/StaticSprite2D.h
static void Register_StaticSprite2D(asIScriptEngine* engine)
{
    // explicit StaticSprite2D::StaticSprite2D(Context* context)
    engine->RegisterObjectBehaviour("StaticSprite2D", asBEHAVE_FACTORY, "StaticSprite2D@+ f()", AS_FUNCTION(StaticSprite2D_StaticSprite2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_StaticSprite2D
        REGISTER_CLASS_MANUAL_PART_StaticSprite2D();
    #endif
}

// explicit StretchableSprite2D::StretchableSprite2D(Context* context)
static StretchableSprite2D* StretchableSprite2D_StretchableSprite2D_Context()
{
    Context* context = GetScriptContext();
    return new StretchableSprite2D(context);
}

// class StretchableSprite2D | File: ../Urho2D/StretchableSprite2D.h
static void Register_StretchableSprite2D(asIScriptEngine* engine)
{
    // explicit StretchableSprite2D::StretchableSprite2D(Context* context)
    engine->RegisterObjectBehaviour("StretchableSprite2D", asBEHAVE_FACTORY, "StretchableSprite2D@+ f()", AS_FUNCTION(StretchableSprite2D_StretchableSprite2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_StretchableSprite2D
        REGISTER_CLASS_MANUAL_PART_StretchableSprite2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Tile2D
        REGISTER_CLASS_MANUAL_PART_Tile2D();
    #endif
}

// explicit TileMap2D::TileMap2D(Context* context)
static TileMap2D* TileMap2D_TileMap2D_Context()
{
    Context* context = GetScriptContext();
    return new TileMap2D(context);
}

// class TileMap2D | File: ../Urho2D/TileMap2D.h
static void Register_TileMap2D(asIScriptEngine* engine)
{
    // explicit TileMap2D::TileMap2D(Context* context)
    engine->RegisterObjectBehaviour("TileMap2D", asBEHAVE_FACTORY, "TileMap2D@+ f()", AS_FUNCTION(TileMap2D_TileMap2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_TileMap2D
        REGISTER_CLASS_MANUAL_PART_TileMap2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_TileMapInfo2D
        REGISTER_CLASS_MANUAL_PART_TileMapInfo2D();
    #endif
}

// explicit TileMapLayer2D::TileMapLayer2D(Context* context)
static TileMapLayer2D* TileMapLayer2D_TileMapLayer2D_Context()
{
    Context* context = GetScriptContext();
    return new TileMapLayer2D(context);
}

// class TileMapLayer2D | File: ../Urho2D/TileMapLayer2D.h
static void Register_TileMapLayer2D(asIScriptEngine* engine)
{
    // explicit TileMapLayer2D::TileMapLayer2D(Context* context)
    engine->RegisterObjectBehaviour("TileMapLayer2D", asBEHAVE_FACTORY, "TileMapLayer2D@+ f()", AS_FUNCTION(TileMapLayer2D_TileMapLayer2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_TileMapLayer2D
        REGISTER_CLASS_MANUAL_PART_TileMapLayer2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_TileMapObject2D
        REGISTER_CLASS_MANUAL_PART_TileMapObject2D();
    #endif
}

// explicit TmxFile2D::TmxFile2D(Context* context)
static TmxFile2D* TmxFile2D_TmxFile2D_Context()
{
    Context* context = GetScriptContext();
    return new TmxFile2D(context);
}

// class TmxFile2D | File: ../Urho2D/TmxFile2D.h
static void Register_TmxFile2D(asIScriptEngine* engine)
{
    // explicit TmxFile2D::TmxFile2D(Context* context)
    engine->RegisterObjectBehaviour("TmxFile2D", asBEHAVE_FACTORY, "TmxFile2D@+ f()", AS_FUNCTION(TmxFile2D_TmxFile2D_Context) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_TmxFile2D
        REGISTER_CLASS_MANUAL_PART_TmxFile2D();
    #endif
}

// explicit TmxImageLayer2D::TmxImageLayer2D(TmxFile2D* tmxFile)
static TmxImageLayer2D* TmxImageLayer2D_TmxImageLayer2D_TmxFile2D(TmxFile2D* tmxFile)
{
    return new TmxImageLayer2D(tmxFile);
}

// class TmxImageLayer2D | File: ../Urho2D/TmxFile2D.h
static void Register_TmxImageLayer2D(asIScriptEngine* engine)
{
    // explicit TmxImageLayer2D::TmxImageLayer2D(TmxFile2D* tmxFile)
    engine->RegisterObjectBehaviour("TmxImageLayer2D", asBEHAVE_FACTORY, "TmxImageLayer2D@+ f(TmxFile2D@+)", AS_FUNCTION(TmxImageLayer2D_TmxImageLayer2D_TmxFile2D) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_TmxImageLayer2D
        REGISTER_CLASS_MANUAL_PART_TmxImageLayer2D();
    #endif
}

// TmxLayer2D::TmxLayer2D(TmxFile2D* tmxFile, TileMapLayerType2D type)
static TmxLayer2D* TmxLayer2D_TmxLayer2D_TmxFile2D_TileMapLayerType2D(TmxFile2D* tmxFile, TileMapLayerType2D type)
{
    return new TmxLayer2D(tmxFile, type);
}

// class TmxLayer2D | File: ../Urho2D/TmxFile2D.h
static void Register_TmxLayer2D(asIScriptEngine* engine)
{
    // TmxLayer2D::TmxLayer2D(TmxFile2D* tmxFile, TileMapLayerType2D type)
    engine->RegisterObjectBehaviour("TmxLayer2D", asBEHAVE_FACTORY, "TmxLayer2D@+ f(TmxFile2D@+, TileMapLayerType2D)", AS_FUNCTION(TmxLayer2D_TmxLayer2D_TmxFile2D_TileMapLayerType2D) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_TmxLayer2D
        REGISTER_CLASS_MANUAL_PART_TmxLayer2D();
    #endif
}

// explicit TmxObjectGroup2D::TmxObjectGroup2D(TmxFile2D* tmxFile)
static TmxObjectGroup2D* TmxObjectGroup2D_TmxObjectGroup2D_TmxFile2D(TmxFile2D* tmxFile)
{
    return new TmxObjectGroup2D(tmxFile);
}

// class TmxObjectGroup2D | File: ../Urho2D/TmxFile2D.h
static void Register_TmxObjectGroup2D(asIScriptEngine* engine)
{
    // explicit TmxObjectGroup2D::TmxObjectGroup2D(TmxFile2D* tmxFile)
    engine->RegisterObjectBehaviour("TmxObjectGroup2D", asBEHAVE_FACTORY, "TmxObjectGroup2D@+ f(TmxFile2D@+)", AS_FUNCTION(TmxObjectGroup2D_TmxObjectGroup2D_TmxFile2D) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_TmxObjectGroup2D
        REGISTER_CLASS_MANUAL_PART_TmxObjectGroup2D();
    #endif
}

// explicit TmxTileLayer2D::TmxTileLayer2D(TmxFile2D* tmxFile)
static TmxTileLayer2D* TmxTileLayer2D_TmxTileLayer2D_TmxFile2D(TmxFile2D* tmxFile)
{
    return new TmxTileLayer2D(tmxFile);
}

// class TmxTileLayer2D | File: ../Urho2D/TmxFile2D.h
static void Register_TmxTileLayer2D(asIScriptEngine* engine)
{
    // explicit TmxTileLayer2D::TmxTileLayer2D(TmxFile2D* tmxFile)
    engine->RegisterObjectBehaviour("TmxTileLayer2D", asBEHAVE_FACTORY, "TmxTileLayer2D@+ f(TmxFile2D@+)", AS_FUNCTION(TmxTileLayer2D_TmxTileLayer2D_TmxFile2D) , AS_CALL_CDECL);

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

    #ifdef REGISTER_CLASS_MANUAL_PART_TmxTileLayer2D
        REGISTER_CLASS_MANUAL_PART_TmxTileLayer2D();
    #endif
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

    #ifdef REGISTER_CLASS_MANUAL_PART_Vertex2D
        REGISTER_CLASS_MANUAL_PART_Vertex2D();
    #endif
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
