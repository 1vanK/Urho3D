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
    // struct PhysicsWorldConfig PhysicsWorld::config | File: ../Physics/PhysicsWorld.h
    // Error: type "struct PhysicsWorldConfig" can not automatically bind
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

    // Vector3 Plane::absNormal_ | File: ../Math/Plane.h
    engine->RegisterObjectProperty("Plane", "Vector3 absNormal", offsetof(Plane, absNormal_));
    // float Plane::d_ | File: ../Math/Plane.h
    engine->RegisterObjectProperty("Plane", "float d", offsetof(Plane, d_));
    // Vector3 Plane::normal_ | File: ../Math/Plane.h
    engine->RegisterObjectProperty("Plane", "Vector3 normal", offsetof(Plane, normal_));
    // const Plane Plane::UP | File: ../Math/Plane.h
    engine->SetDefaultNamespace("Plane");
    engine->RegisterGlobalProperty("const Plane UP", (void*)&Plane::UP);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Plane
    REGISTER_MANUAL_PART_Plane(Plane, "Plane")
#endif

    // Vector<PODVector<Vector3>> Polyhedron::faces_ | File: ../Math/Polyhedron.h
    // Error: type "Vector<PODVector<Vector3>>" can not automatically bind
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
    // unsigned PackageDownload::checksum_ | File: ../Network/Connection.h
    engine->RegisterObjectProperty("PackageDownload", "uint checksum", offsetof(PackageDownload, checksum_));
    // SharedPtr<File> PackageDownload::file_ | File: ../Network/Connection.h
    // Error: type "SharedPtr<File>" can not automatically bind
    // bool PackageDownload::initiated_ | File: ../Network/Connection.h
    engine->RegisterObjectProperty("PackageDownload", "bool initiated", offsetof(PackageDownload, initiated_));
    // String PackageDownload::name_ | File: ../Network/Connection.h
    engine->RegisterObjectProperty("PackageDownload", "String name", offsetof(PackageDownload, name_));
    // HashSet<unsigned> PackageDownload::receivedFragments_ | File: ../Network/Connection.h
    // Error: type "HashSet<unsigned>" can not automatically bind
    // unsigned PackageDownload::totalFragments_ | File: ../Network/Connection.h
    engine->RegisterObjectProperty("PackageDownload", "uint totalFragments", offsetof(PackageDownload, totalFragments_));
    // PackageDownload& PackageDownload::operator=(const PackageDownload&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PackageDownload>(engine, "PackageDownload");
#ifdef REGISTER_MANUAL_PART_PackageDownload
    REGISTER_MANUAL_PART_PackageDownload(PackageDownload, "PackageDownload")
#endif
#endif

    // unsigned PackageEntry::checksum_ | File: ../IO/PackageFile.h
    engine->RegisterObjectProperty("PackageEntry", "uint checksum", offsetof(PackageEntry, checksum_));
    // unsigned PackageEntry::offset_ | File: ../IO/PackageFile.h
    engine->RegisterObjectProperty("PackageEntry", "uint offset", offsetof(PackageEntry, offset_));
    // unsigned PackageEntry::size_ | File: ../IO/PackageFile.h
    engine->RegisterObjectProperty("PackageEntry", "uint size", offsetof(PackageEntry, size_));
    // PackageEntry& PackageEntry::operator=(const PackageEntry&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PackageEntry>(engine, "PackageEntry");
#ifdef REGISTER_MANUAL_PART_PackageEntry
    REGISTER_MANUAL_PART_PackageEntry(PackageEntry, "PackageEntry")
#endif

#ifdef URHO3D_NETWORK
    // SharedPtr<File> PackageUpload::file_ | File: ../Network/Connection.h
    // Error: type "SharedPtr<File>" can not automatically bind
    // unsigned PackageUpload::fragment_ | File: ../Network/Connection.h
    engine->RegisterObjectProperty("PackageUpload", "uint fragment", offsetof(PackageUpload, fragment_));
    // unsigned PackageUpload::totalFragments_ | File: ../Network/Connection.h
    engine->RegisterObjectProperty("PackageUpload", "uint totalFragments", offsetof(PackageUpload, totalFragments_));
    // PackageUpload& PackageUpload::operator=(const PackageUpload&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PackageUpload>(engine, "PackageUpload");
#ifdef REGISTER_MANUAL_PART_PackageUpload
    REGISTER_MANUAL_PART_PackageUpload(PackageUpload, "PackageUpload")
