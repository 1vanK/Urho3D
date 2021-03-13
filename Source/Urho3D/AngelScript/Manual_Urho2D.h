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

#ifdef URHO3D_URHO2D

#include "../Urho2D/ParticleEffect2D.h"
#include "../Urho2D/TileMap2D.h"
#include "../Urho2D/PhysicsWorld2D.h"
#include "../Urho2D/CollisionPolygon2D.h"
#include "../Urho2D/CollisionChain2D.h"
#include "../Urho2D/RigidBody2D.h"

namespace Urho3D
{

// RigidBody2D* PhysicsRaycastResult2D::body_ | File: ../Urho2D/PhysicsWorld2D.h
RigidBody2D* PhysicsRaycastResult2D_GetBody(PhysicsRaycastResult2D* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_PhysicsRaycastResult2D() \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("RigidBody2D* PhysicsRaycastResult2D::body_", "RigidBody2D@+ get_body() const", AS_FUNCTION_OBJLAST(PhysicsRaycastResult2D_GetBody), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// void PhysicsWorld2D::Raycast(PODVector<PhysicsRaycastResult2D>& results, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask = M_MAX_UNSIGNED) | File: ../Urho2D/PhysicsWorld2D.h
CScriptArray* PhysicsWorld2D_Raycast(const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask, PhysicsWorld2D* ptr);

// void PhysicsWorld2D::RaycastSingle(PhysicsRaycastResult2D& result, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask = M_MAX_UNSIGNED) | File: ../Urho2D/PhysicsWorld2D.h
PhysicsRaycastResult2D PhysicsWorld2D_RaycastSingle(const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask, PhysicsWorld2D* ptr);

// void PhysicsWorld2D::GetRigidBodies(PODVector<RigidBody2D*>& results, const Rect& aabb, unsigned collisionMask = M_MAX_UNSIGNED) | File: ../Urho2D/PhysicsWorld2D.h
CScriptArray* PhysicsWorld2D_GetRigidBodies(const Rect& aabb, unsigned collisionMask, PhysicsWorld2D* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_PhysicsWorld2D() \
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::Raycast(PODVector<PhysicsRaycastResult2D>& results, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask = M_MAX_UNSIGNED)", "Array<PhysicsRaycastResult2D>@ Raycast(const Vector2&, const Vector2&, uint collisionMask = 0xffff)", AS_FUNCTION_OBJLAST(PhysicsWorld2D_Raycast), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::RaycastSingle(PhysicsRaycastResult2D& result, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask = M_MAX_UNSIGNED)", "PhysicsRaycastResult2D RaycastSingle(const Vector2&, const Vector2&, uint collisionMask = 0xffff)", AS_FUNCTION_OBJLAST(PhysicsWorld2D_RaycastSingle), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::GetRigidBodies(PODVector<RigidBody2D*>& results, const Rect& aabb, unsigned collisionMask = M_MAX_UNSIGNED)", "Array<RigidBody2D@>@ GetRigidBodies(const Rect&in, uint collisionMask = 0xffff)", AS_FUNCTION_OBJLAST(PhysicsWorld2D_GetRigidBodies), AS_CALL_CDECL_OBJLAST));

}

#endif // def URHO3D_URHO2D
