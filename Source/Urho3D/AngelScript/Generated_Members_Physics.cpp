// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

#ifdef URHO3D_PHYSICS

// struct CollisionGeometryData | File: ../Physics/CollisionShape.h
void CollectMembers_CollisionGeometryData(MemberCollection& members)
{
    CollectMembers_RefCounted(members);

    #ifdef REGISTER_MEMBERS_MANUAL_PART_CollisionGeometryData
        REGISTER_MEMBERS_MANUAL_PART_CollisionGeometryData();
    #endif
}

// class CollisionShape | File: ../Physics/CollisionShape.h
void CollectMembers_CollisionShape(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.methods_, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(members.methods_, "virtual void Component::OnSetEnabled()");
    Remove(members.methods_, "virtual void Serializable::ApplyAttributes()");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // btCollisionShape* CollisionShape::GetCollisionShape() const
    // Error: type "btCollisionShape*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(CollisionShape, ApplyAttributes, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(CollisionShape, OnSetEnabled, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(CollisionShape, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetBox(const Vector3& size, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetBox(const Vector3&in, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetBox, (const Vector3&, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetSphere(float diameter, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetSphere(float, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetSphere, (float, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetStaticPlane(const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetStaticPlane(const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetStaticPlane, (const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetCylinder(float diameter, float height, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetCylinder(float, float, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetCylinder, (float, float, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetCapsule(float diameter, float height, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetCapsule(float, float, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetCapsule, (float, float, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetCone(float diameter, float height, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetCone(float, float, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetCone, (float, float, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetTriangleMesh(Model* model, unsigned lodLevel = 0, const Vector3& scale = Vector3::ONE, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetTriangleMesh(Model@+, uint = 0, const Vector3&in = Vector3::ONE, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetTriangleMesh, (Model*, unsigned, const Vector3&, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetCustomTriangleMesh(CustomGeometry* custom, const Vector3& scale = Vector3::ONE, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetCustomTriangleMesh(CustomGeometry@+, const Vector3&in = Vector3::ONE, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetCustomTriangleMesh, (CustomGeometry*, const Vector3&, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetConvexHull(Model* model, unsigned lodLevel = 0, const Vector3& scale = Vector3::ONE, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetConvexHull(Model@+, uint = 0, const Vector3&in = Vector3::ONE, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetConvexHull, (Model*, unsigned, const Vector3&, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetCustomConvexHull(CustomGeometry* custom, const Vector3& scale = Vector3::ONE, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetCustomConvexHull(CustomGeometry@+, const Vector3&in = Vector3::ONE, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetCustomConvexHull, (CustomGeometry*, const Vector3&, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetGImpactMesh(Model* model, unsigned lodLevel = 0, const Vector3& scale = Vector3::ONE, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetGImpactMesh(Model@+, uint = 0, const Vector3&in = Vector3::ONE, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetGImpactMesh, (Model*, unsigned, const Vector3&, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetCustomGImpactMesh(CustomGeometry* custom, const Vector3& scale = Vector3::ONE, const Vector3& position = Vector3::ZERO, const Quaternion& rotation = Quaternion::IDENTITY)", "void SetCustomGImpactMesh(CustomGeometry@+, const Vector3&in = Vector3::ONE, const Vector3&in = Vector3::ZERO, const Quaternion&in = Quaternion::IDENTITY)", AS_METHODPR(CollisionShape, SetCustomGImpactMesh, (CustomGeometry*, const Vector3&, const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetTerrain(unsigned lodLevel = 0)", "void SetTerrain(uint = 0)", AS_METHODPR(CollisionShape, SetTerrain, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetShapeType(ShapeType type)", "void SetShapeType(ShapeType)", AS_METHODPR(CollisionShape, SetShapeType, (ShapeType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetShapeType(ShapeType type)", "void set_shapeType(ShapeType)", AS_METHODPR(CollisionShape, SetShapeType, (ShapeType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetSize(const Vector3& size)", "void SetSize(const Vector3&in)", AS_METHODPR(CollisionShape, SetSize, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetSize(const Vector3& size)", "void set_size(const Vector3&in)", AS_METHODPR(CollisionShape, SetSize, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetPosition(const Vector3& position)", "void SetPosition(const Vector3&in)", AS_METHODPR(CollisionShape, SetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetPosition(const Vector3& position)", "void set_position(const Vector3&in)", AS_METHODPR(CollisionShape, SetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetRotation(const Quaternion& rotation)", "void SetRotation(const Quaternion&in)", AS_METHODPR(CollisionShape, SetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetRotation(const Quaternion& rotation)", "void set_rotation(const Quaternion&in)", AS_METHODPR(CollisionShape, SetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetTransform(const Vector3& position, const Quaternion& rotation)", "void SetTransform(const Vector3&in, const Quaternion&in)", AS_METHODPR(CollisionShape, SetTransform, (const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetMargin(float margin)", "void SetMargin(float)", AS_METHODPR(CollisionShape, SetMargin, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetMargin(float margin)", "void set_margin(float)", AS_METHODPR(CollisionShape, SetMargin, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetModel(Model* model)", "void SetModel(Model@+)", AS_METHODPR(CollisionShape, SetModel, (Model*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetModel(Model* model)", "void set_model(Model@+)", AS_METHODPR(CollisionShape, SetModel, (Model*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetLodLevel(unsigned lodLevel)", "void SetLodLevel(uint)", AS_METHODPR(CollisionShape, SetLodLevel, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetLodLevel(unsigned lodLevel)", "void set_lodLevel(uint)", AS_METHODPR(CollisionShape, SetLodLevel, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CollisionGeometryData* CollisionShape::GetGeometryData() const", "CollisionGeometryData@+ GetGeometryData() const", AS_METHODPR(CollisionShape, GetGeometryData, () const, CollisionGeometryData*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("PhysicsWorld* CollisionShape::GetPhysicsWorld() const", "PhysicsWorld@+ GetPhysicsWorld() const", AS_METHODPR(CollisionShape, GetPhysicsWorld, () const, PhysicsWorld*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ShapeType CollisionShape::GetShapeType() const", "ShapeType GetShapeType() const", AS_METHODPR(CollisionShape, GetShapeType, () const, ShapeType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ShapeType CollisionShape::GetShapeType() const", "ShapeType get_shapeType() const", AS_METHODPR(CollisionShape, GetShapeType, () const, ShapeType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& CollisionShape::GetSize() const", "const Vector3& GetSize() const", AS_METHODPR(CollisionShape, GetSize, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& CollisionShape::GetSize() const", "const Vector3& get_size() const", AS_METHODPR(CollisionShape, GetSize, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& CollisionShape::GetPosition() const", "const Vector3& GetPosition() const", AS_METHODPR(CollisionShape, GetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& CollisionShape::GetPosition() const", "const Vector3& get_position() const", AS_METHODPR(CollisionShape, GetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& CollisionShape::GetRotation() const", "const Quaternion& GetRotation() const", AS_METHODPR(CollisionShape, GetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& CollisionShape::GetRotation() const", "const Quaternion& get_rotation() const", AS_METHODPR(CollisionShape, GetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float CollisionShape::GetMargin() const", "float GetMargin() const", AS_METHODPR(CollisionShape, GetMargin, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float CollisionShape::GetMargin() const", "float get_margin() const", AS_METHODPR(CollisionShape, GetMargin, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Model* CollisionShape::GetModel() const", "Model@+ GetModel() const", AS_METHODPR(CollisionShape, GetModel, () const, Model*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Model* CollisionShape::GetModel() const", "Model@+ get_model() const", AS_METHODPR(CollisionShape, GetModel, () const, Model*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned CollisionShape::GetLodLevel() const", "uint GetLodLevel() const", AS_METHODPR(CollisionShape, GetLodLevel, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned CollisionShape::GetLodLevel() const", "uint get_lodLevel() const", AS_METHODPR(CollisionShape, GetLodLevel, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("BoundingBox CollisionShape::GetWorldBoundingBox() const", "BoundingBox GetWorldBoundingBox() const", AS_METHODPR(CollisionShape, GetWorldBoundingBox, () const, BoundingBox), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("BoundingBox CollisionShape::GetWorldBoundingBox() const", "BoundingBox get_worldBoundingBox() const", AS_METHODPR(CollisionShape, GetWorldBoundingBox, () const, BoundingBox), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::NotifyRigidBody(bool updateMass = true)", "void NotifyRigidBody(bool = true)", AS_METHODPR(CollisionShape, NotifyRigidBody, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::SetModelAttr(const ResourceRef& value)", "void SetModelAttr(const ResourceRef&in)", AS_METHODPR(CollisionShape, SetModelAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef CollisionShape::GetModelAttr() const", "ResourceRef GetModelAttr() const", AS_METHODPR(CollisionShape, GetModelAttr, () const, ResourceRef), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CollisionShape::ReleaseShape()", "void ReleaseShape()", AS_METHODPR(CollisionShape, ReleaseShape, (), void), AS_CALL_THISCALL));

    // static void CollisionShape::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_CollisionShape
        REGISTER_MEMBERS_MANUAL_PART_CollisionShape();
    #endif
}

