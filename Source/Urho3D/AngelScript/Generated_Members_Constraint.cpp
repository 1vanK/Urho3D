// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_Constraint(asIScriptEngine* engine)
{
#ifdef URHO3D_PHYSICS
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Constraint::RegisterObject(Context* context) | File: ../Physics/Constraint.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Constraint, "Constraint")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Constraint, "Constraint")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Constraint, "Constraint")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Constraint, "Constraint")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Constraint, "Constraint")
#endif
#ifdef REGISTER_MANUAL_PART_Constraint
    REGISTER_MANUAL_PART_Constraint(Constraint, "Constraint")
#endif
    RegisterSubclass<Component, Constraint>(engine, "Component", "Constraint");
    RegisterSubclass<Animatable, Constraint>(engine, "Animatable", "Constraint");
    RegisterSubclass<Serializable, Constraint>(engine, "Serializable", "Constraint");
    RegisterSubclass<Object, Constraint>(engine, "Object", "Constraint");
    RegisterSubclass<RefCounted, Constraint>(engine, "RefCounted", "Constraint");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Constraint2D::RegisterObject(Context* context) | File: ../Urho2D/Constraint2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Constraint2D, "Constraint2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Constraint2D, "Constraint2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Constraint2D, "Constraint2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Constraint2D, "Constraint2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Constraint2D, "Constraint2D")
