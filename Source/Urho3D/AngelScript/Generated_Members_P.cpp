// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_P(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(PackageFile, "PackageFile")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(PackageFile, "PackageFile")
#endif
#ifdef REGISTER_MANUAL_PART_PackageFile
    REGISTER_MANUAL_PART_PackageFile(PackageFile, "PackageFile")
#endif
    RegisterSubclass<Object, PackageFile>(engine, "Object", "PackageFile");
    RegisterSubclass<RefCounted, PackageFile>(engine, "RefCounted", "PackageFile");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ParticleEffect::RegisterObject(Context* context) | File: ../Graphics/ParticleEffect.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(ParticleEffect, "ParticleEffect")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ParticleEffect, "ParticleEffect")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ParticleEffect, "ParticleEffect")
#endif
#ifdef REGISTER_MANUAL_PART_ParticleEffect
    REGISTER_MANUAL_PART_ParticleEffect(ParticleEffect, "ParticleEffect")
#endif
    RegisterSubclass<Resource, ParticleEffect>(engine, "Resource", "ParticleEffect");
    RegisterSubclass<Object, ParticleEffect>(engine, "Object", "ParticleEffect");
    RegisterSubclass<RefCounted, ParticleEffect>(engine, "RefCounted", "ParticleEffect");

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ParticleEffect2D::RegisterObject(Context* context) | File: ../Urho2D/ParticleEffect2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(ParticleEffect2D, "ParticleEffect2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ParticleEffect2D, "ParticleEffect2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ParticleEffect2D, "ParticleEffect2D")
#endif
#ifdef REGISTER_MANUAL_PART_ParticleEffect2D
    REGISTER_MANUAL_PART_ParticleEffect2D(ParticleEffect2D, "ParticleEffect2D")
#endif
    RegisterSubclass<Resource, ParticleEffect2D>(engine, "Resource", "ParticleEffect2D");
    RegisterSubclass<Object, ParticleEffect2D>(engine, "Object", "ParticleEffect2D");
    RegisterSubclass<RefCounted, ParticleEffect2D>(engine, "RefCounted", "ParticleEffect2D");
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ParticleEmitter::RegisterObject(Context* context) | File: ../Graphics/ParticleEmitter.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_BillboardSet
    REGISTER_MANUAL_PART_BillboardSet(ParticleEmitter, "ParticleEmitter")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(ParticleEmitter, "ParticleEmitter")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ParticleEmitter, "ParticleEmitter")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ParticleEmitter, "ParticleEmitter")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ParticleEmitter, "ParticleEmitter")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ParticleEmitter, "ParticleEmitter")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ParticleEmitter, "ParticleEmitter")
#endif
#ifdef REGISTER_MANUAL_PART_ParticleEmitter
    REGISTER_MANUAL_PART_ParticleEmitter(ParticleEmitter, "ParticleEmitter")
#endif
    RegisterSubclass<BillboardSet, ParticleEmitter>(engine, "BillboardSet", "ParticleEmitter");
    RegisterSubclass<Drawable, ParticleEmitter>(engine, "Drawable", "ParticleEmitter");
    RegisterSubclass<Component, ParticleEmitter>(engine, "Component", "ParticleEmitter");
    RegisterSubclass<Animatable, ParticleEmitter>(engine, "Animatable", "ParticleEmitter");
    RegisterSubclass<Serializable, ParticleEmitter>(engine, "Serializable", "ParticleEmitter");
    RegisterSubclass<Object, ParticleEmitter>(engine, "Object", "ParticleEmitter");
    RegisterSubclass<RefCounted, ParticleEmitter>(engine, "RefCounted", "ParticleEmitter");

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ParticleEmitter2D::RegisterObject(Context* context) | File: ../Urho2D/ParticleEmitter2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable2D
    REGISTER_MANUAL_PART_Drawable2D(ParticleEmitter2D, "ParticleEmitter2D")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(ParticleEmitter2D, "ParticleEmitter2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(ParticleEmitter2D, "ParticleEmitter2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ParticleEmitter2D, "ParticleEmitter2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ParticleEmitter2D, "ParticleEmitter2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ParticleEmitter2D, "ParticleEmitter2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ParticleEmitter2D, "ParticleEmitter2D")
#endif
#ifdef REGISTER_MANUAL_PART_ParticleEmitter2D
    REGISTER_MANUAL_PART_ParticleEmitter2D(ParticleEmitter2D, "ParticleEmitter2D")
#endif
    RegisterSubclass<Drawable2D, ParticleEmitter2D>(engine, "Drawable2D", "ParticleEmitter2D");
    RegisterSubclass<Drawable, ParticleEmitter2D>(engine, "Drawable", "ParticleEmitter2D");
    RegisterSubclass<Component, ParticleEmitter2D>(engine, "Component", "ParticleEmitter2D");
    RegisterSubclass<Animatable, ParticleEmitter2D>(engine, "Animatable", "ParticleEmitter2D");
    RegisterSubclass<Serializable, ParticleEmitter2D>(engine, "Serializable", "ParticleEmitter2D");
    RegisterSubclass<Object, ParticleEmitter2D>(engine, "Object", "ParticleEmitter2D");
    RegisterSubclass<RefCounted, ParticleEmitter2D>(engine, "RefCounted", "ParticleEmitter2D");
#endif

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Pass, "Pass")
#endif
#ifdef REGISTER_MANUAL_PART_Pass
    REGISTER_MANUAL_PART_Pass(Pass, "Pass")