#endif
#endif

    // unsigned Particle::colorIndex_ | File: ../Graphics/ParticleEmitter.h
    engine->RegisterObjectProperty("Particle", "uint colorIndex", offsetof(Particle, colorIndex_));
    // float Particle::rotationSpeed_ | File: ../Graphics/ParticleEmitter.h
    engine->RegisterObjectProperty("Particle", "float rotationSpeed", offsetof(Particle, rotationSpeed_));
    // float Particle::scale_ | File: ../Graphics/ParticleEmitter.h
    engine->RegisterObjectProperty("Particle", "float scale", offsetof(Particle, scale_));
    // Vector2 Particle::size_ | File: ../Graphics/ParticleEmitter.h
    engine->RegisterObjectProperty("Particle", "Vector2 size", offsetof(Particle, size_));
    // unsigned Particle::texIndex_ | File: ../Graphics/ParticleEmitter.h
    engine->RegisterObjectProperty("Particle", "uint texIndex", offsetof(Particle, texIndex_));
    // float Particle::timer_ | File: ../Graphics/ParticleEmitter.h
    engine->RegisterObjectProperty("Particle", "float timer", offsetof(Particle, timer_));
    // float Particle::timeToLive_ | File: ../Graphics/ParticleEmitter.h
    engine->RegisterObjectProperty("Particle", "float timeToLive", offsetof(Particle, timeToLive_));
    // Vector3 Particle::velocity_ | File: ../Graphics/ParticleEmitter.h
    engine->RegisterObjectProperty("Particle", "Vector3 velocity", offsetof(Particle, velocity_));
    // Particle& Particle::operator=(const Particle&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Particle>(engine, "Particle");
#ifdef REGISTER_MANUAL_PART_Particle
    REGISTER_MANUAL_PART_Particle(Particle, "Particle")
#endif

#ifdef URHO3D_URHO2D
    // Color Particle2D::color_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "Color color", offsetof(Particle2D, color_));
    // Color Particle2D::colorDelta_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "Color colorDelta", offsetof(Particle2D, colorDelta_));
    // float Particle2D::emitRadius_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float emitRadius", offsetof(Particle2D, emitRadius_));
    // float Particle2D::emitRadiusDelta_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float emitRadiusDelta", offsetof(Particle2D, emitRadiusDelta_));
    // float Particle2D::emitRotation_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float emitRotation", offsetof(Particle2D, emitRotation_));
    // float Particle2D::emitRotationDelta_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float emitRotationDelta", offsetof(Particle2D, emitRotationDelta_));
    // Vector3 Particle2D::position_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "Vector3 position", offsetof(Particle2D, position_));
    // float Particle2D::radialAcceleration_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float radialAcceleration", offsetof(Particle2D, radialAcceleration_));
    // float Particle2D::rotation_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float rotation", offsetof(Particle2D, rotation_));
    // float Particle2D::rotationDelta_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float rotationDelta", offsetof(Particle2D, rotationDelta_));
    // float Particle2D::size_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float size", offsetof(Particle2D, size_));
    // float Particle2D::sizeDelta_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float sizeDelta", offsetof(Particle2D, sizeDelta_));
    // Vector2 Particle2D::startPos_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "Vector2 startPos", offsetof(Particle2D, startPos_));
    // float Particle2D::tangentialAcceleration_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float tangentialAcceleration", offsetof(Particle2D, tangentialAcceleration_));
    // float Particle2D::timeToLive_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "float timeToLive", offsetof(Particle2D, timeToLive_));
    // Vector2 Particle2D::velocity_ | File: ../Urho2D/ParticleEmitter2D.h
    engine->RegisterObjectProperty("Particle2D", "Vector2 velocity", offsetof(Particle2D, velocity_));
    // Particle2D& Particle2D::operator=(const Particle2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Particle2D>(engine, "Particle2D");
#ifdef REGISTER_MANUAL_PART_Particle2D
    REGISTER_MANUAL_PART_Particle2D(Particle2D, "Particle2D")
