// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_R(asIScriptEngine* engine)
{
#ifdef REGISTER_MANUAL_PART_Ray
    REGISTER_MANUAL_PART_Ray(Ray, "Ray")
#endif

#ifdef URHO3D_PHYSICS
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void RaycastVehicle::RegisterObject(Context* context) | File: ../Physics/RaycastVehicle.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_LogicComponent
    REGISTER_MANUAL_PART_LogicComponent(RaycastVehicle, "RaycastVehicle")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(RaycastVehicle, "RaycastVehicle")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(RaycastVehicle, "RaycastVehicle")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(RaycastVehicle, "RaycastVehicle")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(RaycastVehicle, "RaycastVehicle")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(RaycastVehicle, "RaycastVehicle")
#endif
#ifdef REGISTER_MANUAL_PART_RaycastVehicle
    REGISTER_MANUAL_PART_RaycastVehicle(RaycastVehicle, "RaycastVehicle")
#endif
    RegisterSubclass<LogicComponent, RaycastVehicle>(engine, "LogicComponent", "RaycastVehicle");
    RegisterSubclass<Component, RaycastVehicle>(engine, "Component", "RaycastVehicle");
    RegisterSubclass<Animatable, RaycastVehicle>(engine, "Animatable", "RaycastVehicle");
    RegisterSubclass<Serializable, RaycastVehicle>(engine, "Serializable", "RaycastVehicle");
    RegisterSubclass<Object, RaycastVehicle>(engine, "Object", "RaycastVehicle");
    RegisterSubclass<RefCounted, RaycastVehicle>(engine, "RefCounted", "RaycastVehicle");
#endif

#ifdef REGISTER_MANUAL_PART_Rect
    REGISTER_MANUAL_PART_Rect(Rect, "Rect")
#endif

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(RefCounted, "RefCounted")
#endif

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(RenderPath, "RenderPath")
#endif
#ifdef REGISTER_MANUAL_PART_RenderPath
    REGISTER_MANUAL_PART_RenderPath(RenderPath, "RenderPath")
#endif
    RegisterSubclass<RefCounted, RenderPath>(engine, "RefCounted", "RenderPath");

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(RenderSurface, "RenderSurface")
#endif
#ifdef REGISTER_MANUAL_PART_RenderSurface
    REGISTER_MANUAL_PART_RenderSurface(RenderSurface, "RenderSurface")
#endif
    RegisterSubclass<RefCounted, RenderSurface>(engine, "RefCounted", "RenderSurface");

    // static View* Renderer::GetActualView(View* view) | File: ../Graphics/Renderer.h
    engine->SetDefaultNamespace("Renderer");
    engine->RegisterGlobalFunction("View@+ GetActualView(View@+)", AS_FUNCTIONPR(Renderer::GetActualView, (View*), View*), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Renderer, "Renderer")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Renderer, "Renderer")
#endif
#ifdef REGISTER_MANUAL_PART_Renderer
    REGISTER_MANUAL_PART_Renderer(Renderer, "Renderer")
#endif
    RegisterSubclass<Object, Renderer>(engine, "Object", "Renderer");
    RegisterSubclass<RefCounted, Renderer>(engine, "RefCounted", "Renderer");

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Renderer2D::RegisterObject(Context* context) | File: ../Urho2D/Renderer2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(Renderer2D, "Renderer2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Renderer2D, "Renderer2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Renderer2D, "Renderer2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Renderer2D, "Renderer2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Renderer2D, "Renderer2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Renderer2D, "Renderer2D")
#endif
#ifdef REGISTER_MANUAL_PART_Renderer2D
    REGISTER_MANUAL_PART_Renderer2D(Renderer2D, "Renderer2D")
#endif
    RegisterSubclass<Drawable, Renderer2D>(engine, "Drawable", "Renderer2D");
    RegisterSubclass<Component, Renderer2D>(engine, "Component", "Renderer2D");
    RegisterSubclass<Animatable, Renderer2D>(engine, "Animatable", "Renderer2D");
    RegisterSubclass<Serializable, Renderer2D>(engine, "Serializable", "Renderer2D");
    RegisterSubclass<Object, Renderer2D>(engine, "Object", "Renderer2D");
    RegisterSubclass<RefCounted, Renderer2D>(engine, "RefCounted", "Renderer2D");
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Resource, "Resource")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Resource, "Resource")
#endif
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Resource, "Resource")
#endif
    RegisterSubclass<Object, Resource>(engine, "Object", "Resource");
    RegisterSubclass<RefCounted, Resource>(engine, "RefCounted", "Resource");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ResourceCache, "ResourceCache")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ResourceCache, "ResourceCache")