#endif
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(Constraint2D, "Constraint2D")
#endif
    RegisterSubclass<Component, Constraint2D>(engine, "Component", "Constraint2D");
    RegisterSubclass<Animatable, Constraint2D>(engine, "Animatable", "Constraint2D");
    RegisterSubclass<Serializable, Constraint2D>(engine, "Serializable", "Constraint2D");
    RegisterSubclass<Object, Constraint2D>(engine, "Object", "Constraint2D");
    RegisterSubclass<RefCounted, Constraint2D>(engine, "RefCounted", "Constraint2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintDistance2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintDistance2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintDistance2D, "ConstraintDistance2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintDistance2D, "ConstraintDistance2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintDistance2D, "ConstraintDistance2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintDistance2D, "ConstraintDistance2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintDistance2D, "ConstraintDistance2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintDistance2D, "ConstraintDistance2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintDistance2D
    REGISTER_MANUAL_PART_ConstraintDistance2D(ConstraintDistance2D, "ConstraintDistance2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintDistance2D>(engine, "Constraint2D", "ConstraintDistance2D");
    RegisterSubclass<Component, ConstraintDistance2D>(engine, "Component", "ConstraintDistance2D");
    RegisterSubclass<Animatable, ConstraintDistance2D>(engine, "Animatable", "ConstraintDistance2D");
    RegisterSubclass<Serializable, ConstraintDistance2D>(engine, "Serializable", "ConstraintDistance2D");
    RegisterSubclass<Object, ConstraintDistance2D>(engine, "Object", "ConstraintDistance2D");
    RegisterSubclass<RefCounted, ConstraintDistance2D>(engine, "RefCounted", "ConstraintDistance2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintFriction2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintFriction2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintFriction2D, "ConstraintFriction2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintFriction2D, "ConstraintFriction2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintFriction2D, "ConstraintFriction2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintFriction2D, "ConstraintFriction2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintFriction2D, "ConstraintFriction2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintFriction2D, "ConstraintFriction2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintFriction2D
    REGISTER_MANUAL_PART_ConstraintFriction2D(ConstraintFriction2D, "ConstraintFriction2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintFriction2D>(engine, "Constraint2D", "ConstraintFriction2D");
    RegisterSubclass<Component, ConstraintFriction2D>(engine, "Component", "ConstraintFriction2D");
    RegisterSubclass<Animatable, ConstraintFriction2D>(engine, "Animatable", "ConstraintFriction2D");
    RegisterSubclass<Serializable, ConstraintFriction2D>(engine, "Serializable", "ConstraintFriction2D");
    RegisterSubclass<Object, ConstraintFriction2D>(engine, "Object", "ConstraintFriction2D");
    RegisterSubclass<RefCounted, ConstraintFriction2D>(engine, "RefCounted", "ConstraintFriction2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintGear2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintGear2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintGear2D, "ConstraintGear2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintGear2D, "ConstraintGear2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintGear2D, "ConstraintGear2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintGear2D, "ConstraintGear2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintGear2D, "ConstraintGear2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintGear2D, "ConstraintGear2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintGear2D
    REGISTER_MANUAL_PART_ConstraintGear2D(ConstraintGear2D, "ConstraintGear2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintGear2D>(engine, "Constraint2D", "ConstraintGear2D");
    RegisterSubclass<Component, ConstraintGear2D>(engine, "Component", "ConstraintGear2D");
    RegisterSubclass<Animatable, ConstraintGear2D>(engine, "Animatable", "ConstraintGear2D");
    RegisterSubclass<Serializable, ConstraintGear2D>(engine, "Serializable", "ConstraintGear2D");
    RegisterSubclass<Object, ConstraintGear2D>(engine, "Object", "ConstraintGear2D");
    RegisterSubclass<RefCounted, ConstraintGear2D>(engine, "RefCounted", "ConstraintGear2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintMotor2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintMotor2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintMotor2D, "ConstraintMotor2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintMotor2D, "ConstraintMotor2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintMotor2D, "ConstraintMotor2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintMotor2D, "ConstraintMotor2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintMotor2D, "ConstraintMotor2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintMotor2D, "ConstraintMotor2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintMotor2D
    REGISTER_MANUAL_PART_ConstraintMotor2D(ConstraintMotor2D, "ConstraintMotor2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintMotor2D>(engine, "Constraint2D", "ConstraintMotor2D");
    RegisterSubclass<Component, ConstraintMotor2D>(engine, "Component", "ConstraintMotor2D");
    RegisterSubclass<Animatable, ConstraintMotor2D>(engine, "Animatable", "ConstraintMotor2D");
    RegisterSubclass<Serializable, ConstraintMotor2D>(engine, "Serializable", "ConstraintMotor2D");
    RegisterSubclass<Object, ConstraintMotor2D>(engine, "Object", "ConstraintMotor2D");
    RegisterSubclass<RefCounted, ConstraintMotor2D>(engine, "RefCounted", "ConstraintMotor2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintMouse2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintMouse2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintMouse2D, "ConstraintMouse2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintMouse2D, "ConstraintMouse2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintMouse2D, "ConstraintMouse2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintMouse2D, "ConstraintMouse2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintMouse2D, "ConstraintMouse2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintMouse2D, "ConstraintMouse2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintMouse2D
    REGISTER_MANUAL_PART_ConstraintMouse2D(ConstraintMouse2D, "ConstraintMouse2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintMouse2D>(engine, "Constraint2D", "ConstraintMouse2D");
    RegisterSubclass<Component, ConstraintMouse2D>(engine, "Component", "ConstraintMouse2D");
    RegisterSubclass<Animatable, ConstraintMouse2D>(engine, "Animatable", "ConstraintMouse2D");
    RegisterSubclass<Serializable, ConstraintMouse2D>(engine, "Serializable", "ConstraintMouse2D");
    RegisterSubclass<Object, ConstraintMouse2D>(engine, "Object", "ConstraintMouse2D");
    RegisterSubclass<RefCounted, ConstraintMouse2D>(engine, "RefCounted", "ConstraintMouse2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintPrismatic2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintPrismatic2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintPrismatic2D, "ConstraintPrismatic2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintPrismatic2D, "ConstraintPrismatic2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintPrismatic2D, "ConstraintPrismatic2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintPrismatic2D, "ConstraintPrismatic2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintPrismatic2D, "ConstraintPrismatic2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintPrismatic2D, "ConstraintPrismatic2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintPrismatic2D
    REGISTER_MANUAL_PART_ConstraintPrismatic2D(ConstraintPrismatic2D, "ConstraintPrismatic2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintPrismatic2D>(engine, "Constraint2D", "ConstraintPrismatic2D");
    RegisterSubclass<Component, ConstraintPrismatic2D>(engine, "Component", "ConstraintPrismatic2D");
    RegisterSubclass<Animatable, ConstraintPrismatic2D>(engine, "Animatable", "ConstraintPrismatic2D");
    RegisterSubclass<Serializable, ConstraintPrismatic2D>(engine, "Serializable", "ConstraintPrismatic2D");
    RegisterSubclass<Object, ConstraintPrismatic2D>(engine, "Object", "ConstraintPrismatic2D");
    RegisterSubclass<RefCounted, ConstraintPrismatic2D>(engine, "RefCounted", "ConstraintPrismatic2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintPulley2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintPulley2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintPulley2D, "ConstraintPulley2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintPulley2D, "ConstraintPulley2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintPulley2D, "ConstraintPulley2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintPulley2D, "ConstraintPulley2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintPulley2D, "ConstraintPulley2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintPulley2D, "ConstraintPulley2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintPulley2D
    REGISTER_MANUAL_PART_ConstraintPulley2D(ConstraintPulley2D, "ConstraintPulley2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintPulley2D>(engine, "Constraint2D", "ConstraintPulley2D");
    RegisterSubclass<Component, ConstraintPulley2D>(engine, "Component", "ConstraintPulley2D");
    RegisterSubclass<Animatable, ConstraintPulley2D>(engine, "Animatable", "ConstraintPulley2D");
    RegisterSubclass<Serializable, ConstraintPulley2D>(engine, "Serializable", "ConstraintPulley2D");
    RegisterSubclass<Object, ConstraintPulley2D>(engine, "Object", "ConstraintPulley2D");
    RegisterSubclass<RefCounted, ConstraintPulley2D>(engine, "RefCounted", "ConstraintPulley2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintRevolute2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintRevolute2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintRevolute2D, "ConstraintRevolute2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintRevolute2D, "ConstraintRevolute2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintRevolute2D, "ConstraintRevolute2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintRevolute2D, "ConstraintRevolute2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintRevolute2D, "ConstraintRevolute2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintRevolute2D, "ConstraintRevolute2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintRevolute2D
    REGISTER_MANUAL_PART_ConstraintRevolute2D(ConstraintRevolute2D, "ConstraintRevolute2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintRevolute2D>(engine, "Constraint2D", "ConstraintRevolute2D");
    RegisterSubclass<Component, ConstraintRevolute2D>(engine, "Component", "ConstraintRevolute2D");
    RegisterSubclass<Animatable, ConstraintRevolute2D>(engine, "Animatable", "ConstraintRevolute2D");
    RegisterSubclass<Serializable, ConstraintRevolute2D>(engine, "Serializable", "ConstraintRevolute2D");
    RegisterSubclass<Object, ConstraintRevolute2D>(engine, "Object", "ConstraintRevolute2D");
    RegisterSubclass<RefCounted, ConstraintRevolute2D>(engine, "RefCounted", "ConstraintRevolute2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintRope2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintRope2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintRope2D, "ConstraintRope2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintRope2D, "ConstraintRope2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintRope2D, "ConstraintRope2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintRope2D, "ConstraintRope2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintRope2D, "ConstraintRope2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintRope2D, "ConstraintRope2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintRope2D
    REGISTER_MANUAL_PART_ConstraintRope2D(ConstraintRope2D, "ConstraintRope2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintRope2D>(engine, "Constraint2D", "ConstraintRope2D");
    RegisterSubclass<Component, ConstraintRope2D>(engine, "Component", "ConstraintRope2D");
    RegisterSubclass<Animatable, ConstraintRope2D>(engine, "Animatable", "ConstraintRope2D");
    RegisterSubclass<Serializable, ConstraintRope2D>(engine, "Serializable", "ConstraintRope2D");
    RegisterSubclass<Object, ConstraintRope2D>(engine, "Object", "ConstraintRope2D");
    RegisterSubclass<RefCounted, ConstraintRope2D>(engine, "RefCounted", "ConstraintRope2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintWeld2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintWeld2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintWeld2D, "ConstraintWeld2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintWeld2D, "ConstraintWeld2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintWeld2D, "ConstraintWeld2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintWeld2D, "ConstraintWeld2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintWeld2D, "ConstraintWeld2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintWeld2D, "ConstraintWeld2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintWeld2D
    REGISTER_MANUAL_PART_ConstraintWeld2D(ConstraintWeld2D, "ConstraintWeld2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintWeld2D>(engine, "Constraint2D", "ConstraintWeld2D");
    RegisterSubclass<Component, ConstraintWeld2D>(engine, "Component", "ConstraintWeld2D");
    RegisterSubclass<Animatable, ConstraintWeld2D>(engine, "Animatable", "ConstraintWeld2D");
    RegisterSubclass<Serializable, ConstraintWeld2D>(engine, "Serializable", "ConstraintWeld2D");
    RegisterSubclass<Object, ConstraintWeld2D>(engine, "Object", "ConstraintWeld2D");
    RegisterSubclass<RefCounted, ConstraintWeld2D>(engine, "RefCounted", "ConstraintWeld2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ConstraintWheel2D::RegisterObject(Context* context) | File: ../Urho2D/ConstraintWheel2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Constraint2D
    REGISTER_MANUAL_PART_Constraint2D(ConstraintWheel2D, "ConstraintWheel2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ConstraintWheel2D, "ConstraintWheel2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ConstraintWheel2D, "ConstraintWheel2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ConstraintWheel2D, "ConstraintWheel2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ConstraintWheel2D, "ConstraintWheel2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ConstraintWheel2D, "ConstraintWheel2D")
#endif
#ifdef REGISTER_MANUAL_PART_ConstraintWheel2D
    REGISTER_MANUAL_PART_ConstraintWheel2D(ConstraintWheel2D, "ConstraintWheel2D")
#endif
    RegisterSubclass<Constraint2D, ConstraintWheel2D>(engine, "Constraint2D", "ConstraintWheel2D");
    RegisterSubclass<Component, ConstraintWheel2D>(engine, "Component", "ConstraintWheel2D");
    RegisterSubclass<Animatable, ConstraintWheel2D>(engine, "Animatable", "ConstraintWheel2D");
    RegisterSubclass<Serializable, ConstraintWheel2D>(engine, "Serializable", "ConstraintWheel2D");
    RegisterSubclass<Object, ConstraintWheel2D>(engine, "Object", "ConstraintWheel2D");
    RegisterSubclass<RefCounted, ConstraintWheel2D>(engine, "RefCounted", "ConstraintWheel2D");
#endif

}

}