#endif
#endif

    // PODVector<Drawable*> PerThreadSceneResult::geometries_ | File: ../Graphics/View.h
    // Error: type "PODVector<Drawable*>" can not automatically bind
    // PODVector<Light*> PerThreadSceneResult::lights_ | File: ../Graphics/View.h
    // Error: type "PODVector<Light*>" can not automatically bind
    // float PerThreadSceneResult::maxZ_ | File: ../Graphics/View.h
    engine->RegisterObjectProperty("PerThreadSceneResult", "float maxZ", offsetof(PerThreadSceneResult, maxZ_));
    // float PerThreadSceneResult::minZ_ | File: ../Graphics/View.h
    engine->RegisterObjectProperty("PerThreadSceneResult", "float minZ", offsetof(PerThreadSceneResult, minZ_));
    // PerThreadSceneResult& PerThreadSceneResult::operator=(const PerThreadSceneResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PerThreadSceneResult>(engine, "PerThreadSceneResult");
#ifdef REGISTER_MANUAL_PART_PerThreadSceneResult
    REGISTER_MANUAL_PART_PerThreadSceneResult(PerThreadSceneResult, "PerThreadSceneResult")
#endif

#ifdef URHO3D_PHYSICS
    // RigidBody* PhysicsRaycastResult::body_ | File: ../Physics/PhysicsWorld.h
    // RigidBody* can not be registered
    // float PhysicsRaycastResult::distance_ | File: ../Physics/PhysicsWorld.h
    engine->RegisterObjectProperty("PhysicsRaycastResult", "float distance", offsetof(PhysicsRaycastResult, distance_));
    // float PhysicsRaycastResult::hitFraction_ | File: ../Physics/PhysicsWorld.h
    engine->RegisterObjectProperty("PhysicsRaycastResult", "float hitFraction", offsetof(PhysicsRaycastResult, hitFraction_));
    // Vector3 PhysicsRaycastResult::normal_ | File: ../Physics/PhysicsWorld.h
    engine->RegisterObjectProperty("PhysicsRaycastResult", "Vector3 normal", offsetof(PhysicsRaycastResult, normal_));
    // Vector3 PhysicsRaycastResult::position_ | File: ../Physics/PhysicsWorld.h
    engine->RegisterObjectProperty("PhysicsRaycastResult", "Vector3 position", offsetof(PhysicsRaycastResult, position_));
    // PhysicsRaycastResult& PhysicsRaycastResult::operator=(const PhysicsRaycastResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PhysicsRaycastResult>(engine, "PhysicsRaycastResult");
#ifdef REGISTER_MANUAL_PART_PhysicsRaycastResult
    REGISTER_MANUAL_PART_PhysicsRaycastResult(PhysicsRaycastResult, "PhysicsRaycastResult")
#endif
#endif

#ifdef URHO3D_URHO2D
    // RigidBody2D* PhysicsRaycastResult2D::body_ | File: ../Urho2D/PhysicsWorld2D.h
    // RigidBody2D* can not be registered
    // float PhysicsRaycastResult2D::distance_ | File: ../Urho2D/PhysicsWorld2D.h
    engine->RegisterObjectProperty("PhysicsRaycastResult2D", "float distance", offsetof(PhysicsRaycastResult2D, distance_));
    // Vector2 PhysicsRaycastResult2D::normal_ | File: ../Urho2D/PhysicsWorld2D.h
    engine->RegisterObjectProperty("PhysicsRaycastResult2D", "Vector2 normal", offsetof(PhysicsRaycastResult2D, normal_));
    // Vector2 PhysicsRaycastResult2D::position_ | File: ../Urho2D/PhysicsWorld2D.h
    engine->RegisterObjectProperty("PhysicsRaycastResult2D", "Vector2 position", offsetof(PhysicsRaycastResult2D, position_));
    // PhysicsRaycastResult2D& PhysicsRaycastResult2D::operator=(const PhysicsRaycastResult2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PhysicsRaycastResult2D>(engine, "PhysicsRaycastResult2D");
#ifdef REGISTER_MANUAL_PART_PhysicsRaycastResult2D
    REGISTER_MANUAL_PART_PhysicsRaycastResult2D(PhysicsRaycastResult2D, "PhysicsRaycastResult2D")
#endif
#endif

#ifdef URHO3D_PHYSICS
    // btCollisionConfiguration* PhysicsWorldConfig::collisionConfig_ | File: ../Physics/PhysicsWorld.h
    // btCollisionConfiguration* can not be registered
    // PhysicsWorldConfig& PhysicsWorldConfig::operator=(const PhysicsWorldConfig&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<PhysicsWorldConfig>(engine, "PhysicsWorldConfig");
#ifdef REGISTER_MANUAL_PART_PhysicsWorldConfig
    REGISTER_MANUAL_PART_PhysicsWorldConfig(PhysicsWorldConfig, "PhysicsWorldConfig")
#endif
#endif

}

}