#endif
    RegisterSubclass<RefCounted, Pass>(engine, "RefCounted", "Pass");

#ifdef URHO3D_PHYSICS
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void PhysicsWorld::RegisterObject(Context* context) | File: ../Physics/PhysicsWorld.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(PhysicsWorld, "PhysicsWorld")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(PhysicsWorld, "PhysicsWorld")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(PhysicsWorld, "PhysicsWorld")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(PhysicsWorld, "PhysicsWorld")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(PhysicsWorld, "PhysicsWorld")
#endif
#ifdef REGISTER_MANUAL_PART_PhysicsWorld
    REGISTER_MANUAL_PART_PhysicsWorld(PhysicsWorld, "PhysicsWorld")
#endif
    RegisterSubclass<Component, PhysicsWorld>(engine, "Component", "PhysicsWorld");
    RegisterSubclass<Animatable, PhysicsWorld>(engine, "Animatable", "PhysicsWorld");
    RegisterSubclass<Serializable, PhysicsWorld>(engine, "Serializable", "PhysicsWorld");
    RegisterSubclass<Object, PhysicsWorld>(engine, "Object", "PhysicsWorld");
    RegisterSubclass<RefCounted, PhysicsWorld>(engine, "RefCounted", "PhysicsWorld");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void PhysicsWorld2D::RegisterObject(Context* context) | File: ../Urho2D/PhysicsWorld2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(PhysicsWorld2D, "PhysicsWorld2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(PhysicsWorld2D, "PhysicsWorld2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(PhysicsWorld2D, "PhysicsWorld2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(PhysicsWorld2D, "PhysicsWorld2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(PhysicsWorld2D, "PhysicsWorld2D")
#endif
#ifdef REGISTER_MANUAL_PART_PhysicsWorld2D
    REGISTER_MANUAL_PART_PhysicsWorld2D(PhysicsWorld2D, "PhysicsWorld2D")
#endif
    RegisterSubclass<Component, PhysicsWorld2D>(engine, "Component", "PhysicsWorld2D");
    RegisterSubclass<Animatable, PhysicsWorld2D>(engine, "Animatable", "PhysicsWorld2D");
    RegisterSubclass<Serializable, PhysicsWorld2D>(engine, "Serializable", "PhysicsWorld2D");
    RegisterSubclass<Object, PhysicsWorld2D>(engine, "Object", "PhysicsWorld2D");
    RegisterSubclass<RefCounted, PhysicsWorld2D>(engine, "RefCounted", "PhysicsWorld2D");
#endif

#ifdef REGISTER_MANUAL_PART_Plane
    REGISTER_MANUAL_PART_Plane(Plane, "Plane")
#endif

#ifdef REGISTER_MANUAL_PART_Polyhedron
    REGISTER_MANUAL_PART_Polyhedron(Polyhedron, "Polyhedron")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Profiler, "Profiler")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Profiler, "Profiler")
#endif
#ifdef REGISTER_MANUAL_PART_Profiler
    REGISTER_MANUAL_PART_Profiler(Profiler, "Profiler")
#endif
    RegisterSubclass<Object, Profiler>(engine, "Object", "Profiler");
    RegisterSubclass<RefCounted, Profiler>(engine, "RefCounted", "Profiler");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ProgressBar::RegisterObject(Context* context) | File: ../UI/ProgressBar.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_BorderImage
    REGISTER_MANUAL_PART_BorderImage(ProgressBar, "ProgressBar")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(ProgressBar, "ProgressBar")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ProgressBar, "ProgressBar")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ProgressBar, "ProgressBar")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ProgressBar, "ProgressBar")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ProgressBar, "ProgressBar")
