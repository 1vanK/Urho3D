// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

#ifdef URHO3D_IK

// class IKConstraint | File: ../IK/IKConstraint.h
void CollectMembers_IKConstraint(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    members.methods_.Push(RegisterObjectMethodArgs("float IKConstraint::GetStiffness() const", "float GetStiffness() const", AS_METHODPR(IKConstraint, GetStiffness, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKConstraint::SetStiffness(float stiffness)", "void SetStiffness(float)", AS_METHODPR(IKConstraint, SetStiffness, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float IKConstraint::GetStretchiness() const", "float GetStretchiness() const", AS_METHODPR(IKConstraint, GetStretchiness, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKConstraint::SetStretchiness(float stretchiness)", "void SetStretchiness(float)", AS_METHODPR(IKConstraint, SetStretchiness, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& IKConstraint::GetLengthConstraints() const", "const Vector2& GetLengthConstraints() const", AS_METHODPR(IKConstraint, GetLengthConstraints, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKConstraint::SetLengthConstraints(const Vector2& lengthConstraints)", "void SetLengthConstraints(const Vector2&in)", AS_METHODPR(IKConstraint, SetLengthConstraints, (const Vector2&), void), AS_CALL_THISCALL));

    // static void IKConstraint::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_IKConstraint
        REGISTER_MEMBER_MANUAL_PART_IKConstraint();
    #endif
}

// class IKEffector | File: ../IK/IKEffector.h
void CollectMembers_IKEffector(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.methods_, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // bool IKEffector::GetFeature(Feature feature) const
    // Not registered because have @nobind mark
    // void IKEffector::SetFeature(Feature feature, bool enable)
    // Not registered because have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("Node* IKEffector::GetTargetNode() const", "Node@+ GetTargetNode() const", AS_METHODPR(IKEffector, GetTargetNode, () const, Node*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Node* IKEffector::GetTargetNode() const", "Node@+ get_targetNode() const", AS_METHODPR(IKEffector, GetTargetNode, () const, Node*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetTargetNode(Node* targetNode)", "void SetTargetNode(Node@+)", AS_METHODPR(IKEffector, SetTargetNode, (Node*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetTargetNode(Node* targetNode)", "void set_targetNode(Node@+)", AS_METHODPR(IKEffector, SetTargetNode, (Node*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& IKEffector::GetTargetName() const", "const String& GetTargetName() const", AS_METHODPR(IKEffector, GetTargetName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& IKEffector::GetTargetName() const", "const String& get_targetName() const", AS_METHODPR(IKEffector, GetTargetName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetTargetName(const String& nodeName)", "void SetTargetName(const String&in)", AS_METHODPR(IKEffector, SetTargetName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetTargetName(const String& nodeName)", "void set_targetName(const String&in)", AS_METHODPR(IKEffector, SetTargetName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& IKEffector::GetTargetPosition() const", "const Vector3& GetTargetPosition() const", AS_METHODPR(IKEffector, GetTargetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& IKEffector::GetTargetPosition() const", "const Vector3& get_targetPosition() const", AS_METHODPR(IKEffector, GetTargetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetTargetPosition(const Vector3& targetPosition)", "void SetTargetPosition(const Vector3&in)", AS_METHODPR(IKEffector, SetTargetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetTargetPosition(const Vector3& targetPosition)", "void set_targetPosition(const Vector3&in)", AS_METHODPR(IKEffector, SetTargetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& IKEffector::GetTargetRotation() const", "const Quaternion& GetTargetRotation() const", AS_METHODPR(IKEffector, GetTargetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& IKEffector::GetTargetRotation() const", "const Quaternion& get_targetRotation() const", AS_METHODPR(IKEffector, GetTargetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetTargetRotation(const Quaternion& targetRotation)", "void SetTargetRotation(const Quaternion&in)", AS_METHODPR(IKEffector, SetTargetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetTargetRotation(const Quaternion& targetRotation)", "void set_targetRotation(const Quaternion&in)", AS_METHODPR(IKEffector, SetTargetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 IKEffector::GetTargetRotationEuler() const", "Vector3 GetTargetRotationEuler() const", AS_METHODPR(IKEffector, GetTargetRotationEuler, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetTargetRotationEuler(const Vector3& targetRotation)", "void SetTargetRotationEuler(const Vector3&in)", AS_METHODPR(IKEffector, SetTargetRotationEuler, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned IKEffector::GetChainLength() const", "uint GetChainLength() const", AS_METHODPR(IKEffector, GetChainLength, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned IKEffector::GetChainLength() const", "uint get_chainLength() const", AS_METHODPR(IKEffector, GetChainLength, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetChainLength(unsigned chainLength)", "void SetChainLength(uint)", AS_METHODPR(IKEffector, SetChainLength, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetChainLength(unsigned chainLength)", "void set_chainLength(uint)", AS_METHODPR(IKEffector, SetChainLength, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float IKEffector::GetWeight() const", "float GetWeight() const", AS_METHODPR(IKEffector, GetWeight, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float IKEffector::GetWeight() const", "float get_weight() const", AS_METHODPR(IKEffector, GetWeight, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetWeight(float weight)", "void SetWeight(float)", AS_METHODPR(IKEffector, SetWeight, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetWeight(float weight)", "void set_weight(float)", AS_METHODPR(IKEffector, SetWeight, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float IKEffector::GetRotationWeight() const", "float GetRotationWeight() const", AS_METHODPR(IKEffector, GetRotationWeight, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float IKEffector::GetRotationWeight() const", "float get_rotationWeight() const", AS_METHODPR(IKEffector, GetRotationWeight, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetRotationWeight(float weight)", "void SetRotationWeight(float)", AS_METHODPR(IKEffector, SetRotationWeight, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetRotationWeight(float weight)", "void set_rotationWeight(float)", AS_METHODPR(IKEffector, SetRotationWeight, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float IKEffector::GetRotationDecay() const", "float GetRotationDecay() const", AS_METHODPR(IKEffector, GetRotationDecay, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float IKEffector::GetRotationDecay() const", "float get_rotationDecay() const", AS_METHODPR(IKEffector, GetRotationDecay, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetRotationDecay(float decay)", "void SetRotationDecay(float)", AS_METHODPR(IKEffector, SetRotationDecay, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetRotationDecay(float decay)", "void set_rotationDecay(float)", AS_METHODPR(IKEffector, SetRotationDecay, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::DrawDebugGeometry(bool depthTest)", "void DrawDebugGeometry(bool)", AS_METHODPR(IKEffector, DrawDebugGeometry, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(IKEffector, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKEffector::GetWEIGHT_NLERP() const", "bool GetWEIGHT_NLERP() const", AS_METHODPR(IKEffector, GetWEIGHT_NLERP, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKEffector::GetINHERIT_PARENT_ROTATION() const", "bool GetINHERIT_PARENT_ROTATION() const", AS_METHODPR(IKEffector, GetINHERIT_PARENT_ROTATION, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetWEIGHT_NLERP(bool enable)", "void SetWEIGHT_NLERP(bool)", AS_METHODPR(IKEffector, SetWEIGHT_NLERP, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKEffector::SetINHERIT_PARENT_ROTATION(bool enable)", "void SetINHERIT_PARENT_ROTATION(bool)", AS_METHODPR(IKEffector, SetINHERIT_PARENT_ROTATION, (bool), void), AS_CALL_THISCALL));

    // static void IKEffector::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_IKEffector
        REGISTER_MEMBER_MANUAL_PART_IKEffector();
    #endif
}

// class IKSolver | File: ../IK/IKSolver.h
void CollectMembers_IKSolver(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.methods_, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // Algorithm IKSolver::GetAlgorithm() const
    // Not registered because have @manualbind mark
    // bool IKSolver::GetFeature(Feature feature) const
    // Not registered because have @nobind mark
    // void IKSolver::SetAlgorithm(Algorithm algorithm)
    // Not registered because have @manualbind mark
    // void IKSolver::SetFeature(Feature feature, bool enable)
    // Not registered because have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("unsigned IKSolver::GetMaximumIterations() const", "uint GetMaximumIterations() const", AS_METHODPR(IKSolver, GetMaximumIterations, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned IKSolver::GetMaximumIterations() const", "uint get_maximumIterations() const", AS_METHODPR(IKSolver, GetMaximumIterations, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetMaximumIterations(unsigned iterations)", "void SetMaximumIterations(uint)", AS_METHODPR(IKSolver, SetMaximumIterations, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetMaximumIterations(unsigned iterations)", "void set_maximumIterations(uint)", AS_METHODPR(IKSolver, SetMaximumIterations, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float IKSolver::GetTolerance() const", "float GetTolerance() const", AS_METHODPR(IKSolver, GetTolerance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float IKSolver::GetTolerance() const", "float get_tolerance() const", AS_METHODPR(IKSolver, GetTolerance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetTolerance(float tolerance)", "void SetTolerance(float)", AS_METHODPR(IKSolver, SetTolerance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetTolerance(float tolerance)", "void set_tolerance(float)", AS_METHODPR(IKSolver, SetTolerance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::RebuildChainTrees()", "void RebuildChainTrees()", AS_METHODPR(IKSolver, RebuildChainTrees, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::RecalculateSegmentLengths()", "void RecalculateSegmentLengths()", AS_METHODPR(IKSolver, RecalculateSegmentLengths, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::CalculateJointRotations()", "void CalculateJointRotations()", AS_METHODPR(IKSolver, CalculateJointRotations, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::Solve()", "void Solve()", AS_METHODPR(IKSolver, Solve, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::ApplyOriginalPoseToScene()", "void ApplyOriginalPoseToScene()", AS_METHODPR(IKSolver, ApplyOriginalPoseToScene, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::ApplySceneToOriginalPose()", "void ApplySceneToOriginalPose()", AS_METHODPR(IKSolver, ApplySceneToOriginalPose, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::ApplyActivePoseToScene()", "void ApplyActivePoseToScene()", AS_METHODPR(IKSolver, ApplyActivePoseToScene, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::ApplySceneToActivePose()", "void ApplySceneToActivePose()", AS_METHODPR(IKSolver, ApplySceneToActivePose, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::ApplyOriginalPoseToActivePose()", "void ApplyOriginalPoseToActivePose()", AS_METHODPR(IKSolver, ApplyOriginalPoseToActivePose, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::DrawDebugGeometry(bool depthTest)", "void DrawDebugGeometry(bool)", AS_METHODPR(IKSolver, DrawDebugGeometry, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(IKSolver, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetJOINT_ROTATIONS() const", "bool GetJOINT_ROTATIONS() const", AS_METHODPR(IKSolver, GetJOINT_ROTATIONS, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetJOINT_ROTATIONS() const", "bool get_JOINT_ROTATIONS() const", AS_METHODPR(IKSolver, GetJOINT_ROTATIONS, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetTARGET_ROTATIONS() const", "bool GetTARGET_ROTATIONS() const", AS_METHODPR(IKSolver, GetTARGET_ROTATIONS, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetTARGET_ROTATIONS() const", "bool get_TARGET_ROTATIONS() const", AS_METHODPR(IKSolver, GetTARGET_ROTATIONS, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetUPDATE_ORIGINAL_POSE() const", "bool GetUPDATE_ORIGINAL_POSE() const", AS_METHODPR(IKSolver, GetUPDATE_ORIGINAL_POSE, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetUPDATE_ORIGINAL_POSE() const", "bool get_UPDATE_ORIGINAL_POSE() const", AS_METHODPR(IKSolver, GetUPDATE_ORIGINAL_POSE, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetUPDATE_ACTIVE_POSE() const", "bool GetUPDATE_ACTIVE_POSE() const", AS_METHODPR(IKSolver, GetUPDATE_ACTIVE_POSE, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetUPDATE_ACTIVE_POSE() const", "bool get_UPDATE_ACTIVE_POSE() const", AS_METHODPR(IKSolver, GetUPDATE_ACTIVE_POSE, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetUSE_ORIGINAL_POSE() const", "bool GetUSE_ORIGINAL_POSE() const", AS_METHODPR(IKSolver, GetUSE_ORIGINAL_POSE, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetUSE_ORIGINAL_POSE() const", "bool get_USE_ORIGINAL_POSE() const", AS_METHODPR(IKSolver, GetUSE_ORIGINAL_POSE, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetCONSTRAINTS() const", "bool GetCONSTRAINTS() const", AS_METHODPR(IKSolver, GetCONSTRAINTS, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetCONSTRAINTS() const", "bool get_CONSTRAINTS() const", AS_METHODPR(IKSolver, GetCONSTRAINTS, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetAUTO_SOLVE() const", "bool GetAUTO_SOLVE() const", AS_METHODPR(IKSolver, GetAUTO_SOLVE, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IKSolver::GetAUTO_SOLVE() const", "bool get_AUTO_SOLVE() const", AS_METHODPR(IKSolver, GetAUTO_SOLVE, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetJOINT_ROTATIONS(bool enable)", "void SetJOINT_ROTATIONS(bool)", AS_METHODPR(IKSolver, SetJOINT_ROTATIONS, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetJOINT_ROTATIONS(bool enable)", "void set_JOINT_ROTATIONS(bool)", AS_METHODPR(IKSolver, SetJOINT_ROTATIONS, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetTARGET_ROTATIONS(bool enable)", "void SetTARGET_ROTATIONS(bool)", AS_METHODPR(IKSolver, SetTARGET_ROTATIONS, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetTARGET_ROTATIONS(bool enable)", "void set_TARGET_ROTATIONS(bool)", AS_METHODPR(IKSolver, SetTARGET_ROTATIONS, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetUPDATE_ORIGINAL_POSE(bool enable)", "void SetUPDATE_ORIGINAL_POSE(bool)", AS_METHODPR(IKSolver, SetUPDATE_ORIGINAL_POSE, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetUPDATE_ORIGINAL_POSE(bool enable)", "void set_UPDATE_ORIGINAL_POSE(bool)", AS_METHODPR(IKSolver, SetUPDATE_ORIGINAL_POSE, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetUPDATE_ACTIVE_POSE(bool enable)", "void SetUPDATE_ACTIVE_POSE(bool)", AS_METHODPR(IKSolver, SetUPDATE_ACTIVE_POSE, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetUPDATE_ACTIVE_POSE(bool enable)", "void set_UPDATE_ACTIVE_POSE(bool)", AS_METHODPR(IKSolver, SetUPDATE_ACTIVE_POSE, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetUSE_ORIGINAL_POSE(bool enable)", "void SetUSE_ORIGINAL_POSE(bool)", AS_METHODPR(IKSolver, SetUSE_ORIGINAL_POSE, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetUSE_ORIGINAL_POSE(bool enable)", "void set_USE_ORIGINAL_POSE(bool)", AS_METHODPR(IKSolver, SetUSE_ORIGINAL_POSE, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetCONSTRAINTS(bool enable)", "void SetCONSTRAINTS(bool)", AS_METHODPR(IKSolver, SetCONSTRAINTS, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetCONSTRAINTS(bool enable)", "void set_CONSTRAINTS(bool)", AS_METHODPR(IKSolver, SetCONSTRAINTS, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetAUTO_SOLVE(bool enable)", "void SetAUTO_SOLVE(bool)", AS_METHODPR(IKSolver, SetAUTO_SOLVE, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IKSolver::SetAUTO_SOLVE(bool enable)", "void set_AUTO_SOLVE(bool)", AS_METHODPR(IKSolver, SetAUTO_SOLVE, (bool), void), AS_CALL_THISCALL));

    // static void IKSolver::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBER_MANUAL_PART_IKSolver
        REGISTER_MEMBER_MANUAL_PART_IKSolver();
    #endif
}

#endif // def URHO3D_IK

} // namespace Urho3D
