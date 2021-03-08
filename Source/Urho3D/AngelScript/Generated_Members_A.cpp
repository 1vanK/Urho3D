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

    // unsigned AllocatorBlock::capacity_ | File: ../Container/Allocator.h
    engine->RegisterObjectProperty("AllocatorBlock", "uint capacity", offsetof(AllocatorBlock, capacity_));
    // AllocatorNode* AllocatorBlock::free_ | File: ../Container/Allocator.h
    // AllocatorNode* can not be registered
    // AllocatorBlock* AllocatorBlock::next_ | File: ../Container/Allocator.h
    // AllocatorBlock* can not be registered
    // unsigned AllocatorBlock::nodeSize_ | File: ../Container/Allocator.h
    engine->RegisterObjectProperty("AllocatorBlock", "uint nodeSize", offsetof(AllocatorBlock, nodeSize_));
    // AllocatorBlock& AllocatorBlock::operator=(const AllocatorBlock&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AllocatorBlock>(engine, "AllocatorBlock");
#ifdef REGISTER_MANUAL_PART_AllocatorBlock
    REGISTER_MANUAL_PART_AllocatorBlock(AllocatorBlock, "AllocatorBlock")
#endif

    // AllocatorNode* AllocatorNode::next_ | File: ../Container/Allocator.h
    // AllocatorNode* can not be registered
    // AllocatorNode& AllocatorNode::operator=(const AllocatorNode&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AllocatorNode>(engine, "AllocatorNode");
#ifdef REGISTER_MANUAL_PART_AllocatorNode
    REGISTER_MANUAL_PART_AllocatorNode(AllocatorNode, "AllocatorNode")
