// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_Tn_Tz(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ToolTip::RegisterObject(Context* context) | File: ../UI/ToolTip.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(ToolTip, "ToolTip")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ToolTip, "ToolTip")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ToolTip, "ToolTip")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ToolTip, "ToolTip")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ToolTip, "ToolTip")
#endif
#ifdef REGISTER_MANUAL_PART_ToolTip
    REGISTER_MANUAL_PART_ToolTip(ToolTip, "ToolTip")
#endif
    RegisterSubclass<UIElement, ToolTip>(engine, "UIElement", "ToolTip");
    RegisterSubclass<Animatable, ToolTip>(engine, "Animatable", "ToolTip");
    RegisterSubclass<Serializable, ToolTip>(engine, "Serializable", "ToolTip");
    RegisterSubclass<Object, ToolTip>(engine, "Object", "ToolTip");
    RegisterSubclass<RefCounted, ToolTip>(engine, "RefCounted", "ToolTip");

    // IntVector2 TouchState::delta_ | File: ../Input/Input.h
    engine->RegisterObjectProperty("TouchState", "IntVector2 delta", offsetof(TouchState, delta_));
    // IntVector2 TouchState::lastPosition_ | File: ../Input/Input.h
    engine->RegisterObjectProperty("TouchState", "IntVector2 lastPosition", offsetof(TouchState, lastPosition_));
    // IntVector2 TouchState::position_ | File: ../Input/Input.h
    engine->RegisterObjectProperty("TouchState", "IntVector2 position", offsetof(TouchState, position_));
    // float TouchState::pressure_ | File: ../Input/Input.h
    engine->RegisterObjectProperty("TouchState", "float pressure", offsetof(TouchState, pressure_));
    // WeakPtr<UIElement> TouchState::touchedElement_ | File: ../Input/Input.h
    // Error: type "WeakPtr<UIElement>" can not automatically bind
    // int TouchState::touchID_ | File: ../Input/Input.h
    engine->RegisterObjectProperty("TouchState", "int touchID", offsetof(TouchState, touchID_));
    // TouchState& TouchState::operator=(const TouchState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<TouchState>(engine, "TouchState");
    engine->RegisterObjectBehaviour("TouchState", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("TouchState", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_TouchState
    REGISTER_MANUAL_PART_TouchState(TouchState, "TouchState")
#endif

    // float TrailPoint::elapsedLength_ | File: ../Graphics/RibbonTrail.h
    engine->RegisterObjectProperty("TrailPoint", "float elapsedLength", offsetof(TrailPoint, elapsedLength_));
    // Vector3 TrailPoint::forward_ | File: ../Graphics/RibbonTrail.h
    engine->RegisterObjectProperty("TrailPoint", "Vector3 forward", offsetof(TrailPoint, forward_));
    // float TrailPoint::lifetime_ | File: ../Graphics/RibbonTrail.h
    engine->RegisterObjectProperty("TrailPoint", "float lifetime", offsetof(TrailPoint, lifetime_));
    // TrailPoint* TrailPoint::next_ | File: ../Graphics/RibbonTrail.h
    // TrailPoint* can not be registered
    // Vector3 TrailPoint::parentPos_ | File: ../Graphics/RibbonTrail.h
    engine->RegisterObjectProperty("TrailPoint", "Vector3 parentPos", offsetof(TrailPoint, parentPos_));
    // Vector3 TrailPoint::position_ | File: ../Graphics/RibbonTrail.h
    engine->RegisterObjectProperty("TrailPoint", "Vector3 position", offsetof(TrailPoint, position_));
    // float TrailPoint::sortDistance_ | File: ../Graphics/RibbonTrail.h
    engine->RegisterObjectProperty("TrailPoint", "float sortDistance", offsetof(TrailPoint, sortDistance_));
    // TrailPoint& TrailPoint::operator=(const TrailPoint&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<TrailPoint>(engine, "TrailPoint");
#ifdef REGISTER_MANUAL_PART_TrailPoint
    REGISTER_MANUAL_PART_TrailPoint(TrailPoint, "TrailPoint")
#endif

#ifdef URHO3D_PHYSICS
    // UniquePtr<btTriangleInfoMap> TriangleMeshData::infoMap_ | File: ../Physics/CollisionShape.h
    // Error: type "UniquePtr<btTriangleInfoMap>" can not automatically bind
    // UniquePtr<TriangleMeshInterface> TriangleMeshData::meshInterface_ | File: ../Physics/CollisionShape.h
    // Error: type "UniquePtr<TriangleMeshInterface>" can not automatically bind
    // UniquePtr<btBvhTriangleMeshShape> TriangleMeshData::shape_ | File: ../Physics/CollisionShape.h
    // Error: type "UniquePtr<btBvhTriangleMeshShape>" can not automatically bind
#ifdef REGISTER_MANUAL_PART_CollisionGeometryData
    REGISTER_MANUAL_PART_CollisionGeometryData(TriangleMeshData, "TriangleMeshData")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TriangleMeshData, "TriangleMeshData")
#endif
#ifdef REGISTER_MANUAL_PART_TriangleMeshData
    REGISTER_MANUAL_PART_TriangleMeshData(TriangleMeshData, "TriangleMeshData")
#endif
    RegisterSubclass<CollisionGeometryData, TriangleMeshData>(engine, "CollisionGeometryData", "TriangleMeshData");
    RegisterSubclass<RefCounted, TriangleMeshData>(engine, "RefCounted", "TriangleMeshData");
#endif

}

}