// class Constraint | File: ../Physics/Constraint.h
void CollectMembers_Constraint(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.methods_, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(members.methods_, "virtual void Component::GetDependencyNodes(PODVector<Node*>& dest)");
    Remove(members.methods_, "virtual void Component::OnSetEnabled()");
    Remove(members.methods_, "virtual void Serializable::ApplyAttributes()");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // btTypedConstraint* Constraint::GetConstraint() const
    // Error: type "btTypedConstraint*" can not automatically bind
    // void Constraint::GetDependencyNodes(PODVector<Node*>& dest) override
    // Error: type "PODVector<Node*>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(Constraint, ApplyAttributes, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(Constraint, OnSetEnabled, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(Constraint, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetConstraintType(ConstraintType type)", "void SetConstraintType(ConstraintType)", AS_METHODPR(Constraint, SetConstraintType, (ConstraintType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetConstraintType(ConstraintType type)", "void set_constraintType(ConstraintType)", AS_METHODPR(Constraint, SetConstraintType, (ConstraintType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetOtherBody(RigidBody* body)", "void SetOtherBody(RigidBody@+)", AS_METHODPR(Constraint, SetOtherBody, (RigidBody*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetOtherBody(RigidBody* body)", "void set_otherBody(RigidBody@+)", AS_METHODPR(Constraint, SetOtherBody, (RigidBody*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetPosition(const Vector3& position)", "void SetPosition(const Vector3&in)", AS_METHODPR(Constraint, SetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetPosition(const Vector3& position)", "void set_position(const Vector3&in)", AS_METHODPR(Constraint, SetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetRotation(const Quaternion& rotation)", "void SetRotation(const Quaternion&in)", AS_METHODPR(Constraint, SetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetRotation(const Quaternion& rotation)", "void set_rotation(const Quaternion&in)", AS_METHODPR(Constraint, SetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetAxis(const Vector3& axis)", "void SetAxis(const Vector3&in)", AS_METHODPR(Constraint, SetAxis, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetAxis(const Vector3& axis)", "void set_axis(const Vector3&in)", AS_METHODPR(Constraint, SetAxis, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetOtherPosition(const Vector3& position)", "void SetOtherPosition(const Vector3&in)", AS_METHODPR(Constraint, SetOtherPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetOtherPosition(const Vector3& position)", "void set_otherPosition(const Vector3&in)", AS_METHODPR(Constraint, SetOtherPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetOtherRotation(const Quaternion& rotation)", "void SetOtherRotation(const Quaternion&in)", AS_METHODPR(Constraint, SetOtherRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetOtherRotation(const Quaternion& rotation)", "void set_otherRotation(const Quaternion&in)", AS_METHODPR(Constraint, SetOtherRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetOtherAxis(const Vector3& axis)", "void SetOtherAxis(const Vector3&in)", AS_METHODPR(Constraint, SetOtherAxis, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetOtherAxis(const Vector3& axis)", "void set_otherAxis(const Vector3&in)", AS_METHODPR(Constraint, SetOtherAxis, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetWorldPosition(const Vector3& position)", "void SetWorldPosition(const Vector3&in)", AS_METHODPR(Constraint, SetWorldPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetWorldPosition(const Vector3& position)", "void set_worldPosition(const Vector3&in)", AS_METHODPR(Constraint, SetWorldPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetHighLimit(const Vector2& limit)", "void SetHighLimit(const Vector2&in)", AS_METHODPR(Constraint, SetHighLimit, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetHighLimit(const Vector2& limit)", "void set_highLimit(const Vector2&in)", AS_METHODPR(Constraint, SetHighLimit, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetLowLimit(const Vector2& limit)", "void SetLowLimit(const Vector2&in)", AS_METHODPR(Constraint, SetLowLimit, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetLowLimit(const Vector2& limit)", "void set_lowLimit(const Vector2&in)", AS_METHODPR(Constraint, SetLowLimit, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetERP(float erp)", "void SetERP(float)", AS_METHODPR(Constraint, SetERP, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetERP(float erp)", "void set_erp(float)", AS_METHODPR(Constraint, SetERP, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetCFM(float cfm)", "void SetCFM(float)", AS_METHODPR(Constraint, SetCFM, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetCFM(float cfm)", "void set_cfm(float)", AS_METHODPR(Constraint, SetCFM, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetDisableCollision(bool disable)", "void SetDisableCollision(bool)", AS_METHODPR(Constraint, SetDisableCollision, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::SetDisableCollision(bool disable)", "void set_disableCollision(bool)", AS_METHODPR(Constraint, SetDisableCollision, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("PhysicsWorld* Constraint::GetPhysicsWorld() const", "PhysicsWorld@+ GetPhysicsWorld() const", AS_METHODPR(Constraint, GetPhysicsWorld, () const, PhysicsWorld*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ConstraintType Constraint::GetConstraintType() const", "ConstraintType GetConstraintType() const", AS_METHODPR(Constraint, GetConstraintType, () const, ConstraintType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ConstraintType Constraint::GetConstraintType() const", "ConstraintType get_constraintType() const", AS_METHODPR(Constraint, GetConstraintType, () const, ConstraintType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RigidBody* Constraint::GetOwnBody() const", "RigidBody@+ GetOwnBody() const", AS_METHODPR(Constraint, GetOwnBody, () const, RigidBody*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RigidBody* Constraint::GetOwnBody() const", "RigidBody@+ get_ownBody() const", AS_METHODPR(Constraint, GetOwnBody, () const, RigidBody*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RigidBody* Constraint::GetOtherBody() const", "RigidBody@+ GetOtherBody() const", AS_METHODPR(Constraint, GetOtherBody, () const, RigidBody*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RigidBody* Constraint::GetOtherBody() const", "RigidBody@+ get_otherBody() const", AS_METHODPR(Constraint, GetOtherBody, () const, RigidBody*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Constraint::GetPosition() const", "const Vector3& GetPosition() const", AS_METHODPR(Constraint, GetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Constraint::GetPosition() const", "const Vector3& get_position() const", AS_METHODPR(Constraint, GetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& Constraint::GetRotation() const", "const Quaternion& GetRotation() const", AS_METHODPR(Constraint, GetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& Constraint::GetRotation() const", "const Quaternion& get_rotation() const", AS_METHODPR(Constraint, GetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Constraint::GetOtherPosition() const", "const Vector3& GetOtherPosition() const", AS_METHODPR(Constraint, GetOtherPosition, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Constraint::GetOtherPosition() const", "const Vector3& get_otherPosition() const", AS_METHODPR(Constraint, GetOtherPosition, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& Constraint::GetOtherRotation() const", "const Quaternion& GetOtherRotation() const", AS_METHODPR(Constraint, GetOtherRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& Constraint::GetOtherRotation() const", "const Quaternion& get_otherRotation() const", AS_METHODPR(Constraint, GetOtherRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 Constraint::GetWorldPosition() const", "Vector3 GetWorldPosition() const", AS_METHODPR(Constraint, GetWorldPosition, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 Constraint::GetWorldPosition() const", "Vector3 get_worldPosition() const", AS_METHODPR(Constraint, GetWorldPosition, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& Constraint::GetHighLimit() const", "const Vector2& GetHighLimit() const", AS_METHODPR(Constraint, GetHighLimit, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& Constraint::GetHighLimit() const", "const Vector2& get_highLimit() const", AS_METHODPR(Constraint, GetHighLimit, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& Constraint::GetLowLimit() const", "const Vector2& GetLowLimit() const", AS_METHODPR(Constraint, GetLowLimit, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& Constraint::GetLowLimit() const", "const Vector2& get_lowLimit() const", AS_METHODPR(Constraint, GetLowLimit, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Constraint::GetERP() const", "float GetERP() const", AS_METHODPR(Constraint, GetERP, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Constraint::GetERP() const", "float get_erp() const", AS_METHODPR(Constraint, GetERP, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Constraint::GetCFM() const", "float GetCFM() const", AS_METHODPR(Constraint, GetCFM, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Constraint::GetCFM() const", "float get_cfm() const", AS_METHODPR(Constraint, GetCFM, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Constraint::GetDisableCollision() const", "bool GetDisableCollision() const", AS_METHODPR(Constraint, GetDisableCollision, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Constraint::GetDisableCollision() const", "bool get_disableCollision() const", AS_METHODPR(Constraint, GetDisableCollision, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::ReleaseConstraint()", "void ReleaseConstraint()", AS_METHODPR(Constraint, ReleaseConstraint, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Constraint::ApplyFrames()", "void ApplyFrames()", AS_METHODPR(Constraint, ApplyFrames, (), void), AS_CALL_THISCALL));

    // static void Constraint::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Constraint
        REGISTER_MEMBERS_MANUAL_PART_Constraint();
    #endif
}

