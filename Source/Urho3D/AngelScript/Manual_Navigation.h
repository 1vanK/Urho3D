//
// Copyright (c) 2008-2020 the Urho3D project.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#pragma once

#ifdef URHO3D_NAVIGATION

#include "../Navigation/CrowdAgent.h"
#include "../Navigation/CrowdManager.h"
#include "../Navigation/DynamicNavigationMesh.h"
#include "../Navigation/NavigationMesh.h"

namespace Urho3D
{

// virtual PODVector<unsigned char> NavigationMesh::GetTileData(const IntVector2& tile) const | File: ../Navigation/NavigationMesh.h
VectorBuffer NavigationMesh_GetTileData(const IntVector2& tile, const NavigationMesh* ptr);

// virtual bool NavigationMesh::AddTile(const PODVector<unsigned char>& tileData) | File: ../Navigation/NavigationMesh.h
bool NavigationMesh_AddTile(const VectorBuffer& tileData, NavigationMesh* ptr);

// Vector3 NavigationMesh::FindNearestPoint(const Vector3& point, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = nullptr, dtPolyRef* nearestRef = nullptr) | File: ../Navigation/NavigationMesh.h
Vector3 NavigationMesh_FindNearestPoint(const Vector3& point, const Vector3& extents, NavigationMesh* ptr);

// Vector3 NavigationMesh::GetRandomPoint(const dtQueryFilter* filter = nullptr, dtPolyRef* randomRef = nullptr) | File: ../Navigation/NavigationMesh.h
Vector3 NavigationMesh_GetRandomPoint(NavigationMesh* ptr);

// Vector3 NavigationMesh::GetRandomPointInCircle(const Vector3& center, float radius, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = nullptr, dtPolyRef* randomRef = nullptr) | File: ../Navigation/NavigationMesh.h
Vector3 NavigationMesh_GetRandomPointInCircle(const Vector3& center, float radius, const Vector3& extents, NavigationMesh* ptr);

// float NavigationMesh::GetDistanceToWall(const Vector3& point, float radius, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = nullptr, Vector3* hitPos = nullptr, Vector3* hitNormal = nullptr) | File: ../Navigation/NavigationMesh.h
float NavigationMesh_GetDistanceToWall(const Vector3& point, float radius, const Vector3& extents, NavigationMesh* ptr);

// Vector3 NavigationMesh::Raycast(const Vector3& start, const Vector3& end, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = nullptr, Vector3* hitNormal = nullptr) | File: ../Navigation/NavigationMesh.h
Vector3 NavigationMesh_Raycast(const Vector3& start, const Vector3& end, const Vector3& extents, NavigationMesh* ptr);

// Vector3 NavigationMesh::MoveAlongSurface(const Vector3& start, const Vector3& end, const Vector3& extents = Vector3::ONE, int maxVisited = 3, const dtQueryFilter* filter = nullptr)  | File: ../Navigation/NavigationMesh.h
Vector3 NavigationMesh_MoveAlongSurface(const Vector3& start, const Vector3& end, const Vector3& extents, int maxVisited, NavigationMesh* ptr);

// void NavigationMesh::FindPath(PODVector<Vector3>& dest, const Vector3& start, const Vector3& end, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = nullptr) | File: ../Navigation/NavigationMesh.h
CScriptArray* NavigationMesh_FindPath(const Vector3& start, const Vector3& end, const Vector3& extents, NavigationMesh* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_NavigationMesh() \
    members.methods_.Push(RegisterObjectMethodArgs("virtual PODVector<unsigned char> NavigationMesh::GetTileData(const IntVector2& tile) const", "VectorBuffer GetTileData(const IntVector2&) const", AS_FUNCTION_OBJLAST(NavigationMesh_GetTileData), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("virtual bool NavigationMesh::AddTile(const PODVector<unsigned char>& tileData)", "bool AddTile(const VectorBuffer&in) const", AS_FUNCTION_OBJLAST(NavigationMesh_AddTile), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 NavigationMesh::FindNearestPoint(const Vector3& point, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = nullptr, dtPolyRef* nearestRef = nullptr)", "Vector3 FindNearestPoint(const Vector3&in, const Vector3&in = Vector3::ONE)", AS_FUNCTION_OBJLAST(NavigationMesh_FindNearestPoint), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 NavigationMesh::GetRandomPoint(const dtQueryFilter* filter = nullptr, dtPolyRef* randomRef = nullptr)", "Vector3 GetRandomPoint()", AS_FUNCTION_OBJLAST(NavigationMesh_GetRandomPoint), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 NavigationMesh::GetRandomPointInCircle(const Vector3& center, float radius, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = nullptr, dtPolyRef* randomRef = nullptr)", "Vector3 GetRandomPointInCircle(const Vector3&in, float, const Vector3&in = Vector3::ONE)", AS_FUNCTION_OBJLAST(NavigationMesh_GetRandomPointInCircle), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("float NavigationMesh::GetDistanceToWall(const Vector3& point, float radius, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = nullptr, Vector3* hitPos = nullptr, Vector3* hitNormal = nullptr)", "float GetDistanceToWall(const Vector3&in, float, const Vector3&in = Vector3::ONE)", AS_FUNCTION_OBJLAST(NavigationMesh_GetDistanceToWall), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 NavigationMesh::Raycast(const Vector3& start, const Vector3& end, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = nullptr, Vector3* hitNormal = nullptr)", "Vector3 Raycast(const Vector3&in, const Vector3&in, const Vector3&in = Vector3::ONE)", AS_FUNCTION_OBJLAST(NavigationMesh_Raycast), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 NavigationMesh::MoveAlongSurface(const Vector3& start, const Vector3& end, const Vector3& extents = Vector3::ONE, int maxVisited = 3, const dtQueryFilter* filter = nullptr)", "Vector3 MoveAlongSurface(const Vector3&in, const Vector3&in, const Vector3&in = Vector3::ONE, int = 3)", AS_FUNCTION_OBJLAST(NavigationMesh_MoveAlongSurface), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void NavigationMesh::FindPath(PODVector<Vector3>& dest, const Vector3& start, const Vector3& end, const Vector3& extents = Vector3::ONE, const dtQueryFilter* filter = nullptr)", "Array<Vector3>@ FindPath(const Vector3&in, const Vector3&in, const Vector3&in extents = Vector3::ONE)", AS_FUNCTION_OBJLAST(NavigationMesh_FindPath), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// PODVector<unsigned char> DynamicNavigationMesh::GetTileData(const IntVector2& tile) const override | File: ../Navigation/DynamicNavigationMesh.h
VectorBuffer DynamicNavigationMesh_GetTileData(const IntVector2& tile, const DynamicNavigationMesh* ptr);

// bool DynamicNavigationMesh::AddTile(const PODVector<unsigned char>& tileData) override | File: ../Navigation/DynamicNavigationMesh.h
bool DynamicNavigationMesh_AddTile(const VectorBuffer& tileData, DynamicNavigationMesh* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_DynamicNavigationMesh() \
    members.methods_.Push(RegisterObjectMethodArgs("PODVector<unsigned char> DynamicNavigationMesh::GetTileData(const IntVector2& tile) const override", "VectorBuffer GetTileData(const IntVector2&) const", AS_FUNCTION_OBJLAST(DynamicNavigationMesh_GetTileData), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool DynamicNavigationMesh::AddTile(const PODVector<unsigned char>& tileData) override", "bool AddTile(const VectorBuffer&in) const", AS_FUNCTION_OBJLAST(DynamicNavigationMesh_AddTile), AS_CALL_CDECL_OBJLAST)); \

// ========================================================================================

// Vector3 CrowdManager::GetRandomPoint(int queryFilterType, dtPolyRef* randomRef = nullptr) | File: ../Navigation/CrowdManager.h
Vector3 CrowdManager_GetRandomPoint(int queryFilterType, CrowdManager* crowdManager);

// Vector3 CrowdManager::GetRandomPointInCircle(const Vector3& center, float radius, int queryFilterType, dtPolyRef* randomRef = nullptr) | File: ../Navigation/CrowdManager.h
Vector3 CrowdManager_RandomPointInCircle(const Vector3& center, float radius, int queryFilterType, CrowdManager* manager);

// Vector3 CrowdManager::FindNearestPoint(const Vector3& point, int queryFilterType, dtPolyRef* nearestRef = nullptr) | File: ../Navigation/CrowdManager.h
Vector3 CrowdManager_FindNearestPoint(const Vector3& point, int queryFilterType, CrowdManager* ptr);

// float CrowdManager::GetDistanceToWall(const Vector3& point, float radius, int queryFilterType, Vector3* hitPos = nullptr, Vector3* hitNormal = nullptr) | File: ../Navigation/CrowdManager.h
float CrowdManager_GetDistanceToWall(const Vector3& point, float radius, int queryFilterType, CrowdManager* ptr);

// Vector3 CrowdManager::Raycast(const Vector3& start, const Vector3& end, int queryFilterType, Vector3* hitNormal = nullptr) | File: ../Navigation/CrowdManager.h
Vector3 CrowdManager_Raycast(const Vector3& start, const Vector3& end, int queryFilterType, CrowdManager* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_CrowdManager() \
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 CrowdManager::GetRandomPoint(int queryFilterType, dtPolyRef* randomRef = nullptr)", "Vector3 GetRandomPoint(int)", AS_FUNCTION_OBJLAST(CrowdManager_GetRandomPoint), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 CrowdManager::GetRandomPointInCircle(const Vector3& center, float radius, int queryFilterType, dtPolyRef* randomRef = nullptr)", "Vector3 GetRandomPointInCircle(const Vector3&in, float, int)", AS_FUNCTION_OBJLAST(CrowdManager_RandomPointInCircle), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 CrowdManager::FindNearestPoint(const Vector3& point, int queryFilterType, dtPolyRef* nearestRef = nullptr)", "Vector3 FindNearestPoint(const Vector3&in, int)", AS_FUNCTION_OBJLAST(CrowdManager_FindNearestPoint), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("float CrowdManager::GetDistanceToWall(const Vector3& point, float radius, int queryFilterType, Vector3* hitPos = nullptr, Vector3* hitNormal = nullptr)", "float GetDistanceToWall(const Vector3&in, float, int)", AS_FUNCTION_OBJLAST(CrowdManager_GetDistanceToWall), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 CrowdManager::Raycast(const Vector3& start, const Vector3& end, int queryFilterType, Vector3* hitNormal = nullptr)", "Vector3 Raycast(const Vector3&in, const Vector3&in, int)", AS_FUNCTION_OBJLAST(CrowdManager_Raycast), AS_CALL_CDECL_OBJLAST));

}

#endif // def URHO3D_NAVIGATION
