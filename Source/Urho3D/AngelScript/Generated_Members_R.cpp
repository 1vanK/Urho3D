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
    // Vector3 Ray::direction_ | File: ../Math/Ray.h
    engine->RegisterObjectProperty("Ray", "Vector3 direction", offsetof(Ray, direction_));
    // Vector3 Ray::origin_ | File: ../Math/Ray.h
    engine->RegisterObjectProperty("Ray", "Vector3 origin", offsetof(Ray, origin_));
#ifdef REGISTER_MANUAL_PART_Ray
    REGISTER_MANUAL_PART_Ray(Ray, "Ray")
#endif

#ifdef URHO3D_PHYSICS
    // const IntVector3 RaycastVehicle::FORWARD_RIGHT_UP | File: ../Physics/RaycastVehicle.h
    engine->SetDefaultNamespace("RaycastVehicle");
    engine->RegisterGlobalProperty("const IntVector3 FORWARD_RIGHT_UP", (void*)&RaycastVehicle::FORWARD_RIGHT_UP);
    engine->SetDefaultNamespace("");
    // const IntVector3 RaycastVehicle::FORWARD_UP_RIGHT | File: ../Physics/RaycastVehicle.h
    engine->SetDefaultNamespace("RaycastVehicle");
    engine->RegisterGlobalProperty("const IntVector3 FORWARD_UP_RIGHT", (void*)&RaycastVehicle::FORWARD_UP_RIGHT);
    engine->SetDefaultNamespace("");
    // const IntVector3 RaycastVehicle::RIGHT_FORWARD_UP | File: ../Physics/RaycastVehicle.h
    engine->SetDefaultNamespace("RaycastVehicle");
    engine->RegisterGlobalProperty("const IntVector3 RIGHT_FORWARD_UP", (void*)&RaycastVehicle::RIGHT_FORWARD_UP);
    engine->SetDefaultNamespace("");
    // const IntVector3 RaycastVehicle::RIGHT_UP_FORWARD | File: ../Physics/RaycastVehicle.h
    engine->SetDefaultNamespace("RaycastVehicle");
    engine->RegisterGlobalProperty("const IntVector3 RIGHT_UP_FORWARD", (void*)&RaycastVehicle::RIGHT_UP_FORWARD);
    engine->SetDefaultNamespace("");
    // const IntVector3 RaycastVehicle::UP_FORWARD_RIGHT | File: ../Physics/RaycastVehicle.h
    engine->SetDefaultNamespace("RaycastVehicle");
    engine->RegisterGlobalProperty("const IntVector3 UP_FORWARD_RIGHT", (void*)&RaycastVehicle::UP_FORWARD_RIGHT);
    engine->SetDefaultNamespace("");
    // const IntVector3 RaycastVehicle::UP_RIGHT_FORWARD | File: ../Physics/RaycastVehicle.h
    engine->SetDefaultNamespace("RaycastVehicle");
    engine->RegisterGlobalProperty("const IntVector3 UP_RIGHT_FORWARD", (void*)&RaycastVehicle::UP_RIGHT_FORWARD);
    engine->SetDefaultNamespace("");
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

    // const Rect Rect::FULL | File: ../Math/Rect.h
    engine->SetDefaultNamespace("Rect");
    engine->RegisterGlobalProperty("const Rect FULL", (void*)&Rect::FULL);
    engine->SetDefaultNamespace("");
    // Vector2 Rect::max_ | File: ../Math/Rect.h
    engine->RegisterObjectProperty("Rect", "Vector2 max", offsetof(Rect, max_));
    // Vector2 Rect::min_ | File: ../Math/Rect.h
    engine->RegisterObjectProperty("Rect", "Vector2 min", offsetof(Rect, min_));
    // const Rect Rect::POSITIVE | File: ../Math/Rect.h
    engine->SetDefaultNamespace("Rect");
    engine->RegisterGlobalProperty("const Rect POSITIVE", (void*)&Rect::POSITIVE);
    engine->SetDefaultNamespace("");
    // const Rect Rect::ZERO | File: ../Math/Rect.h
    engine->SetDefaultNamespace("Rect");
    engine->RegisterGlobalProperty("const Rect ZERO", (void*)&Rect::ZERO);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Rect
    REGISTER_MANUAL_PART_Rect(Rect, "Rect")
