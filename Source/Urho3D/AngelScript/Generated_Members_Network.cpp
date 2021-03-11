// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

#ifdef URHO3D_NETWORK

// class Connection | File: ../Network/Connection.h
void CollectMembers_Connection(MemberCollection& members)
{
    CollectMembers_Object(members);

    // const SLNet::AddressOrGUID& Connection::GetAddressOrGUID() const
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind
    // bool Connection::ProcessMessage(int msgID, MemoryBuffer& buffer)
    // Error: type "MemoryBuffer" can not automatically bind bacause have @nobind mark
    // void Connection::SendMessage(int msgID, bool reliable, bool inOrder, const unsigned char* data, unsigned numBytes, unsigned contentID=0)
    // Error: type "const unsigned char*" can not automatically bind
    // void Connection::SetAddressOrGUID(const SLNet::AddressOrGUID& addr)
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("PacketType Connection::GetPacketType(bool reliable, bool inOrder)", "PacketType GetPacketType(bool, bool)", AS_METHODPR(Connection, GetPacketType, (bool, bool), PacketType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SendMessage(int msgID, bool reliable, bool inOrder, const VectorBuffer& msg, unsigned contentID=0)", "void SendMessage(int, bool, bool, const VectorBuffer&in, uint = 0)", AS_METHODPR(Connection, SendMessage, (int, bool, bool, const VectorBuffer&, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SendRemoteEvent(StringHash eventType, bool inOrder, const VariantMap& eventData=Variant::emptyVariantMap)", "void SendRemoteEvent(StringHash, bool, const VariantMap&in = VariantMap())", AS_METHODPR(Connection, SendRemoteEvent, (StringHash, bool, const VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SendRemoteEvent(Node* node, StringHash eventType, bool inOrder, const VariantMap& eventData=Variant::emptyVariantMap)", "void SendRemoteEvent(Node@+, StringHash, bool, const VariantMap&in = VariantMap())", AS_METHODPR(Connection, SendRemoteEvent, (Node*, StringHash, bool, const VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetScene(Scene* newScene)", "void SetScene(Scene@+)", AS_METHODPR(Connection, SetScene, (Scene*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetScene(Scene* newScene)", "void set_scene(Scene@+)", AS_METHODPR(Connection, SetScene, (Scene*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetIdentity(const VariantMap& identity)", "void SetIdentity(const VariantMap&in)", AS_METHODPR(Connection, SetIdentity, (const VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetControls(const Controls& newControls)", "void SetControls(const Controls&in)", AS_METHODPR(Connection, SetControls, (const Controls&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetPosition(const Vector3& position)", "void SetPosition(const Vector3&in)", AS_METHODPR(Connection, SetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetPosition(const Vector3& position)", "void set_position(const Vector3&in)", AS_METHODPR(Connection, SetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetRotation(const Quaternion& rotation)", "void SetRotation(const Quaternion&in)", AS_METHODPR(Connection, SetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetRotation(const Quaternion& rotation)", "void set_rotation(const Quaternion&in)", AS_METHODPR(Connection, SetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetConnectPending(bool connectPending)", "void SetConnectPending(bool)", AS_METHODPR(Connection, SetConnectPending, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetLogStatistics(bool enable)", "void SetLogStatistics(bool)", AS_METHODPR(Connection, SetLogStatistics, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetLogStatistics(bool enable)", "void set_logStatistics(bool)", AS_METHODPR(Connection, SetLogStatistics, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::Disconnect(int waitMSec=0)", "void Disconnect(int = 0)", AS_METHODPR(Connection, Disconnect, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SendServerUpdate()", "void SendServerUpdate()", AS_METHODPR(Connection, SendServerUpdate, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SendClientUpdate()", "void SendClientUpdate()", AS_METHODPR(Connection, SendClientUpdate, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SendRemoteEvents()", "void SendRemoteEvents()", AS_METHODPR(Connection, SendRemoteEvents, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SendPackages()", "void SendPackages()", AS_METHODPR(Connection, SendPackages, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SendBuffer(PacketType type)", "void SendBuffer(PacketType)", AS_METHODPR(Connection, SendBuffer, (PacketType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SendAllBuffers()", "void SendAllBuffers()", AS_METHODPR(Connection, SendAllBuffers, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::ProcessPendingLatestData()", "void ProcessPendingLatestData()", AS_METHODPR(Connection, ProcessPendingLatestData, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::Ban()", "void Ban()", AS_METHODPR(Connection, Ban, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VariantMap& Connection::GetIdentity()", "VariantMap& GetIdentity()", AS_METHODPR(Connection, GetIdentity, (), VariantMap&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Scene* Connection::GetScene() const", "Scene@+ GetScene() const", AS_METHODPR(Connection, GetScene, () const, Scene*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Scene* Connection::GetScene() const", "Scene@+ get_scene() const", AS_METHODPR(Connection, GetScene, () const, Scene*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Controls& Connection::GetControls() const", "const Controls& GetControls() const", AS_METHODPR(Connection, GetControls, () const, const Controls&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned char Connection::GetTimeStamp() const", "uint8 GetTimeStamp() const", AS_METHODPR(Connection, GetTimeStamp, () const, unsigned char), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Connection::GetPosition() const", "const Vector3& GetPosition() const", AS_METHODPR(Connection, GetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Connection::GetPosition() const", "const Vector3& get_position() const", AS_METHODPR(Connection, GetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& Connection::GetRotation() const", "const Quaternion& GetRotation() const", AS_METHODPR(Connection, GetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& Connection::GetRotation() const", "const Quaternion& get_rotation() const", AS_METHODPR(Connection, GetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Connection::IsClient() const", "bool IsClient() const", AS_METHODPR(Connection, IsClient, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Connection::IsClient() const", "bool get_client() const", AS_METHODPR(Connection, IsClient, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Connection::IsConnected() const", "bool IsConnected() const", AS_METHODPR(Connection, IsConnected, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Connection::IsConnected() const", "bool get_connected() const", AS_METHODPR(Connection, IsConnected, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Connection::IsConnectPending() const", "bool IsConnectPending() const", AS_METHODPR(Connection, IsConnectPending, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Connection::IsConnectPending() const", "bool get_connectPending() const", AS_METHODPR(Connection, IsConnectPending, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Connection::IsSceneLoaded() const", "bool IsSceneLoaded() const", AS_METHODPR(Connection, IsSceneLoaded, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Connection::IsSceneLoaded() const", "bool get_sceneLoaded() const", AS_METHODPR(Connection, IsSceneLoaded, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Connection::GetLogStatistics() const", "bool GetLogStatistics() const", AS_METHODPR(Connection, GetLogStatistics, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Connection::GetLogStatistics() const", "bool get_logStatistics() const", AS_METHODPR(Connection, GetLogStatistics, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Connection::GetAddress() const", "String GetAddress() const", AS_METHODPR(Connection, GetAddress, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Connection::GetAddress() const", "String get_address() const", AS_METHODPR(Connection, GetAddress, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned short Connection::GetPort() const", "uint16 GetPort() const", AS_METHODPR(Connection, GetPort, () const, unsigned short), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned short Connection::GetPort() const", "uint16 get_port() const", AS_METHODPR(Connection, GetPort, () const, unsigned short), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Connection::GetRoundTripTime() const", "float GetRoundTripTime() const", AS_METHODPR(Connection, GetRoundTripTime, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Connection::GetRoundTripTime() const", "float get_roundTripTime() const", AS_METHODPR(Connection, GetRoundTripTime, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Connection::GetLastHeardTime() const", "uint GetLastHeardTime() const", AS_METHODPR(Connection, GetLastHeardTime, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Connection::GetLastHeardTime() const", "uint get_lastHeardTime() const", AS_METHODPR(Connection, GetLastHeardTime, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Connection::GetBytesInPerSec() const", "float GetBytesInPerSec() const", AS_METHODPR(Connection, GetBytesInPerSec, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Connection::GetBytesInPerSec() const", "float get_bytesInPerSec() const", AS_METHODPR(Connection, GetBytesInPerSec, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Connection::GetBytesOutPerSec() const", "float GetBytesOutPerSec() const", AS_METHODPR(Connection, GetBytesOutPerSec, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Connection::GetBytesOutPerSec() const", "float get_bytesOutPerSec() const", AS_METHODPR(Connection, GetBytesOutPerSec, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Connection::GetPacketsInPerSec() const", "int GetPacketsInPerSec() const", AS_METHODPR(Connection, GetPacketsInPerSec, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Connection::GetPacketsInPerSec() const", "int get_packetsInPerSec() const", AS_METHODPR(Connection, GetPacketsInPerSec, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Connection::GetPacketsOutPerSec() const", "int GetPacketsOutPerSec() const", AS_METHODPR(Connection, GetPacketsOutPerSec, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Connection::GetPacketsOutPerSec() const", "int get_packetsOutPerSec() const", AS_METHODPR(Connection, GetPacketsOutPerSec, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Connection::ToString() const", "String ToString() const", AS_METHODPR(Connection, ToString, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Connection::GetNumDownloads() const", "uint GetNumDownloads() const", AS_METHODPR(Connection, GetNumDownloads, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Connection::GetNumDownloads() const", "uint get_numDownloads() const", AS_METHODPR(Connection, GetNumDownloads, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Connection::GetDownloadName() const", "const String& GetDownloadName() const", AS_METHODPR(Connection, GetDownloadName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Connection::GetDownloadName() const", "const String& get_downloadName() const", AS_METHODPR(Connection, GetDownloadName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Connection::GetDownloadProgress() const", "float GetDownloadProgress() const", AS_METHODPR(Connection, GetDownloadProgress, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Connection::GetDownloadProgress() const", "float get_downloadProgress() const", AS_METHODPR(Connection, GetDownloadProgress, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SendPackageToClient(PackageFile* package)", "void SendPackageToClient(PackageFile@+)", AS_METHODPR(Connection, SendPackageToClient, (PackageFile*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::ConfigureNetworkSimulator(int latencyMs, float packetLoss)", "void ConfigureNetworkSimulator(int, float)", AS_METHODPR(Connection, ConfigureNetworkSimulator, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Connection::SetPacketSizeLimit(int limit)", "void SetPacketSizeLimit(int)", AS_METHODPR(Connection, SetPacketSizeLimit, (int), void), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("Controls Connection::controls_", "Controls controls", offsetof(Connection, controls_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned char Connection::timeStamp_", "uint8 timeStamp", offsetof(Connection, timeStamp_)));
    members.fields_.Push(RegisterObjectPropertyArgs("VariantMap Connection::identity_", "VariantMap identity", offsetof(Connection, identity_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Connection
        REGISTER_MEMBERS_MANUAL_PART_Connection();
    #endif
}

// class HttpRequest | File: ../Network/HttpRequest.h
void CollectMembers_HttpRequest(MemberCollection& members)
{
    CollectMembers_RefCounted(members);
    CollectMembers_Deserializer(members);
    CollectMembers_Thread(members);

    Remove(members.methods_, "virtual bool Deserializer::IsEof() const");
    Remove(members.methods_, "virtual unsigned Deserializer::Read(void* dest, unsigned size)=0");
    Remove(members.methods_, "virtual unsigned Deserializer::Seek(unsigned position)=0");
    Remove(members.methods_, "virtual void Thread::ThreadFunction()=0");

    // unsigned HttpRequest::Read(void* dest, unsigned size) override
    // Error: type "void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void HttpRequest::ThreadFunction() override", "void ThreadFunction()", AS_METHODPR(HttpRequest, ThreadFunction, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned HttpRequest::Seek(unsigned position) override", "uint Seek(uint)", AS_METHODPR(HttpRequest, Seek, (unsigned), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool HttpRequest::IsEof() const override", "bool IsEof() const", AS_METHODPR(HttpRequest, IsEof, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool HttpRequest::IsEof() const override", "bool get_eof() const", AS_METHODPR(HttpRequest, IsEof, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& HttpRequest::GetURL() const", "const String& GetURL() const", AS_METHODPR(HttpRequest, GetURL, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& HttpRequest::GetURL() const", "const String& get_url() const", AS_METHODPR(HttpRequest, GetURL, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& HttpRequest::GetVerb() const", "const String& GetVerb() const", AS_METHODPR(HttpRequest, GetVerb, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& HttpRequest::GetVerb() const", "const String& get_verb() const", AS_METHODPR(HttpRequest, GetVerb, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String HttpRequest::GetError() const", "String GetError() const", AS_METHODPR(HttpRequest, GetError, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String HttpRequest::GetError() const", "String get_error() const", AS_METHODPR(HttpRequest, GetError, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("HttpRequestState HttpRequest::GetState() const", "HttpRequestState GetState() const", AS_METHODPR(HttpRequest, GetState, () const, HttpRequestState), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("HttpRequestState HttpRequest::GetState() const", "HttpRequestState get_state() const", AS_METHODPR(HttpRequest, GetState, () const, HttpRequestState), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned HttpRequest::GetAvailableSize() const", "uint GetAvailableSize() const", AS_METHODPR(HttpRequest, GetAvailableSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned HttpRequest::GetAvailableSize() const", "uint get_availableSize() const", AS_METHODPR(HttpRequest, GetAvailableSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool HttpRequest::IsOpen() const", "bool IsOpen() const", AS_METHODPR(HttpRequest, IsOpen, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool HttpRequest::IsOpen() const", "bool get_open() const", AS_METHODPR(HttpRequest, IsOpen, () const, bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_HttpRequest
        REGISTER_MEMBERS_MANUAL_PART_HttpRequest();
    #endif
}

// SharedPtr<HttpRequest> Network::MakeHttpRequest(const String& url, const String& verb=String::EMPTY, const Vector<String>& headers=Vector<String>(), const String& postData=String::EMPTY)
#ifdef URHO3D_NETWORK
// SharedPtr<HttpRequest> Network::MakeHttpRequest(const String& url, const String& verb=String::EMPTY, const Vector<String>& headers=Vector<String>(), const String& postData=String::EMPTY) | File: ../Network/Network.h
static HttpRequest* Network_MakeHttpRequest_String_String_VectorString_String(Network* ptr, const String& url, const String& verb, CScriptArray* headers_conv, const String& postData)
{
    Vector<String> headers = ArrayToVector<String>(headers_conv);
    SharedPtr<HttpRequest> result = ptr->MakeHttpRequest(url, verb, headers, postData);
    return result.Detach();
}
#endif


// Vector<SharedPtr<Connection>> Network::GetClientConnections() const
#ifdef URHO3D_NETWORK
// Vector<SharedPtr<Connection>> Network::GetClientConnections() const | File: ../Network/Network.h
static CScriptArray* Network_GetClientConnections_void(Network* ptr)
{
    Vector<SharedPtr<Connection>> result = ptr->GetClientConnections();
    return VectorToHandleArray(result, "Array<Connection@>");
}
#endif


// class Network | File: ../Network/Network.h
void CollectMembers_Network(MemberCollection& members)
{
    CollectMembers_Object(members);

    // void Network::BroadcastMessage(int msgID, bool reliable, bool inOrder, const unsigned char* data, unsigned numBytes, unsigned contentID=0)
    // Error: type "const unsigned char*" can not automatically bind
    // void Network::ClientDisconnected(const SLNet::AddressOrGUID& connection)
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind
    // Connection* Network::GetConnection(const SLNet::AddressOrGUID& connection) const
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind
    // void Network::HandleMessage(const SLNet::AddressOrGUID& source, int packetID, int msgID, const char* data, size_t numBytes)
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind
    // void Network::NewConnectionEstablished(const SLNet::AddressOrGUID& connection)
    // Error: type "const SLNet::AddressOrGUID&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetDiscoveryBeacon(const VariantMap& data)", "void SetDiscoveryBeacon(const VariantMap&in)", AS_METHODPR(Network, SetDiscoveryBeacon, (const VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::DiscoverHosts(unsigned port)", "void DiscoverHosts(uint)", AS_METHODPR(Network, DiscoverHosts, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetPassword(const String& password)", "void SetPassword(const String&in)", AS_METHODPR(Network, SetPassword, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetNATServerInfo(const String& address, unsigned short port)", "void SetNATServerInfo(const String&in, uint16)", AS_METHODPR(Network, SetNATServerInfo, (const String&, unsigned short), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Network::Connect(const String& address, unsigned short port, Scene* scene, const VariantMap& identity=Variant::emptyVariantMap)", "bool Connect(const String&in, uint16, Scene@+, const VariantMap&in = VariantMap())", AS_METHODPR(Network, Connect, (const String&, unsigned short, Scene*, const VariantMap&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::Disconnect(int waitMSec=0)", "void Disconnect(int = 0)", AS_METHODPR(Network, Disconnect, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Network::StartServer(unsigned short port, unsigned int maxConnections=128)", "bool StartServer(uint16, uint = 128)", AS_METHODPR(Network, StartServer, (unsigned short, unsigned int), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::StopServer()", "void StopServer()", AS_METHODPR(Network, StopServer, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::StartNATClient()", "void StartNATClient()", AS_METHODPR(Network, StartNATClient, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Network::GetGUID() const", "const String& GetGUID() const", AS_METHODPR(Network, GetGUID, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Network::GetGUID() const", "const String& get_guid() const", AS_METHODPR(Network, GetGUID, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::AttemptNATPunchtrough(const String& guid, Scene* scene, const VariantMap& identity=Variant::emptyVariantMap)", "void AttemptNATPunchtrough(const String&in, Scene@+, const VariantMap&in = VariantMap())", AS_METHODPR(Network, AttemptNATPunchtrough, (const String&, Scene*, const VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::BroadcastMessage(int msgID, bool reliable, bool inOrder, const VectorBuffer& msg, unsigned contentID=0)", "void BroadcastMessage(int, bool, bool, const VectorBuffer&in, uint = 0)", AS_METHODPR(Network, BroadcastMessage, (int, bool, bool, const VectorBuffer&, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::BroadcastRemoteEvent(StringHash eventType, bool inOrder, const VariantMap& eventData=Variant::emptyVariantMap)", "void BroadcastRemoteEvent(StringHash, bool, const VariantMap&in = VariantMap())", AS_METHODPR(Network, BroadcastRemoteEvent, (StringHash, bool, const VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::BroadcastRemoteEvent(Scene* scene, StringHash eventType, bool inOrder, const VariantMap& eventData=Variant::emptyVariantMap)", "void BroadcastRemoteEvent(Scene@+, StringHash, bool, const VariantMap&in = VariantMap())", AS_METHODPR(Network, BroadcastRemoteEvent, (Scene*, StringHash, bool, const VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::BroadcastRemoteEvent(Node* node, StringHash eventType, bool inOrder, const VariantMap& eventData=Variant::emptyVariantMap)", "void BroadcastRemoteEvent(Node@+, StringHash, bool, const VariantMap&in = VariantMap())", AS_METHODPR(Network, BroadcastRemoteEvent, (Node*, StringHash, bool, const VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetUpdateFps(int fps)", "void SetUpdateFps(int)", AS_METHODPR(Network, SetUpdateFps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetUpdateFps(int fps)", "void set_updateFps(int)", AS_METHODPR(Network, SetUpdateFps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetSimulatedLatency(int ms)", "void SetSimulatedLatency(int)", AS_METHODPR(Network, SetSimulatedLatency, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetSimulatedLatency(int ms)", "void set_simulatedLatency(int)", AS_METHODPR(Network, SetSimulatedLatency, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetSimulatedPacketLoss(float probability)", "void SetSimulatedPacketLoss(float)", AS_METHODPR(Network, SetSimulatedPacketLoss, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetSimulatedPacketLoss(float probability)", "void set_simulatedPacketLoss(float)", AS_METHODPR(Network, SetSimulatedPacketLoss, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::RegisterRemoteEvent(StringHash eventType)", "void RegisterRemoteEvent(StringHash)", AS_METHODPR(Network, RegisterRemoteEvent, (StringHash), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::UnregisterRemoteEvent(StringHash eventType)", "void UnregisterRemoteEvent(StringHash)", AS_METHODPR(Network, UnregisterRemoteEvent, (StringHash), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::UnregisterAllRemoteEvents()", "void UnregisterAllRemoteEvents()", AS_METHODPR(Network, UnregisterAllRemoteEvents, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetPackageCacheDir(const String& path)", "void SetPackageCacheDir(const String&in)", AS_METHODPR(Network, SetPackageCacheDir, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SetPackageCacheDir(const String& path)", "void set_packageCacheDir(const String&in)", AS_METHODPR(Network, SetPackageCacheDir, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::SendPackageToClients(Scene* scene, PackageFile* package)", "void SendPackageToClients(Scene@+, PackageFile@+)", AS_METHODPR(Network, SendPackageToClients, (Scene*, PackageFile*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<HttpRequest> Network::MakeHttpRequest(const String& url, const String& verb=String::EMPTY, const Vector<String>& headers=Vector<String>(), const String& postData=String::EMPTY)", "HttpRequest@+ MakeHttpRequest(const String&in, const String&in = String::EMPTY, Array<String>@+ = null, const String&in = String::EMPTY)", AS_FUNCTION_OBJFIRST(Network_MakeHttpRequest_String_String_VectorString_String), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::BanAddress(const String& address)", "void BanAddress(const String&in)", AS_METHODPR(Network, BanAddress, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Network::GetUpdateFps() const", "int GetUpdateFps() const", AS_METHODPR(Network, GetUpdateFps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Network::GetUpdateFps() const", "int get_updateFps() const", AS_METHODPR(Network, GetUpdateFps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Network::GetSimulatedLatency() const", "int GetSimulatedLatency() const", AS_METHODPR(Network, GetSimulatedLatency, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Network::GetSimulatedLatency() const", "int get_simulatedLatency() const", AS_METHODPR(Network, GetSimulatedLatency, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Network::GetSimulatedPacketLoss() const", "float GetSimulatedPacketLoss() const", AS_METHODPR(Network, GetSimulatedPacketLoss, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Network::GetSimulatedPacketLoss() const", "float get_simulatedPacketLoss() const", AS_METHODPR(Network, GetSimulatedPacketLoss, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Connection* Network::GetServerConnection() const", "Connection@+ GetServerConnection() const", AS_METHODPR(Network, GetServerConnection, () const, Connection*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Connection* Network::GetServerConnection() const", "Connection@+ get_serverConnection() const", AS_METHODPR(Network, GetServerConnection, () const, Connection*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector<SharedPtr<Connection>> Network::GetClientConnections() const", "Array<Connection@>@ GetClientConnections() const", AS_FUNCTION_OBJFIRST(Network_GetClientConnections_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("Vector<SharedPtr<Connection>> Network::GetClientConnections() const", "Array<Connection@>@ get_clientConnections() const", AS_FUNCTION_OBJFIRST(Network_GetClientConnections_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("bool Network::IsServerRunning() const", "bool IsServerRunning() const", AS_METHODPR(Network, IsServerRunning, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Network::IsServerRunning() const", "bool get_serverRunning() const", AS_METHODPR(Network, IsServerRunning, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Network::CheckRemoteEvent(StringHash eventType) const", "bool CheckRemoteEvent(StringHash) const", AS_METHODPR(Network, CheckRemoteEvent, (StringHash) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Network::GetPackageCacheDir() const", "const String& GetPackageCacheDir() const", AS_METHODPR(Network, GetPackageCacheDir, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Network::GetPackageCacheDir() const", "const String& get_packageCacheDir() const", AS_METHODPR(Network, GetPackageCacheDir, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::Update(float timeStep)", "void Update(float)", AS_METHODPR(Network, Update, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Network::PostUpdate(float timeStep)", "void PostUpdate(float)", AS_METHODPR(Network, PostUpdate, (float), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Network
        REGISTER_MEMBERS_MANUAL_PART_Network();
    #endif
}

// class NetworkPriority | File: ../Network/NetworkPriority.h
void CollectMembers_NetworkPriority(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    members.methods_.Push(RegisterObjectMethodArgs("void NetworkPriority::SetBasePriority(float priority)", "void SetBasePriority(float)", AS_METHODPR(NetworkPriority, SetBasePriority, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void NetworkPriority::SetBasePriority(float priority)", "void set_basePriority(float)", AS_METHODPR(NetworkPriority, SetBasePriority, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void NetworkPriority::SetDistanceFactor(float factor)", "void SetDistanceFactor(float)", AS_METHODPR(NetworkPriority, SetDistanceFactor, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void NetworkPriority::SetDistanceFactor(float factor)", "void set_distanceFactor(float)", AS_METHODPR(NetworkPriority, SetDistanceFactor, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void NetworkPriority::SetMinPriority(float priority)", "void SetMinPriority(float)", AS_METHODPR(NetworkPriority, SetMinPriority, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void NetworkPriority::SetMinPriority(float priority)", "void set_minPriority(float)", AS_METHODPR(NetworkPriority, SetMinPriority, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void NetworkPriority::SetAlwaysUpdateOwner(bool enable)", "void SetAlwaysUpdateOwner(bool)", AS_METHODPR(NetworkPriority, SetAlwaysUpdateOwner, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void NetworkPriority::SetAlwaysUpdateOwner(bool enable)", "void set_alwaysUpdateOwner(bool)", AS_METHODPR(NetworkPriority, SetAlwaysUpdateOwner, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float NetworkPriority::GetBasePriority() const", "float GetBasePriority() const", AS_METHODPR(NetworkPriority, GetBasePriority, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float NetworkPriority::GetBasePriority() const", "float get_basePriority() const", AS_METHODPR(NetworkPriority, GetBasePriority, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float NetworkPriority::GetDistanceFactor() const", "float GetDistanceFactor() const", AS_METHODPR(NetworkPriority, GetDistanceFactor, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float NetworkPriority::GetDistanceFactor() const", "float get_distanceFactor() const", AS_METHODPR(NetworkPriority, GetDistanceFactor, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float NetworkPriority::GetMinPriority() const", "float GetMinPriority() const", AS_METHODPR(NetworkPriority, GetMinPriority, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float NetworkPriority::GetMinPriority() const", "float get_minPriority() const", AS_METHODPR(NetworkPriority, GetMinPriority, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool NetworkPriority::GetAlwaysUpdateOwner() const", "bool GetAlwaysUpdateOwner() const", AS_METHODPR(NetworkPriority, GetAlwaysUpdateOwner, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool NetworkPriority::GetAlwaysUpdateOwner() const", "bool get_alwaysUpdateOwner() const", AS_METHODPR(NetworkPriority, GetAlwaysUpdateOwner, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool NetworkPriority::CheckUpdate(float distance, float& accumulator)", "bool CheckUpdate(float, float&)", AS_METHODPR(NetworkPriority, CheckUpdate, (float, float&), bool), AS_CALL_THISCALL));

    // static void NetworkPriority::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_NetworkPriority
        REGISTER_MEMBERS_MANUAL_PART_NetworkPriority();
    #endif
}

// struct PackageDownload | File: ../Network/Connection.h
void CollectMembers_PackageDownload(MemberCollection& members)
{
    // SharedPtr<File> PackageDownload::file_
    // Error: type "SharedPtr<File>" can not automatically bind
    // HashSet<unsigned> PackageDownload::receivedFragments_
    // Error: type "HashSet<unsigned>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("String PackageDownload::name_", "String name", offsetof(PackageDownload, name_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned PackageDownload::totalFragments_", "uint totalFragments", offsetof(PackageDownload, totalFragments_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned PackageDownload::checksum_", "uint checksum", offsetof(PackageDownload, checksum_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool PackageDownload::initiated_", "bool initiated", offsetof(PackageDownload, initiated_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_PackageDownload
        REGISTER_MEMBERS_MANUAL_PART_PackageDownload();
    #endif
}

// struct PackageUpload | File: ../Network/Connection.h
void CollectMembers_PackageUpload(MemberCollection& members)
{
    // SharedPtr<File> PackageUpload::file_
    // Error: type "SharedPtr<File>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned PackageUpload::fragment_", "uint fragment", offsetof(PackageUpload, fragment_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned PackageUpload::totalFragments_", "uint totalFragments", offsetof(PackageUpload, totalFragments_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_PackageUpload
        REGISTER_MEMBERS_MANUAL_PART_PackageUpload();
    #endif
}

// struct RemoteEvent | File: ../Network/Connection.h
void CollectMembers_RemoteEvent(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned RemoteEvent::senderID_", "uint senderID", offsetof(RemoteEvent, senderID_)));
    members.fields_.Push(RegisterObjectPropertyArgs("StringHash RemoteEvent::eventType_", "StringHash eventType", offsetof(RemoteEvent, eventType_)));
    members.fields_.Push(RegisterObjectPropertyArgs("VariantMap RemoteEvent::eventData_", "VariantMap eventData", offsetof(RemoteEvent, eventData_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RemoteEvent::inOrder_", "bool inOrder", offsetof(RemoteEvent, inOrder_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_RemoteEvent
        REGISTER_MEMBERS_MANUAL_PART_RemoteEvent();
    #endif
}

#endif // def URHO3D_NETWORK

} // namespace Urho3D