#endif
#ifdef REGISTER_MANUAL_PART_ProgressBar
    REGISTER_MANUAL_PART_ProgressBar(ProgressBar, "ProgressBar")
#endif
    RegisterSubclass<BorderImage, ProgressBar>(engine, "BorderImage", "ProgressBar");
    RegisterSubclass<UIElement, ProgressBar>(engine, "UIElement", "ProgressBar");
    RegisterSubclass<Animatable, ProgressBar>(engine, "Animatable", "ProgressBar");
    RegisterSubclass<Serializable, ProgressBar>(engine, "Serializable", "ProgressBar");
    RegisterSubclass<Object, ProgressBar>(engine, "Object", "ProgressBar");
    RegisterSubclass<RefCounted, ProgressBar>(engine, "RefCounted", "ProgressBar");

#ifdef URHO3D_URHO2D
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(PropertySet2D, "PropertySet2D")
#endif
#ifdef REGISTER_MANUAL_PART_PropertySet2D
    REGISTER_MANUAL_PART_PropertySet2D(PropertySet2D, "PropertySet2D")
#endif
    RegisterSubclass<RefCounted, PropertySet2D>(engine, "RefCounted", "PropertySet2D");
#endif

#ifdef URHO3D_NETWORK
    // PackageDownload& PackageDownload::operator=(const PackageDownload&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PackageDownload>(engine, "PackageDownload");
#ifdef REGISTER_MANUAL_PART_PackageDownload
    REGISTER_MANUAL_PART_PackageDownload(PackageDownload, "PackageDownload")
#endif
#endif

    // PackageEntry& PackageEntry::operator=(const PackageEntry&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PackageEntry>(engine, "PackageEntry");
#ifdef REGISTER_MANUAL_PART_PackageEntry
    REGISTER_MANUAL_PART_PackageEntry(PackageEntry, "PackageEntry")
#endif

#ifdef URHO3D_NETWORK
    // PackageUpload& PackageUpload::operator=(const PackageUpload&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PackageUpload>(engine, "PackageUpload");
#ifdef REGISTER_MANUAL_PART_PackageUpload
    REGISTER_MANUAL_PART_PackageUpload(PackageUpload, "PackageUpload")
#endif
#endif

    // Particle& Particle::operator=(const Particle&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Particle>(engine, "Particle");
#ifdef REGISTER_MANUAL_PART_Particle
    REGISTER_MANUAL_PART_Particle(Particle, "Particle")
#endif

#ifdef URHO3D_URHO2D
    // Particle2D& Particle2D::operator=(const Particle2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Particle2D>(engine, "Particle2D");
#ifdef REGISTER_MANUAL_PART_Particle2D
    REGISTER_MANUAL_PART_Particle2D(Particle2D, "Particle2D")
#endif
#endif

    // PerThreadSceneResult& PerThreadSceneResult::operator=(const PerThreadSceneResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PerThreadSceneResult>(engine, "PerThreadSceneResult");
#ifdef REGISTER_MANUAL_PART_PerThreadSceneResult
    REGISTER_MANUAL_PART_PerThreadSceneResult(PerThreadSceneResult, "PerThreadSceneResult")
#endif

#ifdef URHO3D_PHYSICS
    // PhysicsRaycastResult& PhysicsRaycastResult::operator=(const PhysicsRaycastResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PhysicsRaycastResult>(engine, "PhysicsRaycastResult");
#ifdef REGISTER_MANUAL_PART_PhysicsRaycastResult
    REGISTER_MANUAL_PART_PhysicsRaycastResult(PhysicsRaycastResult, "PhysicsRaycastResult")
#endif
#endif

#ifdef URHO3D_URHO2D
    // PhysicsRaycastResult2D& PhysicsRaycastResult2D::operator=(const PhysicsRaycastResult2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PhysicsRaycastResult2D>(engine, "PhysicsRaycastResult2D");
#ifdef REGISTER_MANUAL_PART_PhysicsRaycastResult2D
    REGISTER_MANUAL_PART_PhysicsRaycastResult2D(PhysicsRaycastResult2D, "PhysicsRaycastResult2D")
#endif
#endif

#ifdef URHO3D_PHYSICS
    // PhysicsWorldConfig& PhysicsWorldConfig::operator=(const PhysicsWorldConfig&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PhysicsWorldConfig>(engine, "PhysicsWorldConfig");
#ifdef REGISTER_MANUAL_PART_PhysicsWorldConfig
    REGISTER_MANUAL_PART_PhysicsWorldConfig(PhysicsWorldConfig, "PhysicsWorldConfig")
#endif
#endif

}

}