#endif

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(RefCounted, "RefCounted")
#endif

    // Vector<RenderPathCommand> RenderPath::commands_ | File: ../Graphics/RenderPath.h
    // Error: type "Vector<RenderPathCommand>" can not automatically bind
    // Vector<RenderTargetInfo> RenderPath::renderTargets_ | File: ../Graphics/RenderPath.h
    // Error: type "Vector<RenderTargetInfo>" can not automatically bind
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(RenderPath, "RenderPath")
#endif
#ifdef REGISTER_MANUAL_PART_RenderPath
    REGISTER_MANUAL_PART_RenderPath(RenderPath, "RenderPath")
#endif
    RegisterSubclass<RefCounted, RenderPath>(engine, "RefCounted", "RenderPath");

    // void* RenderSurface::readOnlyView_ | File: ../Graphics/RenderSurface.h
    // Not registered because have @nobind mark
    // unsigned RenderSurface::renderBuffer_ | File: ../Graphics/RenderSurface.h
    // Not registered because have @nobind mark
    // void* RenderSurface::renderTargetView_ | File: ../Graphics/RenderSurface.h
    // Not registered because have @nobind mark
    // void* RenderSurface::surface_ | File: ../Graphics/RenderSurface.h
    // Not registered because have @nobind mark
    // unsigned RenderSurface::target_ | File: ../Graphics/RenderSurface.h
    // Not registered because have @nobind mark
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

    // float RayQueryResult::distance_ | File: ../Graphics/OctreeQuery.h
    engine->RegisterObjectProperty("RayQueryResult", "float distance", offsetof(RayQueryResult, distance_));
    // Drawable* RayQueryResult::drawable_ | File: ../Graphics/OctreeQuery.h
    // Drawable* can not be registered
    // Node* RayQueryResult::node_ | File: ../Graphics/OctreeQuery.h
    // Node* can not be registered
    // Vector3 RayQueryResult::normal_ | File: ../Graphics/OctreeQuery.h
    engine->RegisterObjectProperty("RayQueryResult", "Vector3 normal", offsetof(RayQueryResult, normal_));
    // Vector3 RayQueryResult::position_ | File: ../Graphics/OctreeQuery.h
    engine->RegisterObjectProperty("RayQueryResult", "Vector3 position", offsetof(RayQueryResult, position_));
    // unsigned RayQueryResult::subObject_ | File: ../Graphics/OctreeQuery.h
    engine->RegisterObjectProperty("RayQueryResult", "uint subObject", offsetof(RayQueryResult, subObject_));
    // Vector2 RayQueryResult::textureUV_ | File: ../Graphics/OctreeQuery.h
    engine->RegisterObjectProperty("RayQueryResult", "Vector2 textureUV", offsetof(RayQueryResult, textureUV_));
    // RayQueryResult& RayQueryResult::operator=(const RayQueryResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RayQueryResult>(engine, "RayQueryResult");
#ifdef REGISTER_MANUAL_PART_RayQueryResult
    REGISTER_MANUAL_PART_RayQueryResult(RayQueryResult, "RayQueryResult")
#endif

    // int RefCount::refs_ | File: ../Container/RefCounted.h
    engine->RegisterObjectProperty("RefCount", "int refs", offsetof(RefCount, refs_));
    // int RefCount::weakRefs_ | File: ../Container/RefCounted.h
    engine->RegisterObjectProperty("RefCount", "int weakRefs", offsetof(RefCount, weakRefs_));
    // RefCount& RefCount::operator=(const RefCount&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RefCount>(engine, "RefCount");
#ifdef REGISTER_MANUAL_PART_RefCount
    REGISTER_MANUAL_PART_RefCount(RefCount, "RefCount")
#endif

#ifdef URHO3D_NETWORK
    // VariantMap RemoteEvent::eventData_ | File: ../Network/Connection.h
    engine->RegisterObjectProperty("RemoteEvent", "VariantMap eventData", offsetof(RemoteEvent, eventData_));
    // StringHash RemoteEvent::eventType_ | File: ../Network/Connection.h
    engine->RegisterObjectProperty("RemoteEvent", "StringHash eventType", offsetof(RemoteEvent, eventType_));
    // bool RemoteEvent::inOrder_ | File: ../Network/Connection.h
    engine->RegisterObjectProperty("RemoteEvent", "bool inOrder", offsetof(RemoteEvent, inOrder_));
    // unsigned RemoteEvent::senderID_ | File: ../Network/Connection.h
    engine->RegisterObjectProperty("RemoteEvent", "uint senderID", offsetof(RemoteEvent, senderID_));
    // RemoteEvent& RemoteEvent::operator=(const RemoteEvent&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RemoteEvent>(engine, "RemoteEvent");