// void ConvexData::BuildHull(const PODVector<Vector3>& vertices)
#ifdef URHO3D_PHYSICS
// void ConvexData::BuildHull(const PODVector<Vector3>& vertices) | File: ../Physics/CollisionShape.h
static void ConvexData_BuildHull_PODVectorVector3(ConvexData* ptr, CScriptArray* vertices_conv)
{
    PODVector<Vector3> vertices = ArrayToPODVector<Vector3>(vertices_conv);
    ptr->BuildHull(vertices);
}
#endif


// struct ConvexData | File: ../Physics/CollisionShape.h
void CollectMembers_ConvexData(MemberCollection& members)
{
    CollectMembers_CollisionGeometryData(members);

    members.methods_.Push(RegisterObjectMethodArgs("void ConvexData::BuildHull(const PODVector<Vector3>& vertices)", "void BuildHull(Array<Vector3>@+)", AS_FUNCTION_OBJFIRST(ConvexData_BuildHull_PODVectorVector3), AS_CALL_CDECL_OBJFIRST));

    // SharedArrayPtr<Vector3> ConvexData::vertexData_
    // Error: type "SharedArrayPtr<Vector3>" can not automatically bind
    // SharedArrayPtr<unsigned> ConvexData::indexData_
    // Error: type "SharedArrayPtr<unsigned>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ConvexData::vertexCount_", "uint vertexCount", offsetof(ConvexData, vertexCount_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ConvexData::indexCount_", "uint indexCount", offsetof(ConvexData, indexCount_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ConvexData
        REGISTER_MEMBERS_MANUAL_PART_ConvexData();
    #endif
}

// struct DelayedWorldTransform | File: ../Physics/PhysicsWorld.h
void CollectMembers_DelayedWorldTransform(MemberCollection& members)
{
    // RigidBody* DelayedWorldTransform::rigidBody_
    // Not registered because pointer
    // RigidBody* DelayedWorldTransform::parentRigidBody_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 DelayedWorldTransform::worldPosition_", "Vector3 worldPosition", offsetof(DelayedWorldTransform, worldPosition_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Quaternion DelayedWorldTransform::worldRotation_", "Quaternion worldRotation", offsetof(DelayedWorldTransform, worldRotation_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_DelayedWorldTransform
        REGISTER_MEMBERS_MANUAL_PART_DelayedWorldTransform();
    #endif
}

// struct GImpactMeshData | File: ../Physics/CollisionShape.h
void CollectMembers_GImpactMeshData(MemberCollection& members)
{
    CollectMembers_CollisionGeometryData(members);

    // UniquePtr<TriangleMeshInterface> GImpactMeshData::meshInterface_
    // Error: type "UniquePtr<TriangleMeshInterface>" can not automatically bind

    #ifdef REGISTER_MEMBERS_MANUAL_PART_GImpactMeshData
        REGISTER_MEMBERS_MANUAL_PART_GImpactMeshData();
    #endif
}

