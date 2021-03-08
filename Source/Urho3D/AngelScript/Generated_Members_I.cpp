// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_I(asIScriptEngine* engine)
{
#ifdef URHO3D_IK
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void IKConstraint::RegisterObject(Context* context) | File: ../IK/IKConstraint.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(IKConstraint, "IKConstraint")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(IKConstraint, "IKConstraint")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(IKConstraint, "IKConstraint")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(IKConstraint, "IKConstraint")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(IKConstraint, "IKConstraint")
#endif
#ifdef REGISTER_MANUAL_PART_IKConstraint
    REGISTER_MANUAL_PART_IKConstraint(IKConstraint, "IKConstraint")
#endif
    RegisterSubclass<Component, IKConstraint>(engine, "Component", "IKConstraint");
    RegisterSubclass<Animatable, IKConstraint>(engine, "Animatable", "IKConstraint");
    RegisterSubclass<Serializable, IKConstraint>(engine, "Serializable", "IKConstraint");
    RegisterSubclass<Object, IKConstraint>(engine, "Object", "IKConstraint");
    RegisterSubclass<RefCounted, IKConstraint>(engine, "RefCounted", "IKConstraint");
#endif

#ifdef URHO3D_IK
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void IKEffector::RegisterObject(Context* context) | File: ../IK/IKEffector.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(IKEffector, "IKEffector")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(IKEffector, "IKEffector")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(IKEffector, "IKEffector")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(IKEffector, "IKEffector")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(IKEffector, "IKEffector")
#endif
#ifdef REGISTER_MANUAL_PART_IKEffector
    REGISTER_MANUAL_PART_IKEffector(IKEffector, "IKEffector")
#endif
    RegisterSubclass<Component, IKEffector>(engine, "Component", "IKEffector");
    RegisterSubclass<Animatable, IKEffector>(engine, "Animatable", "IKEffector");
    RegisterSubclass<Serializable, IKEffector>(engine, "Serializable", "IKEffector");
    RegisterSubclass<Object, IKEffector>(engine, "Object", "IKEffector");
    RegisterSubclass<RefCounted, IKEffector>(engine, "RefCounted", "IKEffector");
#endif

#ifdef URHO3D_IK
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void IKSolver::RegisterObject(Context* context) | File: ../IK/IKSolver.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(IKSolver, "IKSolver")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(IKSolver, "IKSolver")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(IKSolver, "IKSolver")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(IKSolver, "IKSolver")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(IKSolver, "IKSolver")
#endif
#ifdef REGISTER_MANUAL_PART_IKSolver
    REGISTER_MANUAL_PART_IKSolver(IKSolver, "IKSolver")
#endif
    RegisterSubclass<Component, IKSolver>(engine, "Component", "IKSolver");
    RegisterSubclass<Animatable, IKSolver>(engine, "Animatable", "IKSolver");
    RegisterSubclass<Serializable, IKSolver>(engine, "Serializable", "IKSolver");
    RegisterSubclass<Object, IKSolver>(engine, "Object", "IKSolver");
    RegisterSubclass<RefCounted, IKSolver>(engine, "RefCounted", "IKSolver");
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Image::RegisterObject(Context* context) | File: ../Resource/Image.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Image, "Image")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Image, "Image")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Image, "Image")
#endif
#ifdef REGISTER_MANUAL_PART_Image
    REGISTER_MANUAL_PART_Image(Image, "Image")
#endif
    RegisterSubclass<Resource, Image>(engine, "Resource", "Image");
    RegisterSubclass<Object, Image>(engine, "Object", "Image");
    RegisterSubclass<RefCounted, Image>(engine, "RefCounted", "Image");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(IndexBuffer, "IndexBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(IndexBuffer, "IndexBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_GPUObject
    REGISTER_MANUAL_PART_GPUObject(IndexBuffer, "IndexBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_IndexBuffer
    REGISTER_MANUAL_PART_IndexBuffer(IndexBuffer, "IndexBuffer")
#endif
    RegisterSubclass<Object, IndexBuffer>(engine, "Object", "IndexBuffer");
    RegisterSubclass<RefCounted, IndexBuffer>(engine, "RefCounted", "IndexBuffer");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Input, "Input")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Input, "Input")
#endif
#ifdef REGISTER_MANUAL_PART_Input
    REGISTER_MANUAL_PART_Input(Input, "Input")
#endif
    RegisterSubclass<Object, Input>(engine, "Object", "Input");
    RegisterSubclass<RefCounted, Input>(engine, "RefCounted", "Input");

    // int IntRect::bottom_ | File: ../Math/Rect.h
    engine->RegisterObjectProperty("IntRect", "int bottom", offsetof(IntRect, bottom_));
    // int IntRect::left_ | File: ../Math/Rect.h
    engine->RegisterObjectProperty("IntRect", "int left", offsetof(IntRect, left_));
    // int IntRect::right_ | File: ../Math/Rect.h
    engine->RegisterObjectProperty("IntRect", "int right", offsetof(IntRect, right_));
    // int IntRect::top_ | File: ../Math/Rect.h
    engine->RegisterObjectProperty("IntRect", "int top", offsetof(IntRect, top_));
    // const IntRect IntRect::ZERO | File: ../Math/Rect.h
    engine->SetDefaultNamespace("IntRect");
    engine->RegisterGlobalProperty("const IntRect ZERO", (void*)&IntRect::ZERO);
    engine->SetDefaultNamespace("");
    // IntRect& IntRect::operator=(const IntRect&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<IntRect>(engine, "IntRect");
#ifdef REGISTER_MANUAL_PART_IntRect
    REGISTER_MANUAL_PART_IntRect(IntRect, "IntRect")
