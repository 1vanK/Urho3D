// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_B(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void BillboardSet::RegisterObject(Context* context) | File: ../Graphics/BillboardSet.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(BillboardSet, "BillboardSet")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(BillboardSet, "BillboardSet")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(BillboardSet, "BillboardSet")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(BillboardSet, "BillboardSet")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(BillboardSet, "BillboardSet")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(BillboardSet, "BillboardSet")
#endif
#ifdef REGISTER_MANUAL_PART_BillboardSet
    REGISTER_MANUAL_PART_BillboardSet(BillboardSet, "BillboardSet")
#endif
    RegisterSubclass<Drawable, BillboardSet>(engine, "Drawable", "BillboardSet");
    RegisterSubclass<Component, BillboardSet>(engine, "Component", "BillboardSet");
    RegisterSubclass<Animatable, BillboardSet>(engine, "Animatable", "BillboardSet");
    RegisterSubclass<Serializable, BillboardSet>(engine, "Serializable", "BillboardSet");
    RegisterSubclass<Object, BillboardSet>(engine, "Object", "BillboardSet");
    RegisterSubclass<RefCounted, BillboardSet>(engine, "RefCounted", "BillboardSet");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void BorderImage::RegisterObject(Context* context) | File: ../UI/BorderImage.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(BorderImage, "BorderImage")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(BorderImage, "BorderImage")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(BorderImage, "BorderImage")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(BorderImage, "BorderImage")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(BorderImage, "BorderImage")
#endif
#ifdef REGISTER_MANUAL_PART_BorderImage
    REGISTER_MANUAL_PART_BorderImage(BorderImage, "BorderImage")
#endif
    RegisterSubclass<UIElement, BorderImage>(engine, "UIElement", "BorderImage");
    RegisterSubclass<Animatable, BorderImage>(engine, "Animatable", "BorderImage");
    RegisterSubclass<Serializable, BorderImage>(engine, "Serializable", "BorderImage");
    RegisterSubclass<Object, BorderImage>(engine, "Object", "BorderImage");
    RegisterSubclass<RefCounted, BorderImage>(engine, "RefCounted", "BorderImage");

    // float BoundingBox::dummyMax_ | File: ../Math/BoundingBox.h
    engine->RegisterObjectProperty("BoundingBox", "float dummyMax", offsetof(BoundingBox, dummyMax_));
    // float BoundingBox::dummyMin_ | File: ../Math/BoundingBox.h
    engine->RegisterObjectProperty("BoundingBox", "float dummyMin", offsetof(BoundingBox, dummyMin_));
    // Vector3 BoundingBox::max_ | File: ../Math/BoundingBox.h
    engine->RegisterObjectProperty("BoundingBox", "Vector3 max", offsetof(BoundingBox, max_));
    // Vector3 BoundingBox::min_ | File: ../Math/BoundingBox.h
    engine->RegisterObjectProperty("BoundingBox", "Vector3 min", offsetof(BoundingBox, min_));
#ifdef REGISTER_MANUAL_PART_BoundingBox
    REGISTER_MANUAL_PART_BoundingBox(BoundingBox, "BoundingBox")
#endif

#ifdef REGISTER_MANUAL_PART_SoundStream
    REGISTER_MANUAL_PART_SoundStream(BufferedSoundStream, "BufferedSoundStream")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(BufferedSoundStream, "BufferedSoundStream")
#endif
#ifdef REGISTER_MANUAL_PART_BufferedSoundStream
    REGISTER_MANUAL_PART_BufferedSoundStream(BufferedSoundStream, "BufferedSoundStream")
#endif
    RegisterSubclass<SoundStream, BufferedSoundStream>(engine, "SoundStream", "BufferedSoundStream");
    RegisterSubclass<RefCounted, BufferedSoundStream>(engine, "RefCounted", "BufferedSoundStream");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Button::RegisterObject(Context* context) | File: ../UI/Button.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_BorderImage
    REGISTER_MANUAL_PART_BorderImage(Button, "Button")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(Button, "Button")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Button, "Button")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Button, "Button")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Button, "Button")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Button, "Button")
