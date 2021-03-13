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
    engine->RegisterObjectBehaviour("AbstractFile", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("AbstractFile", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    RegisterSubclass<Deserializer, AbstractFile>(engine, "Deserializer", "AbstractFile");
    RegisterSubclass<Serializer, AbstractFile>(engine, "Serializer", "AbstractFile");

    MemberCollection members;
    CollectMembers_AbstractFile(members);
    RegisterMembers(engine, "AbstractFile", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AbstractFile
        REGISTER_CLASS_MANUAL_PART_AbstractFile();
    #endif

    // AbstractFile& AbstractFile::operator =(const AbstractFile&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AbstractFile>(engine, "AbstractFile");
}

// struct AllocatorBlock | File: ../Container/Allocator.h
static void Register_AllocatorBlock(asIScriptEngine* engine)
{
    // AllocatorBlock::~AllocatorBlock() | Implicitly-declared
    engine->RegisterObjectBehaviour("AllocatorBlock", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AllocatorBlock), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_AllocatorBlock(members);
    RegisterMembers(engine, "AllocatorBlock", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AllocatorBlock
        REGISTER_CLASS_MANUAL_PART_AllocatorBlock();
    #endif

    // AllocatorBlock& AllocatorBlock::operator =(const AllocatorBlock&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AllocatorBlock>(engine, "AllocatorBlock");
}

// struct AllocatorNode | File: ../Container/Allocator.h
static void Register_AllocatorNode(asIScriptEngine* engine)
{
    // AllocatorNode::~AllocatorNode() | Implicitly-declared
    engine->RegisterObjectBehaviour("AllocatorNode", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AllocatorNode), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_AllocatorNode(members);
    RegisterMembers(engine, "AllocatorNode", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AllocatorNode
        REGISTER_CLASS_MANUAL_PART_AllocatorNode();
    #endif

    // AllocatorNode& AllocatorNode::operator =(const AllocatorNode&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AllocatorNode>(engine, "AllocatorNode");
}

// class Animatable | File: ../Scene/Animatable.h
static void Register_Animatable(asIScriptEngine* engine)
{
    RegisterSubclass<Serializable, Animatable>(engine, "Serializable", "Animatable");
    RegisterSubclass<Object, Animatable>(engine, "Object", "Animatable");
    RegisterSubclass<RefCounted, Animatable>(engine, "RefCounted", "Animatable");

    MemberCollection members;
    CollectMembers_Animatable(members);
    RegisterMembers(engine, "Animatable", members);

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

    RegisterSubclass<StaticModel, AnimatedModel>(engine, "StaticModel", "AnimatedModel");
    RegisterSubclass<Drawable, AnimatedModel>(engine, "Drawable", "AnimatedModel");
    RegisterSubclass<Component, AnimatedModel>(engine, "Component", "AnimatedModel");
    RegisterSubclass<Animatable, AnimatedModel>(engine, "Animatable", "AnimatedModel");
    RegisterSubclass<Serializable, AnimatedModel>(engine, "Serializable", "AnimatedModel");
    RegisterSubclass<Object, AnimatedModel>(engine, "Object", "AnimatedModel");
    RegisterSubclass<RefCounted, AnimatedModel>(engine, "RefCounted", "AnimatedModel");

    MemberCollection members;
    CollectMembers_AnimatedModel(members);
    RegisterMembers(engine, "AnimatedModel", members);

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

    RegisterSubclass<ResourceWithMetadata, Animation>(engine, "ResourceWithMetadata", "Animation");
    RegisterSubclass<Resource, Animation>(engine, "Resource", "Animation");
    RegisterSubclass<Object, Animation>(engine, "Object", "Animation");
    RegisterSubclass<RefCounted, Animation>(engine, "RefCounted", "Animation");

    MemberCollection members;
    CollectMembers_Animation(members);
    RegisterMembers(engine, "Animation", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Animation
        REGISTER_CLASS_MANUAL_PART_Animation();
    #endif
}

// struct AnimationControl | File: ../Graphics/AnimationController.h
static void Register_AnimationControl(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("AnimationControl", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("AnimationControl", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_AnimationControl(members);
    RegisterMembers(engine, "AnimationControl", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationControl
        REGISTER_CLASS_MANUAL_PART_AnimationControl();
    #endif

    // AnimationControl& AnimationControl::operator =(const AnimationControl&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationControl>(engine, "AnimationControl");
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

    RegisterSubclass<Component, AnimationController>(engine, "Component", "AnimationController");
    RegisterSubclass<Animatable, AnimationController>(engine, "Animatable", "AnimationController");
    RegisterSubclass<Serializable, AnimationController>(engine, "Serializable", "AnimationController");
    RegisterSubclass<Object, AnimationController>(engine, "Object", "AnimationController");
    RegisterSubclass<RefCounted, AnimationController>(engine, "RefCounted", "AnimationController");

    MemberCollection members;
    CollectMembers_AnimationController(members);
    RegisterMembers(engine, "AnimationController", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationController
        REGISTER_CLASS_MANUAL_PART_AnimationController();
    #endif
}

// struct AnimationKeyFrame | File: ../Graphics/Animation.h
static void Register_AnimationKeyFrame(asIScriptEngine* engine)
{
    // AnimationKeyFrame::~AnimationKeyFrame() | Implicitly-declared
    engine->RegisterObjectBehaviour("AnimationKeyFrame", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AnimationKeyFrame), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_AnimationKeyFrame(members);
    RegisterMembers(engine, "AnimationKeyFrame", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationKeyFrame
        REGISTER_CLASS_MANUAL_PART_AnimationKeyFrame();
    #endif

    // AnimationKeyFrame& AnimationKeyFrame::operator =(const AnimationKeyFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationKeyFrame>(engine, "AnimationKeyFrame");
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

    RegisterSubclass<RefCounted, AnimationState>(engine, "RefCounted", "AnimationState");

    MemberCollection members;
    CollectMembers_AnimationState(members);
    RegisterMembers(engine, "AnimationState", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationState
        REGISTER_CLASS_MANUAL_PART_AnimationState();
    #endif
}

// struct AnimationStateTrack | File: ../Graphics/AnimationState.h
static void Register_AnimationStateTrack(asIScriptEngine* engine)
{
    // AnimationStateTrack::~AnimationStateTrack()
    engine->RegisterObjectBehaviour("AnimationStateTrack", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AnimationStateTrack), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_AnimationStateTrack(members);
    RegisterMembers(engine, "AnimationStateTrack", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationStateTrack
        REGISTER_CLASS_MANUAL_PART_AnimationStateTrack();
    #endif

    // AnimationStateTrack& AnimationStateTrack::operator =(const AnimationStateTrack&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationStateTrack>(engine, "AnimationStateTrack");
}

// struct AnimationTrack | File: ../Graphics/Animation.h
static void Register_AnimationTrack(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("AnimationTrack", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("AnimationTrack", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_AnimationTrack(members);
    RegisterMembers(engine, "AnimationTrack", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationTrack
        REGISTER_CLASS_MANUAL_PART_AnimationTrack();
    #endif

    // AnimationTrack& AnimationTrack::operator =(const AnimationTrack&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationTrack>(engine, "AnimationTrack");
}

// struct AnimationTriggerPoint | File: ../Graphics/Animation.h
static void Register_AnimationTriggerPoint(asIScriptEngine* engine)
{
    // AnimationTriggerPoint::~AnimationTriggerPoint() | Implicitly-declared
    engine->RegisterObjectBehaviour("AnimationTriggerPoint", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AnimationTriggerPoint), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_AnimationTriggerPoint(members);
    RegisterMembers(engine, "AnimationTriggerPoint", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AnimationTriggerPoint
        REGISTER_CLASS_MANUAL_PART_AnimationTriggerPoint();
    #endif

    // AnimationTriggerPoint& AnimationTriggerPoint::operator =(const AnimationTriggerPoint&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AnimationTriggerPoint>(engine, "AnimationTriggerPoint");
}

// AreaAllocator::AreaAllocator(int width, int height, bool fastMode = true)
static void AreaAllocator_AreaAllocator_int_int_bool(AreaAllocator* ptr, int width, int height, bool fastMode)
{
    new(ptr) AreaAllocator(width, height, fastMode);
}

// AreaAllocator::AreaAllocator(int width, int height, int maxWidth, int maxHeight, bool fastMode = true)
static void AreaAllocator_AreaAllocator_int_int_int_int_bool(AreaAllocator* ptr, int width, int height, int maxWidth, int maxHeight, bool fastMode)
{
    new(ptr) AreaAllocator(width, height, maxWidth, maxHeight, fastMode);
}

// class AreaAllocator | File: ../Math/AreaAllocator.h
static void Register_AreaAllocator(asIScriptEngine* engine)
{
    // AreaAllocator::AreaAllocator(int width, int height, bool fastMode = true)
    engine->RegisterObjectBehaviour("AreaAllocator", asBEHAVE_CONSTRUCT, "void f(int, int, bool = true)", AS_FUNCTION_OBJFIRST(AreaAllocator_AreaAllocator_int_int_bool), AS_CALL_CDECL_OBJFIRST);
    // AreaAllocator::AreaAllocator(int width, int height, int maxWidth, int maxHeight, bool fastMode = true)
    engine->RegisterObjectBehaviour("AreaAllocator", asBEHAVE_CONSTRUCT, "void f(int, int, int, int, bool = true)", AS_FUNCTION_OBJFIRST(AreaAllocator_AreaAllocator_int_int_int_int_bool), AS_CALL_CDECL_OBJFIRST);

    // AreaAllocator::~AreaAllocator() | Implicitly-declared
    engine->RegisterObjectBehaviour("AreaAllocator", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AreaAllocator), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_AreaAllocator(members);
    RegisterMembers(engine, "AreaAllocator", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AreaAllocator
        REGISTER_CLASS_MANUAL_PART_AreaAllocator();
    #endif

    // AreaAllocator& AreaAllocator::operator =(const AreaAllocator&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AreaAllocator>(engine, "AreaAllocator");
}

// struct AsyncProgress | File: ../Scene/Scene.h
static void Register_AsyncProgress(asIScriptEngine* engine)
{
    // AsyncProgress::~AsyncProgress() | Implicitly-declared
    engine->RegisterObjectBehaviour("AsyncProgress", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(AsyncProgress), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_AsyncProgress(members);
    RegisterMembers(engine, "AsyncProgress", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AsyncProgress
        REGISTER_CLASS_MANUAL_PART_AsyncProgress();
    #endif

    // AsyncProgress& AsyncProgress::operator =(const AsyncProgress&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AsyncProgress>(engine, "AsyncProgress");
}

// class AttributeAccessor | File: ../Core/Attribute.h
static void Register_AttributeAccessor(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, AttributeAccessor>(engine, "RefCounted", "AttributeAccessor");

    MemberCollection members;
    CollectMembers_AttributeAccessor(members);
    RegisterMembers(engine, "AttributeAccessor", members);

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

    RegisterSubclass<ValueAnimationInfo, AttributeAnimationInfo>(engine, "ValueAnimationInfo", "AttributeAnimationInfo");
    RegisterSubclass<RefCounted, AttributeAnimationInfo>(engine, "RefCounted", "AttributeAnimationInfo");

    MemberCollection members;
    CollectMembers_AttributeAnimationInfo(members);
    RegisterMembers(engine, "AttributeAnimationInfo", members);

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

    MemberCollection members;
    CollectMembers_AttributeInfo(members);
    RegisterMembers(engine, "AttributeInfo", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_AttributeInfo
        REGISTER_CLASS_MANUAL_PART_AttributeInfo();
    #endif

    // AttributeInfo& AttributeInfo::operator =(const AttributeInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<AttributeInfo>(engine, "AttributeInfo");
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

    RegisterSubclass<Object, Audio>(engine, "Object", "Audio");
    RegisterSubclass<RefCounted, Audio>(engine, "RefCounted", "Audio");

    MemberCollection members;
    CollectMembers_Audio(members);
    RegisterMembers(engine, "Audio", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Audio
        REGISTER_CLASS_MANUAL_PART_Audio();
    #endif
}

// struct BackgroundLoadItem | File: ../Resource/BackgroundLoader.h
static void Register_BackgroundLoadItem(asIScriptEngine* engine)
{
    // BackgroundLoadItem::~BackgroundLoadItem() | Implicitly-declared
    engine->RegisterObjectBehaviour("BackgroundLoadItem", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(BackgroundLoadItem), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_BackgroundLoadItem(members);
    RegisterMembers(engine, "BackgroundLoadItem", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_BackgroundLoadItem
        REGISTER_CLASS_MANUAL_PART_BackgroundLoadItem();
    #endif

    // BackgroundLoadItem& BackgroundLoadItem::operator =(const BackgroundLoadItem&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<BackgroundLoadItem>(engine, "BackgroundLoadItem");
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

    MemberCollection members;
    CollectMembers_Batch(members);
    RegisterMembers(engine, "Batch", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Batch
        REGISTER_CLASS_MANUAL_PART_Batch();
    #endif

    // Batch& Batch::operator =(const Batch&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Batch>(engine, "Batch");
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

    // BatchGroup::~BatchGroup() = default
    engine->RegisterObjectBehaviour("BatchGroup", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(BatchGroup), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_BatchGroup(members);
    RegisterMembers(engine, "BatchGroup", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_BatchGroup
        REGISTER_CLASS_MANUAL_PART_BatchGroup();
    #endif

    // BatchGroup& BatchGroup::operator =(const BatchGroup&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<BatchGroup>(engine, "BatchGroup");
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

    MemberCollection members;
    CollectMembers_BatchGroupKey(members);
    RegisterMembers(engine, "BatchGroupKey", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_BatchGroupKey
        REGISTER_CLASS_MANUAL_PART_BatchGroupKey();
    #endif

    // BatchGroupKey& BatchGroupKey::operator =(const BatchGroupKey&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<BatchGroupKey>(engine, "BatchGroupKey");
}

// struct BatchQueue | File: ../Graphics/Batch.h
static void Register_BatchQueue(asIScriptEngine* engine)
{
    // BatchQueue::~BatchQueue() | Implicitly-declared
    engine->RegisterObjectBehaviour("BatchQueue", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(BatchQueue), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_BatchQueue(members);
    RegisterMembers(engine, "BatchQueue", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_BatchQueue
        REGISTER_CLASS_MANUAL_PART_BatchQueue();
    #endif

    // BatchQueue& BatchQueue::operator =(const BatchQueue&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<BatchQueue>(engine, "BatchQueue");
}

// BiasParameters::BiasParameters(float constantBias, float slopeScaledBias, float normalOffset = 0.0f)
static void BiasParameters_BiasParameters_float_float_float(BiasParameters* ptr, float constantBias, float slopeScaledBias, float normalOffset)
{
    new(ptr) BiasParameters(constantBias, slopeScaledBias, normalOffset);
}

// struct BiasParameters | File: ../Graphics/Light.h
static void Register_BiasParameters(asIScriptEngine* engine)
{
    // BiasParameters::BiasParameters(float constantBias, float slopeScaledBias, float normalOffset = 0.0f)
    engine->RegisterObjectBehaviour("BiasParameters", asBEHAVE_CONSTRUCT, "void f(float, float, float = 0.0f)", AS_FUNCTION_OBJFIRST(BiasParameters_BiasParameters_float_float_float), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_BiasParameters(members);
    RegisterMembers(engine, "BiasParameters", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_BiasParameters
        REGISTER_CLASS_MANUAL_PART_BiasParameters();
    #endif

    // BiasParameters& BiasParameters::operator =(const BiasParameters&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<BiasParameters>(engine, "BiasParameters");
}

// struct Billboard | File: ../Graphics/BillboardSet.h
static void Register_Billboard(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("Billboard", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("Billboard", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_Billboard(members);
    RegisterMembers(engine, "Billboard", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Billboard
        REGISTER_CLASS_MANUAL_PART_Billboard();
    #endif

    // Billboard& Billboard::operator =(const Billboard&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Billboard>(engine, "Billboard");
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

    RegisterSubclass<Drawable, BillboardSet>(engine, "Drawable", "BillboardSet");
    RegisterSubclass<Component, BillboardSet>(engine, "Component", "BillboardSet");
    RegisterSubclass<Animatable, BillboardSet>(engine, "Animatable", "BillboardSet");
    RegisterSubclass<Serializable, BillboardSet>(engine, "Serializable", "BillboardSet");
    RegisterSubclass<Object, BillboardSet>(engine, "Object", "BillboardSet");
    RegisterSubclass<RefCounted, BillboardSet>(engine, "RefCounted", "BillboardSet");

    MemberCollection members;
    CollectMembers_BillboardSet(members);
    RegisterMembers(engine, "BillboardSet", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_BillboardSet
        REGISTER_CLASS_MANUAL_PART_BillboardSet();
    #endif
}

// struct Bone | File: ../Graphics/Skeleton.h
static void Register_Bone(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("Bone", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("Bone", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_Bone(members);
    RegisterMembers(engine, "Bone", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Bone
        REGISTER_CLASS_MANUAL_PART_Bone();
    #endif

    // Bone& Bone::operator =(const Bone&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Bone>(engine, "Bone");
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

    RegisterSubclass<UIElement, BorderImage>(engine, "UIElement", "BorderImage");
    RegisterSubclass<Animatable, BorderImage>(engine, "Animatable", "BorderImage");
    RegisterSubclass<Serializable, BorderImage>(engine, "Serializable", "BorderImage");
    RegisterSubclass<Object, BorderImage>(engine, "Object", "BorderImage");
    RegisterSubclass<RefCounted, BorderImage>(engine, "RefCounted", "BorderImage");

    MemberCollection members;
    CollectMembers_BorderImage(members);
    RegisterMembers(engine, "BorderImage", members);

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

    MemberCollection members;
    CollectMembers_BoundingBox(members);
    RegisterMembers(engine, "BoundingBox", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_BoundingBox
        REGISTER_CLASS_MANUAL_PART_BoundingBox();
    #endif
}

// class BufferedSoundStream | File: ../Audio/BufferedSoundStream.h
static void Register_BufferedSoundStream(asIScriptEngine* engine)
{
    RegisterSubclass<SoundStream, BufferedSoundStream>(engine, "SoundStream", "BufferedSoundStream");
    RegisterSubclass<RefCounted, BufferedSoundStream>(engine, "RefCounted", "BufferedSoundStream");

    MemberCollection members;
    CollectMembers_BufferedSoundStream(members);
    RegisterMembers(engine, "BufferedSoundStream", members);

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

    RegisterSubclass<BorderImage, Button>(engine, "BorderImage", "Button");
    RegisterSubclass<UIElement, Button>(engine, "UIElement", "Button");
    RegisterSubclass<Animatable, Button>(engine, "Animatable", "Button");
    RegisterSubclass<Serializable, Button>(engine, "Serializable", "Button");
    RegisterSubclass<Object, Button>(engine, "Object", "Button");
    RegisterSubclass<RefCounted, Button>(engine, "RefCounted", "Button");

    MemberCollection members;
    CollectMembers_Button(members);
    RegisterMembers(engine, "Button", members);

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

    RegisterSubclass<Component, Camera>(engine, "Component", "Camera");
    RegisterSubclass<Animatable, Camera>(engine, "Animatable", "Camera");
    RegisterSubclass<Serializable, Camera>(engine, "Serializable", "Camera");
    RegisterSubclass<Object, Camera>(engine, "Object", "Camera");
    RegisterSubclass<RefCounted, Camera>(engine, "RefCounted", "Camera");

    MemberCollection members;
    CollectMembers_Camera(members);
    RegisterMembers(engine, "Camera", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Camera
        REGISTER_CLASS_MANUAL_PART_Camera();
    #endif
}

// CascadeParameters::CascadeParameters(float split1, float split2, float split3, float split4, float fadeStart, float biasAutoAdjust = 1.0f)
static void CascadeParameters_CascadeParameters_float_float_float_float_float_float(CascadeParameters* ptr, float split1, float split2, float split3, float split4, float fadeStart, float biasAutoAdjust)
{
    new(ptr) CascadeParameters(split1, split2, split3, split4, fadeStart, biasAutoAdjust);
}

// struct CascadeParameters | File: ../Graphics/Light.h
static void Register_CascadeParameters(asIScriptEngine* engine)
{
    // CascadeParameters::CascadeParameters(float split1, float split2, float split3, float split4, float fadeStart, float biasAutoAdjust = 1.0f)
    engine->RegisterObjectBehaviour("CascadeParameters", asBEHAVE_CONSTRUCT, "void f(float, float, float, float, float, float = 1.0f)", AS_FUNCTION_OBJFIRST(CascadeParameters_CascadeParameters_float_float_float_float_float_float), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_CascadeParameters(members);
    RegisterMembers(engine, "CascadeParameters", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_CascadeParameters
        REGISTER_CLASS_MANUAL_PART_CascadeParameters();
    #endif

    // CascadeParameters& CascadeParameters::operator =(const CascadeParameters&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<CascadeParameters>(engine, "CascadeParameters");
}

// struct CharLocation | File: ../UI/Text.h
static void Register_CharLocation(asIScriptEngine* engine)
{
    // CharLocation::~CharLocation() | Implicitly-declared
    engine->RegisterObjectBehaviour("CharLocation", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(CharLocation), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_CharLocation(members);
    RegisterMembers(engine, "CharLocation", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_CharLocation
        REGISTER_CLASS_MANUAL_PART_CharLocation();
    #endif

    // CharLocation& CharLocation::operator =(const CharLocation&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<CharLocation>(engine, "CharLocation");
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

    RegisterSubclass<BorderImage, CheckBox>(engine, "BorderImage", "CheckBox");
    RegisterSubclass<UIElement, CheckBox>(engine, "UIElement", "CheckBox");
    RegisterSubclass<Animatable, CheckBox>(engine, "Animatable", "CheckBox");
    RegisterSubclass<Serializable, CheckBox>(engine, "Serializable", "CheckBox");
    RegisterSubclass<Object, CheckBox>(engine, "Object", "CheckBox");
    RegisterSubclass<RefCounted, CheckBox>(engine, "RefCounted", "CheckBox");

    MemberCollection members;
    CollectMembers_CheckBox(members);
    RegisterMembers(engine, "CheckBox", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_CheckBox
        REGISTER_CLASS_MANUAL_PART_CheckBox();
    #endif
}

// Color::Color(const Color& color) noexcept = default
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
    // explicit Color::Color(unsigned color, const ChannelMask& mask = ABGR)
    // Error: type "const ChannelMask&" can not automatically bind

    // Color::Color(const Color& color) noexcept = default
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

    MemberCollection members;
    CollectMembers_Color(members);
    RegisterMembers(engine, "Color", members);

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

    engine->RegisterObjectBehaviour("ColorFrame", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("ColorFrame", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_ColorFrame(members);
    RegisterMembers(engine, "ColorFrame", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ColorFrame
        REGISTER_CLASS_MANUAL_PART_ColorFrame();
    #endif

    // ColorFrame& ColorFrame::operator =(const ColorFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ColorFrame>(engine, "ColorFrame");
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

    RegisterSubclass<Animatable, Component>(engine, "Animatable", "Component");
    RegisterSubclass<Serializable, Component>(engine, "Serializable", "Component");
    RegisterSubclass<Object, Component>(engine, "Object", "Component");
    RegisterSubclass<RefCounted, Component>(engine, "RefCounted", "Component");

    MemberCollection members;
    CollectMembers_Component(members);
    RegisterMembers(engine, "Component", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Component
        REGISTER_CLASS_MANUAL_PART_Component();
    #endif
}

// struct ComponentReplicationState | File: ../Scene/ReplicationState.h
static void Register_ComponentReplicationState(asIScriptEngine* engine)
{
    // ComponentReplicationState::~ComponentReplicationState() | Implicitly-declared
    engine->RegisterObjectBehaviour("ComponentReplicationState", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ComponentReplicationState), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ComponentReplicationState(members);
    RegisterMembers(engine, "ComponentReplicationState", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ComponentReplicationState
        REGISTER_CLASS_MANUAL_PART_ComponentReplicationState();
    #endif

    // ComponentReplicationState& ComponentReplicationState::operator =(const ComponentReplicationState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ComponentReplicationState>(engine, "ComponentReplicationState");
}

// struct CompressedLevel | File: ../Resource/Image.h
static void Register_CompressedLevel(asIScriptEngine* engine)
{
    // CompressedLevel::~CompressedLevel() | Implicitly-declared
    engine->RegisterObjectBehaviour("CompressedLevel", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(CompressedLevel), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_CompressedLevel(members);
    RegisterMembers(engine, "CompressedLevel", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_CompressedLevel
        REGISTER_CLASS_MANUAL_PART_CompressedLevel();
    #endif

    // CompressedLevel& CompressedLevel::operator =(const CompressedLevel&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<CompressedLevel>(engine, "CompressedLevel");
}

// class Condition | File: ../Core/Condition.h
static void Register_Condition(asIScriptEngine* engine)
{
    // Condition::~Condition()
    engine->RegisterObjectBehaviour("Condition", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Condition), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Condition(members);
    RegisterMembers(engine, "Condition", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Condition
        REGISTER_CLASS_MANUAL_PART_Condition();
    #endif

    // Condition& Condition::operator =(const Condition&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Condition>(engine, "Condition");
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

    RegisterSubclass<Object, Console>(engine, "Object", "Console");
    RegisterSubclass<RefCounted, Console>(engine, "RefCounted", "Console");

    MemberCollection members;
    CollectMembers_Console(members);
    RegisterMembers(engine, "Console", members);

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

    RegisterSubclass<Object, ConstantBuffer>(engine, "Object", "ConstantBuffer");
    RegisterSubclass<RefCounted, ConstantBuffer>(engine, "RefCounted", "ConstantBuffer");

    MemberCollection members;
    CollectMembers_ConstantBuffer(members);
    RegisterMembers(engine, "ConstantBuffer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstantBuffer
        REGISTER_CLASS_MANUAL_PART_ConstantBuffer();
    #endif
}

// class Context | File: ../Core/Context.h
static void Register_Context(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, Context>(engine, "RefCounted", "Context");

    MemberCollection members;
    CollectMembers_Context(members);
    RegisterMembers(engine, "Context", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Context
        REGISTER_CLASS_MANUAL_PART_Context();
    #endif
}

// class Controls | File: ../Input/Controls.h
static void Register_Controls(asIScriptEngine* engine)
{
    // Controls::~Controls()
    engine->RegisterObjectBehaviour("Controls", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Controls), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Controls(members);
    RegisterMembers(engine, "Controls", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Controls
        REGISTER_CLASS_MANUAL_PART_Controls();
    #endif

    // Controls& Controls::operator =(const Controls&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Controls>(engine, "Controls");
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

    RegisterSubclass<BorderImage, Cursor>(engine, "BorderImage", "Cursor");
    RegisterSubclass<UIElement, Cursor>(engine, "UIElement", "Cursor");
    RegisterSubclass<Animatable, Cursor>(engine, "Animatable", "Cursor");
    RegisterSubclass<Serializable, Cursor>(engine, "Serializable", "Cursor");
    RegisterSubclass<Object, Cursor>(engine, "Object", "Cursor");
    RegisterSubclass<RefCounted, Cursor>(engine, "RefCounted", "Cursor");

    MemberCollection members;
    CollectMembers_Cursor(members);
    RegisterMembers(engine, "Cursor", members);

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

    MemberCollection members;
    CollectMembers_CursorShapeInfo(members);
    RegisterMembers(engine, "CursorShapeInfo", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_CursorShapeInfo
        REGISTER_CLASS_MANUAL_PART_CursorShapeInfo();
    #endif

    // CursorShapeInfo& CursorShapeInfo::operator =(const CursorShapeInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<CursorShapeInfo>(engine, "CursorShapeInfo");
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

    RegisterSubclass<Drawable, CustomGeometry>(engine, "Drawable", "CustomGeometry");
    RegisterSubclass<Component, CustomGeometry>(engine, "Component", "CustomGeometry");
    RegisterSubclass<Animatable, CustomGeometry>(engine, "Animatable", "CustomGeometry");
    RegisterSubclass<Serializable, CustomGeometry>(engine, "Serializable", "CustomGeometry");
    RegisterSubclass<Object, CustomGeometry>(engine, "Object", "CustomGeometry");
    RegisterSubclass<RefCounted, CustomGeometry>(engine, "RefCounted", "CustomGeometry");

    MemberCollection members;
    CollectMembers_CustomGeometry(members);
    RegisterMembers(engine, "CustomGeometry", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_CustomGeometry
        REGISTER_CLASS_MANUAL_PART_CustomGeometry();
    #endif
}

// struct CustomGeometryVertex | File: ../Graphics/CustomGeometry.h
static void Register_CustomGeometryVertex(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("CustomGeometryVertex", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("CustomGeometryVertex", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_CustomGeometryVertex(members);
    RegisterMembers(engine, "CustomGeometryVertex", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_CustomGeometryVertex
        REGISTER_CLASS_MANUAL_PART_CustomGeometryVertex();
    #endif

    // CustomGeometryVertex& CustomGeometryVertex::operator =(const CustomGeometryVertex&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<CustomGeometryVertex>(engine, "CustomGeometryVertex");
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

    RegisterSubclass<Object, DebugHud>(engine, "Object", "DebugHud");
    RegisterSubclass<RefCounted, DebugHud>(engine, "RefCounted", "DebugHud");

    MemberCollection members;
    CollectMembers_DebugHud(members);
    RegisterMembers(engine, "DebugHud", members);

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

    MemberCollection members;
    CollectMembers_DebugLine(members);
    RegisterMembers(engine, "DebugLine", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_DebugLine
        REGISTER_CLASS_MANUAL_PART_DebugLine();
    #endif

    // DebugLine& DebugLine::operator =(const DebugLine&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DebugLine>(engine, "DebugLine");
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

    RegisterSubclass<Component, DebugRenderer>(engine, "Component", "DebugRenderer");
    RegisterSubclass<Animatable, DebugRenderer>(engine, "Animatable", "DebugRenderer");
    RegisterSubclass<Serializable, DebugRenderer>(engine, "Serializable", "DebugRenderer");
    RegisterSubclass<Object, DebugRenderer>(engine, "Object", "DebugRenderer");
    RegisterSubclass<RefCounted, DebugRenderer>(engine, "RefCounted", "DebugRenderer");

    MemberCollection members;
    CollectMembers_DebugRenderer(members);
    RegisterMembers(engine, "DebugRenderer", members);

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

    MemberCollection members;
    CollectMembers_DebugTriangle(members);
    RegisterMembers(engine, "DebugTriangle", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_DebugTriangle
        REGISTER_CLASS_MANUAL_PART_DebugTriangle();
    #endif

    // DebugTriangle& DebugTriangle::operator =(const DebugTriangle&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DebugTriangle>(engine, "DebugTriangle");
}

// struct Decal | File: ../Graphics/DecalSet.h
static void Register_Decal(asIScriptEngine* engine)
{
    // Decal::~Decal() | Implicitly-declared
    engine->RegisterObjectBehaviour("Decal", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Decal), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Decal(members);
    RegisterMembers(engine, "Decal", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Decal
        REGISTER_CLASS_MANUAL_PART_Decal();
    #endif

    // Decal& Decal::operator =(const Decal&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Decal>(engine, "Decal");
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

    RegisterSubclass<Drawable, DecalSet>(engine, "Drawable", "DecalSet");
    RegisterSubclass<Component, DecalSet>(engine, "Component", "DecalSet");
    RegisterSubclass<Animatable, DecalSet>(engine, "Animatable", "DecalSet");
    RegisterSubclass<Serializable, DecalSet>(engine, "Serializable", "DecalSet");
    RegisterSubclass<Object, DecalSet>(engine, "Object", "DecalSet");
    RegisterSubclass<RefCounted, DecalSet>(engine, "RefCounted", "DecalSet");

    MemberCollection members;
    CollectMembers_DecalSet(members);
    RegisterMembers(engine, "DecalSet", members);

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

    MemberCollection members;
    CollectMembers_DecalVertex(members);
    RegisterMembers(engine, "DecalVertex", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_DecalVertex
        REGISTER_CLASS_MANUAL_PART_DecalVertex();
    #endif

    // DecalVertex& DecalVertex::operator =(const DecalVertex&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DecalVertex>(engine, "DecalVertex");
}

// struct DepthValue | File: ../Graphics/OcclusionBuffer.h
static void Register_DepthValue(asIScriptEngine* engine)
{
    MemberCollection members;
    CollectMembers_DepthValue(members);
    RegisterMembers(engine, "DepthValue", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_DepthValue
        REGISTER_CLASS_MANUAL_PART_DepthValue();
    #endif

    // DepthValue& DepthValue::operator =(const DepthValue&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DepthValue>(engine, "DepthValue");
}

// class Deserializer | File: ../IO/Deserializer.h
static void Register_Deserializer(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("Deserializer", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("Deserializer", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_Deserializer(members);
    RegisterMembers(engine, "Deserializer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Deserializer
        REGISTER_CLASS_MANUAL_PART_Deserializer();
    #endif

    // Deserializer& Deserializer::operator =(const Deserializer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Deserializer>(engine, "Deserializer");
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

    MemberCollection members;
    CollectMembers_DirtyBits(members);
    RegisterMembers(engine, "DirtyBits", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_DirtyBits
        REGISTER_CLASS_MANUAL_PART_DirtyBits();
    #endif

    // DirtyBits& DirtyBits::operator =(const DirtyBits&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DirtyBits>(engine, "DirtyBits");
}

// class Drawable | File: ../Graphics/Drawable.h
static void Register_Drawable(asIScriptEngine* engine)
{
    RegisterSubclass<Component, Drawable>(engine, "Component", "Drawable");
    RegisterSubclass<Animatable, Drawable>(engine, "Animatable", "Drawable");
    RegisterSubclass<Serializable, Drawable>(engine, "Serializable", "Drawable");
    RegisterSubclass<Object, Drawable>(engine, "Object", "Drawable");
    RegisterSubclass<RefCounted, Drawable>(engine, "RefCounted", "Drawable");

    MemberCollection members;
    CollectMembers_Drawable(members);
    RegisterMembers(engine, "Drawable", members);

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

    RegisterSubclass<Menu, DropDownList>(engine, "Menu", "DropDownList");
    RegisterSubclass<Button, DropDownList>(engine, "Button", "DropDownList");
    RegisterSubclass<BorderImage, DropDownList>(engine, "BorderImage", "DropDownList");
    RegisterSubclass<UIElement, DropDownList>(engine, "UIElement", "DropDownList");
    RegisterSubclass<Animatable, DropDownList>(engine, "Animatable", "DropDownList");
    RegisterSubclass<Serializable, DropDownList>(engine, "Serializable", "DropDownList");
    RegisterSubclass<Object, DropDownList>(engine, "Object", "DropDownList");
    RegisterSubclass<RefCounted, DropDownList>(engine, "RefCounted", "DropDownList");

    MemberCollection members;
    CollectMembers_DropDownList(members);
    RegisterMembers(engine, "DropDownList", members);

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

    RegisterSubclass<Object, Engine>(engine, "Object", "Engine");
    RegisterSubclass<RefCounted, Engine>(engine, "RefCounted", "Engine");

    MemberCollection members;
    CollectMembers_Engine(members);
    RegisterMembers(engine, "Engine", members);

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

    RegisterSubclass<Profiler, EventProfiler>(engine, "Profiler", "EventProfiler");
    RegisterSubclass<Object, EventProfiler>(engine, "Object", "EventProfiler");
    RegisterSubclass<RefCounted, EventProfiler>(engine, "RefCounted", "EventProfiler");

    MemberCollection members;
    CollectMembers_EventProfiler(members);
    RegisterMembers(engine, "EventProfiler", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_EventProfiler
        REGISTER_CLASS_MANUAL_PART_EventProfiler();
    #endif
}

// class EventReceiverGroup | File: ../Core/Context.h
static void Register_EventReceiverGroup(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, EventReceiverGroup>(engine, "RefCounted", "EventReceiverGroup");

    MemberCollection members;
    CollectMembers_EventReceiverGroup(members);
    RegisterMembers(engine, "EventReceiverGroup", members);

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

// File::File(Context* context, const String& fileName, FileMode mode = FILE_READ)
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
    // File::File(Context* context, const String& fileName, FileMode mode = FILE_READ)
    engine->RegisterObjectBehaviour("File", asBEHAVE_FACTORY, "File@+ f(const String&in, FileMode = FILE_READ)", AS_FUNCTION(File_File_Context_String_FileMode) , AS_CALL_CDECL);
    // File::File(Context* context, PackageFile* package, const String& fileName)
    engine->RegisterObjectBehaviour("File", asBEHAVE_FACTORY, "File@+ f(PackageFile@+, const String&in)", AS_FUNCTION(File_File_Context_PackageFile_String) , AS_CALL_CDECL);

    RegisterSubclass<Object, File>(engine, "Object", "File");
    RegisterSubclass<RefCounted, File>(engine, "RefCounted", "File");
    RegisterSubclass<AbstractFile, File>(engine, "AbstractFile", "File");
    RegisterSubclass<Deserializer, File>(engine, "Deserializer", "File");
    RegisterSubclass<Serializer, File>(engine, "Serializer", "File");

    MemberCollection members;
    CollectMembers_File(members);
    RegisterMembers(engine, "File", members);

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

    RegisterSubclass<Object, FileSelector>(engine, "Object", "FileSelector");
    RegisterSubclass<RefCounted, FileSelector>(engine, "RefCounted", "FileSelector");

    MemberCollection members;
    CollectMembers_FileSelector(members);
    RegisterMembers(engine, "FileSelector", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_FileSelector
        REGISTER_CLASS_MANUAL_PART_FileSelector();
    #endif
}

// struct FileSelectorEntry | File: ../UI/FileSelector.h
static void Register_FileSelectorEntry(asIScriptEngine* engine)
{
    // FileSelectorEntry::~FileSelectorEntry() | Implicitly-declared
    engine->RegisterObjectBehaviour("FileSelectorEntry", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(FileSelectorEntry), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_FileSelectorEntry(members);
    RegisterMembers(engine, "FileSelectorEntry", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_FileSelectorEntry
        REGISTER_CLASS_MANUAL_PART_FileSelectorEntry();
    #endif

    // FileSelectorEntry& FileSelectorEntry::operator =(const FileSelectorEntry&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<FileSelectorEntry>(engine, "FileSelectorEntry");
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

    RegisterSubclass<Object, FileSystem>(engine, "Object", "FileSystem");
    RegisterSubclass<RefCounted, FileSystem>(engine, "RefCounted", "FileSystem");

    MemberCollection members;
    CollectMembers_FileSystem(members);
    RegisterMembers(engine, "FileSystem", members);

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

    RegisterSubclass<Object, FileWatcher>(engine, "Object", "FileWatcher");
    RegisterSubclass<RefCounted, FileWatcher>(engine, "RefCounted", "FileWatcher");

    MemberCollection members;
    CollectMembers_FileWatcher(members);
    RegisterMembers(engine, "FileWatcher", members);

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

    MemberCollection members;
    CollectMembers_FocusParameters(members);
    RegisterMembers(engine, "FocusParameters", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_FocusParameters
        REGISTER_CLASS_MANUAL_PART_FocusParameters();
    #endif

    // FocusParameters& FocusParameters::operator =(const FocusParameters&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<FocusParameters>(engine, "FocusParameters");
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

    RegisterSubclass<Resource, Font>(engine, "Resource", "Font");
    RegisterSubclass<Object, Font>(engine, "Object", "Font");
    RegisterSubclass<RefCounted, Font>(engine, "RefCounted", "Font");

    MemberCollection members;
    CollectMembers_Font(members);
    RegisterMembers(engine, "Font", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Font
        REGISTER_CLASS_MANUAL_PART_Font();
    #endif
}

// class FontFace | File: ../UI/FontFace.h
static void Register_FontFace(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, FontFace>(engine, "RefCounted", "FontFace");

    MemberCollection members;
    CollectMembers_FontFace(members);
    RegisterMembers(engine, "FontFace", members);

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

    RegisterSubclass<FontFace, FontFaceBitmap>(engine, "FontFace", "FontFaceBitmap");
    RegisterSubclass<RefCounted, FontFaceBitmap>(engine, "RefCounted", "FontFaceBitmap");

    MemberCollection members;
    CollectMembers_FontFaceBitmap(members);
    RegisterMembers(engine, "FontFaceBitmap", members);

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

    RegisterSubclass<FontFace, FontFaceFreeType>(engine, "FontFace", "FontFaceFreeType");
    RegisterSubclass<RefCounted, FontFaceFreeType>(engine, "RefCounted", "FontFaceFreeType");

    MemberCollection members;
    CollectMembers_FontFaceFreeType(members);
    RegisterMembers(engine, "FontFaceFreeType", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_FontFaceFreeType
        REGISTER_CLASS_MANUAL_PART_FontFaceFreeType();
    #endif
}

// struct FontGlyph | File: ../UI/FontFace.h
static void Register_FontGlyph(asIScriptEngine* engine)
{
    // FontGlyph::~FontGlyph() | Implicitly-declared
    engine->RegisterObjectBehaviour("FontGlyph", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(FontGlyph), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_FontGlyph(members);
    RegisterMembers(engine, "FontGlyph", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_FontGlyph
        REGISTER_CLASS_MANUAL_PART_FontGlyph();
    #endif

    // FontGlyph& FontGlyph::operator =(const FontGlyph&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<FontGlyph>(engine, "FontGlyph");
}

// struct FrameInfo | File: ../Graphics/Drawable.h
static void Register_FrameInfo(asIScriptEngine* engine)
{
    // FrameInfo::~FrameInfo() | Implicitly-declared
    engine->RegisterObjectBehaviour("FrameInfo", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(FrameInfo), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_FrameInfo(members);
    RegisterMembers(engine, "FrameInfo", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_FrameInfo
        REGISTER_CLASS_MANUAL_PART_FrameInfo();
    #endif

    // FrameInfo& FrameInfo::operator =(const FrameInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<FrameInfo>(engine, "FrameInfo");
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

    MemberCollection members;
    CollectMembers_Frustum(members);
    RegisterMembers(engine, "Frustum", members);

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

    MemberCollection members;
    CollectMembers_GPUObject(members);
    RegisterMembers(engine, "GPUObject", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_GPUObject
        REGISTER_CLASS_MANUAL_PART_GPUObject();
    #endif

    // GPUObject& GPUObject::operator =(const GPUObject&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<GPUObject>(engine, "GPUObject");
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

    RegisterSubclass<Object, Geometry>(engine, "Object", "Geometry");
    RegisterSubclass<RefCounted, Geometry>(engine, "RefCounted", "Geometry");

    MemberCollection members;
    CollectMembers_Geometry(members);
    RegisterMembers(engine, "Geometry", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Geometry
        REGISTER_CLASS_MANUAL_PART_Geometry();
    #endif
}

// struct GeometryDesc | File: ../Graphics/Model.h
static void Register_GeometryDesc(asIScriptEngine* engine)
{
    // GeometryDesc::~GeometryDesc() | Implicitly-declared
    engine->RegisterObjectBehaviour("GeometryDesc", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(GeometryDesc), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_GeometryDesc(members);
    RegisterMembers(engine, "GeometryDesc", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_GeometryDesc
        REGISTER_CLASS_MANUAL_PART_GeometryDesc();
    #endif

    // GeometryDesc& GeometryDesc::operator =(const GeometryDesc&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<GeometryDesc>(engine, "GeometryDesc");
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

    RegisterSubclass<Object, Graphics>(engine, "Object", "Graphics");
    RegisterSubclass<RefCounted, Graphics>(engine, "RefCounted", "Graphics");

    MemberCollection members;
    CollectMembers_Graphics(members);
    RegisterMembers(engine, "Graphics", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Graphics
        REGISTER_CLASS_MANUAL_PART_Graphics();
    #endif
}

// class HashBase | File: ../Container/HashBase.h
static void Register_HashBase(asIScriptEngine* engine)
{
    // HashBase::~HashBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("HashBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(HashBase), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_HashBase(members);
    RegisterMembers(engine, "HashBase", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_HashBase
        REGISTER_CLASS_MANUAL_PART_HashBase();
    #endif

    // HashBase& HashBase::operator =(const HashBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<HashBase>(engine, "HashBase");
}

// struct HashIteratorBase | File: ../Container/HashBase.h
static void Register_HashIteratorBase(asIScriptEngine* engine)
{
    // explicit HashIteratorBase::HashIteratorBase(HashNodeBase* ptr)
    // Error: type "HashNodeBase*" can not automatically bind

    // HashIteratorBase::~HashIteratorBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("HashIteratorBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(HashIteratorBase), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_HashIteratorBase(members);
    RegisterMembers(engine, "HashIteratorBase", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_HashIteratorBase
        REGISTER_CLASS_MANUAL_PART_HashIteratorBase();
    #endif

    // HashIteratorBase& HashIteratorBase::operator =(const HashIteratorBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<HashIteratorBase>(engine, "HashIteratorBase");
}

// struct HashNodeBase | File: ../Container/HashBase.h
static void Register_HashNodeBase(asIScriptEngine* engine)
{
    // HashNodeBase::~HashNodeBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("HashNodeBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(HashNodeBase), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_HashNodeBase(members);
    RegisterMembers(engine, "HashNodeBase", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_HashNodeBase
        REGISTER_CLASS_MANUAL_PART_HashNodeBase();
    #endif

    // HashNodeBase& HashNodeBase::operator =(const HashNodeBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<HashNodeBase>(engine, "HashNodeBase");
}

// class HiresTimer | File: ../Core/Timer.h
static void Register_HiresTimer(asIScriptEngine* engine)
{
    // HiresTimer::~HiresTimer() | Implicitly-declared
    engine->RegisterObjectBehaviour("HiresTimer", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(HiresTimer), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_HiresTimer(members);
    RegisterMembers(engine, "HiresTimer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_HiresTimer
        REGISTER_CLASS_MANUAL_PART_HiresTimer();
    #endif

    // HiresTimer& HiresTimer::operator =(const HiresTimer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<HiresTimer>(engine, "HiresTimer");
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

    RegisterSubclass<Resource, Image>(engine, "Resource", "Image");
    RegisterSubclass<Object, Image>(engine, "Object", "Image");
    RegisterSubclass<RefCounted, Image>(engine, "RefCounted", "Image");

    MemberCollection members;
    CollectMembers_Image(members);
    RegisterMembers(engine, "Image", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Image
        REGISTER_CLASS_MANUAL_PART_Image();
    #endif
}

// explicit IndexBuffer::IndexBuffer(Context* context, bool forceHeadless = false)
static IndexBuffer* IndexBuffer_IndexBuffer_Context_bool(bool forceHeadless)
{
    Context* context = GetScriptContext();
    return new IndexBuffer(context, forceHeadless);
}

// class IndexBuffer | File: ../Graphics/IndexBuffer.h
static void Register_IndexBuffer(asIScriptEngine* engine)
{
    // explicit IndexBuffer::IndexBuffer(Context* context, bool forceHeadless = false)
    engine->RegisterObjectBehaviour("IndexBuffer", asBEHAVE_FACTORY, "IndexBuffer@+ f(bool = false)", AS_FUNCTION(IndexBuffer_IndexBuffer_Context_bool) , AS_CALL_CDECL);

    RegisterSubclass<Object, IndexBuffer>(engine, "Object", "IndexBuffer");
    RegisterSubclass<RefCounted, IndexBuffer>(engine, "RefCounted", "IndexBuffer");

    MemberCollection members;
    CollectMembers_IndexBuffer(members);
    RegisterMembers(engine, "IndexBuffer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_IndexBuffer
        REGISTER_CLASS_MANUAL_PART_IndexBuffer();
    #endif
}

// struct IndexBufferDesc | File: ../Graphics/Model.h
static void Register_IndexBufferDesc(asIScriptEngine* engine)
{
    // IndexBufferDesc::~IndexBufferDesc() | Implicitly-declared
    engine->RegisterObjectBehaviour("IndexBufferDesc", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(IndexBufferDesc), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_IndexBufferDesc(members);
    RegisterMembers(engine, "IndexBufferDesc", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_IndexBufferDesc
        REGISTER_CLASS_MANUAL_PART_IndexBufferDesc();
    #endif

    // IndexBufferDesc& IndexBufferDesc::operator =(const IndexBufferDesc&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<IndexBufferDesc>(engine, "IndexBufferDesc");
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

    RegisterSubclass<Object, Input>(engine, "Object", "Input");
    RegisterSubclass<RefCounted, Input>(engine, "RefCounted", "Input");

    MemberCollection members;
    CollectMembers_Input(members);
    RegisterMembers(engine, "Input", members);

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

    MemberCollection members;
    CollectMembers_InstanceData(members);
    RegisterMembers(engine, "InstanceData", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_InstanceData
        REGISTER_CLASS_MANUAL_PART_InstanceData();
    #endif

    // InstanceData& InstanceData::operator =(const InstanceData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<InstanceData>(engine, "InstanceData");
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

    MemberCollection members;
    CollectMembers_IntRect(members);
    RegisterMembers(engine, "IntRect", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_IntRect
        REGISTER_CLASS_MANUAL_PART_IntRect();
    #endif

    // IntRect& IntRect::operator =(const IntRect&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<IntRect>(engine, "IntRect");
}

// IntVector2::IntVector2(int x, int y) noexcept
static void IntVector2_IntVector2_int_int(IntVector2* ptr, int x, int y)
{
    new(ptr) IntVector2(x, y);
}

// IntVector2::IntVector2(const IntVector2& rhs) noexcept = default
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
    // IntVector2::IntVector2(const IntVector2& rhs) noexcept = default
    engine->RegisterObjectBehaviour("IntVector2", asBEHAVE_CONSTRUCT, "void f(const IntVector2&in)", AS_FUNCTION_OBJFIRST(IntVector2_IntVector2_IntVector2), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_IntVector2(members);
    RegisterMembers(engine, "IntVector2", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_IntVector2
        REGISTER_CLASS_MANUAL_PART_IntVector2();
    #endif
}

// IntVector3::IntVector3(int x, int y, int z) noexcept
static void IntVector3_IntVector3_int_int_int(IntVector3* ptr, int x, int y, int z)
{
    new(ptr) IntVector3(x, y, z);
}

// IntVector3::IntVector3(const IntVector3& rhs) noexcept = default
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
    // IntVector3::IntVector3(const IntVector3& rhs) noexcept = default
    engine->RegisterObjectBehaviour("IntVector3", asBEHAVE_CONSTRUCT, "void f(const IntVector3&in)", AS_FUNCTION_OBJFIRST(IntVector3_IntVector3_IntVector3), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_IntVector3(members);
    RegisterMembers(engine, "IntVector3", members);

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

    RegisterSubclass<Resource, JSONFile>(engine, "Resource", "JSONFile");
    RegisterSubclass<Object, JSONFile>(engine, "Object", "JSONFile");
    RegisterSubclass<RefCounted, JSONFile>(engine, "RefCounted", "JSONFile");

    MemberCollection members;
    CollectMembers_JSONFile(members);
    RegisterMembers(engine, "JSONFile", members);

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

    MemberCollection members;
    CollectMembers_JSONValue(members);
    RegisterMembers(engine, "JSONValue", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_JSONValue
        REGISTER_CLASS_MANUAL_PART_JSONValue();
    #endif
}

// struct JoystickState | File: ../Input/Input.h
static void Register_JoystickState(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("JoystickState", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("JoystickState", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_JoystickState(members);
    RegisterMembers(engine, "JoystickState", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_JoystickState
        REGISTER_CLASS_MANUAL_PART_JoystickState();
    #endif

    // JoystickState& JoystickState::operator =(const JoystickState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<JoystickState>(engine, "JoystickState");
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

    RegisterSubclass<Drawable, Light>(engine, "Drawable", "Light");
    RegisterSubclass<Component, Light>(engine, "Component", "Light");
    RegisterSubclass<Animatable, Light>(engine, "Animatable", "Light");
    RegisterSubclass<Serializable, Light>(engine, "Serializable", "Light");
    RegisterSubclass<Object, Light>(engine, "Object", "Light");
    RegisterSubclass<RefCounted, Light>(engine, "RefCounted", "Light");

    MemberCollection members;
    CollectMembers_Light(members);
    RegisterMembers(engine, "Light", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Light
        REGISTER_CLASS_MANUAL_PART_Light();
    #endif
}

// struct LightBatchQueue | File: ../Graphics/Batch.h
static void Register_LightBatchQueue(asIScriptEngine* engine)
{
    // LightBatchQueue::~LightBatchQueue() | Implicitly-declared
    engine->RegisterObjectBehaviour("LightBatchQueue", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(LightBatchQueue), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_LightBatchQueue(members);
    RegisterMembers(engine, "LightBatchQueue", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_LightBatchQueue
        REGISTER_CLASS_MANUAL_PART_LightBatchQueue();
    #endif

    // LightBatchQueue& LightBatchQueue::operator =(const LightBatchQueue&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<LightBatchQueue>(engine, "LightBatchQueue");
}

// struct LightQueryResult | File: ../Graphics/View.h
static void Register_LightQueryResult(asIScriptEngine* engine)
{
    // LightQueryResult::~LightQueryResult() | Implicitly-declared
    engine->RegisterObjectBehaviour("LightQueryResult", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(LightQueryResult), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_LightQueryResult(members);
    RegisterMembers(engine, "LightQueryResult", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_LightQueryResult
        REGISTER_CLASS_MANUAL_PART_LightQueryResult();
    #endif

    // LightQueryResult& LightQueryResult::operator =(const LightQueryResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<LightQueryResult>(engine, "LightQueryResult");
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

    RegisterSubclass<BorderImage, LineEdit>(engine, "BorderImage", "LineEdit");
    RegisterSubclass<UIElement, LineEdit>(engine, "UIElement", "LineEdit");
    RegisterSubclass<Animatable, LineEdit>(engine, "Animatable", "LineEdit");
    RegisterSubclass<Serializable, LineEdit>(engine, "Serializable", "LineEdit");
    RegisterSubclass<Object, LineEdit>(engine, "Object", "LineEdit");
    RegisterSubclass<RefCounted, LineEdit>(engine, "RefCounted", "LineEdit");

    MemberCollection members;
    CollectMembers_LineEdit(members);
    RegisterMembers(engine, "LineEdit", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_LineEdit
        REGISTER_CLASS_MANUAL_PART_LineEdit();
    #endif
}

// struct LinkedListNode | File: ../Container/LinkedList.h
static void Register_LinkedListNode(asIScriptEngine* engine)
{
    // LinkedListNode::~LinkedListNode() | Implicitly-declared
    engine->RegisterObjectBehaviour("LinkedListNode", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(LinkedListNode), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_LinkedListNode(members);
    RegisterMembers(engine, "LinkedListNode", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_LinkedListNode
        REGISTER_CLASS_MANUAL_PART_LinkedListNode();
    #endif

    // LinkedListNode& LinkedListNode::operator =(const LinkedListNode&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<LinkedListNode>(engine, "LinkedListNode");
}

// class ListBase | File: ../Container/ListBase.h
static void Register_ListBase(asIScriptEngine* engine)
{
    // ListBase::~ListBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("ListBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ListBase), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ListBase(members);
    RegisterMembers(engine, "ListBase", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ListBase
        REGISTER_CLASS_MANUAL_PART_ListBase();
    #endif

    // ListBase& ListBase::operator =(const ListBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ListBase>(engine, "ListBase");
}

// struct ListIteratorBase | File: ../Container/ListBase.h
static void Register_ListIteratorBase(asIScriptEngine* engine)
{
    // explicit ListIteratorBase::ListIteratorBase(ListNodeBase* ptr)
    // Error: type "ListNodeBase*" can not automatically bind

    // ListIteratorBase::~ListIteratorBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("ListIteratorBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ListIteratorBase), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ListIteratorBase(members);
    RegisterMembers(engine, "ListIteratorBase", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ListIteratorBase
        REGISTER_CLASS_MANUAL_PART_ListIteratorBase();
    #endif

    // ListIteratorBase& ListIteratorBase::operator =(const ListIteratorBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ListIteratorBase>(engine, "ListIteratorBase");
}

// struct ListNodeBase | File: ../Container/ListBase.h
static void Register_ListNodeBase(asIScriptEngine* engine)
{
    // ListNodeBase::~ListNodeBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("ListNodeBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ListNodeBase), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ListNodeBase(members);
    RegisterMembers(engine, "ListNodeBase", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ListNodeBase
        REGISTER_CLASS_MANUAL_PART_ListNodeBase();
    #endif

    // ListNodeBase& ListNodeBase::operator =(const ListNodeBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ListNodeBase>(engine, "ListNodeBase");
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

    RegisterSubclass<ScrollView, ListView>(engine, "ScrollView", "ListView");
    RegisterSubclass<UIElement, ListView>(engine, "UIElement", "ListView");
    RegisterSubclass<Animatable, ListView>(engine, "Animatable", "ListView");
    RegisterSubclass<Serializable, ListView>(engine, "Serializable", "ListView");
    RegisterSubclass<Object, ListView>(engine, "Object", "ListView");
    RegisterSubclass<RefCounted, ListView>(engine, "RefCounted", "ListView");

    MemberCollection members;
    CollectMembers_ListView(members);
    RegisterMembers(engine, "ListView", members);

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

    RegisterSubclass<Object, Localization>(engine, "Object", "Localization");
    RegisterSubclass<RefCounted, Localization>(engine, "RefCounted", "Localization");

    MemberCollection members;
    CollectMembers_Localization(members);
    RegisterMembers(engine, "Localization", members);

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

    RegisterSubclass<Object, Log>(engine, "Object", "Log");
    RegisterSubclass<RefCounted, Log>(engine, "RefCounted", "Log");

    MemberCollection members;
    CollectMembers_Log(members);
    RegisterMembers(engine, "Log", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Log
        REGISTER_CLASS_MANUAL_PART_Log();
    #endif
}

// class LogicComponent | File: ../Scene/LogicComponent.h
static void Register_LogicComponent(asIScriptEngine* engine)
{
    RegisterSubclass<Component, LogicComponent>(engine, "Component", "LogicComponent");
    RegisterSubclass<Animatable, LogicComponent>(engine, "Animatable", "LogicComponent");
    RegisterSubclass<Serializable, LogicComponent>(engine, "Serializable", "LogicComponent");
    RegisterSubclass<Object, LogicComponent>(engine, "Object", "LogicComponent");
    RegisterSubclass<RefCounted, LogicComponent>(engine, "RefCounted", "LogicComponent");

    MemberCollection members;
    CollectMembers_LogicComponent(members);
    RegisterMembers(engine, "LogicComponent", members);

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

    RegisterSubclass<Resource, Material>(engine, "Resource", "Material");
    RegisterSubclass<Object, Material>(engine, "Object", "Material");
    RegisterSubclass<RefCounted, Material>(engine, "RefCounted", "Material");

    MemberCollection members;
    CollectMembers_Material(members);
    RegisterMembers(engine, "Material", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Material
        REGISTER_CLASS_MANUAL_PART_Material();
    #endif
}

// struct MaterialShaderParameter | File: ../Graphics/Material.h
static void Register_MaterialShaderParameter(asIScriptEngine* engine)
{
    // MaterialShaderParameter::~MaterialShaderParameter() | Implicitly-declared
    engine->RegisterObjectBehaviour("MaterialShaderParameter", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(MaterialShaderParameter), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_MaterialShaderParameter(members);
    RegisterMembers(engine, "MaterialShaderParameter", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_MaterialShaderParameter
        REGISTER_CLASS_MANUAL_PART_MaterialShaderParameter();
    #endif

    // MaterialShaderParameter& MaterialShaderParameter::operator =(const MaterialShaderParameter&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<MaterialShaderParameter>(engine, "MaterialShaderParameter");
}

// Matrix2::Matrix2(const Matrix2& matrix) noexcept = default
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

    // Matrix2::Matrix2(const Matrix2& matrix) noexcept = default
    engine->RegisterObjectBehaviour("Matrix2", asBEHAVE_CONSTRUCT, "void f(const Matrix2&in)", AS_FUNCTION_OBJFIRST(Matrix2_Matrix2_Matrix2), AS_CALL_CDECL_OBJFIRST);
    // Matrix2::Matrix2(float v00, float v01, float v10, float v11) noexcept
    engine->RegisterObjectBehaviour("Matrix2", asBEHAVE_CONSTRUCT, "void f(float, float, float, float)", AS_FUNCTION_OBJFIRST(Matrix2_Matrix2_float_float_float_float), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Matrix2(members);
    RegisterMembers(engine, "Matrix2", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Matrix2
        REGISTER_CLASS_MANUAL_PART_Matrix2();
    #endif
}

// Matrix3::Matrix3(const Matrix3& matrix) noexcept = default
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

    // Matrix3::Matrix3(const Matrix3& matrix) noexcept = default
    engine->RegisterObjectBehaviour("Matrix3", asBEHAVE_CONSTRUCT, "void f(const Matrix3&in)", AS_FUNCTION_OBJFIRST(Matrix3_Matrix3_Matrix3), AS_CALL_CDECL_OBJFIRST);
    // Matrix3::Matrix3(float v00, float v01, float v02, float v10, float v11, float v12, float v20, float v21, float v22) noexcept
    engine->RegisterObjectBehaviour("Matrix3", asBEHAVE_CONSTRUCT, "void f(float, float, float, float, float, float, float, float, float)", AS_FUNCTION_OBJFIRST(Matrix3_Matrix3_float_float_float_float_float_float_float_float_float), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Matrix3(members);
    RegisterMembers(engine, "Matrix3", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Matrix3
        REGISTER_CLASS_MANUAL_PART_Matrix3();
    #endif
}

// Matrix3x4::Matrix3x4(const Matrix3x4& matrix) noexcept = default
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

    // Matrix3x4::Matrix3x4(const Matrix3x4& matrix) noexcept = default
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

    MemberCollection members;
    CollectMembers_Matrix3x4(members);
    RegisterMembers(engine, "Matrix3x4", members);

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

    MemberCollection members;
    CollectMembers_Matrix4(members);
    RegisterMembers(engine, "Matrix4", members);

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

    RegisterSubclass<Button, Menu>(engine, "Button", "Menu");
    RegisterSubclass<BorderImage, Menu>(engine, "BorderImage", "Menu");
    RegisterSubclass<UIElement, Menu>(engine, "UIElement", "Menu");
    RegisterSubclass<Animatable, Menu>(engine, "Animatable", "Menu");
    RegisterSubclass<Serializable, Menu>(engine, "Serializable", "Menu");
    RegisterSubclass<Object, Menu>(engine, "Object", "Menu");
    RegisterSubclass<RefCounted, Menu>(engine, "RefCounted", "Menu");

    MemberCollection members;
    CollectMembers_Menu(members);
    RegisterMembers(engine, "Menu", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Menu
        REGISTER_CLASS_MANUAL_PART_Menu();
    #endif
}

// explicit MessageBox::MessageBox(Context* context, const String& messageString = String::EMPTY, const String& titleString = String::EMPTY, XMLFile* layoutFile = nullptr, XMLFile* styleFile = nullptr)
static MessageBox* MessageBox_MessageBox_Context_String_String_XMLFile_XMLFile(const String& messageString, const String& titleString, XMLFile* layoutFile, XMLFile* styleFile)
{
    Context* context = GetScriptContext();
    return new MessageBox(context, messageString, titleString, layoutFile, styleFile);
}

// class MessageBox | File: ../UI/MessageBox.h
static void Register_MessageBox(asIScriptEngine* engine)
{
    // explicit MessageBox::MessageBox(Context* context, const String& messageString = String::EMPTY, const String& titleString = String::EMPTY, XMLFile* layoutFile = nullptr, XMLFile* styleFile = nullptr)
    engine->RegisterObjectBehaviour("MessageBox", asBEHAVE_FACTORY, "MessageBox@+ f(const String&in = String::EMPTY, const String&in = String::EMPTY, XMLFile@+ = null, XMLFile@+ = null)", AS_FUNCTION(MessageBox_MessageBox_Context_String_String_XMLFile_XMLFile) , AS_CALL_CDECL);

    RegisterSubclass<Object, MessageBox>(engine, "Object", "MessageBox");
    RegisterSubclass<RefCounted, MessageBox>(engine, "RefCounted", "MessageBox");

    MemberCollection members;
    CollectMembers_MessageBox(members);
    RegisterMembers(engine, "MessageBox", members);

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

    RegisterSubclass<ResourceWithMetadata, Model>(engine, "ResourceWithMetadata", "Model");
    RegisterSubclass<Resource, Model>(engine, "Resource", "Model");
    RegisterSubclass<Object, Model>(engine, "Object", "Model");
    RegisterSubclass<RefCounted, Model>(engine, "RefCounted", "Model");

    MemberCollection members;
    CollectMembers_Model(members);
    RegisterMembers(engine, "Model", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Model
        REGISTER_CLASS_MANUAL_PART_Model();
    #endif
}

// struct ModelMorph | File: ../Graphics/Model.h
static void Register_ModelMorph(asIScriptEngine* engine)
{
    // ModelMorph::~ModelMorph() | Implicitly-declared
    engine->RegisterObjectBehaviour("ModelMorph", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ModelMorph), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ModelMorph(members);
    RegisterMembers(engine, "ModelMorph", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ModelMorph
        REGISTER_CLASS_MANUAL_PART_ModelMorph();
    #endif

    // ModelMorph& ModelMorph::operator =(const ModelMorph&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ModelMorph>(engine, "ModelMorph");
}

// class Mutex | File: ../Core/Mutex.h
static void Register_Mutex(asIScriptEngine* engine)
{
    // Mutex::~Mutex()
    engine->RegisterObjectBehaviour("Mutex", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Mutex), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Mutex(members);
    RegisterMembers(engine, "Mutex", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Mutex
        REGISTER_CLASS_MANUAL_PART_Mutex();
    #endif

    // Mutex& Mutex::operator =(const Mutex&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Mutex>(engine, "Mutex");
}

// explicit MutexLock::MutexLock(Mutex& mutex)
static void MutexLock_MutexLock_Mutex(MutexLock* ptr, Mutex& mutex)
{
    new(ptr) MutexLock(mutex);
}

// class MutexLock | File: ../Core/Mutex.h
static void Register_MutexLock(asIScriptEngine* engine)
{
    // MutexLock::MutexLock(const MutexLock& rhs) = delete
    // Not registered because deleted

    // explicit MutexLock::MutexLock(Mutex& mutex)
    engine->RegisterObjectBehaviour("MutexLock", asBEHAVE_CONSTRUCT, "void f(Mutex&)", AS_FUNCTION_OBJFIRST(MutexLock_MutexLock_Mutex), AS_CALL_CDECL_OBJFIRST);

    // MutexLock::~MutexLock()
    engine->RegisterObjectBehaviour("MutexLock", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(MutexLock), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_MutexLock(members);
    RegisterMembers(engine, "MutexLock", members);

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

    RegisterSubclass<Object, NamedPipe>(engine, "Object", "NamedPipe");
    RegisterSubclass<RefCounted, NamedPipe>(engine, "RefCounted", "NamedPipe");
    RegisterSubclass<AbstractFile, NamedPipe>(engine, "AbstractFile", "NamedPipe");
    RegisterSubclass<Deserializer, NamedPipe>(engine, "Deserializer", "NamedPipe");
    RegisterSubclass<Serializer, NamedPipe>(engine, "Serializer", "NamedPipe");

    MemberCollection members;
    CollectMembers_NamedPipe(members);
    RegisterMembers(engine, "NamedPipe", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NamedPipe
        REGISTER_CLASS_MANUAL_PART_NamedPipe();
    #endif
}

// struct NetworkState | File: ../Scene/ReplicationState.h
static void Register_NetworkState(asIScriptEngine* engine)
{
    // NetworkState::~NetworkState() | Implicitly-declared
    engine->RegisterObjectBehaviour("NetworkState", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NetworkState), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_NetworkState(members);
    RegisterMembers(engine, "NetworkState", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NetworkState
        REGISTER_CLASS_MANUAL_PART_NetworkState();
    #endif

    // NetworkState& NetworkState::operator =(const NetworkState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NetworkState>(engine, "NetworkState");
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

    RegisterSubclass<Animatable, Node>(engine, "Animatable", "Node");
    RegisterSubclass<Serializable, Node>(engine, "Serializable", "Node");
    RegisterSubclass<Object, Node>(engine, "Object", "Node");
    RegisterSubclass<RefCounted, Node>(engine, "RefCounted", "Node");

    MemberCollection members;
    CollectMembers_Node(members);
    RegisterMembers(engine, "Node", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Node
        REGISTER_CLASS_MANUAL_PART_Node();
    #endif
}

// struct NodeImpl | File: ../Scene/Node.h
static void Register_NodeImpl(asIScriptEngine* engine)
{
    // NodeImpl::~NodeImpl() | Implicitly-declared
    engine->RegisterObjectBehaviour("NodeImpl", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NodeImpl), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_NodeImpl(members);
    RegisterMembers(engine, "NodeImpl", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NodeImpl
        REGISTER_CLASS_MANUAL_PART_NodeImpl();
    #endif

    // NodeImpl& NodeImpl::operator =(const NodeImpl&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NodeImpl>(engine, "NodeImpl");
}

// struct NodeReplicationState | File: ../Scene/ReplicationState.h
static void Register_NodeReplicationState(asIScriptEngine* engine)
{
    // NodeReplicationState::~NodeReplicationState() | Implicitly-declared
    engine->RegisterObjectBehaviour("NodeReplicationState", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NodeReplicationState), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_NodeReplicationState(members);
    RegisterMembers(engine, "NodeReplicationState", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NodeReplicationState
        REGISTER_CLASS_MANUAL_PART_NodeReplicationState();
    #endif

    // NodeReplicationState& NodeReplicationState::operator =(const NodeReplicationState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NodeReplicationState>(engine, "NodeReplicationState");
}

// class Object | File: ../Core/Object.h
static void Register_Object(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, Object>(engine, "RefCounted", "Object");

    MemberCollection members;
    CollectMembers_Object(members);
    RegisterMembers(engine, "Object", members);

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

    RegisterSubclass<Resource, ObjectAnimation>(engine, "Resource", "ObjectAnimation");
    RegisterSubclass<Object, ObjectAnimation>(engine, "Object", "ObjectAnimation");
    RegisterSubclass<RefCounted, ObjectAnimation>(engine, "RefCounted", "ObjectAnimation");

    MemberCollection members;
    CollectMembers_ObjectAnimation(members);
    RegisterMembers(engine, "ObjectAnimation", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ObjectAnimation
        REGISTER_CLASS_MANUAL_PART_ObjectAnimation();
    #endif
}

// class ObjectFactory | File: ../Core/Object.h
static void Register_ObjectFactory(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, ObjectFactory>(engine, "RefCounted", "ObjectFactory");

    MemberCollection members;
    CollectMembers_ObjectFactory(members);
    RegisterMembers(engine, "ObjectFactory", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ObjectFactory
        REGISTER_CLASS_MANUAL_PART_ObjectFactory();
    #endif
}

// struct OcclusionBatch | File: ../Graphics/OcclusionBuffer.h
static void Register_OcclusionBatch(asIScriptEngine* engine)
{
    // OcclusionBatch::~OcclusionBatch() | Implicitly-declared
    engine->RegisterObjectBehaviour("OcclusionBatch", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(OcclusionBatch), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_OcclusionBatch(members);
    RegisterMembers(engine, "OcclusionBatch", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_OcclusionBatch
        REGISTER_CLASS_MANUAL_PART_OcclusionBatch();
    #endif

    // OcclusionBatch& OcclusionBatch::operator =(const OcclusionBatch&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<OcclusionBatch>(engine, "OcclusionBatch");
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

    RegisterSubclass<Object, OcclusionBuffer>(engine, "Object", "OcclusionBuffer");
    RegisterSubclass<RefCounted, OcclusionBuffer>(engine, "RefCounted", "OcclusionBuffer");

    MemberCollection members;
    CollectMembers_OcclusionBuffer(members);
    RegisterMembers(engine, "OcclusionBuffer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_OcclusionBuffer
        REGISTER_CLASS_MANUAL_PART_OcclusionBuffer();
    #endif
}

// struct OcclusionBufferData | File: ../Graphics/OcclusionBuffer.h
static void Register_OcclusionBufferData(asIScriptEngine* engine)
{
    // OcclusionBufferData::~OcclusionBufferData() | Implicitly-declared
    engine->RegisterObjectBehaviour("OcclusionBufferData", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(OcclusionBufferData), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_OcclusionBufferData(members);
    RegisterMembers(engine, "OcclusionBufferData", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_OcclusionBufferData
        REGISTER_CLASS_MANUAL_PART_OcclusionBufferData();
    #endif

    // OcclusionBufferData& OcclusionBufferData::operator =(const OcclusionBufferData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<OcclusionBufferData>(engine, "OcclusionBufferData");
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

    RegisterSubclass<Component, Octree>(engine, "Component", "Octree");
    RegisterSubclass<Animatable, Octree>(engine, "Animatable", "Octree");
    RegisterSubclass<Serializable, Octree>(engine, "Serializable", "Octree");
    RegisterSubclass<Object, Octree>(engine, "Object", "Octree");
    RegisterSubclass<RefCounted, Octree>(engine, "RefCounted", "Octree");

    MemberCollection members;
    CollectMembers_Octree(members);
    RegisterMembers(engine, "Octree", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Octree
        REGISTER_CLASS_MANUAL_PART_Octree();
    #endif
}

// struct OctreeQueryResult | File: ../Graphics/OctreeQuery.h
static void Register_OctreeQueryResult(asIScriptEngine* engine)
{
    // OctreeQueryResult::~OctreeQueryResult() | Implicitly-declared
    engine->RegisterObjectBehaviour("OctreeQueryResult", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(OctreeQueryResult), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_OctreeQueryResult(members);
    RegisterMembers(engine, "OctreeQueryResult", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_OctreeQueryResult
        REGISTER_CLASS_MANUAL_PART_OctreeQueryResult();
    #endif

    // OctreeQueryResult& OctreeQueryResult::operator =(const OctreeQueryResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<OctreeQueryResult>(engine, "OctreeQueryResult");
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

    RegisterSubclass<SoundStream, OggVorbisSoundStream>(engine, "SoundStream", "OggVorbisSoundStream");
    RegisterSubclass<RefCounted, OggVorbisSoundStream>(engine, "RefCounted", "OggVorbisSoundStream");

    MemberCollection members;
    CollectMembers_OggVorbisSoundStream(members);
    RegisterMembers(engine, "OggVorbisSoundStream", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_OggVorbisSoundStream
        REGISTER_CLASS_MANUAL_PART_OggVorbisSoundStream();
    #endif
}

// struct PackageEntry | File: ../IO/PackageFile.h
static void Register_PackageEntry(asIScriptEngine* engine)
{
    MemberCollection members;
    CollectMembers_PackageEntry(members);
    RegisterMembers(engine, "PackageEntry", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_PackageEntry
        REGISTER_CLASS_MANUAL_PART_PackageEntry();
    #endif

    // PackageEntry& PackageEntry::operator =(const PackageEntry&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PackageEntry>(engine, "PackageEntry");
}

// explicit PackageFile::PackageFile(Context* context)
static PackageFile* PackageFile_PackageFile_Context()
{
    Context* context = GetScriptContext();
    return new PackageFile(context);
}

// PackageFile::PackageFile(Context* context, const String& fileName, unsigned startOffset = 0)
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
    // PackageFile::PackageFile(Context* context, const String& fileName, unsigned startOffset = 0)
    engine->RegisterObjectBehaviour("PackageFile", asBEHAVE_FACTORY, "PackageFile@+ f(const String&in, uint = 0)", AS_FUNCTION(PackageFile_PackageFile_Context_String_unsigned) , AS_CALL_CDECL);

    RegisterSubclass<Object, PackageFile>(engine, "Object", "PackageFile");
    RegisterSubclass<RefCounted, PackageFile>(engine, "RefCounted", "PackageFile");

    MemberCollection members;
    CollectMembers_PackageFile(members);
    RegisterMembers(engine, "PackageFile", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_PackageFile
        REGISTER_CLASS_MANUAL_PART_PackageFile();
    #endif
}

// struct Particle | File: ../Graphics/ParticleEmitter.h
static void Register_Particle(asIScriptEngine* engine)
{
    // Particle::~Particle() | Implicitly-declared
    engine->RegisterObjectBehaviour("Particle", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Particle), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Particle(members);
    RegisterMembers(engine, "Particle", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Particle
        REGISTER_CLASS_MANUAL_PART_Particle();
    #endif

    // Particle& Particle::operator =(const Particle&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Particle>(engine, "Particle");
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

    RegisterSubclass<Resource, ParticleEffect>(engine, "Resource", "ParticleEffect");
    RegisterSubclass<Object, ParticleEffect>(engine, "Object", "ParticleEffect");
    RegisterSubclass<RefCounted, ParticleEffect>(engine, "RefCounted", "ParticleEffect");

    MemberCollection members;
    CollectMembers_ParticleEffect(members);
    RegisterMembers(engine, "ParticleEffect", members);

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

    RegisterSubclass<BillboardSet, ParticleEmitter>(engine, "BillboardSet", "ParticleEmitter");
    RegisterSubclass<Drawable, ParticleEmitter>(engine, "Drawable", "ParticleEmitter");
    RegisterSubclass<Component, ParticleEmitter>(engine, "Component", "ParticleEmitter");
    RegisterSubclass<Animatable, ParticleEmitter>(engine, "Animatable", "ParticleEmitter");
    RegisterSubclass<Serializable, ParticleEmitter>(engine, "Serializable", "ParticleEmitter");
    RegisterSubclass<Object, ParticleEmitter>(engine, "Object", "ParticleEmitter");
    RegisterSubclass<RefCounted, ParticleEmitter>(engine, "RefCounted", "ParticleEmitter");

    MemberCollection members;
    CollectMembers_ParticleEmitter(members);
    RegisterMembers(engine, "ParticleEmitter", members);

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

    RegisterSubclass<RefCounted, Pass>(engine, "RefCounted", "Pass");

    MemberCollection members;
    CollectMembers_Pass(members);
    RegisterMembers(engine, "Pass", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Pass
        REGISTER_CLASS_MANUAL_PART_Pass();
    #endif
}

// struct PerThreadSceneResult | File: ../Graphics/View.h
static void Register_PerThreadSceneResult(asIScriptEngine* engine)
{
    // PerThreadSceneResult::~PerThreadSceneResult() | Implicitly-declared
    engine->RegisterObjectBehaviour("PerThreadSceneResult", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PerThreadSceneResult), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_PerThreadSceneResult(members);
    RegisterMembers(engine, "PerThreadSceneResult", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_PerThreadSceneResult
        REGISTER_CLASS_MANUAL_PART_PerThreadSceneResult();
    #endif

    // PerThreadSceneResult& PerThreadSceneResult::operator =(const PerThreadSceneResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PerThreadSceneResult>(engine, "PerThreadSceneResult");
}

// Plane::Plane(const Plane& plane) noexcept = default
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
    // Plane::Plane(const Plane& plane) noexcept = default
    engine->RegisterObjectBehaviour("Plane", asBEHAVE_CONSTRUCT, "void f(const Plane&in)", AS_FUNCTION_OBJFIRST(Plane_Plane_Plane), AS_CALL_CDECL_OBJFIRST);
    // Plane::Plane(const Vector3& v0, const Vector3& v1, const Vector3& v2) noexcept
    engine->RegisterObjectBehaviour("Plane", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(Plane_Plane_Vector3_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);
    // Plane::Plane(const Vector3& normal, const Vector3& point) noexcept
    engine->RegisterObjectBehaviour("Plane", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(Plane_Plane_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);
    // explicit Plane::Plane(const Vector4& plane) noexcept
    engine->RegisterObjectBehaviour("Plane", asBEHAVE_CONSTRUCT, "void f(const Vector4&in)", AS_FUNCTION_OBJFIRST(Plane_Plane_Vector4), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Plane(members);
    RegisterMembers(engine, "Plane", members);

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

    // Polyhedron::~Polyhedron() noexcept = default
    engine->RegisterObjectBehaviour("Polyhedron", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Polyhedron), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Polyhedron(members);
    RegisterMembers(engine, "Polyhedron", members);

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

    RegisterSubclass<Object, Profiler>(engine, "Object", "Profiler");
    RegisterSubclass<RefCounted, Profiler>(engine, "RefCounted", "Profiler");

    MemberCollection members;
    CollectMembers_Profiler(members);
    RegisterMembers(engine, "Profiler", members);

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

    RegisterSubclass<BorderImage, ProgressBar>(engine, "BorderImage", "ProgressBar");
    RegisterSubclass<UIElement, ProgressBar>(engine, "UIElement", "ProgressBar");
    RegisterSubclass<Animatable, ProgressBar>(engine, "Animatable", "ProgressBar");
    RegisterSubclass<Serializable, ProgressBar>(engine, "Serializable", "ProgressBar");
    RegisterSubclass<Object, ProgressBar>(engine, "Object", "ProgressBar");
    RegisterSubclass<RefCounted, ProgressBar>(engine, "RefCounted", "ProgressBar");

    MemberCollection members;
    CollectMembers_ProgressBar(members);
    RegisterMembers(engine, "ProgressBar", members);

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

    MemberCollection members;
    CollectMembers_Quaternion(members);
    RegisterMembers(engine, "Quaternion", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Quaternion
        REGISTER_CLASS_MANUAL_PART_Quaternion();
    #endif
}

// Ray::Ray(const Vector3& origin, const Vector3& direction) noexcept
static void Ray_Ray_Vector3_Vector3(Ray* ptr, const Vector3& origin, const Vector3& direction)
{
    new(ptr) Ray(origin, direction);
}

// Ray::Ray(const Ray& ray) noexcept = default
static void Ray_Ray_Ray(Ray* ptr, const Ray& ray)
{
    new(ptr) Ray(ray);
}

// class Ray | File: ../Math/Ray.h
static void Register_Ray(asIScriptEngine* engine)
{
    // Ray::Ray(const Vector3& origin, const Vector3& direction) noexcept
    engine->RegisterObjectBehaviour("Ray", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, const Vector3&in)", AS_FUNCTION_OBJFIRST(Ray_Ray_Vector3_Vector3), AS_CALL_CDECL_OBJFIRST);
    // Ray::Ray(const Ray& ray) noexcept = default
    engine->RegisterObjectBehaviour("Ray", asBEHAVE_CONSTRUCT, "void f(const Ray&in)", AS_FUNCTION_OBJFIRST(Ray_Ray_Ray), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Ray(members);
    RegisterMembers(engine, "Ray", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Ray
        REGISTER_CLASS_MANUAL_PART_Ray();
    #endif
}

// struct RayQueryResult | File: ../Graphics/OctreeQuery.h
static void Register_RayQueryResult(asIScriptEngine* engine)
{
    // RayQueryResult::~RayQueryResult() | Implicitly-declared
    engine->RegisterObjectBehaviour("RayQueryResult", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(RayQueryResult), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_RayQueryResult(members);
    RegisterMembers(engine, "RayQueryResult", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_RayQueryResult
        REGISTER_CLASS_MANUAL_PART_RayQueryResult();
    #endif

    // RayQueryResult& RayQueryResult::operator =(const RayQueryResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RayQueryResult>(engine, "RayQueryResult");
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

// Rect::Rect(const Rect& rect) noexcept = default
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
    // Rect::Rect(const Rect& rect) noexcept = default
    engine->RegisterObjectBehaviour("Rect", asBEHAVE_CONSTRUCT, "void f(const Rect&in)", AS_FUNCTION_OBJFIRST(Rect_Rect_Rect), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Rect(members);
    RegisterMembers(engine, "Rect", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Rect
        REGISTER_CLASS_MANUAL_PART_Rect();
    #endif
}

// struct RefCount | File: ../Container/RefCounted.h
static void Register_RefCount(asIScriptEngine* engine)
{
    // RefCount::~RefCount()
    engine->RegisterObjectBehaviour("RefCount", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(RefCount), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_RefCount(members);
    RegisterMembers(engine, "RefCount", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_RefCount
        REGISTER_CLASS_MANUAL_PART_RefCount();
    #endif

    // RefCount& RefCount::operator =(const RefCount&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RefCount>(engine, "RefCount");
}

// class RefCounted | File: ../Container/RefCounted.h
static void Register_RefCounted(asIScriptEngine* engine)
{
    // RefCounted::RefCounted(const RefCounted& rhs) = delete
    // Not registered because deleted

    MemberCollection members;
    CollectMembers_RefCounted(members);
    RegisterMembers(engine, "RefCounted", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_RefCounted
        REGISTER_CLASS_MANUAL_PART_RefCounted();
    #endif
}

// class RenderPath | File: ../Graphics/RenderPath.h
static void Register_RenderPath(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, RenderPath>(engine, "RefCounted", "RenderPath");

    MemberCollection members;
    CollectMembers_RenderPath(members);
    RegisterMembers(engine, "RenderPath", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_RenderPath
        REGISTER_CLASS_MANUAL_PART_RenderPath();
    #endif
}

// struct RenderPathCommand | File: ../Graphics/RenderPath.h
static void Register_RenderPathCommand(asIScriptEngine* engine)
{
    // RenderPathCommand::~RenderPathCommand() | Implicitly-declared
    engine->RegisterObjectBehaviour("RenderPathCommand", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(RenderPathCommand), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_RenderPathCommand(members);
    RegisterMembers(engine, "RenderPathCommand", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_RenderPathCommand
        REGISTER_CLASS_MANUAL_PART_RenderPathCommand();
    #endif

    // RenderPathCommand& RenderPathCommand::operator =(const RenderPathCommand&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RenderPathCommand>(engine, "RenderPathCommand");
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

    RegisterSubclass<RefCounted, RenderSurface>(engine, "RefCounted", "RenderSurface");

    MemberCollection members;
    CollectMembers_RenderSurface(members);
    RegisterMembers(engine, "RenderSurface", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_RenderSurface
        REGISTER_CLASS_MANUAL_PART_RenderSurface();
    #endif
}

// struct RenderTargetInfo | File: ../Graphics/RenderPath.h
static void Register_RenderTargetInfo(asIScriptEngine* engine)
{
    // RenderTargetInfo::~RenderTargetInfo() | Implicitly-declared
    engine->RegisterObjectBehaviour("RenderTargetInfo", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(RenderTargetInfo), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_RenderTargetInfo(members);
    RegisterMembers(engine, "RenderTargetInfo", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_RenderTargetInfo
        REGISTER_CLASS_MANUAL_PART_RenderTargetInfo();
    #endif

    // RenderTargetInfo& RenderTargetInfo::operator =(const RenderTargetInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RenderTargetInfo>(engine, "RenderTargetInfo");
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

    RegisterSubclass<Object, Renderer>(engine, "Object", "Renderer");
    RegisterSubclass<RefCounted, Renderer>(engine, "RefCounted", "Renderer");

    MemberCollection members;
    CollectMembers_Renderer(members);
    RegisterMembers(engine, "Renderer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Renderer
        REGISTER_CLASS_MANUAL_PART_Renderer();
    #endif
}

// struct ReplicationState | File: ../Scene/ReplicationState.h
static void Register_ReplicationState(asIScriptEngine* engine)
{
    // ReplicationState::~ReplicationState() | Implicitly-declared
    engine->RegisterObjectBehaviour("ReplicationState", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ReplicationState), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ReplicationState(members);
    RegisterMembers(engine, "ReplicationState", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ReplicationState
        REGISTER_CLASS_MANUAL_PART_ReplicationState();
    #endif

    // ReplicationState& ReplicationState::operator =(const ReplicationState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ReplicationState>(engine, "ReplicationState");
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

    RegisterSubclass<Object, Resource>(engine, "Object", "Resource");
    RegisterSubclass<RefCounted, Resource>(engine, "RefCounted", "Resource");

    MemberCollection members;
    CollectMembers_Resource(members);
    RegisterMembers(engine, "Resource", members);

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

    RegisterSubclass<Object, ResourceCache>(engine, "Object", "ResourceCache");
    RegisterSubclass<RefCounted, ResourceCache>(engine, "RefCounted", "ResourceCache");

    MemberCollection members;
    CollectMembers_ResourceCache(members);
    RegisterMembers(engine, "ResourceCache", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ResourceCache
        REGISTER_CLASS_MANUAL_PART_ResourceCache();
    #endif
}

// struct ResourceGroup | File: ../Resource/ResourceCache.h
static void Register_ResourceGroup(asIScriptEngine* engine)
{
    // ResourceGroup::~ResourceGroup() | Implicitly-declared
    engine->RegisterObjectBehaviour("ResourceGroup", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ResourceGroup), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ResourceGroup(members);
    RegisterMembers(engine, "ResourceGroup", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ResourceGroup
        REGISTER_CLASS_MANUAL_PART_ResourceGroup();
    #endif

    // ResourceGroup& ResourceGroup::operator =(const ResourceGroup&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ResourceGroup>(engine, "ResourceGroup");
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

// ResourceRef::ResourceRef(const ResourceRef& rhs) = default
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
    // ResourceRef::ResourceRef(const ResourceRef& rhs) = default
    engine->RegisterObjectBehaviour("ResourceRef", asBEHAVE_CONSTRUCT, "void f(const ResourceRef&in)", AS_FUNCTION_OBJFIRST(ResourceRef_ResourceRef_ResourceRef), AS_CALL_CDECL_OBJFIRST);

    // ResourceRef::~ResourceRef() | Implicitly-declared
    engine->RegisterObjectBehaviour("ResourceRef", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ResourceRef), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ResourceRef(members);
    RegisterMembers(engine, "ResourceRef", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ResourceRef
        REGISTER_CLASS_MANUAL_PART_ResourceRef();
    #endif

    // ResourceRef& ResourceRef::operator =(const ResourceRef&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ResourceRef>(engine, "ResourceRef");
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

    MemberCollection members;
    CollectMembers_ResourceRefList(members);
    RegisterMembers(engine, "ResourceRefList", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ResourceRefList
        REGISTER_CLASS_MANUAL_PART_ResourceRefList();
    #endif

    // ResourceRefList& ResourceRefList::operator =(const ResourceRefList&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ResourceRefList>(engine, "ResourceRefList");
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

    RegisterSubclass<Resource, ResourceWithMetadata>(engine, "Resource", "ResourceWithMetadata");
    RegisterSubclass<Object, ResourceWithMetadata>(engine, "Object", "ResourceWithMetadata");
    RegisterSubclass<RefCounted, ResourceWithMetadata>(engine, "RefCounted", "ResourceWithMetadata");

    MemberCollection members;
    CollectMembers_ResourceWithMetadata(members);
    RegisterMembers(engine, "ResourceWithMetadata", members);

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

    RegisterSubclass<Drawable, RibbonTrail>(engine, "Drawable", "RibbonTrail");
    RegisterSubclass<Component, RibbonTrail>(engine, "Component", "RibbonTrail");
    RegisterSubclass<Animatable, RibbonTrail>(engine, "Animatable", "RibbonTrail");
    RegisterSubclass<Serializable, RibbonTrail>(engine, "Serializable", "RibbonTrail");
    RegisterSubclass<Object, RibbonTrail>(engine, "Object", "RibbonTrail");
    RegisterSubclass<RefCounted, RibbonTrail>(engine, "RefCounted", "RibbonTrail");

    MemberCollection members;
    CollectMembers_RibbonTrail(members);
    RegisterMembers(engine, "RibbonTrail", members);

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

    RegisterSubclass<Node, Scene>(engine, "Node", "Scene");
    RegisterSubclass<Animatable, Scene>(engine, "Animatable", "Scene");
    RegisterSubclass<Serializable, Scene>(engine, "Serializable", "Scene");
    RegisterSubclass<Object, Scene>(engine, "Object", "Scene");
    RegisterSubclass<RefCounted, Scene>(engine, "RefCounted", "Scene");

    MemberCollection members;
    CollectMembers_Scene(members);
    RegisterMembers(engine, "Scene", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Scene
        REGISTER_CLASS_MANUAL_PART_Scene();
    #endif
}

// struct ScenePassInfo | File: ../Graphics/View.h
static void Register_ScenePassInfo(asIScriptEngine* engine)
{
    // ScenePassInfo::~ScenePassInfo() | Implicitly-declared
    engine->RegisterObjectBehaviour("ScenePassInfo", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ScenePassInfo), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ScenePassInfo(members);
    RegisterMembers(engine, "ScenePassInfo", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ScenePassInfo
        REGISTER_CLASS_MANUAL_PART_ScenePassInfo();
    #endif

    // ScenePassInfo& ScenePassInfo::operator =(const ScenePassInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ScenePassInfo>(engine, "ScenePassInfo");
}

// struct SceneReplicationState | File: ../Scene/ReplicationState.h
static void Register_SceneReplicationState(asIScriptEngine* engine)
{
    // SceneReplicationState::~SceneReplicationState() | Implicitly-declared
    engine->RegisterObjectBehaviour("SceneReplicationState", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(SceneReplicationState), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_SceneReplicationState(members);
    RegisterMembers(engine, "SceneReplicationState", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_SceneReplicationState
        REGISTER_CLASS_MANUAL_PART_SceneReplicationState();
    #endif

    // SceneReplicationState& SceneReplicationState::operator =(const SceneReplicationState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<SceneReplicationState>(engine, "SceneReplicationState");
}

// class SceneResolver | File: ../Scene/SceneResolver.h
static void Register_SceneResolver(asIScriptEngine* engine)
{
    // SceneResolver::~SceneResolver()
    engine->RegisterObjectBehaviour("SceneResolver", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(SceneResolver), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_SceneResolver(members);
    RegisterMembers(engine, "SceneResolver", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_SceneResolver
        REGISTER_CLASS_MANUAL_PART_SceneResolver();
    #endif

    // SceneResolver& SceneResolver::operator =(const SceneResolver&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<SceneResolver>(engine, "SceneResolver");
}

// struct ScratchBuffer | File: ../Graphics/Graphics.h
static void Register_ScratchBuffer(asIScriptEngine* engine)
{
    // ScratchBuffer::~ScratchBuffer() | Implicitly-declared
    engine->RegisterObjectBehaviour("ScratchBuffer", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ScratchBuffer), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ScratchBuffer(members);
    RegisterMembers(engine, "ScratchBuffer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ScratchBuffer
        REGISTER_CLASS_MANUAL_PART_ScratchBuffer();
    #endif

    // ScratchBuffer& ScratchBuffer::operator =(const ScratchBuffer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ScratchBuffer>(engine, "ScratchBuffer");
}

// struct ScreenModeParams | File: ../Graphics/Graphics.h
static void Register_ScreenModeParams(asIScriptEngine* engine)
{
    // ScreenModeParams::~ScreenModeParams() | Implicitly-declared
    engine->RegisterObjectBehaviour("ScreenModeParams", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ScreenModeParams), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ScreenModeParams(members);
    RegisterMembers(engine, "ScreenModeParams", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ScreenModeParams
        REGISTER_CLASS_MANUAL_PART_ScreenModeParams();
    #endif

    // ScreenModeParams& ScreenModeParams::operator =(const ScreenModeParams&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ScreenModeParams>(engine, "ScreenModeParams");
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

    RegisterSubclass<BorderImage, ScrollBar>(engine, "BorderImage", "ScrollBar");
    RegisterSubclass<UIElement, ScrollBar>(engine, "UIElement", "ScrollBar");
    RegisterSubclass<Animatable, ScrollBar>(engine, "Animatable", "ScrollBar");
    RegisterSubclass<Serializable, ScrollBar>(engine, "Serializable", "ScrollBar");
    RegisterSubclass<Object, ScrollBar>(engine, "Object", "ScrollBar");
    RegisterSubclass<RefCounted, ScrollBar>(engine, "RefCounted", "ScrollBar");

    MemberCollection members;
    CollectMembers_ScrollBar(members);
    RegisterMembers(engine, "ScrollBar", members);

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

    RegisterSubclass<UIElement, ScrollView>(engine, "UIElement", "ScrollView");
    RegisterSubclass<Animatable, ScrollView>(engine, "Animatable", "ScrollView");
    RegisterSubclass<Serializable, ScrollView>(engine, "Serializable", "ScrollView");
    RegisterSubclass<Object, ScrollView>(engine, "Object", "ScrollView");
    RegisterSubclass<RefCounted, ScrollView>(engine, "RefCounted", "ScrollView");

    MemberCollection members;
    CollectMembers_ScrollView(members);
    RegisterMembers(engine, "ScrollView", members);

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

    RegisterSubclass<Object, Serializable>(engine, "Object", "Serializable");
    RegisterSubclass<RefCounted, Serializable>(engine, "RefCounted", "Serializable");

    MemberCollection members;
    CollectMembers_Serializable(members);
    RegisterMembers(engine, "Serializable", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Serializable
        REGISTER_CLASS_MANUAL_PART_Serializable();
    #endif
}

// class Serializer | File: ../IO/Serializer.h
static void Register_Serializer(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("Serializer", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("Serializer", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_Serializer(members);
    RegisterMembers(engine, "Serializer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Serializer
        REGISTER_CLASS_MANUAL_PART_Serializer();
    #endif

    // Serializer& Serializer::operator =(const Serializer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Serializer>(engine, "Serializer");
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

    RegisterSubclass<Resource, Shader>(engine, "Resource", "Shader");
    RegisterSubclass<Object, Shader>(engine, "Object", "Shader");
    RegisterSubclass<RefCounted, Shader>(engine, "RefCounted", "Shader");

    MemberCollection members;
    CollectMembers_Shader(members);
    RegisterMembers(engine, "Shader", members);

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

    MemberCollection members;
    CollectMembers_ShaderParameter(members);
    RegisterMembers(engine, "ShaderParameter", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ShaderParameter
        REGISTER_CLASS_MANUAL_PART_ShaderParameter();
    #endif

    // ShaderParameter& ShaderParameter::operator =(const ShaderParameter&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ShaderParameter>(engine, "ShaderParameter");
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

    RegisterSubclass<ValueAnimationInfo, ShaderParameterAnimationInfo>(engine, "ValueAnimationInfo", "ShaderParameterAnimationInfo");
    RegisterSubclass<RefCounted, ShaderParameterAnimationInfo>(engine, "RefCounted", "ShaderParameterAnimationInfo");

    MemberCollection members;
    CollectMembers_ShaderParameterAnimationInfo(members);
    RegisterMembers(engine, "ShaderParameterAnimationInfo", members);

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

    RegisterSubclass<Object, ShaderPrecache>(engine, "Object", "ShaderPrecache");
    RegisterSubclass<RefCounted, ShaderPrecache>(engine, "RefCounted", "ShaderPrecache");

    MemberCollection members;
    CollectMembers_ShaderPrecache(members);
    RegisterMembers(engine, "ShaderPrecache", members);

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

    RegisterSubclass<RefCounted, ShaderVariation>(engine, "RefCounted", "ShaderVariation");

    MemberCollection members;
    CollectMembers_ShaderVariation(members);
    RegisterMembers(engine, "ShaderVariation", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ShaderVariation
        REGISTER_CLASS_MANUAL_PART_ShaderVariation();
    #endif
}

// struct ShadowBatchQueue | File: ../Graphics/Batch.h
static void Register_ShadowBatchQueue(asIScriptEngine* engine)
{
    // ShadowBatchQueue::~ShadowBatchQueue() | Implicitly-declared
    engine->RegisterObjectBehaviour("ShadowBatchQueue", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ShadowBatchQueue), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ShadowBatchQueue(members);
    RegisterMembers(engine, "ShadowBatchQueue", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ShadowBatchQueue
        REGISTER_CLASS_MANUAL_PART_ShadowBatchQueue();
    #endif

    // ShadowBatchQueue& ShadowBatchQueue::operator =(const ShadowBatchQueue&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ShadowBatchQueue>(engine, "ShadowBatchQueue");
}

// class Skeleton | File: ../Graphics/Skeleton.h
static void Register_Skeleton(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("Skeleton", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("Skeleton", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_Skeleton(members);
    RegisterMembers(engine, "Skeleton", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Skeleton
        REGISTER_CLASS_MANUAL_PART_Skeleton();
    #endif

    // Skeleton& Skeleton::operator =(const Skeleton&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Skeleton>(engine, "Skeleton");
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

    RegisterSubclass<StaticModel, Skybox>(engine, "StaticModel", "Skybox");
    RegisterSubclass<Drawable, Skybox>(engine, "Drawable", "Skybox");
    RegisterSubclass<Component, Skybox>(engine, "Component", "Skybox");
    RegisterSubclass<Animatable, Skybox>(engine, "Animatable", "Skybox");
    RegisterSubclass<Serializable, Skybox>(engine, "Serializable", "Skybox");
    RegisterSubclass<Object, Skybox>(engine, "Object", "Skybox");
    RegisterSubclass<RefCounted, Skybox>(engine, "RefCounted", "Skybox");

    MemberCollection members;
    CollectMembers_Skybox(members);
    RegisterMembers(engine, "Skybox", members);

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

    RegisterSubclass<BorderImage, Slider>(engine, "BorderImage", "Slider");
    RegisterSubclass<UIElement, Slider>(engine, "UIElement", "Slider");
    RegisterSubclass<Animatable, Slider>(engine, "Animatable", "Slider");
    RegisterSubclass<Serializable, Slider>(engine, "Serializable", "Slider");
    RegisterSubclass<Object, Slider>(engine, "Object", "Slider");
    RegisterSubclass<RefCounted, Slider>(engine, "RefCounted", "Slider");

    MemberCollection members;
    CollectMembers_Slider(members);
    RegisterMembers(engine, "Slider", members);

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

    RegisterSubclass<Component, SmoothedTransform>(engine, "Component", "SmoothedTransform");
    RegisterSubclass<Animatable, SmoothedTransform>(engine, "Animatable", "SmoothedTransform");
    RegisterSubclass<Serializable, SmoothedTransform>(engine, "Serializable", "SmoothedTransform");
    RegisterSubclass<Object, SmoothedTransform>(engine, "Object", "SmoothedTransform");
    RegisterSubclass<RefCounted, SmoothedTransform>(engine, "RefCounted", "SmoothedTransform");

    MemberCollection members;
    CollectMembers_SmoothedTransform(members);
    RegisterMembers(engine, "SmoothedTransform", members);

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

    RegisterSubclass<ResourceWithMetadata, Sound>(engine, "ResourceWithMetadata", "Sound");
    RegisterSubclass<Resource, Sound>(engine, "Resource", "Sound");
    RegisterSubclass<Object, Sound>(engine, "Object", "Sound");
    RegisterSubclass<RefCounted, Sound>(engine, "RefCounted", "Sound");

    MemberCollection members;
    CollectMembers_Sound(members);
    RegisterMembers(engine, "Sound", members);

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

    RegisterSubclass<Component, SoundListener>(engine, "Component", "SoundListener");
    RegisterSubclass<Animatable, SoundListener>(engine, "Animatable", "SoundListener");
    RegisterSubclass<Serializable, SoundListener>(engine, "Serializable", "SoundListener");
    RegisterSubclass<Object, SoundListener>(engine, "Object", "SoundListener");
    RegisterSubclass<RefCounted, SoundListener>(engine, "RefCounted", "SoundListener");

    MemberCollection members;
    CollectMembers_SoundListener(members);
    RegisterMembers(engine, "SoundListener", members);

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

    RegisterSubclass<Component, SoundSource>(engine, "Component", "SoundSource");
    RegisterSubclass<Animatable, SoundSource>(engine, "Animatable", "SoundSource");
    RegisterSubclass<Serializable, SoundSource>(engine, "Serializable", "SoundSource");
    RegisterSubclass<Object, SoundSource>(engine, "Object", "SoundSource");
    RegisterSubclass<RefCounted, SoundSource>(engine, "RefCounted", "SoundSource");

    MemberCollection members;
    CollectMembers_SoundSource(members);
    RegisterMembers(engine, "SoundSource", members);

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

    RegisterSubclass<SoundSource, SoundSource3D>(engine, "SoundSource", "SoundSource3D");
    RegisterSubclass<Component, SoundSource3D>(engine, "Component", "SoundSource3D");
    RegisterSubclass<Animatable, SoundSource3D>(engine, "Animatable", "SoundSource3D");
    RegisterSubclass<Serializable, SoundSource3D>(engine, "Serializable", "SoundSource3D");
    RegisterSubclass<Object, SoundSource3D>(engine, "Object", "SoundSource3D");
    RegisterSubclass<RefCounted, SoundSource3D>(engine, "RefCounted", "SoundSource3D");

    MemberCollection members;
    CollectMembers_SoundSource3D(members);
    RegisterMembers(engine, "SoundSource3D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_SoundSource3D
        REGISTER_CLASS_MANUAL_PART_SoundSource3D();
    #endif
}

// class SoundStream | File: ../Audio/SoundStream.h
static void Register_SoundStream(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, SoundStream>(engine, "RefCounted", "SoundStream");

    MemberCollection members;
    CollectMembers_SoundStream(members);
    RegisterMembers(engine, "SoundStream", members);

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

    MemberCollection members;
    CollectMembers_SourceBatch(members);
    RegisterMembers(engine, "SourceBatch", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_SourceBatch
        REGISTER_CLASS_MANUAL_PART_SourceBatch();
    #endif
}

// Sphere::Sphere(const Sphere& sphere) noexcept = default
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

    // Sphere::Sphere(const Sphere& sphere) noexcept = default
    engine->RegisterObjectBehaviour("Sphere", asBEHAVE_CONSTRUCT, "void f(const Sphere&in)", AS_FUNCTION_OBJFIRST(Sphere_Sphere_Sphere), AS_CALL_CDECL_OBJFIRST);
    // Sphere::Sphere(const Vector3& center, float radius) noexcept
    engine->RegisterObjectBehaviour("Sphere", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, float)", AS_FUNCTION_OBJFIRST(Sphere_Sphere_Vector3_float), AS_CALL_CDECL_OBJFIRST);
    // explicit Sphere::Sphere(const BoundingBox& box) noexcept
    engine->RegisterObjectBehaviour("Sphere", asBEHAVE_CONSTRUCT, "void f(const BoundingBox&in)", AS_FUNCTION_OBJFIRST(Sphere_Sphere_BoundingBox), AS_CALL_CDECL_OBJFIRST);
    // explicit Sphere::Sphere(const Frustum& frustum) noexcept
    engine->RegisterObjectBehaviour("Sphere", asBEHAVE_CONSTRUCT, "void f(const Frustum&in)", AS_FUNCTION_OBJFIRST(Sphere_Sphere_Frustum), AS_CALL_CDECL_OBJFIRST);
    // explicit Sphere::Sphere(const Polyhedron& poly) noexcept
    engine->RegisterObjectBehaviour("Sphere", asBEHAVE_CONSTRUCT, "void f(const Polyhedron&in)", AS_FUNCTION_OBJFIRST(Sphere_Sphere_Polyhedron), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Sphere(members);
    RegisterMembers(engine, "Sphere", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Sphere
        REGISTER_CLASS_MANUAL_PART_Sphere();
    #endif
}

// explicit Spline::Spline(InterpolationMode mode)
static void Spline_Spline_InterpolationMode(Spline* ptr, InterpolationMode mode)
{
    new(ptr) Spline(mode);
}

// Spline::Spline(const Spline& rhs) = default
static void Spline_Spline_Spline(Spline* ptr, const Spline& rhs)
{
    new(ptr) Spline(rhs);
}

// class Spline | File: ../Core/Spline.h
static void Register_Spline(asIScriptEngine* engine)
{
    // explicit Spline::Spline(const Vector<Variant>& knots, InterpolationMode mode = BEZIER_CURVE)
    // Error: type "const Vector<Variant>&" can not automatically bind

    // explicit Spline::Spline(InterpolationMode mode)
    engine->RegisterObjectBehaviour("Spline", asBEHAVE_CONSTRUCT, "void f(InterpolationMode)", AS_FUNCTION_OBJFIRST(Spline_Spline_InterpolationMode), AS_CALL_CDECL_OBJFIRST);
    // Spline::Spline(const Spline& rhs) = default
    engine->RegisterObjectBehaviour("Spline", asBEHAVE_CONSTRUCT, "void f(const Spline&in)", AS_FUNCTION_OBJFIRST(Spline_Spline_Spline), AS_CALL_CDECL_OBJFIRST);

    // Spline::~Spline() | Implicitly-declared
    engine->RegisterObjectBehaviour("Spline", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Spline), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Spline(members);
    RegisterMembers(engine, "Spline", members);

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

    RegisterSubclass<Component, SplinePath>(engine, "Component", "SplinePath");
    RegisterSubclass<Animatable, SplinePath>(engine, "Animatable", "SplinePath");
    RegisterSubclass<Serializable, SplinePath>(engine, "Serializable", "SplinePath");
    RegisterSubclass<Object, SplinePath>(engine, "Object", "SplinePath");
    RegisterSubclass<RefCounted, SplinePath>(engine, "RefCounted", "SplinePath");

    MemberCollection members;
    CollectMembers_SplinePath(members);
    RegisterMembers(engine, "SplinePath", members);

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

    RegisterSubclass<UIElement, Sprite>(engine, "UIElement", "Sprite");
    RegisterSubclass<Animatable, Sprite>(engine, "Animatable", "Sprite");
    RegisterSubclass<Serializable, Sprite>(engine, "Serializable", "Sprite");
    RegisterSubclass<Object, Sprite>(engine, "Object", "Sprite");
    RegisterSubclass<RefCounted, Sprite>(engine, "RefCounted", "Sprite");

    MemberCollection members;
    CollectMembers_Sprite(members);
    RegisterMembers(engine, "Sprite", members);

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

    RegisterSubclass<Drawable, StaticModel>(engine, "Drawable", "StaticModel");
    RegisterSubclass<Component, StaticModel>(engine, "Component", "StaticModel");
    RegisterSubclass<Animatable, StaticModel>(engine, "Animatable", "StaticModel");
    RegisterSubclass<Serializable, StaticModel>(engine, "Serializable", "StaticModel");
    RegisterSubclass<Object, StaticModel>(engine, "Object", "StaticModel");
    RegisterSubclass<RefCounted, StaticModel>(engine, "RefCounted", "StaticModel");

    MemberCollection members;
    CollectMembers_StaticModel(members);
    RegisterMembers(engine, "StaticModel", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_StaticModel
        REGISTER_CLASS_MANUAL_PART_StaticModel();
    #endif
}

// struct StaticModelGeometryData | File: ../Graphics/StaticModel.h
static void Register_StaticModelGeometryData(asIScriptEngine* engine)
{
    // StaticModelGeometryData::~StaticModelGeometryData() | Implicitly-declared
    engine->RegisterObjectBehaviour("StaticModelGeometryData", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(StaticModelGeometryData), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_StaticModelGeometryData(members);
    RegisterMembers(engine, "StaticModelGeometryData", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_StaticModelGeometryData
        REGISTER_CLASS_MANUAL_PART_StaticModelGeometryData();
    #endif

    // StaticModelGeometryData& StaticModelGeometryData::operator =(const StaticModelGeometryData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<StaticModelGeometryData>(engine, "StaticModelGeometryData");
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

    RegisterSubclass<StaticModel, StaticModelGroup>(engine, "StaticModel", "StaticModelGroup");
    RegisterSubclass<Drawable, StaticModelGroup>(engine, "Drawable", "StaticModelGroup");
    RegisterSubclass<Component, StaticModelGroup>(engine, "Component", "StaticModelGroup");
    RegisterSubclass<Animatable, StaticModelGroup>(engine, "Animatable", "StaticModelGroup");
    RegisterSubclass<Serializable, StaticModelGroup>(engine, "Serializable", "StaticModelGroup");
    RegisterSubclass<Object, StaticModelGroup>(engine, "Object", "StaticModelGroup");
    RegisterSubclass<RefCounted, StaticModelGroup>(engine, "RefCounted", "StaticModelGroup");

    MemberCollection members;
    CollectMembers_StaticModelGroup(members);
    RegisterMembers(engine, "StaticModelGroup", members);

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

    MemberCollection members;
    CollectMembers_StoredLogMessage(members);
    RegisterMembers(engine, "StoredLogMessage", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_StoredLogMessage
        REGISTER_CLASS_MANUAL_PART_StoredLogMessage();
    #endif

    // StoredLogMessage& StoredLogMessage::operator =(const StoredLogMessage&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<StoredLogMessage>(engine, "StoredLogMessage");
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
    // template <class T> explicit String::String(const T& value)
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

    MemberCollection members;
    CollectMembers_String(members);
    RegisterMembers(engine, "String", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_String
        REGISTER_CLASS_MANUAL_PART_String();
    #endif
}

// StringHash::StringHash(const StringHash& rhs) noexcept = default
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

    // StringHash::StringHash(const StringHash& rhs) noexcept = default
    engine->RegisterObjectBehaviour("StringHash", asBEHAVE_CONSTRUCT, "void f(const StringHash&in)", AS_FUNCTION_OBJFIRST(StringHash_StringHash_StringHash), AS_CALL_CDECL_OBJFIRST);
    // explicit StringHash::StringHash(unsigned value) noexcept
    engine->RegisterObjectBehaviour("StringHash", asBEHAVE_CONSTRUCT, "void f(uint)", AS_FUNCTION_OBJFIRST(StringHash_StringHash_unsigned), AS_CALL_CDECL_OBJFIRST);
    // StringHash::StringHash(const String& str) noexcept
    engine->RegisterObjectBehaviour("StringHash", asBEHAVE_CONSTRUCT, "void f(const String&in)", AS_FUNCTION_OBJFIRST(StringHash_StringHash_String), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_StringHash(members);
    RegisterMembers(engine, "StringHash", members);

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

    MemberCollection members;
    CollectMembers_StringHashRegister(members);
    RegisterMembers(engine, "StringHashRegister", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_StringHashRegister
        REGISTER_CLASS_MANUAL_PART_StringHashRegister();
    #endif

    // StringHashRegister& StringHashRegister::operator =(const StringHashRegister&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<StringHashRegister>(engine, "StringHashRegister");
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

    RegisterSubclass<Resource, Technique>(engine, "Resource", "Technique");
    RegisterSubclass<Object, Technique>(engine, "Object", "Technique");
    RegisterSubclass<RefCounted, Technique>(engine, "RefCounted", "Technique");

    MemberCollection members;
    CollectMembers_Technique(members);
    RegisterMembers(engine, "Technique", members);

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

    // TechniqueEntry::~TechniqueEntry() noexcept = default
    engine->RegisterObjectBehaviour("TechniqueEntry", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(TechniqueEntry), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_TechniqueEntry(members);
    RegisterMembers(engine, "TechniqueEntry", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_TechniqueEntry
        REGISTER_CLASS_MANUAL_PART_TechniqueEntry();
    #endif

    // TechniqueEntry& TechniqueEntry::operator =(const TechniqueEntry&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<TechniqueEntry>(engine, "TechniqueEntry");
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

    RegisterSubclass<Component, Terrain>(engine, "Component", "Terrain");
    RegisterSubclass<Animatable, Terrain>(engine, "Animatable", "Terrain");
    RegisterSubclass<Serializable, Terrain>(engine, "Serializable", "Terrain");
    RegisterSubclass<Object, Terrain>(engine, "Object", "Terrain");
    RegisterSubclass<RefCounted, Terrain>(engine, "RefCounted", "Terrain");

    MemberCollection members;
    CollectMembers_Terrain(members);
    RegisterMembers(engine, "Terrain", members);

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

    RegisterSubclass<Drawable, TerrainPatch>(engine, "Drawable", "TerrainPatch");
    RegisterSubclass<Component, TerrainPatch>(engine, "Component", "TerrainPatch");
    RegisterSubclass<Animatable, TerrainPatch>(engine, "Animatable", "TerrainPatch");
    RegisterSubclass<Serializable, TerrainPatch>(engine, "Serializable", "TerrainPatch");
    RegisterSubclass<Object, TerrainPatch>(engine, "Object", "TerrainPatch");
    RegisterSubclass<RefCounted, TerrainPatch>(engine, "RefCounted", "TerrainPatch");

    MemberCollection members;
    CollectMembers_TerrainPatch(members);
    RegisterMembers(engine, "TerrainPatch", members);

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

    RegisterSubclass<UISelectable, Text>(engine, "UISelectable", "Text");
    RegisterSubclass<UIElement, Text>(engine, "UIElement", "Text");
    RegisterSubclass<Animatable, Text>(engine, "Animatable", "Text");
    RegisterSubclass<Serializable, Text>(engine, "Serializable", "Text");
    RegisterSubclass<Object, Text>(engine, "Object", "Text");
    RegisterSubclass<RefCounted, Text>(engine, "RefCounted", "Text");

    MemberCollection members;
    CollectMembers_Text(members);
    RegisterMembers(engine, "Text", members);

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

    RegisterSubclass<Drawable, Text3D>(engine, "Drawable", "Text3D");
    RegisterSubclass<Component, Text3D>(engine, "Component", "Text3D");
    RegisterSubclass<Animatable, Text3D>(engine, "Animatable", "Text3D");
    RegisterSubclass<Serializable, Text3D>(engine, "Serializable", "Text3D");
    RegisterSubclass<Object, Text3D>(engine, "Object", "Text3D");
    RegisterSubclass<RefCounted, Text3D>(engine, "RefCounted", "Text3D");

    MemberCollection members;
    CollectMembers_Text3D(members);
    RegisterMembers(engine, "Text3D", members);

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

    RegisterSubclass<ResourceWithMetadata, Texture>(engine, "ResourceWithMetadata", "Texture");
    RegisterSubclass<Resource, Texture>(engine, "Resource", "Texture");
    RegisterSubclass<Object, Texture>(engine, "Object", "Texture");
    RegisterSubclass<RefCounted, Texture>(engine, "RefCounted", "Texture");

    MemberCollection members;
    CollectMembers_Texture(members);
    RegisterMembers(engine, "Texture", members);

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

    RegisterSubclass<Texture, Texture2D>(engine, "Texture", "Texture2D");
    RegisterSubclass<ResourceWithMetadata, Texture2D>(engine, "ResourceWithMetadata", "Texture2D");
    RegisterSubclass<Resource, Texture2D>(engine, "Resource", "Texture2D");
    RegisterSubclass<Object, Texture2D>(engine, "Object", "Texture2D");
    RegisterSubclass<RefCounted, Texture2D>(engine, "RefCounted", "Texture2D");

    MemberCollection members;
    CollectMembers_Texture2D(members);
    RegisterMembers(engine, "Texture2D", members);

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

    RegisterSubclass<Texture, Texture2DArray>(engine, "Texture", "Texture2DArray");
    RegisterSubclass<ResourceWithMetadata, Texture2DArray>(engine, "ResourceWithMetadata", "Texture2DArray");
    RegisterSubclass<Resource, Texture2DArray>(engine, "Resource", "Texture2DArray");
    RegisterSubclass<Object, Texture2DArray>(engine, "Object", "Texture2DArray");
    RegisterSubclass<RefCounted, Texture2DArray>(engine, "RefCounted", "Texture2DArray");

    MemberCollection members;
    CollectMembers_Texture2DArray(members);
    RegisterMembers(engine, "Texture2DArray", members);

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

    RegisterSubclass<Texture, Texture3D>(engine, "Texture", "Texture3D");
    RegisterSubclass<ResourceWithMetadata, Texture3D>(engine, "ResourceWithMetadata", "Texture3D");
    RegisterSubclass<Resource, Texture3D>(engine, "Resource", "Texture3D");
    RegisterSubclass<Object, Texture3D>(engine, "Object", "Texture3D");
    RegisterSubclass<RefCounted, Texture3D>(engine, "RefCounted", "Texture3D");

    MemberCollection members;
    CollectMembers_Texture3D(members);
    RegisterMembers(engine, "Texture3D", members);

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

    RegisterSubclass<Texture, TextureCube>(engine, "Texture", "TextureCube");
    RegisterSubclass<ResourceWithMetadata, TextureCube>(engine, "ResourceWithMetadata", "TextureCube");
    RegisterSubclass<Resource, TextureCube>(engine, "Resource", "TextureCube");
    RegisterSubclass<Object, TextureCube>(engine, "Object", "TextureCube");
    RegisterSubclass<RefCounted, TextureCube>(engine, "RefCounted", "TextureCube");

    MemberCollection members;
    CollectMembers_TextureCube(members);
    RegisterMembers(engine, "TextureCube", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_TextureCube
        REGISTER_CLASS_MANUAL_PART_TextureCube();
    #endif
}

// struct TextureFrame | File: ../Graphics/ParticleEffect.h
static void Register_TextureFrame(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("TextureFrame", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("TextureFrame", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_TextureFrame(members);
    RegisterMembers(engine, "TextureFrame", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_TextureFrame
        REGISTER_CLASS_MANUAL_PART_TextureFrame();
    #endif

    // TextureFrame& TextureFrame::operator =(const TextureFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<TextureFrame>(engine, "TextureFrame");
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

    RegisterSubclass<Object, Time>(engine, "Object", "Time");
    RegisterSubclass<RefCounted, Time>(engine, "RefCounted", "Time");

    MemberCollection members;
    CollectMembers_Time(members);
    RegisterMembers(engine, "Time", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Time
        REGISTER_CLASS_MANUAL_PART_Time();
    #endif
}

// class Timer | File: ../Core/Timer.h
static void Register_Timer(asIScriptEngine* engine)
{
    MemberCollection members;
    CollectMembers_Timer(members);
    RegisterMembers(engine, "Timer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Timer
        REGISTER_CLASS_MANUAL_PART_Timer();
    #endif

    // Timer& Timer::operator =(const Timer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Timer>(engine, "Timer");
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

    RegisterSubclass<UIElement, ToolTip>(engine, "UIElement", "ToolTip");
    RegisterSubclass<Animatable, ToolTip>(engine, "Animatable", "ToolTip");
    RegisterSubclass<Serializable, ToolTip>(engine, "Serializable", "ToolTip");
    RegisterSubclass<Object, ToolTip>(engine, "Object", "ToolTip");
    RegisterSubclass<RefCounted, ToolTip>(engine, "RefCounted", "ToolTip");

    MemberCollection members;
    CollectMembers_ToolTip(members);
    RegisterMembers(engine, "ToolTip", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ToolTip
        REGISTER_CLASS_MANUAL_PART_ToolTip();
    #endif
}

// struct TouchState | File: ../Input/Input.h
static void Register_TouchState(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("TouchState", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("TouchState", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_TouchState(members);
    RegisterMembers(engine, "TouchState", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_TouchState
        REGISTER_CLASS_MANUAL_PART_TouchState();
    #endif

    // TouchState& TouchState::operator =(const TouchState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<TouchState>(engine, "TouchState");
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

    MemberCollection members;
    CollectMembers_TrailPoint(members);
    RegisterMembers(engine, "TrailPoint", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_TrailPoint
        REGISTER_CLASS_MANUAL_PART_TrailPoint();
    #endif

    // TrailPoint& TrailPoint::operator =(const TrailPoint&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<TrailPoint>(engine, "TrailPoint");
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

    RegisterSubclass<Object, UI>(engine, "Object", "UI");
    RegisterSubclass<RefCounted, UI>(engine, "RefCounted", "UI");

    MemberCollection members;
    CollectMembers_UI(members);
    RegisterMembers(engine, "UI", members);

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

    MemberCollection members;
    CollectMembers_UIBatch(members);
    RegisterMembers(engine, "UIBatch", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_UIBatch
        REGISTER_CLASS_MANUAL_PART_UIBatch();
    #endif

    // UIBatch& UIBatch::operator =(const UIBatch&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<UIBatch>(engine, "UIBatch");
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

    RegisterSubclass<Component, UIComponent>(engine, "Component", "UIComponent");
    RegisterSubclass<Animatable, UIComponent>(engine, "Animatable", "UIComponent");
    RegisterSubclass<Serializable, UIComponent>(engine, "Serializable", "UIComponent");
    RegisterSubclass<Object, UIComponent>(engine, "Object", "UIComponent");
    RegisterSubclass<RefCounted, UIComponent>(engine, "RefCounted", "UIComponent");

    MemberCollection members;
    CollectMembers_UIComponent(members);
    RegisterMembers(engine, "UIComponent", members);

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

    RegisterSubclass<Animatable, UIElement>(engine, "Animatable", "UIElement");
    RegisterSubclass<Serializable, UIElement>(engine, "Serializable", "UIElement");
    RegisterSubclass<Object, UIElement>(engine, "Object", "UIElement");
    RegisterSubclass<RefCounted, UIElement>(engine, "RefCounted", "UIElement");

    MemberCollection members;
    CollectMembers_UIElement(members);
    RegisterMembers(engine, "UIElement", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_UIElement
        REGISTER_CLASS_MANUAL_PART_UIElement();
    #endif
}

// class UISelectable | File: ../UI/UISelectable.h
static void Register_UISelectable(asIScriptEngine* engine)
{
    RegisterSubclass<UIElement, UISelectable>(engine, "UIElement", "UISelectable");
    RegisterSubclass<Animatable, UISelectable>(engine, "Animatable", "UISelectable");
    RegisterSubclass<Serializable, UISelectable>(engine, "Serializable", "UISelectable");
    RegisterSubclass<Object, UISelectable>(engine, "Object", "UISelectable");
    RegisterSubclass<RefCounted, UISelectable>(engine, "RefCounted", "UISelectable");

    MemberCollection members;
    CollectMembers_UISelectable(members);
    RegisterMembers(engine, "UISelectable", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_UISelectable
        REGISTER_CLASS_MANUAL_PART_UISelectable();
    #endif
}

// class UnknownComponent | File: ../Scene/UnknownComponent.h
static void Register_UnknownComponent(asIScriptEngine* engine)
{
    RegisterSubclass<Component, UnknownComponent>(engine, "Component", "UnknownComponent");
    RegisterSubclass<Animatable, UnknownComponent>(engine, "Animatable", "UnknownComponent");
    RegisterSubclass<Serializable, UnknownComponent>(engine, "Serializable", "UnknownComponent");
    RegisterSubclass<Object, UnknownComponent>(engine, "Object", "UnknownComponent");
    RegisterSubclass<RefCounted, UnknownComponent>(engine, "RefCounted", "UnknownComponent");

    MemberCollection members;
    CollectMembers_UnknownComponent(members);
    RegisterMembers(engine, "UnknownComponent", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_UnknownComponent
        REGISTER_CLASS_MANUAL_PART_UnknownComponent();
    #endif
}

// struct VAnimEventFrame | File: ../Scene/ValueAnimation.h
static void Register_VAnimEventFrame(asIScriptEngine* engine)
{
    // VAnimEventFrame::~VAnimEventFrame() | Implicitly-declared
    engine->RegisterObjectBehaviour("VAnimEventFrame", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VAnimEventFrame), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_VAnimEventFrame(members);
    RegisterMembers(engine, "VAnimEventFrame", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_VAnimEventFrame
        REGISTER_CLASS_MANUAL_PART_VAnimEventFrame();
    #endif

    // VAnimEventFrame& VAnimEventFrame::operator =(const VAnimEventFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VAnimEventFrame>(engine, "VAnimEventFrame");
}

// struct VAnimKeyFrame | File: ../Scene/ValueAnimation.h
static void Register_VAnimKeyFrame(asIScriptEngine* engine)
{
    // VAnimKeyFrame::~VAnimKeyFrame() | Implicitly-declared
    engine->RegisterObjectBehaviour("VAnimKeyFrame", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VAnimKeyFrame), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_VAnimKeyFrame(members);
    RegisterMembers(engine, "VAnimKeyFrame", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_VAnimKeyFrame
        REGISTER_CLASS_MANUAL_PART_VAnimKeyFrame();
    #endif

    // VAnimKeyFrame& VAnimKeyFrame::operator =(const VAnimKeyFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VAnimKeyFrame>(engine, "VAnimKeyFrame");
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

    RegisterSubclass<Resource, ValueAnimation>(engine, "Resource", "ValueAnimation");
    RegisterSubclass<Object, ValueAnimation>(engine, "Object", "ValueAnimation");
    RegisterSubclass<RefCounted, ValueAnimation>(engine, "RefCounted", "ValueAnimation");

    MemberCollection members;
    CollectMembers_ValueAnimation(members);
    RegisterMembers(engine, "ValueAnimation", members);

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

    RegisterSubclass<RefCounted, ValueAnimationInfo>(engine, "RefCounted", "ValueAnimationInfo");

    MemberCollection members;
    CollectMembers_ValueAnimationInfo(members);
    RegisterMembers(engine, "ValueAnimationInfo", members);

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
    // template <class T> Variant::Variant(const CustomVariantValueImpl<T>& value)
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

    MemberCollection members;
    CollectMembers_Variant(members);
    RegisterMembers(engine, "Variant", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Variant
        REGISTER_CLASS_MANUAL_PART_Variant();
    #endif
}

// Vector2::Vector2(const Vector2& vector) noexcept = default
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

    // Vector2::Vector2(const Vector2& vector) noexcept = default
    engine->RegisterObjectBehaviour("Vector2", asBEHAVE_CONSTRUCT, "void f(const Vector2&in)", AS_FUNCTION_OBJFIRST(Vector2_Vector2_Vector2), AS_CALL_CDECL_OBJFIRST);
    // explicit Vector2::Vector2(const IntVector2& vector) noexcept
    engine->RegisterObjectBehaviour("Vector2", asBEHAVE_CONSTRUCT, "void f(const IntVector2&in)", AS_FUNCTION_OBJFIRST(Vector2_Vector2_IntVector2), AS_CALL_CDECL_OBJFIRST);
    // Vector2::Vector2(float x, float y) noexcept
    engine->RegisterObjectBehaviour("Vector2", asBEHAVE_CONSTRUCT, "void f(float, float)", AS_FUNCTION_OBJFIRST(Vector2_Vector2_float_float), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Vector2(members);
    RegisterMembers(engine, "Vector2", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Vector2
        REGISTER_CLASS_MANUAL_PART_Vector2();
    #endif
}

// Vector3::Vector3(const Vector3& vector) noexcept = default
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

    // Vector3::Vector3(const Vector3& vector) noexcept = default
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

    MemberCollection members;
    CollectMembers_Vector3(members);
    RegisterMembers(engine, "Vector3", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Vector3
        REGISTER_CLASS_MANUAL_PART_Vector3();
    #endif
}

// Vector4::Vector4(const Vector4& vector) noexcept = default
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

    // Vector4::Vector4(const Vector4& vector) noexcept = default
    engine->RegisterObjectBehaviour("Vector4", asBEHAVE_CONSTRUCT, "void f(const Vector4&in)", AS_FUNCTION_OBJFIRST(Vector4_Vector4_Vector4), AS_CALL_CDECL_OBJFIRST);
    // Vector4::Vector4(const Vector3& vector, float w) noexcept
    engine->RegisterObjectBehaviour("Vector4", asBEHAVE_CONSTRUCT, "void f(const Vector3&in, float)", AS_FUNCTION_OBJFIRST(Vector4_Vector4_Vector3_float), AS_CALL_CDECL_OBJFIRST);
    // Vector4::Vector4(float x, float y, float z, float w) noexcept
    engine->RegisterObjectBehaviour("Vector4", asBEHAVE_CONSTRUCT, "void f(float, float, float, float)", AS_FUNCTION_OBJFIRST(Vector4_Vector4_float_float_float_float), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Vector4(members);
    RegisterMembers(engine, "Vector4", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Vector4
        REGISTER_CLASS_MANUAL_PART_Vector4();
    #endif
}

// class VectorBase | File: ../Container/VectorBase.h
static void Register_VectorBase(asIScriptEngine* engine)
{
    // VectorBase::~VectorBase() | Implicitly-declared
    engine->RegisterObjectBehaviour("VectorBase", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VectorBase), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_VectorBase(members);
    RegisterMembers(engine, "VectorBase", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_VectorBase
        REGISTER_CLASS_MANUAL_PART_VectorBase();
    #endif

    // VectorBase& VectorBase::operator =(const VectorBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VectorBase>(engine, "VectorBase");
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

    MemberCollection members;
    CollectMembers_VectorBuffer(members);
    RegisterMembers(engine, "VectorBuffer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_VectorBuffer
        REGISTER_CLASS_MANUAL_PART_VectorBuffer();
    #endif

    // VectorBuffer& VectorBuffer::operator =(const VectorBuffer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VectorBuffer>(engine, "VectorBuffer");
}

// explicit VertexBuffer::VertexBuffer(Context* context, bool forceHeadless = false)
static VertexBuffer* VertexBuffer_VertexBuffer_Context_bool(bool forceHeadless)
{
    Context* context = GetScriptContext();
    return new VertexBuffer(context, forceHeadless);
}

// class VertexBuffer | File: ../Graphics/VertexBuffer.h
static void Register_VertexBuffer(asIScriptEngine* engine)
{
    // explicit VertexBuffer::VertexBuffer(Context* context, bool forceHeadless = false)
    engine->RegisterObjectBehaviour("VertexBuffer", asBEHAVE_FACTORY, "VertexBuffer@+ f(bool = false)", AS_FUNCTION(VertexBuffer_VertexBuffer_Context_bool) , AS_CALL_CDECL);

    RegisterSubclass<Object, VertexBuffer>(engine, "Object", "VertexBuffer");
    RegisterSubclass<RefCounted, VertexBuffer>(engine, "RefCounted", "VertexBuffer");

    MemberCollection members;
    CollectMembers_VertexBuffer(members);
    RegisterMembers(engine, "VertexBuffer", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_VertexBuffer
        REGISTER_CLASS_MANUAL_PART_VertexBuffer();
    #endif
}

// struct VertexBufferDesc | File: ../Graphics/Model.h
static void Register_VertexBufferDesc(asIScriptEngine* engine)
{
    // VertexBufferDesc::~VertexBufferDesc() | Implicitly-declared
    engine->RegisterObjectBehaviour("VertexBufferDesc", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VertexBufferDesc), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_VertexBufferDesc(members);
    RegisterMembers(engine, "VertexBufferDesc", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_VertexBufferDesc
        REGISTER_CLASS_MANUAL_PART_VertexBufferDesc();
    #endif

    // VertexBufferDesc& VertexBufferDesc::operator =(const VertexBufferDesc&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VertexBufferDesc>(engine, "VertexBufferDesc");
}

// struct VertexBufferMorph | File: ../Graphics/Model.h
static void Register_VertexBufferMorph(asIScriptEngine* engine)
{
    // VertexBufferMorph::~VertexBufferMorph() | Implicitly-declared
    engine->RegisterObjectBehaviour("VertexBufferMorph", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VertexBufferMorph), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_VertexBufferMorph(members);
    RegisterMembers(engine, "VertexBufferMorph", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_VertexBufferMorph
        REGISTER_CLASS_MANUAL_PART_VertexBufferMorph();
    #endif

    // VertexBufferMorph& VertexBufferMorph::operator =(const VertexBufferMorph&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VertexBufferMorph>(engine, "VertexBufferMorph");
}

// VertexElement::VertexElement(VertexElementType type, VertexElementSemantic semantic, unsigned char index = 0, bool perInstance = false) noexcept
static void VertexElement_VertexElement_VertexElementType_VertexElementSemantic_unsignedchar_bool(VertexElement* ptr, VertexElementType type, VertexElementSemantic semantic, unsigned char index, bool perInstance)
{
    new(ptr) VertexElement(type, semantic, index, perInstance);
}

// struct VertexElement | File: ../Graphics/GraphicsDefs.h
static void Register_VertexElement(asIScriptEngine* engine)
{
    // VertexElement::VertexElement(VertexElementType type, VertexElementSemantic semantic, unsigned char index = 0, bool perInstance = false) noexcept
    engine->RegisterObjectBehaviour("VertexElement", asBEHAVE_CONSTRUCT, "void f(VertexElementType, VertexElementSemantic, uint8 = 0, bool = false)", AS_FUNCTION_OBJFIRST(VertexElement_VertexElement_VertexElementType_VertexElementSemantic_unsignedchar_bool), AS_CALL_CDECL_OBJFIRST);

    // VertexElement::~VertexElement() | Implicitly-declared
    engine->RegisterObjectBehaviour("VertexElement", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(VertexElement), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_VertexElement(members);
    RegisterMembers(engine, "VertexElement", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_VertexElement
        REGISTER_CLASS_MANUAL_PART_VertexElement();
    #endif

    // VertexElement& VertexElement::operator =(const VertexElement&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VertexElement>(engine, "VertexElement");
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

    RegisterSubclass<Object, View>(engine, "Object", "View");
    RegisterSubclass<RefCounted, View>(engine, "RefCounted", "View");

    MemberCollection members;
    CollectMembers_View(members);
    RegisterMembers(engine, "View", members);

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

    RegisterSubclass<Window, View3D>(engine, "Window", "View3D");
    RegisterSubclass<BorderImage, View3D>(engine, "BorderImage", "View3D");
    RegisterSubclass<UIElement, View3D>(engine, "UIElement", "View3D");
    RegisterSubclass<Animatable, View3D>(engine, "Animatable", "View3D");
    RegisterSubclass<Serializable, View3D>(engine, "Serializable", "View3D");
    RegisterSubclass<Object, View3D>(engine, "Object", "View3D");
    RegisterSubclass<RefCounted, View3D>(engine, "RefCounted", "View3D");

    MemberCollection members;
    CollectMembers_View3D(members);
    RegisterMembers(engine, "View3D", members);

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

// Viewport::Viewport(Context* context, Scene* scene, Camera* camera, RenderPath* renderPath = nullptr)
static Viewport* Viewport_Viewport_Context_Scene_Camera_RenderPath(Scene* scene, Camera* camera, RenderPath* renderPath)
{
    Context* context = GetScriptContext();
    return new Viewport(context, scene, camera, renderPath);
}

// Viewport::Viewport(Context* context, Scene* scene, Camera* camera, const IntRect& rect, RenderPath* renderPath = nullptr)
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
    // Viewport::Viewport(Context* context, Scene* scene, Camera* camera, RenderPath* renderPath = nullptr)
    engine->RegisterObjectBehaviour("Viewport", asBEHAVE_FACTORY, "Viewport@+ f(Scene@+, Camera@+, RenderPath@+ = null)", AS_FUNCTION(Viewport_Viewport_Context_Scene_Camera_RenderPath) , AS_CALL_CDECL);
    // Viewport::Viewport(Context* context, Scene* scene, Camera* camera, const IntRect& rect, RenderPath* renderPath = nullptr)
    engine->RegisterObjectBehaviour("Viewport", asBEHAVE_FACTORY, "Viewport@+ f(Scene@+, Camera@+, const IntRect&in, RenderPath@+ = null)", AS_FUNCTION(Viewport_Viewport_Context_Scene_Camera_IntRect_RenderPath) , AS_CALL_CDECL);

    RegisterSubclass<Object, Viewport>(engine, "Object", "Viewport");
    RegisterSubclass<RefCounted, Viewport>(engine, "RefCounted", "Viewport");

    MemberCollection members;
    CollectMembers_Viewport(members);
    RegisterMembers(engine, "Viewport", members);

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

    RegisterSubclass<BorderImage, Window>(engine, "BorderImage", "Window");
    RegisterSubclass<UIElement, Window>(engine, "UIElement", "Window");
    RegisterSubclass<Animatable, Window>(engine, "Animatable", "Window");
    RegisterSubclass<Serializable, Window>(engine, "Serializable", "Window");
    RegisterSubclass<Object, Window>(engine, "Object", "Window");
    RegisterSubclass<RefCounted, Window>(engine, "RefCounted", "Window");

    MemberCollection members;
    CollectMembers_Window(members);
    RegisterMembers(engine, "Window", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Window
        REGISTER_CLASS_MANUAL_PART_Window();
    #endif
}

// struct WindowModeParams | File: ../Graphics/Graphics.h
static void Register_WindowModeParams(asIScriptEngine* engine)
{
    // WindowModeParams::~WindowModeParams() | Implicitly-declared
    engine->RegisterObjectBehaviour("WindowModeParams", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(WindowModeParams), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_WindowModeParams(members);
    RegisterMembers(engine, "WindowModeParams", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_WindowModeParams
        REGISTER_CLASS_MANUAL_PART_WindowModeParams();
    #endif

    // WindowModeParams& WindowModeParams::operator =(const WindowModeParams&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<WindowModeParams>(engine, "WindowModeParams");
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

    RegisterSubclass<Object, WorkQueue>(engine, "Object", "WorkQueue");
    RegisterSubclass<RefCounted, WorkQueue>(engine, "RefCounted", "WorkQueue");

    MemberCollection members;
    CollectMembers_WorkQueue(members);
    RegisterMembers(engine, "WorkQueue", members);

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

    MemberCollection members;
    CollectMembers_XMLElement(members);
    RegisterMembers(engine, "XMLElement", members);

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

    RegisterSubclass<Resource, XMLFile>(engine, "Resource", "XMLFile");
    RegisterSubclass<Object, XMLFile>(engine, "Object", "XMLFile");
    RegisterSubclass<RefCounted, XMLFile>(engine, "RefCounted", "XMLFile");

    MemberCollection members;
    CollectMembers_XMLFile(members);
    RegisterMembers(engine, "XMLFile", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_XMLFile
        REGISTER_CLASS_MANUAL_PART_XMLFile();
    #endif
}

// explicit XPathQuery::XPathQuery(const String& queryString, const String& variableString = String::EMPTY)
static void XPathQuery_XPathQuery_String_String(XPathQuery* ptr, const String& queryString, const String& variableString)
{
    new(ptr) XPathQuery(queryString, variableString);
}

// class XPathQuery | File: ../Resource/XMLElement.h
static void Register_XPathQuery(asIScriptEngine* engine)
{
    // explicit XPathQuery::XPathQuery(const String& queryString, const String& variableString = String::EMPTY)
    engine->RegisterObjectBehaviour("XPathQuery", asBEHAVE_CONSTRUCT, "void f(const String&in, const String&in = String::EMPTY)", AS_FUNCTION_OBJFIRST(XPathQuery_XPathQuery_String_String), AS_CALL_CDECL_OBJFIRST);

    // XPathQuery::~XPathQuery()
    engine->RegisterObjectBehaviour("XPathQuery", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(XPathQuery), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_XPathQuery(members);
    RegisterMembers(engine, "XPathQuery", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_XPathQuery
        REGISTER_CLASS_MANUAL_PART_XPathQuery();
    #endif

    // XPathQuery& XPathQuery::operator =(const XPathQuery&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<XPathQuery>(engine, "XPathQuery");
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

    MemberCollection members;
    CollectMembers_XPathResultSet(members);
    RegisterMembers(engine, "XPathResultSet", members);

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

    RegisterSubclass<Drawable, Zone>(engine, "Drawable", "Zone");
    RegisterSubclass<Component, Zone>(engine, "Component", "Zone");
    RegisterSubclass<Animatable, Zone>(engine, "Animatable", "Zone");
    RegisterSubclass<Serializable, Zone>(engine, "Serializable", "Zone");
    RegisterSubclass<Object, Zone>(engine, "Object", "Zone");
    RegisterSubclass<RefCounted, Zone>(engine, "RefCounted", "Zone");

    MemberCollection members;
    CollectMembers_Zone(members);
    RegisterMembers(engine, "Zone", members);

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

    RegisterSubclass<Object, Database>(engine, "Object", "Database");
    RegisterSubclass<RefCounted, Database>(engine, "RefCounted", "Database");

    MemberCollection members;
    CollectMembers_Database(members);
    RegisterMembers(engine, "Database", members);

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

    RegisterSubclass<Component, IKConstraint>(engine, "Component", "IKConstraint");
    RegisterSubclass<Animatable, IKConstraint>(engine, "Animatable", "IKConstraint");
    RegisterSubclass<Serializable, IKConstraint>(engine, "Serializable", "IKConstraint");
    RegisterSubclass<Object, IKConstraint>(engine, "Object", "IKConstraint");
    RegisterSubclass<RefCounted, IKConstraint>(engine, "RefCounted", "IKConstraint");

    MemberCollection members;
    CollectMembers_IKConstraint(members);
    RegisterMembers(engine, "IKConstraint", members);

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

    RegisterSubclass<Component, IKEffector>(engine, "Component", "IKEffector");
    RegisterSubclass<Animatable, IKEffector>(engine, "Animatable", "IKEffector");
    RegisterSubclass<Serializable, IKEffector>(engine, "Serializable", "IKEffector");
    RegisterSubclass<Object, IKEffector>(engine, "Object", "IKEffector");
    RegisterSubclass<RefCounted, IKEffector>(engine, "RefCounted", "IKEffector");

    MemberCollection members;
    CollectMembers_IKEffector(members);
    RegisterMembers(engine, "IKEffector", members);

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

    RegisterSubclass<Component, IKSolver>(engine, "Component", "IKSolver");
    RegisterSubclass<Animatable, IKSolver>(engine, "Animatable", "IKSolver");
    RegisterSubclass<Serializable, IKSolver>(engine, "Serializable", "IKSolver");
    RegisterSubclass<Object, IKSolver>(engine, "Object", "IKSolver");
    RegisterSubclass<RefCounted, IKSolver>(engine, "RefCounted", "IKSolver");

    MemberCollection members;
    CollectMembers_IKSolver(members);
    RegisterMembers(engine, "IKSolver", members);

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

    RegisterSubclass<Component, CrowdAgent>(engine, "Component", "CrowdAgent");
    RegisterSubclass<Animatable, CrowdAgent>(engine, "Animatable", "CrowdAgent");
    RegisterSubclass<Serializable, CrowdAgent>(engine, "Serializable", "CrowdAgent");
    RegisterSubclass<Object, CrowdAgent>(engine, "Object", "CrowdAgent");
    RegisterSubclass<RefCounted, CrowdAgent>(engine, "RefCounted", "CrowdAgent");

    MemberCollection members;
    CollectMembers_CrowdAgent(members);
    RegisterMembers(engine, "CrowdAgent", members);

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

    RegisterSubclass<Component, CrowdManager>(engine, "Component", "CrowdManager");
    RegisterSubclass<Animatable, CrowdManager>(engine, "Animatable", "CrowdManager");
    RegisterSubclass<Serializable, CrowdManager>(engine, "Serializable", "CrowdManager");
    RegisterSubclass<Object, CrowdManager>(engine, "Object", "CrowdManager");
    RegisterSubclass<RefCounted, CrowdManager>(engine, "RefCounted", "CrowdManager");

    MemberCollection members;
    CollectMembers_CrowdManager(members);
    RegisterMembers(engine, "CrowdManager", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_CrowdManager
        REGISTER_CLASS_MANUAL_PART_CrowdManager();
    #endif
}

// struct CrowdObstacleAvoidanceParams | File: ../Navigation/CrowdManager.h
static void Register_CrowdObstacleAvoidanceParams(asIScriptEngine* engine)
{
    MemberCollection members;
    CollectMembers_CrowdObstacleAvoidanceParams(members);
    RegisterMembers(engine, "CrowdObstacleAvoidanceParams", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_CrowdObstacleAvoidanceParams
        REGISTER_CLASS_MANUAL_PART_CrowdObstacleAvoidanceParams();
    #endif

    // CrowdObstacleAvoidanceParams& CrowdObstacleAvoidanceParams::operator =(const CrowdObstacleAvoidanceParams&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<CrowdObstacleAvoidanceParams>(engine, "CrowdObstacleAvoidanceParams");
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

    RegisterSubclass<NavigationMesh, DynamicNavigationMesh>(engine, "NavigationMesh", "DynamicNavigationMesh");
    RegisterSubclass<Component, DynamicNavigationMesh>(engine, "Component", "DynamicNavigationMesh");
    RegisterSubclass<Animatable, DynamicNavigationMesh>(engine, "Animatable", "DynamicNavigationMesh");
    RegisterSubclass<Serializable, DynamicNavigationMesh>(engine, "Serializable", "DynamicNavigationMesh");
    RegisterSubclass<Object, DynamicNavigationMesh>(engine, "Object", "DynamicNavigationMesh");
    RegisterSubclass<RefCounted, DynamicNavigationMesh>(engine, "RefCounted", "DynamicNavigationMesh");

    MemberCollection members;
    CollectMembers_DynamicNavigationMesh(members);
    RegisterMembers(engine, "DynamicNavigationMesh", members);

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

    RegisterSubclass<Component, NavArea>(engine, "Component", "NavArea");
    RegisterSubclass<Animatable, NavArea>(engine, "Animatable", "NavArea");
    RegisterSubclass<Serializable, NavArea>(engine, "Serializable", "NavArea");
    RegisterSubclass<Object, NavArea>(engine, "Object", "NavArea");
    RegisterSubclass<RefCounted, NavArea>(engine, "RefCounted", "NavArea");

    MemberCollection members;
    CollectMembers_NavArea(members);
    RegisterMembers(engine, "NavArea", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NavArea
        REGISTER_CLASS_MANUAL_PART_NavArea();
    #endif
}

// struct NavAreaStub | File: ../Navigation/NavBuildData.h
static void Register_NavAreaStub(asIScriptEngine* engine)
{
    // NavAreaStub::~NavAreaStub() | Implicitly-declared
    engine->RegisterObjectBehaviour("NavAreaStub", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NavAreaStub), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_NavAreaStub(members);
    RegisterMembers(engine, "NavAreaStub", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NavAreaStub
        REGISTER_CLASS_MANUAL_PART_NavAreaStub();
    #endif

    // NavAreaStub& NavAreaStub::operator =(const NavAreaStub&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavAreaStub>(engine, "NavAreaStub");
}

// struct NavBuildData | File: ../Navigation/NavBuildData.h
static void Register_NavBuildData(asIScriptEngine* engine)
{
    // virtual NavBuildData::~NavBuildData()
    engine->RegisterObjectBehaviour("NavBuildData", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NavBuildData), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_NavBuildData(members);
    RegisterMembers(engine, "NavBuildData", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NavBuildData
        REGISTER_CLASS_MANUAL_PART_NavBuildData();
    #endif

    // NavBuildData& NavBuildData::operator =(const NavBuildData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavBuildData>(engine, "NavBuildData");
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

    RegisterSubclass<Component, Navigable>(engine, "Component", "Navigable");
    RegisterSubclass<Animatable, Navigable>(engine, "Animatable", "Navigable");
    RegisterSubclass<Serializable, Navigable>(engine, "Serializable", "Navigable");
    RegisterSubclass<Object, Navigable>(engine, "Object", "Navigable");
    RegisterSubclass<RefCounted, Navigable>(engine, "RefCounted", "Navigable");

    MemberCollection members;
    CollectMembers_Navigable(members);
    RegisterMembers(engine, "Navigable", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Navigable
        REGISTER_CLASS_MANUAL_PART_Navigable();
    #endif
}

// struct NavigationGeometryInfo | File: ../Navigation/NavigationMesh.h
static void Register_NavigationGeometryInfo(asIScriptEngine* engine)
{
    // NavigationGeometryInfo::~NavigationGeometryInfo() | Implicitly-declared
    engine->RegisterObjectBehaviour("NavigationGeometryInfo", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NavigationGeometryInfo), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_NavigationGeometryInfo(members);
    RegisterMembers(engine, "NavigationGeometryInfo", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NavigationGeometryInfo
        REGISTER_CLASS_MANUAL_PART_NavigationGeometryInfo();
    #endif

    // NavigationGeometryInfo& NavigationGeometryInfo::operator =(const NavigationGeometryInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavigationGeometryInfo>(engine, "NavigationGeometryInfo");
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

    RegisterSubclass<Component, NavigationMesh>(engine, "Component", "NavigationMesh");
    RegisterSubclass<Animatable, NavigationMesh>(engine, "Animatable", "NavigationMesh");
    RegisterSubclass<Serializable, NavigationMesh>(engine, "Serializable", "NavigationMesh");
    RegisterSubclass<Object, NavigationMesh>(engine, "Object", "NavigationMesh");
    RegisterSubclass<RefCounted, NavigationMesh>(engine, "RefCounted", "NavigationMesh");

    MemberCollection members;
    CollectMembers_NavigationMesh(members);
    RegisterMembers(engine, "NavigationMesh", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NavigationMesh
        REGISTER_CLASS_MANUAL_PART_NavigationMesh();
    #endif
}

// struct NavigationPathPoint | File: ../Navigation/NavigationMesh.h
static void Register_NavigationPathPoint(asIScriptEngine* engine)
{
    // NavigationPathPoint::~NavigationPathPoint() | Implicitly-declared
    engine->RegisterObjectBehaviour("NavigationPathPoint", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(NavigationPathPoint), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_NavigationPathPoint(members);
    RegisterMembers(engine, "NavigationPathPoint", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NavigationPathPoint
        REGISTER_CLASS_MANUAL_PART_NavigationPathPoint();
    #endif

    // NavigationPathPoint& NavigationPathPoint::operator =(const NavigationPathPoint&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavigationPathPoint>(engine, "NavigationPathPoint");
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

    RegisterSubclass<Component, Obstacle>(engine, "Component", "Obstacle");
    RegisterSubclass<Animatable, Obstacle>(engine, "Animatable", "Obstacle");
    RegisterSubclass<Serializable, Obstacle>(engine, "Serializable", "Obstacle");
    RegisterSubclass<Object, Obstacle>(engine, "Object", "Obstacle");
    RegisterSubclass<RefCounted, Obstacle>(engine, "RefCounted", "Obstacle");

    MemberCollection members;
    CollectMembers_Obstacle(members);
    RegisterMembers(engine, "Obstacle", members);

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

    RegisterSubclass<Component, OffMeshConnection>(engine, "Component", "OffMeshConnection");
    RegisterSubclass<Animatable, OffMeshConnection>(engine, "Animatable", "OffMeshConnection");
    RegisterSubclass<Serializable, OffMeshConnection>(engine, "Serializable", "OffMeshConnection");
    RegisterSubclass<Object, OffMeshConnection>(engine, "Object", "OffMeshConnection");
    RegisterSubclass<RefCounted, OffMeshConnection>(engine, "RefCounted", "OffMeshConnection");

    MemberCollection members;
    CollectMembers_OffMeshConnection(members);
    RegisterMembers(engine, "OffMeshConnection", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_OffMeshConnection
        REGISTER_CLASS_MANUAL_PART_OffMeshConnection();
    #endif
}

// struct SimpleNavBuildData | File: ../Navigation/NavBuildData.h
static void Register_SimpleNavBuildData(asIScriptEngine* engine)
{
    // SimpleNavBuildData::~SimpleNavBuildData() override
    engine->RegisterObjectBehaviour("SimpleNavBuildData", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(SimpleNavBuildData), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_SimpleNavBuildData(members);
    RegisterMembers(engine, "SimpleNavBuildData", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_SimpleNavBuildData
        REGISTER_CLASS_MANUAL_PART_SimpleNavBuildData();
    #endif

    // SimpleNavBuildData& SimpleNavBuildData::operator =(const SimpleNavBuildData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<SimpleNavBuildData>(engine, "SimpleNavBuildData");
}

#endif // def URHO3D_NAVIGATION

#ifdef URHO3D_NETWORK

// class Connection | File: ../Network/Connection.h
static void Register_Connection(asIScriptEngine* engine)
{
    // Connection::Connection(Context* context, bool isClient, const SLNet::AddressOrGUID& address, SLNet::RakPeerInterface* peer)
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind

    RegisterSubclass<Object, Connection>(engine, "Object", "Connection");
    RegisterSubclass<RefCounted, Connection>(engine, "RefCounted", "Connection");

    MemberCollection members;
    CollectMembers_Connection(members);
    RegisterMembers(engine, "Connection", members);

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

    RegisterSubclass<RefCounted, HttpRequest>(engine, "RefCounted", "HttpRequest");
    RegisterSubclass<Deserializer, HttpRequest>(engine, "Deserializer", "HttpRequest");

    MemberCollection members;
    CollectMembers_HttpRequest(members);
    RegisterMembers(engine, "HttpRequest", members);

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

    RegisterSubclass<Object, Network>(engine, "Object", "Network");
    RegisterSubclass<RefCounted, Network>(engine, "RefCounted", "Network");

    MemberCollection members;
    CollectMembers_Network(members);
    RegisterMembers(engine, "Network", members);

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

    RegisterSubclass<Component, NetworkPriority>(engine, "Component", "NetworkPriority");
    RegisterSubclass<Animatable, NetworkPriority>(engine, "Animatable", "NetworkPriority");
    RegisterSubclass<Serializable, NetworkPriority>(engine, "Serializable", "NetworkPriority");
    RegisterSubclass<Object, NetworkPriority>(engine, "Object", "NetworkPriority");
    RegisterSubclass<RefCounted, NetworkPriority>(engine, "RefCounted", "NetworkPriority");

    MemberCollection members;
    CollectMembers_NetworkPriority(members);
    RegisterMembers(engine, "NetworkPriority", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_NetworkPriority
        REGISTER_CLASS_MANUAL_PART_NetworkPriority();
    #endif
}

// struct PackageDownload | File: ../Network/Connection.h
static void Register_PackageDownload(asIScriptEngine* engine)
{
    // PackageDownload::~PackageDownload() | Implicitly-declared
    engine->RegisterObjectBehaviour("PackageDownload", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PackageDownload), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_PackageDownload(members);
    RegisterMembers(engine, "PackageDownload", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_PackageDownload
        REGISTER_CLASS_MANUAL_PART_PackageDownload();
    #endif

    // PackageDownload& PackageDownload::operator =(const PackageDownload&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PackageDownload>(engine, "PackageDownload");
}

// struct PackageUpload | File: ../Network/Connection.h
static void Register_PackageUpload(asIScriptEngine* engine)
{
    // PackageUpload::~PackageUpload() | Implicitly-declared
    engine->RegisterObjectBehaviour("PackageUpload", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PackageUpload), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_PackageUpload(members);
    RegisterMembers(engine, "PackageUpload", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_PackageUpload
        REGISTER_CLASS_MANUAL_PART_PackageUpload();
    #endif

    // PackageUpload& PackageUpload::operator =(const PackageUpload&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PackageUpload>(engine, "PackageUpload");
}

// struct RemoteEvent | File: ../Network/Connection.h
static void Register_RemoteEvent(asIScriptEngine* engine)
{
    // RemoteEvent::~RemoteEvent() | Implicitly-declared
    engine->RegisterObjectBehaviour("RemoteEvent", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(RemoteEvent), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_RemoteEvent(members);
    RegisterMembers(engine, "RemoteEvent", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_RemoteEvent
        REGISTER_CLASS_MANUAL_PART_RemoteEvent();
    #endif

    // RemoteEvent& RemoteEvent::operator =(const RemoteEvent&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RemoteEvent>(engine, "RemoteEvent");
}

#endif // def URHO3D_NETWORK

#ifdef URHO3D_PHYSICS

// struct CollisionGeometryData | File: ../Physics/CollisionShape.h
static void Register_CollisionGeometryData(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, CollisionGeometryData>(engine, "RefCounted", "CollisionGeometryData");

    MemberCollection members;
    CollectMembers_CollisionGeometryData(members);
    RegisterMembers(engine, "CollisionGeometryData", members);

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

    RegisterSubclass<Component, CollisionShape>(engine, "Component", "CollisionShape");
    RegisterSubclass<Animatable, CollisionShape>(engine, "Animatable", "CollisionShape");
    RegisterSubclass<Serializable, CollisionShape>(engine, "Serializable", "CollisionShape");
    RegisterSubclass<Object, CollisionShape>(engine, "Object", "CollisionShape");
    RegisterSubclass<RefCounted, CollisionShape>(engine, "RefCounted", "CollisionShape");

    MemberCollection members;
    CollectMembers_CollisionShape(members);
    RegisterMembers(engine, "CollisionShape", members);

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

    RegisterSubclass<Component, Constraint>(engine, "Component", "Constraint");
    RegisterSubclass<Animatable, Constraint>(engine, "Animatable", "Constraint");
    RegisterSubclass<Serializable, Constraint>(engine, "Serializable", "Constraint");
    RegisterSubclass<Object, Constraint>(engine, "Object", "Constraint");
    RegisterSubclass<RefCounted, Constraint>(engine, "RefCounted", "Constraint");

    MemberCollection members;
    CollectMembers_Constraint(members);
    RegisterMembers(engine, "Constraint", members);

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

    RegisterSubclass<CollisionGeometryData, ConvexData>(engine, "CollisionGeometryData", "ConvexData");
    RegisterSubclass<RefCounted, ConvexData>(engine, "RefCounted", "ConvexData");

    MemberCollection members;
    CollectMembers_ConvexData(members);
    RegisterMembers(engine, "ConvexData", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ConvexData
        REGISTER_CLASS_MANUAL_PART_ConvexData();
    #endif
}

// struct DelayedWorldTransform | File: ../Physics/PhysicsWorld.h
static void Register_DelayedWorldTransform(asIScriptEngine* engine)
{
    // DelayedWorldTransform::~DelayedWorldTransform() | Implicitly-declared
    engine->RegisterObjectBehaviour("DelayedWorldTransform", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(DelayedWorldTransform), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_DelayedWorldTransform(members);
    RegisterMembers(engine, "DelayedWorldTransform", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_DelayedWorldTransform
        REGISTER_CLASS_MANUAL_PART_DelayedWorldTransform();
    #endif

    // DelayedWorldTransform& DelayedWorldTransform::operator =(const DelayedWorldTransform&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DelayedWorldTransform>(engine, "DelayedWorldTransform");
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

    RegisterSubclass<CollisionGeometryData, GImpactMeshData>(engine, "CollisionGeometryData", "GImpactMeshData");
    RegisterSubclass<RefCounted, GImpactMeshData>(engine, "RefCounted", "GImpactMeshData");

    MemberCollection members;
    CollectMembers_GImpactMeshData(members);
    RegisterMembers(engine, "GImpactMeshData", members);

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

    RegisterSubclass<CollisionGeometryData, HeightfieldData>(engine, "CollisionGeometryData", "HeightfieldData");
    RegisterSubclass<RefCounted, HeightfieldData>(engine, "RefCounted", "HeightfieldData");

    MemberCollection members;
    CollectMembers_HeightfieldData(members);
    RegisterMembers(engine, "HeightfieldData", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_HeightfieldData
        REGISTER_CLASS_MANUAL_PART_HeightfieldData();
    #endif
}

// struct ManifoldPair | File: ../Physics/PhysicsWorld.h
static void Register_ManifoldPair(asIScriptEngine* engine)
{
    // ManifoldPair::~ManifoldPair() | Implicitly-declared
    engine->RegisterObjectBehaviour("ManifoldPair", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(ManifoldPair), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_ManifoldPair(members);
    RegisterMembers(engine, "ManifoldPair", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ManifoldPair
        REGISTER_CLASS_MANUAL_PART_ManifoldPair();
    #endif

    // ManifoldPair& ManifoldPair::operator =(const ManifoldPair&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ManifoldPair>(engine, "ManifoldPair");
}

// struct PhysicsRaycastResult | File: ../Physics/PhysicsWorld.h
static void Register_PhysicsRaycastResult(asIScriptEngine* engine)
{
    // PhysicsRaycastResult::~PhysicsRaycastResult() | Implicitly-declared
    engine->RegisterObjectBehaviour("PhysicsRaycastResult", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PhysicsRaycastResult), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_PhysicsRaycastResult(members);
    RegisterMembers(engine, "PhysicsRaycastResult", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_PhysicsRaycastResult
        REGISTER_CLASS_MANUAL_PART_PhysicsRaycastResult();
    #endif

    // PhysicsRaycastResult& PhysicsRaycastResult::operator =(const PhysicsRaycastResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PhysicsRaycastResult>(engine, "PhysicsRaycastResult");
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

    RegisterSubclass<Component, PhysicsWorld>(engine, "Component", "PhysicsWorld");
    RegisterSubclass<Animatable, PhysicsWorld>(engine, "Animatable", "PhysicsWorld");
    RegisterSubclass<Serializable, PhysicsWorld>(engine, "Serializable", "PhysicsWorld");
    RegisterSubclass<Object, PhysicsWorld>(engine, "Object", "PhysicsWorld");
    RegisterSubclass<RefCounted, PhysicsWorld>(engine, "RefCounted", "PhysicsWorld");

    MemberCollection members;
    CollectMembers_PhysicsWorld(members);
    RegisterMembers(engine, "PhysicsWorld", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_PhysicsWorld
        REGISTER_CLASS_MANUAL_PART_PhysicsWorld();
    #endif
}

// struct PhysicsWorldConfig | File: ../Physics/PhysicsWorld.h
static void Register_PhysicsWorldConfig(asIScriptEngine* engine)
{
    // PhysicsWorldConfig::~PhysicsWorldConfig() | Implicitly-declared
    engine->RegisterObjectBehaviour("PhysicsWorldConfig", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PhysicsWorldConfig), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_PhysicsWorldConfig(members);
    RegisterMembers(engine, "PhysicsWorldConfig", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_PhysicsWorldConfig
        REGISTER_CLASS_MANUAL_PART_PhysicsWorldConfig();
    #endif

    // PhysicsWorldConfig& PhysicsWorldConfig::operator =(const PhysicsWorldConfig&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PhysicsWorldConfig>(engine, "PhysicsWorldConfig");
}

// class RaycastVehicle | File: ../Physics/RaycastVehicle.h
static void Register_RaycastVehicle(asIScriptEngine* engine)
{
    // explicit RaycastVehicle::RaycastVehicle(Urho3D::Context* context)
    // Error: type "Urho3D::Context*" can not automatically bind

    RegisterSubclass<LogicComponent, RaycastVehicle>(engine, "LogicComponent", "RaycastVehicle");
    RegisterSubclass<Component, RaycastVehicle>(engine, "Component", "RaycastVehicle");
    RegisterSubclass<Animatable, RaycastVehicle>(engine, "Animatable", "RaycastVehicle");
    RegisterSubclass<Serializable, RaycastVehicle>(engine, "Serializable", "RaycastVehicle");
    RegisterSubclass<Object, RaycastVehicle>(engine, "Object", "RaycastVehicle");
    RegisterSubclass<RefCounted, RaycastVehicle>(engine, "RefCounted", "RaycastVehicle");

    MemberCollection members;
    CollectMembers_RaycastVehicle(members);
    RegisterMembers(engine, "RaycastVehicle", members);

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

    RegisterSubclass<Component, RigidBody>(engine, "Component", "RigidBody");
    RegisterSubclass<Animatable, RigidBody>(engine, "Animatable", "RigidBody");
    RegisterSubclass<Serializable, RigidBody>(engine, "Serializable", "RigidBody");
    RegisterSubclass<Object, RigidBody>(engine, "Object", "RigidBody");
    RegisterSubclass<RefCounted, RigidBody>(engine, "RefCounted", "RigidBody");

    MemberCollection members;
    CollectMembers_RigidBody(members);
    RegisterMembers(engine, "RigidBody", members);

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

    RegisterSubclass<CollisionGeometryData, TriangleMeshData>(engine, "CollisionGeometryData", "TriangleMeshData");
    RegisterSubclass<RefCounted, TriangleMeshData>(engine, "RefCounted", "TriangleMeshData");

    MemberCollection members;
    CollectMembers_TriangleMeshData(members);
    RegisterMembers(engine, "TriangleMeshData", members);

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

    RegisterSubclass<StaticSprite2D, AnimatedSprite2D>(engine, "StaticSprite2D", "AnimatedSprite2D");
    RegisterSubclass<Drawable2D, AnimatedSprite2D>(engine, "Drawable2D", "AnimatedSprite2D");
    RegisterSubclass<Drawable, AnimatedSprite2D>(engine, "Drawable", "AnimatedSprite2D");
    RegisterSubclass<Component, AnimatedSprite2D>(engine, "Component", "AnimatedSprite2D");
    RegisterSubclass<Animatable, AnimatedSprite2D>(engine, "Animatable", "AnimatedSprite2D");
    RegisterSubclass<Serializable, AnimatedSprite2D>(engine, "Serializable", "AnimatedSprite2D");
    RegisterSubclass<Object, AnimatedSprite2D>(engine, "Object", "AnimatedSprite2D");
    RegisterSubclass<RefCounted, AnimatedSprite2D>(engine, "RefCounted", "AnimatedSprite2D");

    MemberCollection members;
    CollectMembers_AnimatedSprite2D(members);
    RegisterMembers(engine, "AnimatedSprite2D", members);

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

    RegisterSubclass<Resource, AnimationSet2D>(engine, "Resource", "AnimationSet2D");
    RegisterSubclass<Object, AnimationSet2D>(engine, "Object", "AnimationSet2D");
    RegisterSubclass<RefCounted, AnimationSet2D>(engine, "RefCounted", "AnimationSet2D");

    MemberCollection members;
    CollectMembers_AnimationSet2D(members);
    RegisterMembers(engine, "AnimationSet2D", members);

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

    RegisterSubclass<CollisionShape2D, CollisionBox2D>(engine, "CollisionShape2D", "CollisionBox2D");
    RegisterSubclass<Component, CollisionBox2D>(engine, "Component", "CollisionBox2D");
    RegisterSubclass<Animatable, CollisionBox2D>(engine, "Animatable", "CollisionBox2D");
    RegisterSubclass<Serializable, CollisionBox2D>(engine, "Serializable", "CollisionBox2D");
    RegisterSubclass<Object, CollisionBox2D>(engine, "Object", "CollisionBox2D");
    RegisterSubclass<RefCounted, CollisionBox2D>(engine, "RefCounted", "CollisionBox2D");

    MemberCollection members;
    CollectMembers_CollisionBox2D(members);
    RegisterMembers(engine, "CollisionBox2D", members);

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

    RegisterSubclass<CollisionShape2D, CollisionChain2D>(engine, "CollisionShape2D", "CollisionChain2D");
    RegisterSubclass<Component, CollisionChain2D>(engine, "Component", "CollisionChain2D");
    RegisterSubclass<Animatable, CollisionChain2D>(engine, "Animatable", "CollisionChain2D");
    RegisterSubclass<Serializable, CollisionChain2D>(engine, "Serializable", "CollisionChain2D");
    RegisterSubclass<Object, CollisionChain2D>(engine, "Object", "CollisionChain2D");
    RegisterSubclass<RefCounted, CollisionChain2D>(engine, "RefCounted", "CollisionChain2D");

    MemberCollection members;
    CollectMembers_CollisionChain2D(members);
    RegisterMembers(engine, "CollisionChain2D", members);

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

    RegisterSubclass<CollisionShape2D, CollisionCircle2D>(engine, "CollisionShape2D", "CollisionCircle2D");
    RegisterSubclass<Component, CollisionCircle2D>(engine, "Component", "CollisionCircle2D");
    RegisterSubclass<Animatable, CollisionCircle2D>(engine, "Animatable", "CollisionCircle2D");
    RegisterSubclass<Serializable, CollisionCircle2D>(engine, "Serializable", "CollisionCircle2D");
    RegisterSubclass<Object, CollisionCircle2D>(engine, "Object", "CollisionCircle2D");
    RegisterSubclass<RefCounted, CollisionCircle2D>(engine, "RefCounted", "CollisionCircle2D");

    MemberCollection members;
    CollectMembers_CollisionCircle2D(members);
    RegisterMembers(engine, "CollisionCircle2D", members);

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

    RegisterSubclass<CollisionShape2D, CollisionEdge2D>(engine, "CollisionShape2D", "CollisionEdge2D");
    RegisterSubclass<Component, CollisionEdge2D>(engine, "Component", "CollisionEdge2D");
    RegisterSubclass<Animatable, CollisionEdge2D>(engine, "Animatable", "CollisionEdge2D");
    RegisterSubclass<Serializable, CollisionEdge2D>(engine, "Serializable", "CollisionEdge2D");
    RegisterSubclass<Object, CollisionEdge2D>(engine, "Object", "CollisionEdge2D");
    RegisterSubclass<RefCounted, CollisionEdge2D>(engine, "RefCounted", "CollisionEdge2D");

    MemberCollection members;
    CollectMembers_CollisionEdge2D(members);
    RegisterMembers(engine, "CollisionEdge2D", members);

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

    RegisterSubclass<CollisionShape2D, CollisionPolygon2D>(engine, "CollisionShape2D", "CollisionPolygon2D");
    RegisterSubclass<Component, CollisionPolygon2D>(engine, "Component", "CollisionPolygon2D");
    RegisterSubclass<Animatable, CollisionPolygon2D>(engine, "Animatable", "CollisionPolygon2D");
    RegisterSubclass<Serializable, CollisionPolygon2D>(engine, "Serializable", "CollisionPolygon2D");
    RegisterSubclass<Object, CollisionPolygon2D>(engine, "Object", "CollisionPolygon2D");
    RegisterSubclass<RefCounted, CollisionPolygon2D>(engine, "RefCounted", "CollisionPolygon2D");

    MemberCollection members;
    CollectMembers_CollisionPolygon2D(members);
    RegisterMembers(engine, "CollisionPolygon2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_CollisionPolygon2D
        REGISTER_CLASS_MANUAL_PART_CollisionPolygon2D();
    #endif
}

// class CollisionShape2D | File: ../Urho2D/CollisionShape2D.h
static void Register_CollisionShape2D(asIScriptEngine* engine)
{
    RegisterSubclass<Component, CollisionShape2D>(engine, "Component", "CollisionShape2D");
    RegisterSubclass<Animatable, CollisionShape2D>(engine, "Animatable", "CollisionShape2D");
    RegisterSubclass<Serializable, CollisionShape2D>(engine, "Serializable", "CollisionShape2D");
    RegisterSubclass<Object, CollisionShape2D>(engine, "Object", "CollisionShape2D");
    RegisterSubclass<RefCounted, CollisionShape2D>(engine, "RefCounted", "CollisionShape2D");

    MemberCollection members;
    CollectMembers_CollisionShape2D(members);
    RegisterMembers(engine, "CollisionShape2D", members);

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

    RegisterSubclass<Component, Constraint2D>(engine, "Component", "Constraint2D");
    RegisterSubclass<Animatable, Constraint2D>(engine, "Animatable", "Constraint2D");
    RegisterSubclass<Serializable, Constraint2D>(engine, "Serializable", "Constraint2D");
    RegisterSubclass<Object, Constraint2D>(engine, "Object", "Constraint2D");
    RegisterSubclass<RefCounted, Constraint2D>(engine, "RefCounted", "Constraint2D");

    MemberCollection members;
    CollectMembers_Constraint2D(members);
    RegisterMembers(engine, "Constraint2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintDistance2D>(engine, "Constraint2D", "ConstraintDistance2D");
    RegisterSubclass<Component, ConstraintDistance2D>(engine, "Component", "ConstraintDistance2D");
    RegisterSubclass<Animatable, ConstraintDistance2D>(engine, "Animatable", "ConstraintDistance2D");
    RegisterSubclass<Serializable, ConstraintDistance2D>(engine, "Serializable", "ConstraintDistance2D");
    RegisterSubclass<Object, ConstraintDistance2D>(engine, "Object", "ConstraintDistance2D");
    RegisterSubclass<RefCounted, ConstraintDistance2D>(engine, "RefCounted", "ConstraintDistance2D");

    MemberCollection members;
    CollectMembers_ConstraintDistance2D(members);
    RegisterMembers(engine, "ConstraintDistance2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintFriction2D>(engine, "Constraint2D", "ConstraintFriction2D");
    RegisterSubclass<Component, ConstraintFriction2D>(engine, "Component", "ConstraintFriction2D");
    RegisterSubclass<Animatable, ConstraintFriction2D>(engine, "Animatable", "ConstraintFriction2D");
    RegisterSubclass<Serializable, ConstraintFriction2D>(engine, "Serializable", "ConstraintFriction2D");
    RegisterSubclass<Object, ConstraintFriction2D>(engine, "Object", "ConstraintFriction2D");
    RegisterSubclass<RefCounted, ConstraintFriction2D>(engine, "RefCounted", "ConstraintFriction2D");

    MemberCollection members;
    CollectMembers_ConstraintFriction2D(members);
    RegisterMembers(engine, "ConstraintFriction2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintGear2D>(engine, "Constraint2D", "ConstraintGear2D");
    RegisterSubclass<Component, ConstraintGear2D>(engine, "Component", "ConstraintGear2D");
    RegisterSubclass<Animatable, ConstraintGear2D>(engine, "Animatable", "ConstraintGear2D");
    RegisterSubclass<Serializable, ConstraintGear2D>(engine, "Serializable", "ConstraintGear2D");
    RegisterSubclass<Object, ConstraintGear2D>(engine, "Object", "ConstraintGear2D");
    RegisterSubclass<RefCounted, ConstraintGear2D>(engine, "RefCounted", "ConstraintGear2D");

    MemberCollection members;
    CollectMembers_ConstraintGear2D(members);
    RegisterMembers(engine, "ConstraintGear2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintMotor2D>(engine, "Constraint2D", "ConstraintMotor2D");
    RegisterSubclass<Component, ConstraintMotor2D>(engine, "Component", "ConstraintMotor2D");
    RegisterSubclass<Animatable, ConstraintMotor2D>(engine, "Animatable", "ConstraintMotor2D");
    RegisterSubclass<Serializable, ConstraintMotor2D>(engine, "Serializable", "ConstraintMotor2D");
    RegisterSubclass<Object, ConstraintMotor2D>(engine, "Object", "ConstraintMotor2D");
    RegisterSubclass<RefCounted, ConstraintMotor2D>(engine, "RefCounted", "ConstraintMotor2D");

    MemberCollection members;
    CollectMembers_ConstraintMotor2D(members);
    RegisterMembers(engine, "ConstraintMotor2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintMouse2D>(engine, "Constraint2D", "ConstraintMouse2D");
    RegisterSubclass<Component, ConstraintMouse2D>(engine, "Component", "ConstraintMouse2D");
    RegisterSubclass<Animatable, ConstraintMouse2D>(engine, "Animatable", "ConstraintMouse2D");
    RegisterSubclass<Serializable, ConstraintMouse2D>(engine, "Serializable", "ConstraintMouse2D");
    RegisterSubclass<Object, ConstraintMouse2D>(engine, "Object", "ConstraintMouse2D");
    RegisterSubclass<RefCounted, ConstraintMouse2D>(engine, "RefCounted", "ConstraintMouse2D");

    MemberCollection members;
    CollectMembers_ConstraintMouse2D(members);
    RegisterMembers(engine, "ConstraintMouse2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintPrismatic2D>(engine, "Constraint2D", "ConstraintPrismatic2D");
    RegisterSubclass<Component, ConstraintPrismatic2D>(engine, "Component", "ConstraintPrismatic2D");
    RegisterSubclass<Animatable, ConstraintPrismatic2D>(engine, "Animatable", "ConstraintPrismatic2D");
    RegisterSubclass<Serializable, ConstraintPrismatic2D>(engine, "Serializable", "ConstraintPrismatic2D");
    RegisterSubclass<Object, ConstraintPrismatic2D>(engine, "Object", "ConstraintPrismatic2D");
    RegisterSubclass<RefCounted, ConstraintPrismatic2D>(engine, "RefCounted", "ConstraintPrismatic2D");

    MemberCollection members;
    CollectMembers_ConstraintPrismatic2D(members);
    RegisterMembers(engine, "ConstraintPrismatic2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintPulley2D>(engine, "Constraint2D", "ConstraintPulley2D");
    RegisterSubclass<Component, ConstraintPulley2D>(engine, "Component", "ConstraintPulley2D");
    RegisterSubclass<Animatable, ConstraintPulley2D>(engine, "Animatable", "ConstraintPulley2D");
    RegisterSubclass<Serializable, ConstraintPulley2D>(engine, "Serializable", "ConstraintPulley2D");
    RegisterSubclass<Object, ConstraintPulley2D>(engine, "Object", "ConstraintPulley2D");
    RegisterSubclass<RefCounted, ConstraintPulley2D>(engine, "RefCounted", "ConstraintPulley2D");

    MemberCollection members;
    CollectMembers_ConstraintPulley2D(members);
    RegisterMembers(engine, "ConstraintPulley2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintRevolute2D>(engine, "Constraint2D", "ConstraintRevolute2D");
    RegisterSubclass<Component, ConstraintRevolute2D>(engine, "Component", "ConstraintRevolute2D");
    RegisterSubclass<Animatable, ConstraintRevolute2D>(engine, "Animatable", "ConstraintRevolute2D");
    RegisterSubclass<Serializable, ConstraintRevolute2D>(engine, "Serializable", "ConstraintRevolute2D");
    RegisterSubclass<Object, ConstraintRevolute2D>(engine, "Object", "ConstraintRevolute2D");
    RegisterSubclass<RefCounted, ConstraintRevolute2D>(engine, "RefCounted", "ConstraintRevolute2D");

    MemberCollection members;
    CollectMembers_ConstraintRevolute2D(members);
    RegisterMembers(engine, "ConstraintRevolute2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintRope2D>(engine, "Constraint2D", "ConstraintRope2D");
    RegisterSubclass<Component, ConstraintRope2D>(engine, "Component", "ConstraintRope2D");
    RegisterSubclass<Animatable, ConstraintRope2D>(engine, "Animatable", "ConstraintRope2D");
    RegisterSubclass<Serializable, ConstraintRope2D>(engine, "Serializable", "ConstraintRope2D");
    RegisterSubclass<Object, ConstraintRope2D>(engine, "Object", "ConstraintRope2D");
    RegisterSubclass<RefCounted, ConstraintRope2D>(engine, "RefCounted", "ConstraintRope2D");

    MemberCollection members;
    CollectMembers_ConstraintRope2D(members);
    RegisterMembers(engine, "ConstraintRope2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintWeld2D>(engine, "Constraint2D", "ConstraintWeld2D");
    RegisterSubclass<Component, ConstraintWeld2D>(engine, "Component", "ConstraintWeld2D");
    RegisterSubclass<Animatable, ConstraintWeld2D>(engine, "Animatable", "ConstraintWeld2D");
    RegisterSubclass<Serializable, ConstraintWeld2D>(engine, "Serializable", "ConstraintWeld2D");
    RegisterSubclass<Object, ConstraintWeld2D>(engine, "Object", "ConstraintWeld2D");
    RegisterSubclass<RefCounted, ConstraintWeld2D>(engine, "RefCounted", "ConstraintWeld2D");

    MemberCollection members;
    CollectMembers_ConstraintWeld2D(members);
    RegisterMembers(engine, "ConstraintWeld2D", members);

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

    RegisterSubclass<Constraint2D, ConstraintWheel2D>(engine, "Constraint2D", "ConstraintWheel2D");
    RegisterSubclass<Component, ConstraintWheel2D>(engine, "Component", "ConstraintWheel2D");
    RegisterSubclass<Animatable, ConstraintWheel2D>(engine, "Animatable", "ConstraintWheel2D");
    RegisterSubclass<Serializable, ConstraintWheel2D>(engine, "Serializable", "ConstraintWheel2D");
    RegisterSubclass<Object, ConstraintWheel2D>(engine, "Object", "ConstraintWheel2D");
    RegisterSubclass<RefCounted, ConstraintWheel2D>(engine, "RefCounted", "ConstraintWheel2D");

    MemberCollection members;
    CollectMembers_ConstraintWheel2D(members);
    RegisterMembers(engine, "ConstraintWheel2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ConstraintWheel2D
        REGISTER_CLASS_MANUAL_PART_ConstraintWheel2D();
    #endif
}

// struct DelayedWorldTransform2D | File: ../Urho2D/PhysicsWorld2D.h
static void Register_DelayedWorldTransform2D(asIScriptEngine* engine)
{
    // DelayedWorldTransform2D::~DelayedWorldTransform2D() | Implicitly-declared
    engine->RegisterObjectBehaviour("DelayedWorldTransform2D", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(DelayedWorldTransform2D), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_DelayedWorldTransform2D(members);
    RegisterMembers(engine, "DelayedWorldTransform2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_DelayedWorldTransform2D
        REGISTER_CLASS_MANUAL_PART_DelayedWorldTransform2D();
    #endif

    // DelayedWorldTransform2D& DelayedWorldTransform2D::operator =(const DelayedWorldTransform2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DelayedWorldTransform2D>(engine, "DelayedWorldTransform2D");
}

// class Drawable2D | File: ../Urho2D/Drawable2D.h
static void Register_Drawable2D(asIScriptEngine* engine)
{
    RegisterSubclass<Drawable, Drawable2D>(engine, "Drawable", "Drawable2D");
    RegisterSubclass<Component, Drawable2D>(engine, "Component", "Drawable2D");
    RegisterSubclass<Animatable, Drawable2D>(engine, "Animatable", "Drawable2D");
    RegisterSubclass<Serializable, Drawable2D>(engine, "Serializable", "Drawable2D");
    RegisterSubclass<Object, Drawable2D>(engine, "Object", "Drawable2D");
    RegisterSubclass<RefCounted, Drawable2D>(engine, "RefCounted", "Drawable2D");

    MemberCollection members;
    CollectMembers_Drawable2D(members);
    RegisterMembers(engine, "Drawable2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Drawable2D
        REGISTER_CLASS_MANUAL_PART_Drawable2D();
    #endif
}

// struct Particle2D | File: ../Urho2D/ParticleEmitter2D.h
static void Register_Particle2D(asIScriptEngine* engine)
{
    // Particle2D::~Particle2D() | Implicitly-declared
    engine->RegisterObjectBehaviour("Particle2D", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Particle2D), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Particle2D(members);
    RegisterMembers(engine, "Particle2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Particle2D
        REGISTER_CLASS_MANUAL_PART_Particle2D();
    #endif

    // Particle2D& Particle2D::operator =(const Particle2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Particle2D>(engine, "Particle2D");
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

    RegisterSubclass<Resource, ParticleEffect2D>(engine, "Resource", "ParticleEffect2D");
    RegisterSubclass<Object, ParticleEffect2D>(engine, "Object", "ParticleEffect2D");
    RegisterSubclass<RefCounted, ParticleEffect2D>(engine, "RefCounted", "ParticleEffect2D");

    MemberCollection members;
    CollectMembers_ParticleEffect2D(members);
    RegisterMembers(engine, "ParticleEffect2D", members);

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

    RegisterSubclass<Drawable2D, ParticleEmitter2D>(engine, "Drawable2D", "ParticleEmitter2D");
    RegisterSubclass<Drawable, ParticleEmitter2D>(engine, "Drawable", "ParticleEmitter2D");
    RegisterSubclass<Component, ParticleEmitter2D>(engine, "Component", "ParticleEmitter2D");
    RegisterSubclass<Animatable, ParticleEmitter2D>(engine, "Animatable", "ParticleEmitter2D");
    RegisterSubclass<Serializable, ParticleEmitter2D>(engine, "Serializable", "ParticleEmitter2D");
    RegisterSubclass<Object, ParticleEmitter2D>(engine, "Object", "ParticleEmitter2D");
    RegisterSubclass<RefCounted, ParticleEmitter2D>(engine, "RefCounted", "ParticleEmitter2D");

    MemberCollection members;
    CollectMembers_ParticleEmitter2D(members);
    RegisterMembers(engine, "ParticleEmitter2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_ParticleEmitter2D
        REGISTER_CLASS_MANUAL_PART_ParticleEmitter2D();
    #endif
}

// struct PhysicsRaycastResult2D | File: ../Urho2D/PhysicsWorld2D.h
static void Register_PhysicsRaycastResult2D(asIScriptEngine* engine)
{
    // PhysicsRaycastResult2D::~PhysicsRaycastResult2D() | Implicitly-declared
    engine->RegisterObjectBehaviour("PhysicsRaycastResult2D", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(PhysicsRaycastResult2D), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_PhysicsRaycastResult2D(members);
    RegisterMembers(engine, "PhysicsRaycastResult2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_PhysicsRaycastResult2D
        REGISTER_CLASS_MANUAL_PART_PhysicsRaycastResult2D();
    #endif

    // PhysicsRaycastResult2D& PhysicsRaycastResult2D::operator =(const PhysicsRaycastResult2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PhysicsRaycastResult2D>(engine, "PhysicsRaycastResult2D");
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

    RegisterSubclass<Component, PhysicsWorld2D>(engine, "Component", "PhysicsWorld2D");
    RegisterSubclass<Animatable, PhysicsWorld2D>(engine, "Animatable", "PhysicsWorld2D");
    RegisterSubclass<Serializable, PhysicsWorld2D>(engine, "Serializable", "PhysicsWorld2D");
    RegisterSubclass<Object, PhysicsWorld2D>(engine, "Object", "PhysicsWorld2D");
    RegisterSubclass<RefCounted, PhysicsWorld2D>(engine, "RefCounted", "PhysicsWorld2D");

    MemberCollection members;
    CollectMembers_PhysicsWorld2D(members);
    RegisterMembers(engine, "PhysicsWorld2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_PhysicsWorld2D
        REGISTER_CLASS_MANUAL_PART_PhysicsWorld2D();
    #endif
}

// class PropertySet2D | File: ../Urho2D/TileMapDefs2D.h
static void Register_PropertySet2D(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, PropertySet2D>(engine, "RefCounted", "PropertySet2D");

    MemberCollection members;
    CollectMembers_PropertySet2D(members);
    RegisterMembers(engine, "PropertySet2D", members);

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

    RegisterSubclass<Drawable, Renderer2D>(engine, "Drawable", "Renderer2D");
    RegisterSubclass<Component, Renderer2D>(engine, "Component", "Renderer2D");
    RegisterSubclass<Animatable, Renderer2D>(engine, "Animatable", "Renderer2D");
    RegisterSubclass<Serializable, Renderer2D>(engine, "Serializable", "Renderer2D");
    RegisterSubclass<Object, Renderer2D>(engine, "Object", "Renderer2D");
    RegisterSubclass<RefCounted, Renderer2D>(engine, "RefCounted", "Renderer2D");

    MemberCollection members;
    CollectMembers_Renderer2D(members);
    RegisterMembers(engine, "Renderer2D", members);

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

    RegisterSubclass<Component, RigidBody2D>(engine, "Component", "RigidBody2D");
    RegisterSubclass<Animatable, RigidBody2D>(engine, "Animatable", "RigidBody2D");
    RegisterSubclass<Serializable, RigidBody2D>(engine, "Serializable", "RigidBody2D");
    RegisterSubclass<Object, RigidBody2D>(engine, "Object", "RigidBody2D");
    RegisterSubclass<RefCounted, RigidBody2D>(engine, "RefCounted", "RigidBody2D");

    MemberCollection members;
    CollectMembers_RigidBody2D(members);
    RegisterMembers(engine, "RigidBody2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_RigidBody2D
        REGISTER_CLASS_MANUAL_PART_RigidBody2D();
    #endif
}

// struct SourceBatch2D | File: ../Urho2D/Drawable2D.h
static void Register_SourceBatch2D(asIScriptEngine* engine)
{
    // SourceBatch2D::~SourceBatch2D() | Implicitly-declared
    engine->RegisterObjectBehaviour("SourceBatch2D", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(SourceBatch2D), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_SourceBatch2D(members);
    RegisterMembers(engine, "SourceBatch2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_SourceBatch2D
        REGISTER_CLASS_MANUAL_PART_SourceBatch2D();
    #endif

    // SourceBatch2D& SourceBatch2D::operator =(const SourceBatch2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<SourceBatch2D>(engine, "SourceBatch2D");
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

    RegisterSubclass<Resource, Sprite2D>(engine, "Resource", "Sprite2D");
    RegisterSubclass<Object, Sprite2D>(engine, "Object", "Sprite2D");
    RegisterSubclass<RefCounted, Sprite2D>(engine, "RefCounted", "Sprite2D");

    MemberCollection members;
    CollectMembers_Sprite2D(members);
    RegisterMembers(engine, "Sprite2D", members);

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

    RegisterSubclass<Resource, SpriteSheet2D>(engine, "Resource", "SpriteSheet2D");
    RegisterSubclass<Object, SpriteSheet2D>(engine, "Object", "SpriteSheet2D");
    RegisterSubclass<RefCounted, SpriteSheet2D>(engine, "RefCounted", "SpriteSheet2D");

    MemberCollection members;
    CollectMembers_SpriteSheet2D(members);
    RegisterMembers(engine, "SpriteSheet2D", members);

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

    RegisterSubclass<Drawable2D, StaticSprite2D>(engine, "Drawable2D", "StaticSprite2D");
    RegisterSubclass<Drawable, StaticSprite2D>(engine, "Drawable", "StaticSprite2D");
    RegisterSubclass<Component, StaticSprite2D>(engine, "Component", "StaticSprite2D");
    RegisterSubclass<Animatable, StaticSprite2D>(engine, "Animatable", "StaticSprite2D");
    RegisterSubclass<Serializable, StaticSprite2D>(engine, "Serializable", "StaticSprite2D");
    RegisterSubclass<Object, StaticSprite2D>(engine, "Object", "StaticSprite2D");
    RegisterSubclass<RefCounted, StaticSprite2D>(engine, "RefCounted", "StaticSprite2D");

    MemberCollection members;
    CollectMembers_StaticSprite2D(members);
    RegisterMembers(engine, "StaticSprite2D", members);

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

    RegisterSubclass<StaticSprite2D, StretchableSprite2D>(engine, "StaticSprite2D", "StretchableSprite2D");
    RegisterSubclass<Drawable2D, StretchableSprite2D>(engine, "Drawable2D", "StretchableSprite2D");
    RegisterSubclass<Drawable, StretchableSprite2D>(engine, "Drawable", "StretchableSprite2D");
    RegisterSubclass<Component, StretchableSprite2D>(engine, "Component", "StretchableSprite2D");
    RegisterSubclass<Animatable, StretchableSprite2D>(engine, "Animatable", "StretchableSprite2D");
    RegisterSubclass<Serializable, StretchableSprite2D>(engine, "Serializable", "StretchableSprite2D");
    RegisterSubclass<Object, StretchableSprite2D>(engine, "Object", "StretchableSprite2D");
    RegisterSubclass<RefCounted, StretchableSprite2D>(engine, "RefCounted", "StretchableSprite2D");

    MemberCollection members;
    CollectMembers_StretchableSprite2D(members);
    RegisterMembers(engine, "StretchableSprite2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_StretchableSprite2D
        REGISTER_CLASS_MANUAL_PART_StretchableSprite2D();
    #endif
}

// class Tile2D | File: ../Urho2D/TileMapDefs2D.h
static void Register_Tile2D(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, Tile2D>(engine, "RefCounted", "Tile2D");

    MemberCollection members;
    CollectMembers_Tile2D(members);
    RegisterMembers(engine, "Tile2D", members);

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

    RegisterSubclass<Component, TileMap2D>(engine, "Component", "TileMap2D");
    RegisterSubclass<Animatable, TileMap2D>(engine, "Animatable", "TileMap2D");
    RegisterSubclass<Serializable, TileMap2D>(engine, "Serializable", "TileMap2D");
    RegisterSubclass<Object, TileMap2D>(engine, "Object", "TileMap2D");
    RegisterSubclass<RefCounted, TileMap2D>(engine, "RefCounted", "TileMap2D");

    MemberCollection members;
    CollectMembers_TileMap2D(members);
    RegisterMembers(engine, "TileMap2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_TileMap2D
        REGISTER_CLASS_MANUAL_PART_TileMap2D();
    #endif
}

// struct TileMapInfo2D | File: ../Urho2D/TileMapDefs2D.h
static void Register_TileMapInfo2D(asIScriptEngine* engine)
{
    engine->RegisterObjectBehaviour("TileMapInfo2D", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("TileMapInfo2D", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);

    MemberCollection members;
    CollectMembers_TileMapInfo2D(members);
    RegisterMembers(engine, "TileMapInfo2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_TileMapInfo2D
        REGISTER_CLASS_MANUAL_PART_TileMapInfo2D();
    #endif

    // TileMapInfo2D& TileMapInfo2D::operator =(const TileMapInfo2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<TileMapInfo2D>(engine, "TileMapInfo2D");
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

    RegisterSubclass<Component, TileMapLayer2D>(engine, "Component", "TileMapLayer2D");
    RegisterSubclass<Animatable, TileMapLayer2D>(engine, "Animatable", "TileMapLayer2D");
    RegisterSubclass<Serializable, TileMapLayer2D>(engine, "Serializable", "TileMapLayer2D");
    RegisterSubclass<Object, TileMapLayer2D>(engine, "Object", "TileMapLayer2D");
    RegisterSubclass<RefCounted, TileMapLayer2D>(engine, "RefCounted", "TileMapLayer2D");

    MemberCollection members;
    CollectMembers_TileMapLayer2D(members);
    RegisterMembers(engine, "TileMapLayer2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_TileMapLayer2D
        REGISTER_CLASS_MANUAL_PART_TileMapLayer2D();
    #endif
}

// class TileMapObject2D | File: ../Urho2D/TileMapDefs2D.h
static void Register_TileMapObject2D(asIScriptEngine* engine)
{
    RegisterSubclass<RefCounted, TileMapObject2D>(engine, "RefCounted", "TileMapObject2D");

    MemberCollection members;
    CollectMembers_TileMapObject2D(members);
    RegisterMembers(engine, "TileMapObject2D", members);

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

    RegisterSubclass<Resource, TmxFile2D>(engine, "Resource", "TmxFile2D");
    RegisterSubclass<Object, TmxFile2D>(engine, "Object", "TmxFile2D");
    RegisterSubclass<RefCounted, TmxFile2D>(engine, "RefCounted", "TmxFile2D");

    MemberCollection members;
    CollectMembers_TmxFile2D(members);
    RegisterMembers(engine, "TmxFile2D", members);

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

    RegisterSubclass<TmxLayer2D, TmxImageLayer2D>(engine, "TmxLayer2D", "TmxImageLayer2D");
    RegisterSubclass<RefCounted, TmxImageLayer2D>(engine, "RefCounted", "TmxImageLayer2D");

    MemberCollection members;
    CollectMembers_TmxImageLayer2D(members);
    RegisterMembers(engine, "TmxImageLayer2D", members);

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

    RegisterSubclass<RefCounted, TmxLayer2D>(engine, "RefCounted", "TmxLayer2D");

    MemberCollection members;
    CollectMembers_TmxLayer2D(members);
    RegisterMembers(engine, "TmxLayer2D", members);

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

    RegisterSubclass<TmxLayer2D, TmxObjectGroup2D>(engine, "TmxLayer2D", "TmxObjectGroup2D");
    RegisterSubclass<RefCounted, TmxObjectGroup2D>(engine, "RefCounted", "TmxObjectGroup2D");

    MemberCollection members;
    CollectMembers_TmxObjectGroup2D(members);
    RegisterMembers(engine, "TmxObjectGroup2D", members);

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

    RegisterSubclass<TmxLayer2D, TmxTileLayer2D>(engine, "TmxLayer2D", "TmxTileLayer2D");
    RegisterSubclass<RefCounted, TmxTileLayer2D>(engine, "RefCounted", "TmxTileLayer2D");

    MemberCollection members;
    CollectMembers_TmxTileLayer2D(members);
    RegisterMembers(engine, "TmxTileLayer2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_TmxTileLayer2D
        REGISTER_CLASS_MANUAL_PART_TmxTileLayer2D();
    #endif
}

// struct Vertex2D | File: ../Urho2D/Drawable2D.h
static void Register_Vertex2D(asIScriptEngine* engine)
{
    // Vertex2D::~Vertex2D() | Implicitly-declared
    engine->RegisterObjectBehaviour("Vertex2D", asBEHAVE_DESTRUCT, "void f()", AS_DESTRUCTOR(Vertex2D), AS_CALL_CDECL_OBJFIRST);

    MemberCollection members;
    CollectMembers_Vertex2D(members);
    RegisterMembers(engine, "Vertex2D", members);

    #ifdef REGISTER_CLASS_MANUAL_PART_Vertex2D
        REGISTER_CLASS_MANUAL_PART_Vertex2D();
    #endif

    // Vertex2D& Vertex2D::operator =(const Vertex2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Vertex2D>(engine, "Vertex2D");
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