// struct HeightfieldData | File: ../Physics/CollisionShape.h
void CollectMembers_HeightfieldData(MemberCollection& members)
{
    CollectMembers_CollisionGeometryData(members);

    // SharedArrayPtr<float> HeightfieldData::heightData_
    // Error: type "SharedArrayPtr<float>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 HeightfieldData::spacing_", "Vector3 spacing", offsetof(HeightfieldData, spacing_)));
    members.fields_.Push(RegisterObjectPropertyArgs("IntVector2 HeightfieldData::size_", "IntVector2 size", offsetof(HeightfieldData, size_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float HeightfieldData::minHeight_", "float minHeight", offsetof(HeightfieldData, minHeight_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float HeightfieldData::maxHeight_", "float maxHeight", offsetof(HeightfieldData, maxHeight_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_HeightfieldData
        REGISTER_MEMBERS_MANUAL_PART_HeightfieldData();
    #endif
}

// struct ManifoldPair | File: ../Physics/PhysicsWorld.h
void CollectMembers_ManifoldPair(MemberCollection& members)
{
    // btPersistentManifold* ManifoldPair::manifold_
    // Not registered because pointer
    // btPersistentManifold* ManifoldPair::flippedManifold_
    // Not registered because pointer

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ManifoldPair
        REGISTER_MEMBERS_MANUAL_PART_ManifoldPair();
    #endif
}

// struct PhysicsRaycastResult | File: ../Physics/PhysicsWorld.h
void CollectMembers_PhysicsRaycastResult(MemberCollection& members)
{
    // bool PhysicsRaycastResult::operator !=(const PhysicsRaycastResult& rhs) const
    // Only operator == is needed

    // RigidBody* PhysicsRaycastResult::body_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 PhysicsRaycastResult::position_", "Vector3 position", offsetof(PhysicsRaycastResult, position_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 PhysicsRaycastResult::normal_", "Vector3 normal", offsetof(PhysicsRaycastResult, normal_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float PhysicsRaycastResult::distance_", "float distance", offsetof(PhysicsRaycastResult, distance_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float PhysicsRaycastResult::hitFraction_", "float hitFraction", offsetof(PhysicsRaycastResult, hitFraction_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_PhysicsRaycastResult
        REGISTER_MEMBERS_MANUAL_PART_PhysicsRaycastResult();
    #endif
}

// class PhysicsWorld | File: ../Physics/PhysicsWorld.h
void CollectMembers_PhysicsWorld(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.methods_, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // void PhysicsWorld::ConvexCast(PhysicsRaycastResult& result, btCollisionShape* shape, const Vector3& startPos, const Quaternion& startRot, const Vector3& endPos, const Quaternion& endRot, unsigned collisionMask = M_MAX_UNSIGNED)
    // Error: type "btCollisionShape*" can not automatically bind
    // void PhysicsWorld::GetCollidingBodies(PODVector<RigidBody*>& result, const RigidBody* body)
    // Error: type "PODVector<RigidBody*>&" can not automatically bind
    // CollisionGeometryDataCache& PhysicsWorld::GetConvexCache()
    // Error: type "CollisionGeometryDataCache&" can not automatically bind
    // CollisionGeometryDataCache& PhysicsWorld::GetGImpactTrimeshCache()
    // Error: type "CollisionGeometryDataCache&" can not automatically bind
    // void PhysicsWorld::GetRigidBodies(PODVector<RigidBody*>& result, const BoundingBox& box, unsigned collisionMask = M_MAX_UNSIGNED)
    // Error: type "PODVector<RigidBody*>&" can not automatically bind
    // void PhysicsWorld::GetRigidBodies(PODVector<RigidBody*>& result, const RigidBody* body)
    // Error: type "PODVector<RigidBody*>&" can not automatically bind
    // void PhysicsWorld::GetRigidBodies(PODVector<RigidBody*>& result, const Sphere& sphere, unsigned collisionMask = M_MAX_UNSIGNED)
    // Error: type "PODVector<RigidBody*>&" can not automatically bind
    // CollisionGeometryDataCache& PhysicsWorld::GetTriMeshCache()
    // Error: type "CollisionGeometryDataCache&" can not automatically bind
    // btDiscreteDynamicsWorld* PhysicsWorld::GetWorld()
    // Error: type "btDiscreteDynamicsWorld*" can not automatically bind
    // void PhysicsWorld::Raycast(PODVector<PhysicsRaycastResult>& result, const Ray& ray, float maxDistance, unsigned collisionMask = M_MAX_UNSIGNED)
    // Error: type "PODVector<PhysicsRaycastResult>&" can not automatically bind
    // void PhysicsWorld::draw3dText(const btVector3& location, const char* textString) override
    // Error: type "const btVector3&" can not automatically bind
    // void PhysicsWorld::drawContactPoint(const btVector3& pointOnB, const btVector3& normalOnB, btScalar distance, int lifeTime, const btVector3& color) override
    // Error: type "const btVector3&" can not automatically bind
    // void PhysicsWorld::drawLine(const btVector3& from, const btVector3& to, const btVector3& color) override
    // Error: type "const btVector3&" can not automatically bind
    // bool PhysicsWorld::isVisible(const btVector3& aabbMin, const btVector3& aabbMax) override
    // Error: type "const btVector3&" can not automatically bind
    // void PhysicsWorld::reportErrorWarning(const char* warningString) override
    // Error: type "const char*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::setDebugMode(int debugMode) override", "void setDebugMode(int)", AS_METHODPR(PhysicsWorld, setDebugMode, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int PhysicsWorld::getDebugMode() const override", "int getDebugMode() const", AS_METHODPR(PhysicsWorld, getDebugMode, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(PhysicsWorld, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::Update(float timeStep)", "void Update(float)", AS_METHODPR(PhysicsWorld, Update, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::UpdateCollisions()", "void UpdateCollisions()", AS_METHODPR(PhysicsWorld, UpdateCollisions, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetFps(int fps)", "void SetFps(int)", AS_METHODPR(PhysicsWorld, SetFps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetFps(int fps)", "void set_fps(int)", AS_METHODPR(PhysicsWorld, SetFps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetGravity(const Vector3& gravity)", "void SetGravity(const Vector3&in)", AS_METHODPR(PhysicsWorld, SetGravity, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetGravity(const Vector3& gravity)", "void set_gravity(const Vector3&in)", AS_METHODPR(PhysicsWorld, SetGravity, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetMaxSubSteps(int num)", "void SetMaxSubSteps(int)", AS_METHODPR(PhysicsWorld, SetMaxSubSteps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetMaxSubSteps(int num)", "void set_maxSubSteps(int)", AS_METHODPR(PhysicsWorld, SetMaxSubSteps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetNumIterations(int num)", "void SetNumIterations(int)", AS_METHODPR(PhysicsWorld, SetNumIterations, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetNumIterations(int num)", "void set_numIterations(int)", AS_METHODPR(PhysicsWorld, SetNumIterations, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetUpdateEnabled(bool enable)", "void SetUpdateEnabled(bool)", AS_METHODPR(PhysicsWorld, SetUpdateEnabled, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetUpdateEnabled(bool enable)", "void set_updateEnabled(bool)", AS_METHODPR(PhysicsWorld, SetUpdateEnabled, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetInterpolation(bool enable)", "void SetInterpolation(bool)", AS_METHODPR(PhysicsWorld, SetInterpolation, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetInterpolation(bool enable)", "void set_interpolation(bool)", AS_METHODPR(PhysicsWorld, SetInterpolation, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetInternalEdge(bool enable)", "void SetInternalEdge(bool)", AS_METHODPR(PhysicsWorld, SetInternalEdge, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetInternalEdge(bool enable)", "void set_internalEdge(bool)", AS_METHODPR(PhysicsWorld, SetInternalEdge, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetSplitImpulse(bool enable)", "void SetSplitImpulse(bool)", AS_METHODPR(PhysicsWorld, SetSplitImpulse, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetSplitImpulse(bool enable)", "void set_splitImpulse(bool)", AS_METHODPR(PhysicsWorld, SetSplitImpulse, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetMaxNetworkAngularVelocity(float velocity)", "void SetMaxNetworkAngularVelocity(float)", AS_METHODPR(PhysicsWorld, SetMaxNetworkAngularVelocity, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::RaycastSingle(PhysicsRaycastResult& result, const Ray& ray, float maxDistance, unsigned collisionMask = M_MAX_UNSIGNED)", "void RaycastSingle(PhysicsRaycastResult&, const Ray&in, float, uint = M_MAX_UNSIGNED)", AS_METHODPR(PhysicsWorld, RaycastSingle, (PhysicsRaycastResult&, const Ray&, float, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::RaycastSingleSegmented(PhysicsRaycastResult& result, const Ray& ray, float maxDistance, float segmentDistance, unsigned collisionMask = M_MAX_UNSIGNED, float overlapDistance = 0.1f)", "void RaycastSingleSegmented(PhysicsRaycastResult&, const Ray&in, float, float, uint = M_MAX_UNSIGNED, float = 0.1f)", AS_METHODPR(PhysicsWorld, RaycastSingleSegmented, (PhysicsRaycastResult&, const Ray&, float, float, unsigned, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SphereCast(PhysicsRaycastResult& result, const Ray& ray, float radius, float maxDistance, unsigned collisionMask = M_MAX_UNSIGNED)", "void SphereCast(PhysicsRaycastResult&, const Ray&in, float, float, uint = M_MAX_UNSIGNED)", AS_METHODPR(PhysicsWorld, SphereCast, (PhysicsRaycastResult&, const Ray&, float, float, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::ConvexCast(PhysicsRaycastResult& result, CollisionShape* shape, const Vector3& startPos, const Quaternion& startRot, const Vector3& endPos, const Quaternion& endRot, unsigned collisionMask = M_MAX_UNSIGNED)", "void ConvexCast(PhysicsRaycastResult&, CollisionShape@+, const Vector3&in, const Quaternion&in, const Vector3&in, const Quaternion&in, uint = M_MAX_UNSIGNED)", AS_METHODPR(PhysicsWorld, ConvexCast, (PhysicsRaycastResult&, CollisionShape*, const Vector3&, const Quaternion&, const Vector3&, const Quaternion&, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::RemoveCachedGeometry(Model* model)", "void RemoveCachedGeometry(Model@+)", AS_METHODPR(PhysicsWorld, RemoveCachedGeometry, (Model*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 PhysicsWorld::GetGravity() const", "Vector3 GetGravity() const", AS_METHODPR(PhysicsWorld, GetGravity, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 PhysicsWorld::GetGravity() const", "Vector3 get_gravity() const", AS_METHODPR(PhysicsWorld, GetGravity, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int PhysicsWorld::GetMaxSubSteps() const", "int GetMaxSubSteps() const", AS_METHODPR(PhysicsWorld, GetMaxSubSteps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int PhysicsWorld::GetMaxSubSteps() const", "int get_maxSubSteps() const", AS_METHODPR(PhysicsWorld, GetMaxSubSteps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int PhysicsWorld::GetNumIterations() const", "int GetNumIterations() const", AS_METHODPR(PhysicsWorld, GetNumIterations, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int PhysicsWorld::GetNumIterations() const", "int get_numIterations() const", AS_METHODPR(PhysicsWorld, GetNumIterations, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PhysicsWorld::IsUpdateEnabled() const", "bool IsUpdateEnabled() const", AS_METHODPR(PhysicsWorld, IsUpdateEnabled, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PhysicsWorld::IsUpdateEnabled() const", "bool get_updateEnabled() const", AS_METHODPR(PhysicsWorld, IsUpdateEnabled, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PhysicsWorld::GetInterpolation() const", "bool GetInterpolation() const", AS_METHODPR(PhysicsWorld, GetInterpolation, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PhysicsWorld::GetInterpolation() const", "bool get_interpolation() const", AS_METHODPR(PhysicsWorld, GetInterpolation, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PhysicsWorld::GetInternalEdge() const", "bool GetInternalEdge() const", AS_METHODPR(PhysicsWorld, GetInternalEdge, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PhysicsWorld::GetInternalEdge() const", "bool get_internalEdge() const", AS_METHODPR(PhysicsWorld, GetInternalEdge, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PhysicsWorld::GetSplitImpulse() const", "bool GetSplitImpulse() const", AS_METHODPR(PhysicsWorld, GetSplitImpulse, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PhysicsWorld::GetSplitImpulse() const", "bool get_splitImpulse() const", AS_METHODPR(PhysicsWorld, GetSplitImpulse, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int PhysicsWorld::GetFps() const", "int GetFps() const", AS_METHODPR(PhysicsWorld, GetFps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int PhysicsWorld::GetFps() const", "int get_fps() const", AS_METHODPR(PhysicsWorld, GetFps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float PhysicsWorld::GetMaxNetworkAngularVelocity() const", "float GetMaxNetworkAngularVelocity() const", AS_METHODPR(PhysicsWorld, GetMaxNetworkAngularVelocity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::AddRigidBody(RigidBody* body)", "void AddRigidBody(RigidBody@+)", AS_METHODPR(PhysicsWorld, AddRigidBody, (RigidBody*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::RemoveRigidBody(RigidBody* body)", "void RemoveRigidBody(RigidBody@+)", AS_METHODPR(PhysicsWorld, RemoveRigidBody, (RigidBody*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::AddCollisionShape(CollisionShape* shape)", "void AddCollisionShape(CollisionShape@+)", AS_METHODPR(PhysicsWorld, AddCollisionShape, (CollisionShape*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::RemoveCollisionShape(CollisionShape* shape)", "void RemoveCollisionShape(CollisionShape@+)", AS_METHODPR(PhysicsWorld, RemoveCollisionShape, (CollisionShape*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::AddConstraint(Constraint* constraint)", "void AddConstraint(Constraint@+)", AS_METHODPR(PhysicsWorld, AddConstraint, (Constraint*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::RemoveConstraint(Constraint* constraint)", "void RemoveConstraint(Constraint@+)", AS_METHODPR(PhysicsWorld, RemoveConstraint, (Constraint*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::AddDelayedWorldTransform(const DelayedWorldTransform& transform)", "void AddDelayedWorldTransform(const DelayedWorldTransform&in)", AS_METHODPR(PhysicsWorld, AddDelayedWorldTransform, (const DelayedWorldTransform&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::DrawDebugGeometry(bool depthTest)", "void DrawDebugGeometry(bool)", AS_METHODPR(PhysicsWorld, DrawDebugGeometry, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetDebugRenderer(DebugRenderer* debug)", "void SetDebugRenderer(DebugRenderer@+)", AS_METHODPR(PhysicsWorld, SetDebugRenderer, (DebugRenderer*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetDebugDepthTest(bool enable)", "void SetDebugDepthTest(bool)", AS_METHODPR(PhysicsWorld, SetDebugDepthTest, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::CleanupGeometryCache()", "void CleanupGeometryCache()", AS_METHODPR(PhysicsWorld, CleanupGeometryCache, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void PhysicsWorld::SetApplyingTransforms(bool enable)", "void SetApplyingTransforms(bool)", AS_METHODPR(PhysicsWorld, SetApplyingTransforms, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PhysicsWorld::IsApplyingTransforms() const", "bool IsApplyingTransforms() const", AS_METHODPR(PhysicsWorld, IsApplyingTransforms, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PhysicsWorld::IsSimulating() const", "bool IsSimulating() const", AS_METHODPR(PhysicsWorld, IsSimulating, () const, bool), AS_CALL_THISCALL));

    // static void PhysicsWorld::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    // static struct PhysicsWorldConfig PhysicsWorld::config
    // Error: type "struct PhysicsWorldConfig" can not automatically bind

    #ifdef REGISTER_MEMBERS_MANUAL_PART_PhysicsWorld
        REGISTER_MEMBERS_MANUAL_PART_PhysicsWorld();
    #endif
}

// struct PhysicsWorldConfig | File: ../Physics/PhysicsWorld.h
void CollectMembers_PhysicsWorldConfig(MemberCollection& members)
{
    // btCollisionConfiguration* PhysicsWorldConfig::collisionConfig_
    // Not registered because pointer

    #ifdef REGISTER_MEMBERS_MANUAL_PART_PhysicsWorldConfig
        REGISTER_MEMBERS_MANUAL_PART_PhysicsWorldConfig();
    #endif
}

// class RaycastVehicle | File: ../Physics/RaycastVehicle.h
void CollectMembers_RaycastVehicle(MemberCollection& members)
{
    CollectMembers_LogicComponent(members);

    Remove(members.methods_, "virtual void Serializable::ApplyAttributes()");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // VariantVector RaycastVehicle::GetWheelDataAttr() const
    // Error: type "VariantVector" can not automatically bind
    // void RaycastVehicle::SetWheelDataAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(RaycastVehicle, OnSetEnabled, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(RaycastVehicle, ApplyAttributes, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::AddWheel(Node* wheelNode, Vector3 wheelDirection, Vector3 wheelAxle, float restLength, float wheelRadius, bool frontWheel)", "void AddWheel(Node@+, Vector3, Vector3, float, float, bool)", AS_METHODPR(RaycastVehicle, AddWheel, (Node*, Vector3, Vector3, float, float, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::ResetSuspension()", "void ResetSuspension()", AS_METHODPR(RaycastVehicle, ResetSuspension, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::UpdateWheelTransform(int wheel, bool interpolated)", "void UpdateWheelTransform(int, bool)", AS_METHODPR(RaycastVehicle, UpdateWheelTransform, (int, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetSteeringValue(int wheel, float steeringValue)", "void SetSteeringValue(int, float)", AS_METHODPR(RaycastVehicle, SetSteeringValue, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelSuspensionStiffness(int wheel, float stiffness)", "void SetWheelSuspensionStiffness(int, float)", AS_METHODPR(RaycastVehicle, SetWheelSuspensionStiffness, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelMaxSuspensionForce(int wheel, float force)", "void SetWheelMaxSuspensionForce(int, float)", AS_METHODPR(RaycastVehicle, SetWheelMaxSuspensionForce, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelDampingRelaxation(int wheel, float damping)", "void SetWheelDampingRelaxation(int, float)", AS_METHODPR(RaycastVehicle, SetWheelDampingRelaxation, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelDampingCompression(int wheel, float compression)", "void SetWheelDampingCompression(int, float)", AS_METHODPR(RaycastVehicle, SetWheelDampingCompression, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelFrictionSlip(int wheel, float slip)", "void SetWheelFrictionSlip(int, float)", AS_METHODPR(RaycastVehicle, SetWheelFrictionSlip, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelRollInfluence(int wheel, float rollInfluence)", "void SetWheelRollInfluence(int, float)", AS_METHODPR(RaycastVehicle, SetWheelRollInfluence, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetEngineForce(int wheel, float force)", "void SetEngineForce(int, float)", AS_METHODPR(RaycastVehicle, SetEngineForce, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetBrake(int wheel, float force)", "void SetBrake(int, float)", AS_METHODPR(RaycastVehicle, SetBrake, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelRadius(int wheel, float wheelRadius)", "void SetWheelRadius(int, float)", AS_METHODPR(RaycastVehicle, SetWheelRadius, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::ResetWheels()", "void ResetWheels()", AS_METHODPR(RaycastVehicle, ResetWheels, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelSkidInfo(int wheel, float factor)", "void SetWheelSkidInfo(int, float)", AS_METHODPR(RaycastVehicle, SetWheelSkidInfo, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RaycastVehicle::WheelIsGrounded(int wheel) const", "bool WheelIsGrounded(int) const", AS_METHODPR(RaycastVehicle, WheelIsGrounded, (int) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetMaxSuspensionTravel(int wheel, float maxSuspensionTravel)", "void SetMaxSuspensionTravel(int, float)", AS_METHODPR(RaycastVehicle, SetMaxSuspensionTravel, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelDirection(int wheel, Vector3 direction)", "void SetWheelDirection(int, Vector3)", AS_METHODPR(RaycastVehicle, SetWheelDirection, (int, Vector3), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelAxle(int wheel, Vector3 axle)", "void SetWheelAxle(int, Vector3)", AS_METHODPR(RaycastVehicle, SetWheelAxle, (int, Vector3), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetMaxSideSlipSpeed(float speed)", "void SetMaxSideSlipSpeed(float)", AS_METHODPR(RaycastVehicle, SetMaxSideSlipSpeed, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetMaxSideSlipSpeed(float speed)", "void set_maxSideSlipSpeed(float)", AS_METHODPR(RaycastVehicle, SetMaxSideSlipSpeed, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelSkidInfoCumulative(int wheel, float skid)", "void SetWheelSkidInfoCumulative(int, float)", AS_METHODPR(RaycastVehicle, SetWheelSkidInfoCumulative, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetInAirRPM(float rpm)", "void SetInAirRPM(float)", AS_METHODPR(RaycastVehicle, SetInAirRPM, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetInAirRPM(float rpm)", "void set_inAirRPM(float)", AS_METHODPR(RaycastVehicle, SetInAirRPM, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetCoordinateSystem(const IntVector3& coordinateSystem = RIGHT_FORWARD_UP)", "void SetCoordinateSystem(const IntVector3&in = RIGHT_FORWARD_UP)", AS_METHODPR(RaycastVehicle, SetCoordinateSystem, (const IntVector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetCoordinateSystem(const IntVector3& coordinateSystem = RIGHT_FORWARD_UP)", "void set_coordinateSystem(const IntVector3&in = RIGHT_FORWARD_UP)", AS_METHODPR(RaycastVehicle, SetCoordinateSystem, (const IntVector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::Init()", "void Init()", AS_METHODPR(RaycastVehicle, Init, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::FixedUpdate(float timeStep) override", "void FixedUpdate(float)", AS_METHODPR(RaycastVehicle, FixedUpdate, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::FixedPostUpdate(float timeStep) override", "void FixedPostUpdate(float)", AS_METHODPR(RaycastVehicle, FixedPostUpdate, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::PostUpdate(float timeStep) override", "void PostUpdate(float)", AS_METHODPR(RaycastVehicle, PostUpdate, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RaycastVehicle::GetWheelPosition(int wheel)", "Vector3 GetWheelPosition(int)", AS_METHODPR(RaycastVehicle, GetWheelPosition, (int), Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Quaternion RaycastVehicle::GetWheelRotation(int wheel)", "Quaternion GetWheelRotation(int)", AS_METHODPR(RaycastVehicle, GetWheelRotation, (int), Quaternion), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RaycastVehicle::GetWheelConnectionPoint(int wheel) const", "Vector3 GetWheelConnectionPoint(int) const", AS_METHODPR(RaycastVehicle, GetWheelConnectionPoint, (int) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int RaycastVehicle::GetNumWheels() const", "int GetNumWheels() const", AS_METHODPR(RaycastVehicle, GetNumWheels, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int RaycastVehicle::GetNumWheels() const", "int get_numWheels() const", AS_METHODPR(RaycastVehicle, GetNumWheels, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Node* RaycastVehicle::GetWheelNode(int wheel) const", "Node@+ GetWheelNode(int) const", AS_METHODPR(RaycastVehicle, GetWheelNode, (int) const, Node*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetSteeringValue(int wheel) const", "float GetSteeringValue(int) const", AS_METHODPR(RaycastVehicle, GetSteeringValue, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelSuspensionStiffness(int wheel) const", "float GetWheelSuspensionStiffness(int) const", AS_METHODPR(RaycastVehicle, GetWheelSuspensionStiffness, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelMaxSuspensionForce(int wheel) const", "float GetWheelMaxSuspensionForce(int) const", AS_METHODPR(RaycastVehicle, GetWheelMaxSuspensionForce, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelDampingRelaxation(int wheel) const", "float GetWheelDampingRelaxation(int) const", AS_METHODPR(RaycastVehicle, GetWheelDampingRelaxation, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelDampingCompression(int wheel) const", "float GetWheelDampingCompression(int) const", AS_METHODPR(RaycastVehicle, GetWheelDampingCompression, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelFrictionSlip(int wheel) const", "float GetWheelFrictionSlip(int) const", AS_METHODPR(RaycastVehicle, GetWheelFrictionSlip, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelRollInfluence(int wheel) const", "float GetWheelRollInfluence(int) const", AS_METHODPR(RaycastVehicle, GetWheelRollInfluence, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetEngineForce(int wheel) const", "float GetEngineForce(int) const", AS_METHODPR(RaycastVehicle, GetEngineForce, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetBrake(int wheel) const", "float GetBrake(int) const", AS_METHODPR(RaycastVehicle, GetBrake, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelRadius(int wheel) const", "float GetWheelRadius(int) const", AS_METHODPR(RaycastVehicle, GetWheelRadius, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RaycastVehicle::SetWheelRestLength(int wheel, float length)", "void SetWheelRestLength(int, float)", AS_METHODPR(RaycastVehicle, SetWheelRestLength, (int, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelRestLength(int wheel) const", "float GetWheelRestLength(int) const", AS_METHODPR(RaycastVehicle, GetWheelRestLength, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetMaxSuspensionTravel(int wheel)", "float GetMaxSuspensionTravel(int)", AS_METHODPR(RaycastVehicle, GetMaxSuspensionTravel, (int), float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RaycastVehicle::GetWheelAxle(int wheel) const", "Vector3 GetWheelAxle(int) const", AS_METHODPR(RaycastVehicle, GetWheelAxle, (int) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelSideSlipSpeed(int wheel) const", "float GetWheelSideSlipSpeed(int) const", AS_METHODPR(RaycastVehicle, GetWheelSideSlipSpeed, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetMaxSideSlipSpeed() const", "float GetMaxSideSlipSpeed() const", AS_METHODPR(RaycastVehicle, GetMaxSideSlipSpeed, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetMaxSideSlipSpeed() const", "float get_maxSideSlipSpeed() const", AS_METHODPR(RaycastVehicle, GetMaxSideSlipSpeed, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelSkidInfo(int wheel) const", "float GetWheelSkidInfo(int) const", AS_METHODPR(RaycastVehicle, GetWheelSkidInfo, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RaycastVehicle::GetWheelDirection(int wheel) const", "Vector3 GetWheelDirection(int) const", AS_METHODPR(RaycastVehicle, GetWheelDirection, (int) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetWheelSkidInfoCumulative(int wheel) const", "float GetWheelSkidInfoCumulative(int) const", AS_METHODPR(RaycastVehicle, GetWheelSkidInfoCumulative, (int) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RaycastVehicle::IsFrontWheel(int wheel) const", "bool IsFrontWheel(int) const", AS_METHODPR(RaycastVehicle, IsFrontWheel, (int) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RaycastVehicle::GetContactPosition(int wheel) const", "Vector3 GetContactPosition(int) const", AS_METHODPR(RaycastVehicle, GetContactPosition, (int) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RaycastVehicle::GetContactNormal(int wheel) const", "Vector3 GetContactNormal(int) const", AS_METHODPR(RaycastVehicle, GetContactNormal, (int) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetInAirRPM() const", "float GetInAirRPM() const", AS_METHODPR(RaycastVehicle, GetInAirRPM, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RaycastVehicle::GetInAirRPM() const", "float get_inAirRPM() const", AS_METHODPR(RaycastVehicle, GetInAirRPM, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector3 RaycastVehicle::GetCoordinateSystem() const", "IntVector3 GetCoordinateSystem() const", AS_METHODPR(RaycastVehicle, GetCoordinateSystem, () const, IntVector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector3 RaycastVehicle::GetCoordinateSystem() const", "IntVector3 get_coordinateSystem() const", AS_METHODPR(RaycastVehicle, GetCoordinateSystem, () const, IntVector3), AS_CALL_THISCALL));

    // static void RaycastVehicle::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    members.staticFields_.Push(RegisterGlobalPropertyArgs("static const IntVector3 RaycastVehicle::RIGHT_UP_FORWARD", "const IntVector3 RIGHT_UP_FORWARD", (void*)&RaycastVehicle::RIGHT_UP_FORWARD));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static const IntVector3 RaycastVehicle::RIGHT_FORWARD_UP", "const IntVector3 RIGHT_FORWARD_UP", (void*)&RaycastVehicle::RIGHT_FORWARD_UP));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static const IntVector3 RaycastVehicle::UP_FORWARD_RIGHT", "const IntVector3 UP_FORWARD_RIGHT", (void*)&RaycastVehicle::UP_FORWARD_RIGHT));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static const IntVector3 RaycastVehicle::UP_RIGHT_FORWARD", "const IntVector3 UP_RIGHT_FORWARD", (void*)&RaycastVehicle::UP_RIGHT_FORWARD));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static const IntVector3 RaycastVehicle::FORWARD_RIGHT_UP", "const IntVector3 FORWARD_RIGHT_UP", (void*)&RaycastVehicle::FORWARD_RIGHT_UP));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static const IntVector3 RaycastVehicle::FORWARD_UP_RIGHT", "const IntVector3 FORWARD_UP_RIGHT", (void*)&RaycastVehicle::FORWARD_UP_RIGHT));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_RaycastVehicle
        REGISTER_MEMBERS_MANUAL_PART_RaycastVehicle();
    #endif
}

// class RigidBody | File: ../Physics/RigidBody.h
void CollectMembers_RigidBody(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.methods_, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(members.methods_, "virtual void Component::OnSetEnabled()");
    Remove(members.methods_, "virtual void Serializable::ApplyAttributes()");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // btRigidBody* RigidBody::GetBody() const
    // Error: type "btRigidBody*" can not automatically bind
    // void RigidBody::GetCollidingBodies(PODVector<RigidBody*>& result) const
    // Error: type "PODVector<RigidBody*>&" can not automatically bind
    // btCompoundShape* RigidBody::GetCompoundShape() const
    // Error: type "btCompoundShape*" can not automatically bind
    // const PODVector<unsigned char>& RigidBody::GetNetAngularVelocityAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // void RigidBody::SetNetAngularVelocityAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // void RigidBody::getWorldTransform(btTransform& worldTrans) const override
    // Not registered because have @nobind mark
    // void RigidBody::setWorldTransform(const btTransform& worldTrans) override
    // Not registered because have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(RigidBody, ApplyAttributes, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(RigidBody, OnSetEnabled, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(RigidBody, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetMass(float mass)", "void SetMass(float)", AS_METHODPR(RigidBody, SetMass, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetMass(float mass)", "void set_mass(float)", AS_METHODPR(RigidBody, SetMass, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetPosition(const Vector3& position)", "void SetPosition(const Vector3&in)", AS_METHODPR(RigidBody, SetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetPosition(const Vector3& position)", "void set_position(const Vector3&in)", AS_METHODPR(RigidBody, SetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetRotation(const Quaternion& rotation)", "void SetRotation(const Quaternion&in)", AS_METHODPR(RigidBody, SetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetRotation(const Quaternion& rotation)", "void set_rotation(const Quaternion&in)", AS_METHODPR(RigidBody, SetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetTransform(const Vector3& position, const Quaternion& rotation)", "void SetTransform(const Vector3&in, const Quaternion&in)", AS_METHODPR(RigidBody, SetTransform, (const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetLinearVelocity(const Vector3& velocity)", "void SetLinearVelocity(const Vector3&in)", AS_METHODPR(RigidBody, SetLinearVelocity, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetLinearVelocity(const Vector3& velocity)", "void set_linearVelocity(const Vector3&in)", AS_METHODPR(RigidBody, SetLinearVelocity, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetLinearFactor(const Vector3& factor)", "void SetLinearFactor(const Vector3&in)", AS_METHODPR(RigidBody, SetLinearFactor, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetLinearFactor(const Vector3& factor)", "void set_linearFactor(const Vector3&in)", AS_METHODPR(RigidBody, SetLinearFactor, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetLinearRestThreshold(float threshold)", "void SetLinearRestThreshold(float)", AS_METHODPR(RigidBody, SetLinearRestThreshold, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetLinearRestThreshold(float threshold)", "void set_linearRestThreshold(float)", AS_METHODPR(RigidBody, SetLinearRestThreshold, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetLinearDamping(float damping)", "void SetLinearDamping(float)", AS_METHODPR(RigidBody, SetLinearDamping, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetLinearDamping(float damping)", "void set_linearDamping(float)", AS_METHODPR(RigidBody, SetLinearDamping, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetAngularVelocity(const Vector3& velocity)", "void SetAngularVelocity(const Vector3&in)", AS_METHODPR(RigidBody, SetAngularVelocity, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetAngularVelocity(const Vector3& velocity)", "void set_angularVelocity(const Vector3&in)", AS_METHODPR(RigidBody, SetAngularVelocity, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetAngularFactor(const Vector3& factor)", "void SetAngularFactor(const Vector3&in)", AS_METHODPR(RigidBody, SetAngularFactor, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetAngularFactor(const Vector3& factor)", "void set_angularFactor(const Vector3&in)", AS_METHODPR(RigidBody, SetAngularFactor, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetAngularRestThreshold(float threshold)", "void SetAngularRestThreshold(float)", AS_METHODPR(RigidBody, SetAngularRestThreshold, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetAngularRestThreshold(float threshold)", "void set_angularRestThreshold(float)", AS_METHODPR(RigidBody, SetAngularRestThreshold, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetAngularDamping(float damping)", "void SetAngularDamping(float)", AS_METHODPR(RigidBody, SetAngularDamping, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetAngularDamping(float damping)", "void set_angularDamping(float)", AS_METHODPR(RigidBody, SetAngularDamping, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetFriction(float friction)", "void SetFriction(float)", AS_METHODPR(RigidBody, SetFriction, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetFriction(float friction)", "void set_friction(float)", AS_METHODPR(RigidBody, SetFriction, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetAnisotropicFriction(const Vector3& friction)", "void SetAnisotropicFriction(const Vector3&in)", AS_METHODPR(RigidBody, SetAnisotropicFriction, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetAnisotropicFriction(const Vector3& friction)", "void set_anisotropicFriction(const Vector3&in)", AS_METHODPR(RigidBody, SetAnisotropicFriction, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetRollingFriction(float friction)", "void SetRollingFriction(float)", AS_METHODPR(RigidBody, SetRollingFriction, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetRollingFriction(float friction)", "void set_rollingFriction(float)", AS_METHODPR(RigidBody, SetRollingFriction, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetRestitution(float restitution)", "void SetRestitution(float)", AS_METHODPR(RigidBody, SetRestitution, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetRestitution(float restitution)", "void set_restitution(float)", AS_METHODPR(RigidBody, SetRestitution, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetContactProcessingThreshold(float threshold)", "void SetContactProcessingThreshold(float)", AS_METHODPR(RigidBody, SetContactProcessingThreshold, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetContactProcessingThreshold(float threshold)", "void set_contactProcessingThreshold(float)", AS_METHODPR(RigidBody, SetContactProcessingThreshold, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCcdRadius(float radius)", "void SetCcdRadius(float)", AS_METHODPR(RigidBody, SetCcdRadius, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCcdRadius(float radius)", "void set_ccdRadius(float)", AS_METHODPR(RigidBody, SetCcdRadius, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCcdMotionThreshold(float threshold)", "void SetCcdMotionThreshold(float)", AS_METHODPR(RigidBody, SetCcdMotionThreshold, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCcdMotionThreshold(float threshold)", "void set_ccdMotionThreshold(float)", AS_METHODPR(RigidBody, SetCcdMotionThreshold, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetUseGravity(bool enable)", "void SetUseGravity(bool)", AS_METHODPR(RigidBody, SetUseGravity, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetUseGravity(bool enable)", "void set_useGravity(bool)", AS_METHODPR(RigidBody, SetUseGravity, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetGravityOverride(const Vector3& gravity)", "void SetGravityOverride(const Vector3&in)", AS_METHODPR(RigidBody, SetGravityOverride, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetGravityOverride(const Vector3& gravity)", "void set_gravityOverride(const Vector3&in)", AS_METHODPR(RigidBody, SetGravityOverride, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetKinematic(bool enable)", "void SetKinematic(bool)", AS_METHODPR(RigidBody, SetKinematic, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetKinematic(bool enable)", "void set_kinematic(bool)", AS_METHODPR(RigidBody, SetKinematic, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetTrigger(bool enable)", "void SetTrigger(bool)", AS_METHODPR(RigidBody, SetTrigger, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetTrigger(bool enable)", "void set_trigger(bool)", AS_METHODPR(RigidBody, SetTrigger, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCollisionLayer(unsigned layer)", "void SetCollisionLayer(uint)", AS_METHODPR(RigidBody, SetCollisionLayer, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCollisionLayer(unsigned layer)", "void set_collisionLayer(uint)", AS_METHODPR(RigidBody, SetCollisionLayer, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCollisionMask(unsigned mask)", "void SetCollisionMask(uint)", AS_METHODPR(RigidBody, SetCollisionMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCollisionMask(unsigned mask)", "void set_collisionMask(uint)", AS_METHODPR(RigidBody, SetCollisionMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCollisionLayerAndMask(unsigned layer, unsigned mask)", "void SetCollisionLayerAndMask(uint, uint)", AS_METHODPR(RigidBody, SetCollisionLayerAndMask, (unsigned, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCollisionEventMode(CollisionEventMode mode)", "void SetCollisionEventMode(CollisionEventMode)", AS_METHODPR(RigidBody, SetCollisionEventMode, (CollisionEventMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::SetCollisionEventMode(CollisionEventMode mode)", "void set_collisionEventMode(CollisionEventMode)", AS_METHODPR(RigidBody, SetCollisionEventMode, (CollisionEventMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ApplyForce(const Vector3& force)", "void ApplyForce(const Vector3&in)", AS_METHODPR(RigidBody, ApplyForce, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ApplyForce(const Vector3& force, const Vector3& position)", "void ApplyForce(const Vector3&in, const Vector3&in)", AS_METHODPR(RigidBody, ApplyForce, (const Vector3&, const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ApplyTorque(const Vector3& torque)", "void ApplyTorque(const Vector3&in)", AS_METHODPR(RigidBody, ApplyTorque, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ApplyImpulse(const Vector3& impulse)", "void ApplyImpulse(const Vector3&in)", AS_METHODPR(RigidBody, ApplyImpulse, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ApplyImpulse(const Vector3& impulse, const Vector3& position)", "void ApplyImpulse(const Vector3&in, const Vector3&in)", AS_METHODPR(RigidBody, ApplyImpulse, (const Vector3&, const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ApplyTorqueImpulse(const Vector3& torque)", "void ApplyTorqueImpulse(const Vector3&in)", AS_METHODPR(RigidBody, ApplyTorqueImpulse, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ResetForces()", "void ResetForces()", AS_METHODPR(RigidBody, ResetForces, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::Activate()", "void Activate()", AS_METHODPR(RigidBody, Activate, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ReAddBodyToWorld()", "void ReAddBodyToWorld()", AS_METHODPR(RigidBody, ReAddBodyToWorld, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::DisableMassUpdate()", "void DisableMassUpdate()", AS_METHODPR(RigidBody, DisableMassUpdate, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::EnableMassUpdate()", "void EnableMassUpdate()", AS_METHODPR(RigidBody, EnableMassUpdate, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("PhysicsWorld* RigidBody::GetPhysicsWorld() const", "PhysicsWorld@+ GetPhysicsWorld() const", AS_METHODPR(RigidBody, GetPhysicsWorld, () const, PhysicsWorld*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetMass() const", "float GetMass() const", AS_METHODPR(RigidBody, GetMass, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetMass() const", "float get_mass() const", AS_METHODPR(RigidBody, GetMass, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetPosition() const", "Vector3 GetPosition() const", AS_METHODPR(RigidBody, GetPosition, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetPosition() const", "Vector3 get_position() const", AS_METHODPR(RigidBody, GetPosition, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Quaternion RigidBody::GetRotation() const", "Quaternion GetRotation() const", AS_METHODPR(RigidBody, GetRotation, () const, Quaternion), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Quaternion RigidBody::GetRotation() const", "Quaternion get_rotation() const", AS_METHODPR(RigidBody, GetRotation, () const, Quaternion), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetLinearVelocity() const", "Vector3 GetLinearVelocity() const", AS_METHODPR(RigidBody, GetLinearVelocity, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetLinearVelocity() const", "Vector3 get_linearVelocity() const", AS_METHODPR(RigidBody, GetLinearVelocity, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetLinearFactor() const", "Vector3 GetLinearFactor() const", AS_METHODPR(RigidBody, GetLinearFactor, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetLinearFactor() const", "Vector3 get_linearFactor() const", AS_METHODPR(RigidBody, GetLinearFactor, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetVelocityAtPoint(const Vector3& position) const", "Vector3 GetVelocityAtPoint(const Vector3&in) const", AS_METHODPR(RigidBody, GetVelocityAtPoint, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetLinearRestThreshold() const", "float GetLinearRestThreshold() const", AS_METHODPR(RigidBody, GetLinearRestThreshold, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetLinearRestThreshold() const", "float get_linearRestThreshold() const", AS_METHODPR(RigidBody, GetLinearRestThreshold, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetLinearDamping() const", "float GetLinearDamping() const", AS_METHODPR(RigidBody, GetLinearDamping, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetLinearDamping() const", "float get_linearDamping() const", AS_METHODPR(RigidBody, GetLinearDamping, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetAngularVelocity() const", "Vector3 GetAngularVelocity() const", AS_METHODPR(RigidBody, GetAngularVelocity, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetAngularVelocity() const", "Vector3 get_angularVelocity() const", AS_METHODPR(RigidBody, GetAngularVelocity, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetAngularFactor() const", "Vector3 GetAngularFactor() const", AS_METHODPR(RigidBody, GetAngularFactor, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetAngularFactor() const", "Vector3 get_angularFactor() const", AS_METHODPR(RigidBody, GetAngularFactor, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetAngularRestThreshold() const", "float GetAngularRestThreshold() const", AS_METHODPR(RigidBody, GetAngularRestThreshold, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetAngularRestThreshold() const", "float get_angularRestThreshold() const", AS_METHODPR(RigidBody, GetAngularRestThreshold, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetAngularDamping() const", "float GetAngularDamping() const", AS_METHODPR(RigidBody, GetAngularDamping, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetAngularDamping() const", "float get_angularDamping() const", AS_METHODPR(RigidBody, GetAngularDamping, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetFriction() const", "float GetFriction() const", AS_METHODPR(RigidBody, GetFriction, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetFriction() const", "float get_friction() const", AS_METHODPR(RigidBody, GetFriction, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetAnisotropicFriction() const", "Vector3 GetAnisotropicFriction() const", AS_METHODPR(RigidBody, GetAnisotropicFriction, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 RigidBody::GetAnisotropicFriction() const", "Vector3 get_anisotropicFriction() const", AS_METHODPR(RigidBody, GetAnisotropicFriction, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetRollingFriction() const", "float GetRollingFriction() const", AS_METHODPR(RigidBody, GetRollingFriction, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetRollingFriction() const", "float get_rollingFriction() const", AS_METHODPR(RigidBody, GetRollingFriction, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetRestitution() const", "float GetRestitution() const", AS_METHODPR(RigidBody, GetRestitution, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetRestitution() const", "float get_restitution() const", AS_METHODPR(RigidBody, GetRestitution, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetContactProcessingThreshold() const", "float GetContactProcessingThreshold() const", AS_METHODPR(RigidBody, GetContactProcessingThreshold, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetContactProcessingThreshold() const", "float get_contactProcessingThreshold() const", AS_METHODPR(RigidBody, GetContactProcessingThreshold, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetCcdRadius() const", "float GetCcdRadius() const", AS_METHODPR(RigidBody, GetCcdRadius, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetCcdRadius() const", "float get_ccdRadius() const", AS_METHODPR(RigidBody, GetCcdRadius, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetCcdMotionThreshold() const", "float GetCcdMotionThreshold() const", AS_METHODPR(RigidBody, GetCcdMotionThreshold, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RigidBody::GetCcdMotionThreshold() const", "float get_ccdMotionThreshold() const", AS_METHODPR(RigidBody, GetCcdMotionThreshold, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RigidBody::GetUseGravity() const", "bool GetUseGravity() const", AS_METHODPR(RigidBody, GetUseGravity, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RigidBody::GetUseGravity() const", "bool get_useGravity() const", AS_METHODPR(RigidBody, GetUseGravity, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& RigidBody::GetGravityOverride() const", "const Vector3& GetGravityOverride() const", AS_METHODPR(RigidBody, GetGravityOverride, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& RigidBody::GetGravityOverride() const", "const Vector3& get_gravityOverride() const", AS_METHODPR(RigidBody, GetGravityOverride, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& RigidBody::GetCenterOfMass() const", "const Vector3& GetCenterOfMass() const", AS_METHODPR(RigidBody, GetCenterOfMass, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& RigidBody::GetCenterOfMass() const", "const Vector3& get_centerOfMass() const", AS_METHODPR(RigidBody, GetCenterOfMass, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RigidBody::IsKinematic() const", "bool IsKinematic() const", AS_METHODPR(RigidBody, IsKinematic, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RigidBody::IsKinematic() const", "bool get_kinematic() const", AS_METHODPR(RigidBody, IsKinematic, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RigidBody::IsTrigger() const", "bool IsTrigger() const", AS_METHODPR(RigidBody, IsTrigger, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RigidBody::IsTrigger() const", "bool get_trigger() const", AS_METHODPR(RigidBody, IsTrigger, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RigidBody::IsActive() const", "bool IsActive() const", AS_METHODPR(RigidBody, IsActive, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RigidBody::IsActive() const", "bool get_active() const", AS_METHODPR(RigidBody, IsActive, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RigidBody::GetCollisionLayer() const", "uint GetCollisionLayer() const", AS_METHODPR(RigidBody, GetCollisionLayer, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RigidBody::GetCollisionLayer() const", "uint get_collisionLayer() const", AS_METHODPR(RigidBody, GetCollisionLayer, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RigidBody::GetCollisionMask() const", "uint GetCollisionMask() const", AS_METHODPR(RigidBody, GetCollisionMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RigidBody::GetCollisionMask() const", "uint get_collisionMask() const", AS_METHODPR(RigidBody, GetCollisionMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CollisionEventMode RigidBody::GetCollisionEventMode() const", "CollisionEventMode GetCollisionEventMode() const", AS_METHODPR(RigidBody, GetCollisionEventMode, () const, CollisionEventMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CollisionEventMode RigidBody::GetCollisionEventMode() const", "CollisionEventMode get_collisionEventMode() const", AS_METHODPR(RigidBody, GetCollisionEventMode, () const, CollisionEventMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ApplyWorldTransform(const Vector3& newWorldPosition, const Quaternion& newWorldRotation)", "void ApplyWorldTransform(const Vector3&in, const Quaternion&in)", AS_METHODPR(RigidBody, ApplyWorldTransform, (const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::UpdateMass()", "void UpdateMass()", AS_METHODPR(RigidBody, UpdateMass, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::UpdateGravity()", "void UpdateGravity()", AS_METHODPR(RigidBody, UpdateGravity, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::AddConstraint(Constraint* constraint)", "void AddConstraint(Constraint@+)", AS_METHODPR(RigidBody, AddConstraint, (Constraint*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::RemoveConstraint(Constraint* constraint)", "void RemoveConstraint(Constraint@+)", AS_METHODPR(RigidBody, RemoveConstraint, (Constraint*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RigidBody::ReleaseBody()", "void ReleaseBody()", AS_METHODPR(RigidBody, ReleaseBody, (), void), AS_CALL_THISCALL));

    // static void RigidBody::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_RigidBody
        REGISTER_MEMBERS_MANUAL_PART_RigidBody();
    #endif
}

// struct TriangleMeshData | File: ../Physics/CollisionShape.h
void CollectMembers_TriangleMeshData(MemberCollection& members)
{
    CollectMembers_CollisionGeometryData(members);

    // UniquePtr<TriangleMeshInterface> TriangleMeshData::meshInterface_
    // Error: type "UniquePtr<TriangleMeshInterface>" can not automatically bind
    // UniquePtr<btBvhTriangleMeshShape> TriangleMeshData::shape_
    // Error: type "UniquePtr<btBvhTriangleMeshShape>" can not automatically bind
    // UniquePtr<btTriangleInfoMap> TriangleMeshData::infoMap_
    // Error: type "UniquePtr<btTriangleInfoMap>" can not automatically bind

    #ifdef REGISTER_MEMBERS_MANUAL_PART_TriangleMeshData
        REGISTER_MEMBERS_MANUAL_PART_TriangleMeshData();
    #endif
}

#endif // def URHO3D_PHYSICS

} // namespace Urho3D
