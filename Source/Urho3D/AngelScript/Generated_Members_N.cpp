// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_N(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(NamedPipe, "NamedPipe")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(NamedPipe, "NamedPipe")
#endif
#ifdef REGISTER_MANUAL_PART_AbstractFile
    REGISTER_MANUAL_PART_AbstractFile(NamedPipe, "NamedPipe")
#endif
#ifdef REGISTER_MANUAL_PART_Deserializer
    REGISTER_MANUAL_PART_Deserializer(NamedPipe, "NamedPipe")
#endif
#ifdef REGISTER_MANUAL_PART_Serializer
    REGISTER_MANUAL_PART_Serializer(NamedPipe, "NamedPipe")
#endif
#ifdef REGISTER_MANUAL_PART_NamedPipe
    REGISTER_MANUAL_PART_NamedPipe(NamedPipe, "NamedPipe")
#endif
    RegisterSubclass<Object, NamedPipe>(engine, "Object", "NamedPipe");
    RegisterSubclass<RefCounted, NamedPipe>(engine, "RefCounted", "NamedPipe");
    RegisterSubclass<AbstractFile, NamedPipe>(engine, "AbstractFile", "NamedPipe");
    RegisterSubclass<Deserializer, NamedPipe>(engine, "Deserializer", "NamedPipe");
    RegisterSubclass<Serializer, NamedPipe>(engine, "Serializer", "NamedPipe");

#ifdef URHO3D_NAVIGATION
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void NavArea::RegisterObject(Context* context) | File: ../Navigation/NavArea.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(NavArea, "NavArea")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(NavArea, "NavArea")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(NavArea, "NavArea")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(NavArea, "NavArea")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(NavArea, "NavArea")
#endif
#ifdef REGISTER_MANUAL_PART_NavArea
    REGISTER_MANUAL_PART_NavArea(NavArea, "NavArea")
#endif
    RegisterSubclass<Component, NavArea>(engine, "Component", "NavArea");
    RegisterSubclass<Animatable, NavArea>(engine, "Animatable", "NavArea");
    RegisterSubclass<Serializable, NavArea>(engine, "Serializable", "NavArea");
    RegisterSubclass<Object, NavArea>(engine, "Object", "NavArea");
    RegisterSubclass<RefCounted, NavArea>(engine, "RefCounted", "NavArea");
#endif

#ifdef URHO3D_NAVIGATION
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Navigable::RegisterObject(Context* context) | File: ../Navigation/Navigable.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Navigable, "Navigable")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Navigable, "Navigable")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Navigable, "Navigable")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Navigable, "Navigable")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Navigable, "Navigable")
#endif
#ifdef REGISTER_MANUAL_PART_Navigable
    REGISTER_MANUAL_PART_Navigable(Navigable, "Navigable")
#endif
    RegisterSubclass<Component, Navigable>(engine, "Component", "Navigable");
    RegisterSubclass<Animatable, Navigable>(engine, "Animatable", "Navigable");
    RegisterSubclass<Serializable, Navigable>(engine, "Serializable", "Navigable");
    RegisterSubclass<Object, Navigable>(engine, "Object", "Navigable");
    RegisterSubclass<RefCounted, Navigable>(engine, "RefCounted", "Navigable");
#endif

#ifdef URHO3D_NAVIGATION
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void NavigationMesh::RegisterObject(Context* context) | File: ../Navigation/NavigationMesh.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(NavigationMesh, "NavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(NavigationMesh, "NavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(NavigationMesh, "NavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(NavigationMesh, "NavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(NavigationMesh, "NavigationMesh")
#endif
#ifdef REGISTER_MANUAL_PART_NavigationMesh
    REGISTER_MANUAL_PART_NavigationMesh(NavigationMesh, "NavigationMesh")
#endif
    RegisterSubclass<Component, NavigationMesh>(engine, "Component", "NavigationMesh");
    RegisterSubclass<Animatable, NavigationMesh>(engine, "Animatable", "NavigationMesh");
    RegisterSubclass<Serializable, NavigationMesh>(engine, "Serializable", "NavigationMesh");
    RegisterSubclass<Object, NavigationMesh>(engine, "Object", "NavigationMesh");
    RegisterSubclass<RefCounted, NavigationMesh>(engine, "RefCounted", "NavigationMesh");
#endif

#ifdef URHO3D_NETWORK
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Network, "Network")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Network, "Network")
#endif
#ifdef REGISTER_MANUAL_PART_Network
    REGISTER_MANUAL_PART_Network(Network, "Network")
