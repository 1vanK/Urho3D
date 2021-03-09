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

    // IntRect& IntRect::operator=(const IntRect&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<IntRect>(engine, "IntRect");
#ifdef REGISTER_MANUAL_PART_IntRect
    REGISTER_MANUAL_PART_IntRect(IntRect, "IntRect")
#endif

#ifdef REGISTER_MANUAL_PART_IntVector2
    REGISTER_MANUAL_PART_IntVector2(IntVector2, "IntVector2")
#endif

#ifdef REGISTER_MANUAL_PART_IntVector3
    REGISTER_MANUAL_PART_IntVector3(IntVector3, "IntVector3")
#endif

    // IndexBufferDesc& IndexBufferDesc::operator=(const IndexBufferDesc&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<IndexBufferDesc>(engine, "IndexBufferDesc");
#ifdef REGISTER_MANUAL_PART_IndexBufferDesc
    REGISTER_MANUAL_PART_IndexBufferDesc(IndexBufferDesc, "IndexBufferDesc")
#endif

    // InstanceData& InstanceData::operator=(const InstanceData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<InstanceData>(engine, "InstanceData");
#ifdef REGISTER_MANUAL_PART_InstanceData
    REGISTER_MANUAL_PART_InstanceData(InstanceData, "InstanceData")
#endif

}

}