#endif

    // float AnimationControl::autoFadeTime_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "float autoFadeTime", offsetof(AnimationControl, autoFadeTime_));
    // float AnimationControl::fadeTime_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "float fadeTime", offsetof(AnimationControl, fadeTime_));
    // StringHash AnimationControl::hash_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "StringHash hash", offsetof(AnimationControl, hash_));
    // String AnimationControl::name_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "String name", offsetof(AnimationControl, name_));
    // bool AnimationControl::removeOnCompletion_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "bool removeOnCompletion", offsetof(AnimationControl, removeOnCompletion_));
    // unsigned short AnimationControl::setTime_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "uint16 setTime", offsetof(AnimationControl, setTime_));
    // unsigned char AnimationControl::setTimeRev_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "uint8 setTimeRev", offsetof(AnimationControl, setTimeRev_));
    // float AnimationControl::setTimeTtl_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "float setTimeTtl", offsetof(AnimationControl, setTimeTtl_));
    // unsigned char AnimationControl::setWeight_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "uint8 setWeight", offsetof(AnimationControl, setWeight_));
    // unsigned char AnimationControl::setWeightRev_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "uint8 setWeightRev", offsetof(AnimationControl, setWeightRev_));
    // float AnimationControl::setWeightTtl_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "float setWeightTtl", offsetof(AnimationControl, setWeightTtl_));
    // float AnimationControl::speed_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "float speed", offsetof(AnimationControl, speed_));
    // float AnimationControl::targetWeight_ | File: ../Graphics/AnimationController.h
    engine->RegisterObjectProperty("AnimationControl", "float targetWeight", offsetof(AnimationControl, targetWeight_));
    // AnimationControl& AnimationControl::operator=(const AnimationControl&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationControl>(engine, "AnimationControl");
    engine->RegisterObjectBehaviour("AnimationControl", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("AnimationControl", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_AnimationControl
    REGISTER_MANUAL_PART_AnimationControl(AnimationControl, "AnimationControl")
#endif

    // Vector3 AnimationKeyFrame::position_ | File: ../Graphics/Animation.h
    engine->RegisterObjectProperty("AnimationKeyFrame", "Vector3 position", offsetof(AnimationKeyFrame, position_));
    // Quaternion AnimationKeyFrame::rotation_ | File: ../Graphics/Animation.h
    engine->RegisterObjectProperty("AnimationKeyFrame", "Quaternion rotation", offsetof(AnimationKeyFrame, rotation_));
    // Vector3 AnimationKeyFrame::scale_ | File: ../Graphics/Animation.h
    engine->RegisterObjectProperty("AnimationKeyFrame", "Vector3 scale", offsetof(AnimationKeyFrame, scale_));
    // float AnimationKeyFrame::time_ | File: ../Graphics/Animation.h
    engine->RegisterObjectProperty("AnimationKeyFrame", "float time", offsetof(AnimationKeyFrame, time_));
    // AnimationKeyFrame& AnimationKeyFrame::operator=(const AnimationKeyFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationKeyFrame>(engine, "AnimationKeyFrame");
#ifdef REGISTER_MANUAL_PART_AnimationKeyFrame
    REGISTER_MANUAL_PART_AnimationKeyFrame(AnimationKeyFrame, "AnimationKeyFrame")
#endif

    // Bone* AnimationStateTrack::bone_ | File: ../Graphics/AnimationState.h
    // Bone* can not be registered
    // unsigned AnimationStateTrack::keyFrame_ | File: ../Graphics/AnimationState.h
    engine->RegisterObjectProperty("AnimationStateTrack", "uint keyFrame", offsetof(AnimationStateTrack, keyFrame_));
    // WeakPtr<Node> AnimationStateTrack::node_ | File: ../Graphics/AnimationState.h
    // Error: type "WeakPtr<Node>" can not automatically bind
    // const AnimationTrack* AnimationStateTrack::track_ | File: ../Graphics/AnimationState.h
    // const AnimationTrack* can not be registered
    // float AnimationStateTrack::weight_ | File: ../Graphics/AnimationState.h
    engine->RegisterObjectProperty("AnimationStateTrack", "float weight", offsetof(AnimationStateTrack, weight_));
    // AnimationStateTrack& AnimationStateTrack::operator=(const AnimationStateTrack&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationStateTrack>(engine, "AnimationStateTrack");
#ifdef REGISTER_MANUAL_PART_AnimationStateTrack
    REGISTER_MANUAL_PART_AnimationStateTrack(AnimationStateTrack, "AnimationStateTrack")
#endif

    // AnimationChannelFlags AnimationTrack::channelMask_ | File: ../Graphics/Animation.h
    engine->RegisterObjectProperty("AnimationTrack", "AnimationChannelFlags channelMask", offsetof(AnimationTrack, channelMask_));
    // Vector<AnimationKeyFrame> AnimationTrack::keyFrames_ | File: ../Graphics/Animation.h
    // Error: type "Vector<AnimationKeyFrame>" can not automatically bind
    // String AnimationTrack::name_ | File: ../Graphics/Animation.h
    engine->RegisterObjectProperty("AnimationTrack", "String name", offsetof(AnimationTrack, name_));
    // StringHash AnimationTrack::nameHash_ | File: ../Graphics/Animation.h
    engine->RegisterObjectProperty("AnimationTrack", "StringHash nameHash", offsetof(AnimationTrack, nameHash_));
    // AnimationTrack& AnimationTrack::operator=(const AnimationTrack&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationTrack>(engine, "AnimationTrack");
    engine->RegisterObjectBehaviour("AnimationTrack", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("AnimationTrack", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_AnimationTrack
    REGISTER_MANUAL_PART_AnimationTrack(AnimationTrack, "AnimationTrack")
#endif

    // Variant AnimationTriggerPoint::data_ | File: ../Graphics/Animation.h
    engine->RegisterObjectProperty("AnimationTriggerPoint", "Variant data", offsetof(AnimationTriggerPoint, data_));
    // float AnimationTriggerPoint::time_ | File: ../Graphics/Animation.h
    engine->RegisterObjectProperty("AnimationTriggerPoint", "float time", offsetof(AnimationTriggerPoint, time_));
    // AnimationTriggerPoint& AnimationTriggerPoint::operator=(const AnimationTriggerPoint&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationTriggerPoint>(engine, "AnimationTriggerPoint");
#ifdef REGISTER_MANUAL_PART_AnimationTriggerPoint
    REGISTER_MANUAL_PART_AnimationTriggerPoint(AnimationTriggerPoint, "AnimationTriggerPoint")
#endif

    // SharedPtr<File> AsyncProgress::file_ | File: ../Scene/Scene.h
    // Error: type "SharedPtr<File>" can not automatically bind
    // SharedPtr<JSONFile> AsyncProgress::jsonFile_ | File: ../Scene/Scene.h
    // Error: type "SharedPtr<JSONFile>" can not automatically bind
    // unsigned AsyncProgress::jsonIndex_ | File: ../Scene/Scene.h
    engine->RegisterObjectProperty("AsyncProgress", "uint jsonIndex", offsetof(AsyncProgress, jsonIndex_));
    // unsigned AsyncProgress::loadedNodes_ | File: ../Scene/Scene.h
    engine->RegisterObjectProperty("AsyncProgress", "uint loadedNodes", offsetof(AsyncProgress, loadedNodes_));
    // unsigned AsyncProgress::loadedResources_ | File: ../Scene/Scene.h
    engine->RegisterObjectProperty("AsyncProgress", "uint loadedResources", offsetof(AsyncProgress, loadedResources_));
    // LoadMode AsyncProgress::mode_ | File: ../Scene/Scene.h
    engine->RegisterObjectProperty("AsyncProgress", "LoadMode mode", offsetof(AsyncProgress, mode_));
    // HashSet<StringHash> AsyncProgress::resources_ | File: ../Scene/Scene.h
    // Error: type "HashSet<StringHash>" can not automatically bind
    // unsigned AsyncProgress::totalNodes_ | File: ../Scene/Scene.h
    engine->RegisterObjectProperty("AsyncProgress", "uint totalNodes", offsetof(AsyncProgress, totalNodes_));
    // unsigned AsyncProgress::totalResources_ | File: ../Scene/Scene.h
    engine->RegisterObjectProperty("AsyncProgress", "uint totalResources", offsetof(AsyncProgress, totalResources_));
    // XMLElement AsyncProgress::xmlElement_ | File: ../Scene/Scene.h
    engine->RegisterObjectProperty("AsyncProgress", "XMLElement xmlElement", offsetof(AsyncProgress, xmlElement_));
    // SharedPtr<XMLFile> AsyncProgress::xmlFile_ | File: ../Scene/Scene.h
    // Error: type "SharedPtr<XMLFile>" can not automatically bind
    // AsyncProgress& AsyncProgress::operator=(const AsyncProgress&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AsyncProgress>(engine, "AsyncProgress");
#ifdef REGISTER_MANUAL_PART_AsyncProgress
    REGISTER_MANUAL_PART_AsyncProgress(AsyncProgress, "AsyncProgress")
#endif

    // SharedPtr<AttributeAccessor> AttributeInfo::accessor_ | File: ../Core/Attribute.h
    // Error: type "SharedPtr<AttributeAccessor>" can not automatically bind
    // Variant AttributeInfo::defaultValue_ | File: ../Core/Attribute.h
    engine->RegisterObjectProperty("AttributeInfo", "Variant defaultValue", offsetof(AttributeInfo, defaultValue_));
    // const char** AttributeInfo::enumNames_ | File: ../Core/Attribute.h
    // Error: type "const char**" can not automatically bind
    // VariantMap AttributeInfo::metadata_ | File: ../Core/Attribute.h
    engine->RegisterObjectProperty("AttributeInfo", "VariantMap metadata", offsetof(AttributeInfo, metadata_));
    // AttributeModeFlags AttributeInfo::mode_ | File: ../Core/Attribute.h
    engine->RegisterObjectProperty("AttributeInfo", "AttributeModeFlags mode", offsetof(AttributeInfo, mode_));
    // String AttributeInfo::name_ | File: ../Core/Attribute.h
    engine->RegisterObjectProperty("AttributeInfo", "String name", offsetof(AttributeInfo, name_));
    // void* AttributeInfo::ptr_ | File: ../Core/Attribute.h
    // void* can not be registered
    // VariantType AttributeInfo::type_ | File: ../Core/Attribute.h
    engine->RegisterObjectProperty("AttributeInfo", "VariantType type", offsetof(AttributeInfo, type_));
    // AttributeInfo& AttributeInfo::operator=(const AttributeInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AttributeInfo>(engine, "AttributeInfo");
#ifdef REGISTER_MANUAL_PART_AttributeInfo
    REGISTER_MANUAL_PART_AttributeInfo(AttributeInfo, "AttributeInfo")
#endif

}

}