#endif
#ifdef REGISTER_MANUAL_PART_Button
    REGISTER_MANUAL_PART_Button(Button, "Button")
#endif
    RegisterSubclass<BorderImage, Button>(engine, "BorderImage", "Button");
    RegisterSubclass<UIElement, Button>(engine, "UIElement", "Button");
    RegisterSubclass<Animatable, Button>(engine, "Animatable", "Button");
    RegisterSubclass<Serializable, Button>(engine, "Serializable", "Button");
    RegisterSubclass<Object, Button>(engine, "Object", "Button");
    RegisterSubclass<RefCounted, Button>(engine, "RefCounted", "Button");

    // HashSet<Pair<StringHash, StringHash>> BackgroundLoadItem::dependencies_ | File: ../Resource/BackgroundLoader.h
    // Error: type "HashSet<Pair<StringHash, StringHash>>" can not automatically bind
    // HashSet<Pair<StringHash, StringHash>> BackgroundLoadItem::dependents_ | File: ../Resource/BackgroundLoader.h
    // Error: type "HashSet<Pair<StringHash, StringHash>>" can not automatically bind
    // SharedPtr<Resource> BackgroundLoadItem::resource_ | File: ../Resource/BackgroundLoader.h
    // Error: type "SharedPtr<Resource>" can not automatically bind
    // bool BackgroundLoadItem::sendEventOnFailure_ | File: ../Resource/BackgroundLoader.h
    engine->RegisterObjectProperty("BackgroundLoadItem", "bool sendEventOnFailure", offsetof(BackgroundLoadItem, sendEventOnFailure_));
    // BackgroundLoadItem& BackgroundLoadItem::operator=(const BackgroundLoadItem&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<BackgroundLoadItem>(engine, "BackgroundLoadItem");
#ifdef REGISTER_MANUAL_PART_BackgroundLoadItem
    REGISTER_MANUAL_PART_BackgroundLoadItem(BackgroundLoadItem, "BackgroundLoadItem")
#endif

    // float Batch::distance_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("Batch", "float distance", offsetof(Batch, distance_));
    // Geometry* Batch::geometry_ | File: ../Graphics/Batch.h
    // Geometry* can not be registered
    // GeometryType Batch::geometryType_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("Batch", "GeometryType geometryType", offsetof(Batch, geometryType_));
    // void* Batch::instancingData_ | File: ../Graphics/Batch.h
    // void* can not be registered
    // bool Batch::isBase_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("Batch", "bool isBase", offsetof(Batch, isBase_));
    // unsigned char Batch::lightMask_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("Batch", "uint8 lightMask", offsetof(Batch, lightMask_));
    // LightBatchQueue* Batch::lightQueue_ | File: ../Graphics/Batch.h
    // LightBatchQueue* can not be registered
    // Material* Batch::material_ | File: ../Graphics/Batch.h
    // Material* can not be registered
    // unsigned Batch::numWorldTransforms_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("Batch", "uint numWorldTransforms", offsetof(Batch, numWorldTransforms_));
    // Pass* Batch::pass_ | File: ../Graphics/Batch.h
    // Pass* can not be registered
    // ShaderVariation* Batch::pixelShader_ | File: ../Graphics/Batch.h
    // ShaderVariation* can not be registered
    // unsigned char Batch::renderOrder_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("Batch", "uint8 renderOrder", offsetof(Batch, renderOrder_));
    // unsigned long long Batch::sortKey_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("Batch", "uint64 sortKey", offsetof(Batch, sortKey_));
    // ShaderVariation* Batch::vertexShader_ | File: ../Graphics/Batch.h
    // ShaderVariation* can not be registered
    // const Matrix3x4* Batch::worldTransform_ | File: ../Graphics/Batch.h
    // const Matrix3x4* can not be registered
    // Zone* Batch::zone_ | File: ../Graphics/Batch.h
    // Zone* can not be registered
    // Batch& Batch::operator=(const Batch&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Batch>(engine, "Batch");
