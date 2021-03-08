// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_D(asIScriptEngine* engine)
{
#ifdef URHO3D_DATABASE
    // static DBAPI Database::GetAPI() | File: ../Database/Database.h
    engine->SetDefaultNamespace("Database");
    engine->RegisterGlobalFunction("DBAPI GetAPI()", AS_FUNCTIONPR(Database::GetAPI, (), DBAPI), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Database, "Database")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Database, "Database")
#endif
#ifdef REGISTER_MANUAL_PART_Database
    REGISTER_MANUAL_PART_Database(Database, "Database")
#endif
    RegisterSubclass<Object, Database>(engine, "Object", "Database");
    RegisterSubclass<RefCounted, Database>(engine, "RefCounted", "Database");
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(DebugHud, "DebugHud")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(DebugHud, "DebugHud")
#endif
#ifdef REGISTER_MANUAL_PART_DebugHud
    REGISTER_MANUAL_PART_DebugHud(DebugHud, "DebugHud")
#endif
    RegisterSubclass<Object, DebugHud>(engine, "Object", "DebugHud");
    RegisterSubclass<RefCounted, DebugHud>(engine, "RefCounted", "DebugHud");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void DebugRenderer::RegisterObject(Context* context) | File: ../Graphics/DebugRenderer.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(DebugRenderer, "DebugRenderer")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(DebugRenderer, "DebugRenderer")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(DebugRenderer, "DebugRenderer")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(DebugRenderer, "DebugRenderer")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(DebugRenderer, "DebugRenderer")
#endif
#ifdef REGISTER_MANUAL_PART_DebugRenderer
    REGISTER_MANUAL_PART_DebugRenderer(DebugRenderer, "DebugRenderer")
#endif
    RegisterSubclass<Component, DebugRenderer>(engine, "Component", "DebugRenderer");
    RegisterSubclass<Animatable, DebugRenderer>(engine, "Animatable", "DebugRenderer");
    RegisterSubclass<Serializable, DebugRenderer>(engine, "Serializable", "DebugRenderer");
    RegisterSubclass<Object, DebugRenderer>(engine, "Object", "DebugRenderer");
    RegisterSubclass<RefCounted, DebugRenderer>(engine, "RefCounted", "DebugRenderer");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void DecalSet::RegisterObject(Context* context) | File: ../Graphics/DecalSet.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(DecalSet, "DecalSet")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(DecalSet, "DecalSet")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(DecalSet, "DecalSet")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(DecalSet, "DecalSet")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(DecalSet, "DecalSet")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(DecalSet, "DecalSet")
#endif
#ifdef REGISTER_MANUAL_PART_DecalSet
    REGISTER_MANUAL_PART_DecalSet(DecalSet, "DecalSet")
#endif
    RegisterSubclass<Drawable, DecalSet>(engine, "Drawable", "DecalSet");
    RegisterSubclass<Component, DecalSet>(engine, "Component", "DecalSet");
    RegisterSubclass<Animatable, DecalSet>(engine, "Animatable", "DecalSet");
    RegisterSubclass<Serializable, DecalSet>(engine, "Serializable", "DecalSet");
    RegisterSubclass<Object, DecalSet>(engine, "Object", "DecalSet");
    RegisterSubclass<RefCounted, DecalSet>(engine, "RefCounted", "DecalSet");

    // Deserializer& Deserializer::operator=(const Deserializer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Deserializer>(engine, "Deserializer");
    engine->RegisterObjectBehaviour("Deserializer", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("Deserializer", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_Deserializer
    REGISTER_MANUAL_PART_Deserializer(Deserializer, "Deserializer")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Drawable::RegisterObject(Context* context) | File: ../Graphics/Drawable.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Drawable, "Drawable")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Drawable, "Drawable")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Drawable, "Drawable")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Drawable, "Drawable")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Drawable, "Drawable")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(Drawable, "Drawable")
