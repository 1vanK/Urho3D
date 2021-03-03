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
}

// class AllContentOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_AllContentOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // void AllContentOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
    // Error: type "Drawable**" can not automatically bind
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

    // VariantVector AnimatedModel::GetAnimationStatesAttr() const
    // Error: type "VariantVector" can not automatically bind

    // VariantVector AnimatedModel::GetBonesEnabledAttr() const
    // Error: type "VariantVector" can not automatically bind

    // const Vector<PODVector<unsigned>>& AnimatedModel::GetGeometryBoneMappings() const
    // Error: type "const Vector<PODVector<unsigned>>&" can not automatically bind

    // const Vector<PODVector<Matrix3x4>>& AnimatedModel::GetGeometrySkinMatrices() const
    // Error: type "const Vector<PODVector<Matrix3x4>>&" can not automatically bind

    // const Vector<ModelMorph>& AnimatedModel::GetMorphs() const
    // Error: type "const Vector<ModelMorph>&" can not automatically bind

    // const PODVector<unsigned char>& AnimatedModel::GetMorphsAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // void AnimatedModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    // void AnimatedModel::SetAnimationStatesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    // void AnimatedModel::SetBonesEnabledAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    // void AnimatedModel::SetMorphsAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
}

// class Animation | File: ../Graphics/Animation.h
void CollectMembers_Animation(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ResourceWithMetadata(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const

    // const HashMap<StringHash, AnimationTrack>& Animation::GetTracks() const
    // Error: type "const HashMap<StringHash, AnimationTrack>&" can not automatically bind

    // AnimationTriggerPoint* Animation::GetTrigger(unsigned index)
    // Error: type "AnimationTriggerPoint*" can not automatically bind

    // const Vector<AnimationTriggerPoint>& Animation::GetTriggers() const
    // Error: type "const Vector<AnimationTriggerPoint>&" can not automatically bind
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

    // const Vector<AnimationControl>& AnimationController::GetAnimations() const
    // Error: type "const Vector<AnimationControl>&" can not automatically bind

    // VariantVector AnimationController::GetAnimationsAttr() const
    // Error: type "VariantVector" can not automatically bind

    // const PODVector<unsigned char>& AnimationController::GetNetAnimationsAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // VariantVector AnimationController::GetNodeAnimationStatesAttr() const
    // Error: type "VariantVector" can not automatically bind

    // void AnimationController::SetAnimationsAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    // void AnimationController::SetNetAnimationsAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // void AnimationController::SetNodeAnimationStatesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
}

// struct AnimationKeyFrame | File: ../Graphics/Animation.h
void CollectMembers_AnimationKeyFrame(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class AnimationState | File: ../Graphics/AnimationState.h
void CollectMembers_AnimationState(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
}

// struct AnimationStateTrack | File: ../Graphics/AnimationState.h
void CollectMembers_AnimationStateTrack(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct AnimationTrack | File: ../Graphics/Animation.h
void CollectMembers_AnimationTrack(Vector<RegisterObjectMethodArgs>& methods)
{
    // AnimationKeyFrame* AnimationTrack::GetKeyFrame(unsigned index)
    // Error: type "AnimationKeyFrame*" can not automatically bind
}

// struct AnimationTriggerPoint | File: ../Graphics/Animation.h
void CollectMembers_AnimationTriggerPoint(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class AreaAllocator | File: ../Math/AreaAllocator.h
void CollectMembers_AreaAllocator(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct AsyncProgress | File: ../Scene/Scene.h
void CollectMembers_AsyncProgress(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class AttributeAccessor | File: ../Core/Attribute.h
void CollectMembers_AttributeAccessor(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
}

// class AttributeAnimationInfo | File: ../Scene/Animatable.h
void CollectMembers_AttributeAnimationInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ValueAnimationInfo(methods);
}

// struct AttributeHandle | File: ../Core/Attribute.h
void CollectMembers_AttributeHandle(Vector<RegisterObjectMethodArgs>& methods)
{
    // AttributeHandle& AttributeHandle::SetMetadata(StringHash key, const Variant& value)
    // Error: type "AttributeHandle" can not automatically bind bacause have @nobind mark
}

// struct AttributeInfo | File: ../Core/Attribute.h
void CollectMembers_AttributeInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    // template<class T> T AttributeInfo::GetMetadata(const StringHash& key) const
    // Error: type "T" can not automatically bind
}

// class Audio | File: ../Audio/Audio.h
void CollectMembers_Audio(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Audio::MixOutput(void* dest, unsigned samples)
    // Error: type "void*" can not automatically bind
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
}

// struct Batch | File: ../Graphics/Batch.h
void CollectMembers_Batch(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct BatchGroup | File: ../Graphics/Batch.h
void CollectMembers_BatchGroup(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Batch(methods);

    // -void Batch::Draw(View* view, Camera* camera, bool allowDepthWrite) const

    // void BatchGroup::SetInstancingData(void* lockedData, unsigned stride, unsigned& freeIndex)
    // Error: type "void*" can not automatically bind
}

// struct BatchGroupKey | File: ../Graphics/Batch.h
void CollectMembers_BatchGroupKey(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct BatchQueue | File: ../Graphics/Batch.h
void CollectMembers_BatchQueue(Vector<RegisterObjectMethodArgs>& methods)
{
    // void BatchQueue::SetInstancingData(void* lockedData, unsigned stride, unsigned& freeIndex)
    // Error: type "void*" can not automatically bind

    // void BatchQueue::SortFrontToBack2Pass(PODVector<Batch*>& batches)
    // Error: type "PODVector<Batch*>&" can not automatically bind
}

// struct BiasParameters | File: ../Graphics/Light.h
void CollectMembers_BiasParameters(Vector<RegisterObjectMethodArgs>& methods)
{
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

    // PODVector<Billboard>& BillboardSet::GetBillboards()
    // Error: type "PODVector<Billboard>&" can not automatically bind

    // VariantVector BillboardSet::GetBillboardsAttr() const
    // Error: type "VariantVector" can not automatically bind

    // const PODVector<unsigned char>& BillboardSet::GetNetBillboardsAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // void BillboardSet::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    // void BillboardSet::SetBillboardsAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    // void BillboardSet::SetNetBillboardsAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
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
    // Error: type "PODVector<UIBatch>&" can not automatically bind
}

// class BoundingBox | File: ../Math/BoundingBox.h
void CollectMembers_BoundingBox(Vector<RegisterObjectMethodArgs>& methods)
{
    // void BoundingBox::Define(const Vector3* vertices, unsigned count)
    // Error: type "const Vector3*" can not automatically bind

    // void BoundingBox::Merge(const Vector3* vertices, unsigned count)
    // Error: type "const Vector3*" can not automatically bind
}

// class BoxOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_BoxOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // void BoxOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
    // Error: type "Drawable**" can not automatically bind
}

// class BufferedSoundStream | File: ../Audio/BufferedSoundStream.h
void CollectMembers_BufferedSoundStream(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_SoundStream(methods);

    // -virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0

    // void BufferedSoundStream::AddData(const SharedArrayPtr<signed char>& data, unsigned numBytes)
    // Error: type "const SharedArrayPtr<signed char>&" can not automatically bind

    // void BufferedSoundStream::AddData(const SharedArrayPtr<signed short>& data, unsigned numBytes)
    // Error: type "const SharedArrayPtr<signed short>&" can not automatically bind

    // void BufferedSoundStream::AddData(void* data, unsigned numBytes)
    // Error: type "void*" can not automatically bind

    // unsigned BufferedSoundStream::GetData(signed char* dest, unsigned numBytes) override
    // Error: type "signed char*" can not automatically bind
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

    // void Button::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind
}

// class Camera | File: ../Graphics/Camera.h
void CollectMembers_Camera(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
}

// struct CascadeParameters | File: ../Graphics/Light.h
void CollectMembers_CascadeParameters(Vector<RegisterObjectMethodArgs>& methods)
{
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
    // Error: type "PODVector<UIBatch>&" can not automatically bind
}

// class Color | File: ../Math/Color.h
void CollectMembers_Color(Vector<RegisterObjectMethodArgs>& methods)
{
    // void Color::Bounds(float* min, float* max, bool clipped=false) const
    // Error: type "float*" can not automatically bind

    // const float* Color::Data() const
    // Error: type "const float*" can not automatically bind

    // void Color::FromUIntMask(unsigned color, const ChannelMask& mask)
    // Error: type "const ChannelMask&" can not automatically bind

    // unsigned Color::ToUIntMask(const ChannelMask& mask) const
    // Error: type "const ChannelMask&" can not automatically bind
}

// struct ColorFrame | File: ../Graphics/ParticleEffect.h
void CollectMembers_ColorFrame(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Component | File: ../Scene/Component.h
void CollectMembers_Component(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Animatable(methods);

    // -bool Animatable::SaveJSON(JSONValue& dest) const override
    // -bool Animatable::SaveXML(XMLElement& dest) const override
    // -virtual bool Serializable::Save(Serializer& dest) const
    // -virtual void Serializable::MarkNetworkUpdate()

    // void Component::AddReplicationState(ComponentReplicationState* state)
    // Error: type "ComponentReplicationState*" can not automatically bind

    // template<class T> T* Component::GetComponent() const
    // Error: type "T*" can not automatically bind

    // template<class T> void Component::GetComponents(PODVector<T*>& dest) const
    // Error: type "PODVector<T*>&" can not automatically bind

    // void Component::GetComponents(PODVector<Component*>& dest, StringHash type) const
    // Error: type "PODVector<Component*>&" can not automatically bind

    // virtual void Component::GetDependencyNodes(PODVector<Node*>& dest)
    // Error: type "PODVector<Node*>&" can not automatically bind
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
    // Error: type "unsigned char*" can not automatically bind
}

// class Condition | File: ../Core/Condition.h
void CollectMembers_Condition(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Console | File: ../Engine/Console.h
void CollectMembers_Console(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

// class ConstantBuffer | File: ../Graphics/ConstantBuffer.h
void CollectMembers_ConstantBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
    CollectMembers_GPUObject(methods);

    // -virtual void GPUObject::OnDeviceReset()
    // -virtual void GPUObject::Release()

    // void ConstantBuffer::SetParameter(unsigned offset, unsigned size, const void* data)
    // Error: type "const void*" can not automatically bind

    // void ConstantBuffer::SetVector3ArrayParameter(unsigned offset, unsigned rows, const void* data)
    // Error: type "const void*" can not automatically bind
}

// class Context | File: ../Core/Context.h
void CollectMembers_Context(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // const HashMap<StringHash, Vector<AttributeInfo>>& Context::GetAllAttributes() const
    // Error: type "const HashMap<StringHash, Vector<AttributeInfo>>&" can not automatically bind

    // AttributeInfo* Context::GetAttribute(StringHash objectType, const char* name)
    // Error: type "const char*" can not automatically bind

    // template<class T> AttributeInfo* Context::GetAttribute(const char* name)
    // Error: type "const char*" can not automatically bind

    // const Vector<AttributeInfo>* Context::GetAttributes(StringHash type) const
    // Error: type "const Vector<AttributeInfo>*" can not automatically bind

    // EventHandler* Context::GetEventHandler() const
    // Error: type "EventHandler*" can not automatically bind

    // const Vector<AttributeInfo>* Context::GetNetworkAttributes(StringHash type) const
    // Error: type "const Vector<AttributeInfo>*" can not automatically bind

    // const HashMap<String, Vector<StringHash>>& Context::GetObjectCategories() const
    // Error: type "const HashMap<String, Vector<StringHash>>&" can not automatically bind

    // const HashMap<StringHash, SharedPtr<ObjectFactory>>& Context::GetObjectFactories() const
    // Error: type "const HashMap<StringHash, SharedPtr<ObjectFactory>>&" can not automatically bind

    // template<class T> T* Context::GetSubsystem() const
    // Error: type "T*" can not automatically bind

    // const HashMap<StringHash, SharedPtr<Object>>& Context::GetSubsystems() const
    // Error: type "const HashMap<StringHash, SharedPtr<Object>>&" can not automatically bind

    // AttributeHandle Context::RegisterAttribute(StringHash objectType, const AttributeInfo& attr)
    // Error: type "AttributeHandle" can not automatically bind bacause have @nobind mark

    // template<class T> AttributeHandle Context::RegisterAttribute(const AttributeInfo& attr)
    // Error: type "AttributeHandle" can not automatically bind bacause have @nobind mark

    // template<class T> void Context::RegisterFactory(const char* category)
    // Error: type "const char*" can not automatically bind

    // void Context::RegisterFactory(ObjectFactory* factory, const char* category)
    // Error: type "const char*" can not automatically bind

    // template<class T> T* Context::RegisterSubsystem()
    // Error: type "T*" can not automatically bind

    // template<class T> void Context::RemoveAttribute(const char* name)
    // Error: type "const char*" can not automatically bind

    // void Context::RemoveAttribute(StringHash objectType, const char* name)
    // Error: type "const char*" can not automatically bind

    // template<class T> void Context::UpdateAttributeDefaultValue(const char* name, const Variant& defaultValue)
    // Error: type "const char*" can not automatically bind

    // void Context::UpdateAttributeDefaultValue(StringHash objectType, const char* name, const Variant& defaultValue)
    // Error: type "const char*" can not automatically bind
}

// class Controls | File: ../Input/Controls.h
void CollectMembers_Controls(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Cursor | File: ../UI/Cursor.h
void CollectMembers_Cursor(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override

    // void Cursor::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    // VariantVector Cursor::GetShapesAttr() const
    // Error: type "VariantVector" can not automatically bind

    // void Cursor::SetShapesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
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

    // PODVector<unsigned char> CustomGeometry::GetGeometryDataAttr() const
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // Vector<PODVector<CustomGeometryVertex>>& CustomGeometry::GetVertices()
    // Error: type "Vector<PODVector<CustomGeometryVertex>>&" can not automatically bind

    // void CustomGeometry::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    // void CustomGeometry::SetGeometryDataAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
}

// struct CustomGeometryVertex | File: ../Graphics/CustomGeometry.h
void CollectMembers_CustomGeometryVertex(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class CustomVariantValue | File: ../Core/Variant.h
void CollectMembers_CustomVariantValue(Vector<RegisterObjectMethodArgs>& methods)
{
    // virtual bool CustomVariantValue::Assign(const CustomVariantValue& rhs)
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark

    // virtual CustomVariantValue* CustomVariantValue::Clone() const
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark

    // virtual void CustomVariantValue::Clone(void* dest) const
    // Error: type "void*" can not automatically bind

    // virtual bool CustomVariantValue::Compare(const CustomVariantValue& rhs) const
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark

    // const std::type_info& CustomVariantValue::GetTypeInfo() const
    // Error: type "const std::type_info&" can not automatically bind

    // template<class T> T* CustomVariantValue::GetValuePtr()
    // Error: type "T*" can not automatically bind

    // template<class T> const T* CustomVariantValue::GetValuePtr() const
    // Error: type "const T*" can not automatically bind
}

// class DebugHud | File: ../Engine/DebugHud.h
void CollectMembers_DebugHud(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
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

    // void DebugRenderer::AddTriangleMesh(const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, const Matrix3x4& transform, const Color& color, bool depthTest=true)
    // Error: type "const void*" can not automatically bind

    // void DebugRenderer::AddTriangleMesh(const void* vertexData, unsigned vertexSize, unsigned vertexStart, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, const Matrix3x4& transform, const Color& color, bool depthTest=true)
    // Error: type "const void*" can not automatically bind
}

// struct DebugTriangle | File: ../Graphics/DebugRenderer.h
void CollectMembers_DebugTriangle(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct Decal | File: ../Graphics/DecalSet.h
void CollectMembers_Decal(Vector<RegisterObjectMethodArgs>& methods)
{
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

    // PODVector<unsigned char> DecalSet::GetDecalsAttr() const
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // void DecalSet::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    // void DecalSet::SetDecalsAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
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
    // Error: type "void*" can not automatically bind

    // PODVector<unsigned char> Deserializer::ReadBuffer()
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // VariantVector Deserializer::ReadVariantVector()
    // Error: type "VariantVector" can not automatically bind
}

// struct DirtyBits | File: ../Scene/ReplicationState.h
void CollectMembers_DirtyBits(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Drawable | File: ../Graphics/Drawable.h
void CollectMembers_Drawable(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Component::OnSetEnabled()

    // const Vector<SourceBatch>& Drawable::GetBatches() const
    // Error: type "const Vector<SourceBatch>&" can not automatically bind

    // Octant* Drawable::GetOctant() const
    // Error: type "Octant" can not automatically bind bacause have @nobind mark

    // virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
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

    // void DropDownList::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind
}

// class Engine | File: ../Engine/Engine.h
void CollectMembers_Engine(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

// class EventHandler | File: ../Core/Object.h
void CollectMembers_EventHandler(Vector<RegisterObjectMethodArgs>& methods)
{
    // virtual EventHandler* EventHandler::Clone() const =0
    // Error: type "EventHandler*" can not automatically bind

    // void* EventHandler::GetUserData() const
    // Error: type "void*" can not automatically bind
}

// class EventHandler11Impl | File: ../Core/Object.h
void CollectMembers_EventHandler11Impl(Vector<RegisterObjectMethodArgs>& methods)
{
    // EventHandler* EventHandler11Impl::Clone() const override
    // Error: type "EventHandler*" can not automatically bind
}

// class EventProfiler | File: ../Core/EventProfiler.h
void CollectMembers_EventProfiler(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Profiler(methods);

    // -void Profiler::BeginBlock(const char* name)
}

// class EventProfilerBlock | File: ../Core/EventProfiler.h
void CollectMembers_EventProfilerBlock(Vector<RegisterObjectMethodArgs>& methods)
{
    // EventProfilerBlock* EventProfilerBlock::GetChild(StringHash eventID)
    // Error: type "EventProfilerBlock" can not automatically bind bacause have @nobind mark
}

// class EventReceiverGroup | File: ../Core/Context.h
void CollectMembers_EventReceiverGroup(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
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

    // void* File::GetHandle() const
    // Error: type "void*" can not automatically bind

    // unsigned File::Read(void* dest, unsigned size) override
    // Error: type "void*" can not automatically bind

    // unsigned File::Write(const void* data, unsigned size) override
    // Error: type "const void*" can not automatically bind
}

// class FileSelector | File: ../UI/FileSelector.h
void CollectMembers_FileSelector(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

// struct FileSelectorEntry | File: ../UI/FileSelector.h
void CollectMembers_FileSelectorEntry(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class FileSystem | File: ../IO/FileSystem.h
void CollectMembers_FileSystem(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void FileSystem::ScanDir(Vector<String>& result, const String& pathName, const String& filter, unsigned flags, bool recursive) const
    // Error: type "Vector<String>&" can not automatically bind
}

// class FileWatcher | File: ../IO/FileWatcher.h
void CollectMembers_FileWatcher(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
    CollectMembers_Thread(methods);

    // -virtual void Thread::ThreadFunction()=0
}

// struct FocusParameters | File: ../Graphics/Light.h
void CollectMembers_FocusParameters(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Font | File: ../UI/Font.h
void CollectMembers_Font(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
}

// class FontFace | File: ../UI/FontFace.h
void CollectMembers_FontFace(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // virtual const FontGlyph* FontFace::GetGlyph(unsigned c)
    // Error: type "const FontGlyph*" can not automatically bind

    // virtual bool FontFace::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize)=0
    // Error: type "const unsigned char*" can not automatically bind
}

// class FontFaceBitmap | File: ../UI/FontFaceBitmap.h
void CollectMembers_FontFaceBitmap(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_FontFace(methods);

    // -virtual bool FontFace::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize)=0

    // bool FontFaceBitmap::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize) override
    // Error: type "const unsigned char*" can not automatically bind
}

// class FontFaceFreeType | File: ../UI/FontFaceFreeType.h
void CollectMembers_FontFaceFreeType(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_FontFace(methods);

    // -virtual bool FontFace::HasMutableGlyphs() const
    // -virtual bool FontFace::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize)=0
    // -virtual const FontGlyph* FontFace::GetGlyph(unsigned c)

    // const FontGlyph* FontFaceFreeType::GetGlyph(unsigned c) override
    // Error: type "const FontGlyph*" can not automatically bind

    // bool FontFaceFreeType::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize) override
    // Error: type "const unsigned char*" can not automatically bind
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
}

// class FrustumOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_FrustumOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // void FrustumOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
    // Error: type "Drawable**" can not automatically bind
}

// class GPUObject | File: ../Graphics/GPUObject.h
void CollectMembers_GPUObject(Vector<RegisterObjectMethodArgs>& methods)
{
    // void* GPUObject::GetGPUObject() const
    // Error: type "void*" can not automatically bind
}

// class Geometry | File: ../Graphics/Geometry.h
void CollectMembers_Geometry(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // float Geometry::GetHitDistance(const Ray& ray, Vector3* outNormal=nullptr, Vector2* outUV=nullptr) const
    // Error: type "Vector3*" can not automatically bind

    // void Geometry::GetRawData(const unsigned char*& vertexData, unsigned& vertexSize, const unsigned char*& indexData, unsigned& indexSize, const PODVector<VertexElement>*& elements) const
    // Error: type "const unsigned char*&" can not automatically bind

    // void Geometry::GetRawDataShared(SharedArrayPtr<unsigned char>& vertexData, unsigned& vertexSize, SharedArrayPtr<unsigned char>& indexData, unsigned& indexSize, const PODVector<VertexElement>*& elements) const
    // Error: type "SharedArrayPtr<unsigned char>&" can not automatically bind

    // void Geometry::SetRawIndexData(const SharedArrayPtr<unsigned char>& data, unsigned indexSize)
    // Error: type "const SharedArrayPtr<unsigned char>&" can not automatically bind

    // void Geometry::SetRawVertexData(const SharedArrayPtr<unsigned char>& data, const PODVector<VertexElement>& elements)
    // Error: type "const SharedArrayPtr<unsigned char>&" can not automatically bind

    // void Geometry::SetRawVertexData(const SharedArrayPtr<unsigned char>& data, unsigned elementMask)
    // Error: type "const SharedArrayPtr<unsigned char>&" can not automatically bind
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

    // void Graphics::AddGPUObject(GPUObject* object)
    // Error: type "GPUObject*" can not automatically bind

    // void Graphics::FreeScratchBuffer(void* buffer)
    // Error: type "void*" can not automatically bind

    // void* Graphics::GetExternalWindow() const
    // Error: type "void*" can not automatically bind

    // GraphicsImpl* Graphics::GetImpl() const
    // Error: type "GraphicsImpl*" can not automatically bind

    // ShaderVariation* Graphics::GetShader(ShaderType type, const char* name, const char* defines) const
    // Error: type "const char*" can not automatically bind

    // SDL_Window* Graphics::GetWindow() const
    // Error: type "SDL_Window*" can not automatically bind

    // bool Graphics::NeedParameterUpdate(ShaderParameterGroup group, const void* source)
    // Error: type "const void*" can not automatically bind

    // void Graphics::RemoveGPUObject(GPUObject* object)
    // Error: type "GPUObject*" can not automatically bind

    // void* Graphics::ReserveScratchBuffer(unsigned size)
    // Error: type "void*" can not automatically bind

    // void Graphics::SetExternalWindow(void* window)
    // Error: type "void*" can not automatically bind

    // void Graphics::SetShaderParameter(StringHash param, const float* data, unsigned count)
    // Error: type "const float*" can not automatically bind
}

// class HashBase | File: ../Container/HashBase.h
void CollectMembers_HashBase(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct HashIteratorBase | File: ../Container/HashBase.h
void CollectMembers_HashIteratorBase(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct HashNodeBase | File: ../Container/HashBase.h
void CollectMembers_HashNodeBase(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class HiresTimer | File: ../Core/Timer.h
void CollectMembers_HiresTimer(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Image | File: ../Resource/Image.h
void CollectMembers_Image(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const
    // -virtual bool Resource::SaveFile(const String& fileName) const

    // unsigned char* Image::GetData() const
    // Error: type "unsigned char*" can not automatically bind

    // void Image::GetLevels(PODVector<Image*>& levels)
    // Error: type "PODVector<Image*>&" can not automatically bind

    // void Image::GetLevels(PODVector<const Image*>& levels) const
    // Error: type "PODVector<const Image*>&" can not automatically bind

    // SDL_Surface* Image::GetSDLSurface(const IntRect& rect=IntRect::ZERO) const
    // Error: type "SDL_Surface*" can not automatically bind

    // void Image::SetData(const unsigned char* pixelData)
    // Error: type "const unsigned char*" can not automatically bind
}

// class IndexBuffer | File: ../Graphics/IndexBuffer.h
void CollectMembers_IndexBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
    CollectMembers_GPUObject(methods);

    // -virtual void GPUObject::OnDeviceLost()
    // -virtual void GPUObject::OnDeviceReset()
    // -virtual void GPUObject::Release()

    // unsigned char* IndexBuffer::GetShadowData() const
    // Error: type "unsigned char*" can not automatically bind

    // SharedArrayPtr<unsigned char> IndexBuffer::GetShadowDataShared() const
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind

    // void* IndexBuffer::Lock(unsigned start, unsigned count, bool discard=false)
    // Error: type "void*" can not automatically bind

    // bool IndexBuffer::SetData(const void* data)
    // Error: type "const void*" can not automatically bind

    // bool IndexBuffer::SetDataRange(const void* data, unsigned start, unsigned count, bool discard=false)
    // Error: type "const void*" can not automatically bind
}

// struct IndexBufferDesc | File: ../Graphics/Model.h
void CollectMembers_IndexBufferDesc(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Input | File: ../Input/Input.h
void CollectMembers_Input(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

// struct InstanceData | File: ../Graphics/Batch.h
void CollectMembers_InstanceData(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class IntRect | File: ../Math/Rect.h
void CollectMembers_IntRect(Vector<RegisterObjectMethodArgs>& methods)
{
    // const int* IntRect::Data() const
    // Error: type "const int*" can not automatically bind
}

// class IntVector2 | File: ../Math/Vector2.h
void CollectMembers_IntVector2(Vector<RegisterObjectMethodArgs>& methods)
{
    // const int* IntVector2::Data() const
    // Error: type "const int*" can not automatically bind
}

// class IntVector3 | File: ../Math/Vector3.h
void CollectMembers_IntVector3(Vector<RegisterObjectMethodArgs>& methods)
{
    // const int* IntVector3::Data() const
    // Error: type "const int*" can not automatically bind
}

// class JSONFile | File: ../Resource/JSONFile.h
void CollectMembers_JSONFile(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const
}

// class JSONValue | File: ../Resource/JSONValue.h
void CollectMembers_JSONValue(Vector<RegisterObjectMethodArgs>& methods)
{
    // ConstJSONObjectIterator JSONValue::Begin() const
    // Error: type "ConstJSONObjectIterator" can not automatically bind

    // JSONObjectIterator JSONValue::Begin()
    // Error: type "JSONObjectIterator" can not automatically bind

    // ConstJSONObjectIterator JSONValue::End() const
    // Error: type "ConstJSONObjectIterator" can not automatically bind

    // JSONObjectIterator JSONValue::End()
    // Error: type "JSONObjectIterator" can not automatically bind

    // const JSONArray& JSONValue::GetArray() const
    // Error: type "const JSONArray&" can not automatically bind

    // const char* JSONValue::GetCString(const char* defaultValue="") const
    // Error: type "const char*" can not automatically bind

    // const JSONObject& JSONValue::GetObject() const
    // Error: type "const JSONObject&" can not automatically bind

    // VariantVector JSONValue::GetVariantVector() const
    // Error: type "VariantVector" can not automatically bind

    // void JSONValue::SetVariantVector(const VariantVector& variantVector, Context* context=nullptr)
    // Error: type "const VariantVector&" can not automatically bind

    // JSONValue& JSONValue::operator=(const JSONArray& rhs)
    // Error: type "const JSONArray&" can not automatically bind

    // JSONValue& JSONValue::operator=(const JSONObject& rhs)
    // Error: type "const JSONObject&" can not automatically bind

    // JSONValue& JSONValue::operator=(const char* rhs)
    // Error: type "const char*" can not automatically bind
}

// struct JoystickState | File: ../Input/Input.h
void CollectMembers_JoystickState(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Light | File: ../Graphics/Light.h
void CollectMembers_Light(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // -virtual void Drawable::UpdateBatches(const FrameInfo& frame)
    // -void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override

    // LightBatchQueue* Light::GetLightQueue() const
    // Error: type "LightBatchQueue*" can not automatically bind

    // void Light::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    // void Light::SetLightQueue(LightBatchQueue* queue)
    // Error: type "LightBatchQueue*" can not automatically bind
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
}

// struct LinkedListNode | File: ../Container/LinkedList.h
void CollectMembers_LinkedListNode(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ListBase | File: ../Container/ListBase.h
void CollectMembers_ListBase(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct ListIteratorBase | File: ../Container/ListBase.h
void CollectMembers_ListIteratorBase(Vector<RegisterObjectMethodArgs>& methods)
{
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
}

// class Localization | File: ../Resource/Localization.h
void CollectMembers_Localization(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

// class Log | File: ../IO/Log.h
void CollectMembers_Log(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
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

    // const HashMap<StringHash, MaterialShaderParameter>& Material::GetShaderParameters() const
    // Error: type "const HashMap<StringHash, MaterialShaderParameter>&" can not automatically bind

    // const Vector<TechniqueEntry>& Material::GetTechniques() const
    // Error: type "const Vector<TechniqueEntry>&" can not automatically bind

    // const HashMap<TextureUnit, SharedPtr<Texture>>& Material::GetTextures() const
    // Error: type "const HashMap<TextureUnit, SharedPtr<Texture>>&" can not automatically bind
}

// struct MaterialShaderParameter | File: ../Graphics/Material.h
void CollectMembers_MaterialShaderParameter(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Matrix2 | File: ../Math/Matrix2.h
void CollectMembers_Matrix2(Vector<RegisterObjectMethodArgs>& methods)
{
    // const float* Matrix2::Data() const
    // Error: type "const float*" can not automatically bind
}

// class Matrix3 | File: ../Math/Matrix3.h
void CollectMembers_Matrix3(Vector<RegisterObjectMethodArgs>& methods)
{
    // const float* Matrix3::Data() const
    // Error: type "const float*" can not automatically bind
}

// class Matrix3x4 | File: ../Math/Matrix3x4.h
void CollectMembers_Matrix3x4(Vector<RegisterObjectMethodArgs>& methods)
{
    // const float* Matrix3x4::Data() const
    // Error: type "const float*" can not automatically bind
}

// class Matrix4 | File: ../Math/Matrix4.h
void CollectMembers_Matrix4(Vector<RegisterObjectMethodArgs>& methods)
{
    // const float* Matrix4::Data() const
    // Error: type "const float*" can not automatically bind
}

// class MemoryBuffer | File: ../IO/MemoryBuffer.h
void CollectMembers_MemoryBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    // unsigned char* MemoryBuffer::GetData()
    // Error: type "unsigned char*" can not automatically bind

    // unsigned MemoryBuffer::Read(void* dest, unsigned size) override
    // Error: type "void*" can not automatically bind

    // unsigned MemoryBuffer::Write(const void* data, unsigned size) override
    // Error: type "const void*" can not automatically bind
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
}

// class MessageBox | File: ../UI/MessageBox.h
void CollectMembers_MessageBox(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

// class Model | File: ../Graphics/Model.h
void CollectMembers_Model(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ResourceWithMetadata(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()
    // -virtual bool Resource::Save(Serializer& dest) const

    // const Vector<Vector<SharedPtr<Geometry>>>& Model::GetGeometries() const
    // Error: type "const Vector<Vector<SharedPtr<Geometry>>>&" can not automatically bind

    // const Vector<PODVector<unsigned>>& Model::GetGeometryBoneMappings() const
    // Error: type "const Vector<PODVector<unsigned>>&" can not automatically bind

    // const ModelMorph* Model::GetMorph(StringHash nameHash) const
    // Error: type "const ModelMorph*" can not automatically bind

    // const ModelMorph* Model::GetMorph(const String& name) const
    // Error: type "const ModelMorph*" can not automatically bind

    // const ModelMorph* Model::GetMorph(unsigned index) const
    // Error: type "const ModelMorph*" can not automatically bind

    // const Vector<ModelMorph>& Model::GetMorphs() const
    // Error: type "const Vector<ModelMorph>&" can not automatically bind

    // void Model::SetGeometryBoneMappings(const Vector<PODVector<unsigned>>& geometryBoneMappings)
    // Error: type "const Vector<PODVector<unsigned>>&" can not automatically bind

    // void Model::SetMorphs(const Vector<ModelMorph>& morphs)
    // Error: type "const Vector<ModelMorph>&" can not automatically bind
}

// struct ModelMorph | File: ../Graphics/Model.h
void CollectMembers_ModelMorph(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Mutex | File: ../Core/Mutex.h
void CollectMembers_Mutex(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class MutexLock | File: ../Core/Mutex.h
void CollectMembers_MutexLock(Vector<RegisterObjectMethodArgs>& methods)
{
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
    // Error: type "void*" can not automatically bind

    // unsigned NamedPipe::Write(const void* data, unsigned size) override
    // Error: type "const void*" can not automatically bind
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

    // virtual void Node::AddReplicationState(NodeReplicationState* state)
    // Error: type "NodeReplicationState*" can not automatically bind

    // template<class T> T* Node::CreateComponent(CreateMode mode=REPLICATED, unsigned id=0)
    // Error: type "T*" can not automatically bind

    // Node* Node::GetChild(const char* name, bool recursive=false) const
    // Error: type "const char*" can not automatically bind

    // void Node::GetChildren(PODVector<Node*>& dest, bool recursive=false) const
    // Error: type "PODVector<Node*>&" can not automatically bind

    // template<class T> void Node::GetChildrenWithComponent(PODVector<Node*>& dest, bool recursive=false) const
    // Error: type "PODVector<Node*>&" can not automatically bind

    // void Node::GetChildrenWithComponent(PODVector<Node*>& dest, StringHash type, bool recursive=false) const
    // Error: type "PODVector<Node*>&" can not automatically bind

    // void Node::GetChildrenWithTag(PODVector<Node*>& dest, const String& tag, bool recursive=false) const
    // Error: type "PODVector<Node*>&" can not automatically bind

    // template<class T> T* Node::GetComponent(bool recursive=false) const
    // Error: type "T*" can not automatically bind

    // template<class T> void Node::GetComponents(PODVector<T*>& dest, bool recursive=false) const
    // Error: type "PODVector<T*>&" can not automatically bind

    // void Node::GetComponents(PODVector<Component*>& dest, StringHash type, bool recursive=false) const
    // Error: type "PODVector<Component*>&" can not automatically bind

    // template<class T> T* Node::GetDerivedComponent(bool recursive=false) const
    // Error: type "T*" can not automatically bind

    // template<class T> void Node::GetDerivedComponents(PODVector<T*>& dest, bool recursive=false, bool clearVector=true) const
    // Error: type "PODVector<T*>&" can not automatically bind

    // const Vector<WeakPtr<Component>> Node::GetListeners() const
    // Error: type "const Vector<WeakPtr<Component>>" can not automatically bind

    // const PODVector<unsigned char>& Node::GetNetParentAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // const PODVector<unsigned char>& Node::GetNetRotationAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // template<class T> T* Node::GetOrCreateComponent(CreateMode mode=REPLICATED, unsigned id=0)
    // Error: type "T*" can not automatically bind

    // template<class T> T* Node::GetParentComponent(bool fullTraversal=false) const
    // Error: type "T*" can not automatically bind

    // template<class T> T* Node::GetParentDerivedComponent(bool fullTraversal=false) const
    // Error: type "T*" can not automatically bind

    // void Node::SetNetParentAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // void Node::SetNetRotationAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
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

    // template<typename T> T* Object::Cast()
    // Error: type "T*" can not automatically bind

    // template<typename T> const T* Object::Cast() const
    // Error: type "const T*" can not automatically bind

    // Context* Object::GetContext() const
    // Error: type "Context*" can used only as function parameter

    // EventHandler* Object::GetEventHandler() const
    // Error: type "EventHandler*" can not automatically bind

    // template<class T> T* Object::GetSubsystem() const
    // Error: type "T*" can not automatically bind

    // virtual const TypeInfo* Object::GetTypeInfo() const =0
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark

    // bool Object::IsInstanceOf(const TypeInfo* typeInfo) const
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark

    // template<typename... Args> void Object::SendEvent(StringHash eventType, Args... args)
    // Error: type "Args..." can not automatically bind

    // void Object::SubscribeToEvent(Object* sender, StringHash eventType, EventHandler* handler)
    // Error: type "EventHandler*" can not automatically bind

    // void Object::SubscribeToEvent(Object* sender, StringHash eventType, const std::function<void(StringHash, VariantMap&)>& function, void* userData=nullptr)
    // Error: type "const std::function<void(StringHash, VariantMap&)>&" can not automatically bind

    // void Object::SubscribeToEvent(StringHash eventType, EventHandler* handler)
    // Error: type "EventHandler*" can not automatically bind

    // void Object::SubscribeToEvent(StringHash eventType, const std::function<void(StringHash, VariantMap&)>& function, void* userData=nullptr)
    // Error: type "const std::function<void(StringHash, VariantMap&)>&" can not automatically bind
}

// class ObjectAnimation | File: ../Scene/ObjectAnimation.h
void CollectMembers_ObjectAnimation(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const

    // const HashMap<String, SharedPtr<ValueAnimationInfo>>& ObjectAnimation::GetAttributeAnimationInfos() const
    // Error: type "const HashMap<String, SharedPtr<ValueAnimationInfo>>&" can not automatically bind
}

// class ObjectFactory | File: ../Core/Object.h
void CollectMembers_ObjectFactory(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // Context* ObjectFactory::GetContext() const
    // Error: type "Context*" can used only as function parameter

    // const TypeInfo* ObjectFactory::GetTypeInfo() const
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
}

// struct OcclusionBatch | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_OcclusionBatch(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class OcclusionBuffer | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_OcclusionBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // bool OcclusionBuffer::AddTriangles(const Matrix3x4& model, const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount)
    // Error: type "const void*" can not automatically bind

    // bool OcclusionBuffer::AddTriangles(const Matrix3x4& model, const void* vertexData, unsigned vertexSize, unsigned vertexStart, unsigned vertexCount)
    // Error: type "const void*" can not automatically bind

    // int* OcclusionBuffer::GetBuffer() const
    // Error: type "int*" can not automatically bind
}

// struct OcclusionBufferData | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_OcclusionBufferData(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Octant | File: ../Graphics/Octree.h
void CollectMembers_Octant(Vector<RegisterObjectMethodArgs>& methods)
{
    // Octant* Octant::GetOrCreateChild(unsigned index)
    // Error: type "Octant" can not automatically bind bacause have @nobind mark

    // Octant* Octant::GetParent() const
    // Error: type "Octant" can not automatically bind bacause have @nobind mark
}

// class Octree | File: ../Graphics/Octree.h
void CollectMembers_Octree(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);
    CollectMembers_Octant(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -void Octant::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // void Octree::Raycast(RayOctreeQuery& query) const
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    // void Octree::RaycastSingle(RayOctreeQuery& query) const
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
}

// class OctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_OctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // virtual void OctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside)=0
    // Error: type "Drawable**" can not automatically bind
}

// struct OctreeQueryResult | File: ../Graphics/OctreeQuery.h
void CollectMembers_OctreeQueryResult(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class OggVorbisSoundStream | File: ../Audio/OggVorbisSoundStream.h
void CollectMembers_OggVorbisSoundStream(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_SoundStream(methods);

    // -virtual bool SoundStream::Seek(unsigned sample_number)
    // -virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0

    // unsigned OggVorbisSoundStream::GetData(signed char* dest, unsigned numBytes) override
    // Error: type "signed char*" can not automatically bind
}

// struct PackageEntry | File: ../IO/PackageFile.h
void CollectMembers_PackageEntry(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class PackageFile | File: ../IO/PackageFile.h
void CollectMembers_PackageFile(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // const HashMap<String, PackageEntry>& PackageFile::GetEntries() const
    // Error: type "const HashMap<String, PackageEntry>&" can not automatically bind

    // const PackageEntry* PackageFile::GetEntry(const String& fileName) const
    // Error: type "const PackageEntry*" can not automatically bind
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

    // const Vector<ColorFrame>& ParticleEffect::GetColorFrames() const
    // Error: type "const Vector<ColorFrame>&" can not automatically bind

    // const Vector<TextureFrame>& ParticleEffect::GetTextureFrames() const
    // Error: type "const Vector<TextureFrame>&" can not automatically bind

    // void ParticleEffect::SetColorFrames(const Vector<ColorFrame>& colorFrames)
    // Error: type "const Vector<ColorFrame>&" can not automatically bind

    // void ParticleEffect::SetTextureFrames(const Vector<TextureFrame>& textureFrames)
    // Error: type "const Vector<TextureFrame>&" can not automatically bind
}

// class ParticleEmitter | File: ../Graphics/ParticleEmitter.h
void CollectMembers_ParticleEmitter(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BillboardSet(methods);

    // -static void BillboardSet::RegisterObject(Context* context)
    // -virtual void Drawable::Update(const FrameInfo& frame)
    // -void Drawable::OnSetEnabled() override

    // VariantVector ParticleEmitter::GetParticleBillboardsAttr() const
    // Error: type "VariantVector" can not automatically bind

    // VariantVector ParticleEmitter::GetParticlesAttr() const
    // Error: type "VariantVector" can not automatically bind

    // void ParticleEmitter::SetParticlesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
}

// class Pass | File: ../Graphics/Technique.h
void CollectMembers_Pass(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
}

// struct PerThreadSceneResult | File: ../Graphics/View.h
void CollectMembers_PerThreadSceneResult(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Plane | File: ../Math/Plane.h
void CollectMembers_Plane(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class PointOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_PointOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // void PointOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
    // Error: type "Drawable**" can not automatically bind
}

// class Polyhedron | File: ../Math/Polyhedron.h
void CollectMembers_Polyhedron(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Profiler | File: ../Core/Profiler.h
void CollectMembers_Profiler(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Profiler::BeginBlock(const char* name)
    // Error: type "const char*" can not automatically bind

    // const ProfilerBlock* Profiler::GetCurrentBlock()
    // Error: type "ProfilerBlock" can not automatically bind bacause have @nobind mark

    // const ProfilerBlock* Profiler::GetRootBlock()
    // Error: type "ProfilerBlock" can not automatically bind bacause have @nobind mark
}

// class ProfilerBlock | File: ../Core/Profiler.h
void CollectMembers_ProfilerBlock(Vector<RegisterObjectMethodArgs>& methods)
{
    // ProfilerBlock* ProfilerBlock::GetChild(const char* name)
    // Error: type "const char*" can not automatically bind
}

// class ProgressBar | File: ../UI/ProgressBar.h
void CollectMembers_ProgressBar(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)
}

// class Quaternion | File: ../Math/Quaternion.h
void CollectMembers_Quaternion(Vector<RegisterObjectMethodArgs>& methods)
{
    // const float* Quaternion::Data() const
    // Error: type "const float*" can not automatically bind
}

// class Ray | File: ../Math/Ray.h
void CollectMembers_Ray(Vector<RegisterObjectMethodArgs>& methods)
{
    // float Ray::HitDistance(const Vector3& v0, const Vector3& v1, const Vector3& v2, Vector3* outNormal=nullptr, Vector3* outBary=nullptr) const
    // Error: type "Vector3*" can not automatically bind

    // float Ray::HitDistance(const void* vertexData, unsigned vertexStride, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, Vector3* outNormal=nullptr, Vector2* outUV=nullptr, unsigned uvOffset=0) const
    // Error: type "const void*" can not automatically bind

    // float Ray::HitDistance(const void* vertexData, unsigned vertexStride, unsigned vertexStart, unsigned vertexCount, Vector3* outNormal=nullptr, Vector2* outUV=nullptr, unsigned uvOffset=0) const
    // Error: type "const void*" can not automatically bind

    // bool Ray::InsideGeometry(const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount) const
    // Error: type "const void*" can not automatically bind

    // bool Ray::InsideGeometry(const void* vertexData, unsigned vertexSize, unsigned vertexStart, unsigned vertexCount) const
    // Error: type "const void*" can not automatically bind
}

// class RayOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_RayOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // RayOctreeQuery& RayOctreeQuery::operator=(const RayOctreeQuery& rhs)=delete
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
}

// struct RayQueryResult | File: ../Graphics/OctreeQuery.h
void CollectMembers_RayQueryResult(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Rect | File: ../Math/Rect.h
void CollectMembers_Rect(Vector<RegisterObjectMethodArgs>& methods)
{
    // const float* Rect::Data() const
    // Error: type "const float*" can not automatically bind
}

// struct RefCount | File: ../Container/RefCounted.h
void CollectMembers_RefCount(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class RefCounted | File: ../Container/RefCounted.h
void CollectMembers_RefCounted(Vector<RegisterObjectMethodArgs>& methods)
{
    // RefCount* RefCounted::RefCountPtr()
    // Error: type "RefCount*" can not automatically bind
}

// class RenderPath | File: ../Graphics/RenderPath.h
void CollectMembers_RenderPath(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // RenderPathCommand* RenderPath::GetCommand(unsigned index)
    // Error: type "RenderPathCommand*" can not automatically bind
}

// struct RenderPathCommand | File: ../Graphics/RenderPath.h
void CollectMembers_RenderPathCommand(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class RenderSurface | File: ../Graphics/RenderSurface.h
void CollectMembers_RenderSurface(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // void* RenderSurface::GetReadOnlyView() const
    // Error: type "void*" can not automatically bind

    // void* RenderSurface::GetRenderTargetView() const
    // Error: type "void*" can not automatically bind

    // void* RenderSurface::GetSurface() const
    // Error: type "void*" can not automatically bind
}

// struct RenderTargetInfo | File: ../Graphics/RenderPath.h
void CollectMembers_RenderTargetInfo(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Renderer | File: ../Graphics/Renderer.h
void CollectMembers_Renderer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Renderer::SetShadowMapFilter(Object* instance, ShadowMapFilter functionPtr)
    // Error: type "ShadowMapFilter" can not automatically bind
}

// struct ReplicationState | File: ../Scene/ReplicationState.h
void CollectMembers_ReplicationState(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Resource | File: ../Resource/Resource.h
void CollectMembers_Resource(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

// class ResourceCache | File: ../Resource/ResourceCache.h
void CollectMembers_ResourceCache(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void ResourceCache::AddResourceRouter(ResourceRouter* router, bool addAsFirst=false)
    // Error: type "ResourceRouter" can not automatically bind bacause have @nobind mark

    // const HashMap<StringHash, ResourceGroup>& ResourceCache::GetAllResources() const
    // Error: type "const HashMap<StringHash, ResourceGroup>&" can not automatically bind

    // template<class T> T* ResourceCache::GetExistingResource(const String& name)
    // Error: type "T*" can not automatically bind

    // template<class T> T* ResourceCache::GetResource(const String& name, bool sendEventOnFailure=true)
    // Error: type "T*" can not automatically bind

    // ResourceRouter* ResourceCache::GetResourceRouter(unsigned index) const
    // Error: type "ResourceRouter" can not automatically bind bacause have @nobind mark

    // template<class T> void ResourceCache::GetResources(PODVector<T*>& result) const
    // Error: type "PODVector<T*>&" can not automatically bind

    // void ResourceCache::GetResources(PODVector<Resource*>& result, StringHash type) const
    // Error: type "PODVector<Resource*>&" can not automatically bind

    // void ResourceCache::RemoveResourceRouter(ResourceRouter* router)
    // Error: type "ResourceRouter" can not automatically bind bacause have @nobind mark
}

// struct ResourceGroup | File: ../Resource/ResourceCache.h
void CollectMembers_ResourceGroup(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct ResourceRef | File: ../Core/Variant.h
void CollectMembers_ResourceRef(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct ResourceRefList | File: ../Core/Variant.h
void CollectMembers_ResourceRefList(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ResourceRouter | File: ../Resource/ResourceCache.h
void CollectMembers_ResourceRouter(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ResourceWithMetadata | File: ../Resource/Resource.h
void CollectMembers_ResourceWithMetadata(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);
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
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
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

    // void Scene::AddReplicationState(NodeReplicationState* state) override
    // Error: type "NodeReplicationState*" can not automatically bind

    // template<class T> T* Node::GetComponent(bool recursive=false) const
    // Error: type "T*" can not automatically bind

    // bool Scene::GetNodesWithTag(PODVector<Node*>& dest, const String& tag) const
    // Error: type "PODVector<Node*>&" can not automatically bind
}

// struct ScenePassInfo | File: ../Graphics/View.h
void CollectMembers_ScenePassInfo(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct SceneReplicationState | File: ../Scene/ReplicationState.h
void CollectMembers_SceneReplicationState(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ReplicationState(methods);
}

// class SceneResolver | File: ../Scene/SceneResolver.h
void CollectMembers_SceneResolver(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct ScratchBuffer | File: ../Graphics/Graphics.h
void CollectMembers_ScratchBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct ScreenModeParams | File: ../Graphics/Graphics.h
void CollectMembers_ScreenModeParams(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ScrollBar | File: ../UI/ScrollBar.h
void CollectMembers_ScrollBar(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_BorderImage(methods);

    // -static void BorderImage::RegisterObject(Context* context)
    // -virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)
    // -virtual void UIElement::OnSetEditable()
    // -void UIElement::ApplyAttributes() override
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
}

// class Serializable | File: ../Scene/Serializable.h
void CollectMembers_Serializable(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // virtual const Vector<AttributeInfo>* Serializable::GetAttributes() const
    // Error: type "const Vector<AttributeInfo>*" can not automatically bind

    // virtual const Vector<AttributeInfo>* Serializable::GetNetworkAttributes() const
    // Error: type "const Vector<AttributeInfo>*" can not automatically bind

    // NetworkState* Serializable::GetNetworkState() const
    // Error: type "NetworkState*" can not automatically bind
}

// class Serializer | File: ../IO/Serializer.h
void CollectMembers_Serializer(Vector<RegisterObjectMethodArgs>& methods)
{
    // virtual unsigned Serializer::Write(const void* data, unsigned size)=0
    // Error: type "const void*" can not automatically bind

    // bool Serializer::WriteBuffer(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // bool Serializer::WriteVariantVector(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
}

// class Shader | File: ../Graphics/Shader.h
void CollectMembers_Shader(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()

    // ShaderVariation* Shader::GetVariation(ShaderType type, const char* defines)
    // Error: type "const char*" can not automatically bind
}

// struct ShaderParameter | File: ../Graphics/ShaderVariation.h
void CollectMembers_ShaderParameter(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ShaderParameterAnimationInfo | File: ../Graphics/Material.h
void CollectMembers_ShaderParameterAnimationInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ValueAnimationInfo(methods);
}

// class ShaderPrecache | File: ../Graphics/ShaderPrecache.h
void CollectMembers_ShaderPrecache(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

// class ShaderVariation | File: ../Graphics/ShaderVariation.h
void CollectMembers_ShaderVariation(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
    CollectMembers_GPUObject(methods);

    // -virtual void GPUObject::OnDeviceLost()
    // -virtual void GPUObject::Release()

    // const PODVector<unsigned char>& ShaderVariation::GetByteCode() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // const unsigned* ShaderVariation::GetConstantBufferSizes() const
    // Error: type "const unsigned*" can not automatically bind

    // const HashMap<StringHash, ShaderParameter>& ShaderVariation::GetParameters() const
    // Error: type "const HashMap<StringHash, ShaderParameter>&" can not automatically bind
}

// struct ShadowBatchQueue | File: ../Graphics/Batch.h
void CollectMembers_ShadowBatchQueue(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Skeleton | File: ../Graphics/Skeleton.h
void CollectMembers_Skeleton(Vector<RegisterObjectMethodArgs>& methods)
{
    // Bone* Skeleton::GetBone(const char* name)
    // Error: type "const char*" can not automatically bind

    // const Vector<Bone>& Skeleton::GetBones() const
    // Error: type "const Vector<Bone>&" can not automatically bind

    // Vector<Bone>& Skeleton::GetModifiableBones()
    // Error: type "Vector<Bone>&" can not automatically bind
}

// class Skybox | File: ../Graphics/Skybox.h
void CollectMembers_Skybox(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_StaticModel(methods);

    // -static void StaticModel::RegisterObject(Context* context)
    // -void StaticModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // -void StaticModel::UpdateBatches(const FrameInfo& frame) override

    // void Skybox::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
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
}

// class SmoothedTransform | File: ../Scene/SmoothedTransform.h
void CollectMembers_SmoothedTransform(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
}

// class Sound | File: ../Audio/Sound.h
void CollectMembers_Sound(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ResourceWithMetadata(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)

    // SharedArrayPtr<signed char> Sound::GetData() const
    // Error: type "SharedArrayPtr<signed char>" can not automatically bind

    // signed char* Sound::GetEnd() const
    // Error: type "signed char*" can not automatically bind

    // signed char* Sound::GetRepeat() const
    // Error: type "signed char*" can not automatically bind

    // signed char* Sound::GetStart() const
    // Error: type "signed char*" can not automatically bind

    // void Sound::SetData(const void* data, unsigned dataSize)
    // Error: type "const void*" can not automatically bind
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

    // volatile signed char* SoundSource::GetPlayPosition() const
    // Error: type "signed char*" can not automatically bind

    // void SoundSource::Mix(int* dest, unsigned samples, int mixRate, bool stereo, bool interpolation)
    // Error: type "int*" can not automatically bind

    // void SoundSource::SetPlayPosition(signed char* pos)
    // Error: type "signed char*" can not automatically bind
}

// class SoundSource3D | File: ../Audio/SoundSource3D.h
void CollectMembers_SoundSource3D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_SoundSource(methods);

    // -static void SoundSource::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void SoundSource::Update(float timeStep)
}

// class SoundStream | File: ../Audio/SoundStream.h
void CollectMembers_SoundStream(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    // virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0
    // Error: type "signed char*" can not automatically bind
}

// struct SourceBatch | File: ../Graphics/Drawable.h
void CollectMembers_SourceBatch(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Sphere | File: ../Math/Sphere.h
void CollectMembers_Sphere(Vector<RegisterObjectMethodArgs>& methods)
{
    // void Sphere::Define(const Vector3* vertices, unsigned count)
    // Error: type "const Vector3*" can not automatically bind

    // void Sphere::Merge(const Vector3* vertices, unsigned count)
    // Error: type "const Vector3*" can not automatically bind
}

// class SphereOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_SphereOctreeQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // void SphereOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
    // Error: type "Drawable**" can not automatically bind
}

// class Spline | File: ../Core/Spline.h
void CollectMembers_Spline(Vector<RegisterObjectMethodArgs>& methods)
{
    // const VariantVector& Spline::GetKnots() const
    // Error: type "const VariantVector&" can not automatically bind

    // void Spline::SetKnots(const Vector<Variant>& knots)
    // Error: type "const Vector<Variant>&" can not automatically bind
}

// class SplinePath | File: ../Scene/SplinePath.h
void CollectMembers_SplinePath(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Serializable::ApplyAttributes()

    // const VariantVector& SplinePath::GetControlPointIdsAttr() const
    // Error: type "const VariantVector&" can not automatically bind

    // void SplinePath::SetControlPointIdsAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
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

    // void Sprite::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind
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
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
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

    // const VariantVector& StaticModelGroup::GetNodeIDsAttr() const
    // Error: type "const VariantVector&" can not automatically bind

    // void StaticModelGroup::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    // void StaticModelGroup::SetNodeIDsAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
}

// struct StoredLogMessage | File: ../IO/Log.h
void CollectMembers_StoredLogMessage(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class String | File: ../Container/Str.h
void CollectMembers_String(Vector<RegisterObjectMethodArgs>& methods)
{
    // String& String::Append(const char* str)
    // Error: type "const char*" can not automatically bind

    // String& String::Append(const char* str, unsigned length)
    // Error: type "const char*" can not automatically bind

    // String& String::AppendWithFormat(const char* formatString,...)
    // Error: type "const char*" can not automatically bind

    // String& String::AppendWithFormatArgs(const char* formatString, va_list args)
    // Error: type "const char*" can not automatically bind

    // ConstIterator String::Begin() const
    // Error: type "ConstIterator" can not automatically bind

    // Iterator String::Begin()
    // Error: type "Iterator" can not automatically bind

    // const char* String::CString() const
    // Error: type "const char*" can not automatically bind

    // int String::Compare(const char* str, bool caseSensitive=true) const
    // Error: type "const char*" can not automatically bind

    // ConstIterator String::End() const
    // Error: type "ConstIterator" can not automatically bind

    // Iterator String::End()
    // Error: type "Iterator" can not automatically bind

    // Iterator String::Erase(const Iterator& it)
    // Error: type "const Iterator&" can not automatically bind

    // Iterator String::Erase(const Iterator& start, const Iterator& end)
    // Error: type "const Iterator&" can not automatically bind

    // Iterator String::Insert(const Iterator& dest, char c)
    // Error: type "const Iterator&" can not automatically bind

    // Iterator String::Insert(const Iterator& dest, const Iterator& start, const Iterator& end)
    // Error: type "const Iterator&" can not automatically bind

    // Iterator String::Insert(const Iterator& dest, const String& str)
    // Error: type "const Iterator&" can not automatically bind

    // Iterator String::Replace(const Iterator& start, const Iterator& end, const String& replaceWith)
    // Error: type "const Iterator&" can not automatically bind

    // void String::Replace(unsigned pos, unsigned length, const char* replaceWith)
    // Error: type "const char*" can not automatically bind

    // void String::SetUTF8FromLatin1(const char* str)
    // Error: type "const char*" can not automatically bind

    // void String::SetUTF8FromWChar(const wchar_t* str)
    // Error: type "const wchar_t*" can not automatically bind

    // bool String::operator!=(const char* rhs) const
    // Error: type "const char*" can not automatically bind

    // String String::operator+(const char* rhs) const
    // Error: type "const char*" can not automatically bind

    // String& String::operator+=(const char* rhs)
    // Error: type "const char*" can not automatically bind

    // template<class T> String& String::operator+=(const T& rhs)
    // Error: type "const T&" can not automatically bind

    // bool String::operator<(const char* rhs) const
    // Error: type "const char*" can not automatically bind

    // String& String::operator=(String&& rhs) noexcept
    // Error: type "String&&" can not automatically bind

    // String& String::operator=(const char* rhs)
    // Error: type "const char*" can not automatically bind

    // bool String::operator==(const char* rhs) const
    // Error: type "const char*" can not automatically bind

    // bool String::operator>(const char* rhs) const
    // Error: type "const char*" can not automatically bind
}

// class StringHash | File: ../Math/StringHash.h
void CollectMembers_StringHash(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class StringHashRegister | File: ../Core/StringHashRegister.h
void CollectMembers_StringHashRegister(Vector<RegisterObjectMethodArgs>& methods)
{
    // const StringMap& StringHashRegister::GetInternalMap() const
    // Error: type "const StringMap&" can not automatically bind

    // StringHash StringHashRegister::RegisterString(const StringHash& hash, const char* string)
    // Error: type "const char*" can not automatically bind

    // StringHash StringHashRegister::RegisterString(const char* string)
    // Error: type "const char*" can not automatically bind
}

// class Technique | File: ../Graphics/Technique.h
void CollectMembers_Technique(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
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

    // SharedArrayPtr<float> Terrain::GetHeightData() const
    // Error: type "SharedArrayPtr<float>" can not automatically bind
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

    // PODVector<float>& TerrainPatch::GetLodErrors()
    // Error: type "PODVector<float>&" can not automatically bind

    // void TerrainPatch::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
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

    // void Text::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind
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
}

// class Texture | File: ../Graphics/Texture.h
void CollectMembers_Texture(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_ResourceWithMetadata(methods);
    CollectMembers_GPUObject(methods);

    // void* Texture::GetResolveTexture() const
    // Error: type "void*" can not automatically bind

    // void* Texture::GetSampler() const
    // Error: type "void*" can not automatically bind

    // void* Texture::GetShaderResourceView() const
    // Error: type "void*" can not automatically bind
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

    // bool Texture2D::GetData(unsigned level, void* dest) const
    // Error: type "void*" can not automatically bind

    // bool Texture2D::SetData(unsigned level, int x, int y, int width, int height, const void* data)
    // Error: type "const void*" can not automatically bind
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

    // bool Texture2DArray::GetData(unsigned layer, unsigned level, void* dest) const
    // Error: type "void*" can not automatically bind

    // bool Texture2DArray::SetData(unsigned layer, unsigned level, int x, int y, int width, int height, const void* data)
    // Error: type "const void*" can not automatically bind
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

    // bool Texture3D::GetData(unsigned level, void* dest) const
    // Error: type "void*" can not automatically bind

    // bool Texture3D::SetData(unsigned level, int x, int y, int z, int width, int height, int depth, const void* data)
    // Error: type "const void*" can not automatically bind
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

    // bool TextureCube::GetData(CubeMapFace face, unsigned level, void* dest) const
    // Error: type "void*" can not automatically bind

    // bool TextureCube::SetData(CubeMapFace face, unsigned level, int x, int y, int width, int height, const void* data)
    // Error: type "const void*" can not automatically bind
}

// struct TextureFrame | File: ../Graphics/ParticleEffect.h
void CollectMembers_TextureFrame(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Thread | File: ../Core/Thread.h
void CollectMembers_Thread(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Time | File: ../Core/Timer.h
void CollectMembers_Time(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

// class Timer | File: ../Core/Timer.h
void CollectMembers_Timer(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class ToolTip | File: ../UI/ToolTip.h
void CollectMembers_ToolTip(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_UIElement(methods);

    // -static void UIElement::RegisterObject(Context* context)
    // -virtual void UIElement::Update(float timeStep)
}

// struct TouchState | File: ../Input/Input.h
void CollectMembers_TouchState(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct TrailPoint | File: ../Graphics/RibbonTrail.h
void CollectMembers_TrailPoint(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class TypeInfo | File: ../Core/Object.h
void CollectMembers_TypeInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    // const TypeInfo* TypeInfo::GetBaseTypeInfo() const
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark

    // bool TypeInfo::IsTypeOf(const TypeInfo* typeInfo) const
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
}

// class UI | File: ../UI/UI.h
void CollectMembers_UI(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // const Vector<UIElement*> UI::GetDragElements()
    // Error: type "const Vector<UIElement*>" can not automatically bind
}

// class UIBatch | File: ../UI/UIBatch.h
void CollectMembers_UIBatch(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class UIComponent | File: ../UI/UIComponent.h
void CollectMembers_UIComponent(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
}

// class UIElement | File: ../UI/UIElement.h
void CollectMembers_UIElement(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Animatable(methods);

    // -bool Animatable::LoadXML(const XMLElement& source) override
    // -bool Animatable::SaveXML(XMLElement& dest) const override
    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Serializable::ApplyAttributes()

    // template<class T> T* UIElement::CreateChild(const String& name=String::EMPTY, unsigned index=M_MAX_UNSIGNED)
    // Error: type "T*" can not automatically bind

    // virtual void UIElement::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    // void UIElement::GetBatchesWithOffset(IntVector2& offset, PODVector<UIBatch>& batches, PODVector<float>& vertexData, IntRect currentScissor)
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    // template<class T> T* UIElement::GetChildDynamicCast(const String& name, bool recursive=false) const
    // Error: type "T*" can not automatically bind

    // template<class T> T* UIElement::GetChildDynamicCast(const StringHash& key, const Variant& value=Variant::EMPTY, bool recursive=false) const
    // Error: type "T*" can not automatically bind

    // template<class T> T* UIElement::GetChildDynamicCast(unsigned index) const
    // Error: type "T*" can not automatically bind

    // template<class T> T* UIElement::GetChildStaticCast(const String& name, bool recursive=false) const
    // Error: type "T*" can not automatically bind

    // template<class T> T* UIElement::GetChildStaticCast(const StringHash& key, const Variant& value=Variant::EMPTY, bool recursive=false) const
    // Error: type "T*" can not automatically bind

    // template<class T> T* UIElement::GetChildStaticCast(unsigned index) const
    // Error: type "T*" can not automatically bind

    // void UIElement::GetChildren(PODVector<UIElement*>& dest, bool recursive=false) const
    // Error: type "PODVector<UIElement*>&" can not automatically bind

    // void UIElement::GetChildrenWithTag(PODVector<UIElement*>& dest, const String& tag, bool recursive=false) const
    // Error: type "PODVector<UIElement*>&" can not automatically bind

    // virtual void UIElement::GetDebugDrawBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)
    // Error: type "PODVector<UIBatch>&" can not automatically bind
}

// class UISelectable | File: ../UI/UISelectable.h
void CollectMembers_UISelectable(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_UIElement(methods);

    // -explicit UIElement::UIElement(Context* context)
    // -static void UIElement::RegisterObject(Context* context)
    // -virtual void UIElement::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)

    // void UISelectable::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    // UISelectable::URHO3D_OBJECT(UISelectable, UIElement)
    // Error: type "" can not automatically bind
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

    // const Vector<AttributeInfo>* UnknownComponent::GetAttributes() const override
    // Error: type "const Vector<AttributeInfo>*" can not automatically bind

    // const PODVector<unsigned char>& UnknownComponent::GetBinaryAttributes() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
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

    // void ValueAnimation::GetEventFrames(float beginTime, float endTime, PODVector<const VAnimEventFrame*>& eventFrames) const
    // Error: type "PODVector<const VAnimEventFrame*>&" can not automatically bind

    // const Vector<VAnimKeyFrame>& ValueAnimation::GetKeyFrames() const
    // Error: type "const Vector<VAnimKeyFrame>&" can not automatically bind

    // void* ValueAnimation::GetOwner() const
    // Error: type "void*" can not automatically bind

    // void ValueAnimation::SetOwner(void* owner)
    // Error: type "void*" can not automatically bind
}

// class ValueAnimationInfo | File: ../Scene/ValueAnimationInfo.h
void CollectMembers_ValueAnimationInfo(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
}

// class Variant | File: ../Core/Variant.h
void CollectMembers_Variant(Vector<RegisterObjectMethodArgs>& methods)
{
    // void Variant::FromString(VariantType type, const char* value)
    // Error: type "const char*" can not automatically bind

    // void Variant::FromString(const char* type, const char* value)
    // Error: type "const char*" can not automatically bind

    // template<> PODVector<unsigned char> Variant::Get() const
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // template<> VariantVector Variant::Get() const
    // Error: type "VariantVector" can not automatically bind

    // template<> const PODVector<unsigned char>& Variant::Get() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // template<> void* Variant::Get() const
    // Error: type "void*" can not automatically bind

    // template<class T> T Variant::Get() const
    // Error: type "T" can not automatically bind

    // const PODVector<unsigned char>& Variant::GetBuffer() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // PODVector<unsigned char>* Variant::GetBufferPtr()
    // Error: type "PODVector<unsigned char>*" can not automatically bind

    // template<class T> T Variant::GetCustom() const
    // Error: type "T" can not automatically bind

    // template<class T> T* Variant::GetCustomPtr()
    // Error: type "T*" can not automatically bind

    // CustomVariantValue* Variant::GetCustomVariantValuePtr()
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark

    // const CustomVariantValue* Variant::GetCustomVariantValuePtr() const
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark

    // StringVector* Variant::GetStringVectorPtr()
    // Error: type "StringVector*" can not automatically bind

    // VariantMap* Variant::GetVariantMapPtr()
    // Error: type "VariantMap*" can not automatically bind

    // const VariantVector& Variant::GetVariantVector() const
    // Error: type "const VariantVector&" can not automatically bind

    // VariantVector* Variant::GetVariantVectorPtr()
    // Error: type "VariantVector*" can not automatically bind

    // void* Variant::GetVoidPtr() const
    // Error: type "void*" can not automatically bind

    // void Variant::SetBuffer(const void* data, unsigned size)
    // Error: type "const void*" can not automatically bind

    // template<class T> void Variant::SetCustom(const T& value)
    // Error: type "const T&" can not automatically bind

    // void Variant::SetCustomVariantValue(const CustomVariantValue& value)
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark

    // bool Variant::operator!=(const PODVector<unsigned char>& rhs) const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // bool Variant::operator!=(const VariantVector& rhs) const
    // Error: type "const VariantVector&" can not automatically bind

    // bool Variant::operator!=(void* rhs) const
    // Error: type "void*" can not automatically bind

    // Variant& Variant::operator=(const PODVector<unsigned char>& rhs)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // Variant& Variant::operator=(const VariantVector& rhs)
    // Error: type "const VariantVector&" can not automatically bind

    // Variant& Variant::operator=(const char* rhs)
    // Error: type "const char*" can not automatically bind

    // Variant& Variant::operator=(void* rhs)
    // Error: type "void*" can not automatically bind

    // template<class T> Variant& Variant::operator=(const CustomVariantValueImpl<T>& value)
    // Error: type "const CustomVariantValueImpl<T>&" can not automatically bind

    // bool Variant::operator==(const PODVector<unsigned char>& rhs) const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // bool Variant::operator==(const VariantVector& rhs) const
    // Error: type "const VariantVector&" can not automatically bind

    // bool Variant::operator==(void* rhs) const
    // Error: type "void*" can not automatically bind
}

// class Vector2 | File: ../Math/Vector2.h
void CollectMembers_Vector2(Vector<RegisterObjectMethodArgs>& methods)
{
    // const float* Vector2::Data() const
    // Error: type "const float*" can not automatically bind
}

// class Vector3 | File: ../Math/Vector3.h
void CollectMembers_Vector3(Vector<RegisterObjectMethodArgs>& methods)
{
    // const float* Vector3::Data() const
    // Error: type "const float*" can not automatically bind
}

// class Vector4 | File: ../Math/Vector4.h
void CollectMembers_Vector4(Vector<RegisterObjectMethodArgs>& methods)
{
    // const float* Vector4::Data() const
    // Error: type "const float*" can not automatically bind
}

// class VectorBase | File: ../Container/VectorBase.h
void CollectMembers_VectorBase(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class VectorBuffer | File: ../IO/VectorBuffer.h
void CollectMembers_VectorBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_AbstractFile(methods);

    // -virtual unsigned Deserializer::Read(void* dest, unsigned size)=0
    // -virtual unsigned Deserializer::Seek(unsigned position)=0
    // -virtual unsigned Serializer::Write(const void* data, unsigned size)=0

    // const PODVector<unsigned char>& VectorBuffer::GetBuffer() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // const unsigned char* VectorBuffer::GetData() const
    // Error: type "const unsigned char*" can not automatically bind

    // unsigned char* VectorBuffer::GetModifiableData()
    // Error: type "unsigned char*" can not automatically bind

    // unsigned VectorBuffer::Read(void* dest, unsigned size) override
    // Error: type "void*" can not automatically bind

    // void VectorBuffer::SetData(const PODVector<unsigned char>& data)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // void VectorBuffer::SetData(const void* data, unsigned size)
    // Error: type "const void*" can not automatically bind

    // unsigned VectorBuffer::Write(const void* data, unsigned size) override
    // Error: type "const void*" can not automatically bind
}

// class VertexBuffer | File: ../Graphics/VertexBuffer.h
void CollectMembers_VertexBuffer(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
    CollectMembers_GPUObject(methods);

    // -virtual void GPUObject::OnDeviceLost()
    // -virtual void GPUObject::OnDeviceReset()
    // -virtual void GPUObject::Release()

    // const VertexElement* VertexBuffer::GetElement(VertexElementSemantic semantic, unsigned char index=0) const
    // Error: type "const VertexElement*" can not automatically bind

    // const VertexElement* VertexBuffer::GetElement(VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) const
    // Error: type "const VertexElement*" can not automatically bind

    // unsigned char* VertexBuffer::GetShadowData() const
    // Error: type "unsigned char*" can not automatically bind

    // SharedArrayPtr<unsigned char> VertexBuffer::GetShadowDataShared() const
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind

    // void* VertexBuffer::Lock(unsigned start, unsigned count, bool discard=false)
    // Error: type "void*" can not automatically bind

    // bool VertexBuffer::SetData(const void* data)
    // Error: type "const void*" can not automatically bind

    // bool VertexBuffer::SetDataRange(const void* data, unsigned start, unsigned count, bool discard=false)
    // Error: type "const void*" can not automatically bind
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
}

// class View | File: ../Graphics/View.h
void CollectMembers_View(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // const Vector<LightBatchQueue>& View::GetLightQueues() const
    // Error: type "const Vector<LightBatchQueue>&" can not automatically bind
}

// class View3D | File: ../UI/View3D.h
void CollectMembers_View3D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Window(methods);

    // -static void Window::RegisterObject(Context* context)
    // -virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)
}

// class Viewport | File: ../Graphics/Viewport.h
void CollectMembers_Viewport(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

// class WString | File: ../Container/Str.h
void CollectMembers_WString(Vector<RegisterObjectMethodArgs>& methods)
{
    // const wchar_t& WString::At(unsigned index) const
    // Error: type "const wchar_t&" can not automatically bind

    // wchar_t& WString::At(unsigned index)
    // Error: type "wchar_t&" can not automatically bind

    // const wchar_t* WString::CString() const
    // Error: type "const wchar_t*" can not automatically bind

    // const wchar_t& WString::operator[](unsigned index) const
    // Error: type "const wchar_t&" can not automatically bind

    // wchar_t& WString::operator[](unsigned index)
    // Error: type "wchar_t&" can not automatically bind
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
    // Error: type "PODVector<UIBatch>&" can not automatically bind
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

    // void WorkQueue::AddWorkItem(const SharedPtr<WorkItem>& item)
    // Error: type "const SharedPtr<WorkItem>&" can not automatically bind

    // SharedPtr<WorkItem> WorkQueue::GetFreeItem()
    // Error: type "SharedPtr<WorkItem>" can not automatically bind

    // bool WorkQueue::RemoveWorkItem(SharedPtr<WorkItem> item)
    // Error: type "SharedPtr<WorkItem>" can not automatically bind

    // unsigned WorkQueue::RemoveWorkItems(const Vector<SharedPtr<WorkItem>>& items)
    // Error: type "const Vector<SharedPtr<WorkItem>>&" can not automatically bind
}

// class XMLElement | File: ../Resource/XMLElement.h
void CollectMembers_XMLElement(Vector<RegisterObjectMethodArgs>& methods)
{
    // XMLElement XMLElement::CreateChild(const char* name)
    // Error: type "const char*" can not automatically bind

    // String XMLElement::GetAttribute(const char* name) const
    // Error: type "const char*" can not automatically bind

    // const char* XMLElement::GetAttributeCString(const char* name) const
    // Error: type "const char*" can not automatically bind

    // String XMLElement::GetAttributeLower(const char* name) const
    // Error: type "const char*" can not automatically bind

    // String XMLElement::GetAttributeUpper(const char* name) const
    // Error: type "const char*" can not automatically bind

    // PODVector<unsigned char> XMLElement::GetBuffer(const String& name) const
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // bool XMLElement::GetBuffer(const String& name, void* dest, unsigned size) const
    // Error: type "void*" can not automatically bind

    // XMLElement XMLElement::GetChild(const char* name) const
    // Error: type "const char*" can not automatically bind

    // XMLElement XMLElement::GetNext(const char* name) const
    // Error: type "const char*" can not automatically bind

    // pugi::xml_node_struct* XMLElement::GetNode() const
    // Error: type "pugi::xml_node_struct*" can not automatically bind

    // XMLElement XMLElement::GetOrCreateChild(const char* name)
    // Error: type "const char*" can not automatically bind

    // VariantVector XMLElement::GetVariantVector() const
    // Error: type "VariantVector" can not automatically bind

    // const pugi::xpath_node* XMLElement::GetXPathNode() const
    // Error: type "const pugi::xpath_node*" can not automatically bind

    // const XPathResultSet* XMLElement::GetXPathResultSet() const
    // Error: type "const XPathResultSet*" can not automatically bind

    // bool XMLElement::HasAttribute(const char* name) const
    // Error: type "const char*" can not automatically bind

    // bool XMLElement::HasChild(const char* name) const
    // Error: type "const char*" can not automatically bind

    // bool XMLElement::RemoveAttribute(const char* name)
    // Error: type "const char*" can not automatically bind

    // bool XMLElement::RemoveChild(const char* name)
    // Error: type "const char*" can not automatically bind

    // bool XMLElement::RemoveChildren(const char* name)
    // Error: type "const char*" can not automatically bind

    // XPathResultSet XMLElement::Select(const String& query, pugi::xpath_variable_set* variables=nullptr) const
    // Error: type "pugi::xpath_variable_set*" can not automatically bind

    // XMLElement XMLElement::SelectSingle(const String& query, pugi::xpath_variable_set* variables=nullptr) const
    // Error: type "pugi::xpath_variable_set*" can not automatically bind

    // bool XMLElement::SetAttribute(const char* name, const char* value)
    // Error: type "const char*" can not automatically bind

    // bool XMLElement::SetAttribute(const char* value)
    // Error: type "const char*" can not automatically bind

    // bool XMLElement::SetBuffer(const String& name, const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // bool XMLElement::SetBuffer(const String& name, const void* data, unsigned size)
    // Error: type "const void*" can not automatically bind

    // bool XMLElement::SetValue(const char* value)
    // Error: type "const char*" can not automatically bind

    // bool XMLElement::SetVariantVector(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
}

// class XMLFile | File: ../Resource/XMLFile.h
void CollectMembers_XMLFile(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::Save(Serializer& dest) const

    // pugi::xml_document* XMLFile::GetDocument() const
    // Error: type "pugi::xml_document*" can not automatically bind
}

// class XPathQuery | File: ../Resource/XMLElement.h
void CollectMembers_XPathQuery(Vector<RegisterObjectMethodArgs>& methods)
{
    // pugi::xpath_query* XPathQuery::GetXPathQuery() const
    // Error: type "pugi::xpath_query*" can not automatically bind

    // pugi::xpath_variable_set* XPathQuery::GetXPathVariableSet() const
    // Error: type "pugi::xpath_variable_set*" can not automatically bind

    // bool XPathQuery::SetVariable(const char* name, const char* value)
    // Error: type "const char*" can not automatically bind
}

// class XPathResultSet | File: ../Resource/XMLElement.h
void CollectMembers_XPathResultSet(Vector<RegisterObjectMethodArgs>& methods)
{
    // pugi::xpath_node_set* XPathResultSet::GetXPathNodeSet() const
    // Error: type "pugi::xpath_node_set*" can not automatically bind
}

// class Zone | File: ../Graphics/Zone.h
void CollectMembers_Zone(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    // -static void Drawable::RegisterObject(Context* context)
    // -void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override
}

#ifdef URHO3D_DATABASE

// class Database | File: ../Database/Database.h
void CollectMembers_Database(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);
}

#endif // def URHO3D_DATABASE

#ifdef URHO3D_IK

// class IKConstraint | File: ../IK/IKConstraint.h
void CollectMembers_IKConstraint(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
}

// class IKEffector | File: ../IK/IKEffector.h
void CollectMembers_IKEffector(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // bool IKEffector::GetFeature(Feature feature) const
    // Error: type "Feature" can not automatically bind

    // void IKEffector::SetFeature(Feature feature, bool enable)
    // Error: type "Feature" can not automatically bind
}

// class IKSolver | File: ../IK/IKSolver.h
void CollectMembers_IKSolver(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // Algorithm IKSolver::GetAlgorithm() const
    // Error: type "Algorithm" can not automatically bind

    // bool IKSolver::GetFeature(Feature feature) const
    // Error: type "Feature" can not automatically bind

    // void IKSolver::SetAlgorithm(Algorithm algorithm)
    // Error: type "Algorithm" can not automatically bind

    // void IKSolver::SetFeature(Feature feature, bool enable)
    // Error: type "Feature" can not automatically bind
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
}

// class CrowdManager | File: ../Navigation/CrowdManager.h
void CollectMembers_CrowdManager(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Serializable::ApplyAttributes()

    // Vector3 CrowdManager::FindNearestPoint(const Vector3& point, int queryFilterType, dtPolyRef* nearestRef=nullptr)
    // Error: type "dtPolyRef*" can not automatically bind

    // void CrowdManager::FindPath(PODVector<Vector3>& dest, const Vector3& start, const Vector3& end, int queryFilterType)
    // Error: type "PODVector<Vector3>&" can not automatically bind

    // float CrowdManager::GetDistanceToWall(const Vector3& point, float radius, int queryFilterType, Vector3* hitPos=nullptr, Vector3* hitNormal=nullptr)
    // Error: type "Vector3*" can not automatically bind

    // VariantVector CrowdManager::GetObstacleAvoidanceTypesAttr() const
    // Error: type "VariantVector" can not automatically bind

    // VariantVector CrowdManager::GetQueryFilterTypesAttr() const
    // Error: type "VariantVector" can not automatically bind

    // Vector3 CrowdManager::GetRandomPoint(int queryFilterType, dtPolyRef* randomRef=nullptr)
    // Error: type "dtPolyRef*" can not automatically bind

    // Vector3 CrowdManager::GetRandomPointInCircle(const Vector3& center, float radius, int queryFilterType, dtPolyRef* randomRef=nullptr)
    // Error: type "dtPolyRef*" can not automatically bind

    // Vector3 CrowdManager::Raycast(const Vector3& start, const Vector3& end, int queryFilterType, Vector3* hitNormal=nullptr)
    // Error: type "Vector3*" can not automatically bind

    // void CrowdManager::SetObstacleAvoidanceTypesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    // void CrowdManager::SetQueryFilterTypesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
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

    // bool DynamicNavigationMesh::AddTile(const PODVector<unsigned char>& tileData) override
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // PODVector<unsigned char> DynamicNavigationMesh::GetNavigationDataAttr() const override
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // PODVector<unsigned char> DynamicNavigationMesh::GetTileData(const IntVector2& tile) const override
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // void DynamicNavigationMesh::SetNavigationDataAttr(const PODVector<unsigned char>& value) override
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
}

// class NavArea | File: ../Navigation/NavArea.h
void CollectMembers_NavArea(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
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

    // virtual bool NavigationMesh::AddTile(const PODVector<unsigned char>& tileData)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // Vector3 NavigationMesh::FindNearestPoint(const Vector3& point, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, dtPolyRef* nearestRef=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind

    // void NavigationMesh::FindPath(PODVector<NavigationPathPoint>& dest, const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr)
    // Error: type "PODVector<NavigationPathPoint>&" can not automatically bind

    // void NavigationMesh::FindPath(PODVector<Vector3>& dest, const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr)
    // Error: type "PODVector<Vector3>&" can not automatically bind

    // float NavigationMesh::GetDistanceToWall(const Vector3& point, float radius, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, Vector3* hitPos=nullptr, Vector3* hitNormal=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind

    // virtual PODVector<unsigned char> NavigationMesh::GetNavigationDataAttr() const
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // Vector3 NavigationMesh::GetRandomPoint(const dtQueryFilter* filter=nullptr, dtPolyRef* randomRef=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind

    // Vector3 NavigationMesh::GetRandomPointInCircle(const Vector3& center, float radius, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, dtPolyRef* randomRef=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind

    // virtual PODVector<unsigned char> NavigationMesh::GetTileData(const IntVector2& tile) const
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // Vector3 NavigationMesh::MoveAlongSurface(const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, int maxVisited=3, const dtQueryFilter* filter=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind

    // Vector3 NavigationMesh::Raycast(const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, Vector3* hitNormal=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind

    // virtual void NavigationMesh::SetNavigationDataAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
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
}

// class OffMeshConnection | File: ../Navigation/OffMeshConnection.h
void CollectMembers_OffMeshConnection(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Serializable::ApplyAttributes()
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

    // const SLNet::AddressOrGUID& Connection::GetAddressOrGUID() const
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind

    // bool Connection::ProcessMessage(int msgID, MemoryBuffer& buffer)
    // Error: type "MemoryBuffer" can not automatically bind bacause have @nobind mark

    // void Connection::SendMessage(int msgID, bool reliable, bool inOrder, const unsigned char* data, unsigned numBytes, unsigned contentID=0)
    // Error: type "const unsigned char*" can not automatically bind

    // void Connection::SetAddressOrGUID(const SLNet::AddressOrGUID& addr)
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind
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

    // unsigned HttpRequest::Read(void* dest, unsigned size) override
    // Error: type "void*" can not automatically bind
}

// class Network | File: ../Network/Network.h
void CollectMembers_Network(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Object(methods);

    // void Network::BroadcastMessage(int msgID, bool reliable, bool inOrder, const unsigned char* data, unsigned numBytes, unsigned contentID=0)
    // Error: type "const unsigned char*" can not automatically bind

    // void Network::ClientDisconnected(const SLNet::AddressOrGUID& connection)
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind

    // Connection* Network::GetConnection(const SLNet::AddressOrGUID& connection) const
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind

    // void Network::HandleMessage(const SLNet::AddressOrGUID& source, int packetID, int msgID, const char* data, size_t numBytes)
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind

    // void Network::NewConnectionEstablished(const SLNet::AddressOrGUID& connection)
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind
}

// class NetworkPriority | File: ../Network/NetworkPriority.h
void CollectMembers_NetworkPriority(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
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

    // btCollisionShape* CollisionShape::GetCollisionShape() const
    // Error: type "btCollisionShape*" can not automatically bind
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

    // btTypedConstraint* Constraint::GetConstraint() const
    // Error: type "btTypedConstraint*" can not automatically bind

    // void Constraint::GetDependencyNodes(PODVector<Node*>& dest) override
    // Error: type "PODVector<Node*>&" can not automatically bind
}

// struct ConvexData | File: ../Physics/CollisionShape.h
void CollectMembers_ConvexData(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionGeometryData(methods);
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
}

// class PhysicsWorld | File: ../Physics/PhysicsWorld.h
void CollectMembers_PhysicsWorld(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // void PhysicsWorld::ConvexCast(PhysicsRaycastResult& result, btCollisionShape* shape, const Vector3& startPos, const Quaternion& startRot, const Vector3& endPos, const Quaternion& endRot, unsigned collisionMask=M_MAX_UNSIGNED)
    // Error: type "btCollisionShape*" can not automatically bind

    // void PhysicsWorld::GetCollidingBodies(PODVector<RigidBody*>& result, const RigidBody* body)
    // Error: type "PODVector<RigidBody*>&" can not automatically bind

    // CollisionGeometryDataCache& PhysicsWorld::GetConvexCache()
    // Error: type "CollisionGeometryDataCache&" can not automatically bind

    // CollisionGeometryDataCache& PhysicsWorld::GetGImpactTrimeshCache()
    // Error: type "CollisionGeometryDataCache&" can not automatically bind

    // void PhysicsWorld::GetRigidBodies(PODVector<RigidBody*>& result, const BoundingBox& box, unsigned collisionMask=M_MAX_UNSIGNED)
    // Error: type "PODVector<RigidBody*>&" can not automatically bind

    // void PhysicsWorld::GetRigidBodies(PODVector<RigidBody*>& result, const RigidBody* body)
    // Error: type "PODVector<RigidBody*>&" can not automatically bind

    // void PhysicsWorld::GetRigidBodies(PODVector<RigidBody*>& result, const Sphere& sphere, unsigned collisionMask=M_MAX_UNSIGNED)
    // Error: type "PODVector<RigidBody*>&" can not automatically bind

    // CollisionGeometryDataCache& PhysicsWorld::GetTriMeshCache()
    // Error: type "CollisionGeometryDataCache&" can not automatically bind

    // btDiscreteDynamicsWorld* PhysicsWorld::GetWorld()
    // Error: type "btDiscreteDynamicsWorld*" can not automatically bind

    // void PhysicsWorld::Raycast(PODVector<PhysicsRaycastResult>& result, const Ray& ray, float maxDistance, unsigned collisionMask=M_MAX_UNSIGNED)
    // Error: type "PODVector<PhysicsRaycastResult>&" can not automatically bind

    // void PhysicsWorld::draw3dText(const btVector3& location, const char* textString) override
    // Error: type "const btVector3&" can not automatically bind

    // void PhysicsWorld::drawContactPoint(const btVector3& pointOnB, const btVector3& normalOnB, btScalar distance, int lifeTime, const btVector3& color) override
    // Error: type "const btVector3&" can not automatically bind

    // void PhysicsWorld::drawLine(const btVector3& from, const btVector3& to, const btVector3& color) override
    // Error: type "const btVector3&" can not automatically bind

    // bool PhysicsWorld::isVisible(const btVector3& aabbMin, const btVector3& aabbMax) override
    // Error: type "const btVector3&" can not automatically bind

    // void PhysicsWorld::reportErrorWarning(const char* warningString) override
    // Error: type "const char*" can not automatically bind
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

    // VariantVector RaycastVehicle::GetWheelDataAttr() const
    // Error: type "VariantVector" can not automatically bind

    // void RaycastVehicle::SetWheelDataAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
}

// class RigidBody | File: ../Physics/RigidBody.h
void CollectMembers_RigidBody(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
    // -virtual void Component::OnSetEnabled()
    // -virtual void Serializable::ApplyAttributes()

    // btRigidBody* RigidBody::GetBody() const
    // Error: type "btRigidBody*" can not automatically bind

    // void RigidBody::GetCollidingBodies(PODVector<RigidBody*>& result) const
    // Error: type "PODVector<RigidBody*>&" can not automatically bind

    // btCompoundShape* RigidBody::GetCompoundShape() const
    // Error: type "btCompoundShape*" can not automatically bind

    // const PODVector<unsigned char>& RigidBody::GetNetAngularVelocityAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // void RigidBody::SetNetAngularVelocityAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    // void RigidBody::getWorldTransform(btTransform& worldTrans) const override
    // Error: type "btTransform&" can not automatically bind

    // void RigidBody::setWorldTransform(const btTransform& worldTrans) override
    // Error: type "const btTransform&" can not automatically bind
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
}

// class AnimationSet2D | File: ../Urho2D/AnimationSet2D.h
void CollectMembers_AnimationSet2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()

    // Spriter::SpriterData* AnimationSet2D::GetSpriterData() const
    // Error: type "Spriter::SpriterData*" can not automatically bind
}

// class CollisionBox2D | File: ../Urho2D/CollisionBox2D.h
void CollectMembers_CollisionBox2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    // -static void CollisionShape2D::RegisterObject(Context* context)
}

// class CollisionChain2D | File: ../Urho2D/CollisionChain2D.h
void CollectMembers_CollisionChain2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    // -static void CollisionShape2D::RegisterObject(Context* context)

    // PODVector<unsigned char> CollisionChain2D::GetVerticesAttr() const
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // void CollisionChain2D::SetVerticesAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
}

// class CollisionCircle2D | File: ../Urho2D/CollisionCircle2D.h
void CollectMembers_CollisionCircle2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    // -static void CollisionShape2D::RegisterObject(Context* context)
}

// class CollisionEdge2D | File: ../Urho2D/CollisionEdge2D.h
void CollectMembers_CollisionEdge2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    // -static void CollisionShape2D::RegisterObject(Context* context)
}

// class CollisionPolygon2D | File: ../Urho2D/CollisionPolygon2D.h
void CollectMembers_CollisionPolygon2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    // -static void CollisionShape2D::RegisterObject(Context* context)

    // PODVector<unsigned char> CollisionPolygon2D::GetVerticesAttr() const
    // Error: type "PODVector<unsigned char>" can not automatically bind

    // void CollisionPolygon2D::SetVerticesAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
}

// class CollisionShape2D | File: ../Urho2D/CollisionShape2D.h
void CollectMembers_CollisionShape2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::OnSetEnabled()

    // b2Fixture* CollisionShape2D::GetFixture() const
    // Error: type "b2Fixture*" can not automatically bind
}

// class Constraint2D | File: ../Urho2D/Constraint2D.h
void CollectMembers_Constraint2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::OnSetEnabled()
    // -virtual void Serializable::ApplyAttributes()

    // b2Joint* Constraint2D::GetJoint() const
    // Error: type "b2Joint*" can not automatically bind
}

// class ConstraintDistance2D | File: ../Urho2D/ConstraintDistance2D.h
void CollectMembers_ConstraintDistance2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
}

// class ConstraintFriction2D | File: ../Urho2D/ConstraintFriction2D.h
void CollectMembers_ConstraintFriction2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
}

// class ConstraintGear2D | File: ../Urho2D/ConstraintGear2D.h
void CollectMembers_ConstraintGear2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
}

// class ConstraintMotor2D | File: ../Urho2D/ConstraintMotor2D.h
void CollectMembers_ConstraintMotor2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
}

// class ConstraintMouse2D | File: ../Urho2D/ConstraintMouse2D.h
void CollectMembers_ConstraintMouse2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
}

// class ConstraintPrismatic2D | File: ../Urho2D/ConstraintPrismatic2D.h
void CollectMembers_ConstraintPrismatic2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
}

// class ConstraintPulley2D | File: ../Urho2D/ConstraintPulley2D.h
void CollectMembers_ConstraintPulley2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
}

// class ConstraintRevolute2D | File: ../Urho2D/ConstraintRevolute2D.h
void CollectMembers_ConstraintRevolute2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
}

// class ConstraintRope2D | File: ../Urho2D/ConstraintRope2D.h
void CollectMembers_ConstraintRope2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
}

// class ConstraintWeld2D | File: ../Urho2D/ConstraintWeld2D.h
void CollectMembers_ConstraintWeld2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
}

// class ConstraintWheel2D | File: ../Urho2D/ConstraintWheel2D.h
void CollectMembers_ConstraintWheel2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    // -static void Constraint2D::RegisterObject(Context* context)
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

    // const Vector<SourceBatch2D>& Drawable2D::GetSourceBatches()
    // Error: type "const Vector<SourceBatch2D>&" can not automatically bind
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
}

// class ParticleEmitter2D | File: ../Urho2D/ParticleEmitter2D.h
void CollectMembers_ParticleEmitter2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable2D(methods);

    // -static void Drawable2D::RegisterObject(Context* context)
    // -virtual void Drawable::Update(const FrameInfo& frame)
    // -void Drawable2D::OnSetEnabled() override
}

// struct PhysicsRaycastResult2D | File: ../Urho2D/PhysicsWorld2D.h
void CollectMembers_PhysicsRaycastResult2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class PhysicsWorld2D | File: ../Urho2D/PhysicsWorld2D.h
void CollectMembers_PhysicsWorld2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)

    // void PhysicsWorld2D::BeginContact(b2Contact* contact) override
    // Error: type "b2Contact*" can not automatically bind

    // void PhysicsWorld2D::DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color) override
    // Error: type "const b2Vec2&" can not automatically bind

    // void PhysicsWorld2D::DrawPoint(const b2Vec2& p, float32 size, const b2Color& color) override
    // Error: type "const b2Vec2&" can not automatically bind

    // void PhysicsWorld2D::DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color) override
    // Error: type "const b2Vec2*" can not automatically bind

    // void PhysicsWorld2D::DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color) override
    // Error: type "const b2Vec2&" can not automatically bind

    // void PhysicsWorld2D::DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color) override
    // Error: type "const b2Vec2&" can not automatically bind

    // void PhysicsWorld2D::DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color) override
    // Error: type "const b2Vec2*" can not automatically bind

    // void PhysicsWorld2D::DrawTransform(const b2Transform& xf) override
    // Error: type "const b2Transform&" can not automatically bind

    // void PhysicsWorld2D::EndContact(b2Contact* contact) override
    // Error: type "b2Contact*" can not automatically bind

    // void PhysicsWorld2D::GetRigidBodies(PODVector<RigidBody2D*>& results, const Rect& aabb, unsigned collisionMask=M_MAX_UNSIGNED)
    // Error: type "PODVector<RigidBody2D*>&" can not automatically bind

    // b2World* PhysicsWorld2D::GetWorld()
    // Error: type "b2World*" can not automatically bind

    // void PhysicsWorld2D::PreSolve(b2Contact* contact, const b2Manifold* oldManifold) override
    // Error: type "b2Contact*" can not automatically bind

    // void PhysicsWorld2D::Raycast(PODVector<PhysicsRaycastResult2D>& results, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask=M_MAX_UNSIGNED)
    // Error: type "PODVector<PhysicsRaycastResult2D>&" can not automatically bind
}

// class PropertySet2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_PropertySet2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
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
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
}

// class RigidBody2D | File: ../Urho2D/RigidBody2D.h
void CollectMembers_RigidBody2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::OnSetEnabled()

    // b2Body* RigidBody2D::GetBody() const
    // Error: type "b2Body*" can not automatically bind
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
}

// class SpriteSheet2D | File: ../Urho2D/SpriteSheet2D.h
void CollectMembers_SpriteSheet2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()

    // const HashMap<String, SharedPtr<Sprite2D>>& SpriteSheet2D::GetSpriteMapping() const
    // Error: type "const HashMap<String, SharedPtr<Sprite2D>>&" can not automatically bind
}

// class StaticSprite2D | File: ../Urho2D/StaticSprite2D.h
void CollectMembers_StaticSprite2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable2D(methods);

    // -static void Drawable2D::RegisterObject(Context* context)
}

// class StretchableSprite2D | File: ../Urho2D/StretchableSprite2D.h
void CollectMembers_StretchableSprite2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_StaticSprite2D(methods);

    // -static void StaticSprite2D::RegisterObject(Context* context)
}

// class Tile2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_Tile2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
}

// class TileMap2D | File: ../Urho2D/TileMap2D.h
void CollectMembers_TileMap2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
}

// struct TileMapInfo2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_TileMapInfo2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class TileMapLayer2D | File: ../Urho2D/TileMapLayer2D.h
void CollectMembers_TileMapLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    // -static void Animatable::RegisterObject(Context* context)
    // -virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)
}

// class TileMapObject2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_TileMapObject2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
}

// class TmxFile2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxFile2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    // -virtual bool Resource::BeginLoad(Deserializer& source)
    // -virtual bool Resource::EndLoad()

    // void TmxFile2D::AddLayer(Urho3D::TmxLayer2D* layer)
    // Error: type "Urho3D::TmxLayer2D*" can not automatically bind
}

// class TmxImageLayer2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxImageLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_TmxLayer2D(methods);
}

// class TmxLayer2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);
}

// class TmxObjectGroup2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxObjectGroup2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_TmxLayer2D(methods);

    // void TmxObjectGroup2D::StoreObject(const XMLElement& objectElem, const SharedPtr<TileMapObject2D>& object, const TileMapInfo2D& info, bool isTile=false)
    // Error: type "const SharedPtr<TileMapObject2D>&" can not automatically bind
}

// class TmxTileLayer2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxTileLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_TmxLayer2D(methods);
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