#endif
#ifdef REGISTER_MANUAL_PART_ResourceCache
    REGISTER_MANUAL_PART_ResourceCache(ResourceCache, "ResourceCache")
#endif
    RegisterSubclass<Object, ResourceCache>(engine, "Object", "ResourceCache");
    RegisterSubclass<RefCounted, ResourceCache>(engine, "RefCounted", "ResourceCache");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(ResourceWithMetadata, "ResourceWithMetadata")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ResourceWithMetadata, "ResourceWithMetadata")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ResourceWithMetadata, "ResourceWithMetadata")
#endif
#ifdef REGISTER_MANUAL_PART_ResourceWithMetadata
    REGISTER_MANUAL_PART_ResourceWithMetadata(ResourceWithMetadata, "ResourceWithMetadata")
#endif
    RegisterSubclass<Resource, ResourceWithMetadata>(engine, "Resource", "ResourceWithMetadata");
    RegisterSubclass<Object, ResourceWithMetadata>(engine, "Object", "ResourceWithMetadata");
    RegisterSubclass<RefCounted, ResourceWithMetadata>(engine, "RefCounted", "ResourceWithMetadata");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void RibbonTrail::RegisterObject(Context* context) | File: ../Graphics/RibbonTrail.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(RibbonTrail, "RibbonTrail")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(RibbonTrail, "RibbonTrail")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(RibbonTrail, "RibbonTrail")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(RibbonTrail, "RibbonTrail")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(RibbonTrail, "RibbonTrail")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(RibbonTrail, "RibbonTrail")
#endif
#ifdef REGISTER_MANUAL_PART_RibbonTrail
    REGISTER_MANUAL_PART_RibbonTrail(RibbonTrail, "RibbonTrail")
#endif
    RegisterSubclass<Drawable, RibbonTrail>(engine, "Drawable", "RibbonTrail");
    RegisterSubclass<Component, RibbonTrail>(engine, "Component", "RibbonTrail");
    RegisterSubclass<Animatable, RibbonTrail>(engine, "Animatable", "RibbonTrail");
    RegisterSubclass<Serializable, RibbonTrail>(engine, "Serializable", "RibbonTrail");
    RegisterSubclass<Object, RibbonTrail>(engine, "Object", "RibbonTrail");
    RegisterSubclass<RefCounted, RibbonTrail>(engine, "RefCounted", "RibbonTrail");

#ifdef URHO3D_PHYSICS
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void RigidBody::RegisterObject(Context* context) | File: ../Physics/RigidBody.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(RigidBody, "RigidBody")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(RigidBody, "RigidBody")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(RigidBody, "RigidBody")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(RigidBody, "RigidBody")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(RigidBody, "RigidBody")
#endif
#ifdef REGISTER_MANUAL_PART_RigidBody
    REGISTER_MANUAL_PART_RigidBody(RigidBody, "RigidBody")
