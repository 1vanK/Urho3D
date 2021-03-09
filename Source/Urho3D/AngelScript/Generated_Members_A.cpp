// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_A(asIScriptEngine* engine)
{
    // AbstractFile& AbstractFile::operator=(const AbstractFile&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AbstractFile>(engine, "AbstractFile");
    engine->RegisterObjectBehaviour("AbstractFile", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("AbstractFile", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_Deserializer
    REGISTER_MANUAL_PART_Deserializer(AbstractFile, "AbstractFile")
#endif
#ifdef REGISTER_MANUAL_PART_Serializer
    REGISTER_MANUAL_PART_Serializer(AbstractFile, "AbstractFile")
#endif
#ifdef REGISTER_MANUAL_PART_AbstractFile
    REGISTER_MANUAL_PART_AbstractFile(AbstractFile, "AbstractFile")
#endif
    RegisterSubclass<Deserializer, AbstractFile>(engine, "Deserializer", "AbstractFile");
    RegisterSubclass<Serializer, AbstractFile>(engine, "Serializer", "AbstractFile");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Animatable::RegisterObject(Context* context) | File: ../Scene/Animatable.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Animatable, "Animatable")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Animatable, "Animatable")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Animatable, "Animatable")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Animatable, "Animatable")
#endif
    RegisterSubclass<Serializable, Animatable>(engine, "Serializable", "Animatable");
    RegisterSubclass<Object, Animatable>(engine, "Object", "Animatable");
    RegisterSubclass<RefCounted, Animatable>(engine, "RefCounted", "Animatable");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void AnimatedModel::RegisterObject(Context* context) | File: ../Graphics/AnimatedModel.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_StaticModel
    REGISTER_MANUAL_PART_StaticModel(AnimatedModel, "AnimatedModel")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(AnimatedModel, "AnimatedModel")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(AnimatedModel, "AnimatedModel")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(AnimatedModel, "AnimatedModel")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(AnimatedModel, "AnimatedModel")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(AnimatedModel, "AnimatedModel")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(AnimatedModel, "AnimatedModel")
#endif
#ifdef REGISTER_MANUAL_PART_AnimatedModel
    REGISTER_MANUAL_PART_AnimatedModel(AnimatedModel, "AnimatedModel")