#ifdef REGISTER_MANUAL_PART_RemoteEvent
    REGISTER_MANUAL_PART_RemoteEvent(RemoteEvent, "RemoteEvent")
#endif
#endif

    // BlendMode RenderPathCommand::blendMode_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "BlendMode blendMode", offsetof(RenderPathCommand, blendMode_));
    // Color RenderPathCommand::clearColor_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "Color clearColor", offsetof(RenderPathCommand, clearColor_));
    // float RenderPathCommand::clearDepth_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "float clearDepth", offsetof(RenderPathCommand, clearDepth_));
    // ClearTargetFlags RenderPathCommand::clearFlags_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "ClearTargetFlags clearFlags", offsetof(RenderPathCommand, clearFlags_));
    // unsigned RenderPathCommand::clearStencil_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "uint clearStencil", offsetof(RenderPathCommand, clearStencil_));
    // String RenderPathCommand::depthStencilName_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "String depthStencilName", offsetof(RenderPathCommand, depthStencilName_));
    // bool RenderPathCommand::enabled_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "bool enabled", offsetof(RenderPathCommand, enabled_));
    // String RenderPathCommand::eventName_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "String eventName", offsetof(RenderPathCommand, eventName_));
    // bool RenderPathCommand::markToStencil_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "bool markToStencil", offsetof(RenderPathCommand, markToStencil_));
    // String RenderPathCommand::metadata_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "String metadata", offsetof(RenderPathCommand, metadata_));
    // Vector<Pair<String, CubeMapFace>> RenderPathCommand::outputs_ | File: ../Graphics/RenderPath.h
    // Error: type "Vector<Pair<String, CubeMapFace>>" can not automatically bind
    // String RenderPathCommand::pass_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "String pass", offsetof(RenderPathCommand, pass_));
    // unsigned RenderPathCommand::passIndex_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "uint passIndex", offsetof(RenderPathCommand, passIndex_));
    // String RenderPathCommand::pixelShaderDefines_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "String pixelShaderDefines", offsetof(RenderPathCommand, pixelShaderDefines_));
    // String RenderPathCommand::pixelShaderName_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "String pixelShaderName", offsetof(RenderPathCommand, pixelShaderName_));
    // HashMap<StringHash, Variant> RenderPathCommand::shaderParameters_ | File: ../Graphics/RenderPath.h
    // Error: type "HashMap<StringHash, Variant>" can not automatically bind
    // RenderCommandSortMode RenderPathCommand::sortMode_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "RenderCommandSortMode sortMode", offsetof(RenderPathCommand, sortMode_));
    // String RenderPathCommand::tag_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "String tag", offsetof(RenderPathCommand, tag_));
    // String RenderPathCommand::textureNames_[MAX_TEXTURE_UNITS] | File: ../Graphics/RenderPath.h
    // Not registered because array
    // RenderCommandType RenderPathCommand::type_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "RenderCommandType type", offsetof(RenderPathCommand, type_));
    // bool RenderPathCommand::useFogColor_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "bool useFogColor", offsetof(RenderPathCommand, useFogColor_));
    // bool RenderPathCommand::useLitBase_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "bool useLitBase", offsetof(RenderPathCommand, useLitBase_));
    // bool RenderPathCommand::vertexLights_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "bool vertexLights", offsetof(RenderPathCommand, vertexLights_));
    // String RenderPathCommand::vertexShaderDefines_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "String vertexShaderDefines", offsetof(RenderPathCommand, vertexShaderDefines_));
    // String RenderPathCommand::vertexShaderName_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderPathCommand", "String vertexShaderName", offsetof(RenderPathCommand, vertexShaderName_));
    // RenderPathCommand& RenderPathCommand::operator=(const RenderPathCommand&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RenderPathCommand>(engine, "RenderPathCommand");
#ifdef REGISTER_MANUAL_PART_RenderPathCommand
    REGISTER_MANUAL_PART_RenderPathCommand(RenderPathCommand, "RenderPathCommand")
