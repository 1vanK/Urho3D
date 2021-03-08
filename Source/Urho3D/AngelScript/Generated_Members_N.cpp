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
    // unsigned char NavAreaStub::areaID_ | File: ../Navigation/NavBuildData.h
    engine->RegisterObjectProperty("NavAreaStub", "uint8 areaID", offsetof(NavAreaStub, areaID_));
    // BoundingBox NavAreaStub::bounds_ | File: ../Navigation/NavBuildData.h
    engine->RegisterObjectProperty("NavAreaStub", "BoundingBox bounds", offsetof(NavAreaStub, bounds_));
    // NavAreaStub& NavAreaStub::operator=(const NavAreaStub&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavAreaStub>(engine, "NavAreaStub");
#ifdef REGISTER_MANUAL_PART_NavAreaStub
    REGISTER_MANUAL_PART_NavAreaStub(NavAreaStub, "NavAreaStub")
#endif
#endif

#ifdef URHO3D_NAVIGATION
    // rcCompactHeightfield* NavBuildData::compactHeightField_ | File: ../Navigation/NavBuildData.h
    // rcCompactHeightfield* can not be registered
    // rcContext* NavBuildData::ctx_ | File: ../Navigation/NavBuildData.h
    // rcContext* can not be registered
    // rcHeightfield* NavBuildData::heightField_ | File: ../Navigation/NavBuildData.h
    // rcHeightfield* can not be registered
    // PODVector<int> NavBuildData::indices_ | File: ../Navigation/NavBuildData.h
    // Error: type "PODVector<int>" can not automatically bind
    // PODVector<NavAreaStub> NavBuildData::navAreas_ | File: ../Navigation/NavBuildData.h
    // Error: type "PODVector<NavAreaStub>" can not automatically bind
    // PODVector<unsigned char> NavBuildData::offMeshAreas_ | File: ../Navigation/NavBuildData.h
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // PODVector<unsigned char> NavBuildData::offMeshDir_ | File: ../Navigation/NavBuildData.h
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // PODVector<unsigned short> NavBuildData::offMeshFlags_ | File: ../Navigation/NavBuildData.h
    // Error: type "PODVector<unsigned short>" can not automatically bind
    // PODVector<float> NavBuildData::offMeshRadii_ | File: ../Navigation/NavBuildData.h
    // Error: type "PODVector<float>" can not automatically bind
    // PODVector<Vector3> NavBuildData::offMeshVertices_ | File: ../Navigation/NavBuildData.h
    // Error: type "PODVector<Vector3>" can not automatically bind
    // PODVector<Vector3> NavBuildData::vertices_ | File: ../Navigation/NavBuildData.h
    // Error: type "PODVector<Vector3>" can not automatically bind
    // BoundingBox NavBuildData::worldBoundingBox_ | File: ../Navigation/NavBuildData.h
    engine->RegisterObjectProperty("NavBuildData", "BoundingBox worldBoundingBox", offsetof(NavBuildData, worldBoundingBox_));
    // NavBuildData& NavBuildData::operator=(const NavBuildData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavBuildData>(engine, "NavBuildData");
#ifdef REGISTER_MANUAL_PART_NavBuildData
    REGISTER_MANUAL_PART_NavBuildData(NavBuildData, "NavBuildData")
#endif
#endif

#ifdef URHO3D_NAVIGATION
    // BoundingBox NavigationGeometryInfo::boundingBox_ | File: ../Navigation/NavigationMesh.h
    engine->RegisterObjectProperty("NavigationGeometryInfo", "BoundingBox boundingBox", offsetof(NavigationGeometryInfo, boundingBox_));
    // Component* NavigationGeometryInfo::component_ | File: ../Navigation/NavigationMesh.h
    // Component* can not be registered
    // unsigned NavigationGeometryInfo::lodLevel_ | File: ../Navigation/NavigationMesh.h
    engine->RegisterObjectProperty("NavigationGeometryInfo", "uint lodLevel", offsetof(NavigationGeometryInfo, lodLevel_));
    // Matrix3x4 NavigationGeometryInfo::transform_ | File: ../Navigation/NavigationMesh.h
    engine->RegisterObjectProperty("NavigationGeometryInfo", "Matrix3x4 transform", offsetof(NavigationGeometryInfo, transform_));
    // NavigationGeometryInfo& NavigationGeometryInfo::operator=(const NavigationGeometryInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavigationGeometryInfo>(engine, "NavigationGeometryInfo");
#ifdef REGISTER_MANUAL_PART_NavigationGeometryInfo
    REGISTER_MANUAL_PART_NavigationGeometryInfo(NavigationGeometryInfo, "NavigationGeometryInfo")
#endif
#endif