#endif
    RegisterSubclass<StaticModel, AnimatedModel>(engine, "StaticModel", "AnimatedModel");
    RegisterSubclass<Drawable, AnimatedModel>(engine, "Drawable", "AnimatedModel");
    RegisterSubclass<Component, AnimatedModel>(engine, "Component", "AnimatedModel");
    RegisterSubclass<Animatable, AnimatedModel>(engine, "Animatable", "AnimatedModel");
    RegisterSubclass<Serializable, AnimatedModel>(engine, "Serializable", "AnimatedModel");
    RegisterSubclass<Object, AnimatedModel>(engine, "Object", "AnimatedModel");
    RegisterSubclass<RefCounted, AnimatedModel>(engine, "RefCounted", "AnimatedModel");

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void AnimatedSprite2D::RegisterObject(Context* context) | File: ../Urho2D/AnimatedSprite2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_StaticSprite2D
    REGISTER_MANUAL_PART_StaticSprite2D(AnimatedSprite2D, "AnimatedSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable2D
    REGISTER_MANUAL_PART_Drawable2D(AnimatedSprite2D, "AnimatedSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(AnimatedSprite2D, "AnimatedSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(AnimatedSprite2D, "AnimatedSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(AnimatedSprite2D, "AnimatedSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(AnimatedSprite2D, "AnimatedSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(AnimatedSprite2D, "AnimatedSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(AnimatedSprite2D, "AnimatedSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_AnimatedSprite2D
    REGISTER_MANUAL_PART_AnimatedSprite2D(AnimatedSprite2D, "AnimatedSprite2D")
#endif
    RegisterSubclass<StaticSprite2D, AnimatedSprite2D>(engine, "StaticSprite2D", "AnimatedSprite2D");
    RegisterSubclass<Drawable2D, AnimatedSprite2D>(engine, "Drawable2D", "AnimatedSprite2D");
    RegisterSubclass<Drawable, AnimatedSprite2D>(engine, "Drawable", "AnimatedSprite2D");
    RegisterSubclass<Component, AnimatedSprite2D>(engine, "Component", "AnimatedSprite2D");
    RegisterSubclass<Animatable, AnimatedSprite2D>(engine, "Animatable", "AnimatedSprite2D");
    RegisterSubclass<Serializable, AnimatedSprite2D>(engine, "Serializable", "AnimatedSprite2D");
    RegisterSubclass<Object, AnimatedSprite2D>(engine, "Object", "AnimatedSprite2D");
    RegisterSubclass<RefCounted, AnimatedSprite2D>(engine, "RefCounted", "AnimatedSprite2D");
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Animation::RegisterObject(Context* context) | File: ../Graphics/Animation.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_ResourceWithMetadata
    REGISTER_MANUAL_PART_ResourceWithMetadata(Animation, "Animation")
#endif
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Animation, "Animation")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Animation, "Animation")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Animation, "Animation")
#endif
#ifdef REGISTER_MANUAL_PART_Animation
    REGISTER_MANUAL_PART_Animation(Animation, "Animation")
#endif
    RegisterSubclass<ResourceWithMetadata, Animation>(engine, "ResourceWithMetadata", "Animation");
    RegisterSubclass<Resource, Animation>(engine, "Resource", "Animation");
    RegisterSubclass<Object, Animation>(engine, "Object", "Animation");
    RegisterSubclass<RefCounted, Animation>(engine, "RefCounted", "Animation");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void AnimationController::RegisterObject(Context* context) | File: ../Graphics/AnimationController.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(AnimationController, "AnimationController")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(AnimationController, "AnimationController")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(AnimationController, "AnimationController")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(AnimationController, "AnimationController")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(AnimationController, "AnimationController")
#endif
#ifdef REGISTER_MANUAL_PART_AnimationController
    REGISTER_MANUAL_PART_AnimationController(AnimationController, "AnimationController")
#endif
    RegisterSubclass<Component, AnimationController>(engine, "Component", "AnimationController");
    RegisterSubclass<Animatable, AnimationController>(engine, "Animatable", "AnimationController");
    RegisterSubclass<Serializable, AnimationController>(engine, "Serializable", "AnimationController");
    RegisterSubclass<Object, AnimationController>(engine, "Object", "AnimationController");
    RegisterSubclass<RefCounted, AnimationController>(engine, "RefCounted", "AnimationController");

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void AnimationSet2D::RegisterObject(Context* context) | File: ../Urho2D/AnimationSet2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(AnimationSet2D, "AnimationSet2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(AnimationSet2D, "AnimationSet2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(AnimationSet2D, "AnimationSet2D")
#endif
#ifdef REGISTER_MANUAL_PART_AnimationSet2D
    REGISTER_MANUAL_PART_AnimationSet2D(AnimationSet2D, "AnimationSet2D")
#endif
    RegisterSubclass<Resource, AnimationSet2D>(engine, "Resource", "AnimationSet2D");
    RegisterSubclass<Object, AnimationSet2D>(engine, "Object", "AnimationSet2D");
    RegisterSubclass<RefCounted, AnimationSet2D>(engine, "RefCounted", "AnimationSet2D");
#endif

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(AnimationState, "AnimationState")
#endif
#ifdef REGISTER_MANUAL_PART_AnimationState
    REGISTER_MANUAL_PART_AnimationState(AnimationState, "AnimationState")
#endif
    RegisterSubclass<RefCounted, AnimationState>(engine, "RefCounted", "AnimationState");

    // AreaAllocator& AreaAllocator::operator=(const AreaAllocator&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AreaAllocator>(engine, "AreaAllocator");
#ifdef REGISTER_MANUAL_PART_AreaAllocator
    REGISTER_MANUAL_PART_AreaAllocator(AreaAllocator, "AreaAllocator")
#endif

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(AttributeAccessor, "AttributeAccessor")
#endif
#ifdef REGISTER_MANUAL_PART_AttributeAccessor
    REGISTER_MANUAL_PART_AttributeAccessor(AttributeAccessor, "AttributeAccessor")
#endif
    RegisterSubclass<RefCounted, AttributeAccessor>(engine, "RefCounted", "AttributeAccessor");

#ifdef REGISTER_MANUAL_PART_ValueAnimationInfo
    REGISTER_MANUAL_PART_ValueAnimationInfo(AttributeAnimationInfo, "AttributeAnimationInfo")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(AttributeAnimationInfo, "AttributeAnimationInfo")
#endif
#ifdef REGISTER_MANUAL_PART_AttributeAnimationInfo
    REGISTER_MANUAL_PART_AttributeAnimationInfo(AttributeAnimationInfo, "AttributeAnimationInfo")
#endif
    RegisterSubclass<ValueAnimationInfo, AttributeAnimationInfo>(engine, "ValueAnimationInfo", "AttributeAnimationInfo");
    RegisterSubclass<RefCounted, AttributeAnimationInfo>(engine, "RefCounted", "AttributeAnimationInfo");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Audio, "Audio")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Audio, "Audio")
#endif
#ifdef REGISTER_MANUAL_PART_Audio
    REGISTER_MANUAL_PART_Audio(Audio, "Audio")
#endif
    RegisterSubclass<Object, Audio>(engine, "Object", "Audio");
    RegisterSubclass<RefCounted, Audio>(engine, "RefCounted", "Audio");

    // AllocatorBlock& AllocatorBlock::operator=(const AllocatorBlock&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AllocatorBlock>(engine, "AllocatorBlock");
#ifdef REGISTER_MANUAL_PART_AllocatorBlock
    REGISTER_MANUAL_PART_AllocatorBlock(AllocatorBlock, "AllocatorBlock")
#endif

    // AllocatorNode& AllocatorNode::operator=(const AllocatorNode&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AllocatorNode>(engine, "AllocatorNode");
#ifdef REGISTER_MANUAL_PART_AllocatorNode
    REGISTER_MANUAL_PART_AllocatorNode(AllocatorNode, "AllocatorNode")
#endif

    // AnimationControl& AnimationControl::operator=(const AnimationControl&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationControl>(engine, "AnimationControl");
    engine->RegisterObjectBehaviour("AnimationControl", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("AnimationControl", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_AnimationControl
    REGISTER_MANUAL_PART_AnimationControl(AnimationControl, "AnimationControl")
#endif

    // AnimationKeyFrame& AnimationKeyFrame::operator=(const AnimationKeyFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationKeyFrame>(engine, "AnimationKeyFrame");
#ifdef REGISTER_MANUAL_PART_AnimationKeyFrame
    REGISTER_MANUAL_PART_AnimationKeyFrame(AnimationKeyFrame, "AnimationKeyFrame")
#endif

    // AnimationStateTrack& AnimationStateTrack::operator=(const AnimationStateTrack&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationStateTrack>(engine, "AnimationStateTrack");
#ifdef REGISTER_MANUAL_PART_AnimationStateTrack
    REGISTER_MANUAL_PART_AnimationStateTrack(AnimationStateTrack, "AnimationStateTrack")
#endif

    // AnimationTrack& AnimationTrack::operator=(const AnimationTrack&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationTrack>(engine, "AnimationTrack");
    engine->RegisterObjectBehaviour("AnimationTrack", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("AnimationTrack", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_AnimationTrack
    REGISTER_MANUAL_PART_AnimationTrack(AnimationTrack, "AnimationTrack")
#endif

    // AnimationTriggerPoint& AnimationTriggerPoint::operator=(const AnimationTriggerPoint&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationTriggerPoint>(engine, "AnimationTriggerPoint");
#ifdef REGISTER_MANUAL_PART_AnimationTriggerPoint
    REGISTER_MANUAL_PART_AnimationTriggerPoint(AnimationTriggerPoint, "AnimationTriggerPoint")
#endif

    // AsyncProgress& AsyncProgress::operator=(const AsyncProgress&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AsyncProgress>(engine, "AsyncProgress");
#ifdef REGISTER_MANUAL_PART_AsyncProgress
    REGISTER_MANUAL_PART_AsyncProgress(AsyncProgress, "AsyncProgress")
#endif

    // AttributeInfo& AttributeInfo::operator=(const AttributeInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AttributeInfo>(engine, "AttributeInfo");
#ifdef REGISTER_MANUAL_PART_AttributeInfo
    REGISTER_MANUAL_PART_AttributeInfo(AttributeInfo, "AttributeInfo")
#endif

}

}