#endif

    // bool RenderTargetInfo::autoResolve_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "bool autoResolve", offsetof(RenderTargetInfo, autoResolve_));
    // bool RenderTargetInfo::cubemap_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "bool cubemap", offsetof(RenderTargetInfo, cubemap_));
    // bool RenderTargetInfo::enabled_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "bool enabled", offsetof(RenderTargetInfo, enabled_));
    // bool RenderTargetInfo::filtered_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "bool filtered", offsetof(RenderTargetInfo, filtered_));
    // unsigned RenderTargetInfo::format_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "uint format", offsetof(RenderTargetInfo, format_));
    // int RenderTargetInfo::multiSample_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "int multiSample", offsetof(RenderTargetInfo, multiSample_));
    // String RenderTargetInfo::name_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "String name", offsetof(RenderTargetInfo, name_));
    // bool RenderTargetInfo::persistent_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "bool persistent", offsetof(RenderTargetInfo, persistent_));
    // Vector2 RenderTargetInfo::size_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "Vector2 size", offsetof(RenderTargetInfo, size_));
    // RenderTargetSizeMode RenderTargetInfo::sizeMode_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "RenderTargetSizeMode sizeMode", offsetof(RenderTargetInfo, sizeMode_));
    // bool RenderTargetInfo::sRGB_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "bool sRGB", offsetof(RenderTargetInfo, sRGB_));
    // String RenderTargetInfo::tag_ | File: ../Graphics/RenderPath.h
    engine->RegisterObjectProperty("RenderTargetInfo", "String tag", offsetof(RenderTargetInfo, tag_));
    // RenderTargetInfo& RenderTargetInfo::operator=(const RenderTargetInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<RenderTargetInfo>(engine, "RenderTargetInfo");
#ifdef REGISTER_MANUAL_PART_RenderTargetInfo
    REGISTER_MANUAL_PART_RenderTargetInfo(RenderTargetInfo, "RenderTargetInfo")
#endif

    // Connection* ReplicationState::connection_ | File: ../Scene/ReplicationState.h
    // Connection* can not be registered
    // ReplicationState& ReplicationState::operator=(const ReplicationState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ReplicationState>(engine, "ReplicationState");
#ifdef REGISTER_MANUAL_PART_ReplicationState
    REGISTER_MANUAL_PART_ReplicationState(ReplicationState, "ReplicationState")
#endif

    // unsigned long long ResourceGroup::memoryBudget_ | File: ../Resource/ResourceCache.h
    engine->RegisterObjectProperty("ResourceGroup", "uint64 memoryBudget", offsetof(ResourceGroup, memoryBudget_));
    // unsigned long long ResourceGroup::memoryUse_ | File: ../Resource/ResourceCache.h
    engine->RegisterObjectProperty("ResourceGroup", "uint64 memoryUse", offsetof(ResourceGroup, memoryUse_));
    // HashMap<StringHash, SharedPtr<Resource>> ResourceGroup::resources_ | File: ../Resource/ResourceCache.h
    // Error: type "HashMap<StringHash, SharedPtr<Resource>>" can not automatically bind
    // ResourceGroup& ResourceGroup::operator=(const ResourceGroup&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ResourceGroup>(engine, "ResourceGroup");
#ifdef REGISTER_MANUAL_PART_ResourceGroup
    REGISTER_MANUAL_PART_ResourceGroup(ResourceGroup, "ResourceGroup")
#endif

    // String ResourceRef::name_ | File: ../Core/Variant.h
    engine->RegisterObjectProperty("ResourceRef", "String name", offsetof(ResourceRef, name_));
    // StringHash ResourceRef::type_ | File: ../Core/Variant.h
    engine->RegisterObjectProperty("ResourceRef", "StringHash type", offsetof(ResourceRef, type_));
    // ResourceRef& ResourceRef::operator=(const ResourceRef&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ResourceRef>(engine, "ResourceRef");
#ifdef REGISTER_MANUAL_PART_ResourceRef
    REGISTER_MANUAL_PART_ResourceRef(ResourceRef, "ResourceRef")
#endif

    // StringVector ResourceRefList::names_ | File: ../Core/Variant.h
    // Error: type "StringVector" can not automatically bind
    // StringHash ResourceRefList::type_ | File: ../Core/Variant.h
    engine->RegisterObjectProperty("ResourceRefList", "StringHash type", offsetof(ResourceRefList, type_));
    // ResourceRefList& ResourceRefList::operator=(const ResourceRefList&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ResourceRefList>(engine, "ResourceRefList");
#ifdef REGISTER_MANUAL_PART_ResourceRefList
    REGISTER_MANUAL_PART_ResourceRefList(ResourceRefList, "ResourceRefList")
#endif

}

}