#ifdef REGISTER_MANUAL_PART_Batch
    REGISTER_MANUAL_PART_Batch(Batch, "Batch")
#endif

    // float Batch::distance_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchGroup", "float distance", offsetof(BatchGroup, distance_));
    // Geometry* Batch::geometry_ | File: ../Graphics/Batch.h
    // Geometry* can not be registered
    // GeometryType Batch::geometryType_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchGroup", "GeometryType geometryType", offsetof(BatchGroup, geometryType_));
    // PODVector<InstanceData> BatchGroup::instances_ | File: ../Graphics/Batch.h
    // Error: type "PODVector<InstanceData>" can not automatically bind
    // void* Batch::instancingData_ | File: ../Graphics/Batch.h
    // void* can not be registered
    // bool Batch::isBase_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchGroup", "bool isBase", offsetof(BatchGroup, isBase_));
    // unsigned char Batch::lightMask_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchGroup", "uint8 lightMask", offsetof(BatchGroup, lightMask_));
    // LightBatchQueue* Batch::lightQueue_ | File: ../Graphics/Batch.h
    // LightBatchQueue* can not be registered
    // Material* Batch::material_ | File: ../Graphics/Batch.h
    // Material* can not be registered
    // unsigned Batch::numWorldTransforms_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchGroup", "uint numWorldTransforms", offsetof(BatchGroup, numWorldTransforms_));
    // Pass* Batch::pass_ | File: ../Graphics/Batch.h
    // Pass* can not be registered
    // ShaderVariation* Batch::pixelShader_ | File: ../Graphics/Batch.h
    // ShaderVariation* can not be registered
    // unsigned char Batch::renderOrder_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchGroup", "uint8 renderOrder", offsetof(BatchGroup, renderOrder_));
    // unsigned long long Batch::sortKey_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchGroup", "uint64 sortKey", offsetof(BatchGroup, sortKey_));
    // unsigned BatchGroup::startIndex_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchGroup", "uint startIndex", offsetof(BatchGroup, startIndex_));
    // ShaderVariation* Batch::vertexShader_ | File: ../Graphics/Batch.h
    // ShaderVariation* can not be registered
    // const Matrix3x4* Batch::worldTransform_ | File: ../Graphics/Batch.h
    // const Matrix3x4* can not be registered
    // Zone* Batch::zone_ | File: ../Graphics/Batch.h
    // Zone* can not be registered
    // BatchGroup& BatchGroup::operator=(const BatchGroup&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<BatchGroup>(engine, "BatchGroup");
#ifdef REGISTER_MANUAL_PART_Batch
    REGISTER_MANUAL_PART_Batch(BatchGroup, "BatchGroup")
#endif
#ifdef REGISTER_MANUAL_PART_BatchGroup
    REGISTER_MANUAL_PART_BatchGroup(BatchGroup, "BatchGroup")
#endif

    // Geometry* BatchGroupKey::geometry_ | File: ../Graphics/Batch.h
    // Geometry* can not be registered
    // LightBatchQueue* BatchGroupKey::lightQueue_ | File: ../Graphics/Batch.h
    // LightBatchQueue* can not be registered
    // Material* BatchGroupKey::material_ | File: ../Graphics/Batch.h
    // Material* can not be registered
    // Pass* BatchGroupKey::pass_ | File: ../Graphics/Batch.h
    // Pass* can not be registered
    // unsigned char BatchGroupKey::renderOrder_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchGroupKey", "uint8 renderOrder", offsetof(BatchGroupKey, renderOrder_));
    // Zone* BatchGroupKey::zone_ | File: ../Graphics/Batch.h
    // Zone* can not be registered
    // BatchGroupKey& BatchGroupKey::operator=(const BatchGroupKey&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<BatchGroupKey>(engine, "BatchGroupKey");