#ifdef URHO3D_NAVIGATION
    // unsigned char NavigationPathPoint::areaID_ | File: ../Navigation/NavigationMesh.h
    engine->RegisterObjectProperty("NavigationPathPoint", "uint8 areaID", offsetof(NavigationPathPoint, areaID_));
    // NavigationPathPointFlag NavigationPathPoint::flag_ | File: ../Navigation/NavigationMesh.h
    engine->RegisterObjectProperty("NavigationPathPoint", "NavigationPathPointFlag flag", offsetof(NavigationPathPoint, flag_));
    // Vector3 NavigationPathPoint::position_ | File: ../Navigation/NavigationMesh.h
    engine->RegisterObjectProperty("NavigationPathPoint", "Vector3 position", offsetof(NavigationPathPoint, position_));
    // NavigationPathPoint& NavigationPathPoint::operator=(const NavigationPathPoint&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NavigationPathPoint>(engine, "NavigationPathPoint");
#ifdef REGISTER_MANUAL_PART_NavigationPathPoint
    REGISTER_MANUAL_PART_NavigationPathPoint(NavigationPathPoint, "NavigationPathPoint")
#endif
#endif

    // const Vector<AttributeInfo>* NetworkState::attributes_ | File: ../Scene/ReplicationState.h
    // const Vector<AttributeInfo>* can not be registered
    // Vector<Variant> NetworkState::currentValues_ | File: ../Scene/ReplicationState.h
    // Error: type "Vector<Variant>" can not automatically bind
    // unsigned long long NetworkState::interceptMask_ | File: ../Scene/ReplicationState.h
    engine->RegisterObjectProperty("NetworkState", "uint64 interceptMask", offsetof(NetworkState, interceptMask_));
    // Vector<Variant> NetworkState::previousValues_ | File: ../Scene/ReplicationState.h
    // Error: type "Vector<Variant>" can not automatically bind
    // VariantMap NetworkState::previousVars_ | File: ../Scene/ReplicationState.h
    engine->RegisterObjectProperty("NetworkState", "VariantMap previousVars", offsetof(NetworkState, previousVars_));
    // PODVector<ReplicationState*> NetworkState::replicationStates_ | File: ../Scene/ReplicationState.h
    // Error: type "PODVector<ReplicationState*>" can not automatically bind
    // NetworkState& NetworkState::operator=(const NetworkState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NetworkState>(engine, "NetworkState");
#ifdef REGISTER_MANUAL_PART_NetworkState
    REGISTER_MANUAL_PART_NetworkState(NetworkState, "NetworkState")
#endif

    // VectorBuffer NodeImpl::attrBuffer_ | File: ../Scene/Node.h
    engine->RegisterObjectProperty("NodeImpl", "VectorBuffer attrBuffer", offsetof(NodeImpl, attrBuffer_));
    // PODVector<Node*> NodeImpl::dependencyNodes_ | File: ../Scene/Node.h
    // Error: type "PODVector<Node*>" can not automatically bind
    // String NodeImpl::name_ | File: ../Scene/Node.h
    engine->RegisterObjectProperty("NodeImpl", "String name", offsetof(NodeImpl, name_));
    // StringHash NodeImpl::nameHash_ | File: ../Scene/Node.h
    engine->RegisterObjectProperty("NodeImpl", "StringHash nameHash", offsetof(NodeImpl, nameHash_));
    // Connection* NodeImpl::owner_ | File: ../Scene/Node.h
    // Connection* can not be registered
    // StringVector NodeImpl::tags_ | File: ../Scene/Node.h
    // Error: type "StringVector" can not automatically bind
    // NodeImpl& NodeImpl::operator=(const NodeImpl&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<NodeImpl>(engine, "NodeImpl");
#ifdef REGISTER_MANUAL_PART_NodeImpl
    REGISTER_MANUAL_PART_NodeImpl(NodeImpl, "NodeImpl")
#endif

    // HashMap<unsigned, ComponentReplicationState> NodeReplicationState::componentStates_ | File: ../Scene/ReplicationState.h
    // Error: type "HashMap<unsigned, ComponentReplicationState>" can not automatically bind
    // Connection* ReplicationState::connection_ | File: ../Scene/ReplicationState.h
    // Connection* can not be registered
    // DirtyBits NodeReplicationState::dirtyAttributes_ | File: ../Scene/ReplicationState.h
    engine->RegisterObjectProperty("NodeReplicationState", "DirtyBits dirtyAttributes", offsetof(NodeReplicationState, dirtyAttributes_));
    // HashSet<StringHash> NodeReplicationState::dirtyVars_ | File: ../Scene/ReplicationState.h
    // Error: type "HashSet<StringHash>" can not automatically bind
    // bool NodeReplicationState::markedDirty_ | File: ../Scene/ReplicationState.h
    engine->RegisterObjectProperty("NodeReplicationState", "bool markedDirty", offsetof(NodeReplicationState, markedDirty_));
    // WeakPtr<Node> NodeReplicationState::node_ | File: ../Scene/ReplicationState.h
    // Error: type "WeakPtr<Node>" can not automatically bind
    // float NodeReplicationState::priorityAcc_ | File: ../Scene/ReplicationState.h
    engine->RegisterObjectProperty("NodeReplicationState", "float priorityAcc", offsetof(NodeReplicationState, priorityAcc_));
    // SceneReplicationState* NodeReplicationState::sceneState_ | File: ../Scene/ReplicationState.h
    // SceneReplicationState* can not be registered
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
