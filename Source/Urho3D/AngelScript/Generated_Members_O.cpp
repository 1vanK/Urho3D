// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_O(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Object, "Object")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Object, "Object")
#endif
    RegisterSubclass<RefCounted, Object>(engine, "RefCounted", "Object");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ObjectAnimation::RegisterObject(Context* context) | File: ../Scene/ObjectAnimation.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(ObjectAnimation, "ObjectAnimation")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ObjectAnimation, "ObjectAnimation")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ObjectAnimation, "ObjectAnimation")
#endif
#ifdef REGISTER_MANUAL_PART_ObjectAnimation
    REGISTER_MANUAL_PART_ObjectAnimation(ObjectAnimation, "ObjectAnimation")
#endif
    RegisterSubclass<Resource, ObjectAnimation>(engine, "Resource", "ObjectAnimation");
    RegisterSubclass<Object, ObjectAnimation>(engine, "Object", "ObjectAnimation");
    RegisterSubclass<RefCounted, ObjectAnimation>(engine, "RefCounted", "ObjectAnimation");

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ObjectFactory, "ObjectFactory")
#endif
#ifdef REGISTER_MANUAL_PART_ObjectFactory
    REGISTER_MANUAL_PART_ObjectFactory(ObjectFactory, "ObjectFactory")
#endif
    RegisterSubclass<RefCounted, ObjectFactory>(engine, "RefCounted", "ObjectFactory");

#ifdef URHO3D_NAVIGATION
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Obstacle::RegisterObject(Context* context) | File: ../Navigation/Obstacle.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Obstacle, "Obstacle")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Obstacle, "Obstacle")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Obstacle, "Obstacle")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Obstacle, "Obstacle")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Obstacle, "Obstacle")
#endif
#ifdef REGISTER_MANUAL_PART_Obstacle
    REGISTER_MANUAL_PART_Obstacle(Obstacle, "Obstacle")
#endif
    RegisterSubclass<Component, Obstacle>(engine, "Component", "Obstacle");
    RegisterSubclass<Animatable, Obstacle>(engine, "Animatable", "Obstacle");
    RegisterSubclass<Serializable, Obstacle>(engine, "Serializable", "Obstacle");
    RegisterSubclass<Object, Obstacle>(engine, "Object", "Obstacle");
    RegisterSubclass<RefCounted, Obstacle>(engine, "RefCounted", "Obstacle");
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(OcclusionBuffer, "OcclusionBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(OcclusionBuffer, "OcclusionBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_OcclusionBuffer
    REGISTER_MANUAL_PART_OcclusionBuffer(OcclusionBuffer, "OcclusionBuffer")
#endif
    RegisterSubclass<Object, OcclusionBuffer>(engine, "Object", "OcclusionBuffer");
    RegisterSubclass<RefCounted, OcclusionBuffer>(engine, "RefCounted", "OcclusionBuffer");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Octree::RegisterObject(Context* context) | File: ../Graphics/Octree.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Octree, "Octree")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Octree, "Octree")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Octree, "Octree")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Octree, "Octree")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Octree, "Octree")
#endif
#ifdef REGISTER_MANUAL_PART_Octant
    REGISTER_MANUAL_PART_Octant(Octree, "Octree")
#endif
#ifdef REGISTER_MANUAL_PART_Octree
    REGISTER_MANUAL_PART_Octree(Octree, "Octree")
#endif
    RegisterSubclass<Component, Octree>(engine, "Component", "Octree");
    RegisterSubclass<Animatable, Octree>(engine, "Animatable", "Octree");
    RegisterSubclass<Serializable, Octree>(engine, "Serializable", "Octree");
    RegisterSubclass<Object, Octree>(engine, "Object", "Octree");
    RegisterSubclass<RefCounted, Octree>(engine, "RefCounted", "Octree");

#ifdef URHO3D_NAVIGATION
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void OffMeshConnection::RegisterObject(Context* context) | File: ../Navigation/OffMeshConnection.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(OffMeshConnection, "OffMeshConnection")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(OffMeshConnection, "OffMeshConnection")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(OffMeshConnection, "OffMeshConnection")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(OffMeshConnection, "OffMeshConnection")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(OffMeshConnection, "OffMeshConnection")
#endif
#ifdef REGISTER_MANUAL_PART_OffMeshConnection
    REGISTER_MANUAL_PART_OffMeshConnection(OffMeshConnection, "OffMeshConnection")
#endif
    RegisterSubclass<Component, OffMeshConnection>(engine, "Component", "OffMeshConnection");
    RegisterSubclass<Animatable, OffMeshConnection>(engine, "Animatable", "OffMeshConnection");
    RegisterSubclass<Serializable, OffMeshConnection>(engine, "Serializable", "OffMeshConnection");
    RegisterSubclass<Object, OffMeshConnection>(engine, "Object", "OffMeshConnection");
    RegisterSubclass<RefCounted, OffMeshConnection>(engine, "RefCounted", "OffMeshConnection");
#endif

#ifdef REGISTER_MANUAL_PART_SoundStream
    REGISTER_MANUAL_PART_SoundStream(OggVorbisSoundStream, "OggVorbisSoundStream")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(OggVorbisSoundStream, "OggVorbisSoundStream")
#endif
#ifdef REGISTER_MANUAL_PART_OggVorbisSoundStream
    REGISTER_MANUAL_PART_OggVorbisSoundStream(OggVorbisSoundStream, "OggVorbisSoundStream")
#endif
    RegisterSubclass<SoundStream, OggVorbisSoundStream>(engine, "SoundStream", "OggVorbisSoundStream");
    RegisterSubclass<RefCounted, OggVorbisSoundStream>(engine, "RefCounted", "OggVorbisSoundStream");

    // OcclusionBatch& OcclusionBatch::operator=(const OcclusionBatch&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<OcclusionBatch>(engine, "OcclusionBatch");
#ifdef REGISTER_MANUAL_PART_OcclusionBatch
    REGISTER_MANUAL_PART_OcclusionBatch(OcclusionBatch, "OcclusionBatch")
#endif

    // OcclusionBufferData& OcclusionBufferData::operator=(const OcclusionBufferData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<OcclusionBufferData>(engine, "OcclusionBufferData");
#ifdef REGISTER_MANUAL_PART_OcclusionBufferData
    REGISTER_MANUAL_PART_OcclusionBufferData(OcclusionBufferData, "OcclusionBufferData")
#endif

    // OctreeQueryResult& OctreeQueryResult::operator=(const OctreeQueryResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<OctreeQueryResult>(engine, "OctreeQueryResult");
#ifdef REGISTER_MANUAL_PART_OctreeQueryResult
    REGISTER_MANUAL_PART_OctreeQueryResult(OctreeQueryResult, "OctreeQueryResult")
#endif

}

}