#ifdef REGISTER_MANUAL_PART_BatchGroupKey
    REGISTER_MANUAL_PART_BatchGroupKey(BatchGroupKey, "BatchGroupKey")
#endif

    // PODVector<Batch> BatchQueue::batches_ | File: ../Graphics/Batch.h
    // Error: type "PODVector<Batch>" can not automatically bind
    // HashMap<BatchGroupKey, BatchGroup> BatchQueue::batchGroups_ | File: ../Graphics/Batch.h
    // Error: type "HashMap<BatchGroupKey, BatchGroup>" can not automatically bind
    // HashMap<unsigned short, unsigned short> BatchQueue::geometryRemapping_ | File: ../Graphics/Batch.h
    // Error: type "HashMap<unsigned short, unsigned short>" can not automatically bind
    // bool BatchQueue::hasExtraDefines_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchQueue", "bool hasExtraDefines", offsetof(BatchQueue, hasExtraDefines_));
    // HashMap<unsigned short, unsigned short> BatchQueue::materialRemapping_ | File: ../Graphics/Batch.h
    // Error: type "HashMap<unsigned short, unsigned short>" can not automatically bind
    // unsigned BatchQueue::maxSortedInstances_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchQueue", "uint maxSortedInstances", offsetof(BatchQueue, maxSortedInstances_));
    // String BatchQueue::psExtraDefines_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchQueue", "String psExtraDefines", offsetof(BatchQueue, psExtraDefines_));
    // StringHash BatchQueue::psExtraDefinesHash_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchQueue", "StringHash psExtraDefinesHash", offsetof(BatchQueue, psExtraDefinesHash_));
    // HashMap<unsigned, unsigned> BatchQueue::shaderRemapping_ | File: ../Graphics/Batch.h
    // Error: type "HashMap<unsigned, unsigned>" can not automatically bind
    // PODVector<Batch*> BatchQueue::sortedBatches_ | File: ../Graphics/Batch.h
    // Error: type "PODVector<Batch*>" can not automatically bind
    // PODVector<BatchGroup*> BatchQueue::sortedBatchGroups_ | File: ../Graphics/Batch.h
    // Error: type "PODVector<BatchGroup*>" can not automatically bind
    // String BatchQueue::vsExtraDefines_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchQueue", "String vsExtraDefines", offsetof(BatchQueue, vsExtraDefines_));
    // StringHash BatchQueue::vsExtraDefinesHash_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("BatchQueue", "StringHash vsExtraDefinesHash", offsetof(BatchQueue, vsExtraDefinesHash_));
    // BatchQueue& BatchQueue::operator=(const BatchQueue&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<BatchQueue>(engine, "BatchQueue");
#ifdef REGISTER_MANUAL_PART_BatchQueue
    REGISTER_MANUAL_PART_BatchQueue(BatchQueue, "BatchQueue")
#endif

    // float BiasParameters::constantBias_ | File: ../Graphics/Light.h
    engine->RegisterObjectProperty("BiasParameters", "float constantBias", offsetof(BiasParameters, constantBias_));
    // float BiasParameters::normalOffset_ | File: ../Graphics/Light.h
    engine->RegisterObjectProperty("BiasParameters", "float normalOffset", offsetof(BiasParameters, normalOffset_));
    // float BiasParameters::slopeScaledBias_ | File: ../Graphics/Light.h
    engine->RegisterObjectProperty("BiasParameters", "float slopeScaledBias", offsetof(BiasParameters, slopeScaledBias_));
    // BiasParameters& BiasParameters::operator=(const BiasParameters&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<BiasParameters>(engine, "BiasParameters");