#endif
    RegisterSubclass<Component, RigidBody>(engine, "Component", "RigidBody");
    RegisterSubclass<Animatable, RigidBody>(engine, "Animatable", "RigidBody");
    RegisterSubclass<Serializable, RigidBody>(engine, "Serializable", "RigidBody");
    RegisterSubclass<Object, RigidBody>(engine, "Object", "RigidBody");
    RegisterSubclass<RefCounted, RigidBody>(engine, "RefCounted", "RigidBody");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void RigidBody2D::RegisterObject(Context* context) | File: ../Urho2D/RigidBody2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(RigidBody2D, "RigidBody2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(RigidBody2D, "RigidBody2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(RigidBody2D, "RigidBody2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(RigidBody2D, "RigidBody2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(RigidBody2D, "RigidBody2D")
#endif
#ifdef REGISTER_MANUAL_PART_RigidBody2D
    REGISTER_MANUAL_PART_RigidBody2D(RigidBody2D, "RigidBody2D")
#endif
    RegisterSubclass<Component, RigidBody2D>(engine, "Component", "RigidBody2D");
    RegisterSubclass<Animatable, RigidBody2D>(engine, "Animatable", "RigidBody2D");
    RegisterSubclass<Serializable, RigidBody2D>(engine, "Serializable", "RigidBody2D");
    RegisterSubclass<Object, RigidBody2D>(engine, "Object", "RigidBody2D");
    RegisterSubclass<RefCounted, RigidBody2D>(engine, "RefCounted", "RigidBody2D");
#endif

    // RayQueryResult& RayQueryResult::operator=(const RayQueryResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RayQueryResult>(engine, "RayQueryResult");
#ifdef REGISTER_MANUAL_PART_RayQueryResult
    REGISTER_MANUAL_PART_RayQueryResult(RayQueryResult, "RayQueryResult")
#endif

    // RefCount& RefCount::operator=(const RefCount&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RefCount>(engine, "RefCount");
#ifdef REGISTER_MANUAL_PART_RefCount
    REGISTER_MANUAL_PART_RefCount(RefCount, "RefCount")
#endif

#ifdef URHO3D_NETWORK
    // RemoteEvent& RemoteEvent::operator=(const RemoteEvent&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RemoteEvent>(engine, "RemoteEvent");
#ifdef REGISTER_MANUAL_PART_RemoteEvent
    REGISTER_MANUAL_PART_RemoteEvent(RemoteEvent, "RemoteEvent")
#endif
#endif

    // RenderPathCommand& RenderPathCommand::operator=(const RenderPathCommand&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RenderPathCommand>(engine, "RenderPathCommand");
#ifdef REGISTER_MANUAL_PART_RenderPathCommand
    REGISTER_MANUAL_PART_RenderPathCommand(RenderPathCommand, "RenderPathCommand")
#endif

    // RenderTargetInfo& RenderTargetInfo::operator=(const RenderTargetInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RenderTargetInfo>(engine, "RenderTargetInfo");
#ifdef REGISTER_MANUAL_PART_RenderTargetInfo
    REGISTER_MANUAL_PART_RenderTargetInfo(RenderTargetInfo, "RenderTargetInfo")
#endif

    // ReplicationState& ReplicationState::operator=(const ReplicationState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ReplicationState>(engine, "ReplicationState");
#ifdef REGISTER_MANUAL_PART_ReplicationState
    REGISTER_MANUAL_PART_ReplicationState(ReplicationState, "ReplicationState")
#endif

    // ResourceGroup& ResourceGroup::operator=(const ResourceGroup&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ResourceGroup>(engine, "ResourceGroup");
#ifdef REGISTER_MANUAL_PART_ResourceGroup
    REGISTER_MANUAL_PART_ResourceGroup(ResourceGroup, "ResourceGroup")
#endif

    // ResourceRef& ResourceRef::operator=(const ResourceRef&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ResourceRef>(engine, "ResourceRef");
#ifdef REGISTER_MANUAL_PART_ResourceRef
    REGISTER_MANUAL_PART_ResourceRef(ResourceRef, "ResourceRef")
#endif

    // ResourceRefList& ResourceRefList::operator=(const ResourceRefList&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ResourceRefList>(engine, "ResourceRefList");
#ifdef REGISTER_MANUAL_PART_ResourceRefList
    REGISTER_MANUAL_PART_ResourceRefList(ResourceRefList, "ResourceRefList")
#endif

}

}
