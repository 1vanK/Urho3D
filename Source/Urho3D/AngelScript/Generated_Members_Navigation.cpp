// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

#ifdef URHO3D_NAVIGATION

// class CrowdAgent | File: ../Navigation/CrowdAgent.h
void CollectMembers_CrowdAgent(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(methods, "virtual void Component::OnSetEnabled()");
    Remove(methods, "virtual void Serializable::ApplyAttributes()");

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(CrowdAgent, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(CrowdAgent, OnSetEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::DrawDebugGeometry(bool depthTest)", "void DrawDebugGeometry(bool)", AS_METHODPR(CrowdAgent, DrawDebugGeometry, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(CrowdAgent, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetTargetPosition(const Vector3& position)", "void SetTargetPosition(const Vector3&in)", AS_METHODPR(CrowdAgent, SetTargetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetTargetPosition(const Vector3& position)", "void set_targetPosition(const Vector3&in)", AS_METHODPR(CrowdAgent, SetTargetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetTargetVelocity(const Vector3& velocity)", "void SetTargetVelocity(const Vector3&in)", AS_METHODPR(CrowdAgent, SetTargetVelocity, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetTargetVelocity(const Vector3& velocity)", "void set_targetVelocity(const Vector3&in)", AS_METHODPR(CrowdAgent, SetTargetVelocity, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::ResetTarget()", "void ResetTarget()", AS_METHODPR(CrowdAgent, ResetTarget, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetUpdateNodePosition(bool unodepos)", "void SetUpdateNodePosition(bool)", AS_METHODPR(CrowdAgent, SetUpdateNodePosition, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetUpdateNodePosition(bool unodepos)", "void set_updateNodePosition(bool)", AS_METHODPR(CrowdAgent, SetUpdateNodePosition, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetMaxAccel(float maxAccel)", "void SetMaxAccel(float)", AS_METHODPR(CrowdAgent, SetMaxAccel, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetMaxAccel(float maxAccel)", "void set_maxAccel(float)", AS_METHODPR(CrowdAgent, SetMaxAccel, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetMaxSpeed(float maxSpeed)", "void SetMaxSpeed(float)", AS_METHODPR(CrowdAgent, SetMaxSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetMaxSpeed(float maxSpeed)", "void set_maxSpeed(float)", AS_METHODPR(CrowdAgent, SetMaxSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetRadius(float radius)", "void SetRadius(float)", AS_METHODPR(CrowdAgent, SetRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetRadius(float radius)", "void set_radius(float)", AS_METHODPR(CrowdAgent, SetRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetHeight(float height)", "void SetHeight(float)", AS_METHODPR(CrowdAgent, SetHeight, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetHeight(float height)", "void set_height(float)", AS_METHODPR(CrowdAgent, SetHeight, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetQueryFilterType(unsigned queryFilterType)", "void SetQueryFilterType(uint)", AS_METHODPR(CrowdAgent, SetQueryFilterType, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetQueryFilterType(unsigned queryFilterType)", "void set_queryFilterType(uint)", AS_METHODPR(CrowdAgent, SetQueryFilterType, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetObstacleAvoidanceType(unsigned obstacleAvoidanceType)", "void SetObstacleAvoidanceType(uint)", AS_METHODPR(CrowdAgent, SetObstacleAvoidanceType, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetObstacleAvoidanceType(unsigned obstacleAvoidanceType)", "void set_obstacleAvoidanceType(uint)", AS_METHODPR(CrowdAgent, SetObstacleAvoidanceType, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetNavigationQuality(NavigationQuality val)", "void SetNavigationQuality(NavigationQuality)", AS_METHODPR(CrowdAgent, SetNavigationQuality, (NavigationQuality), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetNavigationQuality(NavigationQuality val)", "void set_navigationQuality(NavigationQuality)", AS_METHODPR(CrowdAgent, SetNavigationQuality, (NavigationQuality), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetNavigationPushiness(NavigationPushiness val)", "void SetNavigationPushiness(NavigationPushiness)", AS_METHODPR(CrowdAgent, SetNavigationPushiness, (NavigationPushiness), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdAgent::SetNavigationPushiness(NavigationPushiness val)", "void set_navigationPushiness(NavigationPushiness)", AS_METHODPR(CrowdAgent, SetNavigationPushiness, (NavigationPushiness), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 CrowdAgent::GetPosition() const", "Vector3 GetPosition() const", AS_METHODPR(CrowdAgent, GetPosition, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 CrowdAgent::GetPosition() const", "Vector3 get_position() const", AS_METHODPR(CrowdAgent, GetPosition, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 CrowdAgent::GetDesiredVelocity() const", "Vector3 GetDesiredVelocity() const", AS_METHODPR(CrowdAgent, GetDesiredVelocity, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 CrowdAgent::GetDesiredVelocity() const", "Vector3 get_desiredVelocity() const", AS_METHODPR(CrowdAgent, GetDesiredVelocity, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 CrowdAgent::GetActualVelocity() const", "Vector3 GetActualVelocity() const", AS_METHODPR(CrowdAgent, GetActualVelocity, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 CrowdAgent::GetActualVelocity() const", "Vector3 get_actualVelocity() const", AS_METHODPR(CrowdAgent, GetActualVelocity, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& CrowdAgent::GetTargetPosition() const", "const Vector3& GetTargetPosition() const", AS_METHODPR(CrowdAgent, GetTargetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& CrowdAgent::GetTargetPosition() const", "const Vector3& get_targetPosition() const", AS_METHODPR(CrowdAgent, GetTargetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& CrowdAgent::GetTargetVelocity() const", "const Vector3& GetTargetVelocity() const", AS_METHODPR(CrowdAgent, GetTargetVelocity, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& CrowdAgent::GetTargetVelocity() const", "const Vector3& get_targetVelocity() const", AS_METHODPR(CrowdAgent, GetTargetVelocity, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("CrowdAgentRequestedTarget CrowdAgent::GetRequestedTargetType() const", "CrowdAgentRequestedTarget GetRequestedTargetType() const", AS_METHODPR(CrowdAgent, GetRequestedTargetType, () const, CrowdAgentRequestedTarget), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("CrowdAgentRequestedTarget CrowdAgent::GetRequestedTargetType() const", "CrowdAgentRequestedTarget get_requestedTargetType() const", AS_METHODPR(CrowdAgent, GetRequestedTargetType, () const, CrowdAgentRequestedTarget), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("CrowdAgentState CrowdAgent::GetAgentState() const", "CrowdAgentState GetAgentState() const", AS_METHODPR(CrowdAgent, GetAgentState, () const, CrowdAgentState), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("CrowdAgentState CrowdAgent::GetAgentState() const", "CrowdAgentState get_agentState() const", AS_METHODPR(CrowdAgent, GetAgentState, () const, CrowdAgentState), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("CrowdAgentTargetState CrowdAgent::GetTargetState() const", "CrowdAgentTargetState GetTargetState() const", AS_METHODPR(CrowdAgent, GetTargetState, () const, CrowdAgentTargetState), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("CrowdAgentTargetState CrowdAgent::GetTargetState() const", "CrowdAgentTargetState get_targetState() const", AS_METHODPR(CrowdAgent, GetTargetState, () const, CrowdAgentTargetState), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CrowdAgent::GetUpdateNodePosition() const", "bool GetUpdateNodePosition() const", AS_METHODPR(CrowdAgent, GetUpdateNodePosition, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CrowdAgent::GetUpdateNodePosition() const", "bool get_updateNodePosition() const", AS_METHODPR(CrowdAgent, GetUpdateNodePosition, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int CrowdAgent::GetAgentCrowdId() const", "int GetAgentCrowdId() const", AS_METHODPR(CrowdAgent, GetAgentCrowdId, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdAgent::GetMaxAccel() const", "float GetMaxAccel() const", AS_METHODPR(CrowdAgent, GetMaxAccel, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdAgent::GetMaxAccel() const", "float get_maxAccel() const", AS_METHODPR(CrowdAgent, GetMaxAccel, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdAgent::GetMaxSpeed() const", "float GetMaxSpeed() const", AS_METHODPR(CrowdAgent, GetMaxSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdAgent::GetMaxSpeed() const", "float get_maxSpeed() const", AS_METHODPR(CrowdAgent, GetMaxSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdAgent::GetRadius() const", "float GetRadius() const", AS_METHODPR(CrowdAgent, GetRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdAgent::GetRadius() const", "float get_radius() const", AS_METHODPR(CrowdAgent, GetRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdAgent::GetHeight() const", "float GetHeight() const", AS_METHODPR(CrowdAgent, GetHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdAgent::GetHeight() const", "float get_height() const", AS_METHODPR(CrowdAgent, GetHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdAgent::GetQueryFilterType() const", "uint GetQueryFilterType() const", AS_METHODPR(CrowdAgent, GetQueryFilterType, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdAgent::GetQueryFilterType() const", "uint get_queryFilterType() const", AS_METHODPR(CrowdAgent, GetQueryFilterType, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdAgent::GetObstacleAvoidanceType() const", "uint GetObstacleAvoidanceType() const", AS_METHODPR(CrowdAgent, GetObstacleAvoidanceType, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdAgent::GetObstacleAvoidanceType() const", "uint get_obstacleAvoidanceType() const", AS_METHODPR(CrowdAgent, GetObstacleAvoidanceType, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("NavigationQuality CrowdAgent::GetNavigationQuality() const", "NavigationQuality GetNavigationQuality() const", AS_METHODPR(CrowdAgent, GetNavigationQuality, () const, NavigationQuality), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("NavigationQuality CrowdAgent::GetNavigationQuality() const", "NavigationQuality get_navigationQuality() const", AS_METHODPR(CrowdAgent, GetNavigationQuality, () const, NavigationQuality), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("NavigationPushiness CrowdAgent::GetNavigationPushiness() const", "NavigationPushiness GetNavigationPushiness() const", AS_METHODPR(CrowdAgent, GetNavigationPushiness, () const, NavigationPushiness), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("NavigationPushiness CrowdAgent::GetNavigationPushiness() const", "NavigationPushiness get_navigationPushiness() const", AS_METHODPR(CrowdAgent, GetNavigationPushiness, () const, NavigationPushiness), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CrowdAgent::HasRequestedTarget() const", "bool HasRequestedTarget() const", AS_METHODPR(CrowdAgent, HasRequestedTarget, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CrowdAgent::HasRequestedTarget() const", "bool get_requestedTarget() const", AS_METHODPR(CrowdAgent, HasRequestedTarget, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CrowdAgent::HasArrived() const", "bool HasArrived() const", AS_METHODPR(CrowdAgent, HasArrived, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CrowdAgent::HasArrived() const", "bool get_arrived() const", AS_METHODPR(CrowdAgent, HasArrived, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CrowdAgent::IsInCrowd() const", "bool IsInCrowd() const", AS_METHODPR(CrowdAgent, IsInCrowd, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CrowdAgent::IsInCrowd() const", "bool get_inCrowd() const", AS_METHODPR(CrowdAgent, IsInCrowd, () const, bool), AS_CALL_THISCALL));

    // static void CrowdAgent::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_CrowdAgent
        REGISTER_MEMBER_MANUAL_PART_CrowdAgent();
    #endif
}

// PODVector<CrowdAgent*> CrowdManager::GetAgents(Node* node=nullptr, bool inCrowdFilter=true) const
#ifdef URHO3D_NAVIGATION
// PODVector<CrowdAgent*> CrowdManager::GetAgents(Node* node=nullptr, bool inCrowdFilter=true) const | File: ../Navigation/CrowdManager.h
static CScriptArray* CrowdManager_GetAgents_Node_bool(CrowdManager* ptr, Node* node, bool inCrowdFilter)
{
    PODVector<CrowdAgent*> result = ptr->GetAgents(node, inCrowdFilter);
    return VectorToHandleArray(result, "Array<CrowdAgent@>");
}
#endif


// class CrowdManager | File: ../Navigation/CrowdManager.h
void CollectMembers_CrowdManager(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(methods, "virtual void Serializable::ApplyAttributes()");

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    // Vector3 CrowdManager::FindNearestPoint(const Vector3& point, int queryFilterType, dtPolyRef* nearestRef=nullptr)
    // Error: type "dtPolyRef*" can not automatically bind
    // void CrowdManager::FindPath(PODVector<Vector3>& dest, const Vector3& start, const Vector3& end, int queryFilterType)
    // Error: type "PODVector<Vector3>&" can not automatically bind
    // float CrowdManager::GetDistanceToWall(const Vector3& point, float radius, int queryFilterType, Vector3* hitPos=nullptr, Vector3* hitNormal=nullptr)
    // Error: type "Vector3*" can not automatically bind
    // VariantVector CrowdManager::GetObstacleAvoidanceTypesAttr() const
    // Error: type "VariantVector" can not automatically bind
    // VariantVector CrowdManager::GetQueryFilterTypesAttr() const
    // Error: type "VariantVector" can not automatically bind
    // Vector3 CrowdManager::GetRandomPoint(int queryFilterType, dtPolyRef* randomRef=nullptr)
    // Error: type "dtPolyRef*" can not automatically bind
    // Vector3 CrowdManager::GetRandomPointInCircle(const Vector3& center, float radius, int queryFilterType, dtPolyRef* randomRef=nullptr)
    // Error: type "dtPolyRef*" can not automatically bind
    // Vector3 CrowdManager::Raycast(const Vector3& start, const Vector3& end, int queryFilterType, Vector3* hitNormal=nullptr)
    // Error: type "Vector3*" can not automatically bind
    // void CrowdManager::SetObstacleAvoidanceTypesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
    // void CrowdManager::SetQueryFilterTypesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void CrowdManager::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(CrowdManager, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(CrowdManager, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::DrawDebugGeometry(bool depthTest)", "void DrawDebugGeometry(bool)", AS_METHODPR(CrowdManager, DrawDebugGeometry, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetCrowdTarget(const Vector3& position, Node* node=nullptr)", "void SetCrowdTarget(const Vector3&in, Node@+ = null)", AS_METHODPR(CrowdManager, SetCrowdTarget, (const Vector3&, Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetCrowdVelocity(const Vector3& velocity, Node* node=nullptr)", "void SetCrowdVelocity(const Vector3&in, Node@+ = null)", AS_METHODPR(CrowdManager, SetCrowdVelocity, (const Vector3&, Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::ResetCrowdTarget(Node* node=nullptr)", "void ResetCrowdTarget(Node@+ = null)", AS_METHODPR(CrowdManager, ResetCrowdTarget, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetMaxAgents(unsigned maxAgents)", "void SetMaxAgents(uint)", AS_METHODPR(CrowdManager, SetMaxAgents, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetMaxAgents(unsigned maxAgents)", "void set_maxAgents(uint)", AS_METHODPR(CrowdManager, SetMaxAgents, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetMaxAgentRadius(float maxAgentRadius)", "void SetMaxAgentRadius(float)", AS_METHODPR(CrowdManager, SetMaxAgentRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetMaxAgentRadius(float maxAgentRadius)", "void set_maxAgentRadius(float)", AS_METHODPR(CrowdManager, SetMaxAgentRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetNavigationMesh(NavigationMesh* navMesh)", "void SetNavigationMesh(NavigationMesh@+)", AS_METHODPR(CrowdManager, SetNavigationMesh, (NavigationMesh*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetNavigationMesh(NavigationMesh* navMesh)", "void set_navMesh(NavigationMesh@+)", AS_METHODPR(CrowdManager, SetNavigationMesh, (NavigationMesh*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetIncludeFlags(unsigned queryFilterType, unsigned short flags)", "void SetIncludeFlags(uint, uint16)", AS_METHODPR(CrowdManager, SetIncludeFlags, (unsigned, unsigned short), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetExcludeFlags(unsigned queryFilterType, unsigned short flags)", "void SetExcludeFlags(uint, uint16)", AS_METHODPR(CrowdManager, SetExcludeFlags, (unsigned, unsigned short), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetAreaCost(unsigned queryFilterType, unsigned areaID, float cost)", "void SetAreaCost(uint, uint, float)", AS_METHODPR(CrowdManager, SetAreaCost, (unsigned, unsigned, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CrowdManager::SetObstacleAvoidanceParams(unsigned obstacleAvoidanceType, const CrowdObstacleAvoidanceParams& params)", "void SetObstacleAvoidanceParams(uint, const CrowdObstacleAvoidanceParams&in)", AS_METHODPR(CrowdManager, SetObstacleAvoidanceParams, (unsigned, const CrowdObstacleAvoidanceParams&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("PODVector<CrowdAgent*> CrowdManager::GetAgents(Node* node=nullptr, bool inCrowdFilter=true) const", "Array<CrowdAgent@>@ GetAgents(Node@+ = null, bool = true) const", AS_FUNCTION_OBJFIRST(CrowdManager_GetAgents_Node_bool), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("Vector3 CrowdManager::MoveAlongSurface(const Vector3& start, const Vector3& end, int queryFilterType, int maxVisited=3)", "Vector3 MoveAlongSurface(const Vector3&in, const Vector3&in, int, int = 3)", AS_METHODPR(CrowdManager, MoveAlongSurface, (const Vector3&, const Vector3&, int, int), Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdManager::GetMaxAgents() const", "uint GetMaxAgents() const", AS_METHODPR(CrowdManager, GetMaxAgents, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdManager::GetMaxAgents() const", "uint get_maxAgents() const", AS_METHODPR(CrowdManager, GetMaxAgents, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdManager::GetMaxAgentRadius() const", "float GetMaxAgentRadius() const", AS_METHODPR(CrowdManager, GetMaxAgentRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdManager::GetMaxAgentRadius() const", "float get_maxAgentRadius() const", AS_METHODPR(CrowdManager, GetMaxAgentRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("NavigationMesh* CrowdManager::GetNavigationMesh() const", "NavigationMesh@+ GetNavigationMesh() const", AS_METHODPR(CrowdManager, GetNavigationMesh, () const, NavigationMesh*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("NavigationMesh* CrowdManager::GetNavigationMesh() const", "NavigationMesh@+ get_navMesh() const", AS_METHODPR(CrowdManager, GetNavigationMesh, () const, NavigationMesh*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdManager::GetNumQueryFilterTypes() const", "uint GetNumQueryFilterTypes() const", AS_METHODPR(CrowdManager, GetNumQueryFilterTypes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdManager::GetNumQueryFilterTypes() const", "uint get_numQueryFilterTypes() const", AS_METHODPR(CrowdManager, GetNumQueryFilterTypes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdManager::GetNumAreas(unsigned queryFilterType) const", "uint GetNumAreas(uint) const", AS_METHODPR(CrowdManager, GetNumAreas, (unsigned) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdManager::GetNumAreas(unsigned queryFilterType) const", "uint get_numAreas(uint) const", AS_METHODPR(CrowdManager, GetNumAreas, (unsigned) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned short CrowdManager::GetIncludeFlags(unsigned queryFilterType) const", "uint16 GetIncludeFlags(uint) const", AS_METHODPR(CrowdManager, GetIncludeFlags, (unsigned) const, unsigned short), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned short CrowdManager::GetExcludeFlags(unsigned queryFilterType) const", "uint16 GetExcludeFlags(uint) const", AS_METHODPR(CrowdManager, GetExcludeFlags, (unsigned) const, unsigned short), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CrowdManager::GetAreaCost(unsigned queryFilterType, unsigned areaID) const", "float GetAreaCost(uint, uint) const", AS_METHODPR(CrowdManager, GetAreaCost, (unsigned, unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdManager::GetNumObstacleAvoidanceTypes() const", "uint GetNumObstacleAvoidanceTypes() const", AS_METHODPR(CrowdManager, GetNumObstacleAvoidanceTypes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CrowdManager::GetNumObstacleAvoidanceTypes() const", "uint get_numObstacleAvoidanceTypes() const", AS_METHODPR(CrowdManager, GetNumObstacleAvoidanceTypes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const CrowdObstacleAvoidanceParams& CrowdManager::GetObstacleAvoidanceParams(unsigned obstacleAvoidanceType) const", "const CrowdObstacleAvoidanceParams& GetObstacleAvoidanceParams(uint) const", AS_METHODPR(CrowdManager, GetObstacleAvoidanceParams, (unsigned) const, const CrowdObstacleAvoidanceParams&), AS_CALL_THISCALL));

    // static void CrowdManager::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_CrowdManager
        REGISTER_MEMBER_MANUAL_PART_CrowdManager();
    #endif
}

// struct CrowdObstacleAvoidanceParams | File: ../Navigation/CrowdManager.h
void CollectMembers_CrowdObstacleAvoidanceParams(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    fields.Push(RegisterObjectPropertyArgs("float CrowdObstacleAvoidanceParams::velBias", "float velBias", offsetof(CrowdObstacleAvoidanceParams, velBias)));
    fields.Push(RegisterObjectPropertyArgs("float CrowdObstacleAvoidanceParams::weightDesVel", "float weightDesVel", offsetof(CrowdObstacleAvoidanceParams, weightDesVel)));
    fields.Push(RegisterObjectPropertyArgs("float CrowdObstacleAvoidanceParams::weightCurVel", "float weightCurVel", offsetof(CrowdObstacleAvoidanceParams, weightCurVel)));
    fields.Push(RegisterObjectPropertyArgs("float CrowdObstacleAvoidanceParams::weightSide", "float weightSide", offsetof(CrowdObstacleAvoidanceParams, weightSide)));
    fields.Push(RegisterObjectPropertyArgs("float CrowdObstacleAvoidanceParams::weightToi", "float weightToi", offsetof(CrowdObstacleAvoidanceParams, weightToi)));
    fields.Push(RegisterObjectPropertyArgs("float CrowdObstacleAvoidanceParams::horizTime", "float horizTime", offsetof(CrowdObstacleAvoidanceParams, horizTime)));
    fields.Push(RegisterObjectPropertyArgs("unsigned char CrowdObstacleAvoidanceParams::gridSize", "uint8 gridSize", offsetof(CrowdObstacleAvoidanceParams, gridSize)));
    fields.Push(RegisterObjectPropertyArgs("unsigned char CrowdObstacleAvoidanceParams::adaptiveDivs", "uint8 adaptiveDivs", offsetof(CrowdObstacleAvoidanceParams, adaptiveDivs)));
    fields.Push(RegisterObjectPropertyArgs("unsigned char CrowdObstacleAvoidanceParams::adaptiveRings", "uint8 adaptiveRings", offsetof(CrowdObstacleAvoidanceParams, adaptiveRings)));
    fields.Push(RegisterObjectPropertyArgs("unsigned char CrowdObstacleAvoidanceParams::adaptiveDepth", "uint8 adaptiveDepth", offsetof(CrowdObstacleAvoidanceParams, adaptiveDepth)));

    #ifdef REGISTER_MEMBER_MANUAL_PART_CrowdObstacleAvoidanceParams
        REGISTER_MEMBER_MANUAL_PART_CrowdObstacleAvoidanceParams();
    #endif
}

// struct DynamicNavBuildData | File: ../Navigation/NavBuildData.h
void CollectMembers_DynamicNavBuildData(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // dtTileCacheContourSet* DynamicNavBuildData::contourSet_
    // Not registered because pointer
    // dtTileCachePolyMesh* DynamicNavBuildData::polyMesh_
    // Not registered because pointer
    // rcHeightfieldLayerSet* DynamicNavBuildData::heightFieldLayers_
    // Not registered because pointer
    // dtTileCacheAlloc* DynamicNavBuildData::alloc_
    // Not registered because pointer

    #ifdef REGISTER_MEMBER_MANUAL_PART_DynamicNavBuildData
        REGISTER_MEMBER_MANUAL_PART_DynamicNavBuildData();
    #endif
}

// class DynamicNavigationMesh | File: ../Navigation/DynamicNavigationMesh.h
void CollectMembers_DynamicNavigationMesh(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_NavigationMesh(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual PODVector<unsigned char> NavigationMesh::GetNavigationDataAttr() const");
    Remove(methods, "virtual PODVector<unsigned char> NavigationMesh::GetTileData(const IntVector2& tile) const");
    Remove(methods, "virtual bool NavigationMesh::AddTile(const PODVector<unsigned char>& tileData)");
    Remove(methods, "virtual bool NavigationMesh::Allocate(const BoundingBox& boundingBox, unsigned maxTiles)");
    Remove(methods, "virtual bool NavigationMesh::Build()");
    Remove(methods, "virtual bool NavigationMesh::Build(const BoundingBox& boundingBox)");
    Remove(methods, "virtual bool NavigationMesh::Build(const IntVector2& from, const IntVector2& to)");
    Remove(methods, "virtual void NavigationMesh::RemoveAllTiles()");
    Remove(methods, "virtual void NavigationMesh::RemoveTile(const IntVector2& tile)");
    Remove(methods, "virtual void NavigationMesh::SetNavigationDataAttr(const PODVector<unsigned char>& value)");
    Remove(methods, "void NavigationMesh::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override");
    Remove(methods, "void NavigationMesh::DrawDebugGeometry(bool depthTest)");

    Remove(staticMethods, "static void NavigationMesh::RegisterObject(Context* context)");

    // bool DynamicNavigationMesh::AddTile(const PODVector<unsigned char>& tileData) override
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // PODVector<unsigned char> DynamicNavigationMesh::GetNavigationDataAttr() const override
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // PODVector<unsigned char> DynamicNavigationMesh::GetTileData(const IntVector2& tile) const override
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // void DynamicNavigationMesh::SetNavigationDataAttr(const PODVector<unsigned char>& value) override
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool DynamicNavigationMesh::Allocate(const BoundingBox& boundingBox, unsigned maxTiles) override", "bool Allocate(const BoundingBox&in, uint)", AS_METHODPR(DynamicNavigationMesh, Allocate, (const BoundingBox&, unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool DynamicNavigationMesh::Build() override", "bool Build()", AS_METHODPR(DynamicNavigationMesh, Build, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool DynamicNavigationMesh::Build(const BoundingBox& boundingBox) override", "bool Build(const BoundingBox&in)", AS_METHODPR(DynamicNavigationMesh, Build, (const BoundingBox&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool DynamicNavigationMesh::Build(const IntVector2& from, const IntVector2& to) override", "bool Build(const IntVector2&in, const IntVector2&in)", AS_METHODPR(DynamicNavigationMesh, Build, (const IntVector2&, const IntVector2&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool DynamicNavigationMesh::IsObstacleInTile(Obstacle* obstacle, const IntVector2& tile) const", "bool IsObstacleInTile(Obstacle@+, const IntVector2&in) const", AS_METHODPR(DynamicNavigationMesh, IsObstacleInTile, (Obstacle*, const IntVector2&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DynamicNavigationMesh::RemoveTile(const IntVector2& tile) override", "void RemoveTile(const IntVector2&in)", AS_METHODPR(DynamicNavigationMesh, RemoveTile, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DynamicNavigationMesh::RemoveAllTiles() override", "void RemoveAllTiles()", AS_METHODPR(DynamicNavigationMesh, RemoveAllTiles, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DynamicNavigationMesh::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(DynamicNavigationMesh, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DynamicNavigationMesh::DrawDebugGeometry(bool depthTest)", "void DrawDebugGeometry(bool)", AS_METHODPR(DynamicNavigationMesh, DrawDebugGeometry, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DynamicNavigationMesh::SetMaxObstacles(unsigned maxObstacles)", "void SetMaxObstacles(uint)", AS_METHODPR(DynamicNavigationMesh, SetMaxObstacles, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DynamicNavigationMesh::SetMaxObstacles(unsigned maxObstacles)", "void set_maxObstacles(uint)", AS_METHODPR(DynamicNavigationMesh, SetMaxObstacles, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DynamicNavigationMesh::SetMaxLayers(unsigned maxLayers)", "void SetMaxLayers(uint)", AS_METHODPR(DynamicNavigationMesh, SetMaxLayers, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DynamicNavigationMesh::SetMaxLayers(unsigned maxLayers)", "void set_maxLayers(uint)", AS_METHODPR(DynamicNavigationMesh, SetMaxLayers, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned DynamicNavigationMesh::GetMaxObstacles() const", "uint GetMaxObstacles() const", AS_METHODPR(DynamicNavigationMesh, GetMaxObstacles, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned DynamicNavigationMesh::GetMaxObstacles() const", "uint get_maxObstacles() const", AS_METHODPR(DynamicNavigationMesh, GetMaxObstacles, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned DynamicNavigationMesh::GetMaxLayers() const", "uint GetMaxLayers() const", AS_METHODPR(DynamicNavigationMesh, GetMaxLayers, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned DynamicNavigationMesh::GetMaxLayers() const", "uint get_maxLayers() const", AS_METHODPR(DynamicNavigationMesh, GetMaxLayers, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DynamicNavigationMesh::SetDrawObstacles(bool enable)", "void SetDrawObstacles(bool)", AS_METHODPR(DynamicNavigationMesh, SetDrawObstacles, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DynamicNavigationMesh::SetDrawObstacles(bool enable)", "void set_drawObstacles(bool)", AS_METHODPR(DynamicNavigationMesh, SetDrawObstacles, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool DynamicNavigationMesh::GetDrawObstacles() const", "bool GetDrawObstacles() const", AS_METHODPR(DynamicNavigationMesh, GetDrawObstacles, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool DynamicNavigationMesh::GetDrawObstacles() const", "bool get_drawObstacles() const", AS_METHODPR(DynamicNavigationMesh, GetDrawObstacles, () const, bool), AS_CALL_THISCALL));

    // static void DynamicNavigationMesh::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_DynamicNavigationMesh
        REGISTER_MEMBER_MANUAL_PART_DynamicNavigationMesh();
    #endif
}

// class NavArea | File: ../Navigation/NavArea.h
void CollectMembers_NavArea(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void NavArea::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(NavArea, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned NavArea::GetAreaID() const", "uint GetAreaID() const", AS_METHODPR(NavArea, GetAreaID, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned NavArea::GetAreaID() const", "uint get_areaID() const", AS_METHODPR(NavArea, GetAreaID, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavArea::SetAreaID(unsigned newID)", "void SetAreaID(uint)", AS_METHODPR(NavArea, SetAreaID, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavArea::SetAreaID(unsigned newID)", "void set_areaID(uint)", AS_METHODPR(NavArea, SetAreaID, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox NavArea::GetBoundingBox() const", "BoundingBox GetBoundingBox() const", AS_METHODPR(NavArea, GetBoundingBox, () const, BoundingBox), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox NavArea::GetBoundingBox() const", "BoundingBox get_boundingBox() const", AS_METHODPR(NavArea, GetBoundingBox, () const, BoundingBox), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavArea::SetBoundingBox(const BoundingBox& bnds)", "void SetBoundingBox(const BoundingBox&in)", AS_METHODPR(NavArea, SetBoundingBox, (const BoundingBox&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavArea::SetBoundingBox(const BoundingBox& bnds)", "void set_boundingBox(const BoundingBox&in)", AS_METHODPR(NavArea, SetBoundingBox, (const BoundingBox&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox NavArea::GetWorldBoundingBox() const", "BoundingBox GetWorldBoundingBox() const", AS_METHODPR(NavArea, GetWorldBoundingBox, () const, BoundingBox), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox NavArea::GetWorldBoundingBox() const", "BoundingBox get_worldBoundingBox() const", AS_METHODPR(NavArea, GetWorldBoundingBox, () const, BoundingBox), AS_CALL_THISCALL));

    // static void NavArea::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_NavArea
        REGISTER_MEMBER_MANUAL_PART_NavArea();
    #endif
}

// struct NavAreaStub | File: ../Navigation/NavBuildData.h
void CollectMembers_NavAreaStub(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    fields.Push(RegisterObjectPropertyArgs("BoundingBox NavAreaStub::bounds_", "BoundingBox bounds", offsetof(NavAreaStub, bounds_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned char NavAreaStub::areaID_", "uint8 areaID", offsetof(NavAreaStub, areaID_)));

    #ifdef REGISTER_MEMBER_MANUAL_PART_NavAreaStub
        REGISTER_MEMBER_MANUAL_PART_NavAreaStub();
    #endif
}

// struct NavBuildData | File: ../Navigation/NavBuildData.h
void CollectMembers_NavBuildData(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // PODVector<Vector3> NavBuildData::vertices_
    // Error: type "PODVector<Vector3>" can not automatically bind
    // PODVector<int> NavBuildData::indices_
    // Error: type "PODVector<int>" can not automatically bind
    // PODVector<Vector3> NavBuildData::offMeshVertices_
    // Error: type "PODVector<Vector3>" can not automatically bind
    // PODVector<float> NavBuildData::offMeshRadii_
    // Error: type "PODVector<float>" can not automatically bind
    // PODVector<unsigned short> NavBuildData::offMeshFlags_
    // Error: type "PODVector<unsigned short>" can not automatically bind
    // PODVector<unsigned char> NavBuildData::offMeshAreas_
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // PODVector<unsigned char> NavBuildData::offMeshDir_
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // rcContext* NavBuildData::ctx_
    // Not registered because pointer
    // rcHeightfield* NavBuildData::heightField_
    // Not registered because pointer
    // rcCompactHeightfield* NavBuildData::compactHeightField_
    // Not registered because pointer
    // PODVector<NavAreaStub> NavBuildData::navAreas_
    // Error: type "PODVector<NavAreaStub>" can not automatically bind

    fields.Push(RegisterObjectPropertyArgs("BoundingBox NavBuildData::worldBoundingBox_", "BoundingBox worldBoundingBox", offsetof(NavBuildData, worldBoundingBox_)));

    #ifdef REGISTER_MEMBER_MANUAL_PART_NavBuildData
        REGISTER_MEMBER_MANUAL_PART_NavBuildData();
    #endif
}

// class Navigable | File: ../Navigation/Navigable.h
void CollectMembers_Navigable(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void Navigable::SetRecursive(bool enable)", "void SetRecursive(bool)", AS_METHODPR(Navigable, SetRecursive, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Navigable::SetRecursive(bool enable)", "void set_recursive(bool)", AS_METHODPR(Navigable, SetRecursive, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Navigable::IsRecursive() const", "bool IsRecursive() const", AS_METHODPR(Navigable, IsRecursive, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Navigable::IsRecursive() const", "bool get_recursive() const", AS_METHODPR(Navigable, IsRecursive, () const, bool), AS_CALL_THISCALL));

    // static void Navigable::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_Navigable
        REGISTER_MEMBER_MANUAL_PART_Navigable();
    #endif
}

// struct NavigationGeometryInfo | File: ../Navigation/NavigationMesh.h
void CollectMembers_NavigationGeometryInfo(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // Component* NavigationGeometryInfo::component_
    // Not registered because pointer

    fields.Push(RegisterObjectPropertyArgs("unsigned NavigationGeometryInfo::lodLevel_", "uint lodLevel", offsetof(NavigationGeometryInfo, lodLevel_)));
    fields.Push(RegisterObjectPropertyArgs("Matrix3x4 NavigationGeometryInfo::transform_", "Matrix3x4 transform", offsetof(NavigationGeometryInfo, transform_)));
    fields.Push(RegisterObjectPropertyArgs("BoundingBox NavigationGeometryInfo::boundingBox_", "BoundingBox boundingBox", offsetof(NavigationGeometryInfo, boundingBox_)));

    #ifdef REGISTER_MEMBER_MANUAL_PART_NavigationGeometryInfo
        REGISTER_MEMBER_MANUAL_PART_NavigationGeometryInfo();
    #endif
}

// class NavigationMesh | File: ../Navigation/NavigationMesh.h
void CollectMembers_NavigationMesh(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    // virtual bool NavigationMesh::AddTile(const PODVector<unsigned char>& tileData)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // Vector3 NavigationMesh::FindNearestPoint(const Vector3& point, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, dtPolyRef* nearestRef=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind
    // void NavigationMesh::FindPath(PODVector<NavigationPathPoint>& dest, const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr)
    // Error: type "PODVector<NavigationPathPoint>&" can not automatically bind
    // void NavigationMesh::FindPath(PODVector<Vector3>& dest, const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr)
    // Error: type "PODVector<Vector3>&" can not automatically bind
    // float NavigationMesh::GetDistanceToWall(const Vector3& point, float radius, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, Vector3* hitPos=nullptr, Vector3* hitNormal=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind
    // virtual PODVector<unsigned char> NavigationMesh::GetNavigationDataAttr() const
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // Vector3 NavigationMesh::GetRandomPoint(const dtQueryFilter* filter=nullptr, dtPolyRef* randomRef=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind
    // Vector3 NavigationMesh::GetRandomPointInCircle(const Vector3& center, float radius, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, dtPolyRef* randomRef=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind
    // virtual PODVector<unsigned char> NavigationMesh::GetTileData(const IntVector2& tile) const
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // Vector3 NavigationMesh::MoveAlongSurface(const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, int maxVisited=3, const dtQueryFilter* filter=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind
    // Vector3 NavigationMesh::Raycast(const Vector3& start, const Vector3& end, const Vector3& extents=Vector3::ONE, const dtQueryFilter* filter=nullptr, Vector3* hitNormal=nullptr)
    // Error: type "const dtQueryFilter*" can not automatically bind
    // virtual void NavigationMesh::SetNavigationDataAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(NavigationMesh, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetTileSize(int size)", "void SetTileSize(int)", AS_METHODPR(NavigationMesh, SetTileSize, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetTileSize(int size)", "void set_tileSize(int)", AS_METHODPR(NavigationMesh, SetTileSize, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetCellSize(float size)", "void SetCellSize(float)", AS_METHODPR(NavigationMesh, SetCellSize, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetCellSize(float size)", "void set_cellSize(float)", AS_METHODPR(NavigationMesh, SetCellSize, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetCellHeight(float height)", "void SetCellHeight(float)", AS_METHODPR(NavigationMesh, SetCellHeight, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetCellHeight(float height)", "void set_cellHeight(float)", AS_METHODPR(NavigationMesh, SetCellHeight, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetAgentHeight(float height)", "void SetAgentHeight(float)", AS_METHODPR(NavigationMesh, SetAgentHeight, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetAgentHeight(float height)", "void set_agentHeight(float)", AS_METHODPR(NavigationMesh, SetAgentHeight, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetAgentRadius(float radius)", "void SetAgentRadius(float)", AS_METHODPR(NavigationMesh, SetAgentRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetAgentRadius(float radius)", "void set_agentRadius(float)", AS_METHODPR(NavigationMesh, SetAgentRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetAgentMaxClimb(float maxClimb)", "void SetAgentMaxClimb(float)", AS_METHODPR(NavigationMesh, SetAgentMaxClimb, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetAgentMaxClimb(float maxClimb)", "void set_agentMaxClimb(float)", AS_METHODPR(NavigationMesh, SetAgentMaxClimb, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetAgentMaxSlope(float maxSlope)", "void SetAgentMaxSlope(float)", AS_METHODPR(NavigationMesh, SetAgentMaxSlope, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetAgentMaxSlope(float maxSlope)", "void set_agentMaxSlope(float)", AS_METHODPR(NavigationMesh, SetAgentMaxSlope, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetRegionMinSize(float size)", "void SetRegionMinSize(float)", AS_METHODPR(NavigationMesh, SetRegionMinSize, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetRegionMinSize(float size)", "void set_regionMinSize(float)", AS_METHODPR(NavigationMesh, SetRegionMinSize, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetRegionMergeSize(float size)", "void SetRegionMergeSize(float)", AS_METHODPR(NavigationMesh, SetRegionMergeSize, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetRegionMergeSize(float size)", "void set_regionMergeSize(float)", AS_METHODPR(NavigationMesh, SetRegionMergeSize, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetEdgeMaxLength(float length)", "void SetEdgeMaxLength(float)", AS_METHODPR(NavigationMesh, SetEdgeMaxLength, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetEdgeMaxLength(float length)", "void set_edgeMaxLength(float)", AS_METHODPR(NavigationMesh, SetEdgeMaxLength, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetEdgeMaxError(float error)", "void SetEdgeMaxError(float)", AS_METHODPR(NavigationMesh, SetEdgeMaxError, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetEdgeMaxError(float error)", "void set_edgeMaxError(float)", AS_METHODPR(NavigationMesh, SetEdgeMaxError, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetDetailSampleDistance(float distance)", "void SetDetailSampleDistance(float)", AS_METHODPR(NavigationMesh, SetDetailSampleDistance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetDetailSampleDistance(float distance)", "void set_detailSampleDistance(float)", AS_METHODPR(NavigationMesh, SetDetailSampleDistance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetDetailSampleMaxError(float error)", "void SetDetailSampleMaxError(float)", AS_METHODPR(NavigationMesh, SetDetailSampleMaxError, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetDetailSampleMaxError(float error)", "void set_detailSampleMaxError(float)", AS_METHODPR(NavigationMesh, SetDetailSampleMaxError, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetPadding(const Vector3& padding)", "void SetPadding(const Vector3&in)", AS_METHODPR(NavigationMesh, SetPadding, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetPadding(const Vector3& padding)", "void set_padding(const Vector3&in)", AS_METHODPR(NavigationMesh, SetPadding, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetAreaCost(unsigned areaID, float cost)", "void SetAreaCost(uint, float)", AS_METHODPR(NavigationMesh, SetAreaCost, (unsigned, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool NavigationMesh::Allocate(const BoundingBox& boundingBox, unsigned maxTiles)", "bool Allocate(const BoundingBox&in, uint)", AS_METHODPR(NavigationMesh, Allocate, (const BoundingBox&, unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool NavigationMesh::Build()", "bool Build()", AS_METHODPR(NavigationMesh, Build, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool NavigationMesh::Build(const BoundingBox& boundingBox)", "bool Build(const BoundingBox&in)", AS_METHODPR(NavigationMesh, Build, (const BoundingBox&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool NavigationMesh::Build(const IntVector2& from, const IntVector2& to)", "bool Build(const IntVector2&in, const IntVector2&in)", AS_METHODPR(NavigationMesh, Build, (const IntVector2&, const IntVector2&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void NavigationMesh::RemoveTile(const IntVector2& tile)", "void RemoveTile(const IntVector2&in)", AS_METHODPR(NavigationMesh, RemoveTile, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void NavigationMesh::RemoveAllTiles()", "void RemoveAllTiles()", AS_METHODPR(NavigationMesh, RemoveAllTiles, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool NavigationMesh::HasTile(const IntVector2& tile) const", "bool HasTile(const IntVector2&in) const", AS_METHODPR(NavigationMesh, HasTile, (const IntVector2&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox NavigationMesh::GetTileBoundingBox(const IntVector2& tile) const", "BoundingBox GetTileBoundingBox(const IntVector2&in) const", AS_METHODPR(NavigationMesh, GetTileBoundingBox, (const IntVector2&) const, BoundingBox), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 NavigationMesh::GetTileIndex(const Vector3& position) const", "IntVector2 GetTileIndex(const Vector3&in) const", AS_METHODPR(NavigationMesh, GetTileIndex, (const Vector3&) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::DrawDebugGeometry(bool depthTest)", "void DrawDebugGeometry(bool)", AS_METHODPR(NavigationMesh, DrawDebugGeometry, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String NavigationMesh::GetMeshName() const", "String GetMeshName() const", AS_METHODPR(NavigationMesh, GetMeshName, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetMeshName(const String& newName)", "void SetMeshName(const String&in)", AS_METHODPR(NavigationMesh, SetMeshName, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int NavigationMesh::GetTileSize() const", "int GetTileSize() const", AS_METHODPR(NavigationMesh, GetTileSize, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int NavigationMesh::GetTileSize() const", "int get_tileSize() const", AS_METHODPR(NavigationMesh, GetTileSize, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetCellSize() const", "float GetCellSize() const", AS_METHODPR(NavigationMesh, GetCellSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetCellSize() const", "float get_cellSize() const", AS_METHODPR(NavigationMesh, GetCellSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetCellHeight() const", "float GetCellHeight() const", AS_METHODPR(NavigationMesh, GetCellHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetCellHeight() const", "float get_cellHeight() const", AS_METHODPR(NavigationMesh, GetCellHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetAgentHeight() const", "float GetAgentHeight() const", AS_METHODPR(NavigationMesh, GetAgentHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetAgentHeight() const", "float get_agentHeight() const", AS_METHODPR(NavigationMesh, GetAgentHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetAgentRadius() const", "float GetAgentRadius() const", AS_METHODPR(NavigationMesh, GetAgentRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetAgentRadius() const", "float get_agentRadius() const", AS_METHODPR(NavigationMesh, GetAgentRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetAgentMaxClimb() const", "float GetAgentMaxClimb() const", AS_METHODPR(NavigationMesh, GetAgentMaxClimb, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetAgentMaxClimb() const", "float get_agentMaxClimb() const", AS_METHODPR(NavigationMesh, GetAgentMaxClimb, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetAgentMaxSlope() const", "float GetAgentMaxSlope() const", AS_METHODPR(NavigationMesh, GetAgentMaxSlope, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetAgentMaxSlope() const", "float get_agentMaxSlope() const", AS_METHODPR(NavigationMesh, GetAgentMaxSlope, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetRegionMinSize() const", "float GetRegionMinSize() const", AS_METHODPR(NavigationMesh, GetRegionMinSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetRegionMinSize() const", "float get_regionMinSize() const", AS_METHODPR(NavigationMesh, GetRegionMinSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetRegionMergeSize() const", "float GetRegionMergeSize() const", AS_METHODPR(NavigationMesh, GetRegionMergeSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetRegionMergeSize() const", "float get_regionMergeSize() const", AS_METHODPR(NavigationMesh, GetRegionMergeSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetEdgeMaxLength() const", "float GetEdgeMaxLength() const", AS_METHODPR(NavigationMesh, GetEdgeMaxLength, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetEdgeMaxLength() const", "float get_edgeMaxLength() const", AS_METHODPR(NavigationMesh, GetEdgeMaxLength, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetEdgeMaxError() const", "float GetEdgeMaxError() const", AS_METHODPR(NavigationMesh, GetEdgeMaxError, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetEdgeMaxError() const", "float get_edgeMaxError() const", AS_METHODPR(NavigationMesh, GetEdgeMaxError, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetDetailSampleDistance() const", "float GetDetailSampleDistance() const", AS_METHODPR(NavigationMesh, GetDetailSampleDistance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetDetailSampleDistance() const", "float get_detailSampleDistance() const", AS_METHODPR(NavigationMesh, GetDetailSampleDistance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetDetailSampleMaxError() const", "float GetDetailSampleMaxError() const", AS_METHODPR(NavigationMesh, GetDetailSampleMaxError, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetDetailSampleMaxError() const", "float get_detailSampleMaxError() const", AS_METHODPR(NavigationMesh, GetDetailSampleMaxError, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& NavigationMesh::GetPadding() const", "const Vector3& GetPadding() const", AS_METHODPR(NavigationMesh, GetPadding, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& NavigationMesh::GetPadding() const", "const Vector3& get_padding() const", AS_METHODPR(NavigationMesh, GetPadding, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float NavigationMesh::GetAreaCost(unsigned areaID) const", "float GetAreaCost(uint) const", AS_METHODPR(NavigationMesh, GetAreaCost, (unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool NavigationMesh::IsInitialized() const", "bool IsInitialized() const", AS_METHODPR(NavigationMesh, IsInitialized, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool NavigationMesh::IsInitialized() const", "bool get_initialized() const", AS_METHODPR(NavigationMesh, IsInitialized, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const BoundingBox& NavigationMesh::GetBoundingBox() const", "const BoundingBox& GetBoundingBox() const", AS_METHODPR(NavigationMesh, GetBoundingBox, () const, const BoundingBox&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const BoundingBox& NavigationMesh::GetBoundingBox() const", "const BoundingBox& get_boundingBox() const", AS_METHODPR(NavigationMesh, GetBoundingBox, () const, const BoundingBox&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox NavigationMesh::GetWorldBoundingBox() const", "BoundingBox GetWorldBoundingBox() const", AS_METHODPR(NavigationMesh, GetWorldBoundingBox, () const, BoundingBox), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox NavigationMesh::GetWorldBoundingBox() const", "BoundingBox get_worldBoundingBox() const", AS_METHODPR(NavigationMesh, GetWorldBoundingBox, () const, BoundingBox), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 NavigationMesh::GetNumTiles() const", "IntVector2 GetNumTiles() const", AS_METHODPR(NavigationMesh, GetNumTiles, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 NavigationMesh::GetNumTiles() const", "IntVector2 get_numTiles() const", AS_METHODPR(NavigationMesh, GetNumTiles, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetPartitionType(NavmeshPartitionType partitionType)", "void SetPartitionType(NavmeshPartitionType)", AS_METHODPR(NavigationMesh, SetPartitionType, (NavmeshPartitionType), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetPartitionType(NavmeshPartitionType partitionType)", "void set_partitionType(NavmeshPartitionType)", AS_METHODPR(NavigationMesh, SetPartitionType, (NavmeshPartitionType), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("NavmeshPartitionType NavigationMesh::GetPartitionType() const", "NavmeshPartitionType GetPartitionType() const", AS_METHODPR(NavigationMesh, GetPartitionType, () const, NavmeshPartitionType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("NavmeshPartitionType NavigationMesh::GetPartitionType() const", "NavmeshPartitionType get_partitionType() const", AS_METHODPR(NavigationMesh, GetPartitionType, () const, NavmeshPartitionType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetDrawOffMeshConnections(bool enable)", "void SetDrawOffMeshConnections(bool)", AS_METHODPR(NavigationMesh, SetDrawOffMeshConnections, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetDrawOffMeshConnections(bool enable)", "void set_drawOffMeshConnections(bool)", AS_METHODPR(NavigationMesh, SetDrawOffMeshConnections, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool NavigationMesh::GetDrawOffMeshConnections() const", "bool GetDrawOffMeshConnections() const", AS_METHODPR(NavigationMesh, GetDrawOffMeshConnections, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool NavigationMesh::GetDrawOffMeshConnections() const", "bool get_drawOffMeshConnections() const", AS_METHODPR(NavigationMesh, GetDrawOffMeshConnections, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetDrawNavAreas(bool enable)", "void SetDrawNavAreas(bool)", AS_METHODPR(NavigationMesh, SetDrawNavAreas, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void NavigationMesh::SetDrawNavAreas(bool enable)", "void set_drawNavAreas(bool)", AS_METHODPR(NavigationMesh, SetDrawNavAreas, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool NavigationMesh::GetDrawNavAreas() const", "bool GetDrawNavAreas() const", AS_METHODPR(NavigationMesh, GetDrawNavAreas, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool NavigationMesh::GetDrawNavAreas() const", "bool get_drawNavAreas() const", AS_METHODPR(NavigationMesh, GetDrawNavAreas, () const, bool), AS_CALL_THISCALL));

    // static void NavigationMesh::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_NavigationMesh
        REGISTER_MEMBER_MANUAL_PART_NavigationMesh();
    #endif
}

// struct NavigationPathPoint | File: ../Navigation/NavigationMesh.h
void CollectMembers_NavigationPathPoint(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    fields.Push(RegisterObjectPropertyArgs("Vector3 NavigationPathPoint::position_", "Vector3 position", offsetof(NavigationPathPoint, position_)));
    fields.Push(RegisterObjectPropertyArgs("NavigationPathPointFlag NavigationPathPoint::flag_", "NavigationPathPointFlag flag", offsetof(NavigationPathPoint, flag_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned char NavigationPathPoint::areaID_", "uint8 areaID", offsetof(NavigationPathPoint, areaID_)));

    #ifdef REGISTER_MEMBER_MANUAL_PART_NavigationPathPoint
        REGISTER_MEMBER_MANUAL_PART_NavigationPathPoint();
    #endif
}

// class Obstacle | File: ../Navigation/Obstacle.h
void CollectMembers_Obstacle(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(methods, "virtual void Component::OnSetEnabled()");

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void Obstacle::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(Obstacle, OnSetEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Obstacle::GetHeight() const", "float GetHeight() const", AS_METHODPR(Obstacle, GetHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Obstacle::GetHeight() const", "float get_height() const", AS_METHODPR(Obstacle, GetHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Obstacle::SetHeight(float newHeight)", "void SetHeight(float)", AS_METHODPR(Obstacle, SetHeight, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Obstacle::SetHeight(float newHeight)", "void set_height(float)", AS_METHODPR(Obstacle, SetHeight, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Obstacle::GetRadius() const", "float GetRadius() const", AS_METHODPR(Obstacle, GetRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Obstacle::GetRadius() const", "float get_radius() const", AS_METHODPR(Obstacle, GetRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Obstacle::SetRadius(float newRadius)", "void SetRadius(float)", AS_METHODPR(Obstacle, SetRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Obstacle::SetRadius(float newRadius)", "void set_radius(float)", AS_METHODPR(Obstacle, SetRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Obstacle::GetObstacleID() const", "uint GetObstacleID() const", AS_METHODPR(Obstacle, GetObstacleID, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Obstacle::GetObstacleID() const", "uint get_obstacleId() const", AS_METHODPR(Obstacle, GetObstacleID, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Obstacle::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(Obstacle, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Obstacle::DrawDebugGeometry(bool depthTest)", "void DrawDebugGeometry(bool)", AS_METHODPR(Obstacle, DrawDebugGeometry, (bool), void), AS_CALL_THISCALL));

    // static void Obstacle::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_Obstacle
        REGISTER_MEMBER_MANUAL_PART_Obstacle();
    #endif
}

// class OffMeshConnection | File: ../Navigation/OffMeshConnection.h
void CollectMembers_OffMeshConnection(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(methods, "virtual void Serializable::ApplyAttributes()");

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(OffMeshConnection, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(OffMeshConnection, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::SetEndPoint(Node* node)", "void SetEndPoint(Node@+)", AS_METHODPR(OffMeshConnection, SetEndPoint, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::SetEndPoint(Node* node)", "void set_endPoint(Node@+)", AS_METHODPR(OffMeshConnection, SetEndPoint, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::SetRadius(float radius)", "void SetRadius(float)", AS_METHODPR(OffMeshConnection, SetRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::SetRadius(float radius)", "void set_radius(float)", AS_METHODPR(OffMeshConnection, SetRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::SetBidirectional(bool enabled)", "void SetBidirectional(bool)", AS_METHODPR(OffMeshConnection, SetBidirectional, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::SetBidirectional(bool enabled)", "void set_bidirectional(bool)", AS_METHODPR(OffMeshConnection, SetBidirectional, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::SetMask(unsigned newMask)", "void SetMask(uint)", AS_METHODPR(OffMeshConnection, SetMask, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::SetMask(unsigned newMask)", "void set_mask(uint)", AS_METHODPR(OffMeshConnection, SetMask, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::SetAreaID(unsigned newAreaID)", "void SetAreaID(uint)", AS_METHODPR(OffMeshConnection, SetAreaID, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void OffMeshConnection::SetAreaID(unsigned newAreaID)", "void set_areaID(uint)", AS_METHODPR(OffMeshConnection, SetAreaID, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* OffMeshConnection::GetEndPoint() const", "Node@+ GetEndPoint() const", AS_METHODPR(OffMeshConnection, GetEndPoint, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* OffMeshConnection::GetEndPoint() const", "Node@+ get_endPoint() const", AS_METHODPR(OffMeshConnection, GetEndPoint, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float OffMeshConnection::GetRadius() const", "float GetRadius() const", AS_METHODPR(OffMeshConnection, GetRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float OffMeshConnection::GetRadius() const", "float get_radius() const", AS_METHODPR(OffMeshConnection, GetRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool OffMeshConnection::IsBidirectional() const", "bool IsBidirectional() const", AS_METHODPR(OffMeshConnection, IsBidirectional, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool OffMeshConnection::IsBidirectional() const", "bool get_bidirectional() const", AS_METHODPR(OffMeshConnection, IsBidirectional, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned OffMeshConnection::GetMask() const", "uint GetMask() const", AS_METHODPR(OffMeshConnection, GetMask, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned OffMeshConnection::GetMask() const", "uint get_mask() const", AS_METHODPR(OffMeshConnection, GetMask, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned OffMeshConnection::GetAreaID() const", "uint GetAreaID() const", AS_METHODPR(OffMeshConnection, GetAreaID, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned OffMeshConnection::GetAreaID() const", "uint get_areaID() const", AS_METHODPR(OffMeshConnection, GetAreaID, () const, unsigned), AS_CALL_THISCALL));

    // static void OffMeshConnection::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_OffMeshConnection
        REGISTER_MEMBER_MANUAL_PART_OffMeshConnection();
    #endif
}

// struct SimpleNavBuildData | File: ../Navigation/NavBuildData.h
void CollectMembers_SimpleNavBuildData(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_NavBuildData(methods, staticMethods, fields, wrappedFields, staticFields);

    // rcContourSet* SimpleNavBuildData::contourSet_
    // Not registered because pointer
    // rcPolyMesh* SimpleNavBuildData::polyMesh_
    // Not registered because pointer
    // rcPolyMeshDetail* SimpleNavBuildData::polyMeshDetail_
    // Not registered because pointer

    #ifdef REGISTER_MEMBER_MANUAL_PART_SimpleNavBuildData
        REGISTER_MEMBER_MANUAL_PART_SimpleNavBuildData();
    #endif
}

#endif // def URHO3D_NAVIGATION

} // namespace Urho3D