#ifdef REGISTER_MANUAL_PART_BiasParameters
    REGISTER_MANUAL_PART_BiasParameters(BiasParameters, "BiasParameters")
#endif

    // Color Billboard::color_ | File: ../Graphics/BillboardSet.h
    engine->RegisterObjectProperty("Billboard", "Color color", offsetof(Billboard, color_));
    // Vector3 Billboard::direction_ | File: ../Graphics/BillboardSet.h
    engine->RegisterObjectProperty("Billboard", "Vector3 direction", offsetof(Billboard, direction_));
    // bool Billboard::enabled_ | File: ../Graphics/BillboardSet.h
    engine->RegisterObjectProperty("Billboard", "bool enabled", offsetof(Billboard, enabled_));
    // Vector3 Billboard::position_ | File: ../Graphics/BillboardSet.h
    engine->RegisterObjectProperty("Billboard", "Vector3 position", offsetof(Billboard, position_));
    // float Billboard::rotation_ | File: ../Graphics/BillboardSet.h
    engine->RegisterObjectProperty("Billboard", "float rotation", offsetof(Billboard, rotation_));
    // float Billboard::screenScaleFactor_ | File: ../Graphics/BillboardSet.h
    engine->RegisterObjectProperty("Billboard", "float screenScaleFactor", offsetof(Billboard, screenScaleFactor_));
    // Vector2 Billboard::size_ | File: ../Graphics/BillboardSet.h
    engine->RegisterObjectProperty("Billboard", "Vector2 size", offsetof(Billboard, size_));
    // float Billboard::sortDistance_ | File: ../Graphics/BillboardSet.h
    engine->RegisterObjectProperty("Billboard", "float sortDistance", offsetof(Billboard, sortDistance_));
    // Rect Billboard::uv_ | File: ../Graphics/BillboardSet.h
    engine->RegisterObjectProperty("Billboard", "Rect uv", offsetof(Billboard, uv_));
    // Billboard& Billboard::operator=(const Billboard&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Billboard>(engine, "Billboard");
    engine->RegisterObjectBehaviour("Billboard", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("Billboard", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_Billboard
    REGISTER_MANUAL_PART_Billboard(Billboard, "Billboard")
#endif

    // bool Bone::animated_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "bool animated", offsetof(Bone, animated_));
    // BoundingBox Bone::boundingBox_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "BoundingBox boundingBox", offsetof(Bone, boundingBox_));
    // BoneCollisionShapeFlags Bone::collisionMask_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "BoneCollisionShapeFlags collisionMask", offsetof(Bone, collisionMask_));
    // Vector3 Bone::initialPosition_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "Vector3 initialPosition", offsetof(Bone, initialPosition_));
    // Quaternion Bone::initialRotation_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "Quaternion initialRotation", offsetof(Bone, initialRotation_));
    // Vector3 Bone::initialScale_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "Vector3 initialScale", offsetof(Bone, initialScale_));
    // String Bone::name_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "String name", offsetof(Bone, name_));
    // StringHash Bone::nameHash_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "StringHash nameHash", offsetof(Bone, nameHash_));
    // WeakPtr<Node> Bone::node_ | File: ../Graphics/Skeleton.h
    // Error: type "WeakPtr<Node>" can not automatically bind
    // Matrix3x4 Bone::offsetMatrix_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "Matrix3x4 offsetMatrix", offsetof(Bone, offsetMatrix_));
    // unsigned Bone::parentIndex_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "uint parentIndex", offsetof(Bone, parentIndex_));
    // float Bone::radius_ | File: ../Graphics/Skeleton.h
    engine->RegisterObjectProperty("Bone", "float radius", offsetof(Bone, radius_));
    // Bone& Bone::operator=(const Bone&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Bone>(engine, "Bone");
    engine->RegisterObjectBehaviour("Bone", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("Bone", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_Bone
    REGISTER_MANUAL_PART_Bone(Bone, "Bone")
#endif

}

}
