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
void CollectMembers_AbstractFile(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Deserializer(methods);
    CollectMembers_Serializer(methods);

    // -virtual const String& Deserializer::GetName() const

    // virtual void AbstractFile::SetName(const String& name)
    // const String& AbstractFile::GetName() const override
}

// class AllContentOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_AllContentOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // Intersection AllContentOctreeQuery::TestOctant(const BoundingBox& box, bool inside) override
    // void AllContentOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
}

// struct AllocatorBlock | File: ../Container/Allocator.h
void CollectMembers_AllocatorBlock(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct AllocatorNode | File: ../Container/Allocator.h
void CollectMembers_AllocatorNode(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Animatable | File: ../Scene/Animatable.h
void CollectMembers_Animatable(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Serializable(methods);

    // -virtual bool Serializable::LoadJSON(const JSONValue& source)
    // -virtual bool Serializable::LoadXML(const XMLElement& source)
    // -virtual bool Serializable::SaveJSON(JSONValue& dest) const
    // -virtual bool Serializable::SaveXML(XMLElement& dest) const

    // bool Animatable::LoadXML(const XMLElement& source) override
    // bool Animatable::SaveXML(XMLElement& dest) const override
    // bool Animatable::LoadJSON(const JSONValue& source) override
    // bool Animatable::SaveJSON(JSONValue& dest) const override
    // void Animatable::SetAnimationEnabled(bool enable)
    // void Animatable::SetAnimationTime(float time)
    // void Animatable::SetObjectAnimation(ObjectAnimation* objectAnimation)
    // void Animatable::SetAttributeAnimation(const String& name, ValueAnimation* attributeAnimation, WrapMode wrapMode=WM_LOOP, float speed=1.0f)
    // void Animatable::SetAttributeAnimationWrapMode(const String& name, WrapMode wrapMode)
    // void Animatable::SetAttributeAnimationSpeed(const String& name, float speed)
    // void Animatable::SetAttributeAnimationTime(const String& name, float time)
    // void Animatable::RemoveObjectAnimation()
    // void Animatable::RemoveAttributeAnimation(const String& name)
    // bool Animatable::GetAnimationEnabled() const
    // ObjectAnimation* Animatable::GetObjectAnimation() const
    // ValueAnimation* Animatable::GetAttributeAnimation(const String& name) const
    // WrapMode Animatable::GetAttributeAnimationWrapMode(const String& name) const
    // float Animatable::GetAttributeAnimationSpeed(const String& name) const
    // float Animatable::GetAttributeAnimationTime(const String& name) const
    // void Animatable::SetObjectAnimationAttr(const ResourceRef& value)
    // ResourceRef Animatable::GetObjectAnimationAttr() const
}

// class AnimatedModel | File: ../Graphics/AnimatedModel.h
void CollectMembers_AnimatedModel(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_StaticModel(methods);

    // -ResourceRef StaticModel::GetModelAttr() const
    // -bool Animatable::LoadJSON(const JSONValue& source) override
    // -bool Animatable::LoadXML(const XMLElement& source) override
    // -static void StaticModel::RegisterObject(Context* context)
    // -virtual UpdateGeometryType Drawable::GetUpdateGeometryType()
    // -virtual bool Serializable::Load(Deserializer& source)
    // -virtual void Drawable::Update(const FrameInfo& frame)
    // -virtual void Drawable::UpdateGeometry(const FrameInfo& frame)
    // -virtual void Serializable::ApplyAttributes()
    // -virtual void StaticModel::SetModel(Model* model)
    // -void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // -void StaticModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // -void StaticModel::SetModelAttr(const ResourceRef& value)
    // -void StaticModel::UpdateBatches(const FrameInfo& frame) override

    // bool AnimatedModel::Load(Deserializer& source) override
    // bool AnimatedModel::LoadXML(const XMLElement& source) override
    // bool AnimatedModel::LoadJSON(const JSONValue& source) override
    // void AnimatedModel::ApplyAttributes() override
    // void AnimatedModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // void AnimatedModel::Update(const FrameInfo& frame) override
    // void AnimatedModel::UpdateBatches(const FrameInfo& frame) override
    // void AnimatedModel::UpdateGeometry(const FrameInfo& frame) override
    // UpdateGeometryType AnimatedModel::GetUpdateGeometryType() override
    // void AnimatedModel::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void AnimatedModel::SetModel(Model* model, bool createBones=true)
    // AnimationState* AnimatedModel::AddAnimationState(Animation* animation)
    // void AnimatedModel::RemoveAnimationState(Animation* animation)
    // void AnimatedModel::RemoveAnimationState(const String& animationName)
    // void AnimatedModel::RemoveAnimationState(StringHash animationNameHash)
    // void AnimatedModel::RemoveAnimationState(AnimationState* state)
    // void AnimatedModel::RemoveAnimationState(unsigned index)
    // void AnimatedModel::RemoveAllAnimationStates()
    // void AnimatedModel::SetAnimationLodBias(float bias)
    // void AnimatedModel::SetUpdateInvisible(bool enable)
    // void AnimatedModel::SetMorphWeight(unsigned index, float weight)
    // void AnimatedModel::SetMorphWeight(const String& name, float weight)
    // void AnimatedModel::SetMorphWeight(StringHash nameHash, float weight)
    // void AnimatedModel::ResetMorphWeights()
    // void AnimatedModel::ApplyAnimation()
    // Skeleton& AnimatedModel::GetSkeleton()
    // const Vector<SharedPtr<AnimationState>>& AnimatedModel::GetAnimationStates() const
    // unsigned AnimatedModel::GetNumAnimationStates() const
    // AnimationState* AnimatedModel::GetAnimationState(Animation* animation) const
    // AnimationState* AnimatedModel::GetAnimationState(const String& animationName) const
    // AnimationState* AnimatedModel::GetAnimationState(StringHash animationNameHash) const
    // AnimationState* AnimatedModel::GetAnimationState(unsigned index) const
    // float AnimatedModel::GetAnimationLodBias() const
    // bool AnimatedModel::GetUpdateInvisible() const
    // const Vector<ModelMorph>& AnimatedModel::GetMorphs() const
    // const Vector<SharedPtr<VertexBuffer>>& AnimatedModel::GetMorphVertexBuffers() const
    // unsigned AnimatedModel::GetNumMorphs() const
    // float AnimatedModel::GetMorphWeight(unsigned index) const
    // float AnimatedModel::GetMorphWeight(const String& name) const
    // float AnimatedModel::GetMorphWeight(StringHash nameHash) const
    // bool AnimatedModel::IsMaster() const
    // void AnimatedModel::SetModelAttr(const ResourceRef& value)
    // void AnimatedModel::SetBonesEnabledAttr(const VariantVector& value)
    // void AnimatedModel::SetAnimationStatesAttr(const VariantVector& value)
    // void AnimatedModel::SetMorphsAttr(const PODVector<unsigned char>& value)
    // ResourceRef AnimatedModel::GetModelAttr() const
    // VariantVector AnimatedModel::GetBonesEnabledAttr() const
    // VariantVector AnimatedModel::GetAnimationStatesAttr() const
    // const PODVector<unsigned char>& AnimatedModel::GetMorphsAttr() const
    // const Vector<PODVector<unsigned>>& AnimatedModel::GetGeometryBoneMappings() const
    // const Vector<PODVector<Matrix3x4>>& AnimatedModel::GetGeometrySkinMatrices() const
    // void AnimatedModel::UpdateBoneBoundingBox()
}

// class Animation | File: ../Graphics/Animation.h
void CollectMembers_Animation(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ResourceWithMetadata(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const

    // bool Animation::BeginLoad(Deserializer& source) override
    // bool Animation::Save(Serializer& dest) const override
    // void Animation::SetAnimationName(const String& name)
    // void Animation::SetLength(float length)
    // AnimationTrack* Animation::CreateTrack(const String& name)
    // bool Animation::RemoveTrack(const String& name)
    // void Animation::RemoveAllTracks()
    // void Animation::SetTrigger(unsigned index, const AnimationTriggerPoint& trigger)
    // void Animation::AddTrigger(const AnimationTriggerPoint& trigger)
    // void Animation::AddTrigger(float time, bool timeIsNormalized, const Variant& data)
    // void Animation::RemoveTrigger(unsigned index)
    // void Animation::RemoveAllTriggers()
    // void Animation::SetNumTriggers(unsigned num)
    // SharedPtr<Animation> Animation::Clone(const String& cloneName=String::EMPTY) const
    // const String& Animation::GetAnimationName() const
    // StringHash Animation::GetAnimationNameHash() const
    // float Animation::GetLength() const
    // const HashMap<StringHash, AnimationTrack>& Animation::GetTracks() const
    // unsigned Animation::GetNumTracks() const
    // AnimationTrack* Animation::GetTrack(unsigned index)
    // AnimationTrack* Animation::GetTrack(const String& name)
    // AnimationTrack* Animation::GetTrack(StringHash nameHash)
    // const Vector<AnimationTriggerPoint>& Animation::GetTriggers() const
    // unsigned Animation::GetNumTriggers() const
    // AnimationTriggerPoint* Animation::GetTrigger(unsigned index)
}

// struct AnimationControl | File: ../Graphics/AnimationController.h
void CollectMembers_AnimationControl(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class AnimationController | File: ../Graphics/AnimationController.h
void CollectMembers_AnimationController(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::OnSetEnabled()

    // void AnimationController::OnSetEnabled() override
    // virtual void AnimationController::Update(float timeStep)
    // bool AnimationController::Play(const String& name, unsigned char layer, bool looped, float fadeInTime=0.0f)
    // bool AnimationController::PlayExclusive(const String& name, unsigned char layer, bool looped, float fadeTime=0.0f)
    // bool AnimationController::Stop(const String& name, float fadeOutTime=0.0f)
    // void AnimationController::StopLayer(unsigned char layer, float fadeOutTime=0.0f)
    // void AnimationController::StopAll(float fadeOutTime=0.0f)
    // bool AnimationController::Fade(const String& name, float targetWeight, float fadeTime)
    // bool AnimationController::FadeOthers(const String& name, float targetWeight, float fadeTime)
    // bool AnimationController::SetLayer(const String& name, unsigned char layer)
    // bool AnimationController::SetStartBone(const String& name, const String& startBoneName)
    // bool AnimationController::SetTime(const String& name, float time)
    // bool AnimationController::SetWeight(const String& name, float weight)
    // bool AnimationController::SetLooped(const String& name, bool enable)
    // bool AnimationController::SetSpeed(const String& name, float speed)
    // bool AnimationController::SetAutoFade(const String& name, float fadeOutTime)
    // bool AnimationController::SetRemoveOnCompletion(const String& name, bool removeOnCompletion)
    // bool AnimationController::SetBlendMode(const String& name, AnimationBlendMode mode)
    // bool AnimationController::IsPlaying(const String& name) const
    // bool AnimationController::IsPlaying(unsigned char layer) const
    // bool AnimationController::IsFadingIn(const String& name) const
    // bool AnimationController::IsFadingOut(const String& name) const
    // bool AnimationController::IsAtEnd(const String& name) const
    // unsigned char AnimationController::GetLayer(const String& name) const
    // Bone* AnimationController::GetStartBone(const String& name) const
    // const String& AnimationController::GetStartBoneName(const String& name) const
    // float AnimationController::GetTime(const String& name) const
    // float AnimationController::GetWeight(const String& name) const
    // bool AnimationController::IsLooped(const String& name) const
    // AnimationBlendMode AnimationController::GetBlendMode(const String& name) const
    // float AnimationController::GetLength(const String& name) const
    // float AnimationController::GetSpeed(const String& name) const
    // float AnimationController::GetFadeTarget(const String& name) const
    // float AnimationController::GetFadeTime(const String& name) const
    // float AnimationController::GetAutoFade(const String& name) const
    // bool AnimationController::GetRemoveOnCompletion(const String& name) const
    // AnimationState* AnimationController::GetAnimationState(const String& name) const
    // AnimationState* AnimationController::GetAnimationState(StringHash nameHash) const
    // const Vector<AnimationControl>& AnimationController::GetAnimations() const
    // void AnimationController::SetAnimationsAttr(const VariantVector& value)
    // void AnimationController::SetNetAnimationsAttr(const PODVector<unsigned char>& value)
    // void AnimationController::SetNodeAnimationStatesAttr(const VariantVector& value)
    // VariantVector AnimationController::GetAnimationsAttr() const
    // const PODVector<unsigned char>& AnimationController::GetNetAnimationsAttr() const
    // VariantVector AnimationController::GetNodeAnimationStatesAttr() const
}

// struct AnimationKeyFrame | File: ../Graphics/Animation.h
void CollectMembers_AnimationKeyFrame(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class AnimationState | File: ../Graphics/AnimationState.h
void CollectMembers_AnimationState(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // void AnimationState::SetStartBone(Bone* startBone)
    // void AnimationState::SetLooped(bool looped)
    // void AnimationState::SetWeight(float weight)
    // void AnimationState::SetBlendMode(AnimationBlendMode mode)
    // void AnimationState::SetTime(float time)
    // void AnimationState::SetBoneWeight(unsigned index, float weight, bool recursive=false)
    // void AnimationState::SetBoneWeight(const String& name, float weight, bool recursive=false)
    // void AnimationState::SetBoneWeight(StringHash nameHash, float weight, bool recursive=false)
    // void AnimationState::AddWeight(float delta)
    // void AnimationState::AddTime(float delta)
    // void AnimationState::SetLayer(unsigned char layer)
    // Animation* AnimationState::GetAnimation() const
    // AnimatedModel* AnimationState::GetModel() const
    // Node* AnimationState::GetNode() const
    // Bone* AnimationState::GetStartBone() const
    // float AnimationState::GetBoneWeight(unsigned index) const
    // float AnimationState::GetBoneWeight(const String& name) const
    // float AnimationState::GetBoneWeight(StringHash nameHash) const
    // unsigned AnimationState::GetTrackIndex(Node* node) const
    // unsigned AnimationState::GetTrackIndex(const String& name) const
    // unsigned AnimationState::GetTrackIndex(StringHash nameHash) const
    // bool AnimationState::IsEnabled() const
    // bool AnimationState::IsLooped() const
    // float AnimationState::GetWeight() const
    // AnimationBlendMode AnimationState::GetBlendMode() const
    // float AnimationState::GetTime() const
    // float AnimationState::GetLength() const
    // unsigned char AnimationState::GetLayer() const
    // void AnimationState::Apply()
}

// struct AnimationStateTrack | File: ../Graphics/AnimationState.h
void CollectMembers_AnimationStateTrack(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct AnimationTrack | File: ../Graphics/Animation.h
void CollectMembers_AnimationTrack(Vector<RegisterObjectMethodArgs>& methods)
{
    // void AnimationTrack::SetKeyFrame(unsigned index, const AnimationKeyFrame& keyFrame)
    // void AnimationTrack::AddKeyFrame(const AnimationKeyFrame& keyFrame)
    // void AnimationTrack::InsertKeyFrame(unsigned index, const AnimationKeyFrame& keyFrame)
    // void AnimationTrack::RemoveKeyFrame(unsigned index)
    // void AnimationTrack::RemoveAllKeyFrames()
    // AnimationKeyFrame* AnimationTrack::GetKeyFrame(unsigned index)
    // unsigned AnimationTrack::GetNumKeyFrames() const
    // bool AnimationTrack::GetKeyFrameIndex(float time, unsigned& index) const
}

// struct AnimationTriggerPoint | File: ../Graphics/Animation.h
void CollectMembers_AnimationTriggerPoint(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class AreaAllocator | File: ../Math/AreaAllocator.h
void CollectMembers_AreaAllocator(Vector<RegisterObjectMethodArgs>& methods)
{
    // void AreaAllocator::Reset(int width, int height, int maxWidth=0, int maxHeight=0, bool fastMode=true)
    // bool AreaAllocator::Allocate(int width, int height, int& x, int& y)
    // int AreaAllocator::GetWidth() const
    // int AreaAllocator::GetHeight() const
    // bool AreaAllocator::GetFastMode() const
}

// struct AsyncProgress | File: ../Scene/Scene.h
void CollectMembers_AsyncProgress(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class AttributeAccessor | File: ../Core/Attribute.h
void CollectMembers_AttributeAccessor(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // virtual void AttributeAccessor::Get(const Serializable* ptr, Variant& dest) const =0
    // virtual void AttributeAccessor::Set(Serializable* ptr, const Variant& src)=0
}

// class AttributeAnimationInfo | File: ../Scene/Animatable.h
void CollectMembers_AttributeAnimationInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ValueAnimationInfo(methods);

    // const AttributeInfo& AttributeAnimationInfo::GetAttributeInfo() const
}

// struct AttributeHandle | File: ../Core/Attribute.h
void CollectMembers_AttributeHandle(Vector<RegisterObjectMethodArgs>& methods)
{
    // AttributeHandle& AttributeHandle::SetMetadata(StringHash key, const Variant& value)
}

// struct AttributeInfo | File: ../Core/Attribute.h
void CollectMembers_AttributeInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    // const Variant& AttributeInfo::GetMetadata(const StringHash& key) const
    // template<class T> T AttributeInfo::GetMetadata(const StringHash& key) const
}

// class Audio | File: ../Audio/Audio.h
void CollectMembers_Audio(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // bool Audio::SetMode(int bufferLengthMSec, int mixRate, bool stereo, bool interpolation=true)
    // void Audio::Update(float timeStep)
    // bool Audio::Play()
    // void Audio::Stop()
    // void Audio::SetMasterGain(const String& type, float gain)
    // void Audio::PauseSoundType(const String& type)
    // void Audio::ResumeSoundType(const String& type)
    // void Audio::ResumeAll()
    // void Audio::SetListener(SoundListener* listener)
    // void Audio::StopSound(Sound* sound)
    // unsigned Audio::GetSampleSize() const
    // int Audio::GetMixRate() const
    // bool Audio::GetInterpolation() const
    // bool Audio::IsStereo() const
    // bool Audio::IsPlaying() const
    // bool Audio::IsInitialized() const
    // float Audio::GetMasterGain(const String& type) const
    // bool Audio::IsSoundTypePaused(const String& type) const
    // SoundListener* Audio::GetListener() const
    // const PODVector<SoundSource*>& Audio::GetSoundSources() const
    // bool Audio::HasMasterGain(const String& type) const
    // void Audio::AddSoundSource(SoundSource* soundSource)
    // void Audio::RemoveSoundSource(SoundSource* soundSource)
    // Mutex& Audio::GetMutex()
    // float Audio::GetSoundSourceMasterGain(StringHash typeHash) const
    // void Audio::MixOutput(void* dest, unsigned samples)
}

// class AutoProfileBlock | File: ../Core/Profiler.h
void CollectMembers_AutoProfileBlock(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct BackgroundLoadItem | File: ../Resource/BackgroundLoader.h
void CollectMembers_BackgroundLoadItem(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class BackgroundLoader | File: ../Resource/BackgroundLoader.h
void CollectMembers_BackgroundLoader(Vector<RegisterObjectMethodArgs>& methods)
{
    // void BackgroundLoader::ThreadFunction() override
    // bool BackgroundLoader::QueueResource(StringHash type, const String& name, bool sendEventOnFailure, Resource* caller)
    // void BackgroundLoader::WaitForResource(StringHash type, StringHash nameHash)
    // void BackgroundLoader::FinishResources(int maxMs)
    // unsigned BackgroundLoader::GetNumQueuedResources() const
}

// struct Batch | File: ../Graphics/Batch.h
void CollectMembers_Batch(Vector<RegisterObjectMethodArgs>& methods)
{
    // void Batch::CalculateSortKey()
    // void Batch::Prepare(View* view, Camera* camera, bool setModelTransform, bool allowDepthWrite) const
    // void Batch::Draw(View* view, Camera* camera, bool allowDepthWrite) const
}

// struct BatchGroup | File: ../Graphics/Batch.h
void CollectMembers_BatchGroup(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Batch(methods);

    // -void Batch::Draw(View* view, Camera* camera, bool allowDepthWrite) const

    // void BatchGroup::AddTransforms(const Batch& batch)
    // void BatchGroup::SetInstancingData(void* lockedData, unsigned stride, unsigned& freeIndex)
    // void BatchGroup::Draw(View* view, Camera* camera, bool allowDepthWrite) const
}

// struct BatchGroupKey | File: ../Graphics/Batch.h
void CollectMembers_BatchGroupKey(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool BatchGroupKey::operator==(const BatchGroupKey& rhs) const
    // bool BatchGroupKey::operator!=(const BatchGroupKey& rhs) const
    // unsigned BatchGroupKey::ToHash() const
}

// struct BatchQueue | File: ../Graphics/Batch.h
void CollectMembers_BatchQueue(Vector<RegisterObjectMethodArgs>& methods)
{
    // void BatchQueue::Clear(int maxSortedInstances)
    // void BatchQueue::SortBackToFront()
    // void BatchQueue::SortFrontToBack()
    // void BatchQueue::SortFrontToBack2Pass(PODVector<Batch*>& batches)
    // void BatchQueue::SetInstancingData(void* lockedData, unsigned stride, unsigned& freeIndex)
    // void BatchQueue::Draw(View* view, Camera* camera, bool markToStencil, bool usingLightOptimization, bool allowDepthWrite) const
    // unsigned BatchQueue::GetNumInstances() const
    // bool BatchQueue::IsEmpty() const
}

// struct BiasParameters | File: ../Graphics/Light.h
void CollectMembers_BiasParameters(Vector<RegisterObjectMethodArgs>& methods)
{
    // void BiasParameters::Validate()
}

// struct Billboard | File: ../Graphics/BillboardSet.h
void CollectMembers_Billboard(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class BillboardSet | File: ../Graphics/BillboardSet.h
void CollectMembers_BillboardSet(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -virtual UpdateGeometryType Drawable::GetUpdateGeometryType()
    // -virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // -virtual void Drawable::UpdateBatches(const FrameInfo& frame)
    // -virtual void Drawable::UpdateGeometry(const FrameInfo& frame)

    // void BillboardSet::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // void BillboardSet::UpdateBatches(const FrameInfo& frame) override
    // void BillboardSet::UpdateGeometry(const FrameInfo& frame) override
    // UpdateGeometryType BillboardSet::GetUpdateGeometryType() override
    // void BillboardSet::SetMaterial(Material* material)
    // void BillboardSet::SetNumBillboards(unsigned num)
    // void BillboardSet::SetRelative(bool enable)
    // void BillboardSet::SetScaled(bool enable)
    // void BillboardSet::SetSorted(bool enable)
    // void BillboardSet::SetFixedScreenSize(bool enable)
    // void BillboardSet::SetFaceCameraMode(FaceCameraMode mode)
    // void BillboardSet::SetMinAngle(float angle)
    // void BillboardSet::SetAnimationLodBias(float bias)
    // void BillboardSet::Commit()
    // Material* BillboardSet::GetMaterial() const
    // unsigned BillboardSet::GetNumBillboards() const
    // PODVector<Billboard>& BillboardSet::GetBillboards()
    // Billboard* BillboardSet::GetBillboard(unsigned index)
    // bool BillboardSet::IsRelative() const
    // bool BillboardSet::IsScaled() const
    // bool BillboardSet::IsSorted() const
    // bool BillboardSet::IsFixedScreenSize() const
    // FaceCameraMode BillboardSet::GetFaceCameraMode() const
    // float BillboardSet::GetMinAngle() const
    // float BillboardSet::GetAnimationLodBias() const
    // void BillboardSet::SetMaterialAttr(const ResourceRef& value)
    // void BillboardSet::SetBillboardsAttr(const VariantVector& value)
    // void BillboardSet::SetNetBillboardsAttr(const PODVector<unsigned char>& value)
    // ResourceRef BillboardSet::GetMaterialAttr() const
    // VariantVector BillboardSet::GetBillboardsAttr() const
    // const PODVector<unsigned char>& BillboardSet::GetNetBillboardsAttr() const
}

// struct Bone | File: ../Graphics/Skeleton.h
void CollectMembers_Bone(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class BorderImage | File: ../UI/BorderImage.h
void CollectMembers_BorderImage(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_UIElement(methods);

    // -static void UIElement::RegisterObject(Context* context)
    // -virtual void UIElement::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)

    // void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // void BorderImage::SetTexture(Texture* texture)
    // void BorderImage::SetImageRect(const IntRect& rect)
    // void BorderImage::SetFullImageRect()
    // void BorderImage::SetBorder(const IntRect& rect)
    // void BorderImage::SetImageBorder(const IntRect& rect)
    // void BorderImage::SetHoverOffset(const IntVector2& offset)
    // void BorderImage::SetHoverOffset(int x, int y)
    // void BorderImage::SetDisabledOffset(const IntVector2& offset)
    // void BorderImage::SetDisabledOffset(int x, int y)
    // void BorderImage::SetBlendMode(BlendMode mode)
    // void BorderImage::SetTiled(bool enable)
    // void BorderImage::SetMaterial(Material* material)
    // Texture* BorderImage::GetTexture() const
    // const IntRect& BorderImage::GetImageRect() const
    // const IntRect& BorderImage::GetBorder() const
    // const IntRect& BorderImage::GetImageBorder() const
    // const IntVector2& BorderImage::GetHoverOffset() const
    // const IntVector2& BorderImage::GetDisabledOffset() const
    // BlendMode BorderImage::GetBlendMode() const
    // bool BorderImage::IsTiled() const
    // Material* BorderImage::GetMaterial() const
    // void BorderImage::SetTextureAttr(const ResourceRef& value)
    // ResourceRef BorderImage::GetTextureAttr() const
    // void BorderImage::SetMaterialAttr(const ResourceRef& value)
    // ResourceRef BorderImage::GetMaterialAttr() const
}

// class BoundingBox | File: ../Math/BoundingBox.h
void CollectMembers_BoundingBox(Vector<RegisterObjectMethodArgs>& methods)
{
    // BoundingBox& BoundingBox::operator=(const BoundingBox& rhs) noexcept
    // BoundingBox& BoundingBox::operator=(const Rect& rhs) noexcept
    // bool BoundingBox::operator==(const BoundingBox& rhs) const
    // bool BoundingBox::operator!=(const BoundingBox& rhs) const
    // void BoundingBox::Define(const BoundingBox& box)
    // void BoundingBox::Define(const Rect& rect)
    // void BoundingBox::Define(const Vector3& min, const Vector3& max)
    // void BoundingBox::Define(float min, float max)
    // void BoundingBox::Define(const Vector3& point)
    // void BoundingBox::Merge(const Vector3& point)
    // void BoundingBox::Merge(const BoundingBox& box)
    // void BoundingBox::Define(const Vector3* vertices, unsigned count)
    // void BoundingBox::Define(const Frustum& frustum)
    // void BoundingBox::Define(const Polyhedron& poly)
    // void BoundingBox::Define(const Sphere& sphere)
    // void BoundingBox::Merge(const Vector3* vertices, unsigned count)
    // void BoundingBox::Merge(const Frustum& frustum)
    // void BoundingBox::Merge(const Polyhedron& poly)
    // void BoundingBox::Merge(const Sphere& sphere)
    // void BoundingBox::Clip(const BoundingBox& box)
    // void BoundingBox::Transform(const Matrix3& transform)
    // void BoundingBox::Transform(const Matrix3x4& transform)
    // void BoundingBox::Clear()
    // bool BoundingBox::Defined() const
    // Vector3 BoundingBox::Center() const
    // Vector3 BoundingBox::Size() const
    // Vector3 BoundingBox::HalfSize() const
    // BoundingBox BoundingBox::Transformed(const Matrix3& transform) const
    // BoundingBox BoundingBox::Transformed(const Matrix3x4& transform) const
    // Rect BoundingBox::Projected(const Matrix4& projection) const
    // float BoundingBox::DistanceToPoint(const Vector3& point) const
    // Intersection BoundingBox::IsInside(const Vector3& point) const
    // Intersection BoundingBox::IsInside(const BoundingBox& box) const
    // Intersection BoundingBox::IsInsideFast(const BoundingBox& box) const
    // Intersection BoundingBox::IsInside(const Sphere& sphere) const
    // Intersection BoundingBox::IsInsideFast(const Sphere& sphere) const
    // String BoundingBox::ToString() const
}

// class BoxOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_BoxOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // Intersection BoxOctreeQuery::TestOctant(const BoundingBox& box, bool inside) override
    // void BoxOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
}

// class BufferedSoundStream | File: ../Audio/BufferedSoundStream.h
void CollectMembers_BufferedSoundStream(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_SoundStream(methods);

    // -virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0

    // unsigned BufferedSoundStream::GetData(signed char* dest, unsigned numBytes) override
    // void BufferedSoundStream::AddData(void* data, unsigned numBytes)
    // void BufferedSoundStream::AddData(const SharedArrayPtr<signed char>& data, unsigned numBytes)
    // void BufferedSoundStream::AddData(const SharedArrayPtr<signed short>& data, unsigned numBytes)
    // void BufferedSoundStream::Clear()
    // unsigned BufferedSoundStream::GetBufferNumBytes() const
    // float BufferedSoundStream::GetBufferLength() const
}

// class Button | File: ../UI/Button.h
void CollectMembers_Button(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -virtual void UIElement::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnClickEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor, UIElement* beginElement)
    // -virtual void UIElement::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)
    // -virtual void UIElement::Update(float timeStep)
    // -void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override

    // void Button::Update(float timeStep) override
    // void Button::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // void Button::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void Button::OnClickEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor, UIElement* beginElement) override
    // void Button::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void Button::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override
    // void Button::SetPressedOffset(const IntVector2& offset)
    // void Button::SetPressedOffset(int x, int y)
    // void Button::SetPressedChildOffset(const IntVector2& offset)
    // void Button::SetPressedChildOffset(int x, int y)
    // void Button::SetRepeat(float delay, float rate)
    // void Button::SetRepeatDelay(float delay)
    // void Button::SetRepeatRate(float rate)
    // const IntVector2& Button::GetPressedOffset() const
    // const IntVector2& Button::GetPressedChildOffset() const
    // float Button::GetRepeatDelay() const
    // float Button::GetRepeatRate() const
    // bool Button::IsPressed() const
}

// class Camera | File: ../Graphics/Camera.h
void CollectMembers_Camera(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // void Camera::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void Camera::SetNearClip(float nearClip)
    // void Camera::SetFarClip(float farClip)
    // void Camera::SetFov(float fov)
    // void Camera::SetOrthoSize(float orthoSize)
    // void Camera::SetOrthoSize(const Vector2& orthoSize)
    // void Camera::SetAspectRatio(float aspectRatio)
    // void Camera::SetFillMode(FillMode mode)
    // void Camera::SetZoom(float zoom)
    // void Camera::SetLodBias(float bias)
    // void Camera::SetViewMask(unsigned mask)
    // void Camera::SetViewOverrideFlags(ViewOverrideFlags flags)
    // void Camera::SetOrthographic(bool enable)
    // void Camera::SetAutoAspectRatio(bool enable)
    // void Camera::SetProjectionOffset(const Vector2& offset)
    // void Camera::SetUseReflection(bool enable)
    // void Camera::SetReflectionPlane(const Plane& plane)
    // void Camera::SetUseClipping(bool enable)
    // void Camera::SetClipPlane(const Plane& plane)
    // void Camera::SetFlipVertical(bool enable)
    // void Camera::SetProjection(const Matrix4& projection)
    // float Camera::GetFarClip() const
    // float Camera::GetNearClip() const
    // float Camera::GetFov() const
    // float Camera::GetOrthoSize() const
    // float Camera::GetAspectRatio() const
    // float Camera::GetZoom() const
    // float Camera::GetLodBias() const
    // unsigned Camera::GetViewMask() const
    // ViewOverrideFlags Camera::GetViewOverrideFlags() const
    // FillMode Camera::GetFillMode() const
    // bool Camera::IsOrthographic() const
    // bool Camera::GetAutoAspectRatio() const
    // const Frustum& Camera::GetFrustum() const
    // Matrix4 Camera::GetProjection() const
    // Matrix4 Camera::GetGPUProjection() const
    // const Matrix3x4& Camera::GetView() const
    // void Camera::GetFrustumSize(Vector3& near, Vector3& far) const
    // float Camera::GetHalfViewSize() const
    // Frustum Camera::GetSplitFrustum(float nearClip, float farClip) const
    // Frustum Camera::GetViewSpaceFrustum() const
    // Frustum Camera::GetViewSpaceSplitFrustum(float nearClip, float farClip) const
    // Ray Camera::GetScreenRay(float x, float y) const
    // Vector2 Camera::WorldToScreenPoint(const Vector3& worldPos) const
    // Vector3 Camera::ScreenToWorldPoint(const Vector3& screenPos) const
    // const Vector2& Camera::GetProjectionOffset() const
    // bool Camera::GetUseReflection() const
    // const Plane& Camera::GetReflectionPlane() const
    // bool Camera::GetUseClipping() const
    // const Plane& Camera::GetClipPlane() const
    // bool Camera::GetFlipVertical() const
    // bool Camera::GetReverseCulling() const
    // float Camera::GetDistance(const Vector3& worldPos) const
    // float Camera::GetDistanceSquared(const Vector3& worldPos) const
    // float Camera::GetLodDistance(float distance, float scale, float bias) const
    // Quaternion Camera::GetFaceCameraRotation(const Vector3& position, const Quaternion& rotation, FaceCameraMode mode, float minAngle=0.0f)
    // Matrix3x4 Camera::GetEffectiveWorldTransform() const
    // bool Camera::IsProjectionValid() const
    // void Camera::SetAspectRatioInternal(float aspectRatio)
    // void Camera::SetOrthoSizeAttr(float orthoSize)
    // void Camera::SetReflectionPlaneAttr(const Vector4& value)
    // Vector4 Camera::GetReflectionPlaneAttr() const
    // void Camera::SetClipPlaneAttr(const Vector4& value)
    // Vector4 Camera::GetClipPlaneAttr() const
}

// struct CascadeParameters | File: ../Graphics/Light.h
void CollectMembers_CascadeParameters(Vector<RegisterObjectMethodArgs>& methods)
{
    // void CascadeParameters::Validate()
    // float CascadeParameters::GetShadowRange() const
}

// struct CharLocation | File: ../UI/Text.h
void CollectMembers_CharLocation(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class CheckBox | File: ../UI/CheckBox.h
void CollectMembers_CheckBox(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -virtual void UIElement::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)
    // -void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override

    // void CheckBox::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // void CheckBox::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void CheckBox::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override
    // void CheckBox::SetChecked(bool enable)
    // void CheckBox::SetCheckedOffset(const IntVector2& offset)
    // void CheckBox::SetCheckedOffset(int x, int y)
    // bool CheckBox::IsChecked() const
    // const IntVector2& CheckBox::GetCheckedOffset() const
}

// class Color | File: ../Math/Color.h
void CollectMembers_Color(Vector<RegisterObjectMethodArgs>& methods)
{
    // Color& Color::operator=(const Color& rhs) noexcept=default
    // bool Color::operator==(const Color& rhs) const
    // bool Color::operator!=(const Color& rhs) const
    // Color Color::operator*(float rhs) const
    // Color Color::operator+(const Color& rhs) const
    // Color Color::operator-() const
    // Color Color::operator-(const Color& rhs) const
    // Color& Color::operator+=(const Color& rhs)
    // const float* Color::Data() const
    // unsigned Color::ToUInt() const
    // unsigned Color::ToUIntMask(const ChannelMask& mask) const
    // Vector3 Color::ToHSL() const
    // Vector3 Color::ToHSV() const
    // void Color::FromUInt(unsigned color)
    // void Color::FromUIntMask(unsigned color, const ChannelMask& mask)
    // void Color::FromHSL(float h, float s, float l, float a=1.0f)
    // void Color::FromHSV(float h, float s, float v, float a=1.0f)
    // Vector3 Color::ToVector3() const
    // Vector4 Color::ToVector4() const
    // float Color::SumRGB() const
    // float Color::Average() const
    // float Color::Luma() const
    // float Color::Chroma() const
    // float Color::Hue() const
    // float Color::SaturationHSL() const
    // float Color::SaturationHSV() const
    // float Color::Value() const
    // Color Color::GammaToLinear() const
    // Color Color::LinearToGamma() const
    // float Color::Lightness() const
    // void Color::Bounds(float* min, float* max, bool clipped=false) const
    // float Color::MaxRGB() const
    // float Color::MinRGB() const
    // float Color::Range() const
    // void Color::Clip(bool clipAlpha=false)
    // void Color::Invert(bool invertAlpha=false)
    // Color Color::Lerp(const Color& rhs, float t) const
    // Color Color::Abs() const
    // bool Color::Equals(const Color& rhs) const
    // String Color::ToString() const
    // unsigned Color::ToUIntArgb() const
    // unsigned Color::ToHash() const
}

// struct ColorFrame | File: ../Graphics/ParticleEffect.h
void CollectMembers_ColorFrame(Vector<RegisterObjectMethodArgs>& methods)
{
    // Color ColorFrame::Interpolate(const ColorFrame& next, float time) const
}

// class Component | File: ../Scene/Component.h
void CollectMembers_Component(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Animatable(methods);

    // -bool Animatable::SaveJSON(JSONValue& dest) const override
    // -bool Animatable::SaveXML(XMLElement& dest) const override
    // -virtual bool Serializable::Save(Serializer& dest) const
    // -virtual void Serializable::MarkNetworkUpdate()

    // virtual void Component::OnSetEnabled()
    // bool Component::Save(Serializer& dest) const override
    // bool Component::SaveXML(XMLElement& dest) const override
    // bool Component::SaveJSON(JSONValue& dest) const override
    // void Component::MarkNetworkUpdate() override
    // virtual void Component::GetDependencyNodes(PODVector<Node*>& dest)
    // virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // void Component::SetEnabled(bool enable)
    // void Component::Remove()
    // unsigned Component::GetID() const
    // bool Component::IsReplicated() const
    // Node* Component::GetNode() const
    // Scene* Component::GetScene() const
    // bool Component::IsEnabled() const
    // bool Component::IsEnabledEffective() const
    // Component* Component::GetComponent(StringHash type) const
    // void Component::GetComponents(PODVector<Component*>& dest, StringHash type) const
    // template<class T> T* Component::GetComponent() const
    // template<class T> void Component::GetComponents(PODVector<T*>& dest) const
    // void Component::AddReplicationState(ComponentReplicationState* state)
    // void Component::PrepareNetworkUpdate()
    // void Component::CleanupConnection(Connection* connection)
}

// struct ComponentReplicationState | File: ../Scene/ReplicationState.h
void CollectMembers_ComponentReplicationState(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ReplicationState(methods);
}

// struct CompressedLevel | File: ../Resource/Image.h
void CollectMembers_CompressedLevel(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool CompressedLevel::Decompress(unsigned char* dest) const
}

// class Condition | File: ../Core/Condition.h
void CollectMembers_Condition(Vector<RegisterObjectMethodArgs>& methods)
{
    // void Condition::Set()
    // void Condition::Wait()
}

// class Console | File: ../Engine/Console.h
void CollectMembers_Console(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Console::SetDefaultStyle(XMLFile* style)
    // void Console::SetVisible(bool enable)
    // void Console::Toggle()
    // void Console::SetAutoVisibleOnError(bool enable)
    // void Console::SetCommandInterpreter(const String& interpreter)
    // void Console::SetNumBufferedRows(unsigned rows)
    // void Console::SetNumRows(unsigned rows)
    // void Console::SetNumHistoryRows(unsigned rows)
    // void Console::SetFocusOnShow(bool enable)
    // void Console::AddAutoComplete(const String& option)
    // void Console::RemoveAutoComplete(const String& option)
    // void Console::UpdateElements()
    // XMLFile* Console::GetDefaultStyle() const
    // BorderImage* Console::GetBackground() const
    // LineEdit* Console::GetLineEdit() const
    // Button* Console::GetCloseButton() const
    // bool Console::IsVisible() const
    // bool Console::IsAutoVisibleOnError() const
    // const String& Console::GetCommandInterpreter() const
    // unsigned Console::GetNumBufferedRows() const
    // unsigned Console::GetNumRows() const
    // void Console::CopySelectedRows() const
    // unsigned Console::GetNumHistoryRows() const
    // unsigned Console::GetHistoryPosition() const
    // const String& Console::GetHistoryRow(unsigned index) const
    // bool Console::GetFocusOnShow() const
}

// class ConstantBuffer | File: ../Graphics/ConstantBuffer.h
void CollectMembers_ConstantBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
    CollectMembers_GPUObject(methods);

    // -virtual void GPUObject::OnDeviceReset()
    // -virtual void GPUObject::Release()

    // void ConstantBuffer::OnDeviceReset() override
    // void ConstantBuffer::Release() override
    // bool ConstantBuffer::SetSize(unsigned size)
    // void ConstantBuffer::SetParameter(unsigned offset, unsigned size, const void* data)
    // void ConstantBuffer::SetVector3ArrayParameter(unsigned offset, unsigned rows, const void* data)
    // void ConstantBuffer::Apply()
    // unsigned ConstantBuffer::GetSize() const
    // bool ConstantBuffer::IsDirty() const
}

// class Context | File: ../Core/Context.h
void CollectMembers_Context(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // template<class T> SharedPtr<T> Context::CreateObject()
    // SharedPtr<Object> Context::CreateObject(StringHash objectType)
    // void Context::RegisterFactory(ObjectFactory* factory)
    // void Context::RegisterFactory(ObjectFactory* factory, const char* category)
    // void Context::RegisterSubsystem(Object* object)
    // void Context::RemoveSubsystem(StringHash objectType)
    // AttributeHandle Context::RegisterAttribute(StringHash objectType, const AttributeInfo& attr)
    // void Context::RemoveAttribute(StringHash objectType, const char* name)
    // void Context::RemoveAllAttributes(StringHash objectType)
    // void Context::UpdateAttributeDefaultValue(StringHash objectType, const char* name, const Variant& defaultValue)
    // VariantMap& Context::GetEventDataMap()
    // bool Context::RequireSDL(unsigned int sdlFlags)
    // void Context::ReleaseSDL()
    // void Context::CopyBaseAttributes(StringHash baseType, StringHash derivedType)
    // template<class T> void Context::RegisterFactory()
    // template<class T> void Context::RegisterFactory(const char* category)
    // template<class T> T* Context::RegisterSubsystem()
    // template<class T> void Context::RemoveSubsystem()
    // template<class T> AttributeHandle Context::RegisterAttribute(const AttributeInfo& attr)
    // template<class T> void Context::RemoveAttribute(const char* name)
    // template<class T> void Context::RemoveAllAttributes()
    // template<class T, class U> void Context::CopyBaseAttributes()
    // template<class T> void Context::UpdateAttributeDefaultValue(const char* name, const Variant& defaultValue)
    // Object* Context::GetSubsystem(StringHash type) const
    // const Variant& Context::GetGlobalVar(StringHash key) const
    // const VariantMap& Context::GetGlobalVars() const
    // void Context::SetGlobalVar(StringHash key, const Variant& value)
    // const HashMap<StringHash, SharedPtr<Object>>& Context::GetSubsystems() const
    // const HashMap<StringHash, SharedPtr<ObjectFactory>>& Context::GetObjectFactories() const
    // const HashMap<String, Vector<StringHash>>& Context::GetObjectCategories() const
    // Object* Context::GetEventSender() const
    // EventHandler* Context::GetEventHandler() const
    // const String& Context::GetTypeName(StringHash objectType) const
    // AttributeInfo* Context::GetAttribute(StringHash objectType, const char* name)
    // template<class T> T* Context::GetSubsystem() const
    // template<class T> AttributeInfo* Context::GetAttribute(const char* name)
    // const Vector<AttributeInfo>* Context::GetAttributes(StringHash type) const
    // const Vector<AttributeInfo>* Context::GetNetworkAttributes(StringHash type) const
    // const HashMap<StringHash, Vector<AttributeInfo>>& Context::GetAllAttributes() const
    // EventReceiverGroup* Context::GetEventReceivers(Object* sender, StringHash eventType)
    // EventReceiverGroup* Context::GetEventReceivers(StringHash eventType)
}

// class Controls | File: ../Input/Controls.h
void CollectMembers_Controls(Vector<RegisterObjectMethodArgs>& methods)
{
    // void Controls::Reset()
    // void Controls::Set(unsigned buttons, bool down=true)
    // bool Controls::IsDown(unsigned button) const
    // bool Controls::IsPressed(unsigned button, const Controls& previousControls) const
}

// class Cursor | File: ../UI/Cursor.h
void CollectMembers_Cursor(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override

    // void Cursor::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // void Cursor::DefineShape(const String& shape, Image* image, const IntRect& imageRect, const IntVector2& hotSpot)
    // void Cursor::DefineShape(CursorShape shape, Image* image, const IntRect& imageRect, const IntVector2& hotSpot)
    // void Cursor::SetShape(const String& shape)
    // void Cursor::SetShape(CursorShape shape)
    // void Cursor::SetUseSystemShapes(bool enable)
    // const String& Cursor::GetShape() const
    // bool Cursor::GetUseSystemShapes() const
    // void Cursor::SetShapesAttr(const VariantVector& value)
    // VariantVector Cursor::GetShapesAttr() const
    // void Cursor::ApplyOSCursorShape()
}

// struct CursorShapeInfo | File: ../UI/Cursor.h
void CollectMembers_CursorShapeInfo(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class CustomGeometry | File: ../Graphics/CustomGeometry.h
void CollectMembers_CustomGeometry(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -virtual Geometry* Drawable::GetLodGeometry(unsigned batchIndex, unsigned level)
    // -virtual bool Drawable::DrawOcclusion(OcclusionBuffer* buffer)
    // -virtual unsigned Drawable::GetNumOccluderTriangles()
    // -virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)

    // void CustomGeometry::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Geometry* CustomGeometry::GetLodGeometry(unsigned batchIndex, unsigned level) override
    // unsigned CustomGeometry::GetNumOccluderTriangles() override
    // bool CustomGeometry::DrawOcclusion(OcclusionBuffer* buffer) override
    // void CustomGeometry::Clear()
    // void CustomGeometry::SetNumGeometries(unsigned num)
    // void CustomGeometry::SetDynamic(bool enable)
    // void CustomGeometry::BeginGeometry(unsigned index, PrimitiveType type)
    // void CustomGeometry::DefineVertex(const Vector3& position)
    // void CustomGeometry::DefineNormal(const Vector3& normal)
    // void CustomGeometry::DefineColor(const Color& color)
    // void CustomGeometry::DefineTexCoord(const Vector2& texCoord)
    // void CustomGeometry::DefineTangent(const Vector4& tangent)
    // void CustomGeometry::DefineGeometry(unsigned index, PrimitiveType type, unsigned numVertices, bool hasNormals, bool hasColors, bool hasTexCoords, bool hasTangents)
    // void CustomGeometry::Commit()
    // void CustomGeometry::SetMaterial(Material* material)
    // bool CustomGeometry::SetMaterial(unsigned index, Material* material)
    // unsigned CustomGeometry::GetNumGeometries() const
    // unsigned CustomGeometry::GetNumVertices(unsigned index) const
    // bool CustomGeometry::IsDynamic() const
    // Material* CustomGeometry::GetMaterial(unsigned index=0) const
    // Vector<PODVector<CustomGeometryVertex>>& CustomGeometry::GetVertices()
    // CustomGeometryVertex* CustomGeometry::GetVertex(unsigned geometryIndex, unsigned vertexNum)
    // void CustomGeometry::SetGeometryDataAttr(const PODVector<unsigned char>& value)
    // void CustomGeometry::SetMaterialsAttr(const ResourceRefList& value)
    // PODVector<unsigned char> CustomGeometry::GetGeometryDataAttr() const
    // const ResourceRefList& CustomGeometry::GetMaterialsAttr() const
}

// struct CustomGeometryVertex | File: ../Graphics/CustomGeometry.h
void CollectMembers_CustomGeometryVertex(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class CustomVariantValue | File: ../Core/Variant.h
void CollectMembers_CustomVariantValue(Vector<RegisterObjectMethodArgs>& methods)
{
    // const std::type_info& CustomVariantValue::GetTypeInfo() const
    // template<class T> bool CustomVariantValue::IsType() const
    // template<class T> T* CustomVariantValue::GetValuePtr()
    // template<class T> const T* CustomVariantValue::GetValuePtr() const
    // virtual bool CustomVariantValue::Assign(const CustomVariantValue& rhs)
    // virtual CustomVariantValue* CustomVariantValue::Clone() const
    // virtual void CustomVariantValue::Clone(void* dest) const
    // virtual unsigned CustomVariantValue::GetSize() const
    // virtual bool CustomVariantValue::Compare(const CustomVariantValue& rhs) const
    // virtual bool CustomVariantValue::IsZero() const
    // virtual String CustomVariantValue::ToString() const
}

// class DebugHud | File: ../Engine/DebugHud.h
void CollectMembers_DebugHud(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void DebugHud::Update()
    // void DebugHud::SetDefaultStyle(XMLFile* style)
    // void DebugHud::SetMode(unsigned mode)
    // void DebugHud::SetProfilerMaxDepth(unsigned depth)
    // void DebugHud::SetProfilerInterval(float interval)
    // void DebugHud::SetUseRendererStats(bool enable)
    // void DebugHud::Toggle(unsigned mode)
    // void DebugHud::ToggleAll()
    // XMLFile* DebugHud::GetDefaultStyle() const
    // Text* DebugHud::GetStatsText() const
    // Text* DebugHud::GetModeText() const
    // Text* DebugHud::GetProfilerText() const
    // Text* DebugHud::GetMemoryText() const
    // unsigned DebugHud::GetMode() const
    // unsigned DebugHud::GetProfilerMaxDepth() const
    // float DebugHud::GetProfilerInterval() const
    // bool DebugHud::GetUseRendererStats() const
    // void DebugHud::SetAppStats(const String& label, const Variant& stats)
    // void DebugHud::SetAppStats(const String& label, const String& stats)
    // bool DebugHud::ResetAppStats(const String& label)
    // void DebugHud::ClearAppStats()
}

// struct DebugLine | File: ../Graphics/DebugRenderer.h
void CollectMembers_DebugLine(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class DebugRenderer | File: ../Graphics/DebugRenderer.h
void CollectMembers_DebugRenderer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)

    // void DebugRenderer::SetLineAntiAlias(bool enable)
    // void DebugRenderer::SetView(Camera* camera)
    // void DebugRenderer::AddLine(const Vector3& start, const Vector3& end, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddLine(const Vector3& start, const Vector3& end, unsigned color, bool depthTest=true)
    // void DebugRenderer::AddTriangle(const Vector3& v1, const Vector3& v2, const Vector3& v3, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddTriangle(const Vector3& v1, const Vector3& v2, const Vector3& v3, unsigned color, bool depthTest=true)
    // void DebugRenderer::AddPolygon(const Vector3& v1, const Vector3& v2, const Vector3& v3, const Vector3& v4, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddPolygon(const Vector3& v1, const Vector3& v2, const Vector3& v3, const Vector3& v4, unsigned color, bool depthTest=true)
    // void DebugRenderer::AddNode(Node* node, float scale=1.0f, bool depthTest=true)
    // void DebugRenderer::AddBoundingBox(const BoundingBox& box, const Color& color, bool depthTest=true, bool solid=false)
    // void DebugRenderer::AddBoundingBox(const BoundingBox& box, const Matrix3x4& transform, const Color& color, bool depthTest=true, bool solid=false)
    // void DebugRenderer::AddFrustum(const Frustum& frustum, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddPolyhedron(const Polyhedron& poly, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddSphere(const Sphere& sphere, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddSphereSector(const Sphere& sphere, const Quaternion& rotation, float angle, bool drawLines, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddCylinder(const Vector3& position, float radius, float height, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddSkeleton(const Skeleton& skeleton, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddTriangleMesh(const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, const Matrix3x4& transform, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddTriangleMesh(const void* vertexData, unsigned vertexSize, unsigned vertexStart, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, const Matrix3x4& transform, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddCircle(const Vector3& center, const Vector3& normal, float radius, const Color& color, int steps=64, bool depthTest=true)
    // void DebugRenderer::AddCross(const Vector3& center, float size, const Color& color, bool depthTest=true)
    // void DebugRenderer::AddQuad(const Vector3& center, float width, float height, const Color& color, bool depthTest=true)
    // void DebugRenderer::Render()
    // bool DebugRenderer::GetLineAntiAlias() const
    // const Matrix3x4& DebugRenderer::GetView() const
    // const Matrix4& DebugRenderer::GetProjection() const
    // const Frustum& DebugRenderer::GetFrustum() const
    // bool DebugRenderer::IsInside(const BoundingBox& box) const
    // bool DebugRenderer::HasContent() const
}

// struct DebugTriangle | File: ../Graphics/DebugRenderer.h
void CollectMembers_DebugTriangle(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct Decal | File: ../Graphics/DecalSet.h
void CollectMembers_Decal(Vector<RegisterObjectMethodArgs>& methods)
{
    // void Decal::AddVertex(const DecalVertex& vertex)
    // void Decal::CalculateBoundingBox()
}

// class DecalSet | File: ../Graphics/DecalSet.h
void CollectMembers_DecalSet(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -virtual UpdateGeometryType Drawable::GetUpdateGeometryType()
    // -virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // -virtual void Drawable::UpdateBatches(const FrameInfo& frame)
    // -virtual void Drawable::UpdateGeometry(const FrameInfo& frame)
    // -virtual void Serializable::ApplyAttributes()
    // -void Drawable::OnSetEnabled() override

    // void DecalSet::ApplyAttributes() override
    // void DecalSet::OnSetEnabled() override
    // void DecalSet::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // void DecalSet::UpdateBatches(const FrameInfo& frame) override
    // void DecalSet::UpdateGeometry(const FrameInfo& frame) override
    // UpdateGeometryType DecalSet::GetUpdateGeometryType() override
    // void DecalSet::SetMaterial(Material* material)
    // void DecalSet::SetMaxVertices(unsigned num)
    // void DecalSet::SetMaxIndices(unsigned num)
    // void DecalSet::SetOptimizeBufferSize(bool enable)
    // bool DecalSet::AddDecal(Drawable* target, const Vector3& worldPosition, const Quaternion& worldRotation, float size, float aspectRatio, float depth, const Vector2& topLeftUV, const Vector2& bottomRightUV, float timeToLive=0.0f, float normalCutoff=0.1f, unsigned subGeometry=M_MAX_UNSIGNED)
    // void DecalSet::RemoveDecals(unsigned num)
    // void DecalSet::RemoveAllDecals()
    // Material* DecalSet::GetMaterial() const
    // unsigned DecalSet::GetNumDecals() const
    // unsigned DecalSet::GetNumVertices() const
    // unsigned DecalSet::GetNumIndices() const
    // unsigned DecalSet::GetMaxVertices() const
    // unsigned DecalSet::GetMaxIndices() const
    // bool DecalSet::GetOptimizeBufferSize() const
    // void DecalSet::SetMaterialAttr(const ResourceRef& value)
    // void DecalSet::SetDecalsAttr(const PODVector<unsigned char>& value)
    // ResourceRef DecalSet::GetMaterialAttr() const
    // PODVector<unsigned char> DecalSet::GetDecalsAttr() const
}

// struct DecalVertex | File: ../Graphics/DecalSet.h
void CollectMembers_DecalVertex(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct DepthValue | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_DepthValue(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Deserializer | File: ../IO/Deserializer.h
void CollectMembers_Deserializer(Vector<RegisterObjectMethodArgs>& methods)
{
    // virtual unsigned Deserializer::Read(void* dest, unsigned size)=0
    // virtual unsigned Deserializer::Seek(unsigned position)=0
    // virtual const String& Deserializer::GetName() const
    // virtual unsigned Deserializer::GetChecksum()
    // virtual bool Deserializer::IsEof() const
    // unsigned Deserializer::SeekRelative(int delta)
    // unsigned Deserializer::GetPosition() const
    // unsigned Deserializer::Tell() const
    // unsigned Deserializer::GetSize() const
    // long long Deserializer::ReadInt64()
    // int Deserializer::ReadInt()
    // short Deserializer::ReadShort()
    // signed char Deserializer::ReadByte()
    // unsigned long long Deserializer::ReadUInt64()
    // unsigned Deserializer::ReadUInt()
    // unsigned short Deserializer::ReadUShort()
    // unsigned char Deserializer::ReadUByte()
    // bool Deserializer::ReadBool()
    // float Deserializer::ReadFloat()
    // double Deserializer::ReadDouble()
    // IntRect Deserializer::ReadIntRect()
    // IntVector2 Deserializer::ReadIntVector2()
    // IntVector3 Deserializer::ReadIntVector3()
    // Rect Deserializer::ReadRect()
    // Vector2 Deserializer::ReadVector2()
    // Vector3 Deserializer::ReadVector3()
    // Vector3 Deserializer::ReadPackedVector3(float maxAbsCoord)
    // Vector4 Deserializer::ReadVector4()
    // Quaternion Deserializer::ReadQuaternion()
    // Quaternion Deserializer::ReadPackedQuaternion()
    // Matrix3 Deserializer::ReadMatrix3()
    // Matrix3x4 Deserializer::ReadMatrix3x4()
    // Matrix4 Deserializer::ReadMatrix4()
    // Color Deserializer::ReadColor()
    // BoundingBox Deserializer::ReadBoundingBox()
    // String Deserializer::ReadString()
    // String Deserializer::ReadFileID()
    // StringHash Deserializer::ReadStringHash()
    // PODVector<unsigned char> Deserializer::ReadBuffer()
    // ResourceRef Deserializer::ReadResourceRef()
    // ResourceRefList Deserializer::ReadResourceRefList()
    // Variant Deserializer::ReadVariant()
    // Variant Deserializer::ReadVariant(VariantType type)
    // VariantVector Deserializer::ReadVariantVector()
    // StringVector Deserializer::ReadStringVector()
    // VariantMap Deserializer::ReadVariantMap()
    // unsigned Deserializer::ReadVLE()
    // unsigned Deserializer::ReadNetID()
    // String Deserializer::ReadLine()
}

// struct DirtyBits | File: ../Scene/ReplicationState.h
void CollectMembers_DirtyBits(Vector<RegisterObjectMethodArgs>& methods)
{
    // void DirtyBits::Set(unsigned index)
    // void DirtyBits::Clear(unsigned index)
    // void DirtyBits::ClearAll()
    // bool DirtyBits::IsSet(unsigned index) const
    // unsigned DirtyBits::Count() const
}

// class Drawable | File: ../Graphics/Drawable.h
void CollectMembers_Drawable(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Component::OnSetEnabled()

    // void Drawable::OnSetEnabled() override
    // virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // virtual void Drawable::Update(const FrameInfo& frame)
    // virtual void Drawable::UpdateBatches(const FrameInfo& frame)
    // virtual void Drawable::UpdateGeometry(const FrameInfo& frame)
    // virtual UpdateGeometryType Drawable::GetUpdateGeometryType()
    // virtual Geometry* Drawable::GetLodGeometry(unsigned batchIndex, unsigned level)
    // virtual unsigned Drawable::GetNumOccluderTriangles()
    // virtual bool Drawable::DrawOcclusion(OcclusionBuffer* buffer)
    // void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void Drawable::SetDrawDistance(float distance)
    // void Drawable::SetShadowDistance(float distance)
    // void Drawable::SetLodBias(float bias)
    // void Drawable::SetViewMask(unsigned mask)
    // void Drawable::SetLightMask(unsigned mask)
    // void Drawable::SetShadowMask(unsigned mask)
    // void Drawable::SetZoneMask(unsigned mask)
    // void Drawable::SetMaxLights(unsigned num)
    // void Drawable::SetCastShadows(bool enable)
    // void Drawable::SetOccluder(bool enable)
    // void Drawable::SetOccludee(bool enable)
    // void Drawable::MarkForUpdate()
    // const BoundingBox& Drawable::GetBoundingBox() const
    // const BoundingBox& Drawable::GetWorldBoundingBox()
    // unsigned char Drawable::GetDrawableFlags() const
    // float Drawable::GetDrawDistance() const
    // float Drawable::GetShadowDistance() const
    // float Drawable::GetLodBias() const
    // unsigned Drawable::GetViewMask() const
    // unsigned Drawable::GetLightMask() const
    // unsigned Drawable::GetShadowMask() const
    // unsigned Drawable::GetZoneMask() const
    // unsigned Drawable::GetMaxLights() const
    // bool Drawable::GetCastShadows() const
    // bool Drawable::IsOccluder() const
    // bool Drawable::IsOccludee() const
    // bool Drawable::IsInView() const
    // bool Drawable::IsInView(Camera* camera) const
    // const Vector<SourceBatch>& Drawable::GetBatches() const
    // void Drawable::SetZone(Zone* zone, bool temporary=false)
    // void Drawable::SetSortValue(float value)
    // void Drawable::SetMinMaxZ(float minZ, float maxZ)
    // void Drawable::MarkInView(const FrameInfo& frame)
    // void Drawable::MarkInView(unsigned frameNumber)
    // void Drawable::LimitLights()
    // void Drawable::LimitVertexLights(bool removeConvertedLights)
    // void Drawable::SetBasePass(unsigned batchIndex)
    // Octant* Drawable::GetOctant() const
    // Zone* Drawable::GetZone() const
    // bool Drawable::IsZoneDirty() const
    // float Drawable::GetDistance() const
    // float Drawable::GetLodDistance() const
    // float Drawable::GetSortValue() const
    // bool Drawable::IsInView(const FrameInfo& frame, bool anyCamera=false) const
    // bool Drawable::HasBasePass(unsigned batchIndex) const
    // const PODVector<Light*>& Drawable::GetLights() const
    // const PODVector<Light*>& Drawable::GetVertexLights() const
    // Light* Drawable::GetFirstLight() const
    // float Drawable::GetMinZ() const
    // float Drawable::GetMaxZ() const
    // void Drawable::AddLight(Light* light)
    // void Drawable::AddVertexLight(Light* light)
}

// class DropDownList | File: ../UI/DropDownList.h
void CollectMembers_DropDownList(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Menu(methods);

    // -static void Menu::RegisterObject(Context* context)
    // -virtual void Menu::OnHidePopup()
    // -virtual void Menu::OnShowPopup()
    // -virtual void UIElement::OnSetEditable()
    // -void Button::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // -void UIElement::ApplyAttributes() override

    // void DropDownList::ApplyAttributes() override
    // void DropDownList::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // void DropDownList::OnShowPopup() override
    // void DropDownList::OnHidePopup() override
    // void DropDownList::OnSetEditable() override
    // void DropDownList::AddItem(UIElement* item)
    // void DropDownList::InsertItem(unsigned index, UIElement* item)
    // void DropDownList::RemoveItem(UIElement* item)
    // void DropDownList::RemoveItem(unsigned index)
    // void DropDownList::RemoveAllItems()
    // void DropDownList::SetSelection(unsigned index)
    // void DropDownList::SetPlaceholderText(const String& text)
    // void DropDownList::SetResizePopup(bool enable)
    // unsigned DropDownList::GetNumItems() const
    // UIElement* DropDownList::GetItem(unsigned index) const
    // PODVector<UIElement*> DropDownList::GetItems() const
    // unsigned DropDownList::GetSelection() const
    // UIElement* DropDownList::GetSelectedItem() const
    // ListView* DropDownList::GetListView() const
    // UIElement* DropDownList::GetPlaceholder() const
    // const String& DropDownList::GetPlaceholderText() const
    // bool DropDownList::GetResizePopup() const
    // void DropDownList::SetSelectionAttr(unsigned index)
}

// class Engine | File: ../Engine/Engine.h
void CollectMembers_Engine(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // bool Engine::Initialize(const VariantMap& parameters)
    // bool Engine::InitializeResourceCache(const VariantMap& parameters, bool removeOld=true)
    // void Engine::RunFrame()
    // Console* Engine::CreateConsole()
    // DebugHud* Engine::CreateDebugHud()
    // void Engine::SetMinFps(int fps)
    // void Engine::SetMaxFps(int fps)
    // void Engine::SetMaxInactiveFps(int fps)
    // void Engine::SetTimeStepSmoothing(int frames)
    // void Engine::SetPauseMinimized(bool enable)
    // void Engine::SetAutoExit(bool enable)
    // void Engine::SetNextTimeStep(float seconds)
    // void Engine::Exit()
    // void Engine::DumpProfiler()
    // void Engine::DumpResources(bool dumpFileName=false)
    // void Engine::DumpMemory()
    // float Engine::GetNextTimeStep() const
    // int Engine::GetMinFps() const
    // int Engine::GetMaxFps() const
    // int Engine::GetMaxInactiveFps() const
    // int Engine::GetTimeStepSmoothing() const
    // bool Engine::GetPauseMinimized() const
    // bool Engine::GetAutoExit() const
    // bool Engine::IsInitialized() const
    // bool Engine::IsExiting() const
    // bool Engine::IsHeadless() const
    // void Engine::Update()
    // void Engine::Render()
    // void Engine::ApplyFrameLimit()
}

// class EventHandler | File: ../Core/Object.h
void CollectMembers_EventHandler(Vector<RegisterObjectMethodArgs>& methods)
{
    // void EventHandler::SetSenderAndEventType(Object* sender, StringHash eventType)
    // virtual void EventHandler::Invoke(VariantMap& eventData)=0
    // virtual EventHandler* EventHandler::Clone() const =0
    // Object* EventHandler::GetReceiver() const
    // Object* EventHandler::GetSender() const
    // const StringHash& EventHandler::GetEventType() const
    // void* EventHandler::GetUserData() const
}

// class EventHandler11Impl | File: ../Core/Object.h
void CollectMembers_EventHandler11Impl(Vector<RegisterObjectMethodArgs>& methods)
{
    // void EventHandler11Impl::Invoke(VariantMap& eventData) override
    // EventHandler* EventHandler11Impl::Clone() const override
}

// class EventProfiler | File: ../Core/EventProfiler.h
void CollectMembers_EventProfiler(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Profiler(methods);

    // -void Profiler::BeginBlock(const char* name)

    // void EventProfiler::BeginBlock(StringHash eventID)
}

// class EventProfilerBlock | File: ../Core/EventProfiler.h
void CollectMembers_EventProfilerBlock(Vector<RegisterObjectMethodArgs>& methods)
{
    // EventProfilerBlock* EventProfilerBlock::GetChild(StringHash eventID)
}

// class EventReceiverGroup | File: ../Core/Context.h
void CollectMembers_EventReceiverGroup(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // void EventReceiverGroup::BeginSendEvent()
    // void EventReceiverGroup::EndSendEvent()
    // void EventReceiverGroup::Add(Object* object)
    // void EventReceiverGroup::Remove(Object* object)
}

// class File | File: ../IO/File.h
void CollectMembers_File(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
    CollectMembers_AbstractFile(methods);

    // -virtual unsigned Deserializer::GetChecksum()
    // -virtual unsigned Deserializer::Read(void* dest, unsigned size)=0
    // -virtual unsigned Deserializer::Seek(unsigned position)=0
    // -virtual unsigned Serializer::Write(const void* data, unsigned size)=0

    // unsigned File::Read(void* dest, unsigned size) override
    // unsigned File::Seek(unsigned position) override
    // unsigned File::Write(const void* data, unsigned size) override
    // unsigned File::GetChecksum() override
    // bool File::Open(const String& fileName, FileMode mode=FILE_READ)
    // bool File::Open(PackageFile* package, const String& fileName)
    // void File::Close()
    // void File::Flush()
    // FileMode File::GetMode() const
    // bool File::IsOpen() const
    // void* File::GetHandle() const
    // bool File::IsPackaged() const
}

// class FileSelector | File: ../UI/FileSelector.h
void CollectMembers_FileSelector(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void FileSelector::SetDefaultStyle(XMLFile* style)
    // void FileSelector::SetTitle(const String& text)
    // void FileSelector::SetButtonTexts(const String& okText, const String& cancelText)
    // void FileSelector::SetPath(const String& path)
    // void FileSelector::SetFileName(const String& fileName)
    // void FileSelector::SetFilters(const Vector<String>& filters, unsigned defaultIndex)
    // void FileSelector::SetDirectoryMode(bool enable)
    // void FileSelector::UpdateElements()
    // XMLFile* FileSelector::GetDefaultStyle() const
    // Window* FileSelector::GetWindow() const
    // Text* FileSelector::GetTitleText() const
    // ListView* FileSelector::GetFileList() const
    // LineEdit* FileSelector::GetPathEdit() const
    // LineEdit* FileSelector::GetFileNameEdit() const
    // DropDownList* FileSelector::GetFilterList() const
    // Button* FileSelector::GetOKButton() const
    // Button* FileSelector::GetCancelButton() const
    // Button* FileSelector::GetCloseButton() const
    // const String& FileSelector::GetTitle() const
    // const String& FileSelector::GetPath() const
    // const String& FileSelector::GetFileName() const
    // const String& FileSelector::GetFilter() const
    // unsigned FileSelector::GetFilterIndex() const
    // bool FileSelector::GetDirectoryMode() const
}

// struct FileSelectorEntry | File: ../UI/FileSelector.h
void CollectMembers_FileSelectorEntry(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class FileSystem | File: ../IO/FileSystem.h
void CollectMembers_FileSystem(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // bool FileSystem::SetCurrentDir(const String& pathName)
    // bool FileSystem::CreateDir(const String& pathName)
    // void FileSystem::SetExecuteConsoleCommands(bool enable)
    // int FileSystem::SystemCommand(const String& commandLine, bool redirectStdOutToLog=false)
    // int FileSystem::SystemRun(const String& fileName, const Vector<String>& arguments)
    // unsigned FileSystem::SystemCommandAsync(const String& commandLine)
    // unsigned FileSystem::SystemRunAsync(const String& fileName, const Vector<String>& arguments)
    // bool FileSystem::SystemOpen(const String& fileName, const String& mode=String::EMPTY)
    // bool FileSystem::Copy(const String& srcFileName, const String& destFileName)
    // bool FileSystem::Rename(const String& srcFileName, const String& destFileName)
    // bool FileSystem::Delete(const String& fileName)
    // void FileSystem::RegisterPath(const String& pathName)
    // bool FileSystem::SetLastModifiedTime(const String& fileName, unsigned newTime)
    // String FileSystem::GetCurrentDir() const
    // bool FileSystem::GetExecuteConsoleCommands() const
    // bool FileSystem::HasRegisteredPaths() const
    // bool FileSystem::CheckAccess(const String& pathName) const
    // unsigned FileSystem::GetLastModifiedTime(const String& fileName) const
    // bool FileSystem::FileExists(const String& fileName) const
    // bool FileSystem::DirExists(const String& pathName) const
    // void FileSystem::ScanDir(Vector<String>& result, const String& pathName, const String& filter, unsigned flags, bool recursive) const
    // String FileSystem::GetProgramDir() const
    // String FileSystem::GetUserDocumentsDir() const
    // String FileSystem::GetAppPreferencesDir(const String& org, const String& app) const
    // String FileSystem::GetTemporaryDir() const
}

// class FileWatcher | File: ../IO/FileWatcher.h
void CollectMembers_FileWatcher(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
    CollectMembers_Thread(methods);

    // -virtual void Thread::ThreadFunction()=0

    // void FileWatcher::ThreadFunction() override
    // bool FileWatcher::StartWatching(const String& pathName, bool watchSubDirs)
    // void FileWatcher::StopWatching()
    // void FileWatcher::SetDelay(float interval)
    // void FileWatcher::AddChange(const String& fileName)
    // bool FileWatcher::GetNextChange(String& dest)
    // const String& FileWatcher::GetPath() const
    // float FileWatcher::GetDelay() const
}

// struct FocusParameters | File: ../Graphics/Light.h
void CollectMembers_FocusParameters(Vector<RegisterObjectMethodArgs>& methods)
{
    // void FocusParameters::Validate()
}

// class Font | File: ../UI/Font.h
void CollectMembers_Font(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)

    // bool Font::BeginLoad(Deserializer& source) override
    // bool Font::SaveXML(Serializer& dest, int pointSize, bool usedGlyphs=false, const String& indentation="\t")
    // void Font::SetAbsoluteGlyphOffset(const IntVector2& offset)
    // void Font::SetScaledGlyphOffset(const Vector2& offset)
    // FontFace* Font::GetFace(float pointSize)
    // FontType Font::GetFontType() const
    // bool Font::IsSDFFont() const
    // const IntVector2& Font::GetAbsoluteGlyphOffset() const
    // const Vector2& Font::GetScaledGlyphOffset() const
    // IntVector2 Font::GetTotalGlyphOffset(float pointSize) const
    // void Font::ReleaseFaces()
}

// class FontFace | File: ../UI/FontFace.h
void CollectMembers_FontFace(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // virtual bool FontFace::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize)=0
    // virtual const FontGlyph* FontFace::GetGlyph(unsigned c)
    // virtual bool FontFace::HasMutableGlyphs() const
    // float FontFace::GetKerning(unsigned c, unsigned d) const
    // bool FontFace::IsDataLost() const
    // float FontFace::GetPointSize() const
    // float FontFace::GetRowHeight() const
    // const Vector<SharedPtr<Texture2D>>& FontFace::GetTextures() const
}

// class FontFaceBitmap | File: ../UI/FontFaceBitmap.h
void CollectMembers_FontFaceBitmap(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_FontFace(methods);

    // -virtual bool FontFace::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize)=0

    // bool FontFaceBitmap::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize) override
    // bool FontFaceBitmap::Load(FontFace* fontFace, bool usedGlyphs)
    // bool FontFaceBitmap::Save(Serializer& dest, int pointSize, const String& indentation="\t")
}

// class FontFaceFreeType | File: ../UI/FontFaceFreeType.h
void CollectMembers_FontFaceFreeType(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_FontFace(methods);

    // -virtual bool FontFace::HasMutableGlyphs() const
    // -virtual bool FontFace::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize)=0
    // -virtual const FontGlyph* FontFace::GetGlyph(unsigned c)

    // bool FontFaceFreeType::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize) override
    // const FontGlyph* FontFaceFreeType::GetGlyph(unsigned c) override
    // bool FontFaceFreeType::HasMutableGlyphs() const override
}

// struct FontGlyph | File: ../UI/FontFace.h
void CollectMembers_FontGlyph(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct FrameInfo | File: ../Graphics/Drawable.h
void CollectMembers_FrameInfo(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Frustum | File: ../Math/Frustum.h
void CollectMembers_Frustum(Vector<RegisterObjectMethodArgs>& methods)
{
    // Frustum& Frustum::operator=(const Frustum& rhs) noexcept
    // void Frustum::Define(float fov, float aspectRatio, float zoom, float nearZ, float farZ, const Matrix3x4& transform=Matrix3x4::IDENTITY)
    // void Frustum::Define(const Vector3& near, const Vector3& far, const Matrix3x4& transform=Matrix3x4::IDENTITY)
    // void Frustum::Define(const BoundingBox& box, const Matrix3x4& transform=Matrix3x4::IDENTITY)
    // void Frustum::Define(const Matrix4& projection)
    // void Frustum::DefineOrtho(float orthoSize, float aspectRatio, float zoom, float nearZ, float farZ, const Matrix3x4& transform=Matrix3x4::IDENTITY)
    // void Frustum::DefineSplit(const Matrix4& projection, float near, float far)
    // void Frustum::Transform(const Matrix3& transform)
    // void Frustum::Transform(const Matrix3x4& transform)
    // Intersection Frustum::IsInside(const Vector3& point) const
    // Intersection Frustum::IsInside(const Sphere& sphere) const
    // Intersection Frustum::IsInsideFast(const Sphere& sphere) const
    // Intersection Frustum::IsInside(const BoundingBox& box) const
    // Intersection Frustum::IsInsideFast(const BoundingBox& box) const
    // float Frustum::Distance(const Vector3& point) const
    // Frustum Frustum::Transformed(const Matrix3& transform) const
    // Frustum Frustum::Transformed(const Matrix3x4& transform) const
    // Rect Frustum::Projected(const Matrix4& projection) const
    // void Frustum::UpdatePlanes()
}

// class FrustumOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_FrustumOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // Intersection FrustumOctreeQuery::TestOctant(const BoundingBox& box, bool inside) override
    // void FrustumOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
}

// class GPUObject | File: ../Graphics/GPUObject.h
void CollectMembers_GPUObject(Vector<RegisterObjectMethodArgs>& methods)
{
    // virtual void GPUObject::OnDeviceLost()
    // virtual void GPUObject::OnDeviceReset()
    // virtual void GPUObject::Release()
    // void GPUObject::ClearDataLost()
    // Graphics* GPUObject::GetGraphics() const
    // void* GPUObject::GetGPUObject() const
    // unsigned GPUObject::GetGPUObjectName() const
    // bool GPUObject::IsDataLost() const
    // bool GPUObject::HasPendingData() const
}

// class Geometry | File: ../Graphics/Geometry.h
void CollectMembers_Geometry(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // bool Geometry::SetNumVertexBuffers(unsigned num)
    // bool Geometry::SetVertexBuffer(unsigned index, VertexBuffer* buffer)
    // void Geometry::SetIndexBuffer(IndexBuffer* buffer)
    // bool Geometry::SetDrawRange(PrimitiveType type, unsigned indexStart, unsigned indexCount, bool getUsedVertexRange=true)
    // bool Geometry::SetDrawRange(PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned vertexStart, unsigned vertexCount, bool checkIllegal=true)
    // void Geometry::SetLodDistance(float distance)
    // void Geometry::SetRawVertexData(const SharedArrayPtr<unsigned char>& data, const PODVector<VertexElement>& elements)
    // void Geometry::SetRawVertexData(const SharedArrayPtr<unsigned char>& data, unsigned elementMask)
    // void Geometry::SetRawIndexData(const SharedArrayPtr<unsigned char>& data, unsigned indexSize)
    // void Geometry::Draw(Graphics* graphics)
    // const Vector<SharedPtr<VertexBuffer>>& Geometry::GetVertexBuffers() const
    // unsigned Geometry::GetNumVertexBuffers() const
    // VertexBuffer* Geometry::GetVertexBuffer(unsigned index) const
    // IndexBuffer* Geometry::GetIndexBuffer() const
    // PrimitiveType Geometry::GetPrimitiveType() const
    // unsigned Geometry::GetIndexStart() const
    // unsigned Geometry::GetIndexCount() const
    // unsigned Geometry::GetVertexStart() const
    // unsigned Geometry::GetVertexCount() const
    // float Geometry::GetLodDistance() const
    // unsigned short Geometry::GetBufferHash() const
    // void Geometry::GetRawData(const unsigned char*& vertexData, unsigned& vertexSize, const unsigned char*& indexData, unsigned& indexSize, const PODVector<VertexElement>*& elements) const
    // void Geometry::GetRawDataShared(SharedArrayPtr<unsigned char>& vertexData, unsigned& vertexSize, SharedArrayPtr<unsigned char>& indexData, unsigned& indexSize, const PODVector<VertexElement>*& elements) const
    // float Geometry::GetHitDistance(const Ray& ray, Vector3* outNormal=nullptr, Vector2* outUV=nullptr) const
    // bool Geometry::IsInside(const Ray& ray) const
    // bool Geometry::IsEmpty() const
}

// struct GeometryDesc | File: ../Graphics/Model.h
void CollectMembers_GeometryDesc(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct GlyphLocation | File: ../UI/Text.h
void CollectMembers_GlyphLocation(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Graphics | File: ../Graphics/Graphics.h
void CollectMembers_Graphics(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Graphics::SetExternalWindow(void* window)
    // void Graphics::SetWindowTitle(const String& windowTitle)
    // void Graphics::SetWindowIcon(Image* windowIcon)
    // void Graphics::SetWindowPosition(const IntVector2& position)
    // void Graphics::SetWindowPosition(int x, int y)
    // bool Graphics::SetScreenMode(int width, int height, const ScreenModeParams& params, bool maximize=false)
    // bool Graphics::SetScreenMode(int width, int height)
    // bool Graphics::SetWindowModes(const WindowModeParams& windowMode, const WindowModeParams& secondaryWindowMode, bool maximize=false)
    // bool Graphics::SetDefaultWindowModes(int width, int height, const ScreenModeParams& params)
    // bool Graphics::SetMode(int width, int height, bool fullscreen, bool borderless, bool resizable, bool highDPI, bool vsync, bool tripleBuffer, int multiSample, int monitor, int refreshRate)
    // bool Graphics::SetMode(int width, int height)
    // void Graphics::SetSRGB(bool enable)
    // void Graphics::SetDither(bool enable)
    // void Graphics::SetFlushGPU(bool enable)
    // void Graphics::SetForceGL2(bool enable)
    // void Graphics::SetOrientations(const String& orientations)
    // bool Graphics::ToggleFullscreen()
    // void Graphics::Close()
    // bool Graphics::TakeScreenShot(Image& destImage)
    // bool Graphics::BeginFrame()
    // void Graphics::EndFrame()
    // void Graphics::Clear(ClearTargetFlags flags, const Color& color=Color(0.0f, 0.0f, 0.0f, 0.0f), float depth=1.0f, unsigned stencil=0)
    // bool Graphics::ResolveToTexture(Texture2D* destination, const IntRect& viewport)
    // bool Graphics::ResolveToTexture(Texture2D* texture)
    // bool Graphics::ResolveToTexture(TextureCube* texture)
    // void Graphics::Draw(PrimitiveType type, unsigned vertexStart, unsigned vertexCount)
    // void Graphics::Draw(PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned minVertex, unsigned vertexCount)
    // void Graphics::Draw(PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned baseVertexIndex, unsigned minVertex, unsigned vertexCount)
    // void Graphics::DrawInstanced(PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned minVertex, unsigned vertexCount, unsigned instanceCount)
    // void Graphics::DrawInstanced(PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned baseVertexIndex, unsigned minVertex, unsigned vertexCount, unsigned instanceCount)
    // void Graphics::SetVertexBuffer(VertexBuffer* buffer)
    // bool Graphics::SetVertexBuffers(const PODVector<VertexBuffer*>& buffers, unsigned instanceOffset=0)
    // bool Graphics::SetVertexBuffers(const Vector<SharedPtr<VertexBuffer>>& buffers, unsigned instanceOffset=0)
    // void Graphics::SetIndexBuffer(IndexBuffer* buffer)
    // void Graphics::SetShaders(ShaderVariation* vs, ShaderVariation* ps)
    // void Graphics::SetShaderParameter(StringHash param, const float* data, unsigned count)
    // void Graphics::SetShaderParameter(StringHash param, float value)
    // void Graphics::SetShaderParameter(StringHash param, int value)
    // void Graphics::SetShaderParameter(StringHash param, bool value)
    // void Graphics::SetShaderParameter(StringHash param, const Color& color)
    // void Graphics::SetShaderParameter(StringHash param, const Vector2& vector)
    // void Graphics::SetShaderParameter(StringHash param, const Matrix3& matrix)
    // void Graphics::SetShaderParameter(StringHash param, const Vector3& vector)
    // void Graphics::SetShaderParameter(StringHash param, const Matrix4& matrix)
    // void Graphics::SetShaderParameter(StringHash param, const Vector4& vector)
    // void Graphics::SetShaderParameter(StringHash param, const Matrix3x4& matrix)
    // void Graphics::SetShaderParameter(StringHash param, const Variant& value)
    // bool Graphics::NeedParameterUpdate(ShaderParameterGroup group, const void* source)
    // bool Graphics::HasShaderParameter(StringHash param)
    // bool Graphics::HasTextureUnit(TextureUnit unit)
    // void Graphics::ClearParameterSource(ShaderParameterGroup group)
    // void Graphics::ClearParameterSources()
    // void Graphics::ClearTransformSources()
    // void Graphics::SetTexture(unsigned index, Texture* texture)
    // void Graphics::SetTextureForUpdate(Texture* texture)
    // void Graphics::SetTextureParametersDirty()
    // void Graphics::SetDefaultTextureFilterMode(TextureFilterMode mode)
    // void Graphics::SetDefaultTextureAnisotropy(unsigned level)
    // void Graphics::ResetRenderTargets()
    // void Graphics::ResetRenderTarget(unsigned index)
    // void Graphics::ResetDepthStencil()
    // void Graphics::SetRenderTarget(unsigned index, RenderSurface* renderTarget)
    // void Graphics::SetRenderTarget(unsigned index, Texture2D* texture)
    // void Graphics::SetDepthStencil(RenderSurface* depthStencil)
    // void Graphics::SetDepthStencil(Texture2D* texture)
    // void Graphics::SetViewport(const IntRect& rect)
    // void Graphics::SetBlendMode(BlendMode mode, bool alphaToCoverage=false)
    // void Graphics::SetColorWrite(bool enable)
    // void Graphics::SetCullMode(CullMode mode)
    // void Graphics::SetDepthBias(float constantBias, float slopeScaledBias)
    // void Graphics::SetDepthTest(CompareMode mode)
    // void Graphics::SetDepthWrite(bool enable)
    // void Graphics::SetFillMode(FillMode mode)
    // void Graphics::SetLineAntiAlias(bool enable)
    // void Graphics::SetScissorTest(bool enable, const Rect& rect=Rect::FULL, bool borderInclusive=true)
    // void Graphics::SetScissorTest(bool enable, const IntRect& rect)
    // void Graphics::SetStencilTest(bool enable, CompareMode mode=CMP_ALWAYS, StencilOp pass=OP_KEEP, StencilOp fail=OP_KEEP, StencilOp zFail=OP_KEEP, unsigned stencilRef=0, unsigned compareMask=M_MAX_UNSIGNED, unsigned writeMask=M_MAX_UNSIGNED)
    // void Graphics::SetClipPlane(bool enable, const Plane& clipPlane=Plane::UP, const Matrix3x4& view=Matrix3x4::IDENTITY, const Matrix4& projection=Matrix4::IDENTITY)
    // void Graphics::BeginDumpShaders(const String& fileName)
    // void Graphics::EndDumpShaders()
    // void Graphics::PrecacheShaders(Deserializer& source)
    // void Graphics::SetShaderCacheDir(const String& path)
    // bool Graphics::IsInitialized() const
    // GraphicsImpl* Graphics::GetImpl() const
    // void* Graphics::GetExternalWindow() const
    // SDL_Window* Graphics::GetWindow() const
    // const String& Graphics::GetWindowTitle() const
    // const String& Graphics::GetApiName() const
    // IntVector2 Graphics::GetWindowPosition() const
    // int Graphics::GetWidth() const
    // int Graphics::GetHeight() const
    // const ScreenModeParams& Graphics::GetScreenModeParams() const
    // int Graphics::GetMultiSample() const
    // IntVector2 Graphics::GetSize() const
    // bool Graphics::GetFullscreen() const
    // bool Graphics::GetBorderless() const
    // bool Graphics::GetResizable() const
    // bool Graphics::GetHighDPI() const
    // bool Graphics::GetVSync() const
    // int Graphics::GetRefreshRate() const
    // int Graphics::GetMonitor() const
    // bool Graphics::GetTripleBuffer() const
    // bool Graphics::GetSRGB() const
    // bool Graphics::GetDither() const
    // bool Graphics::GetFlushGPU() const
    // bool Graphics::GetForceGL2() const
    // const String& Graphics::GetOrientations() const
    // bool Graphics::IsDeviceLost() const
    // unsigned Graphics::GetNumPrimitives() const
    // unsigned Graphics::GetNumBatches() const
    // unsigned Graphics::GetDummyColorFormat() const
    // unsigned Graphics::GetShadowMapFormat() const
    // unsigned Graphics::GetHiresShadowMapFormat() const
    // bool Graphics::GetInstancingSupport() const
    // bool Graphics::GetLightPrepassSupport() const
    // bool Graphics::GetDeferredSupport() const
    // bool Graphics::GetAnisotropySupport() const
    // bool Graphics::GetHardwareShadowSupport() const
    // bool Graphics::GetReadableDepthSupport() const
    // bool Graphics::GetSRGBSupport() const
    // bool Graphics::GetSRGBWriteSupport() const
    // PODVector<IntVector3> Graphics::GetResolutions(int monitor) const
    // unsigned Graphics::FindBestResolutionIndex(int monitor, int width, int height, int refreshRate) const
    // PODVector<int> Graphics::GetMultiSampleLevels() const
    // IntVector2 Graphics::GetDesktopResolution(int monitor) const
    // int Graphics::GetMonitorCount() const
    // int Graphics::GetCurrentMonitor() const
    // bool Graphics::GetMaximized() const
    // Vector3 Graphics::GetDisplayDPI(int monitor=0) const
    // unsigned Graphics::GetFormat(CompressedFormat format) const
    // ShaderVariation* Graphics::GetShader(ShaderType type, const String& name, const String& defines=String::EMPTY) const
    // ShaderVariation* Graphics::GetShader(ShaderType type, const char* name, const char* defines) const
    // VertexBuffer* Graphics::GetVertexBuffer(unsigned index) const
    // IndexBuffer* Graphics::GetIndexBuffer() const
    // ShaderVariation* Graphics::GetVertexShader() const
    // ShaderVariation* Graphics::GetPixelShader() const
    // ShaderProgram* Graphics::GetShaderProgram() const
    // TextureUnit Graphics::GetTextureUnit(const String& name)
    // const String& Graphics::GetTextureUnitName(TextureUnit unit)
    // Texture* Graphics::GetTexture(unsigned index) const
    // TextureFilterMode Graphics::GetDefaultTextureFilterMode() const
    // unsigned Graphics::GetDefaultTextureAnisotropy() const
    // RenderSurface* Graphics::GetRenderTarget(unsigned index) const
    // RenderSurface* Graphics::GetDepthStencil() const
    // IntRect Graphics::GetViewport() const
    // BlendMode Graphics::GetBlendMode() const
    // bool Graphics::GetAlphaToCoverage() const
    // bool Graphics::GetColorWrite() const
    // CullMode Graphics::GetCullMode() const
    // float Graphics::GetDepthConstantBias() const
    // float Graphics::GetDepthSlopeScaledBias() const
    // CompareMode Graphics::GetDepthTest() const
    // bool Graphics::GetDepthWrite() const
    // FillMode Graphics::GetFillMode() const
    // bool Graphics::GetLineAntiAlias() const
    // bool Graphics::GetStencilTest() const
    // bool Graphics::GetScissorTest() const
    // const IntRect& Graphics::GetScissorRect() const
    // CompareMode Graphics::GetStencilTestMode() const
    // StencilOp Graphics::GetStencilPass() const
    // StencilOp Graphics::GetStencilFail() const
    // StencilOp Graphics::GetStencilZFail() const
    // unsigned Graphics::GetStencilRef() const
    // unsigned Graphics::GetStencilCompareMask() const
    // unsigned Graphics::GetStencilWriteMask() const
    // bool Graphics::GetUseClipPlane() const
    // const String& Graphics::GetShaderCacheDir() const
    // IntVector2 Graphics::GetRenderTargetDimensions() const
    // void Graphics::OnWindowResized()
    // void Graphics::OnWindowMoved()
    // void Graphics::Restore()
    // void Graphics::Maximize()
    // void Graphics::Minimize()
    // void Graphics::Raise() const
    // void Graphics::AddGPUObject(GPUObject* object)
    // void Graphics::RemoveGPUObject(GPUObject* object)
    // void* Graphics::ReserveScratchBuffer(unsigned size)
    // void Graphics::FreeScratchBuffer(void* buffer)
    // void Graphics::CleanupScratchBuffers()
    // void Graphics::CleanupShaderPrograms(ShaderVariation* variation)
    // void Graphics::CleanupRenderSurface(RenderSurface* surface)
    // ConstantBuffer* Graphics::GetOrCreateConstantBuffer(ShaderType type, unsigned index, unsigned size)
    // void Graphics::MarkFBODirty()
    // void Graphics::SetVBO(unsigned object)
    // void Graphics::SetUBO(unsigned object)
}

// class HashBase | File: ../Container/HashBase.h
void CollectMembers_HashBase(Vector<RegisterObjectMethodArgs>& methods)
{
    // void HashBase::Swap(HashBase& rhs)
    // unsigned HashBase::Size() const
    // unsigned HashBase::NumBuckets() const
    // bool HashBase::Empty() const
}

// struct HashIteratorBase | File: ../Container/HashBase.h
void CollectMembers_HashIteratorBase(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool HashIteratorBase::operator==(const HashIteratorBase& rhs) const
    // bool HashIteratorBase::operator!=(const HashIteratorBase& rhs) const
    // void HashIteratorBase::GotoNext()
    // void HashIteratorBase::GotoPrev()
}

// struct HashNodeBase | File: ../Container/HashBase.h
void CollectMembers_HashNodeBase(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class HiresTimer | File: ../Core/Timer.h
void CollectMembers_HiresTimer(Vector<RegisterObjectMethodArgs>& methods)
{
    // long long HiresTimer::GetUSec(bool reset)
    // void HiresTimer::Reset()
}

// class Image | File: ../Resource/Image.h
void CollectMembers_Image(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const
    // -virtual bool Resource::SaveFile(const String& fileName) const

    // bool Image::BeginLoad(Deserializer& source) override
    // bool Image::Save(Serializer& dest) const override
    // bool Image::SaveFile(const String& fileName) const override
    // bool Image::SetSize(int width, int height, unsigned components)
    // bool Image::SetSize(int width, int height, int depth, unsigned components)
    // void Image::SetData(const unsigned char* pixelData)
    // void Image::SetPixel(int x, int y, const Color& color)
    // void Image::SetPixel(int x, int y, int z, const Color& color)
    // void Image::SetPixelInt(int x, int y, unsigned uintColor)
    // void Image::SetPixelInt(int x, int y, int z, unsigned uintColor)
    // bool Image::LoadColorLUT(Deserializer& source)
    // bool Image::FlipHorizontal()
    // bool Image::FlipVertical()
    // bool Image::Resize(int width, int height)
    // void Image::Clear(const Color& color)
    // void Image::ClearInt(unsigned uintColor)
    // bool Image::SaveBMP(const String& fileName) const
    // bool Image::SavePNG(const String& fileName) const
    // bool Image::SaveTGA(const String& fileName) const
    // bool Image::SaveJPG(const String& fileName, int quality) const
    // bool Image::SaveDDS(const String& fileName) const
    // bool Image::SaveWEBP(const String& fileName, float compression=0.0f) const
    // bool Image::IsCubemap() const
    // bool Image::IsArray() const
    // bool Image::IsSRGB() const
    // Color Image::GetPixel(int x, int y) const
    // Color Image::GetPixel(int x, int y, int z) const
    // unsigned Image::GetPixelInt(int x, int y) const
    // unsigned Image::GetPixelInt(int x, int y, int z) const
    // Color Image::GetPixelBilinear(float x, float y) const
    // Color Image::GetPixelTrilinear(float x, float y, float z) const
    // int Image::GetWidth() const
    // int Image::GetHeight() const
    // int Image::GetDepth() const
    // unsigned Image::GetComponents() const
    // unsigned char* Image::GetData() const
    // bool Image::IsCompressed() const
    // CompressedFormat Image::GetCompressedFormat() const
    // unsigned Image::GetNumCompressedLevels() const
    // SharedPtr<Image> Image::GetNextLevel() const
    // SharedPtr<Image> Image::GetNextSibling() const
    // SharedPtr<Image> Image::ConvertToRGBA() const
    // CompressedLevel Image::GetCompressedLevel(unsigned index) const
    // SharedPtr<Image> Image::GetDecompressedImage() const
    // Image* Image::GetSubimage(const IntRect& rect) const
    // SDL_Surface* Image::GetSDLSurface(const IntRect& rect=IntRect::ZERO) const
    // void Image::PrecalculateLevels()
    // bool Image::HasAlphaChannel() const
    // bool Image::SetSubimage(const Image* image, const IntRect& rect)
    // void Image::CleanupLevels()
    // void Image::GetLevels(PODVector<Image*>& levels)
    // void Image::GetLevels(PODVector<const Image*>& levels) const
}

// class IndexBuffer | File: ../Graphics/IndexBuffer.h
void CollectMembers_IndexBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
    CollectMembers_GPUObject(methods);

    // -virtual void GPUObject::OnDeviceLost()
    // -virtual void GPUObject::OnDeviceReset()
    // -virtual void GPUObject::Release()

    // void IndexBuffer::OnDeviceLost() override
    // void IndexBuffer::OnDeviceReset() override
    // void IndexBuffer::Release() override
    // void IndexBuffer::SetShadowed(bool enable)
    // bool IndexBuffer::SetSize(unsigned indexCount, bool largeIndices, bool dynamic=false)
    // bool IndexBuffer::SetData(const void* data)
    // bool IndexBuffer::SetDataRange(const void* data, unsigned start, unsigned count, bool discard=false)
    // void* IndexBuffer::Lock(unsigned start, unsigned count, bool discard=false)
    // void IndexBuffer::Unlock()
    // bool IndexBuffer::IsShadowed() const
    // bool IndexBuffer::IsDynamic() const
    // bool IndexBuffer::IsLocked() const
    // unsigned IndexBuffer::GetIndexCount() const
    // unsigned IndexBuffer::GetIndexSize() const
    // bool IndexBuffer::GetUsedVertexRange(unsigned start, unsigned count, unsigned& minVertex, unsigned& vertexCount)
    // unsigned char* IndexBuffer::GetShadowData() const
    // SharedArrayPtr<unsigned char> IndexBuffer::GetShadowDataShared() const
}

// struct IndexBufferDesc | File: ../Graphics/Model.h
void CollectMembers_IndexBufferDesc(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Input | File: ../Input/Input.h
void CollectMembers_Input(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Input::Update()
    // void Input::SetToggleFullscreen(bool enable)
    // void Input::SetMouseVisible(bool enable, bool suppressEvent=false)
    // void Input::ResetMouseVisible()
    // void Input::SetMouseGrabbed(bool grab, bool suppressEvent=false)
    // void Input::ResetMouseGrabbed()
    // void Input::SetMouseMode(MouseMode mode, bool suppressEvent=false)
    // void Input::ResetMouseMode()
    // SDL_JoystickID Input::AddScreenJoystick(XMLFile* layoutFile=nullptr, XMLFile* styleFile=nullptr)
    // bool Input::RemoveScreenJoystick(SDL_JoystickID id)
    // void Input::SetScreenJoystickVisible(SDL_JoystickID id, bool enable)
    // void Input::SetScreenKeyboardVisible(bool enable)
    // void Input::SetTouchEmulation(bool enable)
    // bool Input::RecordGesture()
    // bool Input::SaveGestures(Serializer& dest)
    // bool Input::SaveGesture(Serializer& dest, unsigned gestureID)
    // unsigned Input::LoadGestures(Deserializer& source)
    // bool Input::RemoveGesture(unsigned gestureID)
    // void Input::RemoveAllGestures()
    // void Input::SetMousePosition(const IntVector2& position)
    // void Input::CenterMousePosition()
    // Key Input::GetKeyFromName(const String& name) const
    // Key Input::GetKeyFromScancode(Scancode scancode) const
    // String Input::GetKeyName(Key key) const
    // Scancode Input::GetScancodeFromKey(Key key) const
    // Scancode Input::GetScancodeFromName(const String& name) const
    // String Input::GetScancodeName(Scancode scancode) const
    // bool Input::GetKeyDown(Key key) const
    // bool Input::GetKeyPress(Key key) const
    // bool Input::GetScancodeDown(Scancode scancode) const
    // bool Input::GetScancodePress(Scancode scancode) const
    // bool Input::GetMouseButtonDown(MouseButtonFlags button) const
    // bool Input::GetMouseButtonPress(MouseButtonFlags button) const
    // bool Input::GetQualifierDown(Qualifier qualifier) const
    // bool Input::GetQualifierPress(Qualifier qualifier) const
    // QualifierFlags Input::GetQualifiers() const
    // IntVector2 Input::GetMousePosition() const
    // IntVector2 Input::GetMouseMove() const
    // int Input::GetMouseMoveX() const
    // int Input::GetMouseMoveY() const
    // int Input::GetMouseMoveWheel() const
    // Vector2 Input::GetInputScale() const
    // unsigned Input::GetNumTouches() const
    // TouchState* Input::GetTouch(unsigned index) const
    // unsigned Input::GetNumJoysticks() const
    // JoystickState* Input::GetJoystick(SDL_JoystickID id)
    // JoystickState* Input::GetJoystickByIndex(unsigned index)
    // JoystickState* Input::GetJoystickByName(const String& name)
    // bool Input::GetToggleFullscreen() const
    // bool Input::IsScreenJoystickVisible(SDL_JoystickID id) const
    // bool Input::GetScreenKeyboardSupport() const
    // bool Input::IsScreenKeyboardVisible() const
    // bool Input::GetTouchEmulation() const
    // bool Input::IsMouseVisible() const
    // bool Input::IsMouseGrabbed() const
    // bool Input::IsMouseLocked() const
    // MouseMode Input::GetMouseMode() const
    // bool Input::HasFocus()
    // bool Input::IsMinimized() const
}

// struct InstanceData | File: ../Graphics/Batch.h
void CollectMembers_InstanceData(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class IntRect | File: ../Math/Rect.h
void CollectMembers_IntRect(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool IntRect::operator==(const IntRect& rhs) const
    // bool IntRect::operator!=(const IntRect& rhs) const
    // IntRect& IntRect::operator+=(const IntRect& rhs)
    // IntRect& IntRect::operator-=(const IntRect& rhs)
    // IntRect& IntRect::operator/=(float value)
    // IntRect& IntRect::operator*=(float value)
    // IntRect IntRect::operator/(float value) const
    // IntRect IntRect::operator*(float value) const
    // IntRect IntRect::operator+(const IntRect& rhs) const
    // IntRect IntRect::operator-(const IntRect& rhs) const
    // IntVector2 IntRect::Size() const
    // int IntRect::Width() const
    // int IntRect::Height() const
    // Intersection IntRect::IsInside(const IntVector2& point) const
    // Intersection IntRect::IsInside(const IntRect& rect) const
    // void IntRect::Clip(const IntRect& rect)
    // void IntRect::Merge(const IntRect& rect)
    // const int* IntRect::Data() const
    // String IntRect::ToString() const
    // IntVector2 IntRect::Min() const
    // IntVector2 IntRect::Max() const
    // int IntRect::Left() const
    // int IntRect::Top() const
    // int IntRect::Right() const
    // int IntRect::Bottom() const
}

// class IntVector2 | File: ../Math/Vector2.h
void CollectMembers_IntVector2(Vector<RegisterObjectMethodArgs>& methods)
{
    // IntVector2& IntVector2::operator=(const IntVector2& rhs) noexcept=default
    // bool IntVector2::operator==(const IntVector2& rhs) const
    // bool IntVector2::operator!=(const IntVector2& rhs) const
    // IntVector2 IntVector2::operator+(const IntVector2& rhs) const
    // IntVector2 IntVector2::operator-() const
    // IntVector2 IntVector2::operator-(const IntVector2& rhs) const
    // IntVector2 IntVector2::operator*(int rhs) const
    // IntVector2 IntVector2::operator*(const IntVector2& rhs) const
    // IntVector2 IntVector2::operator/(int rhs) const
    // IntVector2 IntVector2::operator/(const IntVector2& rhs) const
    // IntVector2& IntVector2::operator+=(const IntVector2& rhs)
    // IntVector2& IntVector2::operator-=(const IntVector2& rhs)
    // IntVector2& IntVector2::operator*=(int rhs)
    // IntVector2& IntVector2::operator*=(const IntVector2& rhs)
    // IntVector2& IntVector2::operator/=(int rhs)
    // IntVector2& IntVector2::operator/=(const IntVector2& rhs)
    // const int* IntVector2::Data() const
    // String IntVector2::ToString() const
    // unsigned IntVector2::ToHash() const
    // float IntVector2::Length() const
}

// class IntVector3 | File: ../Math/Vector3.h
void CollectMembers_IntVector3(Vector<RegisterObjectMethodArgs>& methods)
{
    // IntVector3& IntVector3::operator=(const IntVector3& rhs) noexcept=default
    // bool IntVector3::operator==(const IntVector3& rhs) const
    // bool IntVector3::operator!=(const IntVector3& rhs) const
    // IntVector3 IntVector3::operator+(const IntVector3& rhs) const
    // IntVector3 IntVector3::operator-() const
    // IntVector3 IntVector3::operator-(const IntVector3& rhs) const
    // IntVector3 IntVector3::operator*(int rhs) const
    // IntVector3 IntVector3::operator*(const IntVector3& rhs) const
    // IntVector3 IntVector3::operator/(int rhs) const
    // IntVector3 IntVector3::operator/(const IntVector3& rhs) const
    // IntVector3& IntVector3::operator+=(const IntVector3& rhs)
    // IntVector3& IntVector3::operator-=(const IntVector3& rhs)
    // IntVector3& IntVector3::operator*=(int rhs)
    // IntVector3& IntVector3::operator*=(const IntVector3& rhs)
    // IntVector3& IntVector3::operator/=(int rhs)
    // IntVector3& IntVector3::operator/=(const IntVector3& rhs)
    // const int* IntVector3::Data() const
    // String IntVector3::ToString() const
    // unsigned IntVector3::ToHash() const
    // float IntVector3::Length() const
}

// class JSONFile | File: ../Resource/JSONFile.h
void CollectMembers_JSONFile(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const

    // bool JSONFile::BeginLoad(Deserializer& source) override
    // bool JSONFile::Save(Serializer& dest) const override
    // bool JSONFile::Save(Serializer& dest, const String& indendation) const
    // bool JSONFile::FromString(const String& source)
    // String JSONFile::ToString(const String& indendation="\t") const
    // JSONValue& JSONFile::GetRoot()
    // const JSONValue& JSONFile::GetRoot() const
}

// class JSONValue | File: ../Resource/JSONValue.h
void CollectMembers_JSONValue(Vector<RegisterObjectMethodArgs>& methods)
{
    // JSONValue& JSONValue::operator=(bool rhs)
    // JSONValue& JSONValue::operator=(int rhs)
    // JSONValue& JSONValue::operator=(unsigned rhs)
    // JSONValue& JSONValue::operator=(float rhs)
    // JSONValue& JSONValue::operator=(double rhs)
    // JSONValue& JSONValue::operator=(const String& rhs)
    // JSONValue& JSONValue::operator=(const char* rhs)
    // JSONValue& JSONValue::operator=(const JSONArray& rhs)
    // JSONValue& JSONValue::operator=(const JSONObject& rhs)
    // JSONValue& JSONValue::operator=(const JSONValue& rhs)
    // JSONValueType JSONValue::GetValueType() const
    // JSONNumberType JSONValue::GetNumberType() const
    // String JSONValue::GetValueTypeName() const
    // String JSONValue::GetNumberTypeName() const
    // bool JSONValue::IsNull() const
    // bool JSONValue::IsBool() const
    // bool JSONValue::IsNumber() const
    // bool JSONValue::IsString() const
    // bool JSONValue::IsArray() const
    // bool JSONValue::IsObject() const
    // bool JSONValue::GetBool(bool defaultValue=false) const
    // int JSONValue::GetInt(int defaultValue=0) const
    // unsigned JSONValue::GetUInt(unsigned defaultValue=0) const
    // float JSONValue::GetFloat(float defaultValue=0.0f) const
    // double JSONValue::GetDouble(double defaultValue=0.0) const
    // const String& JSONValue::GetString(const String& defaultValue=String::EMPTY) const
    // const char* JSONValue::GetCString(const char* defaultValue="") const
    // const JSONArray& JSONValue::GetArray() const
    // const JSONObject& JSONValue::GetObject() const
    // JSONValue& JSONValue::operator[](unsigned index)
    // const JSONValue& JSONValue::operator[](unsigned index) const
    // void JSONValue::Push(const JSONValue& value)
    // void JSONValue::Pop()
    // void JSONValue::Insert(unsigned pos, const JSONValue& value)
    // void JSONValue::Erase(unsigned pos, unsigned length=1)
    // void JSONValue::Resize(unsigned newSize)
    // unsigned JSONValue::Size() const
    // JSONValue& JSONValue::operator[](const String& key)
    // const JSONValue& JSONValue::operator[](const String& key) const
    // void JSONValue::Set(const String& key, const JSONValue& value)
    // const JSONValue& JSONValue::Get(const String& key) const
    // bool JSONValue::Erase(const String& key)
    // bool JSONValue::Contains(const String& key) const
    // JSONObjectIterator JSONValue::Begin()
    // ConstJSONObjectIterator JSONValue::Begin() const
    // JSONObjectIterator JSONValue::End()
    // ConstJSONObjectIterator JSONValue::End() const
    // void JSONValue::Clear()
    // void JSONValue::SetType(JSONValueType valueType, JSONNumberType numberType=JSONNT_NAN)
    // void JSONValue::SetVariant(const Variant& variant, Context* context=nullptr)
    // Variant JSONValue::GetVariant() const
    // void JSONValue::SetVariantValue(const Variant& variant, Context* context=nullptr)
    // Variant JSONValue::GetVariantValue(VariantType type) const
    // void JSONValue::SetVariantMap(const VariantMap& variantMap, Context* context=nullptr)
    // VariantMap JSONValue::GetVariantMap() const
    // void JSONValue::SetVariantVector(const VariantVector& variantVector, Context* context=nullptr)
    // VariantVector JSONValue::GetVariantVector() const
}

// struct JoystickState | File: ../Input/Input.h
void CollectMembers_JoystickState(Vector<RegisterObjectMethodArgs>& methods)
{
    // void JoystickState::Initialize(unsigned numButtons, unsigned numAxes, unsigned numHats)
    // void JoystickState::Reset()
    // bool JoystickState::IsController() const
    // unsigned JoystickState::GetNumButtons() const
    // unsigned JoystickState::GetNumAxes() const
    // unsigned JoystickState::GetNumHats() const
    // bool JoystickState::GetButtonDown(unsigned index) const
    // bool JoystickState::GetButtonPress(unsigned index) const
    // float JoystickState::GetAxisPosition(unsigned index) const
    // int JoystickState::GetHatPosition(unsigned index) const
}

// class Light | File: ../Graphics/Light.h
void CollectMembers_Light(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // -virtual void Drawable::UpdateBatches(const FrameInfo& frame)
    // -void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override

    // void Light::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // void Light::UpdateBatches(const FrameInfo& frame) override
    // void Light::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void Light::SetLightType(LightType type)
    // void Light::SetPerVertex(bool enable)
    // void Light::SetColor(const Color& color)
    // void Light::SetTemperature(float temperature)
    // void Light::SetRadius(float radius)
    // void Light::SetLength(float length)
    // void Light::SetUsePhysicalValues(bool enable)
    // void Light::SetSpecularIntensity(float intensity)
    // void Light::SetBrightness(float brightness)
    // void Light::SetRange(float range)
    // void Light::SetFov(float fov)
    // void Light::SetAspectRatio(float aspectRatio)
    // void Light::SetFadeDistance(float distance)
    // void Light::SetShadowFadeDistance(float distance)
    // void Light::SetShadowBias(const BiasParameters& parameters)
    // void Light::SetShadowCascade(const CascadeParameters& parameters)
    // void Light::SetShadowFocus(const FocusParameters& parameters)
    // void Light::SetShadowIntensity(float intensity)
    // void Light::SetShadowResolution(float resolution)
    // void Light::SetShadowNearFarRatio(float nearFarRatio)
    // void Light::SetShadowMaxExtrusion(float extrusion)
    // void Light::SetRampTexture(Texture* texture)
    // void Light::SetShapeTexture(Texture* texture)
    // LightType Light::GetLightType() const
    // bool Light::GetPerVertex() const
    // const Color& Light::GetColor() const
    // float Light::GetTemperature() const
    // float Light::GetRadius() const
    // float Light::GetLength() const
    // bool Light::GetUsePhysicalValues() const
    // Color Light::GetColorFromTemperature() const
    // float Light::GetSpecularIntensity() const
    // float Light::GetBrightness() const
    // Color Light::GetEffectiveColor() const
    // float Light::GetEffectiveSpecularIntensity() const
    // float Light::GetRange() const
    // float Light::GetFov() const
    // float Light::GetAspectRatio() const
    // float Light::GetFadeDistance() const
    // float Light::GetShadowFadeDistance() const
    // const BiasParameters& Light::GetShadowBias() const
    // const CascadeParameters& Light::GetShadowCascade() const
    // const FocusParameters& Light::GetShadowFocus() const
    // float Light::GetShadowIntensity() const
    // float Light::GetShadowResolution() const
    // float Light::GetShadowNearFarRatio() const
    // float Light::GetShadowMaxExtrusion() const
    // Texture* Light::GetRampTexture() const
    // Texture* Light::GetShapeTexture() const
    // Frustum Light::GetFrustum() const
    // Frustum Light::GetViewSpaceFrustum(const Matrix3x4& view) const
    // int Light::GetNumShadowSplits() const
    // bool Light::IsNegative() const
    // void Light::SetIntensitySortValue(float distance)
    // void Light::SetIntensitySortValue(const BoundingBox& box)
    // void Light::SetLightQueue(LightBatchQueue* queue)
    // const Matrix3x4& Light::GetVolumeTransform(Camera* camera)
    // LightBatchQueue* Light::GetLightQueue() const
    // float Light::GetIntensityDivisor(float attenuation=1.0f) const
    // void Light::SetRampTextureAttr(const ResourceRef& value)
    // void Light::SetShapeTextureAttr(const ResourceRef& value)
    // ResourceRef Light::GetRampTextureAttr() const
    // ResourceRef Light::GetShapeTextureAttr() const
}

// struct LightBatchQueue | File: ../Graphics/Batch.h
void CollectMembers_LightBatchQueue(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct LightQueryResult | File: ../Graphics/View.h
void CollectMembers_LightQueryResult(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class LineEdit | File: ../UI/LineEdit.h
void CollectMembers_LineEdit(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -virtual bool UIElement::OnDragDropFinish(UIElement* source)
    // -virtual bool UIElement::OnDragDropTest(UIElement* source)
    // -virtual void UIElement::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnDoubleClick(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)
    // -virtual void UIElement::OnTextInput(const String& text)
    // -virtual void UIElement::Update(float timeStep)
    // -void UIElement::ApplyAttributes() override

    // void LineEdit::ApplyAttributes() override
    // void LineEdit::Update(float timeStep) override
    // void LineEdit::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void LineEdit::OnDoubleClick(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void LineEdit::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void LineEdit::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // bool LineEdit::OnDragDropTest(UIElement* source) override
    // bool LineEdit::OnDragDropFinish(UIElement* source) override
    // void LineEdit::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override
    // void LineEdit::OnTextInput(const String& text) override
    // void LineEdit::SetText(const String& text)
    // void LineEdit::SetCursorPosition(unsigned position)
    // void LineEdit::SetCursorBlinkRate(float rate)
    // void LineEdit::SetMaxLength(unsigned length)
    // void LineEdit::SetEchoCharacter(unsigned c)
    // void LineEdit::SetCursorMovable(bool enable)
    // void LineEdit::SetTextSelectable(bool enable)
    // void LineEdit::SetTextCopyable(bool enable)
    // const String& LineEdit::GetText() const
    // unsigned LineEdit::GetCursorPosition() const
    // float LineEdit::GetCursorBlinkRate() const
    // unsigned LineEdit::GetMaxLength() const
    // unsigned LineEdit::GetEchoCharacter() const
    // bool LineEdit::IsCursorMovable() const
    // bool LineEdit::IsTextSelectable() const
    // bool LineEdit::IsTextCopyable() const
    // Text* LineEdit::GetTextElement() const
    // BorderImage* LineEdit::GetCursor() const
}

// struct LinkedListNode | File: ../Container/LinkedList.h
void CollectMembers_LinkedListNode(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ListBase | File: ../Container/ListBase.h
void CollectMembers_ListBase(Vector<RegisterObjectMethodArgs>& methods)
{
    // void ListBase::Swap(ListBase& rhs)
}

// struct ListIteratorBase | File: ../Container/ListBase.h
void CollectMembers_ListIteratorBase(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool ListIteratorBase::operator==(const ListIteratorBase& rhs) const
    // bool ListIteratorBase::operator!=(const ListIteratorBase& rhs) const
    // void ListIteratorBase::GotoNext()
    // void ListIteratorBase::GotoPrev()
}

// struct ListNodeBase | File: ../Container/ListBase.h
void CollectMembers_ListNodeBase(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ListView | File: ../UI/ListView.h
void CollectMembers_ListView(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ScrollView(methods);

    // -bool UIElement::IsSelected() const
    // -static void ScrollView::RegisterObject(Context* context)
    // -void ScrollView::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override
    // -void ScrollView::OnResize(const IntVector2& newSize, const IntVector2& delta) override

    // void ListView::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override
    // void ListView::OnResize(const IntVector2& newSize, const IntVector2& delta) override
    // void ListView::UpdateInternalLayout()
    // void ListView::DisableInternalLayoutUpdate()
    // void ListView::EnableInternalLayoutUpdate()
    // void ListView::AddItem(UIElement* item)
    // void ListView::InsertItem(unsigned index, UIElement* item, UIElement* parentItem=nullptr)
    // void ListView::RemoveItem(UIElement* item, unsigned index=0)
    // void ListView::RemoveItem(unsigned index)
    // void ListView::RemoveAllItems()
    // void ListView::SetSelection(unsigned index)
    // void ListView::SetSelections(const PODVector<unsigned>& indices)
    // void ListView::AddSelection(unsigned index)
    // void ListView::RemoveSelection(unsigned index)
    // void ListView::ToggleSelection(unsigned index)
    // void ListView::ChangeSelection(int delta, bool additive=false)
    // void ListView::ClearSelection()
    // void ListView::SetHighlightMode(HighlightMode mode)
    // void ListView::SetMultiselect(bool enable)
    // void ListView::SetHierarchyMode(bool enable)
    // void ListView::SetBaseIndent(int baseIndent)
    // void ListView::SetClearSelectionOnDefocus(bool enable)
    // void ListView::SetSelectOnClickEnd(bool enable)
    // void ListView::Expand(unsigned index, bool enable, bool recursive=false)
    // void ListView::ToggleExpand(unsigned index, bool recursive=false)
    // unsigned ListView::GetNumItems() const
    // UIElement* ListView::GetItem(unsigned index) const
    // PODVector<UIElement*> ListView::GetItems() const
    // unsigned ListView::FindItem(UIElement* item) const
    // unsigned ListView::GetSelection() const
    // const PODVector<unsigned>& ListView::GetSelections() const
    // void ListView::CopySelectedItemsToClipboard() const
    // UIElement* ListView::GetSelectedItem() const
    // PODVector<UIElement*> ListView::GetSelectedItems() const
    // bool ListView::IsSelected(unsigned index) const
    // bool ListView::IsExpanded(unsigned index) const
    // HighlightMode ListView::GetHighlightMode() const
    // bool ListView::GetMultiselect() const
    // bool ListView::GetClearSelectionOnDefocus() const
    // bool ListView::GetSelectOnClickEnd() const
    // bool ListView::GetHierarchyMode() const
    // int ListView::GetBaseIndent() const
    // void ListView::EnsureItemVisibility(unsigned index)
    // void ListView::EnsureItemVisibility(UIElement* item)
}

// class Localization | File: ../Resource/Localization.h
void CollectMembers_Localization(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // int Localization::GetNumLanguages() const
    // int Localization::GetLanguageIndex() const
    // int Localization::GetLanguageIndex(const String& language)
    // String Localization::GetLanguage()
    // String Localization::GetLanguage(int index)
    // void Localization::SetLanguage(int index)
    // void Localization::SetLanguage(const String& language)
    // String Localization::Get(const String& id)
    // void Localization::Reset()
    // void Localization::LoadJSONFile(const String& name, const String& language=String::EMPTY)
    // void Localization::LoadMultipleLanguageJSON(const JSONValue& source)
    // void Localization::LoadSingleLanguageJSON(const JSONValue& source, const String& language=String::EMPTY)
}

// class Log | File: ../IO/Log.h
void CollectMembers_Log(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Log::Open(const String& fileName)
    // void Log::Close()
    // void Log::SetLevel(int level)
    // void Log::SetTimeStamp(bool enable)
    // void Log::SetQuiet(bool quiet)
    // int Log::GetLevel() const
    // bool Log::GetTimeStamp() const
    // String Log::GetLastMessage() const
    // bool Log::IsQuiet() const
}

// class LogicComponent | File: ../Scene/LogicComponent.h
void CollectMembers_LogicComponent(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -virtual void Component::OnSetEnabled()
}

// class Material | File: ../Graphics/Material.h
void CollectMembers_Material(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -bool Resource::Load(Deserializer& source)
    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()
    // -virtual bool Resource::Save(Serializer& dest) const

    // bool Material::BeginLoad(Deserializer& source) override
    // bool Material::EndLoad() override
    // bool Material::Save(Serializer& dest) const override
    // bool Material::Load(const XMLElement& source)
    // bool Material::Save(XMLElement& dest) const
    // bool Material::Load(const JSONValue& source)
    // bool Material::Save(JSONValue& dest) const
    // void Material::SetNumTechniques(unsigned num)
    // void Material::SetTechnique(unsigned index, Technique* tech, MaterialQuality qualityLevel=QUALITY_LOW, float lodDistance=0.0f)
    // void Material::SetVertexShaderDefines(const String& defines)
    // void Material::SetPixelShaderDefines(const String& defines)
    // void Material::SetShaderParameter(const String& name, const Variant& value)
    // void Material::SetShaderParameterAnimation(const String& name, ValueAnimation* animation, WrapMode wrapMode=WM_LOOP, float speed=1.0f)
    // void Material::SetShaderParameterAnimationWrapMode(const String& name, WrapMode wrapMode)
    // void Material::SetShaderParameterAnimationSpeed(const String& name, float speed)
    // void Material::SetTexture(TextureUnit unit, Texture* texture)
    // void Material::SetUVTransform(const Vector2& offset, float rotation, const Vector2& repeat)
    // void Material::SetUVTransform(const Vector2& offset, float rotation, float repeat)
    // void Material::SetCullMode(CullMode mode)
    // void Material::SetShadowCullMode(CullMode mode)
    // void Material::SetFillMode(FillMode mode)
    // void Material::SetDepthBias(const BiasParameters& parameters)
    // void Material::SetAlphaToCoverage(bool enable)
    // void Material::SetLineAntiAlias(bool enable)
    // void Material::SetRenderOrder(unsigned char order)
    // void Material::SetOcclusion(bool enable)
    // void Material::SetScene(Scene* scene)
    // void Material::RemoveShaderParameter(const String& name)
    // void Material::ReleaseShaders()
    // SharedPtr<Material> Material::Clone(const String& cloneName=String::EMPTY) const
    // void Material::SortTechniques()
    // void Material::MarkForAuxView(unsigned frameNumber)
    // unsigned Material::GetNumTechniques() const
    // const Vector<TechniqueEntry>& Material::GetTechniques() const
    // const TechniqueEntry& Material::GetTechniqueEntry(unsigned index) const
    // Technique* Material::GetTechnique(unsigned index) const
    // Pass* Material::GetPass(unsigned index, const String& passName) const
    // Texture* Material::GetTexture(TextureUnit unit) const
    // const HashMap<TextureUnit, SharedPtr<Texture>>& Material::GetTextures() const
    // const String& Material::GetVertexShaderDefines() const
    // const String& Material::GetPixelShaderDefines() const
    // const Variant& Material::GetShaderParameter(const String& name) const
    // ValueAnimation* Material::GetShaderParameterAnimation(const String& name) const
    // WrapMode Material::GetShaderParameterAnimationWrapMode(const String& name) const
    // float Material::GetShaderParameterAnimationSpeed(const String& name) const
    // const HashMap<StringHash, MaterialShaderParameter>& Material::GetShaderParameters() const
    // CullMode Material::GetCullMode() const
    // CullMode Material::GetShadowCullMode() const
    // FillMode Material::GetFillMode() const
    // const BiasParameters& Material::GetDepthBias() const
    // bool Material::GetAlphaToCoverage() const
    // bool Material::GetLineAntiAlias() const
    // unsigned char Material::GetRenderOrder() const
    // unsigned Material::GetAuxViewFrameNumber() const
    // bool Material::GetOcclusion() const
    // bool Material::GetSpecular() const
    // Scene* Material::GetScene() const
    // unsigned Material::GetShaderParameterHash() const
}

// struct MaterialShaderParameter | File: ../Graphics/Material.h
void CollectMembers_MaterialShaderParameter(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Matrix2 | File: ../Math/Matrix2.h
void CollectMembers_Matrix2(Vector<RegisterObjectMethodArgs>& methods)
{
    // Matrix2& Matrix2::operator=(const Matrix2& rhs) noexcept=default
    // bool Matrix2::operator==(const Matrix2& rhs) const
    // bool Matrix2::operator!=(const Matrix2& rhs) const
    // Vector2 Matrix2::operator*(const Vector2& rhs) const
    // Matrix2 Matrix2::operator+(const Matrix2& rhs) const
    // Matrix2 Matrix2::operator-(const Matrix2& rhs) const
    // Matrix2 Matrix2::operator*(float rhs) const
    // Matrix2 Matrix2::operator*(const Matrix2& rhs) const
    // void Matrix2::SetScale(const Vector2& scale)
    // void Matrix2::SetScale(float scale)
    // Vector2 Matrix2::Scale() const
    // Matrix2 Matrix2::Transpose() const
    // Matrix2 Matrix2::Scaled(const Vector2& scale) const
    // bool Matrix2::Equals(const Matrix2& rhs) const
    // Matrix2 Matrix2::Inverse() const
    // const float* Matrix2::Data() const
    // bool Matrix2::IsNaN() const
    // bool Matrix2::IsInf() const
    // String Matrix2::ToString() const
}

// class Matrix3 | File: ../Math/Matrix3.h
void CollectMembers_Matrix3(Vector<RegisterObjectMethodArgs>& methods)
{
    // Matrix3& Matrix3::operator=(const Matrix3& rhs) noexcept=default
    // bool Matrix3::operator==(const Matrix3& rhs) const
    // bool Matrix3::operator!=(const Matrix3& rhs) const
    // Vector3 Matrix3::operator*(const Vector3& rhs) const
    // Matrix3 Matrix3::operator+(const Matrix3& rhs) const
    // Matrix3 Matrix3::operator-(const Matrix3& rhs) const
    // Matrix3 Matrix3::operator*(float rhs) const
    // Matrix3 Matrix3::operator*(const Matrix3& rhs) const
    // void Matrix3::SetScale(const Vector3& scale)
    // void Matrix3::SetScale(float scale)
    // Vector3 Matrix3::Scale() const
    // Vector3 Matrix3::SignedScale(const Matrix3& rotation) const
    // Matrix3 Matrix3::Transpose() const
    // Matrix3 Matrix3::Scaled(const Vector3& scale) const
    // bool Matrix3::Equals(const Matrix3& rhs) const
    // Matrix3 Matrix3::Inverse() const
    // const float* Matrix3::Data() const
    // float Matrix3::Element(unsigned i, unsigned j) const
    // Vector3 Matrix3::Row(unsigned i) const
    // Vector3 Matrix3::Column(unsigned j) const
    // bool Matrix3::IsNaN() const
    // bool Matrix3::IsInf() const
    // String Matrix3::ToString() const
}

// class Matrix3x4 | File: ../Math/Matrix3x4.h
void CollectMembers_Matrix3x4(Vector<RegisterObjectMethodArgs>& methods)
{
    // Matrix3x4& Matrix3x4::operator=(const Matrix3x4& rhs) noexcept=default
    // Matrix3x4& Matrix3x4::operator=(const Matrix3& rhs) noexcept
    // Matrix3x4& Matrix3x4::operator=(const Matrix4& rhs) noexcept
    // bool Matrix3x4::operator==(const Matrix3x4& rhs) const
    // bool Matrix3x4::operator!=(const Matrix3x4& rhs) const
    // Vector3 Matrix3x4::operator*(const Vector3& rhs) const
    // Vector3 Matrix3x4::operator*(const Vector4& rhs) const
    // Matrix3x4 Matrix3x4::operator+(const Matrix3x4& rhs) const
    // Matrix3x4 Matrix3x4::operator-(const Matrix3x4& rhs) const
    // Matrix3x4 Matrix3x4::operator*(float rhs) const
    // Matrix3x4 Matrix3x4::operator*(const Matrix3x4& rhs) const
    // Matrix4 Matrix3x4::operator*(const Matrix4& rhs) const
    // void Matrix3x4::SetTranslation(const Vector3& translation)
    // void Matrix3x4::SetRotation(const Matrix3& rotation)
    // void Matrix3x4::SetScale(const Vector3& scale)
    // void Matrix3x4::SetScale(float scale)
    // Matrix3 Matrix3x4::ToMatrix3() const
    // Matrix4 Matrix3x4::ToMatrix4() const
    // Matrix3 Matrix3x4::RotationMatrix() const
    // Vector3 Matrix3x4::Translation() const
    // Quaternion Matrix3x4::Rotation() const
    // Vector3 Matrix3x4::Scale() const
    // Vector3 Matrix3x4::SignedScale(const Matrix3& rotation) const
    // bool Matrix3x4::Equals(const Matrix3x4& rhs) const
    // void Matrix3x4::Decompose(Vector3& translation, Quaternion& rotation, Vector3& scale) const
    // Matrix3x4 Matrix3x4::Inverse() const
    // const float* Matrix3x4::Data() const
    // float Matrix3x4::Element(unsigned i, unsigned j) const
    // Vector4 Matrix3x4::Row(unsigned i) const
    // Vector3 Matrix3x4::Column(unsigned j) const
    // bool Matrix3x4::IsNaN() const
    // bool Matrix3x4::IsInf() const
    // String Matrix3x4::ToString() const
}

// class Matrix4 | File: ../Math/Matrix4.h
void CollectMembers_Matrix4(Vector<RegisterObjectMethodArgs>& methods)
{
    // Matrix4& Matrix4::operator=(const Matrix4& rhs) noexcept
    // Matrix4& Matrix4::operator=(const Matrix3& rhs) noexcept
    // bool Matrix4::operator==(const Matrix4& rhs) const
    // bool Matrix4::operator!=(const Matrix4& rhs) const
    // Vector3 Matrix4::operator*(const Vector3& rhs) const
    // Vector4 Matrix4::operator*(const Vector4& rhs) const
    // Matrix4 Matrix4::operator+(const Matrix4& rhs) const
    // Matrix4 Matrix4::operator-(const Matrix4& rhs) const
    // Matrix4 Matrix4::operator*(float rhs) const
    // Matrix4 Matrix4::operator*(const Matrix4& rhs) const
    // Matrix4 Matrix4::operator*(const Matrix3x4& rhs) const
    // void Matrix4::SetTranslation(const Vector3& translation)
    // void Matrix4::SetRotation(const Matrix3& rotation)
    // void Matrix4::SetScale(const Vector3& scale)
    // void Matrix4::SetScale(float scale)
    // Matrix3 Matrix4::ToMatrix3() const
    // Matrix3 Matrix4::RotationMatrix() const
    // Vector3 Matrix4::Translation() const
    // Quaternion Matrix4::Rotation() const
    // Vector3 Matrix4::Scale() const
    // Vector3 Matrix4::SignedScale(const Matrix3& rotation) const
    // Matrix4 Matrix4::Transpose() const
    // bool Matrix4::Equals(const Matrix4& rhs) const
    // void Matrix4::Decompose(Vector3& translation, Quaternion& rotation, Vector3& scale) const
    // Matrix4 Matrix4::Inverse() const
    // const float* Matrix4::Data() const
    // float Matrix4::Element(unsigned i, unsigned j) const
    // Vector4 Matrix4::Row(unsigned i) const
    // Vector4 Matrix4::Column(unsigned j) const
    // bool Matrix4::IsNaN() const
    // bool Matrix4::IsInf() const
    // String Matrix4::ToString() const
}

// class MemoryBuffer | File: ../IO/MemoryBuffer.h
void CollectMembers_MemoryBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    // unsigned MemoryBuffer::Read(void* dest, unsigned size) override
    // unsigned MemoryBuffer::Seek(unsigned position) override
    // unsigned MemoryBuffer::Write(const void* data, unsigned size) override
    // unsigned char* MemoryBuffer::GetData()
    // bool MemoryBuffer::IsReadOnly()
}

// class Menu | File: ../UI/Menu.h
void CollectMembers_Menu(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Button(methods);

    // -bool UIElement::LoadXML(Deserializer& source)
    // -bool UIElement::LoadXML(const XMLElement& source) override
    // -bool UIElement::SaveXML(Serializer& dest, const String& indentation="\t") const
    // -bool UIElement::SaveXML(XMLElement& dest) const override
    // -static void Button::RegisterObject(Context* context)
    // -virtual bool UIElement::LoadXML(const XMLElement& source, XMLFile* styleFile)
    // -virtual void UIElement::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -void Button::Update(float timeStep) override

    // bool Menu::LoadXML(const XMLElement& source, XMLFile* styleFile) override
    // bool Menu::SaveXML(XMLElement& dest) const override
    // void Menu::Update(float timeStep) override
    // void Menu::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // virtual void Menu::OnShowPopup()
    // virtual void Menu::OnHidePopup()
    // void Menu::SetPopup(UIElement* popup)
    // void Menu::SetPopupOffset(const IntVector2& offset)
    // void Menu::SetPopupOffset(int x, int y)
    // void Menu::ShowPopup(bool enable)
    // void Menu::SetAccelerator(int key, int qualifiers)
    // UIElement* Menu::GetPopup() const
    // const IntVector2& Menu::GetPopupOffset() const
    // bool Menu::GetShowPopup() const
    // int Menu::GetAcceleratorKey() const
    // int Menu::GetAcceleratorQualifiers() const
}

// class MessageBox | File: ../UI/MessageBox.h
void CollectMembers_MessageBox(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void MessageBox::SetTitle(const String& text)
    // void MessageBox::SetMessage(const String& text)
    // const String& MessageBox::GetTitle() const
    // const String& MessageBox::GetMessage() const
    // UIElement* MessageBox::GetWindow() const
}

// class Model | File: ../Graphics/Model.h
void CollectMembers_Model(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ResourceWithMetadata(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()
    // -virtual bool Resource::Save(Serializer& dest) const

    // bool Model::BeginLoad(Deserializer& source) override
    // bool Model::EndLoad() override
    // bool Model::Save(Serializer& dest) const override
    // void Model::SetBoundingBox(const BoundingBox& box)
    // bool Model::SetVertexBuffers(const Vector<SharedPtr<VertexBuffer>>& buffers, const PODVector<unsigned>& morphRangeStarts, const PODVector<unsigned>& morphRangeCounts)
    // bool Model::SetIndexBuffers(const Vector<SharedPtr<IndexBuffer>>& buffers)
    // void Model::SetNumGeometries(unsigned num)
    // bool Model::SetNumGeometryLodLevels(unsigned index, unsigned num)
    // bool Model::SetGeometry(unsigned index, unsigned lodLevel, Geometry* geometry)
    // bool Model::SetGeometryCenter(unsigned index, const Vector3& center)
    // void Model::SetSkeleton(const Skeleton& skeleton)
    // void Model::SetGeometryBoneMappings(const Vector<PODVector<unsigned>>& geometryBoneMappings)
    // void Model::SetMorphs(const Vector<ModelMorph>& morphs)
    // SharedPtr<Model> Model::Clone(const String& cloneName=String::EMPTY) const
    // const BoundingBox& Model::GetBoundingBox() const
    // Skeleton& Model::GetSkeleton()
    // const Vector<SharedPtr<VertexBuffer>>& Model::GetVertexBuffers() const
    // const Vector<SharedPtr<IndexBuffer>>& Model::GetIndexBuffers() const
    // unsigned Model::GetNumGeometries() const
    // unsigned Model::GetNumGeometryLodLevels(unsigned index) const
    // const Vector<Vector<SharedPtr<Geometry>>>& Model::GetGeometries() const
    // const PODVector<Vector3>& Model::GetGeometryCenters() const
    // Geometry* Model::GetGeometry(unsigned index, unsigned lodLevel) const
    // const Vector3& Model::GetGeometryCenter(unsigned index) const
    // const Vector<PODVector<unsigned>>& Model::GetGeometryBoneMappings() const
    // const Vector<ModelMorph>& Model::GetMorphs() const
    // unsigned Model::GetNumMorphs() const
    // const ModelMorph* Model::GetMorph(unsigned index) const
    // const ModelMorph* Model::GetMorph(const String& name) const
    // const ModelMorph* Model::GetMorph(StringHash nameHash) const
    // unsigned Model::GetMorphRangeStart(unsigned bufferIndex) const
    // unsigned Model::GetMorphRangeCount(unsigned bufferIndex) const
}

// struct ModelMorph | File: ../Graphics/Model.h
void CollectMembers_ModelMorph(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Mutex | File: ../Core/Mutex.h
void CollectMembers_Mutex(Vector<RegisterObjectMethodArgs>& methods)
{
    // void Mutex::Acquire()
    // bool Mutex::TryAcquire()
    // void Mutex::Release()
}

// class MutexLock | File: ../Core/Mutex.h
void CollectMembers_MutexLock(Vector<RegisterObjectMethodArgs>& methods)
{
    // MutexLock& MutexLock::operator=(const MutexLock& rhs)=delete
}

// class NamedPipe | File: ../IO/NamedPipe.h
void CollectMembers_NamedPipe(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
    CollectMembers_AbstractFile(methods);

    // -virtual bool Deserializer::IsEof() const
    // -virtual unsigned Deserializer::Read(void* dest, unsigned size)=0
    // -virtual unsigned Deserializer::Seek(unsigned position)=0
    // -virtual unsigned Serializer::Write(const void* data, unsigned size)=0
    // -virtual void AbstractFile::SetName(const String& name)

    // unsigned NamedPipe::Read(void* dest, unsigned size) override
    // unsigned NamedPipe::Seek(unsigned position) override
    // unsigned NamedPipe::Write(const void* data, unsigned size) override
    // bool NamedPipe::IsEof() const override
    // void NamedPipe::SetName(const String& name) override
    // bool NamedPipe::Open(const String& name, bool isServer)
    // void NamedPipe::Close()
    // bool NamedPipe::IsOpen() const
    // bool NamedPipe::IsServer() const
}

// struct NetworkState | File: ../Scene/ReplicationState.h
void CollectMembers_NetworkState(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Node | File: ../Scene/Node.h
void CollectMembers_Node(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Animatable(methods);

    // -bool Animatable::LoadJSON(const JSONValue& source) override
    // -bool Animatable::LoadXML(const XMLElement& source) override
    // -bool Animatable::SaveJSON(JSONValue& dest) const override
    // -bool Animatable::SaveXML(XMLElement& dest) const override
    // -static void Animatable::RegisterObject(Context* context)
    // -virtual bool Serializable::Load(Deserializer& source)
    // -virtual bool Serializable::Save(Serializer& dest) const
    // -virtual bool Serializable::SaveDefaultAttributes() const
    // -virtual void Serializable::ApplyAttributes()
    // -virtual void Serializable::MarkNetworkUpdate()

    // bool Node::Load(Deserializer& source) override
    // bool Node::LoadXML(const XMLElement& source) override
    // bool Node::LoadJSON(const JSONValue& source) override
    // bool Node::Save(Serializer& dest) const override
    // bool Node::SaveXML(XMLElement& dest) const override
    // bool Node::SaveJSON(JSONValue& dest) const override
    // void Node::ApplyAttributes() override
    // bool Node::SaveDefaultAttributes() const override
    // void Node::MarkNetworkUpdate() override
    // virtual void Node::AddReplicationState(NodeReplicationState* state)
    // bool Node::SaveXML(Serializer& dest, const String& indentation="\t") const
    // bool Node::SaveJSON(Serializer& dest, const String& indentation="\t") const
    // void Node::SetName(const String& name)
    // void Node::SetTags(const StringVector& tags)
    // void Node::AddTag(const String& tag)
    // void Node::AddTags(const String& tags, char separator=';')
    // void Node::AddTags(const StringVector& tags)
    // bool Node::RemoveTag(const String& tag)
    // void Node::RemoveAllTags()
    // void Node::SetPosition(const Vector3& position)
    // void Node::SetPosition2D(const Vector2& position)
    // void Node::SetPosition2D(float x, float y)
    // void Node::SetRotation(const Quaternion& rotation)
    // void Node::SetRotation2D(float rotation)
    // void Node::SetDirection(const Vector3& direction)
    // void Node::SetScale(float scale)
    // void Node::SetScale(const Vector3& scale)
    // void Node::SetScale2D(const Vector2& scale)
    // void Node::SetScale2D(float x, float y)
    // void Node::SetTransform(const Vector3& position, const Quaternion& rotation)
    // void Node::SetTransform(const Vector3& position, const Quaternion& rotation, float scale)
    // void Node::SetTransform(const Vector3& position, const Quaternion& rotation, const Vector3& scale)
    // void Node::SetTransform(const Matrix3x4& matrix)
    // void Node::SetTransform2D(const Vector2& position, float rotation)
    // void Node::SetTransform2D(const Vector2& position, float rotation, float scale)
    // void Node::SetTransform2D(const Vector2& position, float rotation, const Vector2& scale)
    // void Node::SetWorldPosition(const Vector3& position)
    // void Node::SetWorldPosition2D(const Vector2& position)
    // void Node::SetWorldPosition2D(float x, float y)
    // void Node::SetWorldRotation(const Quaternion& rotation)
    // void Node::SetWorldRotation2D(float rotation)
    // void Node::SetWorldDirection(const Vector3& direction)
    // void Node::SetWorldScale(float scale)
    // void Node::SetWorldScale(const Vector3& scale)
    // void Node::SetWorldScale2D(const Vector2& scale)
    // void Node::SetWorldScale2D(float x, float y)
    // void Node::SetWorldTransform(const Vector3& position, const Quaternion& rotation)
    // void Node::SetWorldTransform(const Vector3& position, const Quaternion& rotation, float scale)
    // void Node::SetWorldTransform(const Vector3& position, const Quaternion& rotation, const Vector3& scale)
    // void Node::SetWorldTransform(const Matrix3x4& worldTransform)
    // void Node::SetWorldTransform2D(const Vector2& position, float rotation)
    // void Node::SetWorldTransform2D(const Vector2& position, float rotation, float scale)
    // void Node::SetWorldTransform2D(const Vector2& position, float rotation, const Vector2& scale)
    // void Node::Translate(const Vector3& delta, TransformSpace space=TS_LOCAL)
    // void Node::Translate2D(const Vector2& delta, TransformSpace space=TS_LOCAL)
    // void Node::Rotate(const Quaternion& delta, TransformSpace space=TS_LOCAL)
    // void Node::Rotate2D(float delta, TransformSpace space=TS_LOCAL)
    // void Node::RotateAround(const Vector3& point, const Quaternion& delta, TransformSpace space=TS_LOCAL)
    // void Node::RotateAround2D(const Vector2& point, float delta, TransformSpace space=TS_LOCAL)
    // void Node::Pitch(float angle, TransformSpace space=TS_LOCAL)
    // void Node::Yaw(float angle, TransformSpace space=TS_LOCAL)
    // void Node::Roll(float angle, TransformSpace space=TS_LOCAL)
    // bool Node::LookAt(const Vector3& target, const Vector3& up=Vector3::UP, TransformSpace space=TS_WORLD)
    // void Node::Scale(float scale)
    // void Node::Scale(const Vector3& scale)
    // void Node::Scale2D(const Vector2& scale)
    // void Node::SetEnabled(bool enable)
    // void Node::SetDeepEnabled(bool enable)
    // void Node::ResetDeepEnabled()
    // void Node::SetEnabledRecursive(bool enable)
    // void Node::SetOwner(Connection* owner)
    // void Node::MarkDirty()
    // Node* Node::CreateChild(const String& name=String::EMPTY, CreateMode mode=REPLICATED, unsigned id=0, bool temporary=false)
    // Node* Node::CreateTemporaryChild(const String& name=String::EMPTY, CreateMode mode=REPLICATED, unsigned id=0)
    // void Node::AddChild(Node* node, unsigned index=M_MAX_UNSIGNED)
    // void Node::RemoveChild(Node* node)
    // void Node::RemoveAllChildren()
    // void Node::RemoveChildren(bool removeReplicated, bool removeLocal, bool recursive)
    // Component* Node::CreateComponent(StringHash type, CreateMode mode=REPLICATED, unsigned id=0)
    // Component* Node::GetOrCreateComponent(StringHash type, CreateMode mode=REPLICATED, unsigned id=0)
    // Component* Node::CloneComponent(Component* component, unsigned id=0)
    // Component* Node::CloneComponent(Component* component, CreateMode mode, unsigned id=0)
    // void Node::RemoveComponent(Component* component)
    // void Node::RemoveComponent(StringHash type)
    // void Node::RemoveComponents(bool removeReplicated, bool removeLocal)
    // void Node::RemoveComponents(StringHash type)
    // void Node::RemoveAllComponents()
    // void Node::ReorderComponent(Component* component, unsigned index)
    // Node* Node::Clone(CreateMode mode=REPLICATED)
    // void Node::Remove()
    // void Node::SetParent(Node* parent)
    // void Node::SetVar(StringHash key, const Variant& value)
    // void Node::AddListener(Component* component)
    // void Node::RemoveListener(Component* component)
    // template<class T> T* Node::CreateComponent(CreateMode mode=REPLICATED, unsigned id=0)
    // template<class T> T* Node::GetOrCreateComponent(CreateMode mode=REPLICATED, unsigned id=0)
    // template<class T> void Node::RemoveComponent()
    // template<class T> void Node::RemoveComponents()
    // unsigned Node::GetID() const
    // bool Node::IsReplicated() const
    // const String& Node::GetName() const
    // StringHash Node::GetNameHash() const
    // const StringVector& Node::GetTags() const
    // bool Node::HasTag(const String& tag) const
    // Node* Node::GetParent() const
    // Scene* Node::GetScene() const
    // bool Node::IsChildOf(Node* node) const
    // bool Node::IsEnabled() const
    // bool Node::IsEnabledSelf() const
    // Connection* Node::GetOwner() const
    // const Vector3& Node::GetPosition() const
    // Vector2 Node::GetPosition2D() const
    // const Quaternion& Node::GetRotation() const
    // float Node::GetRotation2D() const
    // Vector3 Node::GetDirection() const
    // Vector3 Node::GetUp() const
    // Vector3 Node::GetRight() const
    // const Vector3& Node::GetScale() const
    // Vector2 Node::GetScale2D() const
    // Matrix3x4 Node::GetTransform() const
    // Vector3 Node::GetWorldPosition() const
    // Vector2 Node::GetWorldPosition2D() const
    // Quaternion Node::GetWorldRotation() const
    // float Node::GetWorldRotation2D() const
    // Vector3 Node::GetWorldDirection() const
    // Vector3 Node::GetWorldUp() const
    // Vector3 Node::GetWorldRight() const
    // Vector3 Node::GetWorldScale() const
    // Vector3 Node::GetSignedWorldScale() const
    // Vector2 Node::GetWorldScale2D() const
    // const Matrix3x4& Node::GetWorldTransform() const
    // Vector3 Node::LocalToWorld(const Vector3& position) const
    // Vector3 Node::LocalToWorld(const Vector4& vector) const
    // Vector2 Node::LocalToWorld2D(const Vector2& vector) const
    // Vector3 Node::WorldToLocal(const Vector3& position) const
    // Vector3 Node::WorldToLocal(const Vector4& vector) const
    // Vector2 Node::WorldToLocal2D(const Vector2& vector) const
    // bool Node::IsDirty() const
    // unsigned Node::GetNumChildren(bool recursive=false) const
    // const Vector<SharedPtr<Node>>& Node::GetChildren() const
    // void Node::GetChildren(PODVector<Node*>& dest, bool recursive=false) const
    // PODVector<Node*> Node::GetChildren(bool recursive) const
    // void Node::GetChildrenWithComponent(PODVector<Node*>& dest, StringHash type, bool recursive=false) const
    // PODVector<Node*> Node::GetChildrenWithComponent(StringHash type, bool recursive=false) const
    // void Node::GetChildrenWithTag(PODVector<Node*>& dest, const String& tag, bool recursive=false) const
    // PODVector<Node*> Node::GetChildrenWithTag(const String& tag, bool recursive=false) const
    // Node* Node::GetChild(unsigned index) const
    // Node* Node::GetChild(const String& name, bool recursive=false) const
    // Node* Node::GetChild(const char* name, bool recursive=false) const
    // Node* Node::GetChild(StringHash nameHash, bool recursive=false) const
    // unsigned Node::GetNumComponents() const
    // unsigned Node::GetNumNetworkComponents() const
    // const Vector<SharedPtr<Component>>& Node::GetComponents() const
    // void Node::GetComponents(PODVector<Component*>& dest, StringHash type, bool recursive=false) const
    // Component* Node::GetComponent(StringHash type, bool recursive=false) const
    // Component* Node::GetParentComponent(StringHash type, bool fullTraversal=false) const
    // bool Node::HasComponent(StringHash type) const
    // const Vector<WeakPtr<Component>> Node::GetListeners() const
    // const Variant& Node::GetVar(StringHash key) const
    // const VariantMap& Node::GetVars() const
    // template<class T> T* Node::GetDerivedComponent(bool recursive=false) const
    // template<class T> T* Node::GetParentDerivedComponent(bool fullTraversal=false) const
    // template<class T> void Node::GetDerivedComponents(PODVector<T*>& dest, bool recursive=false, bool clearVector=true) const
    // template<class T> void Node::GetChildrenWithComponent(PODVector<Node*>& dest, bool recursive=false) const
    // template<class T> T* Node::GetComponent(bool recursive=false) const
    // template<class T> T* Node::GetParentComponent(bool fullTraversal=false) const
    // template<class T> void Node::GetComponents(PODVector<T*>& dest, bool recursive=false) const
    // template<class T> bool Node::HasComponent() const
    // void Node::SetID(unsigned id)
    // void Node::SetScene(Scene* scene)
    // void Node::ResetScene()
    // void Node::SetNetPositionAttr(const Vector3& value)
    // void Node::SetNetRotationAttr(const PODVector<unsigned char>& value)
    // void Node::SetNetParentAttr(const PODVector<unsigned char>& value)
    // const Vector3& Node::GetNetPositionAttr() const
    // const PODVector<unsigned char>& Node::GetNetRotationAttr() const
    // const PODVector<unsigned char>& Node::GetNetParentAttr() const
    // bool Node::Load(Deserializer& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)
    // bool Node::LoadXML(const XMLElement& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)
    // bool Node::LoadJSON(const JSONValue& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)
    // const PODVector<Node*>& Node::GetDependencyNodes() const
    // void Node::PrepareNetworkUpdate()
    // void Node::CleanupConnection(Connection* connection)
    // void Node::MarkReplicationDirty()
    // Node* Node::CreateChild(unsigned id, CreateMode mode, bool temporary=false)
    // void Node::AddComponent(Component* component, unsigned id, CreateMode mode)
    // unsigned Node::GetNumPersistentChildren() const
    // unsigned Node::GetNumPersistentComponents() const
    // void Node::SetPositionSilent(const Vector3& position)
    // void Node::SetRotationSilent(const Quaternion& rotation)
    // void Node::SetScaleSilent(const Vector3& scale)
    // void Node::SetTransformSilent(const Vector3& position, const Quaternion& rotation, const Vector3& scale)
}

// struct NodeImpl | File: ../Scene/Node.h
void CollectMembers_NodeImpl(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct NodeReplicationState | File: ../Scene/ReplicationState.h
void CollectMembers_NodeReplicationState(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ReplicationState(methods);
}

// class Object | File: ../Core/Object.h
void CollectMembers_Object(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // virtual StringHash Object::GetType() const =0
    // virtual const String& Object::GetTypeName() const =0
    // virtual const TypeInfo* Object::GetTypeInfo() const =0
    // virtual void Object::OnEvent(Object* sender, StringHash eventType, VariantMap& eventData)
    // bool Object::IsInstanceOf(StringHash type) const
    // bool Object::IsInstanceOf(const TypeInfo* typeInfo) const
    // template<typename T> bool Object::IsInstanceOf() const
    // template<typename T> T* Object::Cast()
    // template<typename T> const T* Object::Cast() const
    // void Object::SubscribeToEvent(StringHash eventType, EventHandler* handler)
    // void Object::SubscribeToEvent(Object* sender, StringHash eventType, EventHandler* handler)
    // void Object::SubscribeToEvent(StringHash eventType, const std::function<void(StringHash, VariantMap&)>& function, void* userData=nullptr)
    // void Object::SubscribeToEvent(Object* sender, StringHash eventType, const std::function<void(StringHash, VariantMap&)>& function, void* userData=nullptr)
    // void Object::UnsubscribeFromEvent(StringHash eventType)
    // void Object::UnsubscribeFromEvent(Object* sender, StringHash eventType)
    // void Object::UnsubscribeFromEvents(Object* sender)
    // void Object::UnsubscribeFromAllEvents()
    // void Object::UnsubscribeFromAllEventsExcept(const PODVector<StringHash>& exceptions, bool onlyUserData)
    // void Object::SendEvent(StringHash eventType)
    // void Object::SendEvent(StringHash eventType, VariantMap& eventData)
    // VariantMap& Object::GetEventDataMap() const
    // template<typename... Args> void Object::SendEvent(StringHash eventType, Args... args)
    // Context* Object::GetContext() const
    // const Variant& Object::GetGlobalVar(StringHash key) const
    // const VariantMap& Object::GetGlobalVars() const
    // void Object::SetGlobalVar(StringHash key, const Variant& value)
    // Object* Object::GetSubsystem(StringHash type) const
    // Object* Object::GetEventSender() const
    // EventHandler* Object::GetEventHandler() const
    // bool Object::HasSubscribedToEvent(StringHash eventType) const
    // bool Object::HasSubscribedToEvent(Object* sender, StringHash eventType) const
    // bool Object::HasEventHandlers() const
    // template<class T> T* Object::GetSubsystem() const
    // const String& Object::GetCategory() const
    // void Object::SetBlockEvents(bool block)
    // bool Object::GetBlockEvents() const
}

// class ObjectAnimation | File: ../Scene/ObjectAnimation.h
void CollectMembers_ObjectAnimation(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const

    // bool ObjectAnimation::BeginLoad(Deserializer& source) override
    // bool ObjectAnimation::Save(Serializer& dest) const override
    // bool ObjectAnimation::LoadXML(const XMLElement& source)
    // bool ObjectAnimation::SaveXML(XMLElement& dest) const
    // bool ObjectAnimation::LoadJSON(const JSONValue& source)
    // bool ObjectAnimation::SaveJSON(JSONValue& dest) const
    // void ObjectAnimation::AddAttributeAnimation(const String& name, ValueAnimation* attributeAnimation, WrapMode wrapMode=WM_LOOP, float speed=1.0f)
    // void ObjectAnimation::RemoveAttributeAnimation(const String& name)
    // void ObjectAnimation::RemoveAttributeAnimation(ValueAnimation* attributeAnimation)
    // ValueAnimation* ObjectAnimation::GetAttributeAnimation(const String& name) const
    // WrapMode ObjectAnimation::GetAttributeAnimationWrapMode(const String& name) const
    // float ObjectAnimation::GetAttributeAnimationSpeed(const String& name) const
    // const HashMap<String, SharedPtr<ValueAnimationInfo>>& ObjectAnimation::GetAttributeAnimationInfos() const
    // ValueAnimationInfo* ObjectAnimation::GetAttributeAnimationInfo(const String& name) const
}

// class ObjectFactory | File: ../Core/Object.h
void CollectMembers_ObjectFactory(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // virtual SharedPtr<Object> ObjectFactory::CreateObject()=0
    // Context* ObjectFactory::GetContext() const
    // const TypeInfo* ObjectFactory::GetTypeInfo() const
    // StringHash ObjectFactory::GetType() const
    // const String& ObjectFactory::GetTypeName() const
}

// struct OcclusionBatch | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_OcclusionBatch(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class OcclusionBuffer | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_OcclusionBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // bool OcclusionBuffer::SetSize(int width, int height, bool threaded)
    // void OcclusionBuffer::SetView(Camera* camera)
    // void OcclusionBuffer::SetMaxTriangles(unsigned triangles)
    // void OcclusionBuffer::SetCullMode(CullMode mode)
    // void OcclusionBuffer::Reset()
    // void OcclusionBuffer::Clear()
    // bool OcclusionBuffer::AddTriangles(const Matrix3x4& model, const void* vertexData, unsigned vertexSize, unsigned vertexStart, unsigned vertexCount)
    // bool OcclusionBuffer::AddTriangles(const Matrix3x4& model, const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount)
    // void OcclusionBuffer::DrawTriangles()
    // void OcclusionBuffer::BuildDepthHierarchy()
    // void OcclusionBuffer::ResetUseTimer()
    // int* OcclusionBuffer::GetBuffer() const
    // const Matrix3x4& OcclusionBuffer::GetView() const
    // const Matrix4& OcclusionBuffer::GetProjection() const
    // int OcclusionBuffer::GetWidth() const
    // int OcclusionBuffer::GetHeight() const
    // unsigned OcclusionBuffer::GetNumTriangles() const
    // unsigned OcclusionBuffer::GetMaxTriangles() const
    // CullMode OcclusionBuffer::GetCullMode() const
    // bool OcclusionBuffer::IsThreaded() const
    // bool OcclusionBuffer::IsVisible(const BoundingBox& worldSpaceBox) const
    // unsigned OcclusionBuffer::GetUseTimer()
    // void OcclusionBuffer::DrawBatch(const OcclusionBatch& batch, unsigned threadIndex)
}

// struct OcclusionBufferData | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_OcclusionBufferData(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Octant | File: ../Graphics/Octree.h
void CollectMembers_Octant(Vector<RegisterObjectMethodArgs>& methods)
{
    // Octant* Octant::GetOrCreateChild(unsigned index)
    // void Octant::DeleteChild(unsigned index)
    // void Octant::InsertDrawable(Drawable* drawable)
    // bool Octant::CheckDrawableFit(const BoundingBox& box) const
    // void Octant::AddDrawable(Drawable* drawable)
    // void Octant::RemoveDrawable(Drawable* drawable, bool resetOctant=true)
    // const BoundingBox& Octant::GetWorldBoundingBox() const
    // const BoundingBox& Octant::GetCullingBox() const
    // unsigned Octant::GetLevel() const
    // Octant* Octant::GetParent() const
    // Octree* Octant::GetRoot() const
    // unsigned Octant::GetNumDrawables() const
    // bool Octant::IsEmpty()
    // void Octant::ResetRoot()
    // void Octant::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
}

// class Octree | File: ../Graphics/Octree.h
void CollectMembers_Octree(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);
    CollectMembers_Octant(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -void Octant::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // void Octree::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void Octree::SetSize(const BoundingBox& box, unsigned numLevels)
    // void Octree::Update(const FrameInfo& frame)
    // void Octree::AddManualDrawable(Drawable* drawable)
    // void Octree::RemoveManualDrawable(Drawable* drawable)
    // void Octree::GetDrawables(OctreeQuery& query) const
    // void Octree::Raycast(RayOctreeQuery& query) const
    // void Octree::RaycastSingle(RayOctreeQuery& query) const
    // unsigned Octree::GetNumLevels() const
    // void Octree::QueueUpdate(Drawable* drawable)
    // void Octree::CancelUpdate(Drawable* drawable)
    // void Octree::DrawDebugGeometry(bool depthTest)
}

// class OctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_OctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // OctreeQuery& OctreeQuery::operator=(const OctreeQuery& rhs)=delete
    // virtual Intersection OctreeQuery::TestOctant(const BoundingBox& box, bool inside)=0
    // virtual void OctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside)=0
}

// struct OctreeQueryResult | File: ../Graphics/OctreeQuery.h
void CollectMembers_OctreeQueryResult(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool OctreeQueryResult::operator!=(const OctreeQueryResult& rhs) const
}

// class OggVorbisSoundStream | File: ../Audio/OggVorbisSoundStream.h
void CollectMembers_OggVorbisSoundStream(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_SoundStream(methods);

    // -virtual bool SoundStream::Seek(unsigned sample_number)
    // -virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0

    // bool OggVorbisSoundStream::Seek(unsigned sample_number) override
    // unsigned OggVorbisSoundStream::GetData(signed char* dest, unsigned numBytes) override
}

// struct PackageEntry | File: ../IO/PackageFile.h
void CollectMembers_PackageEntry(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class PackageFile | File: ../IO/PackageFile.h
void CollectMembers_PackageFile(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // bool PackageFile::Open(const String& fileName, unsigned startOffset=0)
    // bool PackageFile::Exists(const String& fileName) const
    // const PackageEntry* PackageFile::GetEntry(const String& fileName) const
    // const HashMap<String, PackageEntry>& PackageFile::GetEntries() const
    // const String& PackageFile::GetName() const
    // StringHash PackageFile::GetNameHash() const
    // unsigned PackageFile::GetNumFiles() const
    // unsigned PackageFile::GetTotalSize() const
    // unsigned PackageFile::GetTotalDataSize() const
    // unsigned PackageFile::GetChecksum() const
    // bool PackageFile::IsCompressed() const
    // const Vector<String> PackageFile::GetEntryNames() const
}

// struct Particle | File: ../Graphics/ParticleEmitter.h
void CollectMembers_Particle(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ParticleEffect | File: ../Graphics/ParticleEffect.h
void CollectMembers_ParticleEffect(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -bool Resource::Load(Deserializer& source)
    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()
    // -virtual bool Resource::Save(Serializer& dest) const

    // bool ParticleEffect::BeginLoad(Deserializer& source) override
    // bool ParticleEffect::EndLoad() override
    // bool ParticleEffect::Save(Serializer& dest) const override
    // bool ParticleEffect::Save(XMLElement& dest) const
    // bool ParticleEffect::Load(const XMLElement& source)
    // void ParticleEffect::SetMaterial(Material* material)
    // void ParticleEffect::SetNumParticles(unsigned num)
    // void ParticleEffect::SetUpdateInvisible(bool enable)
    // void ParticleEffect::SetRelative(bool enable)
    // void ParticleEffect::SetScaled(bool enable)
    // void ParticleEffect::SetSorted(bool enable)
    // void ParticleEffect::SetFixedScreenSize(bool enable)
    // void ParticleEffect::SetAnimationLodBias(float lodBias)
    // void ParticleEffect::SetEmitterType(EmitterType type)
    // void ParticleEffect::SetEmitterSize(const Vector3& size)
    // void ParticleEffect::SetMinDirection(const Vector3& direction)
    // void ParticleEffect::SetMaxDirection(const Vector3& direction)
    // void ParticleEffect::SetConstantForce(const Vector3& force)
    // void ParticleEffect::SetDampingForce(float force)
    // void ParticleEffect::SetActiveTime(float time)
    // void ParticleEffect::SetInactiveTime(float time)
    // void ParticleEffect::SetMinEmissionRate(float rate)
    // void ParticleEffect::SetMaxEmissionRate(float rate)
    // void ParticleEffect::SetMinParticleSize(const Vector2& size)
    // void ParticleEffect::SetMaxParticleSize(const Vector2& size)
    // void ParticleEffect::SetMinTimeToLive(float time)
    // void ParticleEffect::SetMaxTimeToLive(float time)
    // void ParticleEffect::SetMinVelocity(float velocity)
    // void ParticleEffect::SetMaxVelocity(float velocity)
    // void ParticleEffect::SetMinRotation(float rotation)
    // void ParticleEffect::SetMaxRotation(float rotation)
    // void ParticleEffect::SetMinRotationSpeed(float speed)
    // void ParticleEffect::SetMaxRotationSpeed(float speed)
    // void ParticleEffect::SetSizeAdd(float sizeAdd)
    // void ParticleEffect::SetSizeMul(float sizeMul)
    // void ParticleEffect::SetFaceCameraMode(FaceCameraMode mode)
    // void ParticleEffect::AddColorTime(const Color& color, float time)
    // void ParticleEffect::AddColorFrame(const ColorFrame& colorFrame)
    // void ParticleEffect::RemoveColorFrame(unsigned index)
    // void ParticleEffect::SetColorFrames(const Vector<ColorFrame>& colorFrames)
    // void ParticleEffect::SetColorFrame(unsigned index, const ColorFrame& colorFrame)
    // void ParticleEffect::SetNumColorFrames(unsigned number)
    // void ParticleEffect::SortColorFrames()
    // void ParticleEffect::AddTextureTime(const Rect& uv, float time)
    // void ParticleEffect::AddTextureFrame(const TextureFrame& textureFrame)
    // void ParticleEffect::RemoveTextureFrame(unsigned index)
    // void ParticleEffect::SetTextureFrames(const Vector<TextureFrame>& textureFrames)
    // void ParticleEffect::SetTextureFrame(unsigned index, const TextureFrame& textureFrame)
    // void ParticleEffect::SetNumTextureFrames(unsigned number)
    // void ParticleEffect::SortTextureFrames()
    // SharedPtr<ParticleEffect> ParticleEffect::Clone(const String& cloneName=String::EMPTY) const
    // Material* ParticleEffect::GetMaterial() const
    // unsigned ParticleEffect::GetNumParticles() const
    // bool ParticleEffect::GetUpdateInvisible() const
    // bool ParticleEffect::IsRelative() const
    // bool ParticleEffect::IsScaled() const
    // bool ParticleEffect::IsSorted() const
    // bool ParticleEffect::IsFixedScreenSize() const
    // float ParticleEffect::GetAnimationLodBias() const
    // EmitterType ParticleEffect::GetEmitterType() const
    // const Vector3& ParticleEffect::GetEmitterSize() const
    // const Vector3& ParticleEffect::GetMinDirection() const
    // const Vector3& ParticleEffect::GetMaxDirection() const
    // const Vector3& ParticleEffect::GetConstantForce() const
    // float ParticleEffect::GetDampingForce() const
    // float ParticleEffect::GetActiveTime() const
    // float ParticleEffect::GetInactiveTime() const
    // float ParticleEffect::GetMinEmissionRate() const
    // float ParticleEffect::GetMaxEmissionRate() const
    // const Vector2& ParticleEffect::GetMinParticleSize() const
    // const Vector2& ParticleEffect::GetMaxParticleSize() const
    // float ParticleEffect::GetMinTimeToLive() const
    // float ParticleEffect::GetMaxTimeToLive() const
    // float ParticleEffect::GetMinVelocity() const
    // float ParticleEffect::GetMaxVelocity() const
    // float ParticleEffect::GetMinRotation() const
    // float ParticleEffect::GetMaxRotation() const
    // float ParticleEffect::GetMinRotationSpeed() const
    // float ParticleEffect::GetMaxRotationSpeed() const
    // float ParticleEffect::GetSizeAdd() const
    // float ParticleEffect::GetSizeMul() const
    // const Vector<ColorFrame>& ParticleEffect::GetColorFrames() const
    // unsigned ParticleEffect::GetNumColorFrames() const
    // const ColorFrame* ParticleEffect::GetColorFrame(unsigned index) const
    // const Vector<TextureFrame>& ParticleEffect::GetTextureFrames() const
    // unsigned ParticleEffect::GetNumTextureFrames() const
    // const TextureFrame* ParticleEffect::GetTextureFrame(unsigned index) const
    // FaceCameraMode ParticleEffect::GetFaceCameraMode() const
    // Vector3 ParticleEffect::GetRandomDirection() const
    // Vector2 ParticleEffect::GetRandomSize() const
    // float ParticleEffect::GetRandomVelocity() const
    // float ParticleEffect::GetRandomTimeToLive() const
    // float ParticleEffect::GetRandomRotationSpeed() const
    // float ParticleEffect::GetRandomRotation() const
}

// class ParticleEmitter | File: ../Graphics/ParticleEmitter.h
void CollectMembers_ParticleEmitter(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BillboardSet(methods);

    // -static void BillboardSet::RegisterObject(Context* context)
    // -virtual void Drawable::Update(const FrameInfo& frame)
    // -void Drawable::OnSetEnabled() override

    // void ParticleEmitter::OnSetEnabled() override
    // void ParticleEmitter::Update(const FrameInfo& frame) override
    // void ParticleEmitter::SetEffect(ParticleEffect* effect)
    // void ParticleEmitter::SetNumParticles(unsigned num)
    // void ParticleEmitter::SetEmitting(bool enable)
    // void ParticleEmitter::SetSerializeParticles(bool enable)
    // void ParticleEmitter::SetAutoRemoveMode(AutoRemoveMode mode)
    // void ParticleEmitter::ResetEmissionTimer()
    // void ParticleEmitter::RemoveAllParticles()
    // void ParticleEmitter::Reset()
    // void ParticleEmitter::ApplyEffect()
    // ParticleEffect* ParticleEmitter::GetEffect() const
    // unsigned ParticleEmitter::GetNumParticles() const
    // bool ParticleEmitter::IsEmitting() const
    // bool ParticleEmitter::GetSerializeParticles() const
    // AutoRemoveMode ParticleEmitter::GetAutoRemoveMode() const
    // void ParticleEmitter::SetEffectAttr(const ResourceRef& value)
    // ResourceRef ParticleEmitter::GetEffectAttr() const
    // void ParticleEmitter::SetParticlesAttr(const VariantVector& value)
    // VariantVector ParticleEmitter::GetParticlesAttr() const
    // VariantVector ParticleEmitter::GetParticleBillboardsAttr() const
}

// class Pass | File: ../Graphics/Technique.h
void CollectMembers_Pass(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // void Pass::SetBlendMode(BlendMode mode)
    // void Pass::SetCullMode(CullMode mode)
    // void Pass::SetDepthTestMode(CompareMode mode)
    // void Pass::SetLightingMode(PassLightingMode mode)
    // void Pass::SetDepthWrite(bool enable)
    // void Pass::SetAlphaToCoverage(bool enable)
    // void Pass::SetIsDesktop(bool enable)
    // void Pass::SetVertexShader(const String& name)
    // void Pass::SetPixelShader(const String& name)
    // void Pass::SetVertexShaderDefines(const String& defines)
    // void Pass::SetPixelShaderDefines(const String& defines)
    // void Pass::SetVertexShaderDefineExcludes(const String& excludes)
    // void Pass::SetPixelShaderDefineExcludes(const String& excludes)
    // void Pass::ReleaseShaders()
    // void Pass::MarkShadersLoaded(unsigned frameNumber)
    // const String& Pass::GetName() const
    // unsigned Pass::GetIndex() const
    // BlendMode Pass::GetBlendMode() const
    // CullMode Pass::GetCullMode() const
    // CompareMode Pass::GetDepthTestMode() const
    // PassLightingMode Pass::GetLightingMode() const
    // unsigned Pass::GetShadersLoadedFrameNumber() const
    // bool Pass::GetDepthWrite() const
    // bool Pass::GetAlphaToCoverage() const
    // bool Pass::IsDesktop() const
    // const String& Pass::GetVertexShader() const
    // const String& Pass::GetPixelShader() const
    // const String& Pass::GetVertexShaderDefines() const
    // const String& Pass::GetPixelShaderDefines() const
    // const String& Pass::GetVertexShaderDefineExcludes() const
    // const String& Pass::GetPixelShaderDefineExcludes() const
    // Vector<SharedPtr<ShaderVariation>>& Pass::GetVertexShaders()
    // Vector<SharedPtr<ShaderVariation>>& Pass::GetPixelShaders()
    // Vector<SharedPtr<ShaderVariation>>& Pass::GetVertexShaders(const StringHash& extraDefinesHash)
    // Vector<SharedPtr<ShaderVariation>>& Pass::GetPixelShaders(const StringHash& extraDefinesHash)
    // String Pass::GetEffectiveVertexShaderDefines() const
    // String Pass::GetEffectivePixelShaderDefines() const
}

// struct PerThreadSceneResult | File: ../Graphics/View.h
void CollectMembers_PerThreadSceneResult(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Plane | File: ../Math/Plane.h
void CollectMembers_Plane(Vector<RegisterObjectMethodArgs>& methods)
{
    // Plane& Plane::operator=(const Plane& rhs) noexcept=default
    // void Plane::Define(const Vector3& v0, const Vector3& v1, const Vector3& v2)
    // void Plane::Define(const Vector3& normal, const Vector3& point)
    // void Plane::Define(const Vector4& plane)
    // void Plane::Transform(const Matrix3& transform)
    // void Plane::Transform(const Matrix3x4& transform)
    // void Plane::Transform(const Matrix4& transform)
    // Vector3 Plane::Project(const Vector3& point) const
    // float Plane::Distance(const Vector3& point) const
    // Vector3 Plane::Reflect(const Vector3& direction) const
    // Matrix3x4 Plane::ReflectionMatrix() const
    // Plane Plane::Transformed(const Matrix3& transform) const
    // Plane Plane::Transformed(const Matrix3x4& transform) const
    // Plane Plane::Transformed(const Matrix4& transform) const
    // Vector4 Plane::ToVector4() const
}

// class PointOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_PointOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // Intersection PointOctreeQuery::TestOctant(const BoundingBox& box, bool inside) override
    // void PointOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
}

// class Polyhedron | File: ../Math/Polyhedron.h
void CollectMembers_Polyhedron(Vector<RegisterObjectMethodArgs>& methods)
{
    // Polyhedron& Polyhedron::operator=(const Polyhedron& rhs)
    // void Polyhedron::Define(const BoundingBox& box)
    // void Polyhedron::Define(const Frustum& frustum)
    // void Polyhedron::AddFace(const Vector3& v0, const Vector3& v1, const Vector3& v2)
    // void Polyhedron::AddFace(const Vector3& v0, const Vector3& v1, const Vector3& v2, const Vector3& v3)
    // void Polyhedron::AddFace(const PODVector<Vector3>& face)
    // void Polyhedron::Clip(const Plane& plane)
    // void Polyhedron::Clip(const BoundingBox& box)
    // void Polyhedron::Clip(const Frustum& frustum)
    // void Polyhedron::Clear()
    // void Polyhedron::Transform(const Matrix3& transform)
    // void Polyhedron::Transform(const Matrix3x4& transform)
    // Polyhedron Polyhedron::Transformed(const Matrix3& transform) const
    // Polyhedron Polyhedron::Transformed(const Matrix3x4& transform) const
    // bool Polyhedron::Empty() const
}

// class Profiler | File: ../Core/Profiler.h
void CollectMembers_Profiler(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Profiler::BeginBlock(const char* name)
    // void Profiler::EndBlock()
    // void Profiler::BeginFrame()
    // void Profiler::EndFrame()
    // void Profiler::BeginInterval()
    // const String& Profiler::PrintData(bool showUnused=false, bool showTotal=false, unsigned maxDepth=M_MAX_UNSIGNED) const
    // const ProfilerBlock* Profiler::GetCurrentBlock()
    // const ProfilerBlock* Profiler::GetRootBlock()
}

// class ProfilerBlock | File: ../Core/Profiler.h
void CollectMembers_ProfilerBlock(Vector<RegisterObjectMethodArgs>& methods)
{
    // void ProfilerBlock::Begin()
    // void ProfilerBlock::End()
    // void ProfilerBlock::EndFrame()
    // void ProfilerBlock::BeginInterval()
    // ProfilerBlock* ProfilerBlock::GetChild(const char* name)
}

// class ProgressBar | File: ../UI/ProgressBar.h
void CollectMembers_ProgressBar(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)

    // void ProgressBar::OnResize(const IntVector2& newSize, const IntVector2& delta) override
    // void ProgressBar::SetOrientation(Orientation orientation)
    // void ProgressBar::SetRange(float range)
    // void ProgressBar::SetValue(float value)
    // void ProgressBar::ChangeValue(float delta)
    // Orientation ProgressBar::GetOrientation() const
    // float ProgressBar::GetRange() const
    // float ProgressBar::GetValue() const
    // BorderImage* ProgressBar::GetKnob() const
    // void ProgressBar::SetLoadingPercentStyle(const String& style)
    // const String& ProgressBar::GetLoadingPercentStyle() const
    // void ProgressBar::SetShowPercentText(bool enable)
    // bool ProgressBar::GetShowPercentText() const
}

// class Quaternion | File: ../Math/Quaternion.h
void CollectMembers_Quaternion(Vector<RegisterObjectMethodArgs>& methods)
{
    // Quaternion& Quaternion::operator=(const Quaternion& rhs) noexcept
    // Quaternion& Quaternion::operator+=(const Quaternion& rhs)
    // Quaternion& Quaternion::operator*=(float rhs)
    // bool Quaternion::operator==(const Quaternion& rhs) const
    // bool Quaternion::operator!=(const Quaternion& rhs) const
    // Quaternion Quaternion::operator*(float rhs) const
    // Quaternion Quaternion::operator-() const
    // Quaternion Quaternion::operator+(const Quaternion& rhs) const
    // Quaternion Quaternion::operator-(const Quaternion& rhs) const
    // Quaternion Quaternion::operator*(const Quaternion& rhs) const
    // Vector3 Quaternion::operator*(const Vector3& rhs) const
    // void Quaternion::FromAngleAxis(float angle, const Vector3& axis)
    // void Quaternion::FromEulerAngles(float x, float y, float z)
    // void Quaternion::FromRotationTo(const Vector3& start, const Vector3& end)
    // void Quaternion::FromAxes(const Vector3& xAxis, const Vector3& yAxis, const Vector3& zAxis)
    // void Quaternion::FromRotationMatrix(const Matrix3& matrix)
    // bool Quaternion::FromLookRotation(const Vector3& direction, const Vector3& up=Vector3::UP)
    // void Quaternion::Normalize()
    // Quaternion Quaternion::Normalized() const
    // Quaternion Quaternion::Inverse() const
    // float Quaternion::LengthSquared() const
    // float Quaternion::DotProduct(const Quaternion& rhs) const
    // bool Quaternion::Equals(const Quaternion& rhs) const
    // bool Quaternion::IsNaN() const
    // bool Quaternion::IsInf() const
    // Quaternion Quaternion::Conjugate() const
    // Vector3 Quaternion::EulerAngles() const
    // float Quaternion::YawAngle() const
    // float Quaternion::PitchAngle() const
    // float Quaternion::RollAngle() const
    // Vector3 Quaternion::Axis() const
    // float Quaternion::Angle() const
    // Matrix3 Quaternion::RotationMatrix() const
    // Quaternion Quaternion::Slerp(const Quaternion& rhs, float t) const
    // Quaternion Quaternion::Nlerp(const Quaternion& rhs, float t, bool shortestPath=false) const
    // const float* Quaternion::Data() const
    // String Quaternion::ToString() const
}

// class Ray | File: ../Math/Ray.h
void CollectMembers_Ray(Vector<RegisterObjectMethodArgs>& methods)
{
    // Ray& Ray::operator=(const Ray& rhs) noexcept=default
    // bool Ray::operator==(const Ray& rhs) const
    // bool Ray::operator!=(const Ray& rhs) const
    // void Ray::Define(const Vector3& origin, const Vector3& direction)
    // Vector3 Ray::Project(const Vector3& point) const
    // float Ray::Distance(const Vector3& point) const
    // Vector3 Ray::ClosestPoint(const Ray& ray) const
    // float Ray::HitDistance(const Plane& plane) const
    // float Ray::HitDistance(const BoundingBox& box) const
    // float Ray::HitDistance(const Frustum& frustum, bool solidInside=true) const
    // float Ray::HitDistance(const Sphere& sphere) const
    // float Ray::HitDistance(const Vector3& v0, const Vector3& v1, const Vector3& v2, Vector3* outNormal=nullptr, Vector3* outBary=nullptr) const
    // float Ray::HitDistance(const void* vertexData, unsigned vertexStride, unsigned vertexStart, unsigned vertexCount, Vector3* outNormal=nullptr, Vector2* outUV=nullptr, unsigned uvOffset=0) const
    // float Ray::HitDistance(const void* vertexData, unsigned vertexStride, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, Vector3* outNormal=nullptr, Vector2* outUV=nullptr, unsigned uvOffset=0) const
    // bool Ray::InsideGeometry(const void* vertexData, unsigned vertexSize, unsigned vertexStart, unsigned vertexCount) const
    // bool Ray::InsideGeometry(const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount) const
    // Ray Ray::Transformed(const Matrix3x4& transform) const
}

// class RayOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_RayOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // RayOctreeQuery& RayOctreeQuery::operator=(const RayOctreeQuery& rhs)=delete
}

// struct RayQueryResult | File: ../Graphics/OctreeQuery.h
void CollectMembers_RayQueryResult(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool RayQueryResult::operator!=(const RayQueryResult& rhs) const
}

// class Rect | File: ../Math/Rect.h
void CollectMembers_Rect(Vector<RegisterObjectMethodArgs>& methods)
{
    // Rect& Rect::operator=(const Rect& rhs) noexcept=default
    // bool Rect::operator==(const Rect& rhs) const
    // bool Rect::operator!=(const Rect& rhs) const
    // Rect& Rect::operator+=(const Rect& rhs)
    // Rect& Rect::operator-=(const Rect& rhs)
    // Rect& Rect::operator/=(float value)
    // Rect& Rect::operator*=(float value)
    // Rect Rect::operator/(float value) const
    // Rect Rect::operator*(float value) const
    // Rect Rect::operator+(const Rect& rhs) const
    // Rect Rect::operator-(const Rect& rhs) const
    // void Rect::Define(const Rect& rect)
    // void Rect::Define(const Vector2& min, const Vector2& max)
    // void Rect::Define(const Vector2& point)
    // void Rect::Merge(const Vector2& point)
    // void Rect::Merge(const Rect& rect)
    // void Rect::Clear()
    // void Rect::Clip(const Rect& rect)
    // bool Rect::Defined() const
    // Vector2 Rect::Center() const
    // Vector2 Rect::Size() const
    // Vector2 Rect::HalfSize() const
    // bool Rect::Equals(const Rect& rhs) const
    // Intersection Rect::IsInside(const Vector2& point) const
    // Intersection Rect::IsInside(const Rect& rect) const
    // const float* Rect::Data() const
    // Vector4 Rect::ToVector4() const
    // String Rect::ToString() const
    // Vector2 Rect::Min() const
    // Vector2 Rect::Max() const
    // float Rect::Left() const
    // float Rect::Top() const
    // float Rect::Right() const
    // float Rect::Bottom() const
}

// struct RefCount | File: ../Container/RefCounted.h
void CollectMembers_RefCount(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class RefCounted | File: ../Container/RefCounted.h
void CollectMembers_RefCounted(Vector<RegisterObjectMethodArgs>& methods)
{
    // RefCounted& RefCounted::operator=(const RefCounted& rhs)=delete
    // void RefCounted::AddRef()
    // void RefCounted::ReleaseRef()
    // int RefCounted::Refs() const
    // int RefCounted::WeakRefs() const
    // RefCount* RefCounted::RefCountPtr()
}

// class RenderPath | File: ../Graphics/RenderPath.h
void CollectMembers_RenderPath(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // SharedPtr<RenderPath> RenderPath::Clone()
    // bool RenderPath::Load(XMLFile* file)
    // bool RenderPath::Append(XMLFile* file)
    // void RenderPath::SetEnabled(const String& tag, bool active)
    // bool RenderPath::IsEnabled(const String& tag) const
    // bool RenderPath::IsAdded(const String& tag) const
    // void RenderPath::ToggleEnabled(const String& tag)
    // void RenderPath::SetRenderTarget(unsigned index, const RenderTargetInfo& info)
    // void RenderPath::AddRenderTarget(const RenderTargetInfo& info)
    // void RenderPath::RemoveRenderTarget(unsigned index)
    // void RenderPath::RemoveRenderTarget(const String& name)
    // void RenderPath::RemoveRenderTargets(const String& tag)
    // void RenderPath::SetCommand(unsigned index, const RenderPathCommand& command)
    // void RenderPath::AddCommand(const RenderPathCommand& command)
    // void RenderPath::InsertCommand(unsigned index, const RenderPathCommand& command)
    // void RenderPath::RemoveCommand(unsigned index)
    // void RenderPath::RemoveCommands(const String& tag)
    // void RenderPath::SetShaderParameter(const String& name, const Variant& value)
    // unsigned RenderPath::GetNumRenderTargets() const
    // unsigned RenderPath::GetNumCommands() const
    // RenderPathCommand* RenderPath::GetCommand(unsigned index)
    // const Variant& RenderPath::GetShaderParameter(const String& name) const
}

// struct RenderPathCommand | File: ../Graphics/RenderPath.h
void CollectMembers_RenderPathCommand(Vector<RegisterObjectMethodArgs>& methods)
{
    // void RenderPathCommand::Load(const XMLElement& element)
    // void RenderPathCommand::SetTextureName(TextureUnit unit, const String& name)
    // void RenderPathCommand::SetShaderParameter(const String& name, const Variant& value)
    // void RenderPathCommand::RemoveShaderParameter(const String& name)
    // void RenderPathCommand::SetNumOutputs(unsigned num)
    // void RenderPathCommand::SetOutput(unsigned index, const String& name, CubeMapFace face=FACE_POSITIVE_X)
    // void RenderPathCommand::SetOutputName(unsigned index, const String& name)
    // void RenderPathCommand::SetOutputFace(unsigned index, CubeMapFace face)
    // void RenderPathCommand::SetDepthStencilName(const String& name)
    // const String& RenderPathCommand::GetTextureName(TextureUnit unit) const
    // const Variant& RenderPathCommand::GetShaderParameter(const String& name) const
    // unsigned RenderPathCommand::GetNumOutputs() const
    // const String& RenderPathCommand::GetOutputName(unsigned index) const
    // CubeMapFace RenderPathCommand::GetOutputFace(unsigned index) const
    // const String& RenderPathCommand::GetDepthStencilName() const
}

// class RenderSurface | File: ../Graphics/RenderSurface.h
void CollectMembers_RenderSurface(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // void RenderSurface::SetNumViewports(unsigned num)
    // void RenderSurface::SetViewport(unsigned index, Viewport* viewport)
    // void RenderSurface::SetUpdateMode(RenderSurfaceUpdateMode mode)
    // void RenderSurface::SetLinkedRenderTarget(RenderSurface* renderTarget)
    // void RenderSurface::SetLinkedDepthStencil(RenderSurface* depthStencil)
    // void RenderSurface::QueueUpdate()
    // void RenderSurface::Release()
    // void RenderSurface::OnDeviceLost()
    // bool RenderSurface::CreateRenderBuffer(unsigned width, unsigned height, unsigned format, int multiSample)
    // int RenderSurface::GetWidth() const
    // int RenderSurface::GetHeight() const
    // TextureUsage RenderSurface::GetUsage() const
    // int RenderSurface::GetMultiSample() const
    // bool RenderSurface::GetAutoResolve() const
    // unsigned RenderSurface::GetNumViewports() const
    // Viewport* RenderSurface::GetViewport(unsigned index) const
    // RenderSurfaceUpdateMode RenderSurface::GetUpdateMode() const
    // RenderSurface* RenderSurface::GetLinkedRenderTarget() const
    // RenderSurface* RenderSurface::GetLinkedDepthStencil() const
    // bool RenderSurface::IsUpdateQueued() const
    // void RenderSurface::ResetUpdateQueued()
    // Texture* RenderSurface::GetParentTexture() const
    // void* RenderSurface::GetSurface() const
    // void* RenderSurface::GetRenderTargetView() const
    // void* RenderSurface::GetReadOnlyView() const
    // unsigned RenderSurface::GetTarget() const
    // unsigned RenderSurface::GetRenderBuffer() const
    // bool RenderSurface::IsResolveDirty() const
    // void RenderSurface::SetResolveDirty(bool enable)
}

// struct RenderTargetInfo | File: ../Graphics/RenderPath.h
void CollectMembers_RenderTargetInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    // void RenderTargetInfo::Load(const XMLElement& element)
}

// class Renderer | File: ../Graphics/Renderer.h
void CollectMembers_Renderer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Renderer::SetNumViewports(unsigned num)
    // void Renderer::SetViewport(unsigned index, Viewport* viewport)
    // void Renderer::SetDefaultRenderPath(RenderPath* renderPath)
    // void Renderer::SetDefaultRenderPath(XMLFile* xmlFile)
    // void Renderer::SetDefaultTechnique(Technique* technique)
    // void Renderer::SetHDRRendering(bool enable)
    // void Renderer::SetSpecularLighting(bool enable)
    // void Renderer::SetTextureAnisotropy(int level)
    // void Renderer::SetTextureFilterMode(TextureFilterMode mode)
    // void Renderer::SetTextureQuality(MaterialQuality quality)
    // void Renderer::SetMaterialQuality(MaterialQuality quality)
    // void Renderer::SetDrawShadows(bool enable)
    // void Renderer::SetShadowMapSize(int size)
    // void Renderer::SetShadowQuality(ShadowQuality quality)
    // void Renderer::SetShadowSoftness(float shadowSoftness)
    // void Renderer::SetVSMShadowParameters(float minVariance, float lightBleedingReduction)
    // void Renderer::SetVSMMultiSample(int multiSample)
    // void Renderer::SetShadowMapFilter(Object* instance, ShadowMapFilter functionPtr)
    // void Renderer::SetReuseShadowMaps(bool enable)
    // void Renderer::SetMaxShadowMaps(int shadowMaps)
    // void Renderer::SetDynamicInstancing(bool enable)
    // void Renderer::SetNumExtraInstancingBufferElements(int elements)
    // void Renderer::SetMinInstances(int instances)
    // void Renderer::SetMaxSortedInstances(int instances)
    // void Renderer::SetMaxOccluderTriangles(int triangles)
    // void Renderer::SetOcclusionBufferSize(int size)
    // void Renderer::SetOccluderSizeThreshold(float screenSize)
    // void Renderer::SetThreadedOcclusion(bool enable)
    // void Renderer::SetMobileShadowBiasMul(float mul)
    // void Renderer::SetMobileShadowBiasAdd(float add)
    // void Renderer::SetMobileNormalOffsetMul(float mul)
    // void Renderer::ReloadShaders()
    // void Renderer::ApplyShadowMapFilter(View* view, Texture2D* shadowMap, float blurScale)
    // unsigned Renderer::GetNumViewports() const
    // Viewport* Renderer::GetViewport(unsigned index) const
    // Viewport* Renderer::GetViewportForScene(Scene* scene, unsigned index) const
    // RenderPath* Renderer::GetDefaultRenderPath() const
    // Technique* Renderer::GetDefaultTechnique() const
    // bool Renderer::GetHDRRendering() const
    // bool Renderer::GetSpecularLighting() const
    // bool Renderer::GetDrawShadows() const
    // int Renderer::GetTextureAnisotropy() const
    // TextureFilterMode Renderer::GetTextureFilterMode() const
    // MaterialQuality Renderer::GetTextureQuality() const
    // MaterialQuality Renderer::GetMaterialQuality() const
    // int Renderer::GetShadowMapSize() const
    // ShadowQuality Renderer::GetShadowQuality() const
    // float Renderer::GetShadowSoftness() const
    // Vector2 Renderer::GetVSMShadowParameters() const
    // int Renderer::GetVSMMultiSample() const
    // bool Renderer::GetReuseShadowMaps() const
    // int Renderer::GetMaxShadowMaps() const
    // bool Renderer::GetDynamicInstancing() const
    // int Renderer::GetNumExtraInstancingBufferElements() const
    // int Renderer::GetMinInstances() const
    // int Renderer::GetMaxSortedInstances() const
    // int Renderer::GetMaxOccluderTriangles() const
    // int Renderer::GetOcclusionBufferSize() const
    // float Renderer::GetOccluderSizeThreshold() const
    // bool Renderer::GetThreadedOcclusion() const
    // float Renderer::GetMobileShadowBiasMul() const
    // float Renderer::GetMobileShadowBiasAdd() const
    // float Renderer::GetMobileNormalOffsetMul() const
    // unsigned Renderer::GetNumViews() const
    // unsigned Renderer::GetNumPrimitives() const
    // unsigned Renderer::GetNumBatches() const
    // unsigned Renderer::GetNumGeometries(bool allViews=false) const
    // unsigned Renderer::GetNumLights(bool allViews=false) const
    // unsigned Renderer::GetNumShadowMaps(bool allViews=false) const
    // unsigned Renderer::GetNumOccluders(bool allViews=false) const
    // Zone* Renderer::GetDefaultZone() const
    // Material* Renderer::GetDefaultMaterial() const
    // Texture2D* Renderer::GetDefaultLightRamp() const
    // Texture2D* Renderer::GetDefaultLightSpot() const
    // TextureCube* Renderer::GetFaceSelectCubeMap() const
    // TextureCube* Renderer::GetIndirectionCubeMap() const
    // VertexBuffer* Renderer::GetInstancingBuffer() const
    // const FrameInfo& Renderer::GetFrameInfo() const
    // void Renderer::Update(float timeStep)
    // void Renderer::Render()
    // void Renderer::DrawDebugGeometry(bool depthTest)
    // void Renderer::QueueRenderSurface(RenderSurface* renderTarget)
    // void Renderer::QueueViewport(RenderSurface* renderTarget, Viewport* viewport)
    // Geometry* Renderer::GetLightGeometry(Light* light)
    // Geometry* Renderer::GetQuadGeometry()
    // Texture2D* Renderer::GetShadowMap(Light* light, Camera* camera, unsigned viewWidth, unsigned viewHeight)
    // Texture* Renderer::GetScreenBuffer(int width, int height, unsigned format, int multiSample, bool autoResolve, bool cubemap, bool filtered, bool srgb, unsigned persistentKey=0)
    // RenderSurface* Renderer::GetDepthStencil(int width, int height, int multiSample, bool autoResolve)
    // OcclusionBuffer* Renderer::GetOcclusionBuffer(Camera* camera)
    // Camera* Renderer::GetShadowCamera()
    // void Renderer::StorePreparedView(View* view, Camera* camera)
    // View* Renderer::GetPreparedView(Camera* camera)
    // void Renderer::SetBatchShaders(Batch& batch, Technique* tech, bool allowShadows, const BatchQueue& queue)
    // void Renderer::SetLightVolumeBatchShaders(Batch& batch, Camera* camera, const String& vsName, const String& psName, const String& vsDefines, const String& psDefines)
    // void Renderer::SetCullMode(CullMode mode, Camera* camera)
    // bool Renderer::ResizeInstancingBuffer(unsigned numInstances)
    // void Renderer::OptimizeLightByScissor(Light* light, Camera* camera)
    // void Renderer::OptimizeLightByStencil(Light* light, Camera* camera)
    // const Rect& Renderer::GetLightScissor(Light* light, Camera* camera)
}

// struct ReplicationState | File: ../Scene/ReplicationState.h
void CollectMembers_ReplicationState(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Resource | File: ../Resource/Resource.h
void CollectMembers_Resource(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // bool Resource::Load(Deserializer& source)
    // virtual bool Resource::BeginLoad(Deserializer& source)
    // virtual bool Resource::EndLoad()
    // virtual bool Resource::Save(Serializer& dest) const
    // bool Resource::LoadFile(const String& fileName)
    // virtual bool Resource::SaveFile(const String& fileName) const
    // void Resource::SetName(const String& name)
    // void Resource::SetMemoryUse(unsigned size)
    // void Resource::ResetUseTimer()
    // void Resource::SetAsyncLoadState(AsyncLoadState newState)
    // const String& Resource::GetName() const
    // StringHash Resource::GetNameHash() const
    // unsigned Resource::GetMemoryUse() const
    // unsigned Resource::GetUseTimer()
    // AsyncLoadState Resource::GetAsyncLoadState() const
}

// class ResourceCache | File: ../Resource/ResourceCache.h
void CollectMembers_ResourceCache(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // bool ResourceCache::AddResourceDir(const String& pathName, unsigned priority=PRIORITY_LAST)
    // bool ResourceCache::AddPackageFile(PackageFile* package, unsigned priority=PRIORITY_LAST)
    // bool ResourceCache::AddPackageFile(const String& fileName, unsigned priority=PRIORITY_LAST)
    // bool ResourceCache::AddManualResource(Resource* resource)
    // void ResourceCache::RemoveResourceDir(const String& pathName)
    // void ResourceCache::RemovePackageFile(PackageFile* package, bool releaseResources=true, bool forceRelease=false)
    // void ResourceCache::RemovePackageFile(const String& fileName, bool releaseResources=true, bool forceRelease=false)
    // void ResourceCache::ReleaseResource(StringHash type, const String& name, bool force=false)
    // void ResourceCache::ReleaseResources(StringHash type, bool force=false)
    // void ResourceCache::ReleaseResources(StringHash type, const String& partialName, bool force=false)
    // void ResourceCache::ReleaseResources(const String& partialName, bool force=false)
    // void ResourceCache::ReleaseAllResources(bool force=false)
    // bool ResourceCache::ReloadResource(Resource* resource)
    // void ResourceCache::ReloadResourceWithDependencies(const String& fileName)
    // void ResourceCache::SetMemoryBudget(StringHash type, unsigned long long budget)
    // void ResourceCache::SetAutoReloadResources(bool enable)
    // void ResourceCache::SetReturnFailedResources(bool enable)
    // void ResourceCache::SetSearchPackagesFirst(bool value)
    // void ResourceCache::SetFinishBackgroundResourcesMs(int ms)
    // void ResourceCache::AddResourceRouter(ResourceRouter* router, bool addAsFirst=false)
    // void ResourceCache::RemoveResourceRouter(ResourceRouter* router)
    // SharedPtr<File> ResourceCache::GetFile(const String& name, bool sendEventOnFailure=true)
    // Resource* ResourceCache::GetResource(StringHash type, const String& name, bool sendEventOnFailure=true)
    // SharedPtr<Resource> ResourceCache::GetTempResource(StringHash type, const String& name, bool sendEventOnFailure=true)
    // bool ResourceCache::BackgroundLoadResource(StringHash type, const String& name, bool sendEventOnFailure=true, Resource* caller=nullptr)
    // unsigned ResourceCache::GetNumBackgroundLoadResources() const
    // void ResourceCache::GetResources(PODVector<Resource*>& result, StringHash type) const
    // Resource* ResourceCache::GetExistingResource(StringHash type, const String& name)
    // const HashMap<StringHash, ResourceGroup>& ResourceCache::GetAllResources() const
    // const Vector<String>& ResourceCache::GetResourceDirs() const
    // const Vector<SharedPtr<PackageFile>>& ResourceCache::GetPackageFiles() const
    // template<class T> T* ResourceCache::GetResource(const String& name, bool sendEventOnFailure=true)
    // template<class T> T* ResourceCache::GetExistingResource(const String& name)
    // template<class T> SharedPtr<T> ResourceCache::GetTempResource(const String& name, bool sendEventOnFailure=true)
    // template<class T> void ResourceCache::ReleaseResource(const String& name, bool force=false)
    // template<class T> bool ResourceCache::BackgroundLoadResource(const String& name, bool sendEventOnFailure=true, Resource* caller=nullptr)
    // template<class T> void ResourceCache::GetResources(PODVector<T*>& result) const
    // bool ResourceCache::Exists(const String& name) const
    // unsigned long long ResourceCache::GetMemoryBudget(StringHash type) const
    // unsigned long long ResourceCache::GetMemoryUse(StringHash type) const
    // unsigned long long ResourceCache::GetTotalMemoryUse() const
    // String ResourceCache::GetResourceFileName(const String& name) const
    // bool ResourceCache::GetAutoReloadResources() const
    // bool ResourceCache::GetReturnFailedResources() const
    // bool ResourceCache::GetSearchPackagesFirst() const
    // int ResourceCache::GetFinishBackgroundResourcesMs() const
    // ResourceRouter* ResourceCache::GetResourceRouter(unsigned index) const
    // String ResourceCache::GetPreferredResourceDir(const String& path) const
    // String ResourceCache::SanitateResourceName(const String& name) const
    // String ResourceCache::SanitateResourceDirName(const String& name) const
    // void ResourceCache::StoreResourceDependency(Resource* resource, const String& dependency)
    // void ResourceCache::ResetDependencies(Resource* resource)
    // String ResourceCache::PrintMemoryUsage() const
}

// struct ResourceGroup | File: ../Resource/ResourceCache.h
void CollectMembers_ResourceGroup(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct ResourceRef | File: ../Core/Variant.h
void CollectMembers_ResourceRef(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool ResourceRef::operator==(const ResourceRef& rhs) const
    // bool ResourceRef::operator!=(const ResourceRef& rhs) const
}

// struct ResourceRefList | File: ../Core/Variant.h
void CollectMembers_ResourceRefList(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool ResourceRefList::operator==(const ResourceRefList& rhs) const
    // bool ResourceRefList::operator!=(const ResourceRefList& rhs) const
}

// class ResourceRouter | File: ../Resource/ResourceCache.h
void CollectMembers_ResourceRouter(Vector<RegisterObjectMethodArgs>& methods)
{
    // virtual void ResourceRouter::Route(String& name, ResourceRequest requestType)=0
}

// class ResourceWithMetadata | File: ../Resource/Resource.h
void CollectMembers_ResourceWithMetadata(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // void ResourceWithMetadata::AddMetadata(const String& name, const Variant& value)
    // void ResourceWithMetadata::RemoveMetadata(const String& name)
    // void ResourceWithMetadata::RemoveAllMetadata()
    // const Variant& ResourceWithMetadata::GetMetadata(const String& name) const
    // bool ResourceWithMetadata::HasMetadata() const
}

// class RibbonTrail | File: ../Graphics/RibbonTrail.h
void CollectMembers_RibbonTrail(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -virtual UpdateGeometryType Drawable::GetUpdateGeometryType()
    // -virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // -virtual void Drawable::Update(const FrameInfo& frame)
    // -virtual void Drawable::UpdateBatches(const FrameInfo& frame)
    // -virtual void Drawable::UpdateGeometry(const FrameInfo& frame)
    // -void Drawable::OnSetEnabled() override

    // void RibbonTrail::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // void RibbonTrail::OnSetEnabled() override
    // void RibbonTrail::Update(const FrameInfo& frame) override
    // void RibbonTrail::UpdateBatches(const FrameInfo& frame) override
    // void RibbonTrail::UpdateGeometry(const FrameInfo& frame) override
    // UpdateGeometryType RibbonTrail::GetUpdateGeometryType() override
    // void RibbonTrail::SetMaterial(Material* material)
    // void RibbonTrail::SetMaterialAttr(const ResourceRef& value)
    // void RibbonTrail::SetVertexDistance(float length)
    // void RibbonTrail::SetWidth(float width)
    // void RibbonTrail::SetStartColor(const Color& color)
    // void RibbonTrail::SetEndColor(const Color& color)
    // void RibbonTrail::SetStartScale(float startScale)
    // void RibbonTrail::SetEndScale(float endScale)
    // void RibbonTrail::SetTrailType(TrailType type)
    // void RibbonTrail::SetBaseVelocity(const Vector3& baseVelocity)
    // void RibbonTrail::SetSorted(bool enable)
    // void RibbonTrail::SetLifetime(float time)
    // void RibbonTrail::SetEmitting(bool emitting)
    // void RibbonTrail::SetUpdateInvisible(bool enable)
    // void RibbonTrail::SetTailColumn(unsigned tailColumn)
    // void RibbonTrail::SetAnimationLodBias(float bias)
    // void RibbonTrail::Commit()
    // Material* RibbonTrail::GetMaterial() const
    // ResourceRef RibbonTrail::GetMaterialAttr() const
    // float RibbonTrail::GetVertexDistance() const
    // float RibbonTrail::GetWidth() const
    // const Color& RibbonTrail::GetStartColor() const
    // const Color& RibbonTrail::GetEndColor() const
    // float RibbonTrail::GetStartScale() const
    // float RibbonTrail::GetEndScale() const
    // bool RibbonTrail::IsSorted() const
    // float RibbonTrail::GetLifetime() const
    // float RibbonTrail::GetAnimationLodBias() const
    // TrailType RibbonTrail::GetTrailType() const
    // const Vector3& RibbonTrail::GetBaseVelocity() const
    // unsigned RibbonTrail::GetTailColumn() const
    // bool RibbonTrail::IsEmitting() const
    // bool RibbonTrail::GetUpdateInvisible() const
}

// class Scene | File: ../Scene/Scene.h
void CollectMembers_Scene(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Node(methods);

    // -Component* Node::GetComponent(StringHash type, bool recursive=false) const
    // -bool Node::Load(Deserializer& source) override
    // -bool Node::Load(Deserializer& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)
    // -bool Node::LoadJSON(const JSONValue& source) override
    // -bool Node::LoadJSON(const JSONValue& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)
    // -bool Node::LoadXML(const XMLElement& source) override
    // -bool Node::LoadXML(const XMLElement& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)
    // -bool Node::Save(Serializer& dest) const override
    // -bool Node::SaveJSON(JSONValue& dest) const override
    // -bool Node::SaveJSON(Serializer& dest, const String& indentation="\t") const
    // -bool Node::SaveXML(Serializer& dest, const String& indentation="\t") const
    // -bool Node::SaveXML(XMLElement& dest) const override
    // -static void Node::RegisterObject(Context* context)
    // -template<class T> T* Node::GetComponent(bool recursive=false) const
    // -virtual void Node::AddReplicationState(NodeReplicationState* state)
    // -void Node::CleanupConnection(Connection* connection)
    // -void Node::MarkNetworkUpdate() override
    // -void Node::MarkReplicationDirty()
    // -void Node::PrepareNetworkUpdate()

    // bool Scene::Load(Deserializer& source) override
    // bool Scene::Save(Serializer& dest) const override
    // bool Scene::LoadXML(const XMLElement& source) override
    // bool Scene::LoadJSON(const JSONValue& source) override
    // void Scene::MarkNetworkUpdate() override
    // void Scene::AddReplicationState(NodeReplicationState* state) override
    // bool Scene::LoadXML(Deserializer& source)
    // bool Scene::LoadJSON(Deserializer& source)
    // bool Scene::SaveXML(Serializer& dest, const String& indentation="\t") const
    // bool Scene::SaveJSON(Serializer& dest, const String& indentation="\t") const
    // bool Scene::LoadAsync(File* file, LoadMode mode=LOAD_SCENE_AND_RESOURCES)
    // bool Scene::LoadAsyncXML(File* file, LoadMode mode=LOAD_SCENE_AND_RESOURCES)
    // bool Scene::LoadAsyncJSON(File* file, LoadMode mode=LOAD_SCENE_AND_RESOURCES)
    // void Scene::StopAsyncLoading()
    // Node* Scene::Instantiate(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode=REPLICATED)
    // Node* Scene::InstantiateXML(const XMLElement& source, const Vector3& position, const Quaternion& rotation, CreateMode mode=REPLICATED)
    // Node* Scene::InstantiateXML(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode=REPLICATED)
    // Node* Scene::InstantiateJSON(const JSONValue& source, const Vector3& position, const Quaternion& rotation, CreateMode mode=REPLICATED)
    // Node* Scene::InstantiateJSON(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode=REPLICATED)
    // void Scene::Clear(bool clearReplicated=true, bool clearLocal=true)
    // void Scene::SetUpdateEnabled(bool enable)
    // void Scene::SetTimeScale(float scale)
    // void Scene::SetElapsedTime(float time)
    // void Scene::SetSmoothingConstant(float constant)
    // void Scene::SetSnapThreshold(float threshold)
    // void Scene::SetAsyncLoadingMs(int ms)
    // void Scene::AddRequiredPackageFile(PackageFile* package)
    // void Scene::ClearRequiredPackageFiles()
    // void Scene::RegisterVar(const String& name)
    // void Scene::UnregisterVar(const String& name)
    // void Scene::UnregisterAllVars()
    // Node* Scene::GetNode(unsigned id) const
    // Component* Scene::GetComponent(unsigned id) const
    // bool Scene::GetNodesWithTag(PODVector<Node*>& dest, const String& tag) const
    // bool Scene::IsUpdateEnabled() const
    // bool Scene::IsAsyncLoading() const
    // float Scene::GetAsyncProgress() const
    // LoadMode Scene::GetAsyncLoadMode() const
    // const String& Scene::GetFileName() const
    // unsigned Scene::GetChecksum() const
    // float Scene::GetTimeScale() const
    // float Scene::GetElapsedTime() const
    // float Scene::GetSmoothingConstant() const
    // float Scene::GetSnapThreshold() const
    // int Scene::GetAsyncLoadingMs() const
    // const Vector<SharedPtr<PackageFile>>& Scene::GetRequiredPackageFiles() const
    // const String& Scene::GetVarName(StringHash hash) const
    // void Scene::Update(float timeStep)
    // void Scene::BeginThreadedUpdate()
    // void Scene::EndThreadedUpdate()
    // void Scene::DelayedMarkedDirty(Component* component)
    // bool Scene::IsThreadedUpdate() const
    // unsigned Scene::GetFreeNodeID(CreateMode mode)
    // unsigned Scene::GetFreeComponentID(CreateMode mode)
    // void Scene::NodeTagAdded(Node* node, const String& tag)
    // void Scene::NodeTagRemoved(Node* node, const String& tag)
    // void Scene::NodeAdded(Node* node)
    // void Scene::NodeRemoved(Node* node)
    // void Scene::ComponentAdded(Component* component)
    // void Scene::ComponentRemoved(Component* component)
    // void Scene::SetVarNamesAttr(const String& value)
    // String Scene::GetVarNamesAttr() const
    // void Scene::PrepareNetworkUpdate()
    // void Scene::CleanupConnection(Connection* connection)
    // void Scene::MarkNetworkUpdate(Node* node)
    // void Scene::MarkNetworkUpdate(Component* component)
    // void Scene::MarkReplicationDirty(Node* node)
    // Component* Node::GetComponent(StringHash type, bool recursive=false) const
    // template<class T> T* Node::GetComponent(bool recursive=false) const
    // bool Node::SaveXML(XMLElement& dest) const override
    // bool Node::SaveXML(Serializer& dest, const String& indentation="\t") const
    // bool Node::SaveJSON(JSONValue& dest) const override
    // bool Node::SaveJSON(Serializer& dest, const String& indentation="\t") const
}

// struct ScenePassInfo | File: ../Graphics/View.h
void CollectMembers_ScenePassInfo(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct SceneReplicationState | File: ../Scene/ReplicationState.h
void CollectMembers_SceneReplicationState(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ReplicationState(methods);

    // void SceneReplicationState::Clear()
}

// class SceneResolver | File: ../Scene/SceneResolver.h
void CollectMembers_SceneResolver(Vector<RegisterObjectMethodArgs>& methods)
{
    // void SceneResolver::Reset()
    // void SceneResolver::AddNode(unsigned oldID, Node* node)
    // void SceneResolver::AddComponent(unsigned oldID, Component* component)
    // void SceneResolver::Resolve()
}

// struct ScratchBuffer | File: ../Graphics/Graphics.h
void CollectMembers_ScratchBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct ScreenModeParams | File: ../Graphics/Graphics.h
void CollectMembers_ScreenModeParams(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool ScreenModeParams::EqualsExceptVSync(const ScreenModeParams& rhs) const
    // bool ScreenModeParams::operator==(const ScreenModeParams& rhs) const
    // bool ScreenModeParams::operator!=(const ScreenModeParams& rhs) const
}

// class ScrollBar | File: ../UI/ScrollBar.h
void CollectMembers_ScrollBar(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)
    // -virtual void UIElement::OnSetEditable()
    // -void UIElement::ApplyAttributes() override

    // void ScrollBar::ApplyAttributes() override
    // void ScrollBar::OnResize(const IntVector2& newSize, const IntVector2& delta) override
    // void ScrollBar::OnSetEditable() override
    // void ScrollBar::SetOrientation(Orientation orientation)
    // void ScrollBar::SetRange(float range)
    // void ScrollBar::SetValue(float value)
    // void ScrollBar::ChangeValue(float delta)
    // void ScrollBar::SetScrollStep(float step)
    // void ScrollBar::SetStepFactor(float factor)
    // void ScrollBar::StepBack()
    // void ScrollBar::StepForward()
    // Orientation ScrollBar::GetOrientation() const
    // float ScrollBar::GetRange() const
    // float ScrollBar::GetValue() const
    // float ScrollBar::GetScrollStep() const
    // float ScrollBar::GetStepFactor() const
    // float ScrollBar::GetEffectiveScrollStep() const
    // Button* ScrollBar::GetBackButton() const
    // Button* ScrollBar::GetForwardButton() const
    // Slider* ScrollBar::GetSlider() const
}

// class ScrollView | File: ../UI/ScrollView.h
void CollectMembers_ScrollView(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_UIElement(methods);

    // -static void UIElement::RegisterObject(Context* context)
    // -virtual bool UIElement::IsWheelHandler() const
    // -virtual void UIElement::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)
    // -virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)
    // -virtual void UIElement::OnWheel(int delta, MouseButtonFlags buttons, QualifierFlags qualifiers)
    // -virtual void UIElement::Update(float timeStep)
    // -void UIElement::ApplyAttributes() override

    // void ScrollView::Update(float timeStep) override
    // void ScrollView::ApplyAttributes() override
    // void ScrollView::OnWheel(int delta, MouseButtonFlags buttons, QualifierFlags qualifiers) override
    // void ScrollView::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override
    // void ScrollView::OnResize(const IntVector2& newSize, const IntVector2& delta) override
    // bool ScrollView::IsWheelHandler() const override
    // void ScrollView::SetContentElement(UIElement* element)
    // void ScrollView::SetViewPosition(const IntVector2& position)
    // void ScrollView::SetViewPosition(int x, int y)
    // void ScrollView::SetScrollBarsVisible(bool horizontal, bool vertical)
    // void ScrollView::SetHorizontalScrollBarVisible(bool visible)
    // void ScrollView::SetVerticalScrollBarVisible(bool visible)
    // void ScrollView::SetScrollBarsAutoVisible(bool enable)
    // void ScrollView::SetScrollStep(float step)
    // void ScrollView::SetPageStep(float step)
    // void ScrollView::SetScrollDeceleration(float deceleration)
    // void ScrollView::SetScrollSnapEpsilon(float snap)
    // void ScrollView::SetAutoDisableChildren(bool disable)
    // void ScrollView::SetAutoDisableThreshold(float amount)
    // const IntVector2& ScrollView::GetViewPosition() const
    // UIElement* ScrollView::GetContentElement() const
    // ScrollBar* ScrollView::GetHorizontalScrollBar() const
    // ScrollBar* ScrollView::GetVerticalScrollBar() const
    // BorderImage* ScrollView::GetScrollPanel() const
    // bool ScrollView::GetScrollBarsAutoVisible() const
    // bool ScrollView::GetHorizontalScrollBarVisible() const
    // bool ScrollView::GetVerticalScrollBarVisible() const
    // float ScrollView::GetScrollStep() const
    // float ScrollView::GetPageStep() const
    // float ScrollView::GetScrollDeceleration() const
    // float ScrollView::GetScrollSnapEpsilon() const
    // bool ScrollView::GetAutoDisableChildren() const
    // float ScrollView::GetAutoDisableThreshold() const
    // void ScrollView::SetViewPositionAttr(const IntVector2& value)
}

// class Serializable | File: ../Scene/Serializable.h
void CollectMembers_Serializable(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // virtual void Serializable::OnSetAttribute(const AttributeInfo& attr, const Variant& src)
    // virtual void Serializable::OnGetAttribute(const AttributeInfo& attr, Variant& dest) const
    // virtual const Vector<AttributeInfo>* Serializable::GetAttributes() const
    // virtual const Vector<AttributeInfo>* Serializable::GetNetworkAttributes() const
    // virtual bool Serializable::Load(Deserializer& source)
    // virtual bool Serializable::Save(Serializer& dest) const
    // virtual bool Serializable::LoadXML(const XMLElement& source)
    // virtual bool Serializable::SaveXML(XMLElement& dest) const
    // virtual bool Serializable::LoadJSON(const JSONValue& source)
    // virtual bool Serializable::SaveJSON(JSONValue& dest) const
    // virtual void Serializable::ApplyAttributes()
    // virtual bool Serializable::SaveDefaultAttributes() const
    // virtual void Serializable::MarkNetworkUpdate()
    // bool Serializable::SetAttribute(unsigned index, const Variant& value)
    // bool Serializable::SetAttribute(const String& name, const Variant& value)
    // void Serializable::SetInstanceDefault(bool enable)
    // void Serializable::ResetToDefault()
    // void Serializable::RemoveInstanceDefault()
    // void Serializable::SetTemporary(bool enable)
    // void Serializable::SetInterceptNetworkUpdate(const String& attributeName, bool enable)
    // void Serializable::AllocateNetworkState()
    // void Serializable::WriteInitialDeltaUpdate(Serializer& dest, unsigned char timeStamp)
    // void Serializable::WriteDeltaUpdate(Serializer& dest, const DirtyBits& attributeBits, unsigned char timeStamp)
    // void Serializable::WriteLatestDataUpdate(Serializer& dest, unsigned char timeStamp)
    // bool Serializable::ReadDeltaUpdate(Deserializer& source)
    // bool Serializable::ReadLatestDataUpdate(Deserializer& source)
    // Variant Serializable::GetAttribute(unsigned index) const
    // Variant Serializable::GetAttribute(const String& name) const
    // Variant Serializable::GetAttributeDefault(unsigned index) const
    // Variant Serializable::GetAttributeDefault(const String& name) const
    // unsigned Serializable::GetNumAttributes() const
    // unsigned Serializable::GetNumNetworkAttributes() const
    // bool Serializable::IsTemporary() const
    // bool Serializable::GetInterceptNetworkUpdate(const String& attributeName) const
    // NetworkState* Serializable::GetNetworkState() const
}

// class Serializer | File: ../IO/Serializer.h
void CollectMembers_Serializer(Vector<RegisterObjectMethodArgs>& methods)
{
    // virtual unsigned Serializer::Write(const void* data, unsigned size)=0
    // bool Serializer::WriteInt64(long long value)
    // bool Serializer::WriteInt(int value)
    // bool Serializer::WriteShort(short value)
    // bool Serializer::WriteByte(signed char value)
    // bool Serializer::WriteUInt64(unsigned long long value)
    // bool Serializer::WriteUInt(unsigned value)
    // bool Serializer::WriteUShort(unsigned short value)
    // bool Serializer::WriteUByte(unsigned char value)
    // bool Serializer::WriteBool(bool value)
    // bool Serializer::WriteFloat(float value)
    // bool Serializer::WriteDouble(double value)
    // bool Serializer::WriteIntRect(const IntRect& value)
    // bool Serializer::WriteIntVector2(const IntVector2& value)
    // bool Serializer::WriteIntVector3(const IntVector3& value)
    // bool Serializer::WriteRect(const Rect& value)
    // bool Serializer::WriteVector2(const Vector2& value)
    // bool Serializer::WriteVector3(const Vector3& value)
    // bool Serializer::WritePackedVector3(const Vector3& value, float maxAbsCoord)
    // bool Serializer::WriteVector4(const Vector4& value)
    // bool Serializer::WriteQuaternion(const Quaternion& value)
    // bool Serializer::WritePackedQuaternion(const Quaternion& value)
    // bool Serializer::WriteMatrix3(const Matrix3& value)
    // bool Serializer::WriteMatrix3x4(const Matrix3x4& value)
    // bool Serializer::WriteMatrix4(const Matrix4& value)
    // bool Serializer::WriteColor(const Color& value)
    // bool Serializer::WriteBoundingBox(const BoundingBox& value)
    // bool Serializer::WriteString(const String& value)
    // bool Serializer::WriteFileID(const String& value)
    // bool Serializer::WriteStringHash(const StringHash& value)
    // bool Serializer::WriteBuffer(const PODVector<unsigned char>& value)
    // bool Serializer::WriteResourceRef(const ResourceRef& value)
    // bool Serializer::WriteResourceRefList(const ResourceRefList& value)
    // bool Serializer::WriteVariant(const Variant& value)
    // bool Serializer::WriteVariantData(const Variant& value)
    // bool Serializer::WriteVariantVector(const VariantVector& value)
    // bool Serializer::WriteStringVector(const StringVector& value)
    // bool Serializer::WriteVariantMap(const VariantMap& value)
    // bool Serializer::WriteVLE(unsigned value)
    // bool Serializer::WriteNetID(unsigned value)
    // bool Serializer::WriteLine(const String& value)
}

// class Shader | File: ../Graphics/Shader.h
void CollectMembers_Shader(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()

    // bool Shader::BeginLoad(Deserializer& source) override
    // bool Shader::EndLoad() override
    // ShaderVariation* Shader::GetVariation(ShaderType type, const String& defines)
    // ShaderVariation* Shader::GetVariation(ShaderType type, const char* defines)
    // const String& Shader::GetSourceCode(ShaderType type) const
    // unsigned Shader::GetTimeStamp() const
}

// struct ShaderParameter | File: ../Graphics/ShaderVariation.h
void CollectMembers_ShaderParameter(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ShaderParameterAnimationInfo | File: ../Graphics/Material.h
void CollectMembers_ShaderParameterAnimationInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ValueAnimationInfo(methods);

    // const String& ShaderParameterAnimationInfo::GetName() const
}

// class ShaderPrecache | File: ../Graphics/ShaderPrecache.h
void CollectMembers_ShaderPrecache(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void ShaderPrecache::StoreShaders(ShaderVariation* vs, ShaderVariation* ps)
}

// class ShaderVariation | File: ../Graphics/ShaderVariation.h
void CollectMembers_ShaderVariation(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
    CollectMembers_GPUObject(methods);

    // -virtual void GPUObject::OnDeviceLost()
    // -virtual void GPUObject::Release()

    // void ShaderVariation::OnDeviceLost() override
    // void ShaderVariation::Release() override
    // bool ShaderVariation::Create()
    // void ShaderVariation::SetName(const String& name)
    // void ShaderVariation::SetDefines(const String& defines)
    // Shader* ShaderVariation::GetOwner() const
    // ShaderType ShaderVariation::GetShaderType() const
    // const String& ShaderVariation::GetName() const
    // String ShaderVariation::GetFullName() const
    // bool ShaderVariation::HasParameter(StringHash param) const
    // bool ShaderVariation::HasTextureUnit(TextureUnit unit) const
    // const HashMap<StringHash, ShaderParameter>& ShaderVariation::GetParameters() const
    // unsigned long long ShaderVariation::GetElementHash() const
    // const PODVector<unsigned char>& ShaderVariation::GetByteCode() const
    // const String& ShaderVariation::GetDefines() const
    // const String& ShaderVariation::GetCompilerOutput() const
    // const unsigned* ShaderVariation::GetConstantBufferSizes() const
    // const String& ShaderVariation::GetDefinesClipPlane()
}

// struct ShadowBatchQueue | File: ../Graphics/Batch.h
void CollectMembers_ShadowBatchQueue(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Skeleton | File: ../Graphics/Skeleton.h
void CollectMembers_Skeleton(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool Skeleton::Load(Deserializer& source)
    // bool Skeleton::Save(Serializer& dest) const
    // void Skeleton::Define(const Skeleton& src)
    // void Skeleton::SetRootBoneIndex(unsigned index)
    // void Skeleton::ClearBones()
    // void Skeleton::Reset()
    // const Vector<Bone>& Skeleton::GetBones() const
    // Vector<Bone>& Skeleton::GetModifiableBones()
    // unsigned Skeleton::GetNumBones() const
    // Bone* Skeleton::GetRootBone()
    // unsigned Skeleton::GetBoneIndex(const String& boneName) const
    // unsigned Skeleton::GetBoneIndex(const StringHash& boneNameHash) const
    // unsigned Skeleton::GetBoneIndex(const Bone* bone) const
    // Bone* Skeleton::GetBoneParent(const Bone* bone)
    // Bone* Skeleton::GetBone(unsigned index)
    // Bone* Skeleton::GetBone(const String& name)
    // Bone* Skeleton::GetBone(const char* name)
    // Bone* Skeleton::GetBone(const StringHash& boneNameHash)
    // void Skeleton::ResetSilent()
}

// class Skybox | File: ../Graphics/Skybox.h
void CollectMembers_Skybox(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_StaticModel(methods);

    // -static void StaticModel::RegisterObject(Context* context)
    // -void StaticModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // -void StaticModel::UpdateBatches(const FrameInfo& frame) override

    // void Skybox::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // void Skybox::UpdateBatches(const FrameInfo& frame) override
}

// class Slider | File: ../UI/Slider.h
void CollectMembers_Slider(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -virtual void UIElement::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnClickEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor, UIElement* beginElement)
    // -virtual void UIElement::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnDragEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor* cursor)
    // -virtual void UIElement::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)
    // -virtual void UIElement::Update(float timeStep)

    // void Slider::Update(float timeStep) override
    // void Slider::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void Slider::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void Slider::OnClickEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor, UIElement* beginElement) override
    // void Slider::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void Slider::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void Slider::OnDragEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor* cursor) override
    // void Slider::OnResize(const IntVector2& newSize, const IntVector2& delta) override
    // void Slider::SetOrientation(Orientation orientation)
    // void Slider::SetRange(float range)
    // void Slider::SetValue(float value)
    // void Slider::ChangeValue(float delta)
    // void Slider::SetRepeatRate(float rate)
    // Orientation Slider::GetOrientation() const
    // float Slider::GetRange() const
    // float Slider::GetValue() const
    // BorderImage* Slider::GetKnob() const
    // float Slider::GetRepeatRate() const
}

// class SmoothedTransform | File: ../Scene/SmoothedTransform.h
void CollectMembers_SmoothedTransform(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)

    // void SmoothedTransform::Update(float constant, float squaredSnapThreshold)
    // void SmoothedTransform::SetTargetPosition(const Vector3& position)
    // void SmoothedTransform::SetTargetRotation(const Quaternion& rotation)
    // void SmoothedTransform::SetTargetWorldPosition(const Vector3& position)
    // void SmoothedTransform::SetTargetWorldRotation(const Quaternion& rotation)
    // const Vector3& SmoothedTransform::GetTargetPosition() const
    // const Quaternion& SmoothedTransform::GetTargetRotation() const
    // Vector3 SmoothedTransform::GetTargetWorldPosition() const
    // Quaternion SmoothedTransform::GetTargetWorldRotation() const
    // bool SmoothedTransform::IsInProgress() const
}

// class Sound | File: ../Audio/Sound.h
void CollectMembers_Sound(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ResourceWithMetadata(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)

    // bool Sound::BeginLoad(Deserializer& source) override
    // bool Sound::LoadRaw(Deserializer& source)
    // bool Sound::LoadWav(Deserializer& source)
    // bool Sound::LoadOggVorbis(Deserializer& source)
    // void Sound::SetSize(unsigned dataSize)
    // void Sound::SetData(const void* data, unsigned dataSize)
    // void Sound::SetFormat(unsigned frequency, bool sixteenBit, bool stereo)
    // void Sound::SetLooped(bool enable)
    // void Sound::SetLoop(unsigned repeatOffset, unsigned endOffset)
    // SharedPtr<SoundStream> Sound::GetDecoderStream() const
    // SharedArrayPtr<signed char> Sound::GetData() const
    // signed char* Sound::GetStart() const
    // signed char* Sound::GetRepeat() const
    // signed char* Sound::GetEnd() const
    // float Sound::GetLength() const
    // unsigned Sound::GetDataSize() const
    // unsigned Sound::GetSampleSize() const
    // float Sound::GetFrequency() const
    // unsigned Sound::GetIntFrequency() const
    // bool Sound::IsLooped() const
    // bool Sound::IsSixteenBit() const
    // bool Sound::IsStereo() const
    // bool Sound::IsCompressed() const
    // void Sound::FixInterpolation()
}

// class SoundListener | File: ../Audio/SoundListener.h
void CollectMembers_SoundListener(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
}

// class SoundSource | File: ../Audio/SoundSource.h
void CollectMembers_SoundSource(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)

    // void SoundSource::Seek(float seekTime)
    // void SoundSource::Play(Sound* sound)
    // void SoundSource::Play(Sound* sound, float frequency)
    // void SoundSource::Play(Sound* sound, float frequency, float gain)
    // void SoundSource::Play(Sound* sound, float frequency, float gain, float panning)
    // void SoundSource::Play(SoundStream* stream)
    // void SoundSource::Stop()
    // void SoundSource::SetSoundType(const String& type)
    // void SoundSource::SetFrequency(float frequency)
    // void SoundSource::SetGain(float gain)
    // void SoundSource::SetAttenuation(float attenuation)
    // void SoundSource::SetPanning(float panning)
    // void SoundSource::SetAutoRemoveMode(AutoRemoveMode mode)
    // void SoundSource::SetPlayPosition(signed char* pos)
    // Sound* SoundSource::GetSound() const
    // volatile signed char* SoundSource::GetPlayPosition() const
    // String SoundSource::GetSoundType() const
    // float SoundSource::GetTimePosition() const
    // float SoundSource::GetFrequency() const
    // float SoundSource::GetGain() const
    // float SoundSource::GetAttenuation() const
    // float SoundSource::GetPanning() const
    // AutoRemoveMode SoundSource::GetAutoRemoveMode() const
    // bool SoundSource::IsPlaying() const
    // virtual void SoundSource::Update(float timeStep)
    // void SoundSource::Mix(int* dest, unsigned samples, int mixRate, bool stereo, bool interpolation)
    // void SoundSource::UpdateMasterGain()
    // void SoundSource::SetSoundAttr(const ResourceRef& value)
    // void SoundSource::SetPositionAttr(int value)
    // ResourceRef SoundSource::GetSoundAttr() const
    // void SoundSource::SetPlayingAttr(bool value)
    // int SoundSource::GetPositionAttr() const
}

// class SoundSource3D | File: ../Audio/SoundSource3D.h
void CollectMembers_SoundSource3D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_SoundSource(methods);

    // -static void SoundSource::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void SoundSource::Update(float timeStep)

    // void SoundSource3D::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void SoundSource3D::Update(float timeStep) override
    // void SoundSource3D::SetDistanceAttenuation(float nearDistance, float farDistance, float rolloffFactor)
    // void SoundSource3D::SetAngleAttenuation(float innerAngle, float outerAngle)
    // void SoundSource3D::SetNearDistance(float distance)
    // void SoundSource3D::SetFarDistance(float distance)
    // void SoundSource3D::SetInnerAngle(float angle)
    // void SoundSource3D::SetOuterAngle(float angle)
    // void SoundSource3D::SetRolloffFactor(float factor)
    // void SoundSource3D::CalculateAttenuation()
    // float SoundSource3D::GetNearDistance() const
    // float SoundSource3D::GetFarDistance() const
    // float SoundSource3D::GetInnerAngle() const
    // float SoundSource3D::GetOuterAngle() const
    // float SoundSource3D::RollAngleoffFactor() const
}

// class SoundStream | File: ../Audio/SoundStream.h
void CollectMembers_SoundStream(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // virtual bool SoundStream::Seek(unsigned sample_number)
    // virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0
    // void SoundStream::SetFormat(unsigned frequency, bool sixteenBit, bool stereo)
    // void SoundStream::SetStopAtEnd(bool enable)
    // unsigned SoundStream::GetSampleSize() const
    // float SoundStream::GetFrequency() const
    // unsigned SoundStream::GetIntFrequency() const
    // bool SoundStream::GetStopAtEnd() const
    // bool SoundStream::IsSixteenBit() const
    // bool SoundStream::IsStereo() const
}

// struct SourceBatch | File: ../Graphics/Drawable.h
void CollectMembers_SourceBatch(Vector<RegisterObjectMethodArgs>& methods)
{
    // SourceBatch& SourceBatch::operator=(const SourceBatch& rhs)
}

// class Sphere | File: ../Math/Sphere.h
void CollectMembers_Sphere(Vector<RegisterObjectMethodArgs>& methods)
{
    // Sphere& Sphere::operator=(const Sphere& rhs) noexcept=default
    // bool Sphere::operator==(const Sphere& rhs) const
    // bool Sphere::operator!=(const Sphere& rhs) const
    // void Sphere::Define(const Sphere& sphere)
    // void Sphere::Define(const Vector3& center, float radius)
    // void Sphere::Define(const Vector3* vertices, unsigned count)
    // void Sphere::Define(const BoundingBox& box)
    // void Sphere::Define(const Frustum& frustum)
    // void Sphere::Define(const Polyhedron& poly)
    // void Sphere::Merge(const Vector3& point)
    // void Sphere::Merge(const Vector3* vertices, unsigned count)
    // void Sphere::Merge(const BoundingBox& box)
    // void Sphere::Merge(const Frustum& frustum)
    // void Sphere::Merge(const Polyhedron& poly)
    // void Sphere::Merge(const Sphere& sphere)
    // void Sphere::Clear()
    // bool Sphere::Defined() const
    // Intersection Sphere::IsInside(const Vector3& point) const
    // Intersection Sphere::IsInside(const Sphere& sphere) const
    // Intersection Sphere::IsInsideFast(const Sphere& sphere) const
    // Intersection Sphere::IsInside(const BoundingBox& box) const
    // Intersection Sphere::IsInsideFast(const BoundingBox& box) const
    // float Sphere::Distance(const Vector3& point) const
    // Vector3 Sphere::GetLocalPoint(float theta, float phi) const
    // Vector3 Sphere::GetPoint(float theta, float phi) const
}

// class SphereOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_SphereOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // Intersection SphereOctreeQuery::TestOctant(const BoundingBox& box, bool inside) override
    // void SphereOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
}

// class Spline | File: ../Core/Spline.h
void CollectMembers_Spline(Vector<RegisterObjectMethodArgs>& methods)
{
    // Spline& Spline::operator=(const Spline& rhs)=default
    // bool Spline::operator==(const Spline& rhs) const
    // bool Spline::operator!=(const Spline& rhs) const
    // InterpolationMode Spline::GetInterpolationMode() const
    // const VariantVector& Spline::GetKnots() const
    // Variant Spline::GetKnot(unsigned index) const
    // Variant Spline::GetPoint(float f) const
    // void Spline::SetInterpolationMode(InterpolationMode interpolationMode)
    // void Spline::SetKnots(const Vector<Variant>& knots)
    // void Spline::SetKnot(const Variant& knot, unsigned index)
    // void Spline::AddKnot(const Variant& knot)
    // void Spline::AddKnot(const Variant& knot, unsigned index)
    // void Spline::RemoveKnot()
    // void Spline::RemoveKnot(unsigned index)
    // void Spline::Clear()
}

// class SplinePath | File: ../Scene/SplinePath.h
void CollectMembers_SplinePath(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Serializable::ApplyAttributes()

    // void SplinePath::ApplyAttributes() override
    // void SplinePath::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void SplinePath::AddControlPoint(Node* point, unsigned index=M_MAX_UNSIGNED)
    // void SplinePath::RemoveControlPoint(Node* point)
    // void SplinePath::ClearControlPoints()
    // void SplinePath::SetInterpolationMode(InterpolationMode interpolationMode)
    // void SplinePath::SetSpeed(float speed)
    // void SplinePath::SetPosition(float factor)
    // void SplinePath::SetControlledNode(Node* controlled)
    // InterpolationMode SplinePath::GetInterpolationMode() const
    // float SplinePath::GetSpeed() const
    // float SplinePath::GetLength() const
    // Vector3 SplinePath::GetPosition() const
    // Node* SplinePath::GetControlledNode() const
    // Vector3 SplinePath::GetPoint(float factor) const
    // void SplinePath::Move(float timeStep)
    // void SplinePath::Reset()
    // bool SplinePath::IsFinished() const
    // void SplinePath::SetControlPointIdsAttr(const VariantVector& value)
    // const VariantVector& SplinePath::GetControlPointIdsAttr() const
    // void SplinePath::SetControlledIdAttr(unsigned value)
    // unsigned SplinePath::GetControlledIdAttr() const
}

// class Sprite | File: ../UI/Sprite.h
void CollectMembers_Sprite(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_UIElement(methods);

    // -const IntVector2& UIElement::GetPosition() const
    // -static void UIElement::RegisterObject(Context* context)
    // -virtual IntVector2 UIElement::ElementToScreen(const IntVector2& position)
    // -virtual IntVector2 UIElement::ScreenToElement(const IntVector2& screenPosition)
    // -virtual bool UIElement::IsWithinScissor(const IntRect& currentScissor)
    // -virtual const IntVector2& UIElement::GetScreenPosition() const
    // -virtual void UIElement::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)
    // -virtual void UIElement::OnPositionSet(const IntVector2& newPosition)
    // -void UIElement::SetPosition(const IntVector2& position)
    // -void UIElement::SetPosition(int x, int y)

    // bool Sprite::IsWithinScissor(const IntRect& currentScissor) override
    // const IntVector2& Sprite::GetScreenPosition() const override
    // void Sprite::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // void Sprite::OnPositionSet(const IntVector2& newPosition) override
    // IntVector2 Sprite::ScreenToElement(const IntVector2& screenPosition) override
    // IntVector2 Sprite::ElementToScreen(const IntVector2& position) override
    // void Sprite::SetPosition(const Vector2& position)
    // void Sprite::SetPosition(float x, float y)
    // void Sprite::SetHotSpot(const IntVector2& hotSpot)
    // void Sprite::SetHotSpot(int x, int y)
    // void Sprite::SetScale(const Vector2& scale)
    // void Sprite::SetScale(float x, float y)
    // void Sprite::SetScale(float scale)
    // void Sprite::SetRotation(float angle)
    // void Sprite::SetTexture(Texture* texture)
    // void Sprite::SetImageRect(const IntRect& rect)
    // void Sprite::SetFullImageRect()
    // void Sprite::SetBlendMode(BlendMode mode)
    // const Vector2& Sprite::GetPosition() const
    // const IntVector2& Sprite::GetHotSpot() const
    // const Vector2& Sprite::GetScale() const
    // float Sprite::GetRotation() const
    // Texture* Sprite::GetTexture() const
    // const IntRect& Sprite::GetImageRect() const
    // BlendMode Sprite::GetBlendMode() const
    // void Sprite::SetTextureAttr(const ResourceRef& value)
    // ResourceRef Sprite::GetTextureAttr() const
    // const Matrix3x4& Sprite::GetTransform() const
}

// class StaticModel | File: ../Graphics/StaticModel.h
void CollectMembers_StaticModel(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -virtual Geometry* Drawable::GetLodGeometry(unsigned batchIndex, unsigned level)
    // -virtual bool Drawable::DrawOcclusion(OcclusionBuffer* buffer)
    // -virtual unsigned Drawable::GetNumOccluderTriangles()
    // -virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // -virtual void Drawable::UpdateBatches(const FrameInfo& frame)

    // void StaticModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // void StaticModel::UpdateBatches(const FrameInfo& frame) override
    // Geometry* StaticModel::GetLodGeometry(unsigned batchIndex, unsigned level) override
    // unsigned StaticModel::GetNumOccluderTriangles() override
    // bool StaticModel::DrawOcclusion(OcclusionBuffer* buffer) override
    // virtual void StaticModel::SetModel(Model* model)
    // virtual void StaticModel::SetMaterial(Material* material)
    // virtual bool StaticModel::SetMaterial(unsigned index, Material* material)
    // void StaticModel::SetOcclusionLodLevel(unsigned level)
    // void StaticModel::ApplyMaterialList(const String& fileName=String::EMPTY)
    // Model* StaticModel::GetModel() const
    // unsigned StaticModel::GetNumGeometries() const
    // virtual Material* StaticModel::GetMaterial() const
    // virtual Material* StaticModel::GetMaterial(unsigned index) const
    // unsigned StaticModel::GetOcclusionLodLevel() const
    // bool StaticModel::IsInside(const Vector3& point) const
    // bool StaticModel::IsInsideLocal(const Vector3& point) const
    // void StaticModel::SetModelAttr(const ResourceRef& value)
    // void StaticModel::SetMaterialsAttr(const ResourceRefList& value)
    // ResourceRef StaticModel::GetModelAttr() const
    // const ResourceRefList& StaticModel::GetMaterialsAttr() const
}

// struct StaticModelGeometryData | File: ../Graphics/StaticModel.h
void CollectMembers_StaticModelGeometryData(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class StaticModelGroup | File: ../Graphics/StaticModelGroup.h
void CollectMembers_StaticModelGroup(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_StaticModel(methods);

    // -bool StaticModel::DrawOcclusion(OcclusionBuffer* buffer) override
    // -static void StaticModel::RegisterObject(Context* context)
    // -unsigned StaticModel::GetNumOccluderTriangles() override
    // -virtual void Serializable::ApplyAttributes()
    // -void StaticModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // -void StaticModel::UpdateBatches(const FrameInfo& frame) override

    // void StaticModelGroup::ApplyAttributes() override
    // void StaticModelGroup::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // void StaticModelGroup::UpdateBatches(const FrameInfo& frame) override
    // unsigned StaticModelGroup::GetNumOccluderTriangles() override
    // bool StaticModelGroup::DrawOcclusion(OcclusionBuffer* buffer) override
    // void StaticModelGroup::AddInstanceNode(Node* node)
    // void StaticModelGroup::RemoveInstanceNode(Node* node)
    // void StaticModelGroup::RemoveAllInstanceNodes()
    // unsigned StaticModelGroup::GetNumInstanceNodes() const
    // Node* StaticModelGroup::GetInstanceNode(unsigned index) const
    // void StaticModelGroup::SetNodeIDsAttr(const VariantVector& value)
    // const VariantVector& StaticModelGroup::GetNodeIDsAttr() const
}

// struct StoredLogMessage | File: ../IO/Log.h
void CollectMembers_StoredLogMessage(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class String | File: ../Container/Str.h
void CollectMembers_String(Vector<RegisterObjectMethodArgs>& methods)
{
    // String& String::operator=(const String& rhs)
    // String& String::operator=(String&& rhs) noexcept
    // String& String::operator=(const char* rhs)
    // String& String::operator+=(const String& rhs)
    // String& String::operator+=(const char* rhs)
    // String& String::operator+=(char rhs)
    // String& String::operator+=(int rhs)
    // String& String::operator+=(short rhs)
    // String& String::operator+=(long rhs)
    // String& String::operator+=(long long rhs)
    // String& String::operator+=(unsigned rhs)
    // String& String::operator+=(unsigned short rhs)
    // String& String::operator+=(unsigned long rhs)
    // String& String::operator+=(unsigned long long rhs)
    // String& String::operator+=(float rhs)
    // String& String::operator+=(bool rhs)
    // template<class T> String& String::operator+=(const T& rhs)
    // String String::operator+(const String& rhs) const
    // String String::operator+(const char* rhs) const
    // bool String::operator==(const String& rhs) const
    // bool String::operator!=(const String& rhs) const
    // bool String::operator<(const String& rhs) const
    // bool String::operator>(const String& rhs) const
    // bool String::operator==(const char* rhs) const
    // bool String::operator!=(const char* rhs) const
    // bool String::operator<(const char* rhs) const
    // bool String::operator>(const char* rhs) const
    // char& String::operator[](unsigned index)
    // const char& String::operator[](unsigned index) const
    // char& String::At(unsigned index)
    // const char& String::At(unsigned index) const
    // void String::Replace(char replaceThis, char replaceWith, bool caseSensitive=true)
    // void String::Replace(const String& replaceThis, const String& replaceWith, bool caseSensitive=true)
    // void String::Replace(unsigned pos, unsigned length, const String& replaceWith)
    // void String::Replace(unsigned pos, unsigned length, const char* replaceWith)
    // Iterator String::Replace(const Iterator& start, const Iterator& end, const String& replaceWith)
    // String String::Replaced(char replaceThis, char replaceWith, bool caseSensitive=true) const
    // String String::Replaced(const String& replaceThis, const String& replaceWith, bool caseSensitive=true) const
    // String& String::Append(const String& str)
    // String& String::Append(const char* str)
    // String& String::Append(char c)
    // String& String::Append(const char* str, unsigned length)
    // void String::Insert(unsigned pos, const String& str)
    // void String::Insert(unsigned pos, char c)
    // Iterator String::Insert(const Iterator& dest, const String& str)
    // Iterator String::Insert(const Iterator& dest, const Iterator& start, const Iterator& end)
    // Iterator String::Insert(const Iterator& dest, char c)
    // void String::Erase(unsigned pos, unsigned length=1)
    // Iterator String::Erase(const Iterator& it)
    // Iterator String::Erase(const Iterator& start, const Iterator& end)
    // void String::Resize(unsigned newLength)
    // void String::Reserve(unsigned newCapacity)
    // void String::Compact()
    // void String::Clear()
    // void String::Swap(String& str)
    // Iterator String::Begin()
    // ConstIterator String::Begin() const
    // Iterator String::End()
    // ConstIterator String::End() const
    // char String::Front() const
    // char String::Back() const
    // String String::Substring(unsigned pos) const
    // String String::Substring(unsigned pos, unsigned length) const
    // String String::Trimmed() const
    // String String::ToUpper() const
    // String String::ToLower() const
    // Vector<String> String::Split(char separator, bool keepEmptyStrings=false) const
    // void String::Join(const Vector<String>& subStrings, const String& glue)
    // unsigned String::Find(const String& str, unsigned startPos=0, bool caseSensitive=true) const
    // unsigned String::Find(char c, unsigned startPos=0, bool caseSensitive=true) const
    // unsigned String::FindLast(const String& str, unsigned startPos=NPOS, bool caseSensitive=true) const
    // unsigned String::FindLast(char c, unsigned startPos=NPOS, bool caseSensitive=true) const
    // bool String::StartsWith(const String& str, bool caseSensitive=true) const
    // bool String::EndsWith(const String& str, bool caseSensitive=true) const
    // const char* String::CString() const
    // unsigned String::Length() const
    // unsigned String::Capacity() const
    // bool String::Empty() const
    // int String::Compare(const String& str, bool caseSensitive=true) const
    // int String::Compare(const char* str, bool caseSensitive=true) const
    // bool String::Contains(const String& str, bool caseSensitive=true) const
    // bool String::Contains(char c, bool caseSensitive=true) const
    // void String::SetUTF8FromLatin1(const char* str)
    // void String::SetUTF8FromWChar(const wchar_t* str)
    // unsigned String::LengthUTF8() const
    // unsigned String::ByteOffsetUTF8(unsigned index) const
    // unsigned String::NextUTF8Char(unsigned& byteOffset) const
    // unsigned String::AtUTF8(unsigned index) const
    // void String::ReplaceUTF8(unsigned index, unsigned unicodeChar)
    // String& String::AppendUTF8(unsigned unicodeChar)
    // String String::SubstringUTF8(unsigned pos) const
    // String String::SubstringUTF8(unsigned pos, unsigned length) const
    // unsigned String::ToHash() const
    // String& String::AppendWithFormat(const char* formatString,...)
    // String& String::AppendWithFormatArgs(const char* formatString, va_list args)
}

// class StringHash | File: ../Math/StringHash.h
void CollectMembers_StringHash(Vector<RegisterObjectMethodArgs>& methods)
{
    // StringHash& StringHash::operator=(const StringHash& rhs) noexcept=default
    // StringHash StringHash::operator+(const StringHash& rhs) const
    // StringHash& StringHash::operator+=(const StringHash& rhs)
    // bool StringHash::operator==(const StringHash& rhs) const
    // bool StringHash::operator!=(const StringHash& rhs) const
    // bool StringHash::operator<(const StringHash& rhs) const
    // bool StringHash::operator>(const StringHash& rhs) const
    // explicit StringHash::operator bool() const
    // unsigned StringHash::Value() const
    // String StringHash::ToString() const
    // String StringHash::Reverse() const
    // unsigned StringHash::ToHash() const
}

// class StringHashRegister | File: ../Core/StringHashRegister.h
void CollectMembers_StringHashRegister(Vector<RegisterObjectMethodArgs>& methods)
{
    // StringHash StringHashRegister::RegisterString(const StringHash& hash, const char* string)
    // StringHash StringHashRegister::RegisterString(const char* string)
    // String StringHashRegister::GetStringCopy(const StringHash& hash) const
    // bool StringHashRegister::Contains(const StringHash& hash) const
    // const String& StringHashRegister::GetString(const StringHash& hash) const
    // const StringMap& StringHashRegister::GetInternalMap() const
}

// class Technique | File: ../Graphics/Technique.h
void CollectMembers_Technique(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)

    // bool Technique::BeginLoad(Deserializer& source) override
    // void Technique::SetIsDesktop(bool enable)
    // Pass* Technique::CreatePass(const String& name)
    // void Technique::RemovePass(const String& name)
    // void Technique::ReleaseShaders()
    // SharedPtr<Technique> Technique::Clone(const String& cloneName=String::EMPTY) const
    // bool Technique::IsDesktop() const
    // bool Technique::IsSupported() const
    // bool Technique::HasPass(unsigned passIndex) const
    // bool Technique::HasPass(const String& name) const
    // Pass* Technique::GetPass(unsigned passIndex) const
    // Pass* Technique::GetPass(const String& name) const
    // Pass* Technique::GetSupportedPass(unsigned passIndex) const
    // Pass* Technique::GetSupportedPass(const String& name) const
    // unsigned Technique::GetNumPasses() const
    // Vector<String> Technique::GetPassNames() const
    // PODVector<Pass*> Technique::GetPasses() const
    // SharedPtr<Technique> Technique::CloneWithDefines(const String& vsDefines, const String& psDefines)
}

// struct TechniqueEntry | File: ../Graphics/Material.h
void CollectMembers_TechniqueEntry(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Terrain | File: ../Graphics/Terrain.h
void CollectMembers_Terrain(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::OnSetEnabled()
    // -virtual void Serializable::ApplyAttributes()

    // void Terrain::ApplyAttributes() override
    // void Terrain::OnSetEnabled() override
    // void Terrain::SetPatchSize(int size)
    // void Terrain::SetSpacing(const Vector3& spacing)
    // void Terrain::SetMaxLodLevels(unsigned levels)
    // void Terrain::SetOcclusionLodLevel(unsigned level)
    // void Terrain::SetSmoothing(bool enable)
    // bool Terrain::SetHeightMap(Image* image)
    // void Terrain::SetMaterial(Material* material)
    // void Terrain::SetNorthNeighbor(Terrain* north)
    // void Terrain::SetSouthNeighbor(Terrain* south)
    // void Terrain::SetWestNeighbor(Terrain* west)
    // void Terrain::SetEastNeighbor(Terrain* east)
    // void Terrain::SetNeighbors(Terrain* north, Terrain* south, Terrain* west, Terrain* east)
    // void Terrain::SetDrawDistance(float distance)
    // void Terrain::SetShadowDistance(float distance)
    // void Terrain::SetLodBias(float bias)
    // void Terrain::SetViewMask(unsigned mask)
    // void Terrain::SetLightMask(unsigned mask)
    // void Terrain::SetShadowMask(unsigned mask)
    // void Terrain::SetZoneMask(unsigned mask)
    // void Terrain::SetMaxLights(unsigned num)
    // void Terrain::SetCastShadows(bool enable)
    // void Terrain::SetOccluder(bool enable)
    // void Terrain::SetOccludee(bool enable)
    // void Terrain::ApplyHeightMap()
    // int Terrain::GetPatchSize() const
    // const Vector3& Terrain::GetSpacing() const
    // const IntVector2& Terrain::GetNumVertices() const
    // const IntVector2& Terrain::GetNumPatches() const
    // unsigned Terrain::GetMaxLodLevels() const
    // unsigned Terrain::GetOcclusionLodLevel() const
    // bool Terrain::GetSmoothing() const
    // Image* Terrain::GetHeightMap() const
    // Material* Terrain::GetMaterial() const
    // TerrainPatch* Terrain::GetPatch(unsigned index) const
    // TerrainPatch* Terrain::GetPatch(int x, int z) const
    // TerrainPatch* Terrain::GetNeighborPatch(int x, int z) const
    // float Terrain::GetHeight(const Vector3& worldPosition) const
    // Vector3 Terrain::GetNormal(const Vector3& worldPosition) const
    // IntVector2 Terrain::WorldToHeightMap(const Vector3& worldPosition) const
    // Vector3 Terrain::HeightMapToWorld(const IntVector2& pixelPosition) const
    // Terrain* Terrain::GetNorthNeighbor() const
    // Terrain* Terrain::GetSouthNeighbor() const
    // Terrain* Terrain::GetWestNeighbor() const
    // Terrain* Terrain::GetEastNeighbor() const
    // SharedArrayPtr<float> Terrain::GetHeightData() const
    // float Terrain::GetDrawDistance() const
    // float Terrain::GetShadowDistance() const
    // float Terrain::GetLodBias() const
    // unsigned Terrain::GetViewMask() const
    // unsigned Terrain::GetLightMask() const
    // unsigned Terrain::GetShadowMask() const
    // unsigned Terrain::GetZoneMask() const
    // unsigned Terrain::GetMaxLights() const
    // bool Terrain::IsVisible() const
    // bool Terrain::GetCastShadows() const
    // bool Terrain::IsOccluder() const
    // bool Terrain::IsOccludee() const
    // void Terrain::CreatePatchGeometry(TerrainPatch* patch)
    // void Terrain::UpdatePatchLod(TerrainPatch* patch)
    // void Terrain::SetHeightMapAttr(const ResourceRef& value)
    // void Terrain::SetMaterialAttr(const ResourceRef& value)
    // void Terrain::SetPatchSizeAttr(int value)
    // void Terrain::SetMaxLodLevelsAttr(unsigned value)
    // void Terrain::SetOcclusionLodLevelAttr(unsigned value)
    // ResourceRef Terrain::GetHeightMapAttr() const
    // ResourceRef Terrain::GetMaterialAttr() const
}

// class TerrainPatch | File: ../Graphics/TerrainPatch.h
void CollectMembers_TerrainPatch(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -virtual Geometry* Drawable::GetLodGeometry(unsigned batchIndex, unsigned level)
    // -virtual UpdateGeometryType Drawable::GetUpdateGeometryType()
    // -virtual bool Drawable::DrawOcclusion(OcclusionBuffer* buffer)
    // -virtual unsigned Drawable::GetNumOccluderTriangles()
    // -virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // -virtual void Drawable::UpdateBatches(const FrameInfo& frame)
    // -virtual void Drawable::UpdateGeometry(const FrameInfo& frame)
    // -void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override

    // void TerrainPatch::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // void TerrainPatch::UpdateBatches(const FrameInfo& frame) override
    // void TerrainPatch::UpdateGeometry(const FrameInfo& frame) override
    // UpdateGeometryType TerrainPatch::GetUpdateGeometryType() override
    // Geometry* TerrainPatch::GetLodGeometry(unsigned batchIndex, unsigned level) override
    // unsigned TerrainPatch::GetNumOccluderTriangles() override
    // bool TerrainPatch::DrawOcclusion(OcclusionBuffer* buffer) override
    // void TerrainPatch::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void TerrainPatch::SetOwner(Terrain* terrain)
    // void TerrainPatch::SetNeighbors(TerrainPatch* north, TerrainPatch* south, TerrainPatch* west, TerrainPatch* east)
    // void TerrainPatch::SetMaterial(Material* material)
    // void TerrainPatch::SetBoundingBox(const BoundingBox& box)
    // void TerrainPatch::SetCoordinates(const IntVector2& coordinates)
    // void TerrainPatch::ResetLod()
    // Geometry* TerrainPatch::GetGeometry() const
    // Geometry* TerrainPatch::GetMaxLodGeometry() const
    // Geometry* TerrainPatch::GetOcclusionGeometry() const
    // VertexBuffer* TerrainPatch::GetVertexBuffer() const
    // Terrain* TerrainPatch::GetOwner() const
    // TerrainPatch* TerrainPatch::GetNorthPatch() const
    // TerrainPatch* TerrainPatch::GetSouthPatch() const
    // TerrainPatch* TerrainPatch::GetWestPatch() const
    // TerrainPatch* TerrainPatch::GetEastPatch() const
    // PODVector<float>& TerrainPatch::GetLodErrors()
    // const IntVector2& TerrainPatch::GetCoordinates() const
    // unsigned TerrainPatch::GetLodLevel() const
}

// class Text | File: ../UI/Text.h
void CollectMembers_Text(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_UISelectable(methods);

    // -UISelectable::URHO3D_OBJECT(UISelectable, UIElement)
    // -static void UISelectable::RegisterObject(Context* context)
    // -virtual void UIElement::OnIndentSet()
    // -virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)
    // -void UIElement::ApplyAttributes() override
    // -void UISelectable::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override

    // void Text::ApplyAttributes() override
    // void Text::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // void Text::OnResize(const IntVector2& newSize, const IntVector2& delta) override
    // void Text::OnIndentSet() override
    // bool Text::SetFont(const String& fontName, float size=DEFAULT_FONT_SIZE)
    // bool Text::SetFont(Font* font, float size=DEFAULT_FONT_SIZE)
    // bool Text::SetFontSize(float size)
    // void Text::SetText(const String& text)
    // void Text::SetTextAlignment(HorizontalAlignment align)
    // void Text::SetRowSpacing(float spacing)
    // void Text::SetWordwrap(bool enable)
    // void Text::SetAutoLocalizable(bool enable)
    // void Text::SetSelection(unsigned start, unsigned length=M_MAX_UNSIGNED)
    // void Text::ClearSelection()
    // void Text::SetTextEffect(TextEffect textEffect)
    // void Text::SetEffectShadowOffset(const IntVector2& offset)
    // void Text::SetEffectStrokeThickness(int thickness)
    // void Text::SetEffectRoundStroke(bool roundStroke)
    // void Text::SetEffectColor(const Color& effectColor)
    // Font* Text::GetFont() const
    // float Text::GetFontSize() const
    // const String& Text::GetText() const
    // HorizontalAlignment Text::GetTextAlignment() const
    // float Text::GetRowSpacing() const
    // bool Text::GetWordwrap() const
    // bool Text::GetAutoLocalizable() const
    // unsigned Text::GetSelectionStart() const
    // unsigned Text::GetSelectionLength() const
    // TextEffect Text::GetTextEffect() const
    // const IntVector2& Text::GetEffectShadowOffset() const
    // int Text::GetEffectStrokeThickness() const
    // bool Text::GetEffectRoundStroke() const
    // const Color& Text::GetEffectColor() const
    // float Text::GetRowHeight() const
    // unsigned Text::GetNumRows() const
    // unsigned Text::GetNumChars() const
    // float Text::GetRowWidth(unsigned index) const
    // Vector2 Text::GetCharPosition(unsigned index)
    // Vector2 Text::GetCharSize(unsigned index)
    // void Text::SetEffectDepthBias(float bias)
    // float Text::GetEffectDepthBias() const
    // void Text::SetFontAttr(const ResourceRef& value)
    // ResourceRef Text::GetFontAttr() const
    // void Text::SetTextAttr(const String& value)
    // String Text::GetTextAttr() const
}

// class Text3D | File: ../UI/Text3D.h
void CollectMembers_Text3D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -virtual UpdateGeometryType Drawable::GetUpdateGeometryType()
    // -virtual void Drawable::UpdateBatches(const FrameInfo& frame)
    // -virtual void Drawable::UpdateGeometry(const FrameInfo& frame)
    // -virtual void Serializable::ApplyAttributes()

    // void Text3D::ApplyAttributes() override
    // void Text3D::UpdateBatches(const FrameInfo& frame) override
    // void Text3D::UpdateGeometry(const FrameInfo& frame) override
    // UpdateGeometryType Text3D::GetUpdateGeometryType() override
    // bool Text3D::SetFont(const String& fontName, float size=DEFAULT_FONT_SIZE)
    // bool Text3D::SetFont(Font* font, float size=DEFAULT_FONT_SIZE)
    // bool Text3D::SetFontSize(float size)
    // void Text3D::SetMaterial(Material* material)
    // void Text3D::SetText(const String& text)
    // void Text3D::SetAlignment(HorizontalAlignment hAlign, VerticalAlignment vAlign)
    // void Text3D::SetHorizontalAlignment(HorizontalAlignment align)
    // void Text3D::SetVerticalAlignment(VerticalAlignment align)
    // void Text3D::SetTextAlignment(HorizontalAlignment align)
    // void Text3D::SetRowSpacing(float spacing)
    // void Text3D::SetWordwrap(bool enable)
    // void Text3D::SetTextEffect(TextEffect textEffect)
    // void Text3D::SetEffectShadowOffset(const IntVector2& offset)
    // void Text3D::SetEffectStrokeThickness(int thickness)
    // void Text3D::SetEffectRoundStroke(bool roundStroke)
    // void Text3D::SetEffectColor(const Color& effectColor)
    // void Text3D::SetEffectDepthBias(float bias)
    // void Text3D::SetWidth(int width)
    // void Text3D::SetColor(const Color& color)
    // void Text3D::SetColor(Corner corner, const Color& color)
    // void Text3D::SetOpacity(float opacity)
    // void Text3D::SetFixedScreenSize(bool enable)
    // void Text3D::SetFaceCameraMode(FaceCameraMode mode)
    // Font* Text3D::GetFont() const
    // float Text3D::GetFontSize() const
    // Material* Text3D::GetMaterial() const
    // const String& Text3D::GetText() const
    // HorizontalAlignment Text3D::GetTextAlignment() const
    // HorizontalAlignment Text3D::GetHorizontalAlignment() const
    // VerticalAlignment Text3D::GetVerticalAlignment() const
    // float Text3D::GetRowSpacing() const
    // bool Text3D::GetWordwrap() const
    // TextEffect Text3D::GetTextEffect() const
    // const IntVector2& Text3D::GetEffectShadowOffset() const
    // int Text3D::GetEffectStrokeThickness() const
    // bool Text3D::GetEffectRoundStroke() const
    // const Color& Text3D::GetEffectColor() const
    // float Text3D::GetEffectDepthBias() const
    // int Text3D::GetWidth() const
    // int Text3D::GetHeight() const
    // int Text3D::GetRowHeight() const
    // unsigned Text3D::GetNumRows() const
    // unsigned Text3D::GetNumChars() const
    // int Text3D::GetRowWidth(unsigned index) const
    // Vector2 Text3D::GetCharPosition(unsigned index)
    // Vector2 Text3D::GetCharSize(unsigned index)
    // const Color& Text3D::GetColor(Corner corner) const
    // float Text3D::GetOpacity() const
    // bool Text3D::IsFixedScreenSize() const
    // FaceCameraMode Text3D::GetFaceCameraMode() const
    // void Text3D::SetFontAttr(const ResourceRef& value)
    // ResourceRef Text3D::GetFontAttr() const
    // void Text3D::SetMaterialAttr(const ResourceRef& value)
    // ResourceRef Text3D::GetMaterialAttr() const
    // void Text3D::SetTextAttr(const String& value)
    // String Text3D::GetTextAttr() const
    // const Color& Text3D::GetColorAttr() const
}

// class Texture | File: ../Graphics/Texture.h
void CollectMembers_Texture(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ResourceWithMetadata(methods);
    CollectMembers_GPUObject(methods);

    // void Texture::SetNumLevels(unsigned levels)
    // void Texture::SetFilterMode(TextureFilterMode mode)
    // void Texture::SetAddressMode(TextureCoordinate coord, TextureAddressMode mode)
    // void Texture::SetAnisotropy(unsigned level)
    // void Texture::SetShadowCompare(bool enable)
    // void Texture::SetBorderColor(const Color& color)
    // void Texture::SetSRGB(bool enable)
    // void Texture::SetBackupTexture(Texture* texture)
    // void Texture::SetMipsToSkip(MaterialQuality quality, int toSkip)
    // unsigned Texture::GetFormat() const
    // bool Texture::IsCompressed() const
    // unsigned Texture::GetLevels() const
    // int Texture::GetWidth() const
    // int Texture::GetHeight() const
    // int Texture::GetDepth() const
    // TextureFilterMode Texture::GetFilterMode() const
    // TextureAddressMode Texture::GetAddressMode(TextureCoordinate coord) const
    // unsigned Texture::GetAnisotropy() const
    // bool Texture::GetShadowCompare() const
    // const Color& Texture::GetBorderColor() const
    // bool Texture::GetSRGB() const
    // int Texture::GetMultiSample() const
    // bool Texture::GetAutoResolve() const
    // bool Texture::IsResolveDirty() const
    // bool Texture::GetLevelsDirty() const
    // Texture* Texture::GetBackupTexture() const
    // int Texture::GetMipsToSkip(MaterialQuality quality) const
    // int Texture::GetLevelWidth(unsigned level) const
    // int Texture::GetLevelHeight(unsigned level) const
    // int Texture::GetLevelDepth(unsigned level) const
    // TextureUsage Texture::GetUsage() const
    // unsigned Texture::GetDataSize(int width, int height) const
    // unsigned Texture::GetDataSize(int width, int height, int depth) const
    // unsigned Texture::GetRowDataSize(int width) const
    // unsigned Texture::GetComponents() const
    // bool Texture::GetParametersDirty() const
    // void Texture::SetParameters(XMLFile* file)
    // void Texture::SetParameters(const XMLElement& element)
    // void Texture::SetParametersDirty()
    // void Texture::UpdateParameters()
    // void* Texture::GetShaderResourceView() const
    // void* Texture::GetSampler() const
    // void* Texture::GetResolveTexture() const
    // unsigned Texture::GetTarget() const
    // unsigned Texture::GetSRGBFormat(unsigned format)
    // void Texture::SetResolveDirty(bool enable)
    // void Texture::SetLevelsDirty()
    // void Texture::RegenerateLevels()
}

// class Texture2D | File: ../Graphics/Texture2D.h
void CollectMembers_Texture2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Texture(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()
    // -virtual void GPUObject::OnDeviceLost()
    // -virtual void GPUObject::OnDeviceReset()
    // -virtual void GPUObject::Release()

    // bool Texture2D::BeginLoad(Deserializer& source) override
    // bool Texture2D::EndLoad() override
    // void Texture2D::OnDeviceLost() override
    // void Texture2D::OnDeviceReset() override
    // void Texture2D::Release() override
    // bool Texture2D::SetSize(int width, int height, unsigned format, TextureUsage usage=TEXTURE_STATIC, int multiSample=1, bool autoResolve=true)
    // bool Texture2D::SetData(unsigned level, int x, int y, int width, int height, const void* data)
    // bool Texture2D::SetData(Image* image, bool useAlpha=false)
    // bool Texture2D::GetData(unsigned level, void* dest) const
    // bool Texture2D::GetImage(Image& image) const
    // SharedPtr<Image> Texture2D::GetImage() const
    // RenderSurface* Texture2D::GetRenderSurface() const
}

// class Texture2DArray | File: ../Graphics/Texture2DArray.h
void CollectMembers_Texture2DArray(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Texture(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()
    // -virtual void GPUObject::OnDeviceLost()
    // -virtual void GPUObject::OnDeviceReset()
    // -virtual void GPUObject::Release()

    // bool Texture2DArray::BeginLoad(Deserializer& source) override
    // bool Texture2DArray::EndLoad() override
    // void Texture2DArray::OnDeviceLost() override
    // void Texture2DArray::OnDeviceReset() override
    // void Texture2DArray::Release() override
    // void Texture2DArray::SetLayers(unsigned layers)
    // bool Texture2DArray::SetSize(unsigned layers, int width, int height, unsigned format, TextureUsage usage=TEXTURE_STATIC)
    // bool Texture2DArray::SetData(unsigned layer, unsigned level, int x, int y, int width, int height, const void* data)
    // bool Texture2DArray::SetData(unsigned layer, Deserializer& source)
    // bool Texture2DArray::SetData(unsigned layer, Image* image, bool useAlpha=false)
    // unsigned Texture2DArray::GetLayers() const
    // bool Texture2DArray::GetData(unsigned layer, unsigned level, void* dest) const
    // RenderSurface* Texture2DArray::GetRenderSurface() const
}

// class Texture3D | File: ../Graphics/Texture3D.h
void CollectMembers_Texture3D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Texture(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()
    // -virtual void GPUObject::OnDeviceLost()
    // -virtual void GPUObject::OnDeviceReset()
    // -virtual void GPUObject::Release()

    // bool Texture3D::BeginLoad(Deserializer& source) override
    // bool Texture3D::EndLoad() override
    // void Texture3D::OnDeviceLost() override
    // void Texture3D::OnDeviceReset() override
    // void Texture3D::Release() override
    // bool Texture3D::SetSize(int width, int height, int depth, unsigned format, TextureUsage usage=TEXTURE_STATIC)
    // bool Texture3D::SetData(unsigned level, int x, int y, int z, int width, int height, int depth, const void* data)
    // bool Texture3D::SetData(Image* image, bool useAlpha=false)
    // bool Texture3D::GetData(unsigned level, void* dest) const
}

// class TextureCube | File: ../Graphics/TextureCube.h
void CollectMembers_TextureCube(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Texture(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()
    // -virtual void GPUObject::OnDeviceLost()
    // -virtual void GPUObject::OnDeviceReset()
    // -virtual void GPUObject::Release()

    // bool TextureCube::BeginLoad(Deserializer& source) override
    // bool TextureCube::EndLoad() override
    // void TextureCube::OnDeviceLost() override
    // void TextureCube::OnDeviceReset() override
    // void TextureCube::Release() override
    // bool TextureCube::SetSize(int size, unsigned format, TextureUsage usage=TEXTURE_STATIC, int multiSample=1)
    // bool TextureCube::SetData(CubeMapFace face, unsigned level, int x, int y, int width, int height, const void* data)
    // bool TextureCube::SetData(CubeMapFace face, Deserializer& source)
    // bool TextureCube::SetData(CubeMapFace face, Image* image, bool useAlpha=false)
    // bool TextureCube::GetData(CubeMapFace face, unsigned level, void* dest) const
    // SharedPtr<Image> TextureCube::GetImage(CubeMapFace face) const
    // RenderSurface* TextureCube::GetRenderSurface(CubeMapFace face) const
}

// struct TextureFrame | File: ../Graphics/ParticleEffect.h
void CollectMembers_TextureFrame(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Thread | File: ../Core/Thread.h
void CollectMembers_Thread(Vector<RegisterObjectMethodArgs>& methods)
{
    // virtual void Thread::ThreadFunction()=0
    // bool Thread::Run()
    // void Thread::Stop()
    // void Thread::SetPriority(int priority)
    // bool Thread::IsStarted() const
}

// class Time | File: ../Core/Timer.h
void CollectMembers_Time(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Time::BeginFrame(float timeStep)
    // void Time::EndFrame()
    // void Time::SetTimerPeriod(unsigned mSec)
    // unsigned Time::GetFrameNumber() const
    // float Time::GetTimeStep() const
    // unsigned Time::GetTimerPeriod() const
    // float Time::GetElapsedTime()
    // float Time::GetFramesPerSecond() const
}

// class Timer | File: ../Core/Timer.h
void CollectMembers_Timer(Vector<RegisterObjectMethodArgs>& methods)
{
    // unsigned Timer::GetMSec(bool reset)
    // void Timer::Reset()
}

// class ToolTip | File: ../UI/ToolTip.h
void CollectMembers_ToolTip(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_UIElement(methods);

    // -static void UIElement::RegisterObject(Context* context)
    // -virtual void UIElement::Update(float timeStep)

    // void ToolTip::Update(float timeStep) override
    // void ToolTip::Reset()
    // void ToolTip::AddAltTarget(UIElement* target)
    // void ToolTip::SetDelay(float delay)
    // float ToolTip::GetDelay() const
}

// struct TouchState | File: ../Input/Input.h
void CollectMembers_TouchState(Vector<RegisterObjectMethodArgs>& methods)
{
    // UIElement* TouchState::GetTouchedElement()
}

// struct TrailPoint | File: ../Graphics/RibbonTrail.h
void CollectMembers_TrailPoint(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class TypeInfo | File: ../Core/Object.h
void CollectMembers_TypeInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool TypeInfo::IsTypeOf(StringHash type) const
    // bool TypeInfo::IsTypeOf(const TypeInfo* typeInfo) const
    // template<typename T> bool TypeInfo::IsTypeOf() const
    // StringHash TypeInfo::GetType() const
    // const String& TypeInfo::GetTypeName() const
    // const TypeInfo* TypeInfo::GetBaseTypeInfo() const
}

// class UI | File: ../UI/UI.h
void CollectMembers_UI(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void UI::SetCursor(Cursor* cursor)
    // void UI::SetFocusElement(UIElement* element, bool byKey=false)
    // bool UI::SetModalElement(UIElement* modalElement, bool enable)
    // void UI::Clear()
    // void UI::Update(float timeStep)
    // void UI::RenderUpdate()
    // void UI::Render(bool renderUICommand=false)
    // void UI::DebugDraw(UIElement* element)
    // SharedPtr<UIElement> UI::LoadLayout(Deserializer& source, XMLFile* styleFile=nullptr)
    // SharedPtr<UIElement> UI::LoadLayout(XMLFile* file, XMLFile* styleFile=nullptr)
    // bool UI::SaveLayout(Serializer& dest, UIElement* element)
    // void UI::SetClipboardText(const String& text)
    // void UI::SetDoubleClickInterval(float interval)
    // void UI::SetMaxDoubleClickDistance(float distPixels)
    // void UI::SetDragBeginInterval(float interval)
    // void UI::SetDragBeginDistance(int pixels)
    // void UI::SetDefaultToolTipDelay(float delay)
    // void UI::SetMaxFontTextureSize(int size)
    // void UI::SetNonFocusedMouseWheel(bool nonFocusedMouseWheel)
    // void UI::SetUseSystemClipboard(bool enable)
    // void UI::SetUseScreenKeyboard(bool enable)
    // void UI::SetUseMutableGlyphs(bool enable)
    // void UI::SetForceAutoHint(bool enable)
    // void UI::SetFontHintLevel(FontHintLevel level)
    // void UI::SetFontSubpixelThreshold(float threshold)
    // void UI::SetFontOversampling(int oversampling)
    // void UI::SetScale(float scale)
    // void UI::SetWidth(float width)
    // void UI::SetHeight(float height)
    // void UI::SetCustomSize(const IntVector2& size)
    // void UI::SetCustomSize(int width, int height)
    // UIElement* UI::GetRoot() const
    // UIElement* UI::GetRootModalElement() const
    // Cursor* UI::GetCursor() const
    // IntVector2 UI::GetCursorPosition() const
    // UIElement* UI::GetElementAt(const IntVector2& position, bool enabledOnly=true)
    // UIElement* UI::GetElementAt(int x, int y, bool enabledOnly=true)
    // UIElement* UI::GetElementAt(UIElement* root, const IntVector2& position, bool enabledOnly=true)
    // IntVector2 UI::ConvertSystemToUI(const IntVector2& systemPos) const
    // IntVector2 UI::ConvertUIToSystem(const IntVector2& uiPos) const
    // UIElement* UI::GetFocusElement() const
    // UIElement* UI::GetFrontElement() const
    // const Vector<UIElement*> UI::GetDragElements()
    // unsigned UI::GetNumDragElements() const
    // UIElement* UI::GetDragElement(unsigned index)
    // const String& UI::GetClipboardText() const
    // float UI::GetDoubleClickInterval() const
    // float UI::GetMaxDoubleClickDistance() const
    // float UI::GetDragBeginInterval() const
    // int UI::GetDragBeginDistance() const
    // float UI::GetDefaultToolTipDelay() const
    // int UI::GetMaxFontTextureSize() const
    // bool UI::IsNonFocusedMouseWheel() const
    // bool UI::GetUseSystemClipboard() const
    // bool UI::GetUseScreenKeyboard() const
    // bool UI::GetUseMutableGlyphs() const
    // bool UI::GetForceAutoHint() const
    // FontHintLevel UI::GetFontHintLevel() const
    // float UI::GetFontSubpixelThreshold() const
    // int UI::GetFontOversampling() const
    // bool UI::HasModalElement() const
    // bool UI::IsDragging() const
    // float UI::GetScale() const
    // const IntVector2& UI::GetCustomSize() const
    // void UI::SetElementRenderTexture(UIElement* element, Texture2D* texture)
}

// class UIBatch | File: ../UI/UIBatch.h
void CollectMembers_UIBatch(Vector<RegisterObjectMethodArgs>& methods)
{
    // void UIBatch::SetColor(const Color& color, bool overrideAlpha=false)
    // void UIBatch::SetDefaultColor()
    // void UIBatch::AddQuad(float x, float y, float width, float height, int texOffsetX, int texOffsetY, int texWidth=0, int texHeight=0)
    // void UIBatch::AddQuad(const Matrix3x4& transform, int x, int y, int width, int height, int texOffsetX, int texOffsetY, int texWidth=0, int texHeight=0)
    // void UIBatch::AddQuad(int x, int y, int width, int height, int texOffsetX, int texOffsetY, int texWidth, int texHeight, bool tiled)
    // void UIBatch::AddQuad(const Matrix3x4& transform, const IntVector2& a, const IntVector2& b, const IntVector2& c, const IntVector2& d, const IntVector2& texA, const IntVector2& texB, const IntVector2& texC, const IntVector2& texD)
    // void UIBatch::AddQuad(const Matrix3x4& transform, const IntVector2& a, const IntVector2& b, const IntVector2& c, const IntVector2& d, const IntVector2& texA, const IntVector2& texB, const IntVector2& texC, const IntVector2& texD, const Color& colA, const Color& colB, const Color& colC, const Color& colD)
    // bool UIBatch::Merge(const UIBatch& batch)
    // unsigned UIBatch::GetInterpolatedColor(float x, float y)
}

// class UIComponent | File: ../UI/UIComponent.h
void CollectMembers_UIComponent(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)

    // UIElement* UIComponent::GetRoot() const
    // Material* UIComponent::GetMaterial() const
    // Texture2D* UIComponent::GetTexture() const
    // void UIComponent::SetViewportIndex(unsigned index)
}

// class UIElement | File: ../UI/UIElement.h
void CollectMembers_UIElement(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Animatable(methods);

    // -bool Animatable::LoadXML(const XMLElement& source) override
    // -bool Animatable::SaveXML(XMLElement& dest) const override
    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Serializable::ApplyAttributes()

    // void UIElement::ApplyAttributes() override
    // bool UIElement::LoadXML(const XMLElement& source) override
    // virtual bool UIElement::LoadXML(const XMLElement& source, XMLFile* styleFile)
    // virtual UIElement* UIElement::LoadChildXML(const XMLElement& childElem, XMLFile* styleFile)
    // bool UIElement::SaveXML(XMLElement& dest) const override
    // virtual void UIElement::Update(float timeStep)
    // virtual bool UIElement::IsWithinScissor(const IntRect& currentScissor)
    // virtual const IntVector2& UIElement::GetScreenPosition() const
    // virtual void UIElement::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)
    // virtual void UIElement::GetDebugDrawBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)
    // virtual void UIElement::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // virtual void UIElement::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // virtual void UIElement::OnClickEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor, UIElement* beginElement)
    // virtual void UIElement::OnDoubleClick(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // virtual void UIElement::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // virtual void UIElement::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // virtual void UIElement::OnDragEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor* cursor)
    // virtual void UIElement::OnDragCancel(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags cancelButtons, Cursor* cursor)
    // virtual bool UIElement::OnDragDropTest(UIElement* source)
    // virtual bool UIElement::OnDragDropFinish(UIElement* source)
    // virtual void UIElement::OnWheel(int delta, MouseButtonFlags buttons, QualifierFlags qualifiers)
    // virtual void UIElement::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)
    // virtual void UIElement::OnTextInput(const String& text)
    // virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)
    // virtual void UIElement::OnPositionSet(const IntVector2& newPosition)
    // virtual void UIElement::OnSetEditable()
    // virtual void UIElement::OnIndentSet()
    // virtual IntVector2 UIElement::ScreenToElement(const IntVector2& screenPosition)
    // virtual IntVector2 UIElement::ElementToScreen(const IntVector2& position)
    // virtual bool UIElement::IsWheelHandler() const
    // bool UIElement::LoadXML(Deserializer& source)
    // bool UIElement::SaveXML(Serializer& dest, const String& indentation="\t") const
    // bool UIElement::FilterAttributes(XMLElement& dest) const
    // void UIElement::SetName(const String& name)
    // void UIElement::SetPosition(const IntVector2& position)
    // void UIElement::SetPosition(int x, int y)
    // void UIElement::SetSize(const IntVector2& size)
    // void UIElement::SetSize(int width, int height)
    // void UIElement::SetWidth(int width)
    // void UIElement::SetHeight(int height)
    // void UIElement::SetMinSize(const IntVector2& minSize)
    // void UIElement::SetMinSize(int width, int height)
    // void UIElement::SetMinWidth(int width)
    // void UIElement::SetMinHeight(int height)
    // void UIElement::SetMaxSize(const IntVector2& maxSize)
    // void UIElement::SetMaxSize(int width, int height)
    // void UIElement::SetMaxWidth(int width)
    // void UIElement::SetMaxHeight(int height)
    // void UIElement::SetFixedSize(const IntVector2& size)
    // void UIElement::SetFixedSize(int width, int height)
    // void UIElement::SetFixedWidth(int width)
    // void UIElement::SetFixedHeight(int height)
    // void UIElement::SetAlignment(HorizontalAlignment hAlign, VerticalAlignment vAlign)
    // void UIElement::SetHorizontalAlignment(HorizontalAlignment align)
    // void UIElement::SetVerticalAlignment(VerticalAlignment align)
    // void UIElement::SetEnableAnchor(bool enable)
    // void UIElement::SetMinAnchor(const Vector2& anchor)
    // void UIElement::SetMinAnchor(float x, float y)
    // void UIElement::SetMaxAnchor(const Vector2& anchor)
    // void UIElement::SetMaxAnchor(float x, float y)
    // void UIElement::SetMinOffset(const IntVector2& offset)
    // void UIElement::SetMaxOffset(const IntVector2& offset)
    // void UIElement::SetPivot(const Vector2& pivot)
    // void UIElement::SetPivot(float x, float y)
    // void UIElement::SetClipBorder(const IntRect& rect)
    // void UIElement::SetColor(const Color& color)
    // void UIElement::SetColor(Corner corner, const Color& color)
    // void UIElement::SetPriority(int priority)
    // void UIElement::SetOpacity(float opacity)
    // void UIElement::SetBringToFront(bool enable)
    // void UIElement::SetBringToBack(bool enable)
    // void UIElement::SetClipChildren(bool enable)
    // void UIElement::SetSortChildren(bool enable)
    // void UIElement::SetUseDerivedOpacity(bool enable)
    // void UIElement::SetEnabled(bool enable)
    // void UIElement::SetDeepEnabled(bool enable)
    // void UIElement::ResetDeepEnabled()
    // void UIElement::SetEnabledRecursive(bool enable)
    // void UIElement::SetEditable(bool enable)
    // void UIElement::SetFocus(bool enable)
    // void UIElement::SetSelected(bool enable)
    // void UIElement::SetVisible(bool enable)
    // void UIElement::SetFocusMode(FocusMode mode)
    // void UIElement::SetDragDropMode(DragAndDropModeFlags mode)
    // bool UIElement::SetStyle(const String& styleName, XMLFile* file=nullptr)
    // bool UIElement::SetStyle(const XMLElement& element)
    // bool UIElement::SetStyleAuto(XMLFile* file=nullptr)
    // void UIElement::SetDefaultStyle(XMLFile* style)
    // void UIElement::SetLayout(LayoutMode mode, int spacing=0, const IntRect& border=IntRect::ZERO)
    // void UIElement::SetLayoutMode(LayoutMode mode)
    // void UIElement::SetLayoutSpacing(int spacing)
    // void UIElement::SetLayoutBorder(const IntRect& border)
    // void UIElement::SetLayoutFlexScale(const Vector2& scale)
    // void UIElement::SetIndent(int indent)
    // void UIElement::SetIndentSpacing(int indentSpacing)
    // void UIElement::UpdateLayout()
    // void UIElement::DisableLayoutUpdate()
    // void UIElement::EnableLayoutUpdate()
    // void UIElement::BringToFront()
    // UIElement* UIElement::CreateChild(StringHash type, const String& name=String::EMPTY, unsigned index=M_MAX_UNSIGNED)
    // void UIElement::AddChild(UIElement* element)
    // void UIElement::InsertChild(unsigned index, UIElement* element)
    // void UIElement::RemoveChild(UIElement* element, unsigned index=0)
    // void UIElement::RemoveChildAtIndex(unsigned index)
    // void UIElement::RemoveAllChildren()
    // void UIElement::Remove()
    // unsigned UIElement::FindChild(UIElement* element) const
    // void UIElement::SetParent(UIElement* parent, unsigned index=M_MAX_UNSIGNED)
    // void UIElement::SetVar(StringHash key, const Variant& value)
    // void UIElement::SetInternal(bool enable)
    // void UIElement::SetTraversalMode(TraversalMode traversalMode)
    // void UIElement::SetElementEventSender(bool flag)
    // void UIElement::SetTags(const StringVector& tags)
    // void UIElement::AddTag(const String& tag)
    // void UIElement::AddTags(const String& tags, char separator=';')
    // void UIElement::AddTags(const StringVector& tags)
    // bool UIElement::RemoveTag(const String& tag)
    // void UIElement::RemoveAllTags()
    // template<class T> T* UIElement::CreateChild(const String& name=String::EMPTY, unsigned index=M_MAX_UNSIGNED)
    // template<class T> T* UIElement::GetChildStaticCast(unsigned index) const
    // template<class T> T* UIElement::GetChildStaticCast(const String& name, bool recursive=false) const
    // template<class T> T* UIElement::GetChildStaticCast(const StringHash& key, const Variant& value=Variant::EMPTY, bool recursive=false) const
    // template<class T> T* UIElement::GetChildDynamicCast(unsigned index) const
    // template<class T> T* UIElement::GetChildDynamicCast(const String& name, bool recursive=false) const
    // template<class T> T* UIElement::GetChildDynamicCast(const StringHash& key, const Variant& value=Variant::EMPTY, bool recursive=false) const
    // const String& UIElement::GetName() const
    // const IntVector2& UIElement::GetPosition() const
    // const IntVector2& UIElement::GetSize() const
    // int UIElement::GetWidth() const
    // int UIElement::GetHeight() const
    // const IntVector2& UIElement::GetMinSize() const
    // int UIElement::GetMinWidth() const
    // int UIElement::GetMinHeight() const
    // const IntVector2& UIElement::GetMaxSize() const
    // int UIElement::GetMaxWidth() const
    // int UIElement::GetMaxHeight() const
    // bool UIElement::IsFixedSize() const
    // bool UIElement::IsFixedWidth() const
    // bool UIElement::IsFixedHeight() const
    // const IntVector2& UIElement::GetChildOffset() const
    // HorizontalAlignment UIElement::GetHorizontalAlignment() const
    // VerticalAlignment UIElement::GetVerticalAlignment() const
    // bool UIElement::GetEnableAnchor() const
    // const Vector2& UIElement::GetMinAnchor() const
    // const Vector2& UIElement::GetMaxAnchor() const
    // const IntVector2& UIElement::GetMinOffset() const
    // const IntVector2& UIElement::GetMaxOffset() const
    // const Vector2& UIElement::GetPivot() const
    // const IntRect& UIElement::GetClipBorder() const
    // const Color& UIElement::GetColor(Corner corner) const
    // int UIElement::GetPriority() const
    // float UIElement::GetOpacity() const
    // float UIElement::GetDerivedOpacity() const
    // bool UIElement::GetBringToFront() const
    // bool UIElement::GetBringToBack() const
    // bool UIElement::GetClipChildren() const
    // bool UIElement::GetSortChildren() const
    // bool UIElement::GetUseDerivedOpacity() const
    // bool UIElement::HasFocus() const
    // bool UIElement::IsChildOf(UIElement* element) const
    // bool UIElement::IsEnabled() const
    // bool UIElement::IsEnabledSelf() const
    // bool UIElement::IsEditable() const
    // bool UIElement::IsSelected() const
    // bool UIElement::IsVisible() const
    // bool UIElement::IsVisibleEffective() const
    // bool UIElement::IsHovering() const
    // bool UIElement::IsInternal() const
    // bool UIElement::HasColorGradient() const
    // FocusMode UIElement::GetFocusMode() const
    // DragAndDropModeFlags UIElement::GetDragDropMode() const
    // const String& UIElement::GetAppliedStyle() const
    // XMLFile* UIElement::GetDefaultStyle(bool recursiveUp=true) const
    // LayoutMode UIElement::GetLayoutMode() const
    // int UIElement::GetLayoutSpacing() const
    // const IntRect& UIElement::GetLayoutBorder() const
    // const Vector2& UIElement::GetLayoutFlexScale() const
    // unsigned UIElement::GetNumChildren(bool recursive=false) const
    // UIElement* UIElement::GetChild(unsigned index) const
    // UIElement* UIElement::GetChild(const String& name, bool recursive=false) const
    // UIElement* UIElement::GetChild(const StringHash& key, const Variant& value=Variant::EMPTY, bool recursive=false) const
    // const Vector<SharedPtr<UIElement>>& UIElement::GetChildren() const
    // void UIElement::GetChildren(PODVector<UIElement*>& dest, bool recursive=false) const
    // PODVector<UIElement*> UIElement::GetChildren(bool recursive) const
    // UIElement* UIElement::GetParent() const
    // UIElement* UIElement::GetRoot() const
    // const Color& UIElement::GetDerivedColor() const
    // const Variant& UIElement::GetVar(const StringHash& key) const
    // const VariantMap& UIElement::GetVars() const
    // bool UIElement::HasTag(const String& tag) const
    // const StringVector& UIElement::GetTags() const
    // void UIElement::GetChildrenWithTag(PODVector<UIElement*>& dest, const String& tag, bool recursive=false) const
    // PODVector<UIElement*> UIElement::GetChildrenWithTag(const String& tag, bool recursive=false) const
    // MouseButtonFlags UIElement::GetDragButtonCombo() const
    // unsigned UIElement::GetDragButtonCount() const
    // bool UIElement::IsInside(IntVector2 position, bool isScreen)
    // bool UIElement::IsInsideCombined(IntVector2 position, bool isScreen)
    // IntRect UIElement::GetCombinedScreenRect()
    // void UIElement::SortChildren()
    // int UIElement::GetLayoutElementMaxSize() const
    // int UIElement::GetIndent() const
    // int UIElement::GetIndentSpacing() const
    // int UIElement::GetIndentWidth() const
    // void UIElement::SetChildOffset(const IntVector2& offset)
    // void UIElement::SetHovering(bool enable)
    // void UIElement::AdjustScissor(IntRect& currentScissor)
    // void UIElement::GetBatchesWithOffset(IntVector2& offset, PODVector<UIBatch>& batches, PODVector<float>& vertexData, IntRect currentScissor)
    // const Color& UIElement::GetColorAttr() const
    // TraversalMode UIElement::GetTraversalMode() const
    // bool UIElement::IsElementEventSender() const
    // UIElement* UIElement::GetElementEventSender() const
    // IntVector2 UIElement::GetEffectiveMinSize() const
    // void UIElement::SetRenderTexture(Texture2D* texture)
}

// class UISelectable | File: ../UI/UISelectable.h
void CollectMembers_UISelectable(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_UIElement(methods);

    // -explicit UIElement::UIElement(Context* context)
    // -static void UIElement::RegisterObject(Context* context)
    // -virtual void UIElement::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)

    // UISelectable::URHO3D_OBJECT(UISelectable, UIElement)
    // void UISelectable::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // void UISelectable::SetSelectionColor(const Color& color)
    // void UISelectable::SetHoverColor(const Color& color)
    // const Color& UISelectable::GetSelectionColor() const
    // const Color& UISelectable::GetHoverColor() const
}

// class UnknownComponent | File: ../Scene/UnknownComponent.h
void CollectMembers_UnknownComponent(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -bool Animatable::LoadJSON(const JSONValue& source) override
    // -bool Animatable::LoadXML(const XMLElement& source) override
    // -bool Component::Save(Serializer& dest) const override
    // -bool Component::SaveJSON(JSONValue& dest) const override
    // -bool Component::SaveXML(XMLElement& dest) const override
    // -static void Animatable::RegisterObject(Context* context)
    // -virtual StringHash Object::GetType() const =0
    // -virtual bool Serializable::Load(Deserializer& source)
    // -virtual const String& Object::GetTypeName() const =0
    // -virtual const Vector<AttributeInfo>* Serializable::GetAttributes() const

    // StringHash UnknownComponent::GetType() const override
    // const String& UnknownComponent::GetTypeName() const override
    // const Vector<AttributeInfo>* UnknownComponent::GetAttributes() const override
    // bool UnknownComponent::Load(Deserializer& source) override
    // bool UnknownComponent::LoadXML(const XMLElement& source) override
    // bool UnknownComponent::LoadJSON(const JSONValue& source) override
    // bool UnknownComponent::Save(Serializer& dest) const override
    // bool UnknownComponent::SaveXML(XMLElement& dest) const override
    // bool UnknownComponent::SaveJSON(JSONValue& dest) const override
    // void UnknownComponent::SetTypeName(const String& typeName)
    // void UnknownComponent::SetType(StringHash typeHash)
    // const Vector<String>& UnknownComponent::GetXMLAttributes() const
    // const PODVector<unsigned char>& UnknownComponent::GetBinaryAttributes() const
    // bool UnknownComponent::GetUseXML() const
}

// struct VAnimEventFrame | File: ../Scene/ValueAnimation.h
void CollectMembers_VAnimEventFrame(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct VAnimKeyFrame | File: ../Scene/ValueAnimation.h
void CollectMembers_VAnimKeyFrame(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ValueAnimation | File: ../Scene/ValueAnimation.h
void CollectMembers_ValueAnimation(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const

    // bool ValueAnimation::BeginLoad(Deserializer& source) override
    // bool ValueAnimation::Save(Serializer& dest) const override
    // bool ValueAnimation::LoadXML(const XMLElement& source)
    // bool ValueAnimation::SaveXML(XMLElement& dest) const
    // bool ValueAnimation::LoadJSON(const JSONValue& source)
    // bool ValueAnimation::SaveJSON(JSONValue& dest) const
    // void ValueAnimation::SetOwner(void* owner)
    // void ValueAnimation::SetInterpolationMethod(InterpMethod method)
    // void ValueAnimation::SetSplineTension(float tension)
    // void ValueAnimation::SetValueType(VariantType valueType)
    // bool ValueAnimation::SetKeyFrame(float time, const Variant& value)
    // void ValueAnimation::SetEventFrame(float time, const StringHash& eventType, const VariantMap& eventData=VariantMap())
    // bool ValueAnimation::IsValid() const
    // void* ValueAnimation::GetOwner() const
    // InterpMethod ValueAnimation::GetInterpolationMethod() const
    // float ValueAnimation::GetSplineTension() const
    // VariantType ValueAnimation::GetValueType() const
    // float ValueAnimation::GetBeginTime() const
    // float ValueAnimation::GetEndTime() const
    // Variant ValueAnimation::GetAnimationValue(float scaledTime) const
    // const Vector<VAnimKeyFrame>& ValueAnimation::GetKeyFrames() const
    // bool ValueAnimation::HasEventFrames() const
    // void ValueAnimation::GetEventFrames(float beginTime, float endTime, PODVector<const VAnimEventFrame*>& eventFrames) const
}

// class ValueAnimationInfo | File: ../Scene/ValueAnimationInfo.h
void CollectMembers_ValueAnimationInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // bool ValueAnimationInfo::Update(float timeStep)
    // bool ValueAnimationInfo::SetTime(float time)
    // void ValueAnimationInfo::SetWrapMode(WrapMode wrapMode)
    // void ValueAnimationInfo::SetSpeed(float speed)
    // Object* ValueAnimationInfo::GetTarget() const
    // ValueAnimation* ValueAnimationInfo::GetAnimation() const
    // WrapMode ValueAnimationInfo::GetWrapMode() const
    // float ValueAnimationInfo::GetTime() const
    // float ValueAnimationInfo::GetSpeed() const
}

// class Variant | File: ../Core/Variant.h
void CollectMembers_Variant(Vector<RegisterObjectMethodArgs>& methods)
{
    // void Variant::Clear()
    // Variant& Variant::operator=(const Variant& rhs)
    // Variant& Variant::operator=(int rhs)
    // Variant& Variant::operator=(long long rhs)
    // Variant& Variant::operator=(unsigned long long rhs)
    // Variant& Variant::operator=(unsigned rhs)
    // Variant& Variant::operator=(const StringHash& rhs)
    // Variant& Variant::operator=(bool rhs)
    // Variant& Variant::operator=(float rhs)
    // Variant& Variant::operator=(double rhs)
    // Variant& Variant::operator=(const Vector2& rhs)
    // Variant& Variant::operator=(const Vector3& rhs)
    // Variant& Variant::operator=(const Vector4& rhs)
    // Variant& Variant::operator=(const Quaternion& rhs)
    // Variant& Variant::operator=(const Color& rhs)
    // Variant& Variant::operator=(const String& rhs)
    // Variant& Variant::operator=(const char* rhs)
    // Variant& Variant::operator=(const PODVector<unsigned char>& rhs)
    // Variant& Variant::operator=(const VectorBuffer& rhs)
    // Variant& Variant::operator=(void* rhs)
    // Variant& Variant::operator=(const ResourceRef& rhs)
    // Variant& Variant::operator=(const ResourceRefList& rhs)
    // Variant& Variant::operator=(const VariantVector& rhs)
    // Variant& Variant::operator=(const StringVector& rhs)
    // Variant& Variant::operator=(const VariantMap& rhs)
    // Variant& Variant::operator=(const Rect& rhs)
    // Variant& Variant::operator=(const IntRect& rhs)
    // Variant& Variant::operator=(const IntVector2& rhs)
    // Variant& Variant::operator=(const IntVector3& rhs)
    // Variant& Variant::operator=(RefCounted* rhs)
    // Variant& Variant::operator=(const Matrix3& rhs)
    // Variant& Variant::operator=(const Matrix3x4& rhs)
    // Variant& Variant::operator=(const Matrix4& rhs)
    // template<class T> Variant& Variant::operator=(const CustomVariantValueImpl<T>& value)
    // bool Variant::operator==(const Variant& rhs) const
    // bool Variant::operator==(int rhs) const
    // bool Variant::operator==(unsigned rhs) const
    // bool Variant::operator==(long long rhs) const
    // bool Variant::operator==(unsigned long long rhs) const
    // bool Variant::operator==(bool rhs) const
    // bool Variant::operator==(float rhs) const
    // bool Variant::operator==(double rhs) const
    // bool Variant::operator==(const Vector2& rhs) const
    // bool Variant::operator==(const Vector3& rhs) const
    // bool Variant::operator==(const Vector4& rhs) const
    // bool Variant::operator==(const Quaternion& rhs) const
    // bool Variant::operator==(const Color& rhs) const
    // bool Variant::operator==(const String& rhs) const
    // bool Variant::operator==(const PODVector<unsigned char>& rhs) const
    // bool Variant::operator==(const VectorBuffer& rhs) const
    // bool Variant::operator==(void* rhs) const
    // bool Variant::operator==(const ResourceRef& rhs) const
    // bool Variant::operator==(const ResourceRefList& rhs) const
    // bool Variant::operator==(const VariantVector& rhs) const
    // bool Variant::operator==(const StringVector& rhs) const
    // bool Variant::operator==(const VariantMap& rhs) const
    // bool Variant::operator==(const Rect& rhs) const
    // bool Variant::operator==(const IntRect& rhs) const
    // bool Variant::operator==(const IntVector2& rhs) const
    // bool Variant::operator==(const IntVector3& rhs) const
    // bool Variant::operator==(const StringHash& rhs) const
    // bool Variant::operator==(RefCounted* rhs) const
    // bool Variant::operator==(const Matrix3& rhs) const
    // bool Variant::operator==(const Matrix3x4& rhs) const
    // bool Variant::operator==(const Matrix4& rhs) const
    // bool Variant::operator!=(const Variant& rhs) const
    // bool Variant::operator!=(int rhs) const
    // bool Variant::operator!=(unsigned rhs) const
    // bool Variant::operator!=(long long rhs) const
    // bool Variant::operator!=(unsigned long long rhs) const
    // bool Variant::operator!=(bool rhs) const
    // bool Variant::operator!=(float rhs) const
    // bool Variant::operator!=(double rhs) const
    // bool Variant::operator!=(const Vector2& rhs) const
    // bool Variant::operator!=(const Vector3& rhs) const
    // bool Variant::operator!=(const Vector4& rhs) const
    // bool Variant::operator!=(const Quaternion& rhs) const
    // bool Variant::operator!=(const String& rhs) const
    // bool Variant::operator!=(const PODVector<unsigned char>& rhs) const
    // bool Variant::operator!=(const VectorBuffer& rhs) const
    // bool Variant::operator!=(void* rhs) const
    // bool Variant::operator!=(const ResourceRef& rhs) const
    // bool Variant::operator!=(const ResourceRefList& rhs) const
    // bool Variant::operator!=(const VariantVector& rhs) const
    // bool Variant::operator!=(const StringVector& rhs) const
    // bool Variant::operator!=(const VariantMap& rhs) const
    // bool Variant::operator!=(const Rect& rhs) const
    // bool Variant::operator!=(const IntRect& rhs) const
    // bool Variant::operator!=(const IntVector2& rhs) const
    // bool Variant::operator!=(const IntVector3& rhs) const
    // bool Variant::operator!=(const StringHash& rhs) const
    // bool Variant::operator!=(RefCounted* rhs) const
    // bool Variant::operator!=(const Matrix3& rhs) const
    // bool Variant::operator!=(const Matrix3x4& rhs) const
    // bool Variant::operator!=(const Matrix4& rhs) const
    // void Variant::FromString(const String& type, const String& value)
    // void Variant::FromString(const char* type, const char* value)
    // void Variant::FromString(VariantType type, const String& value)
    // void Variant::FromString(VariantType type, const char* value)
    // void Variant::SetBuffer(const void* data, unsigned size)
    // void Variant::SetCustomVariantValue(const CustomVariantValue& value)
    // template<class T> void Variant::SetCustom(const T& value)
    // int Variant::GetInt() const
    // long long Variant::GetInt64() const
    // unsigned long long Variant::GetUInt64() const
    // unsigned Variant::GetUInt() const
    // StringHash Variant::GetStringHash() const
    // bool Variant::GetBool() const
    // float Variant::GetFloat() const
    // double Variant::GetDouble() const
    // const Vector2& Variant::GetVector2() const
    // const Vector3& Variant::GetVector3() const
    // const Vector4& Variant::GetVector4() const
    // const Quaternion& Variant::GetQuaternion() const
    // const Color& Variant::GetColor() const
    // const String& Variant::GetString() const
    // const PODVector<unsigned char>& Variant::GetBuffer() const
    // VectorBuffer Variant::GetVectorBuffer() const
    // void* Variant::GetVoidPtr() const
    // const ResourceRef& Variant::GetResourceRef() const
    // const ResourceRefList& Variant::GetResourceRefList() const
    // const VariantVector& Variant::GetVariantVector() const
    // const StringVector& Variant::GetStringVector() const
    // const VariantMap& Variant::GetVariantMap() const
    // const Rect& Variant::GetRect() const
    // const IntRect& Variant::GetIntRect() const
    // const IntVector2& Variant::GetIntVector2() const
    // const IntVector3& Variant::GetIntVector3() const
    // RefCounted* Variant::GetPtr() const
    // const Matrix3& Variant::GetMatrix3() const
    // const Matrix3x4& Variant::GetMatrix3x4() const
    // const Matrix4& Variant::GetMatrix4() const
    // CustomVariantValue* Variant::GetCustomVariantValuePtr()
    // const CustomVariantValue* Variant::GetCustomVariantValuePtr() const
    // template<class T> T Variant::GetCustom() const
    // template<class T> bool Variant::IsCustomType() const
    // VariantType Variant::GetType() const
    // String Variant::GetTypeName() const
    // String Variant::ToString() const
    // bool Variant::IsZero() const
    // bool Variant::IsEmpty() const
    // bool Variant::IsCustom() const
    // template<class T> T Variant::Get() const
    // PODVector<unsigned char>* Variant::GetBufferPtr()
    // VariantVector* Variant::GetVariantVectorPtr()
    // StringVector* Variant::GetStringVectorPtr()
    // VariantMap* Variant::GetVariantMapPtr()
    // template<class T> T* Variant::GetCustomPtr()
    // template<> int Variant::Get() const
    // template<> unsigned Variant::Get() const
    // template<> long long Variant::Get() const
    // template<> unsigned long long Variant::Get() const
    // template<> StringHash Variant::Get() const
    // template<> bool Variant::Get() const
    // template<> float Variant::Get() const
    // template<> double Variant::Get() const
    // template<> const Vector2& Variant::Get() const
    // template<> const Vector3& Variant::Get() const
    // template<> const Vector4& Variant::Get() const
    // template<> const Quaternion& Variant::Get() const
    // template<> const Color& Variant::Get() const
    // template<> const String& Variant::Get() const
    // template<> const Rect& Variant::Get() const
    // template<> const IntRect& Variant::Get() const
    // template<> const IntVector2& Variant::Get() const
    // template<> const IntVector3& Variant::Get() const
    // template<> const PODVector<unsigned char>& Variant::Get() const
    // template<> void* Variant::Get() const
    // template<> RefCounted* Variant::Get() const
    // template<> const Matrix3& Variant::Get() const
    // template<> const Matrix3x4& Variant::Get() const
    // template<> const Matrix4& Variant::Get() const
    // template<> ResourceRef Variant::Get() const
    // template<> ResourceRefList Variant::Get() const
    // template<> VariantVector Variant::Get() const
    // template<> StringVector Variant::Get() const
    // template<> VariantMap Variant::Get() const
    // template<> Vector2 Variant::Get() const
    // template<> Vector3 Variant::Get() const
    // template<> Vector4 Variant::Get() const
    // template<> Quaternion Variant::Get() const
    // template<> Color Variant::Get() const
    // template<> String Variant::Get() const
    // template<> Rect Variant::Get() const
    // template<> IntRect Variant::Get() const
    // template<> IntVector2 Variant::Get() const
    // template<> IntVector3 Variant::Get() const
    // template<> PODVector<unsigned char> Variant::Get() const
    // template<> Matrix3 Variant::Get() const
    // template<> Matrix3x4 Variant::Get() const
    // template<> Matrix4 Variant::Get() const
}

// class Vector2 | File: ../Math/Vector2.h
void CollectMembers_Vector2(Vector<RegisterObjectMethodArgs>& methods)
{
    // Vector2& Vector2::operator=(const Vector2& rhs) noexcept=default
    // bool Vector2::operator==(const Vector2& rhs) const
    // bool Vector2::operator!=(const Vector2& rhs) const
    // Vector2 Vector2::operator+(const Vector2& rhs) const
    // Vector2 Vector2::operator-() const
    // Vector2 Vector2::operator-(const Vector2& rhs) const
    // Vector2 Vector2::operator*(float rhs) const
    // Vector2 Vector2::operator*(const Vector2& rhs) const
    // Vector2 Vector2::operator/(float rhs) const
    // Vector2 Vector2::operator/(const Vector2& rhs) const
    // Vector2& Vector2::operator+=(const Vector2& rhs)
    // Vector2& Vector2::operator-=(const Vector2& rhs)
    // Vector2& Vector2::operator*=(float rhs)
    // Vector2& Vector2::operator*=(const Vector2& rhs)
    // Vector2& Vector2::operator/=(float rhs)
    // Vector2& Vector2::operator/=(const Vector2& rhs)
    // void Vector2::Normalize()
    // float Vector2::Length() const
    // float Vector2::LengthSquared() const
    // float Vector2::DotProduct(const Vector2& rhs) const
    // float Vector2::AbsDotProduct(const Vector2& rhs) const
    // float Vector2::ProjectOntoAxis(const Vector2& axis) const
    // float Vector2::Angle(const Vector2& rhs) const
    // Vector2 Vector2::Abs() const
    // Vector2 Vector2::Lerp(const Vector2& rhs, float t) const
    // bool Vector2::Equals(const Vector2& rhs) const
    // bool Vector2::IsNaN() const
    // bool Vector2::IsInf() const
    // Vector2 Vector2::Normalized() const
    // Vector2 Vector2::NormalizedOrDefault(const Vector2& defaultValue=Vector2::ZERO, float eps=M_LARGE_EPSILON) const
    // Vector2 Vector2::ReNormalized(float minLength, float maxLength, const Vector2& defaultValue=Vector2::ZERO, float eps=M_LARGE_EPSILON) const
    // const float* Vector2::Data() const
    // String Vector2::ToString() const
}

// class Vector3 | File: ../Math/Vector3.h
void CollectMembers_Vector3(Vector<RegisterObjectMethodArgs>& methods)
{
    // Vector3& Vector3::operator=(const Vector3& rhs) noexcept=default
    // bool Vector3::operator==(const Vector3& rhs) const
    // bool Vector3::operator!=(const Vector3& rhs) const
    // Vector3 Vector3::operator+(const Vector3& rhs) const
    // Vector3 Vector3::operator-() const
    // Vector3 Vector3::operator-(const Vector3& rhs) const
    // Vector3 Vector3::operator*(float rhs) const
    // Vector3 Vector3::operator*(const Vector3& rhs) const
    // Vector3 Vector3::operator/(float rhs) const
    // Vector3 Vector3::operator/(const Vector3& rhs) const
    // Vector3& Vector3::operator+=(const Vector3& rhs)
    // Vector3& Vector3::operator-=(const Vector3& rhs)
    // Vector3& Vector3::operator*=(float rhs)
    // Vector3& Vector3::operator*=(const Vector3& rhs)
    // Vector3& Vector3::operator/=(float rhs)
    // Vector3& Vector3::operator/=(const Vector3& rhs)
    // void Vector3::Normalize()
    // float Vector3::Length() const
    // float Vector3::LengthSquared() const
    // float Vector3::DotProduct(const Vector3& rhs) const
    // float Vector3::AbsDotProduct(const Vector3& rhs) const
    // float Vector3::ProjectOntoAxis(const Vector3& axis) const
    // Vector3 Vector3::ProjectOntoPlane(const Vector3& origin, const Vector3& normal) const
    // Vector3 Vector3::ProjectOntoLine(const Vector3& from, const Vector3& to, bool clamped=false) const
    // float Vector3::DistanceToPoint(const Vector3& point) const
    // float Vector3::DistanceToPlane(const Vector3& origin, const Vector3& normal) const
    // Vector3 Vector3::Orthogonalize(const Vector3& axis) const
    // Vector3 Vector3::CrossProduct(const Vector3& rhs) const
    // Vector3 Vector3::Abs() const
    // Vector3 Vector3::Lerp(const Vector3& rhs, float t) const
    // bool Vector3::Equals(const Vector3& rhs) const
    // float Vector3::Angle(const Vector3& rhs) const
    // bool Vector3::IsNaN() const
    // bool Vector3::IsInf() const
    // Vector3 Vector3::Normalized() const
    // Vector3 Vector3::NormalizedOrDefault(const Vector3& defaultValue=Vector3::ZERO, float eps=M_LARGE_EPSILON) const
    // Vector3 Vector3::ReNormalized(float minLength, float maxLength, const Vector3& defaultValue=Vector3::ZERO, float eps=M_LARGE_EPSILON) const
    // const float* Vector3::Data() const
    // String Vector3::ToString() const
    // unsigned Vector3::ToHash() const
}

// class Vector4 | File: ../Math/Vector4.h
void CollectMembers_Vector4(Vector<RegisterObjectMethodArgs>& methods)
{
    // Vector4& Vector4::operator=(const Vector4& rhs) noexcept=default
    // bool Vector4::operator==(const Vector4& rhs) const
    // bool Vector4::operator!=(const Vector4& rhs) const
    // Vector4 Vector4::operator+(const Vector4& rhs) const
    // Vector4 Vector4::operator-() const
    // Vector4 Vector4::operator-(const Vector4& rhs) const
    // Vector4 Vector4::operator*(float rhs) const
    // Vector4 Vector4::operator*(const Vector4& rhs) const
    // Vector4 Vector4::operator/(float rhs) const
    // Vector4 Vector4::operator/(const Vector4& rhs) const
    // Vector4& Vector4::operator+=(const Vector4& rhs)
    // Vector4& Vector4::operator-=(const Vector4& rhs)
    // Vector4& Vector4::operator*=(float rhs)
    // Vector4& Vector4::operator*=(const Vector4& rhs)
    // Vector4& Vector4::operator/=(float rhs)
    // Vector4& Vector4::operator/=(const Vector4& rhs)
    // float Vector4::operator[](unsigned index) const
    // float& Vector4::operator[](unsigned index)
    // float Vector4::DotProduct(const Vector4& rhs) const
    // float Vector4::AbsDotProduct(const Vector4& rhs) const
    // float Vector4::ProjectOntoAxis(const Vector3& axis) const
    // Vector4 Vector4::Abs() const
    // Vector4 Vector4::Lerp(const Vector4& rhs, float t) const
    // bool Vector4::Equals(const Vector4& rhs) const
    // bool Vector4::IsNaN() const
    // bool Vector4::IsInf() const
    // explicit Vector4::operator Vector2() const
    // explicit Vector4::operator Vector3() const
    // const float* Vector4::Data() const
    // String Vector4::ToString() const
    // unsigned Vector4::ToHash() const
}

// class VectorBase | File: ../Container/VectorBase.h
void CollectMembers_VectorBase(Vector<RegisterObjectMethodArgs>& methods)
{
    // void VectorBase::Swap(VectorBase& rhs)
}

// class VectorBuffer | File: ../IO/VectorBuffer.h
void CollectMembers_VectorBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_AbstractFile(methods);

    // -virtual unsigned Deserializer::Read(void* dest, unsigned size)=0
    // -virtual unsigned Deserializer::Seek(unsigned position)=0
    // -virtual unsigned Serializer::Write(const void* data, unsigned size)=0

    // unsigned VectorBuffer::Read(void* dest, unsigned size) override
    // unsigned VectorBuffer::Seek(unsigned position) override
    // unsigned VectorBuffer::Write(const void* data, unsigned size) override
    // void VectorBuffer::SetData(const PODVector<unsigned char>& data)
    // void VectorBuffer::SetData(const void* data, unsigned size)
    // void VectorBuffer::SetData(Deserializer& source, unsigned size)
    // void VectorBuffer::Clear()
    // void VectorBuffer::Resize(unsigned size)
    // const unsigned char* VectorBuffer::GetData() const
    // unsigned char* VectorBuffer::GetModifiableData()
    // const PODVector<unsigned char>& VectorBuffer::GetBuffer() const
}

// class VertexBuffer | File: ../Graphics/VertexBuffer.h
void CollectMembers_VertexBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
    CollectMembers_GPUObject(methods);

    // -virtual void GPUObject::OnDeviceLost()
    // -virtual void GPUObject::OnDeviceReset()
    // -virtual void GPUObject::Release()

    // void VertexBuffer::OnDeviceLost() override
    // void VertexBuffer::OnDeviceReset() override
    // void VertexBuffer::Release() override
    // void VertexBuffer::SetShadowed(bool enable)
    // bool VertexBuffer::SetSize(unsigned vertexCount, const PODVector<VertexElement>& elements, bool dynamic=false)
    // bool VertexBuffer::SetSize(unsigned vertexCount, unsigned elementMask, bool dynamic=false)
    // bool VertexBuffer::SetData(const void* data)
    // bool VertexBuffer::SetDataRange(const void* data, unsigned start, unsigned count, bool discard=false)
    // void* VertexBuffer::Lock(unsigned start, unsigned count, bool discard=false)
    // void VertexBuffer::Unlock()
    // bool VertexBuffer::IsShadowed() const
    // bool VertexBuffer::IsDynamic() const
    // bool VertexBuffer::IsLocked() const
    // unsigned VertexBuffer::GetVertexCount() const
    // unsigned VertexBuffer::GetVertexSize() const
    // const PODVector<VertexElement>& VertexBuffer::GetElements() const
    // const VertexElement* VertexBuffer::GetElement(VertexElementSemantic semantic, unsigned char index=0) const
    // const VertexElement* VertexBuffer::GetElement(VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) const
    // bool VertexBuffer::HasElement(VertexElementSemantic semantic, unsigned char index=0) const
    // bool VertexBuffer::HasElement(VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) const
    // unsigned VertexBuffer::GetElementOffset(VertexElementSemantic semantic, unsigned char index=0) const
    // unsigned VertexBuffer::GetElementOffset(VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) const
    // VertexMaskFlags VertexBuffer::GetElementMask() const
    // unsigned char* VertexBuffer::GetShadowData() const
    // SharedArrayPtr<unsigned char> VertexBuffer::GetShadowDataShared() const
    // unsigned long long VertexBuffer::GetBufferHash(unsigned streamIndex)
}

// struct VertexBufferDesc | File: ../Graphics/Model.h
void CollectMembers_VertexBufferDesc(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct VertexBufferMorph | File: ../Graphics/Model.h
void CollectMembers_VertexBufferMorph(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct VertexElement | File: ../Graphics/GraphicsDefs.h
void CollectMembers_VertexElement(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool VertexElement::operator==(const VertexElement& rhs) const
    // bool VertexElement::operator!=(const VertexElement& rhs) const
}

// class View | File: ../Graphics/View.h
void CollectMembers_View(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // bool View::Define(RenderSurface* renderTarget, Viewport* viewport)
    // void View::Update(const FrameInfo& frame)
    // void View::Render()
    // Graphics* View::GetGraphics() const
    // Renderer* View::GetRenderer() const
    // Scene* View::GetScene() const
    // Octree* View::GetOctree() const
    // Camera* View::GetCamera() const
    // Camera* View::GetCullCamera() const
    // const FrameInfo& View::GetFrameInfo() const
    // RenderSurface* View::GetRenderTarget() const
    // bool View::GetDrawDebug() const
    // const IntRect& View::GetViewRect() const
    // const IntVector2& View::GetViewSize() const
    // const PODVector<Drawable*>& View::GetGeometries() const
    // const PODVector<Drawable*>& View::GetOccluders() const
    // const PODVector<Light*>& View::GetLights() const
    // const Vector<LightBatchQueue>& View::GetLightQueues() const
    // OcclusionBuffer* View::GetOcclusionBuffer() const
    // unsigned View::GetNumActiveOccluders() const
    // View* View::GetSourceView() const
    // void View::SetGlobalShaderParameters()
    // void View::SetCameraShaderParameters(Camera* camera)
    // void View::SetCommandShaderParameters(const RenderPathCommand& command)
    // void View::SetGBufferShaderParameters(const IntVector2& texSize, const IntRect& viewRect)
    // void View::DrawFullscreenQuad(bool setIdentityProjection=false)
    // Texture* View::FindNamedTexture(const String& name, bool isRenderTarget, bool isVolumeMap=false)
}

// class View3D | File: ../UI/View3D.h
void CollectMembers_View3D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Window(methods);

    // -static void Window::RegisterObject(Context* context)
    // -virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)

    // void View3D::OnResize(const IntVector2& newSize, const IntVector2& delta) override
    // void View3D::SetView(Scene* scene, Camera* camera, bool ownScene=true)
    // void View3D::SetFormat(unsigned format)
    // void View3D::SetAutoUpdate(bool enable)
    // void View3D::QueueUpdate()
    // unsigned View3D::GetFormat() const
    // bool View3D::GetAutoUpdate() const
    // Scene* View3D::GetScene() const
    // Node* View3D::GetCameraNode() const
    // Texture2D* View3D::GetRenderTexture() const
    // Texture2D* View3D::GetDepthTexture() const
    // Viewport* View3D::GetViewport() const
}

// class Viewport | File: ../Graphics/Viewport.h
void CollectMembers_Viewport(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Viewport::SetScene(Scene* scene)
    // void Viewport::SetCamera(Camera* camera)
    // void Viewport::SetRect(const IntRect& rect)
    // void Viewport::SetRenderPath(RenderPath* renderPath)
    // bool Viewport::SetRenderPath(XMLFile* file)
    // void Viewport::SetDrawDebug(bool enable)
    // void Viewport::SetCullCamera(Camera* camera)
    // Scene* Viewport::GetScene() const
    // Camera* Viewport::GetCamera() const
    // View* Viewport::GetView() const
    // const IntRect& Viewport::GetRect() const
    // RenderPath* Viewport::GetRenderPath() const
    // bool Viewport::GetDrawDebug() const
    // Camera* Viewport::GetCullCamera() const
    // Ray Viewport::GetScreenRay(int x, int y) const
    // IntVector2 Viewport::WorldToScreenPoint(const Vector3& worldPos) const
    // Vector3 Viewport::ScreenToWorldPoint(int x, int y, float depth) const
    // void Viewport::AllocateView()
}

// class WString | File: ../Container/Str.h
void CollectMembers_WString(Vector<RegisterObjectMethodArgs>& methods)
{
    // wchar_t& WString::operator[](unsigned index)
    // const wchar_t& WString::operator[](unsigned index) const
    // wchar_t& WString::At(unsigned index)
    // const wchar_t& WString::At(unsigned index) const
    // void WString::Resize(unsigned newLength)
    // bool WString::Empty() const
    // unsigned WString::Length() const
    // const wchar_t* WString::CString() const
}

// class Window | File: ../UI/Window.h
void CollectMembers_Window(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -virtual void UIElement::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnDragCancel(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags cancelButtons, Cursor* cursor)
    // -virtual void UIElement::OnDragEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor* cursor)
    // -virtual void UIElement::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -virtual void UIElement::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)
    // -void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override

    // void Window::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // void Window::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void Window::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void Window::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override
    // void Window::OnDragEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor* cursor) override
    // void Window::OnDragCancel(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags cancelButtons, Cursor* cursor) override
    // void Window::SetMovable(bool enable)
    // void Window::SetResizable(bool enable)
    // void Window::SetFixedWidthResizing(bool enable)
    // void Window::SetFixedHeightResizing(bool enable)
    // void Window::SetResizeBorder(const IntRect& rect)
    // void Window::SetModal(bool modal)
    // void Window::SetModalShadeColor(const Color& color)
    // void Window::SetModalFrameColor(const Color& color)
    // void Window::SetModalFrameSize(const IntVector2& size)
    // void Window::SetModalAutoDismiss(bool enable)
    // bool Window::IsMovable() const
    // bool Window::IsResizable() const
    // bool Window::GetFixedWidthResizing() const
    // bool Window::GetFixedHeightResizing() const
    // const IntRect& Window::GetResizeBorder() const
    // bool Window::IsModal() const
    // const Color& Window::GetModalShadeColor() const
    // const Color& Window::GetModalFrameColor() const
    // const IntVector2& Window::GetModalFrameSize() const
    // bool Window::GetModalAutoDismiss() const
}

// struct WindowModeParams | File: ../Graphics/Graphics.h
void CollectMembers_WindowModeParams(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct WorkItem | File: ../Core/WorkQueue.h
void CollectMembers_WorkItem(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class WorkQueue | File: ../Core/WorkQueue.h
void CollectMembers_WorkQueue(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void WorkQueue::CreateThreads(unsigned numThreads)
    // SharedPtr<WorkItem> WorkQueue::GetFreeItem()
    // void WorkQueue::AddWorkItem(const SharedPtr<WorkItem>& item)
    // bool WorkQueue::RemoveWorkItem(SharedPtr<WorkItem> item)
    // unsigned WorkQueue::RemoveWorkItems(const Vector<SharedPtr<WorkItem>>& items)
    // void WorkQueue::Pause()
    // void WorkQueue::Resume()
    // void WorkQueue::Complete(unsigned priority)
    // void WorkQueue::SetTolerance(int tolerance)
    // void WorkQueue::SetNonThreadedWorkMs(int ms)
    // unsigned WorkQueue::GetNumThreads() const
    // bool WorkQueue::IsCompleted(unsigned priority) const
    // bool WorkQueue::IsCompleting() const
    // int WorkQueue::GetTolerance() const
    // int WorkQueue::GetNonThreadedWorkMs() const
}

// class XMLElement | File: ../Resource/XMLElement.h
void CollectMembers_XMLElement(Vector<RegisterObjectMethodArgs>& methods)
{
    // XMLElement& XMLElement::operator=(const XMLElement& rhs)
    // XMLElement XMLElement::CreateChild(const String& name)
    // XMLElement XMLElement::CreateChild(const char* name)
    // XMLElement XMLElement::GetOrCreateChild(const String& name)
    // XMLElement XMLElement::GetOrCreateChild(const char* name)
    // bool XMLElement::AppendChild(XMLElement element, bool asCopy=false)
    // bool XMLElement::Remove()
    // bool XMLElement::RemoveChild(const XMLElement& element)
    // bool XMLElement::RemoveChild(const String& name)
    // bool XMLElement::RemoveChild(const char* name)
    // bool XMLElement::RemoveChildren(const String& name=String::EMPTY)
    // bool XMLElement::RemoveChildren(const char* name)
    // bool XMLElement::RemoveAttribute(const String& name=String::EMPTY)
    // bool XMLElement::RemoveAttribute(const char* name)
    // XMLElement XMLElement::SelectSingle(const String& query, pugi::xpath_variable_set* variables=nullptr) const
    // XMLElement XMLElement::SelectSinglePrepared(const XPathQuery& query) const
    // XPathResultSet XMLElement::Select(const String& query, pugi::xpath_variable_set* variables=nullptr) const
    // XPathResultSet XMLElement::SelectPrepared(const XPathQuery& query) const
    // bool XMLElement::SetValue(const String& value)
    // bool XMLElement::SetValue(const char* value)
    // bool XMLElement::SetAttribute(const String& name, const String& value)
    // bool XMLElement::SetAttribute(const char* name, const char* value)
    // bool XMLElement::SetAttribute(const String& value)
    // bool XMLElement::SetAttribute(const char* value)
    // bool XMLElement::SetBool(const String& name, bool value)
    // bool XMLElement::SetBoundingBox(const BoundingBox& value)
    // bool XMLElement::SetBuffer(const String& name, const void* data, unsigned size)
    // bool XMLElement::SetBuffer(const String& name, const PODVector<unsigned char>& value)
    // bool XMLElement::SetColor(const String& name, const Color& value)
    // bool XMLElement::SetFloat(const String& name, float value)
    // bool XMLElement::SetDouble(const String& name, double value)
    // bool XMLElement::SetUInt(const String& name, unsigned value)
    // bool XMLElement::SetInt(const String& name, int value)
    // bool XMLElement::SetUInt64(const String& name, unsigned long long value)
    // bool XMLElement::SetInt64(const String& name, long long value)
    // bool XMLElement::SetIntRect(const String& name, const IntRect& value)
    // bool XMLElement::SetIntVector2(const String& name, const IntVector2& value)
    // bool XMLElement::SetIntVector3(const String& name, const IntVector3& value)
    // bool XMLElement::SetRect(const String& name, const Rect& value)
    // bool XMLElement::SetQuaternion(const String& name, const Quaternion& value)
    // bool XMLElement::SetString(const String& name, const String& value)
    // bool XMLElement::SetVariant(const Variant& value)
    // bool XMLElement::SetVariantValue(const Variant& value)
    // bool XMLElement::SetResourceRef(const ResourceRef& value)
    // bool XMLElement::SetResourceRefList(const ResourceRefList& value)
    // bool XMLElement::SetVariantVector(const VariantVector& value)
    // bool XMLElement::SetStringVector(const StringVector& value)
    // bool XMLElement::SetVariantMap(const VariantMap& value)
    // bool XMLElement::SetVector2(const String& name, const Vector2& value)
    // bool XMLElement::SetVector3(const String& name, const Vector3& value)
    // bool XMLElement::SetVector4(const String& name, const Vector4& value)
    // bool XMLElement::SetVectorVariant(const String& name, const Variant& value)
    // bool XMLElement::SetMatrix3(const String& name, const Matrix3& value)
    // bool XMLElement::SetMatrix3x4(const String& name, const Matrix3x4& value)
    // bool XMLElement::SetMatrix4(const String& name, const Matrix4& value)
    // bool XMLElement::IsNull() const
    // bool XMLElement::NotNull() const
    // explicit XMLElement::operator bool() const
    // String XMLElement::GetName() const
    // bool XMLElement::HasChild(const String& name) const
    // bool XMLElement::HasChild(const char* name) const
    // XMLElement XMLElement::GetChild(const String& name=String::EMPTY) const
    // XMLElement XMLElement::GetChild(const char* name) const
    // XMLElement XMLElement::GetNext(const String& name=String::EMPTY) const
    // XMLElement XMLElement::GetNext(const char* name) const
    // XMLElement XMLElement::GetParent() const
    // unsigned XMLElement::GetNumAttributes() const
    // bool XMLElement::HasAttribute(const String& name) const
    // bool XMLElement::HasAttribute(const char* name) const
    // String XMLElement::GetValue() const
    // String XMLElement::GetAttribute(const String& name=String::EMPTY) const
    // String XMLElement::GetAttribute(const char* name) const
    // const char* XMLElement::GetAttributeCString(const char* name) const
    // String XMLElement::GetAttributeLower(const String& name) const
    // String XMLElement::GetAttributeLower(const char* name) const
    // String XMLElement::GetAttributeUpper(const String& name) const
    // String XMLElement::GetAttributeUpper(const char* name) const
    // Vector<String> XMLElement::GetAttributeNames() const
    // bool XMLElement::GetBool(const String& name) const
    // PODVector<unsigned char> XMLElement::GetBuffer(const String& name) const
    // bool XMLElement::GetBuffer(const String& name, void* dest, unsigned size) const
    // BoundingBox XMLElement::GetBoundingBox() const
    // Color XMLElement::GetColor(const String& name) const
    // float XMLElement::GetFloat(const String& name) const
    // double XMLElement::GetDouble(const String& name) const
    // unsigned XMLElement::GetUInt(const String& name) const
    // int XMLElement::GetInt(const String& name) const
    // unsigned long long XMLElement::GetUInt64(const String& name) const
    // long long XMLElement::GetInt64(const String& name) const
    // IntRect XMLElement::GetIntRect(const String& name) const
    // IntVector2 XMLElement::GetIntVector2(const String& name) const
    // IntVector3 XMLElement::GetIntVector3(const String& name) const
    // Rect XMLElement::GetRect(const String& name) const
    // Quaternion XMLElement::GetQuaternion(const String& name) const
    // Variant XMLElement::GetVariant() const
    // Variant XMLElement::GetVariantValue(VariantType type) const
    // ResourceRef XMLElement::GetResourceRef() const
    // ResourceRefList XMLElement::GetResourceRefList() const
    // VariantVector XMLElement::GetVariantVector() const
    // StringVector XMLElement::GetStringVector() const
    // VariantMap XMLElement::GetVariantMap() const
    // Vector2 XMLElement::GetVector2(const String& name) const
    // Vector3 XMLElement::GetVector3(const String& name) const
    // Vector4 XMLElement::GetVector4(const String& name) const
    // Vector4 XMLElement::GetVector(const String& name) const
    // Variant XMLElement::GetVectorVariant(const String& name) const
    // Matrix3 XMLElement::GetMatrix3(const String& name) const
    // Matrix3x4 XMLElement::GetMatrix3x4(const String& name) const
    // Matrix4 XMLElement::GetMatrix4(const String& name) const
    // XMLFile* XMLElement::GetFile() const
    // pugi::xml_node_struct* XMLElement::GetNode() const
    // const XPathResultSet* XMLElement::GetXPathResultSet() const
    // const pugi::xpath_node* XMLElement::GetXPathNode() const
    // unsigned XMLElement::GetXPathResultIndex() const
    // XMLElement XMLElement::NextResult() const
}

// class XMLFile | File: ../Resource/XMLFile.h
void CollectMembers_XMLFile(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const

    // bool XMLFile::BeginLoad(Deserializer& source) override
    // bool XMLFile::Save(Serializer& dest) const override
    // bool XMLFile::Save(Serializer& dest, const String& indentation) const
    // bool XMLFile::FromString(const String& source)
    // XMLElement XMLFile::CreateRoot(const String& name)
    // XMLElement XMLFile::GetOrCreateRoot(const String& name)
    // XMLElement XMLFile::GetRoot(const String& name=String::EMPTY)
    // pugi::xml_document* XMLFile::GetDocument() const
    // String XMLFile::ToString(const String& indentation="\t") const
    // void XMLFile::Patch(XMLFile* patchFile)
    // void XMLFile::Patch(const XMLElement& patchElement)
}

// class XPathQuery | File: ../Resource/XMLElement.h
void CollectMembers_XPathQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // void XPathQuery::Bind()
    // bool XPathQuery::SetVariable(const String& name, bool value)
    // bool XPathQuery::SetVariable(const String& name, float value)
    // bool XPathQuery::SetVariable(const String& name, const String& value)
    // bool XPathQuery::SetVariable(const char* name, const char* value)
    // bool XPathQuery::SetVariable(const String& name, const XPathResultSet& value)
    // bool XPathQuery::SetQuery(const String& queryString, const String& variableString=String::EMPTY, bool bind=true)
    // void XPathQuery::Clear()
    // bool XPathQuery::EvaluateToBool(const XMLElement& element) const
    // float XPathQuery::EvaluateToFloat(const XMLElement& element) const
    // String XPathQuery::EvaluateToString(const XMLElement& element) const
    // XPathResultSet XPathQuery::Evaluate(const XMLElement& element) const
    // String XPathQuery::GetQuery() const
    // pugi::xpath_query* XPathQuery::GetXPathQuery() const
    // pugi::xpath_variable_set* XPathQuery::GetXPathVariableSet() const
}

// class XPathResultSet | File: ../Resource/XMLElement.h
void CollectMembers_XPathResultSet(Vector<RegisterObjectMethodArgs>& methods)
{
    // XPathResultSet& XPathResultSet::operator=(const XPathResultSet& rhs)
    // XMLElement XPathResultSet::operator[](unsigned index) const
    // XMLElement XPathResultSet::FirstResult()
    // unsigned XPathResultSet::Size() const
    // bool XPathResultSet::Empty() const
    // pugi::xpath_node_set* XPathResultSet::GetXPathNodeSet() const
}

// class Zone | File: ../Graphics/Zone.h
void CollectMembers_Zone(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override

    // void Zone::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void Zone::SetBoundingBox(const BoundingBox& box)
    // void Zone::SetAmbientColor(const Color& color)
    // void Zone::SetFogColor(const Color& color)
    // void Zone::SetFogStart(float start)
    // void Zone::SetFogEnd(float end)
    // void Zone::SetFogHeight(float height)
    // void Zone::SetFogHeightScale(float scale)
    // void Zone::SetPriority(int priority)
    // void Zone::SetHeightFog(bool enable)
    // void Zone::SetOverride(bool enable)
    // void Zone::SetAmbientGradient(bool enable)
    // void Zone::SetZoneTexture(Texture* texture)
    // const Matrix3x4& Zone::GetInverseWorldTransform() const
    // const Color& Zone::GetAmbientColor() const
    // const Color& Zone::GetAmbientStartColor()
    // const Color& Zone::GetAmbientEndColor()
    // const Color& Zone::GetFogColor() const
    // float Zone::GetFogStart() const
    // float Zone::GetFogEnd() const
    // float Zone::GetFogHeight() const
    // float Zone::GetFogHeightScale() const
    // int Zone::GetPriority() const
    // bool Zone::GetHeightFog() const
    // bool Zone::GetOverride() const
    // bool Zone::GetAmbientGradient() const
    // Texture* Zone::GetZoneTexture() const
    // bool Zone::IsInside(const Vector3& point) const
    // void Zone::SetZoneTextureAttr(const ResourceRef& value)
    // ResourceRef Zone::GetZoneTextureAttr() const
}

#ifdef URHO3D_DATABASE

// class Database | File: ../Database/Database.h
void CollectMembers_Database(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // DbConnection* Database::Connect(const String& connectionString)
    // void Database::Disconnect(DbConnection* connection)
    // bool Database::IsPooling() const
    // unsigned Database::GetPoolSize() const
    // void Database::SetPoolSize(unsigned poolSize)
}

#endif // def URHO3D_DATABASE

#ifdef URHO3D_IK

// class IKConstraint | File: ../IK/IKConstraint.h
void CollectMembers_IKConstraint(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)

    // float IKConstraint::GetStiffness() const
    // void IKConstraint::SetStiffness(float stiffness)
    // float IKConstraint::GetStretchiness() const
    // void IKConstraint::SetStretchiness(float stretchiness)
    // const Vector2& IKConstraint::GetLengthConstraints() const
    // void IKConstraint::SetLengthConstraints(const Vector2& lengthConstraints)
}

// class IKEffector | File: ../IK/IKEffector.h
void CollectMembers_IKEffector(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // bool IKEffector::GetFeature(Feature feature) const
    // void IKEffector::SetFeature(Feature feature, bool enable)
    // Node* IKEffector::GetTargetNode() const
    // void IKEffector::SetTargetNode(Node* targetNode)
    // const String& IKEffector::GetTargetName() const
    // void IKEffector::SetTargetName(const String& nodeName)
    // const Vector3& IKEffector::GetTargetPosition() const
    // void IKEffector::SetTargetPosition(const Vector3& targetPosition)
    // const Quaternion& IKEffector::GetTargetRotation() const
    // void IKEffector::SetTargetRotation(const Quaternion& targetRotation)
    // Vector3 IKEffector::GetTargetRotationEuler() const
    // void IKEffector::SetTargetRotationEuler(const Vector3& targetRotation)
    // unsigned IKEffector::GetChainLength() const
    // void IKEffector::SetChainLength(unsigned chainLength)
    // float IKEffector::GetWeight() const
    // void IKEffector::SetWeight(float weight)
    // float IKEffector::GetRotationWeight() const
    // void IKEffector::SetRotationWeight(float weight)
    // float IKEffector::GetRotationDecay() const
    // void IKEffector::SetRotationDecay(float decay)
    // void IKEffector::DrawDebugGeometry(bool depthTest)
    // void IKEffector::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // bool IKEffector::GetWEIGHT_NLERP() const
    // bool IKEffector::GetINHERIT_PARENT_ROTATION() const
    // void IKEffector::SetWEIGHT_NLERP(bool enable)
    // void IKEffector::SetINHERIT_PARENT_ROTATION(bool enable)
}

// class IKSolver | File: ../IK/IKSolver.h
void CollectMembers_IKSolver(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // Algorithm IKSolver::GetAlgorithm() const
    // void IKSolver::SetAlgorithm(Algorithm algorithm)
    // bool IKSolver::GetFeature(Feature feature) const
    // void IKSolver::SetFeature(Feature feature, bool enable)
    // unsigned IKSolver::GetMaximumIterations() const
    // void IKSolver::SetMaximumIterations(unsigned iterations)
    // float IKSolver::GetTolerance() const
    // void IKSolver::SetTolerance(float tolerance)
    // void IKSolver::RebuildChainTrees()
    // void IKSolver::RecalculateSegmentLengths()
    // void IKSolver::CalculateJointRotations()
    // void IKSolver::Solve()
    // void IKSolver::ApplyOriginalPoseToScene()
    // void IKSolver::ApplySceneToOriginalPose()
    // void IKSolver::ApplyActivePoseToScene()
    // void IKSolver::ApplySceneToActivePose()
    // void IKSolver::ApplyOriginalPoseToActivePose()
    // void IKSolver::DrawDebugGeometry(bool depthTest)
    // void IKSolver::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // bool IKSolver::GetJOINT_ROTATIONS() const
    // bool IKSolver::GetTARGET_ROTATIONS() const
    // bool IKSolver::GetUPDATE_ORIGINAL_POSE() const
    // bool IKSolver::GetUPDATE_ACTIVE_POSE() const
    // bool IKSolver::GetUSE_ORIGINAL_POSE() const
    // bool IKSolver::GetCONSTRAINTS() const
    // bool IKSolver::GetAUTO_SOLVE() const
    // void IKSolver::SetJOINT_ROTATIONS(bool enable)
    // void IKSolver::SetTARGET_ROTATIONS(bool enable)
    // void IKSolver::SetUPDATE_ORIGINAL_POSE(bool enable)
    // void IKSolver::SetUPDATE_ACTIVE_POSE(bool enable)
    // void IKSolver::SetUSE_ORIGINAL_POSE(bool enable)
    // void IKSolver::SetCONSTRAINTS(bool enable)
    // void IKSolver::SetAUTO_SOLVE(bool enable)
}

#endif // def URHO3D_IK

#ifdef URHO3D_NAVIGATION

// class CrowdAgent | File: ../Navigation/CrowdAgent.h
void CollectMembers_CrowdAgent(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Component::OnSetEnabled()
    // -virtual void Serializable::ApplyAttributes()

    // void CrowdAgent::ApplyAttributes() override
    // void CrowdAgent::OnSetEnabled() override
    // void CrowdAgent::DrawDebugGeometry(bool depthTest)
    // void CrowdAgent::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void CrowdAgent::SetTargetPosition(const Vector3& position)
    // void CrowdAgent::SetTargetVelocity(const Vector3& velocity)
    // void CrowdAgent::ResetTarget()
    // void CrowdAgent::SetUpdateNodePosition(bool unodepos)
    // void CrowdAgent::SetMaxAccel(float maxAccel)
    // void CrowdAgent::SetMaxSpeed(float maxSpeed)
    // void CrowdAgent::SetRadius(float radius)
    // void CrowdAgent::SetHeight(float height)
    // void CrowdAgent::SetQueryFilterType(unsigned queryFilterType)
    // void CrowdAgent::SetObstacleAvoidanceType(unsigned obstacleAvoidanceType)
    // void CrowdAgent::SetNavigationQuality(NavigationQuality val)
    // void CrowdAgent::SetNavigationPushiness(NavigationPushiness val)
    // Vector3 CrowdAgent::GetPosition() const
    // Vector3 CrowdAgent::GetDesiredVelocity() const
    // Vector3 CrowdAgent::GetActualVelocity() const
    // const Vector3& CrowdAgent::GetTargetPosition() const
    // const Vector3& CrowdAgent::GetTargetVelocity() const
    // CrowdAgentRequestedTarget CrowdAgent::GetRequestedTargetType() const
    // CrowdAgentState CrowdAgent::GetAgentState() const
    // CrowdAgentTargetState CrowdAgent::GetTargetState() const
    // bool CrowdAgent::GetUpdateNodePosition() const
    // int CrowdAgent::GetAgentCrowdId() const
    // float CrowdAgent::GetMaxAccel() const
    // float CrowdAgent::GetMaxSpeed() const
    // float CrowdAgent::GetRadius() const
    // float CrowdAgent::GetHeight() const
    // unsigned CrowdAgent::GetQueryFilterType() const
    // unsigned CrowdAgent::GetObstacleAvoidanceType() const
    // NavigationQuality CrowdAgent::GetNavigationQuality() const
    // NavigationPushiness CrowdAgent::GetNavigationPushiness() const
    // bool CrowdAgent::HasRequestedTarget() const
    // bool CrowdAgent::HasArrived() const
    // bool CrowdAgent::IsInCrowd() const
}

// class CrowdManager | File: ../Navigation/CrowdManager.h
void CollectMembers_CrowdManager(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Serializable::ApplyAttributes()

    // void CrowdManager::ApplyAttributes() override
    // void CrowdManager::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void CrowdManager::DrawDebugGeometry(bool depthTest)
    // void CrowdManager::SetCrowdTarget(const Vector3& position, Node* node=nullptr)
    // void CrowdManager::SetCrowdVelocity(const Vector3& velocity, Node* node=nullptr)
    // void CrowdManager::ResetCrowdTarget(Node* node=nullptr)
    // void CrowdManager::SetMaxAgents(unsigned maxAgents)
    // void CrowdManager::SetMaxAgentRadius(float maxAgentRadius)
    // void CrowdManager::SetNavigationMesh(NavigationMesh* navMesh)
    // void CrowdManager::SetQueryFilterTypesAttr(const VariantVector& value)
    // void CrowdManager::SetIncludeFlags(unsigned queryFilterType, unsigned short flags)
    // void CrowdManager::SetExcludeFlags(unsigned queryFilterType, unsigned short flags)
    // void CrowdManager::SetAreaCost(unsigned queryFilterType, unsigned areaID, float cost)
    // void CrowdManager::SetObstacleAvoidanceTypesAttr(const VariantVector& value)
    // void CrowdManager::SetObstacleAvoidanceParams(unsigned obstacleAvoidanceType, const CrowdObstacleAvoidanceParams& params)
    // PODVector<CrowdAgent*> CrowdManager::GetAgents(Node* node=nullptr, bool inCrowdFilter=true) const
    // Vector3 CrowdManager::FindNearestPoint(const Vector3& point, int queryFilterType, dtPolyRef* nearestRef=nullptr)
    // Vector3 CrowdManager::MoveAlongSurface(const Vector3& start, const Vector3& end, int queryFilterType, int maxVisited=3)
    // void CrowdManager::FindPath(PODVector<Vector3>& dest, const Vector3& start, const Vector3& end, int queryFilterType)
    // Vector3 CrowdManager::GetRandomPoint(int queryFilterType, dtPolyRef* randomRef=nullptr)
    // Vector3 CrowdManager::GetRandomPointInCircle(const Vector3& center, float radius, int queryFilterType, dtPolyRef* randomRef=nullptr)
    // float CrowdManager::GetDistanceToWall(const Vector3& point, float radius, int queryFilterType, Vector3* hitPos=nullptr, Vector3* hitNormal=nullptr)
    // Vector3 CrowdManager::Raycast(const Vector3& start, const Vector3& end, int queryFilterType, Vector3* hitNormal=nullptr)
    // unsigned CrowdManager::GetMaxAgents() const
    // float CrowdManager::GetMaxAgentRadius() const
    // NavigationMesh* CrowdManager::GetNavigationMesh() const
    // unsigned CrowdManager::GetNumQueryFilterTypes() const
    // unsigned CrowdManager::GetNumAreas(unsigned queryFilterType) const
    // VariantVector CrowdManager::GetQueryFilterTypesAttr() const
    // unsigned short CrowdManager::GetIncludeFlags(unsigned queryFilterType) const
    // unsigned short CrowdManager::GetExcludeFlags(unsigned queryFilterType) const
    // float CrowdManager::GetAreaCost(unsigned queryFilterType, unsigned areaID) const
    // unsigned CrowdManager::GetNumObstacleAvoidanceTypes() const
    // VariantVector CrowdManager::GetObstacleAvoidanceTypesAttr() const
    // const CrowdObstacleAvoidanceParams& CrowdManager::GetObstacleAvoidanceParams(unsigned obstacleAvoidanceType) const
}

// struct CrowdObstacleAvoidanceParams | File: ../Navigation/CrowdManager.h
void CollectMembers_CrowdObstacleAvoidanceParams(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct DynamicNavBuildData | File: ../Navigation/NavBuildData.h
void CollectMembers_DynamicNavBuildData(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class DynamicNavigationMesh | File: ../Navigation/DynamicNavigationMesh.h
void CollectMembers_DynamicNavigationMesh(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_NavigationMesh(methods);

    // -static void NavigationMesh::RegisterObject(Context* context)
    // -virtual PODVector<unsigned char> NavigationMesh::GetNavigationDataAttr() const
    // -virtual PODVector<unsigned char> NavigationMesh::GetTileData(const IntVector2& tile) const
    // -virtual bool NavigationMesh::AddTile(const PODVector<unsigned char>& tileData)
    // -virtual bool NavigationMesh::Allocate(const BoundingBox& boundingBox, unsigned maxTiles)
    // -virtual bool NavigationMesh::Build()
    // -virtual bool NavigationMesh::Build(const BoundingBox& boundingBox)
    // -virtual bool NavigationMesh::Build(const IntVector2& from, const IntVector2& to)
    // -virtual void NavigationMesh::RemoveAllTiles()
    // -virtual void NavigationMesh::RemoveTile(const IntVector2& tile)
    // -virtual void NavigationMesh::SetNavigationDataAttr(const PODVector<unsigned char>& value)
    // -void NavigationMesh::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // -void NavigationMesh::DrawDebugGeometry(bool depthTest)

    // bool DynamicNavigationMesh::Allocate(const BoundingBox& boundingBox, unsigned maxTiles) override
    // bool DynamicNavigationMesh::Build() override
    // bool DynamicNavigationMesh::Build(const BoundingBox& boundingBox) override
    // bool DynamicNavigationMesh::Build(const IntVector2& from, const IntVector2& to) override
    // PODVector<unsigned char> DynamicNavigationMesh::GetTileData(const IntVector2& tile) const override
    // bool DynamicNavigationMesh::IsObstacleInTile(Obstacle* obstacle, const IntVector2& tile) const
    // bool DynamicNavigationMesh::AddTile(const PODVector<unsigned char>& tileData) override
    // void DynamicNavigationMesh::RemoveTile(const IntVector2& tile) override
    // void DynamicNavigationMesh::RemoveAllTiles() override
    // void DynamicNavigationMesh::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void DynamicNavigationMesh::DrawDebugGeometry(bool depthTest)
    // void DynamicNavigationMesh::SetNavigationDataAttr(const PODVector<unsigned char>& value) override
    // PODVector<unsigned char> DynamicNavigationMesh::GetNavigationDataAttr() const override
    // void DynamicNavigationMesh::SetMaxObstacles(unsigned maxObstacles)
    // void DynamicNavigationMesh::SetMaxLayers(unsigned maxLayers)
    // unsigned DynamicNavigationMesh::GetMaxObstacles() const
    // unsigned DynamicNavigationMesh::GetMaxLayers() const
    // void DynamicNavigationMesh::SetDrawObstacles(bool enable)
    // bool DynamicNavigationMesh::GetDrawObstacles() const
}

// class NavArea | File: ../Navigation/NavArea.h
void CollectMembers_NavArea(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // void NavArea::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // unsigned NavArea::GetAreaID() const
    // void NavArea::SetAreaID(unsigned newID)
    // BoundingBox NavArea::GetBoundingBox() const
    // void NavArea::SetBoundingBox(const BoundingBox& bnds)
    // BoundingBox NavArea::GetWorldBoundingBox() const
}

// struct NavAreaStub | File: ../Navigation/NavBuildData.h
void CollectMembers_NavAreaStub(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct NavBuildData | File: ../Navigation/NavBuildData.h
void CollectMembers_NavBuildData(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Navigable | File: ../Navigation/Navigable.h
void CollectMembers_Navigable(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)

    // void Navigable::SetRecursive(bool enable)
    // bool Navigable::IsRecursive() const
}

// struct NavigationGeometryInfo | File: ../Navigation/NavigationMesh.h
void CollectMembers_NavigationGeometryInfo(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class NavigationMesh | File: ../Navigation/NavigationMesh.h
void CollectMembers_NavigationMesh(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // void NavigationMesh::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void NavigationMesh::SetTileSize(int size)
    // void NavigationMesh::SetCellSize(float size)
    // void NavigationMesh::SetCellHeight(float height)
    // void NavigationMesh::SetAgentHeight(float height)
    // void NavigationMesh::SetAgentRadius(float radius)
    // void NavigationMesh::SetAgentMaxClimb(float maxClimb)
    // void NavigationMesh::SetAgentMaxSlope(float maxSlope)
    // void NavigationMesh::SetRegionMinSize(float size)
    // void NavigationMesh::SetRegionMergeSize(float size)
    // void NavigationMesh::SetEdgeMaxLength(float length)
    // void NavigationMesh::SetEdgeMaxError(float error)
    // void NavigationMesh::SetDetailSampleDistance(float distance)
    // void NavigationMesh::SetDetailSampleMaxError(float error)
    // void NavigationMesh::SetPadding(const Vector3& padding)
    // void NavigationMesh::SetAreaCost(unsigned areaID, float cost)
    // virtual bool NavigationMesh::Allocate(const BoundingBox& boundingBox, unsigned maxTiles)
    // virtual bool NavigationMesh::Build()
    // virtual bool NavigationMesh::Build(const BoundingBox& boundingBox)
    // virtual bool NavigationMesh::Build(const IntVector2& from, const IntVector2& to)
    // virtual PODVector<unsigned char> NavigationMesh::GetTileData(const IntVector2& tile) const
    // virtual bool NavigationMesh::AddTile(const PODVector<unsigned char>& tileData)
    // virtual void NavigationMesh::RemoveTile(const IntVector2& tile)
    // virtual void NavigationMesh::RemoveAllTiles()
    // bool NavigationMesh::HasTile(const IntVector2& tile) const
    // BoundingBox NavigationMesh::GetTileBoundingBox(const IntVector2& tile) const
    // IntVector2 NavigationMesh::GetTileIndex(const Vector3& position) const
    // Vector3 NavigationMesh::FindNearestPoint(const Vector3& point, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, dtPolyRef* nearestRef=nullptr)
    // Vector3 NavigationMesh::MoveAlongSurface(const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, int maxVisited=3, const dtQueryFilter* filter=nullptr)
    // void NavigationMesh::FindPath(PODVector<Vector3>& dest, const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr)
    // void NavigationMesh::FindPath(PODVector<NavigationPathPoint>& dest, const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr)
    // Vector3 NavigationMesh::GetRandomPoint(const dtQueryFilter* filter=nullptr, dtPolyRef* randomRef=nullptr)
    // Vector3 NavigationMesh::GetRandomPointInCircle(const Vector3& center, float radius, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, dtPolyRef* randomRef=nullptr)
    // float NavigationMesh::GetDistanceToWall(const Vector3& point, float radius, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, Vector3* hitPos=nullptr, Vector3* hitNormal=nullptr)
    // Vector3 NavigationMesh::Raycast(const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, Vector3* hitNormal=nullptr)
    // void NavigationMesh::DrawDebugGeometry(bool depthTest)
    // String NavigationMesh::GetMeshName() const
    // void NavigationMesh::SetMeshName(const String& newName)
    // int NavigationMesh::GetTileSize() const
    // float NavigationMesh::GetCellSize() const
    // float NavigationMesh::GetCellHeight() const
    // float NavigationMesh::GetAgentHeight() const
    // float NavigationMesh::GetAgentRadius() const
    // float NavigationMesh::GetAgentMaxClimb() const
    // float NavigationMesh::GetAgentMaxSlope() const
    // float NavigationMesh::GetRegionMinSize() const
    // float NavigationMesh::GetRegionMergeSize() const
    // float NavigationMesh::GetEdgeMaxLength() const
    // float NavigationMesh::GetEdgeMaxError() const
    // float NavigationMesh::GetDetailSampleDistance() const
    // float NavigationMesh::GetDetailSampleMaxError() const
    // const Vector3& NavigationMesh::GetPadding() const
    // float NavigationMesh::GetAreaCost(unsigned areaID) const
    // bool NavigationMesh::IsInitialized() const
    // const BoundingBox& NavigationMesh::GetBoundingBox() const
    // BoundingBox NavigationMesh::GetWorldBoundingBox() const
    // IntVector2 NavigationMesh::GetNumTiles() const
    // void NavigationMesh::SetPartitionType(NavmeshPartitionType partitionType)
    // NavmeshPartitionType NavigationMesh::GetPartitionType() const
    // virtual void NavigationMesh::SetNavigationDataAttr(const PODVector<unsigned char>& value)
    // virtual PODVector<unsigned char> NavigationMesh::GetNavigationDataAttr() const
    // void NavigationMesh::SetDrawOffMeshConnections(bool enable)
    // bool NavigationMesh::GetDrawOffMeshConnections() const
    // void NavigationMesh::SetDrawNavAreas(bool enable)
    // bool NavigationMesh::GetDrawNavAreas() const
}

// struct NavigationPathPoint | File: ../Navigation/NavigationMesh.h
void CollectMembers_NavigationPathPoint(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Obstacle | File: ../Navigation/Obstacle.h
void CollectMembers_Obstacle(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Component::OnSetEnabled()

    // void Obstacle::OnSetEnabled() override
    // float Obstacle::GetHeight() const
    // void Obstacle::SetHeight(float newHeight)
    // float Obstacle::GetRadius() const
    // void Obstacle::SetRadius(float newRadius)
    // unsigned Obstacle::GetObstacleID() const
    // void Obstacle::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void Obstacle::DrawDebugGeometry(bool depthTest)
}

// class OffMeshConnection | File: ../Navigation/OffMeshConnection.h
void CollectMembers_OffMeshConnection(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Serializable::ApplyAttributes()

    // void OffMeshConnection::ApplyAttributes() override
    // void OffMeshConnection::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void OffMeshConnection::SetEndPoint(Node* node)
    // void OffMeshConnection::SetRadius(float radius)
    // void OffMeshConnection::SetBidirectional(bool enabled)
    // void OffMeshConnection::SetMask(unsigned newMask)
    // void OffMeshConnection::SetAreaID(unsigned newAreaID)
    // Node* OffMeshConnection::GetEndPoint() const
    // float OffMeshConnection::GetRadius() const
    // bool OffMeshConnection::IsBidirectional() const
    // unsigned OffMeshConnection::GetMask() const
    // unsigned OffMeshConnection::GetAreaID() const
}

// struct SimpleNavBuildData | File: ../Navigation/NavBuildData.h
void CollectMembers_SimpleNavBuildData(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_NavBuildData(methods);
}

#endif // def URHO3D_NAVIGATION

#ifdef URHO3D_NETWORK

// class Connection | File: ../Network/Connection.h
void CollectMembers_Connection(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // PacketType Connection::GetPacketType(bool reliable, bool inOrder)
    // void Connection::SendMessage(int msgID, bool reliable, bool inOrder, const VectorBuffer& msg, unsigned contentID=0)
    // void Connection::SendMessage(int msgID, bool reliable, bool inOrder, const unsigned char* data, unsigned numBytes, unsigned contentID=0)
    // void Connection::SendRemoteEvent(StringHash eventType, bool inOrder, const VariantMap& eventData=Variant::emptyVariantMap)
    // void Connection::SendRemoteEvent(Node* node, StringHash eventType, bool inOrder, const VariantMap& eventData=Variant::emptyVariantMap)
    // void Connection::SetScene(Scene* newScene)
    // void Connection::SetIdentity(const VariantMap& identity)
    // void Connection::SetControls(const Controls& newControls)
    // void Connection::SetPosition(const Vector3& position)
    // void Connection::SetRotation(const Quaternion& rotation)
    // void Connection::SetConnectPending(bool connectPending)
    // void Connection::SetLogStatistics(bool enable)
    // void Connection::Disconnect(int waitMSec=0)
    // void Connection::SendServerUpdate()
    // void Connection::SendClientUpdate()
    // void Connection::SendRemoteEvents()
    // void Connection::SendPackages()
    // void Connection::SendBuffer(PacketType type)
    // void Connection::SendAllBuffers()
    // void Connection::ProcessPendingLatestData()
    // bool Connection::ProcessMessage(int msgID, MemoryBuffer& buffer)
    // void Connection::Ban()
    // const SLNet::AddressOrGUID& Connection::GetAddressOrGUID() const
    // void Connection::SetAddressOrGUID(const SLNet::AddressOrGUID& addr)
    // VariantMap& Connection::GetIdentity()
    // Scene* Connection::GetScene() const
    // const Controls& Connection::GetControls() const
    // unsigned char Connection::GetTimeStamp() const
    // const Vector3& Connection::GetPosition() const
    // const Quaternion& Connection::GetRotation() const
    // bool Connection::IsClient() const
    // bool Connection::IsConnected() const
    // bool Connection::IsConnectPending() const
    // bool Connection::IsSceneLoaded() const
    // bool Connection::GetLogStatistics() const
    // String Connection::GetAddress() const
    // unsigned short Connection::GetPort() const
    // float Connection::GetRoundTripTime() const
    // unsigned Connection::GetLastHeardTime() const
    // float Connection::GetBytesInPerSec() const
    // float Connection::GetBytesOutPerSec() const
    // int Connection::GetPacketsInPerSec() const
    // int Connection::GetPacketsOutPerSec() const
    // String Connection::ToString() const
    // unsigned Connection::GetNumDownloads() const
    // const String& Connection::GetDownloadName() const
    // float Connection::GetDownloadProgress() const
    // void Connection::SendPackageToClient(PackageFile* package)
    // void Connection::ConfigureNetworkSimulator(int latencyMs, float packetLoss)
    // void Connection::SetPacketSizeLimit(int limit)
}

// class HttpRequest | File: ../Network/HttpRequest.h
void CollectMembers_HttpRequest(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
    CollectMembers_Deserializer(methods);
    CollectMembers_Thread(methods);

    // -virtual bool Deserializer::IsEof() const
    // -virtual unsigned Deserializer::Read(void* dest, unsigned size)=0
    // -virtual unsigned Deserializer::Seek(unsigned position)=0
    // -virtual void Thread::ThreadFunction()=0

    // void HttpRequest::ThreadFunction() override
    // unsigned HttpRequest::Read(void* dest, unsigned size) override
    // unsigned HttpRequest::Seek(unsigned position) override
    // bool HttpRequest::IsEof() const override
    // const String& HttpRequest::GetURL() const
    // const String& HttpRequest::GetVerb() const
    // String HttpRequest::GetError() const
    // HttpRequestState HttpRequest::GetState() const
    // unsigned HttpRequest::GetAvailableSize() const
    // bool HttpRequest::IsOpen() const
}

// class Network | File: ../Network/Network.h
void CollectMembers_Network(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Network::HandleMessage(const SLNet::AddressOrGUID& source, int packetID, int msgID, const char* data, size_t numBytes)
    // void Network::NewConnectionEstablished(const SLNet::AddressOrGUID& connection)
    // void Network::ClientDisconnected(const SLNet::AddressOrGUID& connection)
    // void Network::SetDiscoveryBeacon(const VariantMap& data)
    // void Network::DiscoverHosts(unsigned port)
    // void Network::SetPassword(const String& password)
    // void Network::SetNATServerInfo(const String& address, unsigned short port)
    // bool Network::Connect(const String& address, unsigned short port, Scene* scene, const VariantMap& identity=Variant::emptyVariantMap)
    // void Network::Disconnect(int waitMSec=0)
    // bool Network::StartServer(unsigned short port, unsigned int maxConnections=128)
    // void Network::StopServer()
    // void Network::StartNATClient()
    // const String& Network::GetGUID() const
    // void Network::AttemptNATPunchtrough(const String& guid, Scene* scene, const VariantMap& identity=Variant::emptyVariantMap)
    // void Network::BroadcastMessage(int msgID, bool reliable, bool inOrder, const VectorBuffer& msg, unsigned contentID=0)
    // void Network::BroadcastMessage(int msgID, bool reliable, bool inOrder, const unsigned char* data, unsigned numBytes, unsigned contentID=0)
    // void Network::BroadcastRemoteEvent(StringHash eventType, bool inOrder, const VariantMap& eventData=Variant::emptyVariantMap)
    // void Network::BroadcastRemoteEvent(Scene* scene, StringHash eventType, bool inOrder, const VariantMap& eventData=Variant::emptyVariantMap)
    // void Network::BroadcastRemoteEvent(Node* node, StringHash eventType, bool inOrder, const VariantMap& eventData=Variant::emptyVariantMap)
    // void Network::SetUpdateFps(int fps)
    // void Network::SetSimulatedLatency(int ms)
    // void Network::SetSimulatedPacketLoss(float probability)
    // void Network::RegisterRemoteEvent(StringHash eventType)
    // void Network::UnregisterRemoteEvent(StringHash eventType)
    // void Network::UnregisterAllRemoteEvents()
    // void Network::SetPackageCacheDir(const String& path)
    // void Network::SendPackageToClients(Scene* scene, PackageFile* package)
    // SharedPtr<HttpRequest> Network::MakeHttpRequest(const String& url, const String& verb=String::EMPTY, const Vector<String>& headers=Vector<String>(), const String& postData=String::EMPTY)
    // void Network::BanAddress(const String& address)
    // int Network::GetUpdateFps() const
    // int Network::GetSimulatedLatency() const
    // float Network::GetSimulatedPacketLoss() const
    // Connection* Network::GetConnection(const SLNet::AddressOrGUID& connection) const
    // Connection* Network::GetServerConnection() const
    // Vector<SharedPtr<Connection>> Network::GetClientConnections() const
    // bool Network::IsServerRunning() const
    // bool Network::CheckRemoteEvent(StringHash eventType) const
    // const String& Network::GetPackageCacheDir() const
    // void Network::Update(float timeStep)
    // void Network::PostUpdate(float timeStep)
}

// class NetworkPriority | File: ../Network/NetworkPriority.h
void CollectMembers_NetworkPriority(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)

    // void NetworkPriority::SetBasePriority(float priority)
    // void NetworkPriority::SetDistanceFactor(float factor)
    // void NetworkPriority::SetMinPriority(float priority)
    // void NetworkPriority::SetAlwaysUpdateOwner(bool enable)
    // float NetworkPriority::GetBasePriority() const
    // float NetworkPriority::GetDistanceFactor() const
    // float NetworkPriority::GetMinPriority() const
    // bool NetworkPriority::GetAlwaysUpdateOwner() const
    // bool NetworkPriority::CheckUpdate(float distance, float& accumulator)
}

// struct PackageDownload | File: ../Network/Connection.h
void CollectMembers_PackageDownload(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct PackageUpload | File: ../Network/Connection.h
void CollectMembers_PackageUpload(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct RemoteEvent | File: ../Network/Connection.h
void CollectMembers_RemoteEvent(Vector<RegisterObjectMethodArgs>& methods)
{
}

#endif // def URHO3D_NETWORK

#ifdef URHO3D_PHYSICS

// struct CollisionGeometryData | File: ../Physics/CollisionShape.h
void CollectMembers_CollisionGeometryData(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
}

// class CollisionShape | File: ../Physics/CollisionShape.h
void CollectMembers_CollisionShape(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Component::OnSetEnabled()
    // -virtual void Serializable::ApplyAttributes()

    // void CollisionShape::ApplyAttributes() override
    // void CollisionShape::OnSetEnabled() override
    // void CollisionShape::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void CollisionShape::SetBox(const Vector3& size, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetSphere(float diameter, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetStaticPlane(const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetCylinder(float diameter, float height, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetCapsule(float diameter, float height, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetCone(float diameter, float height, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetTriangleMesh(Model* model, unsigned lodLevel=0, const Vector3& scale=Vector3::ONE, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetCustomTriangleMesh(CustomGeometry* custom, const Vector3& scale=Vector3::ONE, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetConvexHull(Model* model, unsigned lodLevel=0, const Vector3& scale=Vector3::ONE, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetCustomConvexHull(CustomGeometry* custom, const Vector3& scale=Vector3::ONE, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetGImpactMesh(Model* model, unsigned lodLevel=0, const Vector3& scale=Vector3::ONE, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetCustomGImpactMesh(CustomGeometry* custom, const Vector3& scale=Vector3::ONE, const Vector3& position=Vector3::ZERO, const Quaternion& rotation=Quaternion::IDENTITY)
    // void CollisionShape::SetTerrain(unsigned lodLevel=0)
    // void CollisionShape::SetShapeType(ShapeType type)
    // void CollisionShape::SetSize(const Vector3& size)
    // void CollisionShape::SetPosition(const Vector3& position)
    // void CollisionShape::SetRotation(const Quaternion& rotation)
    // void CollisionShape::SetTransform(const Vector3& position, const Quaternion& rotation)
    // void CollisionShape::SetMargin(float margin)
    // void CollisionShape::SetModel(Model* model)
    // void CollisionShape::SetLodLevel(unsigned lodLevel)
    // btCollisionShape* CollisionShape::GetCollisionShape() const
    // CollisionGeometryData* CollisionShape::GetGeometryData() const
    // PhysicsWorld* CollisionShape::GetPhysicsWorld() const
    // ShapeType CollisionShape::GetShapeType() const
    // const Vector3& CollisionShape::GetSize() const
    // const Vector3& CollisionShape::GetPosition() const
    // const Quaternion& CollisionShape::GetRotation() const
    // float CollisionShape::GetMargin() const
    // Model* CollisionShape::GetModel() const
    // unsigned CollisionShape::GetLodLevel() const
    // BoundingBox CollisionShape::GetWorldBoundingBox() const
    // void CollisionShape::NotifyRigidBody(bool updateMass=true)
    // void CollisionShape::SetModelAttr(const ResourceRef& value)
    // ResourceRef CollisionShape::GetModelAttr() const
    // void CollisionShape::ReleaseShape()
}

// class Constraint | File: ../Physics/Constraint.h
void CollectMembers_Constraint(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Component::GetDependencyNodes(PODVector<Node*>& dest)
    // -virtual void Component::OnSetEnabled()
    // -virtual void Serializable::ApplyAttributes()

    // void Constraint::ApplyAttributes() override
    // void Constraint::OnSetEnabled() override
    // void Constraint::GetDependencyNodes(PODVector<Node*>& dest) override
    // void Constraint::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void Constraint::SetConstraintType(ConstraintType type)
    // void Constraint::SetOtherBody(RigidBody* body)
    // void Constraint::SetPosition(const Vector3& position)
    // void Constraint::SetRotation(const Quaternion& rotation)
    // void Constraint::SetAxis(const Vector3& axis)
    // void Constraint::SetOtherPosition(const Vector3& position)
    // void Constraint::SetOtherRotation(const Quaternion& rotation)
    // void Constraint::SetOtherAxis(const Vector3& axis)
    // void Constraint::SetWorldPosition(const Vector3& position)
    // void Constraint::SetHighLimit(const Vector2& limit)
    // void Constraint::SetLowLimit(const Vector2& limit)
    // void Constraint::SetERP(float erp)
    // void Constraint::SetCFM(float cfm)
    // void Constraint::SetDisableCollision(bool disable)
    // PhysicsWorld* Constraint::GetPhysicsWorld() const
    // btTypedConstraint* Constraint::GetConstraint() const
    // ConstraintType Constraint::GetConstraintType() const
    // RigidBody* Constraint::GetOwnBody() const
    // RigidBody* Constraint::GetOtherBody() const
    // const Vector3& Constraint::GetPosition() const
    // const Quaternion& Constraint::GetRotation() const
    // const Vector3& Constraint::GetOtherPosition() const
    // const Quaternion& Constraint::GetOtherRotation() const
    // Vector3 Constraint::GetWorldPosition() const
    // const Vector2& Constraint::GetHighLimit() const
    // const Vector2& Constraint::GetLowLimit() const
    // float Constraint::GetERP() const
    // float Constraint::GetCFM() const
    // bool Constraint::GetDisableCollision() const
    // void Constraint::ReleaseConstraint()
    // void Constraint::ApplyFrames()
}

// struct ConvexData | File: ../Physics/CollisionShape.h
void CollectMembers_ConvexData(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionGeometryData(methods);

    // void ConvexData::BuildHull(const PODVector<Vector3>& vertices)
}

// struct DelayedWorldTransform | File: ../Physics/PhysicsWorld.h
void CollectMembers_DelayedWorldTransform(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct GImpactMeshData | File: ../Physics/CollisionShape.h
void CollectMembers_GImpactMeshData(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionGeometryData(methods);
}

// struct HeightfieldData | File: ../Physics/CollisionShape.h
void CollectMembers_HeightfieldData(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionGeometryData(methods);
}

// struct ManifoldPair | File: ../Physics/PhysicsWorld.h
void CollectMembers_ManifoldPair(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct PhysicsRaycastResult | File: ../Physics/PhysicsWorld.h
void CollectMembers_PhysicsRaycastResult(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool PhysicsRaycastResult::operator!=(const PhysicsRaycastResult& rhs) const
}

// class PhysicsWorld | File: ../Physics/PhysicsWorld.h
void CollectMembers_PhysicsWorld(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // bool PhysicsWorld::isVisible(const btVector3& aabbMin, const btVector3& aabbMax) override
    // void PhysicsWorld::drawLine(const btVector3& from, const btVector3& to, const btVector3& color) override
    // void PhysicsWorld::reportErrorWarning(const char* warningString) override
    // void PhysicsWorld::drawContactPoint(const btVector3& pointOnB, const btVector3& normalOnB, btScalar distance, int lifeTime, const btVector3& color) override
    // void PhysicsWorld::draw3dText(const btVector3& location, const char* textString) override
    // void PhysicsWorld::setDebugMode(int debugMode) override
    // int PhysicsWorld::getDebugMode() const override
    // void PhysicsWorld::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void PhysicsWorld::Update(float timeStep)
    // void PhysicsWorld::UpdateCollisions()
    // void PhysicsWorld::SetFps(int fps)
    // void PhysicsWorld::SetGravity(const Vector3& gravity)
    // void PhysicsWorld::SetMaxSubSteps(int num)
    // void PhysicsWorld::SetNumIterations(int num)
    // void PhysicsWorld::SetUpdateEnabled(bool enable)
    // void PhysicsWorld::SetInterpolation(bool enable)
    // void PhysicsWorld::SetInternalEdge(bool enable)
    // void PhysicsWorld::SetSplitImpulse(bool enable)
    // void PhysicsWorld::SetMaxNetworkAngularVelocity(float velocity)
    // void PhysicsWorld::Raycast(PODVector<PhysicsRaycastResult>& result, const Ray& ray, float maxDistance, unsigned collisionMask=M_MAX_UNSIGNED)
    // void PhysicsWorld::RaycastSingle(PhysicsRaycastResult& result, const Ray& ray, float maxDistance, unsigned collisionMask=M_MAX_UNSIGNED)
    // void PhysicsWorld::RaycastSingleSegmented(PhysicsRaycastResult& result, const Ray& ray, float maxDistance, float segmentDistance, unsigned collisionMask=M_MAX_UNSIGNED, float overlapDistance=0.1f)
    // void PhysicsWorld::SphereCast(PhysicsRaycastResult& result, const Ray& ray, float radius, float maxDistance, unsigned collisionMask=M_MAX_UNSIGNED)
    // void PhysicsWorld::ConvexCast(PhysicsRaycastResult& result, CollisionShape* shape, const Vector3& startPos, const Quaternion& startRot, const Vector3& endPos, const Quaternion& endRot, unsigned collisionMask=M_MAX_UNSIGNED)
    // void PhysicsWorld::ConvexCast(PhysicsRaycastResult& result, btCollisionShape* shape, const Vector3& startPos, const Quaternion& startRot, const Vector3& endPos, const Quaternion& endRot, unsigned collisionMask=M_MAX_UNSIGNED)
    // void PhysicsWorld::RemoveCachedGeometry(Model* model)
    // void PhysicsWorld::GetRigidBodies(PODVector<RigidBody*>& result, const Sphere& sphere, unsigned collisionMask=M_MAX_UNSIGNED)
    // void PhysicsWorld::GetRigidBodies(PODVector<RigidBody*>& result, const BoundingBox& box, unsigned collisionMask=M_MAX_UNSIGNED)
    // void PhysicsWorld::GetRigidBodies(PODVector<RigidBody*>& result, const RigidBody* body)
    // void PhysicsWorld::GetCollidingBodies(PODVector<RigidBody*>& result, const RigidBody* body)
    // Vector3 PhysicsWorld::GetGravity() const
    // int PhysicsWorld::GetMaxSubSteps() const
    // int PhysicsWorld::GetNumIterations() const
    // bool PhysicsWorld::IsUpdateEnabled() const
    // bool PhysicsWorld::GetInterpolation() const
    // bool PhysicsWorld::GetInternalEdge() const
    // bool PhysicsWorld::GetSplitImpulse() const
    // int PhysicsWorld::GetFps() const
    // float PhysicsWorld::GetMaxNetworkAngularVelocity() const
    // void PhysicsWorld::AddRigidBody(RigidBody* body)
    // void PhysicsWorld::RemoveRigidBody(RigidBody* body)
    // void PhysicsWorld::AddCollisionShape(CollisionShape* shape)
    // void PhysicsWorld::RemoveCollisionShape(CollisionShape* shape)
    // void PhysicsWorld::AddConstraint(Constraint* constraint)
    // void PhysicsWorld::RemoveConstraint(Constraint* constraint)
    // void PhysicsWorld::AddDelayedWorldTransform(const DelayedWorldTransform& transform)
    // void PhysicsWorld::DrawDebugGeometry(bool depthTest)
    // void PhysicsWorld::SetDebugRenderer(DebugRenderer* debug)
    // void PhysicsWorld::SetDebugDepthTest(bool enable)
    // btDiscreteDynamicsWorld* PhysicsWorld::GetWorld()
    // void PhysicsWorld::CleanupGeometryCache()
    // CollisionGeometryDataCache& PhysicsWorld::GetTriMeshCache()
    // CollisionGeometryDataCache& PhysicsWorld::GetConvexCache()
    // CollisionGeometryDataCache& PhysicsWorld::GetGImpactTrimeshCache()
    // void PhysicsWorld::SetApplyingTransforms(bool enable)
    // bool PhysicsWorld::IsApplyingTransforms() const
    // bool PhysicsWorld::IsSimulating() const
}

// struct PhysicsWorldConfig | File: ../Physics/PhysicsWorld.h
void CollectMembers_PhysicsWorldConfig(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class RaycastVehicle | File: ../Physics/RaycastVehicle.h
void CollectMembers_RaycastVehicle(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_LogicComponent(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Serializable::ApplyAttributes()

    // void RaycastVehicle::OnSetEnabled() override
    // void RaycastVehicle::ApplyAttributes() override
    // void RaycastVehicle::AddWheel(Node* wheelNode, Vector3 wheelDirection, Vector3 wheelAxle, float restLength, float wheelRadius, bool frontWheel)
    // void RaycastVehicle::ResetSuspension()
    // void RaycastVehicle::UpdateWheelTransform(int wheel, bool interpolated)
    // void RaycastVehicle::SetSteeringValue(int wheel, float steeringValue)
    // void RaycastVehicle::SetWheelSuspensionStiffness(int wheel, float stiffness)
    // void RaycastVehicle::SetWheelMaxSuspensionForce(int wheel, float force)
    // void RaycastVehicle::SetWheelDampingRelaxation(int wheel, float damping)
    // void RaycastVehicle::SetWheelDampingCompression(int wheel, float compression)
    // void RaycastVehicle::SetWheelFrictionSlip(int wheel, float slip)
    // void RaycastVehicle::SetWheelRollInfluence(int wheel, float rollInfluence)
    // void RaycastVehicle::SetEngineForce(int wheel, float force)
    // void RaycastVehicle::SetBrake(int wheel, float force)
    // void RaycastVehicle::SetWheelRadius(int wheel, float wheelRadius)
    // void RaycastVehicle::ResetWheels()
    // void RaycastVehicle::SetWheelSkidInfo(int wheel, float factor)
    // bool RaycastVehicle::WheelIsGrounded(int wheel) const
    // void RaycastVehicle::SetMaxSuspensionTravel(int wheel, float maxSuspensionTravel)
    // void RaycastVehicle::SetWheelDirection(int wheel, Vector3 direction)
    // void RaycastVehicle::SetWheelAxle(int wheel, Vector3 axle)
    // void RaycastVehicle::SetMaxSideSlipSpeed(float speed)
    // void RaycastVehicle::SetWheelSkidInfoCumulative(int wheel, float skid)
    // void RaycastVehicle::SetInAirRPM(float rpm)
    // void RaycastVehicle::SetCoordinateSystem(const IntVector3& coordinateSystem=RIGHT_FORWARD_UP)
    // void RaycastVehicle::Init()
    // void RaycastVehicle::FixedUpdate(float timeStep) override
    // void RaycastVehicle::FixedPostUpdate(float timeStep) override
    // void RaycastVehicle::PostUpdate(float timeStep) override
    // Vector3 RaycastVehicle::GetWheelPosition(int wheel)
    // Quaternion RaycastVehicle::GetWheelRotation(int wheel)
    // Vector3 RaycastVehicle::GetWheelConnectionPoint(int wheel) const
    // int RaycastVehicle::GetNumWheels() const
    // Node* RaycastVehicle::GetWheelNode(int wheel) const
    // float RaycastVehicle::GetSteeringValue(int wheel) const
    // float RaycastVehicle::GetWheelSuspensionStiffness(int wheel) const
    // float RaycastVehicle::GetWheelMaxSuspensionForce(int wheel) const
    // float RaycastVehicle::GetWheelDampingRelaxation(int wheel) const
    // float RaycastVehicle::GetWheelDampingCompression(int wheel) const
    // float RaycastVehicle::GetWheelFrictionSlip(int wheel) const
    // float RaycastVehicle::GetWheelRollInfluence(int wheel) const
    // float RaycastVehicle::GetEngineForce(int wheel) const
    // float RaycastVehicle::GetBrake(int wheel) const
    // float RaycastVehicle::GetWheelRadius(int wheel) const
    // void RaycastVehicle::SetWheelRestLength(int wheel, float length)
    // float RaycastVehicle::GetWheelRestLength(int wheel) const
    // float RaycastVehicle::GetMaxSuspensionTravel(int wheel)
    // Vector3 RaycastVehicle::GetWheelAxle(int wheel) const
    // float RaycastVehicle::GetWheelSideSlipSpeed(int wheel) const
    // float RaycastVehicle::GetMaxSideSlipSpeed() const
    // float RaycastVehicle::GetWheelSkidInfo(int wheel) const
    // Vector3 RaycastVehicle::GetWheelDirection(int wheel) const
    // float RaycastVehicle::GetWheelSkidInfoCumulative(int wheel) const
    // bool RaycastVehicle::IsFrontWheel(int wheel) const
    // Vector3 RaycastVehicle::GetContactPosition(int wheel) const
    // Vector3 RaycastVehicle::GetContactNormal(int wheel) const
    // float RaycastVehicle::GetInAirRPM() const
    // IntVector3 RaycastVehicle::GetCoordinateSystem() const
    // VariantVector RaycastVehicle::GetWheelDataAttr() const
    // void RaycastVehicle::SetWheelDataAttr(const VariantVector& value)
}

// class RigidBody | File: ../Physics/RigidBody.h
void CollectMembers_RigidBody(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Component::OnSetEnabled()
    // -virtual void Serializable::ApplyAttributes()

    // void RigidBody::ApplyAttributes() override
    // void RigidBody::OnSetEnabled() override
    // void RigidBody::getWorldTransform(btTransform& worldTrans) const override
    // void RigidBody::setWorldTransform(const btTransform& worldTrans) override
    // void RigidBody::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void RigidBody::SetMass(float mass)
    // void RigidBody::SetPosition(const Vector3& position)
    // void RigidBody::SetRotation(const Quaternion& rotation)
    // void RigidBody::SetTransform(const Vector3& position, const Quaternion& rotation)
    // void RigidBody::SetLinearVelocity(const Vector3& velocity)
    // void RigidBody::SetLinearFactor(const Vector3& factor)
    // void RigidBody::SetLinearRestThreshold(float threshold)
    // void RigidBody::SetLinearDamping(float damping)
    // void RigidBody::SetAngularVelocity(const Vector3& velocity)
    // void RigidBody::SetAngularFactor(const Vector3& factor)
    // void RigidBody::SetAngularRestThreshold(float threshold)
    // void RigidBody::SetAngularDamping(float damping)
    // void RigidBody::SetFriction(float friction)
    // void RigidBody::SetAnisotropicFriction(const Vector3& friction)
    // void RigidBody::SetRollingFriction(float friction)
    // void RigidBody::SetRestitution(float restitution)
    // void RigidBody::SetContactProcessingThreshold(float threshold)
    // void RigidBody::SetCcdRadius(float radius)
    // void RigidBody::SetCcdMotionThreshold(float threshold)
    // void RigidBody::SetUseGravity(bool enable)
    // void RigidBody::SetGravityOverride(const Vector3& gravity)
    // void RigidBody::SetKinematic(bool enable)
    // void RigidBody::SetTrigger(bool enable)
    // void RigidBody::SetCollisionLayer(unsigned layer)
    // void RigidBody::SetCollisionMask(unsigned mask)
    // void RigidBody::SetCollisionLayerAndMask(unsigned layer, unsigned mask)
    // void RigidBody::SetCollisionEventMode(CollisionEventMode mode)
    // void RigidBody::ApplyForce(const Vector3& force)
    // void RigidBody::ApplyForce(const Vector3& force, const Vector3& position)
    // void RigidBody::ApplyTorque(const Vector3& torque)
    // void RigidBody::ApplyImpulse(const Vector3& impulse)
    // void RigidBody::ApplyImpulse(const Vector3& impulse, const Vector3& position)
    // void RigidBody::ApplyTorqueImpulse(const Vector3& torque)
    // void RigidBody::ResetForces()
    // void RigidBody::Activate()
    // void RigidBody::ReAddBodyToWorld()
    // void RigidBody::DisableMassUpdate()
    // void RigidBody::EnableMassUpdate()
    // PhysicsWorld* RigidBody::GetPhysicsWorld() const
    // btRigidBody* RigidBody::GetBody() const
    // btCompoundShape* RigidBody::GetCompoundShape() const
    // float RigidBody::GetMass() const
    // Vector3 RigidBody::GetPosition() const
    // Quaternion RigidBody::GetRotation() const
    // Vector3 RigidBody::GetLinearVelocity() const
    // Vector3 RigidBody::GetLinearFactor() const
    // Vector3 RigidBody::GetVelocityAtPoint(const Vector3& position) const
    // float RigidBody::GetLinearRestThreshold() const
    // float RigidBody::GetLinearDamping() const
    // Vector3 RigidBody::GetAngularVelocity() const
    // Vector3 RigidBody::GetAngularFactor() const
    // float RigidBody::GetAngularRestThreshold() const
    // float RigidBody::GetAngularDamping() const
    // float RigidBody::GetFriction() const
    // Vector3 RigidBody::GetAnisotropicFriction() const
    // float RigidBody::GetRollingFriction() const
    // float RigidBody::GetRestitution() const
    // float RigidBody::GetContactProcessingThreshold() const
    // float RigidBody::GetCcdRadius() const
    // float RigidBody::GetCcdMotionThreshold() const
    // bool RigidBody::GetUseGravity() const
    // const Vector3& RigidBody::GetGravityOverride() const
    // const Vector3& RigidBody::GetCenterOfMass() const
    // bool RigidBody::IsKinematic() const
    // bool RigidBody::IsTrigger() const
    // bool RigidBody::IsActive() const
    // unsigned RigidBody::GetCollisionLayer() const
    // unsigned RigidBody::GetCollisionMask() const
    // CollisionEventMode RigidBody::GetCollisionEventMode() const
    // void RigidBody::GetCollidingBodies(PODVector<RigidBody*>& result) const
    // void RigidBody::ApplyWorldTransform(const Vector3& newWorldPosition, const Quaternion& newWorldRotation)
    // void RigidBody::UpdateMass()
    // void RigidBody::UpdateGravity()
    // void RigidBody::SetNetAngularVelocityAttr(const PODVector<unsigned char>& value)
    // const PODVector<unsigned char>& RigidBody::GetNetAngularVelocityAttr() const
    // void RigidBody::AddConstraint(Constraint* constraint)
    // void RigidBody::RemoveConstraint(Constraint* constraint)
    // void RigidBody::ReleaseBody()
}

// struct TriangleMeshData | File: ../Physics/CollisionShape.h
void CollectMembers_TriangleMeshData(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionGeometryData(methods);
}

#endif // def URHO3D_PHYSICS

#ifdef URHO3D_URHO2D

// class AnimatedSprite2D | File: ../Urho2D/AnimatedSprite2D.h
void CollectMembers_AnimatedSprite2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_StaticSprite2D(methods);

    // -static void StaticSprite2D::RegisterObject(Context* context)
    // -void Drawable2D::OnSetEnabled() override

    // void AnimatedSprite2D::OnSetEnabled() override
    // void AnimatedSprite2D::SetAnimationSet(AnimationSet2D* animationSet)
    // void AnimatedSprite2D::SetEntity(const String& entity)
    // void AnimatedSprite2D::SetAnimation(const String& name, LoopMode2D loopMode=LM_DEFAULT)
    // void AnimatedSprite2D::SetLoopMode(LoopMode2D loopMode)
    // void AnimatedSprite2D::SetSpeed(float speed)
    // AnimationSet2D* AnimatedSprite2D::GetAnimationSet() const
    // const String& AnimatedSprite2D::GetEntity() const
    // const String& AnimatedSprite2D::GetAnimation() const
    // LoopMode2D AnimatedSprite2D::GetLoopMode() const
    // float AnimatedSprite2D::GetSpeed() const
    // void AnimatedSprite2D::SetAnimationSetAttr(const ResourceRef& value)
    // ResourceRef AnimatedSprite2D::GetAnimationSetAttr() const
    // void AnimatedSprite2D::SetAnimationAttr(const String& name)
}

// class AnimationSet2D | File: ../Urho2D/AnimationSet2D.h
void CollectMembers_AnimationSet2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()

    // bool AnimationSet2D::BeginLoad(Deserializer& source) override
    // bool AnimationSet2D::EndLoad() override
    // unsigned AnimationSet2D::GetNumAnimations() const
    // String AnimationSet2D::GetAnimation(unsigned index) const
    // bool AnimationSet2D::HasAnimation(const String& animationName) const
    // Sprite2D* AnimationSet2D::GetSprite() const
    // Spriter::SpriterData* AnimationSet2D::GetSpriterData() const
    // Sprite2D* AnimationSet2D::GetSpriterFileSprite(int folderId, int fileId) const
}

// class CollisionBox2D | File: ../Urho2D/CollisionBox2D.h
void CollectMembers_CollisionBox2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    // -static void CollisionShape2D::RegisterObject(Context* context)

    // void CollisionBox2D::SetSize(const Vector2& size)
    // void CollisionBox2D::SetSize(float width, float height)
    // void CollisionBox2D::SetCenter(const Vector2& center)
    // void CollisionBox2D::SetCenter(float x, float y)
    // void CollisionBox2D::SetAngle(float angle)
    // const Vector2& CollisionBox2D::GetSize() const
    // const Vector2& CollisionBox2D::GetCenter() const
    // float CollisionBox2D::GetAngle() const
}

// class CollisionChain2D | File: ../Urho2D/CollisionChain2D.h
void CollectMembers_CollisionChain2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    // -static void CollisionShape2D::RegisterObject(Context* context)

    // void CollisionChain2D::SetLoop(bool loop)
    // void CollisionChain2D::SetVertexCount(unsigned count)
    // void CollisionChain2D::SetVertex(unsigned index, const Vector2& vertex)
    // void CollisionChain2D::SetVertices(const PODVector<Vector2>& vertices)
    // void CollisionChain2D::SetVerticesAttr(const PODVector<unsigned char>& value)
    // bool CollisionChain2D::GetLoop() const
    // unsigned CollisionChain2D::GetVertexCount() const
    // const Vector2& CollisionChain2D::GetVertex(unsigned index) const
    // const PODVector<Vector2>& CollisionChain2D::GetVertices() const
    // PODVector<unsigned char> CollisionChain2D::GetVerticesAttr() const
}

// class CollisionCircle2D | File: ../Urho2D/CollisionCircle2D.h
void CollectMembers_CollisionCircle2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    // -static void CollisionShape2D::RegisterObject(Context* context)

    // void CollisionCircle2D::SetRadius(float radius)
    // void CollisionCircle2D::SetCenter(const Vector2& center)
    // void CollisionCircle2D::SetCenter(float x, float y)
    // float CollisionCircle2D::GetRadius() const
    // const Vector2& CollisionCircle2D::GetCenter() const
}

// class CollisionEdge2D | File: ../Urho2D/CollisionEdge2D.h
void CollectMembers_CollisionEdge2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    // -static void CollisionShape2D::RegisterObject(Context* context)

    // void CollisionEdge2D::SetVertex1(const Vector2& vertex)
    // void CollisionEdge2D::SetVertex2(const Vector2& vertex)
    // void CollisionEdge2D::SetVertices(const Vector2& vertex1, const Vector2& vertex2)
    // const Vector2& CollisionEdge2D::GetVertex1() const
    // const Vector2& CollisionEdge2D::GetVertex2() const
}

// class CollisionPolygon2D | File: ../Urho2D/CollisionPolygon2D.h
void CollectMembers_CollisionPolygon2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    // -static void CollisionShape2D::RegisterObject(Context* context)

    // void CollisionPolygon2D::SetVertexCount(unsigned count)
    // void CollisionPolygon2D::SetVertex(unsigned index, const Vector2& vertex)
    // void CollisionPolygon2D::SetVertices(const PODVector<Vector2>& vertices)
    // unsigned CollisionPolygon2D::GetVertexCount() const
    // const Vector2& CollisionPolygon2D::GetVertex(unsigned index) const
    // const PODVector<Vector2>& CollisionPolygon2D::GetVertices() const
    // void CollisionPolygon2D::SetVerticesAttr(const PODVector<unsigned char>& value)
    // PODVector<unsigned char> CollisionPolygon2D::GetVerticesAttr() const
}

// class CollisionShape2D | File: ../Urho2D/CollisionShape2D.h
void CollectMembers_CollisionShape2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::OnSetEnabled()

    // void CollisionShape2D::OnSetEnabled() override
    // void CollisionShape2D::SetTrigger(bool trigger)
    // void CollisionShape2D::SetCategoryBits(int categoryBits)
    // void CollisionShape2D::SetMaskBits(int maskBits)
    // void CollisionShape2D::SetGroupIndex(int groupIndex)
    // void CollisionShape2D::SetDensity(float density)
    // void CollisionShape2D::SetFriction(float friction)
    // void CollisionShape2D::SetRestitution(float restitution)
    // void CollisionShape2D::CreateFixture()
    // void CollisionShape2D::ReleaseFixture()
    // bool CollisionShape2D::IsTrigger() const
    // int CollisionShape2D::GetCategoryBits() const
    // int CollisionShape2D::GetMaskBits() const
    // int CollisionShape2D::GetGroupIndex() const
    // float CollisionShape2D::GetDensity() const
    // float CollisionShape2D::GetFriction() const
    // float CollisionShape2D::GetRestitution() const
    // float CollisionShape2D::GetMass() const
    // float CollisionShape2D::GetInertia() const
    // Vector2 CollisionShape2D::GetMassCenter() const
    // b2Fixture* CollisionShape2D::GetFixture() const
}

// class Constraint2D | File: ../Urho2D/Constraint2D.h
void CollectMembers_Constraint2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::OnSetEnabled()
    // -virtual void Serializable::ApplyAttributes()

    // void Constraint2D::ApplyAttributes() override
    // void Constraint2D::OnSetEnabled() override
    // void Constraint2D::CreateJoint()
    // void Constraint2D::ReleaseJoint()
    // void Constraint2D::SetOtherBody(RigidBody2D* body)
    // void Constraint2D::SetCollideConnected(bool collideConnected)
    // void Constraint2D::SetAttachedConstraint(Constraint2D* constraint)
    // RigidBody2D* Constraint2D::GetOwnerBody() const
    // RigidBody2D* Constraint2D::GetOtherBody() const
    // bool Constraint2D::GetCollideConnected() const
    // Constraint2D* Constraint2D::GetAttachedConstraint() const
    // b2Joint* Constraint2D::GetJoint() const
}

// class ConstraintDistance2D | File: ../Urho2D/ConstraintDistance2D.h
void CollectMembers_ConstraintDistance2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintDistance2D::SetOwnerBodyAnchor(const Vector2& anchor)
    // void ConstraintDistance2D::SetOtherBodyAnchor(const Vector2& anchor)
    // void ConstraintDistance2D::SetFrequencyHz(float frequencyHz)
    // void ConstraintDistance2D::SetDampingRatio(float dampingRatio)
    // void ConstraintDistance2D::SetLength(float length)
    // const Vector2& ConstraintDistance2D::GetOwnerBodyAnchor() const
    // const Vector2& ConstraintDistance2D::GetOtherBodyAnchor() const
    // float ConstraintDistance2D::GetFrequencyHz() const
    // float ConstraintDistance2D::GetDampingRatio() const
    // float ConstraintDistance2D::GetLength() const
}

// class ConstraintFriction2D | File: ../Urho2D/ConstraintFriction2D.h
void CollectMembers_ConstraintFriction2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintFriction2D::SetAnchor(const Vector2& anchor)
    // void ConstraintFriction2D::SetMaxForce(float maxForce)
    // void ConstraintFriction2D::SetMaxTorque(float maxTorque)
    // const Vector2& ConstraintFriction2D::GetAnchor() const
    // float ConstraintFriction2D::GetMaxForce() const
    // float ConstraintFriction2D::GetMaxTorque() const
}

// class ConstraintGear2D | File: ../Urho2D/ConstraintGear2D.h
void CollectMembers_ConstraintGear2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintGear2D::SetOwnerConstraint(Constraint2D* constraint)
    // void ConstraintGear2D::SetOtherConstraint(Constraint2D* constraint)
    // void ConstraintGear2D::SetRatio(float ratio)
    // Constraint2D* ConstraintGear2D::GetOwnerConstraint() const
    // Constraint2D* ConstraintGear2D::GetOtherConstraint() const
    // float ConstraintGear2D::GetRatio() const
}

// class ConstraintMotor2D | File: ../Urho2D/ConstraintMotor2D.h
void CollectMembers_ConstraintMotor2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintMotor2D::SetLinearOffset(const Vector2& linearOffset)
    // void ConstraintMotor2D::SetAngularOffset(float angularOffset)
    // void ConstraintMotor2D::SetMaxForce(float maxForce)
    // void ConstraintMotor2D::SetMaxTorque(float maxTorque)
    // void ConstraintMotor2D::SetCorrectionFactor(float correctionFactor)
    // const Vector2& ConstraintMotor2D::GetLinearOffset() const
    // float ConstraintMotor2D::GetAngularOffset() const
    // float ConstraintMotor2D::GetMaxForce() const
    // float ConstraintMotor2D::GetMaxTorque() const
    // float ConstraintMotor2D::GetCorrectionFactor() const
}

// class ConstraintMouse2D | File: ../Urho2D/ConstraintMouse2D.h
void CollectMembers_ConstraintMouse2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintMouse2D::SetTarget(const Vector2& target)
    // void ConstraintMouse2D::SetMaxForce(float maxForce)
    // void ConstraintMouse2D::SetFrequencyHz(float frequencyHz)
    // void ConstraintMouse2D::SetDampingRatio(float dampingRatio)
    // const Vector2& ConstraintMouse2D::GetTarget() const
    // float ConstraintMouse2D::GetMaxForce() const
    // float ConstraintMouse2D::GetFrequencyHz() const
    // float ConstraintMouse2D::GetDampingRatio() const
}

// class ConstraintPrismatic2D | File: ../Urho2D/ConstraintPrismatic2D.h
void CollectMembers_ConstraintPrismatic2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintPrismatic2D::SetAnchor(const Vector2& anchor)
    // void ConstraintPrismatic2D::SetAxis(const Vector2& axis)
    // void ConstraintPrismatic2D::SetEnableLimit(bool enableLimit)
    // void ConstraintPrismatic2D::SetLowerTranslation(float lowerTranslation)
    // void ConstraintPrismatic2D::SetUpperTranslation(float upperTranslation)
    // void ConstraintPrismatic2D::SetEnableMotor(bool enableMotor)
    // void ConstraintPrismatic2D::SetMaxMotorForce(float maxMotorForce)
    // void ConstraintPrismatic2D::SetMotorSpeed(float motorSpeed)
    // const Vector2& ConstraintPrismatic2D::GetAnchor() const
    // const Vector2& ConstraintPrismatic2D::GetAxis() const
    // bool ConstraintPrismatic2D::GetEnableLimit() const
    // float ConstraintPrismatic2D::GetLowerTranslation() const
    // float ConstraintPrismatic2D::GetUpperTranslation() const
    // bool ConstraintPrismatic2D::GetEnableMotor() const
    // float ConstraintPrismatic2D::GetMaxMotorForce() const
    // float ConstraintPrismatic2D::GetMotorSpeed() const
}

// class ConstraintPulley2D | File: ../Urho2D/ConstraintPulley2D.h
void CollectMembers_ConstraintPulley2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintPulley2D::SetOwnerBodyGroundAnchor(const Vector2& groundAnchor)
    // void ConstraintPulley2D::SetOtherBodyGroundAnchor(const Vector2& groundAnchor)
    // void ConstraintPulley2D::SetOwnerBodyAnchor(const Vector2& anchor)
    // void ConstraintPulley2D::SetOtherBodyAnchor(const Vector2& anchor)
    // void ConstraintPulley2D::SetRatio(float ratio)
    // const Vector2& ConstraintPulley2D::GetOwnerBodyGroundAnchor() const
    // const Vector2& ConstraintPulley2D::GetOtherBodyGroundAnchor() const
    // const Vector2& ConstraintPulley2D::GetOwnerBodyAnchor() const
    // const Vector2& ConstraintPulley2D::GetOtherBodyAnchor() const
    // float ConstraintPulley2D::GetRatio() const
}

// class ConstraintRevolute2D | File: ../Urho2D/ConstraintRevolute2D.h
void CollectMembers_ConstraintRevolute2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintRevolute2D::SetAnchor(const Vector2& anchor)
    // void ConstraintRevolute2D::SetEnableLimit(bool enableLimit)
    // void ConstraintRevolute2D::SetLowerAngle(float lowerAngle)
    // void ConstraintRevolute2D::SetUpperAngle(float upperAngle)
    // void ConstraintRevolute2D::SetEnableMotor(bool enableMotor)
    // void ConstraintRevolute2D::SetMotorSpeed(float motorSpeed)
    // void ConstraintRevolute2D::SetMaxMotorTorque(float maxMotorTorque)
    // const Vector2& ConstraintRevolute2D::GetAnchor() const
    // bool ConstraintRevolute2D::GetEnableLimit() const
    // float ConstraintRevolute2D::GetLowerAngle() const
    // float ConstraintRevolute2D::GetUpperAngle() const
    // bool ConstraintRevolute2D::GetEnableMotor() const
    // float ConstraintRevolute2D::GetMotorSpeed() const
    // float ConstraintRevolute2D::GetMaxMotorTorque() const
}

// class ConstraintRope2D | File: ../Urho2D/ConstraintRope2D.h
void CollectMembers_ConstraintRope2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintRope2D::SetOwnerBodyAnchor(const Vector2& anchor)
    // void ConstraintRope2D::SetOtherBodyAnchor(const Vector2& anchor)
    // void ConstraintRope2D::SetMaxLength(float maxLength)
    // const Vector2& ConstraintRope2D::GetOwnerBodyAnchor() const
    // const Vector2& ConstraintRope2D::GetOtherBodyAnchor() const
    // float ConstraintRope2D::GetMaxLength() const
}

// class ConstraintWeld2D | File: ../Urho2D/ConstraintWeld2D.h
void CollectMembers_ConstraintWeld2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintWeld2D::SetAnchor(const Vector2& anchor)
    // void ConstraintWeld2D::SetFrequencyHz(float frequencyHz)
    // void ConstraintWeld2D::SetDampingRatio(float dampingRatio)
    // const Vector2& ConstraintWeld2D::GetAnchor() const
    // float ConstraintWeld2D::GetFrequencyHz() const
    // float ConstraintWeld2D::GetDampingRatio() const
}

// class ConstraintWheel2D | File: ../Urho2D/ConstraintWheel2D.h
void CollectMembers_ConstraintWheel2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)

    // void ConstraintWheel2D::SetAnchor(const Vector2& anchor)
    // void ConstraintWheel2D::SetAxis(const Vector2& axis)
    // void ConstraintWheel2D::SetEnableMotor(bool enableMotor)
    // void ConstraintWheel2D::SetMaxMotorTorque(float maxMotorTorque)
    // void ConstraintWheel2D::SetMotorSpeed(float motorSpeed)
    // void ConstraintWheel2D::SetFrequencyHz(float frequencyHz)
    // void ConstraintWheel2D::SetDampingRatio(float dampingRatio)
    // const Vector2& ConstraintWheel2D::GetAnchor() const
    // const Vector2& ConstraintWheel2D::GetAxis() const
    // bool ConstraintWheel2D::GetEnableMotor() const
    // float ConstraintWheel2D::GetMaxMotorTorque() const
    // float ConstraintWheel2D::GetMotorSpeed() const
    // float ConstraintWheel2D::GetFrequencyHz() const
    // float ConstraintWheel2D::GetDampingRatio() const
}

// struct DelayedWorldTransform2D | File: ../Urho2D/PhysicsWorld2D.h
void CollectMembers_DelayedWorldTransform2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Drawable2D | File: ../Urho2D/Drawable2D.h
void CollectMembers_Drawable2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -void Drawable::OnSetEnabled() override

    // void Drawable2D::OnSetEnabled() override
    // void Drawable2D::SetLayer(int layer)
    // void Drawable2D::SetOrderInLayer(int orderInLayer)
    // int Drawable2D::GetLayer() const
    // int Drawable2D::GetOrderInLayer() const
    // const Vector<SourceBatch2D>& Drawable2D::GetSourceBatches()
}

// struct Particle2D | File: ../Urho2D/ParticleEmitter2D.h
void CollectMembers_Particle2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ParticleEffect2D | File: ../Urho2D/ParticleEffect2D.h
void CollectMembers_ParticleEffect2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()
    // -virtual bool Resource::Save(Serializer& dest) const

    // bool ParticleEffect2D::BeginLoad(Deserializer& source) override
    // bool ParticleEffect2D::EndLoad() override
    // bool ParticleEffect2D::Save(Serializer& dest) const override
    // void ParticleEffect2D::SetSprite(Sprite2D* sprite)
    // void ParticleEffect2D::SetSourcePositionVariance(const Vector2& sourcePositionVariance)
    // void ParticleEffect2D::SetSpeed(float speed)
    // void ParticleEffect2D::SetSpeedVariance(float speedVariance)
    // void ParticleEffect2D::SetParticleLifeSpan(float particleLifeSpan)
    // void ParticleEffect2D::SetParticleLifespanVariance(float particleLifespanVariance)
    // void ParticleEffect2D::SetAngle(float angle)
    // void ParticleEffect2D::SetAngleVariance(float angleVariance)
    // void ParticleEffect2D::SetGravity(const Vector2& gravity)
    // void ParticleEffect2D::SetRadialAcceleration(float radialAcceleration)
    // void ParticleEffect2D::SetTangentialAcceleration(float tangentialAcceleration)
    // void ParticleEffect2D::SetRadialAccelVariance(float radialAccelVariance)
    // void ParticleEffect2D::SetTangentialAccelVariance(float tangentialAccelVariance)
    // void ParticleEffect2D::SetStartColor(const Color& startColor)
    // void ParticleEffect2D::SetStartColorVariance(const Color& startColorVariance)
    // void ParticleEffect2D::SetFinishColor(const Color& finishColor)
    // void ParticleEffect2D::SetFinishColorVariance(const Color& finishColorVariance)
    // void ParticleEffect2D::SetMaxParticles(int maxParticles)
    // void ParticleEffect2D::SetStartParticleSize(float startParticleSize)
    // void ParticleEffect2D::SetStartParticleSizeVariance(float startParticleSizeVariance)
    // void ParticleEffect2D::SetFinishParticleSize(float finishParticleSize)
    // void ParticleEffect2D::SetFinishParticleSizeVariance(float finishParticleSizeVariance)
    // void ParticleEffect2D::SetDuration(float duration)
    // void ParticleEffect2D::SetEmitterType(EmitterType2D emitterType)
    // void ParticleEffect2D::SetMaxRadius(float maxRadius)
    // void ParticleEffect2D::SetMaxRadiusVariance(float maxRadiusVariance)
    // void ParticleEffect2D::SetMinRadius(float minRadius)
    // void ParticleEffect2D::SetMinRadiusVariance(float minRadiusVariance)
    // void ParticleEffect2D::SetRotatePerSecond(float rotatePerSecond)
    // void ParticleEffect2D::SetRotatePerSecondVariance(float rotatePerSecondVariance)
    // void ParticleEffect2D::SetBlendMode(BlendMode blendMode)
    // void ParticleEffect2D::SetRotationStart(float rotationStart)
    // void ParticleEffect2D::SetRotationStartVariance(float rotationStartVariance)
    // void ParticleEffect2D::SetRotationEnd(float rotationEnd)
    // void ParticleEffect2D::SetRotationEndVariance(float rotationEndVariance)
    // SharedPtr<ParticleEffect2D> ParticleEffect2D::Clone(const String& cloneName=String::EMPTY) const
    // Sprite2D* ParticleEffect2D::GetSprite() const
    // const Vector2& ParticleEffect2D::GetSourcePositionVariance() const
    // float ParticleEffect2D::GetSpeed() const
    // float ParticleEffect2D::GetSpeedVariance() const
    // float ParticleEffect2D::GetParticleLifeSpan() const
    // float ParticleEffect2D::GetParticleLifespanVariance() const
    // float ParticleEffect2D::GetAngle() const
    // float ParticleEffect2D::GetAngleVariance() const
    // const Vector2& ParticleEffect2D::GetGravity() const
    // float ParticleEffect2D::GetRadialAcceleration() const
    // float ParticleEffect2D::GetTangentialAcceleration() const
    // float ParticleEffect2D::GetRadialAccelVariance() const
    // float ParticleEffect2D::GetTangentialAccelVariance() const
    // const Color& ParticleEffect2D::GetStartColor() const
    // const Color& ParticleEffect2D::GetStartColorVariance() const
    // const Color& ParticleEffect2D::GetFinishColor() const
    // const Color& ParticleEffect2D::GetFinishColorVariance() const
    // int ParticleEffect2D::GetMaxParticles() const
    // float ParticleEffect2D::GetStartParticleSize() const
    // float ParticleEffect2D::GetStartParticleSizeVariance() const
    // float ParticleEffect2D::GetFinishParticleSize() const
    // float ParticleEffect2D::GetFinishParticleSizeVariance() const
    // float ParticleEffect2D::GetDuration() const
    // EmitterType2D ParticleEffect2D::GetEmitterType() const
    // float ParticleEffect2D::GetMaxRadius() const
    // float ParticleEffect2D::GetMaxRadiusVariance() const
    // float ParticleEffect2D::GetMinRadius() const
    // float ParticleEffect2D::GetMinRadiusVariance() const
    // float ParticleEffect2D::GetRotatePerSecond() const
    // float ParticleEffect2D::GetRotatePerSecondVariance() const
    // BlendMode ParticleEffect2D::GetBlendMode() const
    // float ParticleEffect2D::GetRotationStart() const
    // float ParticleEffect2D::GetRotationStartVariance() const
    // float ParticleEffect2D::GetRotationEnd() const
    // float ParticleEffect2D::GetRotationEndVariance() const
}

// class ParticleEmitter2D | File: ../Urho2D/ParticleEmitter2D.h
void CollectMembers_ParticleEmitter2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable2D(methods);

    // -static void Drawable2D::RegisterObject(Context* context)
    // -virtual void Drawable::Update(const FrameInfo& frame)
    // -void Drawable2D::OnSetEnabled() override

    // void ParticleEmitter2D::OnSetEnabled() override
    // void ParticleEmitter2D::SetEffect(ParticleEffect2D* effect)
    // void ParticleEmitter2D::SetSprite(Sprite2D* sprite)
    // void ParticleEmitter2D::SetBlendMode(BlendMode blendMode)
    // void ParticleEmitter2D::SetMaxParticles(unsigned maxParticles)
    // void ParticleEmitter2D::SetEmitting(bool enable)
    // ParticleEffect2D* ParticleEmitter2D::GetEffect() const
    // Sprite2D* ParticleEmitter2D::GetSprite() const
    // BlendMode ParticleEmitter2D::GetBlendMode() const
    // unsigned ParticleEmitter2D::GetMaxParticles() const
    // void ParticleEmitter2D::SetParticleEffectAttr(const ResourceRef& value)
    // ResourceRef ParticleEmitter2D::GetParticleEffectAttr() const
    // void ParticleEmitter2D::SetSpriteAttr(const ResourceRef& value)
    // ResourceRef ParticleEmitter2D::GetSpriteAttr() const
    // bool ParticleEmitter2D::IsEmitting() const
}

// struct PhysicsRaycastResult2D | File: ../Urho2D/PhysicsWorld2D.h
void CollectMembers_PhysicsRaycastResult2D(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool PhysicsRaycastResult2D::operator!=(const PhysicsRaycastResult2D& rhs) const
}

// class PhysicsWorld2D | File: ../Urho2D/PhysicsWorld2D.h
void CollectMembers_PhysicsWorld2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // void PhysicsWorld2D::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void PhysicsWorld2D::BeginContact(b2Contact* contact) override
    // void PhysicsWorld2D::EndContact(b2Contact* contact) override
    // void PhysicsWorld2D::PreSolve(b2Contact* contact, const b2Manifold* oldManifold) override
    // void PhysicsWorld2D::DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color) override
    // void PhysicsWorld2D::DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color) override
    // void PhysicsWorld2D::DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color) override
    // void PhysicsWorld2D::DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color) override
    // void PhysicsWorld2D::DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color) override
    // void PhysicsWorld2D::DrawTransform(const b2Transform& xf) override
    // void PhysicsWorld2D::DrawPoint(const b2Vec2& p, float32 size, const b2Color& color) override
    // void PhysicsWorld2D::Update(float timeStep)
    // void PhysicsWorld2D::DrawDebugGeometry()
    // void PhysicsWorld2D::SetUpdateEnabled(bool enable)
    // void PhysicsWorld2D::SetDrawShape(bool drawShape)
    // void PhysicsWorld2D::SetDrawJoint(bool drawJoint)
    // void PhysicsWorld2D::SetDrawAabb(bool drawAabb)
    // void PhysicsWorld2D::SetDrawPair(bool drawPair)
    // void PhysicsWorld2D::SetDrawCenterOfMass(bool drawCenterOfMass)
    // void PhysicsWorld2D::SetAllowSleeping(bool enable)
    // void PhysicsWorld2D::SetWarmStarting(bool enable)
    // void PhysicsWorld2D::SetContinuousPhysics(bool enable)
    // void PhysicsWorld2D::SetSubStepping(bool enable)
    // void PhysicsWorld2D::SetGravity(const Vector2& gravity)
    // void PhysicsWorld2D::SetAutoClearForces(bool enable)
    // void PhysicsWorld2D::SetVelocityIterations(int velocityIterations)
    // void PhysicsWorld2D::SetPositionIterations(int positionIterations)
    // void PhysicsWorld2D::AddRigidBody(RigidBody2D* rigidBody)
    // void PhysicsWorld2D::RemoveRigidBody(RigidBody2D* rigidBody)
    // void PhysicsWorld2D::AddDelayedWorldTransform(const DelayedWorldTransform2D& transform)
    // void PhysicsWorld2D::Raycast(PODVector<PhysicsRaycastResult2D>& results, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask=M_MAX_UNSIGNED)
    // void PhysicsWorld2D::RaycastSingle(PhysicsRaycastResult2D& result, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask=M_MAX_UNSIGNED)
    // RigidBody2D* PhysicsWorld2D::GetRigidBody(const Vector2& point, unsigned collisionMask=M_MAX_UNSIGNED)
    // RigidBody2D* PhysicsWorld2D::GetRigidBody(int screenX, int screenY, unsigned collisionMask=M_MAX_UNSIGNED)
    // void PhysicsWorld2D::GetRigidBodies(PODVector<RigidBody2D*>& results, const Rect& aabb, unsigned collisionMask=M_MAX_UNSIGNED)
    // bool PhysicsWorld2D::IsUpdateEnabled() const
    // bool PhysicsWorld2D::GetDrawShape() const
    // bool PhysicsWorld2D::GetDrawJoint() const
    // bool PhysicsWorld2D::GetDrawAabb() const
    // bool PhysicsWorld2D::GetDrawPair() const
    // bool PhysicsWorld2D::GetDrawCenterOfMass() const
    // bool PhysicsWorld2D::GetAllowSleeping() const
    // bool PhysicsWorld2D::GetWarmStarting() const
    // bool PhysicsWorld2D::GetContinuousPhysics() const
    // bool PhysicsWorld2D::GetSubStepping() const
    // bool PhysicsWorld2D::GetAutoClearForces() const
    // const Vector2& PhysicsWorld2D::GetGravity() const
    // int PhysicsWorld2D::GetVelocityIterations() const
    // int PhysicsWorld2D::GetPositionIterations() const
    // b2World* PhysicsWorld2D::GetWorld()
    // void PhysicsWorld2D::SetApplyingTransforms(bool enable)
    // bool PhysicsWorld2D::IsApplyingTransforms() const
}

// class PropertySet2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_PropertySet2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // void PropertySet2D::Load(const XMLElement& element)
    // bool PropertySet2D::HasProperty(const String& name) const
    // const String& PropertySet2D::GetProperty(const String& name) const
}

// class Renderer2D | File: ../Urho2D/Renderer2D.h
void CollectMembers_Renderer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -virtual UpdateGeometryType Drawable::GetUpdateGeometryType()
    // -virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // -virtual void Drawable::UpdateBatches(const FrameInfo& frame)
    // -virtual void Drawable::UpdateGeometry(const FrameInfo& frame)

    // void Renderer2D::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // void Renderer2D::UpdateBatches(const FrameInfo& frame) override
    // void Renderer2D::UpdateGeometry(const FrameInfo& frame) override
    // UpdateGeometryType Renderer2D::GetUpdateGeometryType() override
    // void Renderer2D::AddDrawable(Drawable2D* drawable)
    // void Renderer2D::RemoveDrawable(Drawable2D* drawable)
    // Material* Renderer2D::GetMaterial(Texture2D* texture, BlendMode blendMode)
    // bool Renderer2D::CheckVisibility(Drawable2D* drawable) const
}

// class RigidBody2D | File: ../Urho2D/RigidBody2D.h
void CollectMembers_RigidBody2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::OnSetEnabled()

    // void RigidBody2D::OnSetEnabled() override
    // void RigidBody2D::SetBodyType(BodyType2D type)
    // void RigidBody2D::SetMass(float mass)
    // void RigidBody2D::SetInertia(float inertia)
    // void RigidBody2D::SetMassCenter(const Vector2& center)
    // void RigidBody2D::SetUseFixtureMass(bool useFixtureMass)
    // void RigidBody2D::SetLinearDamping(float linearDamping)
    // void RigidBody2D::SetAngularDamping(float angularDamping)
    // void RigidBody2D::SetAllowSleep(bool allowSleep)
    // void RigidBody2D::SetFixedRotation(bool fixedRotation)
    // void RigidBody2D::SetBullet(bool bullet)
    // void RigidBody2D::SetGravityScale(float gravityScale)
    // void RigidBody2D::SetAwake(bool awake)
    // void RigidBody2D::SetLinearVelocity(const Vector2& linearVelocity)
    // void RigidBody2D::SetAngularVelocity(float angularVelocity)
    // void RigidBody2D::ApplyForce(const Vector2& force, const Vector2& point, bool wake)
    // void RigidBody2D::ApplyForceToCenter(const Vector2& force, bool wake)
    // void RigidBody2D::ApplyTorque(float torque, bool wake)
    // void RigidBody2D::ApplyLinearImpulse(const Vector2& impulse, const Vector2& point, bool wake)
    // void RigidBody2D::ApplyLinearImpulseToCenter(const Vector2& impulse, bool wake)
    // void RigidBody2D::ApplyAngularImpulse(float impulse, bool wake)
    // void RigidBody2D::CreateBody()
    // void RigidBody2D::ReleaseBody()
    // void RigidBody2D::ApplyWorldTransform()
    // void RigidBody2D::ApplyWorldTransform(const Vector3& newWorldPosition, const Quaternion& newWorldRotation)
    // void RigidBody2D::AddCollisionShape2D(CollisionShape2D* collisionShape)
    // void RigidBody2D::RemoveCollisionShape2D(CollisionShape2D* collisionShape)
    // void RigidBody2D::AddConstraint2D(Constraint2D* constraint)
    // void RigidBody2D::RemoveConstraint2D(Constraint2D* constraint)
    // BodyType2D RigidBody2D::GetBodyType() const
    // float RigidBody2D::GetMass() const
    // float RigidBody2D::GetInertia() const
    // Vector2 RigidBody2D::GetMassCenter() const
    // bool RigidBody2D::GetUseFixtureMass() const
    // float RigidBody2D::GetLinearDamping() const
    // float RigidBody2D::GetAngularDamping() const
    // bool RigidBody2D::IsAllowSleep() const
    // bool RigidBody2D::IsFixedRotation() const
    // bool RigidBody2D::IsBullet() const
    // float RigidBody2D::GetGravityScale() const
    // bool RigidBody2D::IsAwake() const
    // Vector2 RigidBody2D::GetLinearVelocity() const
    // float RigidBody2D::GetAngularVelocity() const
    // b2Body* RigidBody2D::GetBody() const
}

// struct SourceBatch2D | File: ../Urho2D/Drawable2D.h
void CollectMembers_SourceBatch2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Sprite2D | File: ../Urho2D/Sprite2D.h
void CollectMembers_Sprite2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()

    // bool Sprite2D::BeginLoad(Deserializer& source) override
    // bool Sprite2D::EndLoad() override
    // void Sprite2D::SetTexture(Texture2D* texture)
    // void Sprite2D::SetRectangle(const IntRect& rectangle)
    // void Sprite2D::SetHotSpot(const Vector2& hotSpot)
    // void Sprite2D::SetOffset(const IntVector2& offset)
    // void Sprite2D::SetTextureEdgeOffset(float offset)
    // void Sprite2D::SetSpriteSheet(SpriteSheet2D* spriteSheet)
    // Texture2D* Sprite2D::GetTexture() const
    // const IntRect& Sprite2D::GetRectangle() const
    // const Vector2& Sprite2D::GetHotSpot() const
    // const IntVector2& Sprite2D::GetOffset() const
    // float Sprite2D::GetTextureEdgeOffset() const
    // SpriteSheet2D* Sprite2D::GetSpriteSheet() const
    // bool Sprite2D::GetDrawRectangle(Rect& rect, bool flipX=false, bool flipY=false) const
    // bool Sprite2D::GetDrawRectangle(Rect& rect, const Vector2& hotSpot, bool flipX=false, bool flipY=false) const
    // bool Sprite2D::GetTextureRectangle(Rect& rect, bool flipX=false, bool flipY=false) const
}

// class SpriteSheet2D | File: ../Urho2D/SpriteSheet2D.h
void CollectMembers_SpriteSheet2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()

    // bool SpriteSheet2D::BeginLoad(Deserializer& source) override
    // bool SpriteSheet2D::EndLoad() override
    // void SpriteSheet2D::SetTexture(Texture2D* texture)
    // void SpriteSheet2D::DefineSprite(const String& name, const IntRect& rectangle, const Vector2& hotSpot=Vector2(0.5f, 0.5f), const IntVector2& offset=IntVector2::ZERO)
    // Texture2D* SpriteSheet2D::GetTexture() const
    // Sprite2D* SpriteSheet2D::GetSprite(const String& name) const
    // const HashMap<String, SharedPtr<Sprite2D>>& SpriteSheet2D::GetSpriteMapping() const
}

// class StaticSprite2D | File: ../Urho2D/StaticSprite2D.h
void CollectMembers_StaticSprite2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable2D(methods);

    // -static void Drawable2D::RegisterObject(Context* context)

    // void StaticSprite2D::SetSprite(Sprite2D* sprite)
    // void StaticSprite2D::SetDrawRect(const Rect& rect)
    // void StaticSprite2D::SetTextureRect(const Rect& rect)
    // void StaticSprite2D::SetBlendMode(BlendMode blendMode)
    // void StaticSprite2D::SetFlip(bool flipX, bool flipY, bool swapXY=false)
    // void StaticSprite2D::SetFlipX(bool flipX)
    // void StaticSprite2D::SetFlipY(bool flipY)
    // void StaticSprite2D::SetSwapXY(bool swapXY)
    // void StaticSprite2D::SetColor(const Color& color)
    // void StaticSprite2D::SetAlpha(float alpha)
    // void StaticSprite2D::SetUseHotSpot(bool useHotSpot)
    // void StaticSprite2D::SetUseDrawRect(bool useDrawRect)
    // void StaticSprite2D::SetUseTextureRect(bool useTextureRect)
    // void StaticSprite2D::SetHotSpot(const Vector2& hotspot)
    // void StaticSprite2D::SetCustomMaterial(Material* customMaterial)
    // Sprite2D* StaticSprite2D::GetSprite() const
    // const Rect& StaticSprite2D::GetDrawRect() const
    // const Rect& StaticSprite2D::GetTextureRect() const
    // BlendMode StaticSprite2D::GetBlendMode() const
    // bool StaticSprite2D::GetFlipX() const
    // bool StaticSprite2D::GetFlipY() const
    // bool StaticSprite2D::GetSwapXY() const
    // const Color& StaticSprite2D::GetColor() const
    // float StaticSprite2D::GetAlpha() const
    // bool StaticSprite2D::GetUseHotSpot() const
    // bool StaticSprite2D::GetUseDrawRect() const
    // bool StaticSprite2D::GetUseTextureRect() const
    // const Vector2& StaticSprite2D::GetHotSpot() const
    // Material* StaticSprite2D::GetCustomMaterial() const
    // void StaticSprite2D::SetSpriteAttr(const ResourceRef& value)
    // ResourceRef StaticSprite2D::GetSpriteAttr() const
    // void StaticSprite2D::SetCustomMaterialAttr(const ResourceRef& value)
    // ResourceRef StaticSprite2D::GetCustomMaterialAttr() const
}

// class StretchableSprite2D | File: ../Urho2D/StretchableSprite2D.h
void CollectMembers_StretchableSprite2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_StaticSprite2D(methods);

    // -static void StaticSprite2D::RegisterObject(Context* context)

    // void StretchableSprite2D::SetBorder(const IntRect& border)
    // const IntRect& StretchableSprite2D::GetBorder() const
}

// class Tile2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_Tile2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // unsigned Tile2D::GetGid() const
    // bool Tile2D::GetFlipX() const
    // bool Tile2D::GetFlipY() const
    // bool Tile2D::GetSwapXY() const
    // Sprite2D* Tile2D::GetSprite() const
    // bool Tile2D::HasProperty(const String& name) const
    // const String& Tile2D::GetProperty(const String& name) const
}

// class TileMap2D | File: ../Urho2D/TileMap2D.h
void CollectMembers_TileMap2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // void TileMap2D::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void TileMap2D::SetTmxFile(TmxFile2D* tmxFile)
    // void TileMap2D::DrawDebugGeometry()
    // TmxFile2D* TileMap2D::GetTmxFile() const
    // const TileMapInfo2D& TileMap2D::GetInfo() const
    // unsigned TileMap2D::GetNumLayers() const
    // TileMapLayer2D* TileMap2D::GetLayer(unsigned index) const
    // Vector2 TileMap2D::TileIndexToPosition(int x, int y) const
    // bool TileMap2D::PositionToTileIndex(int& x, int& y, const Vector2& position) const
    // void TileMap2D::SetTmxFileAttr(const ResourceRef& value)
    // ResourceRef TileMap2D::GetTmxFileAttr() const
    // Vector<SharedPtr<TileMapObject2D>> TileMap2D::GetTileCollisionShapes(unsigned gid) const
}

// struct TileMapInfo2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_TileMapInfo2D(Vector<RegisterObjectMethodArgs>& methods)
{
    // float TileMapInfo2D::GetMapWidth() const
    // float TileMapInfo2D::GetMapHeight() const
    // Vector2 TileMapInfo2D::ConvertPosition(const Vector2& position) const
    // Vector2 TileMapInfo2D::TileIndexToPosition(int x, int y) const
    // bool TileMapInfo2D::PositionToTileIndex(int& x, int& y, const Vector2& position) const
}

// class TileMapLayer2D | File: ../Urho2D/TileMapLayer2D.h
void CollectMembers_TileMapLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // void TileMapLayer2D::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
    // void TileMapLayer2D::Initialize(TileMap2D* tileMap, const TmxLayer2D* tmxLayer)
    // void TileMapLayer2D::SetDrawOrder(int drawOrder)
    // void TileMapLayer2D::SetVisible(bool visible)
    // TileMap2D* TileMapLayer2D::GetTileMap() const
    // const TmxLayer2D* TileMapLayer2D::GetTmxLayer() const
    // int TileMapLayer2D::GetDrawOrder() const
    // bool TileMapLayer2D::IsVisible() const
    // bool TileMapLayer2D::HasProperty(const String& name) const
    // const String& TileMapLayer2D::GetProperty(const String& name) const
    // TileMapLayerType2D TileMapLayer2D::GetLayerType() const
    // int TileMapLayer2D::GetWidth() const
    // int TileMapLayer2D::GetHeight() const
    // Node* TileMapLayer2D::GetTileNode(int x, int y) const
    // Tile2D* TileMapLayer2D::GetTile(int x, int y) const
    // unsigned TileMapLayer2D::GetNumObjects() const
    // TileMapObject2D* TileMapLayer2D::GetObject(unsigned index) const
    // Node* TileMapLayer2D::GetObjectNode(unsigned index) const
    // Node* TileMapLayer2D::GetImageNode() const
}

// class TileMapObject2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_TileMapObject2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // TileMapObjectType2D TileMapObject2D::GetObjectType() const
    // const String& TileMapObject2D::GetName() const
    // const String& TileMapObject2D::GetType() const
    // const Vector2& TileMapObject2D::GetPosition() const
    // const Vector2& TileMapObject2D::GetSize() const
    // unsigned TileMapObject2D::GetNumPoints() const
    // const Vector2& TileMapObject2D::GetPoint(unsigned index) const
    // unsigned TileMapObject2D::GetTileGid() const
    // bool TileMapObject2D::GetTileFlipX() const
    // bool TileMapObject2D::GetTileFlipY() const
    // bool TileMapObject2D::GetTileSwapXY() const
    // Sprite2D* TileMapObject2D::GetTileSprite() const
    // bool TileMapObject2D::HasProperty(const String& name) const
    // const String& TileMapObject2D::GetProperty(const String& name) const
}

// class TmxFile2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxFile2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()

    // bool TmxFile2D::BeginLoad(Deserializer& source) override
    // bool TmxFile2D::EndLoad() override
    // bool TmxFile2D::SetInfo(Orientation2D orientation, int width, int height, float tileWidth, float tileHeight)
    // void TmxFile2D::AddLayer(unsigned index, TmxLayer2D* layer)
    // void TmxFile2D::AddLayer(Urho3D::TmxLayer2D* layer)
    // const TileMapInfo2D& TmxFile2D::GetInfo() const
    // Sprite2D* TmxFile2D::GetTileSprite(unsigned gid) const
    // Vector<SharedPtr<TileMapObject2D>> TmxFile2D::GetTileCollisionShapes(unsigned gid) const
    // PropertySet2D* TmxFile2D::GetTilePropertySet(unsigned gid) const
    // unsigned TmxFile2D::GetNumLayers() const
    // const TmxLayer2D* TmxFile2D::GetLayer(unsigned index) const
    // void TmxFile2D::SetSpriteTextureEdgeOffset(float offset)
    // float TmxFile2D::GetSpriteTextureEdgeOffset() const
}

// class TmxImageLayer2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxImageLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_TmxLayer2D(methods);

    // bool TmxImageLayer2D::Load(const XMLElement& element, const TileMapInfo2D& info)
    // const Vector2& TmxImageLayer2D::GetPosition() const
    // const String& TmxImageLayer2D::GetSource() const
    // Sprite2D* TmxImageLayer2D::GetSprite() const
}

// class TmxLayer2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // TmxFile2D* TmxLayer2D::GetTmxFile() const
    // TileMapLayerType2D TmxLayer2D::GetType() const
    // const String& TmxLayer2D::GetName() const
    // int TmxLayer2D::GetWidth() const
    // int TmxLayer2D::GetHeight() const
    // bool TmxLayer2D::IsVisible() const
    // bool TmxLayer2D::HasProperty(const String& name) const
    // const String& TmxLayer2D::GetProperty(const String& name) const
}

// class TmxObjectGroup2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxObjectGroup2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_TmxLayer2D(methods);

    // bool TmxObjectGroup2D::Load(const XMLElement& element, const TileMapInfo2D& info)
    // void TmxObjectGroup2D::StoreObject(const XMLElement& objectElem, const SharedPtr<TileMapObject2D>& object, const TileMapInfo2D& info, bool isTile=false)
    // unsigned TmxObjectGroup2D::GetNumObjects() const
    // TileMapObject2D* TmxObjectGroup2D::GetObject(unsigned index) const
}

// class TmxTileLayer2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxTileLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_TmxLayer2D(methods);

    // bool TmxTileLayer2D::Load(const XMLElement& element, const TileMapInfo2D& info)
    // Tile2D* TmxTileLayer2D::GetTile(int x, int y) const
}

// struct Vertex2D | File: ../Urho2D/Drawable2D.h
void CollectMembers_Vertex2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct ViewBatchInfo2D | File: ../Urho2D/Renderer2D.h
void CollectMembers_ViewBatchInfo2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

#endif // def URHO3D_URHO2D

} // namespace Urho3D