#endif

    // const IntVector2 IntVector2::DOWN | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("IntVector2");
    engine->RegisterGlobalProperty("const IntVector2 DOWN", (void*)&IntVector2::DOWN);
    engine->SetDefaultNamespace("");
    // const IntVector2 IntVector2::LEFT | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("IntVector2");
    engine->RegisterGlobalProperty("const IntVector2 LEFT", (void*)&IntVector2::LEFT);
    engine->SetDefaultNamespace("");
    // const IntVector2 IntVector2::ONE | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("IntVector2");
    engine->RegisterGlobalProperty("const IntVector2 ONE", (void*)&IntVector2::ONE);
    engine->SetDefaultNamespace("");
    // const IntVector2 IntVector2::RIGHT | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("IntVector2");
    engine->RegisterGlobalProperty("const IntVector2 RIGHT", (void*)&IntVector2::RIGHT);
    engine->SetDefaultNamespace("");
    // const IntVector2 IntVector2::UP | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("IntVector2");
    engine->RegisterGlobalProperty("const IntVector2 UP", (void*)&IntVector2::UP);
    engine->SetDefaultNamespace("");
    // int IntVector2::x_ | File: ../Math/Vector2.h
    engine->RegisterObjectProperty("IntVector2", "int x", offsetof(IntVector2, x_));
    // int IntVector2::y_ | File: ../Math/Vector2.h
    engine->RegisterObjectProperty("IntVector2", "int y", offsetof(IntVector2, y_));
    // const IntVector2 IntVector2::ZERO | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("IntVector2");
    engine->RegisterGlobalProperty("const IntVector2 ZERO", (void*)&IntVector2::ZERO);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_IntVector2
    REGISTER_MANUAL_PART_IntVector2(IntVector2, "IntVector2")
#endif

    // const IntVector3 IntVector3::BACK | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("IntVector3");
    engine->RegisterGlobalProperty("const IntVector3 BACK", (void*)&IntVector3::BACK);
    engine->SetDefaultNamespace("");
    // const IntVector3 IntVector3::DOWN | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("IntVector3");
    engine->RegisterGlobalProperty("const IntVector3 DOWN", (void*)&IntVector3::DOWN);
    engine->SetDefaultNamespace("");
    // const IntVector3 IntVector3::FORWARD | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("IntVector3");
    engine->RegisterGlobalProperty("const IntVector3 FORWARD", (void*)&IntVector3::FORWARD);
    engine->SetDefaultNamespace("");
    // const IntVector3 IntVector3::LEFT | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("IntVector3");
    engine->RegisterGlobalProperty("const IntVector3 LEFT", (void*)&IntVector3::LEFT);
    engine->SetDefaultNamespace("");
    // const IntVector3 IntVector3::ONE | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("IntVector3");
    engine->RegisterGlobalProperty("const IntVector3 ONE", (void*)&IntVector3::ONE);
    engine->SetDefaultNamespace("");
    // const IntVector3 IntVector3::RIGHT | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("IntVector3");
    engine->RegisterGlobalProperty("const IntVector3 RIGHT", (void*)&IntVector3::RIGHT);
    engine->SetDefaultNamespace("");
    // const IntVector3 IntVector3::UP | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("IntVector3");
    engine->RegisterGlobalProperty("const IntVector3 UP", (void*)&IntVector3::UP);
    engine->SetDefaultNamespace("");
    // int IntVector3::x_ | File: ../Math/Vector3.h
    engine->RegisterObjectProperty("IntVector3", "int x", offsetof(IntVector3, x_));
    // int IntVector3::y_ | File: ../Math/Vector3.h
    engine->RegisterObjectProperty("IntVector3", "int y", offsetof(IntVector3, y_));
    // int IntVector3::z_ | File: ../Math/Vector3.h
    engine->RegisterObjectProperty("IntVector3", "int z", offsetof(IntVector3, z_));
    // const IntVector3 IntVector3::ZERO | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("IntVector3");
    engine->RegisterGlobalProperty("const IntVector3 ZERO", (void*)&IntVector3::ZERO);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_IntVector3
    REGISTER_MANUAL_PART_IntVector3(IntVector3, "IntVector3")
#endif

    // SharedArrayPtr<unsigned char> IndexBufferDesc::data_ | File: ../Graphics/Model.h
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind
    // unsigned IndexBufferDesc::dataSize_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("IndexBufferDesc", "uint dataSize", offsetof(IndexBufferDesc, dataSize_));
    // unsigned IndexBufferDesc::indexCount_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("IndexBufferDesc", "uint indexCount", offsetof(IndexBufferDesc, indexCount_));
    // unsigned IndexBufferDesc::indexSize_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("IndexBufferDesc", "uint indexSize", offsetof(IndexBufferDesc, indexSize_));
    // IndexBufferDesc& IndexBufferDesc::operator=(const IndexBufferDesc&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<IndexBufferDesc>(engine, "IndexBufferDesc");
#ifdef REGISTER_MANUAL_PART_IndexBufferDesc
    REGISTER_MANUAL_PART_IndexBufferDesc(IndexBufferDesc, "IndexBufferDesc")
#endif

    // float InstanceData::distance_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("InstanceData", "float distance", offsetof(InstanceData, distance_));
    // const void* InstanceData::instancingData_ | File: ../Graphics/Batch.h
    // const void* can not be registered
    // const Matrix3x4* InstanceData::worldTransform_ | File: ../Graphics/Batch.h
    // const Matrix3x4* can not be registered
    // InstanceData& InstanceData::operator=(const InstanceData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<InstanceData>(engine, "InstanceData");
#ifdef REGISTER_MANUAL_PART_InstanceData
    REGISTER_MANUAL_PART_InstanceData(InstanceData, "InstanceData")
#endif

}

}