#endif
    RegisterSubclass<Object, Network>(engine, "Object", "Network");
    RegisterSubclass<RefCounted, Network>(engine, "RefCounted", "Network");
#endif

#ifdef URHO3D_NETWORK
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void NetworkPriority::RegisterObject(Context* context) | File: ../Network/NetworkPriority.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(NetworkPriority, "NetworkPriority")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(NetworkPriority, "NetworkPriority")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(NetworkPriority, "NetworkPriority")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(NetworkPriority, "NetworkPriority")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(NetworkPriority, "NetworkPriority")
#endif
#ifdef REGISTER_MANUAL_PART_NetworkPriority
    REGISTER_MANUAL_PART_NetworkPriority(NetworkPriority, "NetworkPriority")
#endif
    RegisterSubclass<Component, NetworkPriority>(engine, "Component", "NetworkPriority");
    RegisterSubclass<Animatable, NetworkPriority>(engine, "Animatable", "NetworkPriority");
    RegisterSubclass<Serializable, NetworkPriority>(engine, "Serializable", "NetworkPriority");
    RegisterSubclass<Object, NetworkPriority>(engine, "Object", "NetworkPriority");
    RegisterSubclass<RefCounted, NetworkPriority>(engine, "RefCounted", "NetworkPriority");
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Node::RegisterObject(Context* context) | File: ../Scene/Node.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Node, "Node")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Node, "Node")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Node, "Node")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Node, "Node")
#endif
#ifdef REGISTER_MANUAL_PART_Node
    REGISTER_MANUAL_PART_Node(Node, "Node")
#endif
    RegisterSubclass<Animatable, Node>(engine, "Animatable", "Node");
    RegisterSubclass<Serializable, Node>(engine, "Serializable", "Node");
    RegisterSubclass<Object, Node>(engine, "Object", "Node");
    RegisterSubclass<RefCounted, Node>(engine, "RefCounted", "Node");

#ifdef URHO3D_NAVIGATION
    // NavAreaStub& NavAreaStub::operator=(const NavAreaStub&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavAreaStub>(engine, "NavAreaStub");
#ifdef REGISTER_MANUAL_PART_NavAreaStub
    REGISTER_MANUAL_PART_NavAreaStub(NavAreaStub, "NavAreaStub")
#endif
#endif

#ifdef URHO3D_NAVIGATION
    // NavBuildData& NavBuildData::operator=(const NavBuildData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavBuildData>(engine, "NavBuildData");
#ifdef REGISTER_MANUAL_PART_NavBuildData
    REGISTER_MANUAL_PART_NavBuildData(NavBuildData, "NavBuildData")
#endif
#endif

#ifdef URHO3D_NAVIGATION
    // NavigationGeometryInfo& NavigationGeometryInfo::operator=(const NavigationGeometryInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavigationGeometryInfo>(engine, "NavigationGeometryInfo");
#ifdef REGISTER_MANUAL_PART_NavigationGeometryInfo
    REGISTER_MANUAL_PART_NavigationGeometryInfo(NavigationGeometryInfo, "NavigationGeometryInfo")
#endif
#endif

#ifdef URHO3D_NAVIGATION
    // NavigationPathPoint& NavigationPathPoint::operator=(const NavigationPathPoint&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavigationPathPoint>(engine, "NavigationPathPoint");
#ifdef REGISTER_MANUAL_PART_NavigationPathPoint
    REGISTER_MANUAL_PART_NavigationPathPoint(NavigationPathPoint, "NavigationPathPoint")
#endif
#endif

    // NetworkState& NetworkState::operator=(const NetworkState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NetworkState>(engine, "NetworkState");
#ifdef REGISTER_MANUAL_PART_NetworkState
    REGISTER_MANUAL_PART_NetworkState(NetworkState, "NetworkState")
#endif

    // NodeImpl& NodeImpl::operator=(const NodeImpl&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NodeImpl>(engine, "NodeImpl");
#ifdef REGISTER_MANUAL_PART_NodeImpl
    REGISTER_MANUAL_PART_NodeImpl(NodeImpl, "NodeImpl")
#endif

    // NodeReplicationState& NodeReplicationState::operator=(const NodeReplicationState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NodeReplicationState>(engine, "NodeReplicationState");
#ifdef REGISTER_MANUAL_PART_ReplicationState
    REGISTER_MANUAL_PART_ReplicationState(NodeReplicationState, "NodeReplicationState")
#endif
#ifdef REGISTER_MANUAL_PART_NodeReplicationState
    REGISTER_MANUAL_PART_NodeReplicationState(NodeReplicationState, "NodeReplicationState")
#endif

}

}