#endif
    RegisterSubclass<Component, Drawable>(engine, "Component", "Drawable");
    RegisterSubclass<Animatable, Drawable>(engine, "Animatable", "Drawable");
    RegisterSubclass<Serializable, Drawable>(engine, "Serializable", "Drawable");
    RegisterSubclass<Object, Drawable>(engine, "Object", "Drawable");
    RegisterSubclass<RefCounted, Drawable>(engine, "RefCounted", "Drawable");

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Drawable2D::RegisterObject(Context* context) | File: ../Urho2D/Drawable2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(Drawable2D, "Drawable2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Drawable2D, "Drawable2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Drawable2D, "Drawable2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Drawable2D, "Drawable2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Drawable2D, "Drawable2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Drawable2D, "Drawable2D")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable2D
    REGISTER_MANUAL_PART_Drawable2D(Drawable2D, "Drawable2D")
#endif
    RegisterSubclass<Drawable, Drawable2D>(engine, "Drawable", "Drawable2D");
    RegisterSubclass<Component, Drawable2D>(engine, "Component", "Drawable2D");
    RegisterSubclass<Animatable, Drawable2D>(engine, "Animatable", "Drawable2D");
    RegisterSubclass<Serializable, Drawable2D>(engine, "Serializable", "Drawable2D");
    RegisterSubclass<Object, Drawable2D>(engine, "Object", "Drawable2D");
    RegisterSubclass<RefCounted, Drawable2D>(engine, "RefCounted", "Drawable2D");
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void DropDownList::RegisterObject(Context* context) | File: ../UI/DropDownList.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Menu
    REGISTER_MANUAL_PART_Menu(DropDownList, "DropDownList")
#endif
#ifdef REGISTER_MANUAL_PART_Button
    REGISTER_MANUAL_PART_Button(DropDownList, "DropDownList")
#endif
#ifdef REGISTER_MANUAL_PART_BorderImage
    REGISTER_MANUAL_PART_BorderImage(DropDownList, "DropDownList")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(DropDownList, "DropDownList")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(DropDownList, "DropDownList")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(DropDownList, "DropDownList")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(DropDownList, "DropDownList")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(DropDownList, "DropDownList")
#endif
#ifdef REGISTER_MANUAL_PART_DropDownList
    REGISTER_MANUAL_PART_DropDownList(DropDownList, "DropDownList")
#endif
    RegisterSubclass<Menu, DropDownList>(engine, "Menu", "DropDownList");
    RegisterSubclass<Button, DropDownList>(engine, "Button", "DropDownList");
    RegisterSubclass<BorderImage, DropDownList>(engine, "BorderImage", "DropDownList");
    RegisterSubclass<UIElement, DropDownList>(engine, "UIElement", "DropDownList");
    RegisterSubclass<Animatable, DropDownList>(engine, "Animatable", "DropDownList");
    RegisterSubclass<Serializable, DropDownList>(engine, "Serializable", "DropDownList");
    RegisterSubclass<Object, DropDownList>(engine, "Object", "DropDownList");
    RegisterSubclass<RefCounted, DropDownList>(engine, "RefCounted", "DropDownList");

#ifdef URHO3D_NAVIGATION
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void DynamicNavigationMesh::RegisterObject(Context* context) | File: ../Navigation/DynamicNavigationMesh.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_NavigationMesh
    REGISTER_MANUAL_PART_NavigationMesh(DynamicNavigationMesh, "DynamicNavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(DynamicNavigationMesh, "DynamicNavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(DynamicNavigationMesh, "DynamicNavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(DynamicNavigationMesh, "DynamicNavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(DynamicNavigationMesh, "DynamicNavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(DynamicNavigationMesh, "DynamicNavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_DynamicNavigationMesh
    REGISTER_MANUAL_PART_DynamicNavigationMesh(DynamicNavigationMesh, "DynamicNavigationMesh")
#endif
    RegisterSubclass<NavigationMesh, DynamicNavigationMesh>(engine, "NavigationMesh", "DynamicNavigationMesh");
    RegisterSubclass<Component, DynamicNavigationMesh>(engine, "Component", "DynamicNavigationMesh");
    RegisterSubclass<Animatable, DynamicNavigationMesh>(engine, "Animatable", "DynamicNavigationMesh");
    RegisterSubclass<Serializable, DynamicNavigationMesh>(engine, "Serializable", "DynamicNavigationMesh");
    RegisterSubclass<Object, DynamicNavigationMesh>(engine, "Object", "DynamicNavigationMesh");
    RegisterSubclass<RefCounted, DynamicNavigationMesh>(engine, "RefCounted", "DynamicNavigationMesh");
#endif

    // unsigned DebugLine::color_ | File: ../Graphics/DebugRenderer.h
    engine->RegisterObjectProperty("DebugLine", "uint color", offsetof(DebugLine, color_));
    // Vector3 DebugLine::end_ | File: ../Graphics/DebugRenderer.h
    engine->RegisterObjectProperty("DebugLine", "Vector3 end", offsetof(DebugLine, end_));
    // Vector3 DebugLine::start_ | File: ../Graphics/DebugRenderer.h
    engine->RegisterObjectProperty("DebugLine", "Vector3 start", offsetof(DebugLine, start_));
    // DebugLine& DebugLine::operator=(const DebugLine&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DebugLine>(engine, "DebugLine");
#ifdef REGISTER_MANUAL_PART_DebugLine
    REGISTER_MANUAL_PART_DebugLine(DebugLine, "DebugLine")
#endif

    // unsigned DebugTriangle::color_ | File: ../Graphics/DebugRenderer.h
    engine->RegisterObjectProperty("DebugTriangle", "uint color", offsetof(DebugTriangle, color_));
    // Vector3 DebugTriangle::v1_ | File: ../Graphics/DebugRenderer.h
    engine->RegisterObjectProperty("DebugTriangle", "Vector3 v1", offsetof(DebugTriangle, v1_));
    // Vector3 DebugTriangle::v2_ | File: ../Graphics/DebugRenderer.h
    engine->RegisterObjectProperty("DebugTriangle", "Vector3 v2", offsetof(DebugTriangle, v2_));
    // Vector3 DebugTriangle::v3_ | File: ../Graphics/DebugRenderer.h
    engine->RegisterObjectProperty("DebugTriangle", "Vector3 v3", offsetof(DebugTriangle, v3_));
    // DebugTriangle& DebugTriangle::operator=(const DebugTriangle&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DebugTriangle>(engine, "DebugTriangle");
#ifdef REGISTER_MANUAL_PART_DebugTriangle
    REGISTER_MANUAL_PART_DebugTriangle(DebugTriangle, "DebugTriangle")
#endif

    // BoundingBox Decal::boundingBox_ | File: ../Graphics/DecalSet.h
    engine->RegisterObjectProperty("Decal", "BoundingBox boundingBox", offsetof(Decal, boundingBox_));
    // PODVector<unsigned short> Decal::indices_ | File: ../Graphics/DecalSet.h
    // Error: type "PODVector<unsigned short>" can not automatically bind
    // float Decal::timer_ | File: ../Graphics/DecalSet.h
    engine->RegisterObjectProperty("Decal", "float timer", offsetof(Decal, timer_));
    // float Decal::timeToLive_ | File: ../Graphics/DecalSet.h
    engine->RegisterObjectProperty("Decal", "float timeToLive", offsetof(Decal, timeToLive_));
    // PODVector<DecalVertex> Decal::vertices_ | File: ../Graphics/DecalSet.h
    // Error: type "PODVector<DecalVertex>" can not automatically bind
    // Decal& Decal::operator=(const Decal&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Decal>(engine, "Decal");
#ifdef REGISTER_MANUAL_PART_Decal
    REGISTER_MANUAL_PART_Decal(Decal, "Decal")
#endif

    // unsigned char DecalVertex::blendIndices_[4] | File: ../Graphics/DecalSet.h
    // Not registered because array
    // float DecalVertex::blendWeights_[4] | File: ../Graphics/DecalSet.h
    // Not registered because array
    // Vector3 DecalVertex::normal_ | File: ../Graphics/DecalSet.h
    engine->RegisterObjectProperty("DecalVertex", "Vector3 normal", offsetof(DecalVertex, normal_));
    // Vector3 DecalVertex::position_ | File: ../Graphics/DecalSet.h
    engine->RegisterObjectProperty("DecalVertex", "Vector3 position", offsetof(DecalVertex, position_));
    // Vector4 DecalVertex::tangent_ | File: ../Graphics/DecalSet.h
    engine->RegisterObjectProperty("DecalVertex", "Vector4 tangent", offsetof(DecalVertex, tangent_));
    // Vector2 DecalVertex::texCoord_ | File: ../Graphics/DecalSet.h
    engine->RegisterObjectProperty("DecalVertex", "Vector2 texCoord", offsetof(DecalVertex, texCoord_));
    // DecalVertex& DecalVertex::operator=(const DecalVertex&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DecalVertex>(engine, "DecalVertex");
#ifdef REGISTER_MANUAL_PART_DecalVertex
    REGISTER_MANUAL_PART_DecalVertex(DecalVertex, "DecalVertex")
#endif

#ifdef URHO3D_PHYSICS
    // RigidBody* DelayedWorldTransform::parentRigidBody_ | File: ../Physics/PhysicsWorld.h
    // RigidBody* can not be registered
    // RigidBody* DelayedWorldTransform::rigidBody_ | File: ../Physics/PhysicsWorld.h
    // RigidBody* can not be registered
    // Vector3 DelayedWorldTransform::worldPosition_ | File: ../Physics/PhysicsWorld.h
    engine->RegisterObjectProperty("DelayedWorldTransform", "Vector3 worldPosition", offsetof(DelayedWorldTransform, worldPosition_));
    // Quaternion DelayedWorldTransform::worldRotation_ | File: ../Physics/PhysicsWorld.h
    engine->RegisterObjectProperty("DelayedWorldTransform", "Quaternion worldRotation", offsetof(DelayedWorldTransform, worldRotation_));
    // DelayedWorldTransform& DelayedWorldTransform::operator=(const DelayedWorldTransform&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DelayedWorldTransform>(engine, "DelayedWorldTransform");
#ifdef REGISTER_MANUAL_PART_DelayedWorldTransform
    REGISTER_MANUAL_PART_DelayedWorldTransform(DelayedWorldTransform, "DelayedWorldTransform")
#endif
#endif

#ifdef URHO3D_URHO2D
    // RigidBody2D* DelayedWorldTransform2D::parentRigidBody_ | File: ../Urho2D/PhysicsWorld2D.h
    // RigidBody2D* can not be registered
    // RigidBody2D* DelayedWorldTransform2D::rigidBody_ | File: ../Urho2D/PhysicsWorld2D.h
    // RigidBody2D* can not be registered
    // Vector3 DelayedWorldTransform2D::worldPosition_ | File: ../Urho2D/PhysicsWorld2D.h
    engine->RegisterObjectProperty("DelayedWorldTransform2D", "Vector3 worldPosition", offsetof(DelayedWorldTransform2D, worldPosition_));
    // Quaternion DelayedWorldTransform2D::worldRotation_ | File: ../Urho2D/PhysicsWorld2D.h
    engine->RegisterObjectProperty("DelayedWorldTransform2D", "Quaternion worldRotation", offsetof(DelayedWorldTransform2D, worldRotation_));
    // DelayedWorldTransform2D& DelayedWorldTransform2D::operator=(const DelayedWorldTransform2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DelayedWorldTransform2D>(engine, "DelayedWorldTransform2D");
#ifdef REGISTER_MANUAL_PART_DelayedWorldTransform2D
    REGISTER_MANUAL_PART_DelayedWorldTransform2D(DelayedWorldTransform2D, "DelayedWorldTransform2D")
#endif
#endif

    // int DepthValue::max_ | File: ../Graphics/OcclusionBuffer.h
    engine->RegisterObjectProperty("DepthValue", "int max", offsetof(DepthValue, max_));
    // int DepthValue::min_ | File: ../Graphics/OcclusionBuffer.h
    engine->RegisterObjectProperty("DepthValue", "int min", offsetof(DepthValue, min_));
    // DepthValue& DepthValue::operator=(const DepthValue&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DepthValue>(engine, "DepthValue");
#ifdef REGISTER_MANUAL_PART_DepthValue
    REGISTER_MANUAL_PART_DepthValue(DepthValue, "DepthValue")
#endif

    // unsigned char DirtyBits::count_ | File: ../Scene/ReplicationState.h
    engine->RegisterObjectProperty("DirtyBits", "uint8 count", offsetof(DirtyBits, count_));
    // unsigned char DirtyBits::data_[MAX_NETWORK_ATTRIBUTES/8] | File: ../Scene/ReplicationState.h
    // Not registered because array
    // DirtyBits& DirtyBits::operator=(const DirtyBits&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<DirtyBits>(engine, "DirtyBits");
#ifdef REGISTER_MANUAL_PART_DirtyBits
    REGISTER_MANUAL_PART_DirtyBits(DirtyBits, "DirtyBits")
#endif

}

}
