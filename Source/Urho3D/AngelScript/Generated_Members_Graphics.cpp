// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// class AllContentOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_AllContentOctreeQuery(MemberCollection& members)
{
    // void AllContentOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
    // Error: type "Drawable**" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("Intersection AllContentOctreeQuery::TestOctant(const BoundingBox& box, bool inside) override", "Intersection TestOctant(const BoundingBox&in, bool)", AS_METHODPR(AllContentOctreeQuery, TestOctant, (const BoundingBox&, bool), Intersection), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AllContentOctreeQuery
        REGISTER_MEMBERS_MANUAL_PART_AllContentOctreeQuery();
    #endif
}

// const Vector<SharedPtr<AnimationState>>& AnimatedModel::GetAnimationStates() const
// const Vector<SharedPtr<AnimationState>>& AnimatedModel::GetAnimationStates() const | File: ../Graphics/AnimatedModel.h
static CScriptArray* AnimatedModel_GetAnimationStates_void(AnimatedModel* ptr)
{
    const Vector<SharedPtr<AnimationState>>& result = ptr->GetAnimationStates();
    return VectorToHandleArray(result, "Array<AnimationState@>");
}


// const Vector<SharedPtr<VertexBuffer>>& AnimatedModel::GetMorphVertexBuffers() const
// const Vector<SharedPtr<VertexBuffer>>& AnimatedModel::GetMorphVertexBuffers() const | File: ../Graphics/AnimatedModel.h
static CScriptArray* AnimatedModel_GetMorphVertexBuffers_void(AnimatedModel* ptr)
{
    const Vector<SharedPtr<VertexBuffer>>& result = ptr->GetMorphVertexBuffers();
    return VectorToHandleArray(result, "Array<VertexBuffer@>");
}


// class AnimatedModel | File: ../Graphics/AnimatedModel.h
void CollectMembers_AnimatedModel(MemberCollection& members)
{
    CollectMembers_StaticModel(members);

    Remove(members.methods_, "ResourceRef StaticModel::GetModelAttr() const");
    Remove(members.methods_, "bool Animatable::LoadJSON(const JSONValue& source) override");
    Remove(members.methods_, "bool Animatable::LoadXML(const XMLElement& source) override");
    Remove(members.methods_, "virtual UpdateGeometryType Drawable::GetUpdateGeometryType()");
    Remove(members.methods_, "virtual bool Serializable::Load(Deserializer& source)");
    Remove(members.methods_, "virtual void Drawable::Update(const FrameInfo& frame)");
    Remove(members.methods_, "virtual void Drawable::UpdateGeometry(const FrameInfo& frame)");
    Remove(members.methods_, "virtual void Serializable::ApplyAttributes()");
    Remove(members.methods_, "virtual void StaticModel::SetModel(Model* model)");
    Remove(members.methods_, "void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override");
    Remove(members.methods_, "void StaticModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override");
    Remove(members.methods_, "void StaticModel::SetModelAttr(const ResourceRef& value)");
    Remove(members.methods_, "void StaticModel::UpdateBatches(const FrameInfo& frame) override");

    Remove(members.staticMethods_, "static void StaticModel::RegisterObject(Context* context)");

    // VariantVector AnimatedModel::GetAnimationStatesAttr() const
    // Error: type "VariantVector" can not automatically bind
    // VariantVector AnimatedModel::GetBonesEnabledAttr() const
    // Error: type "VariantVector" can not automatically bind
    // const Vector<PODVector<unsigned>>& AnimatedModel::GetGeometryBoneMappings() const
    // Error: type "const Vector<PODVector<unsigned>>&" can not automatically bind
    // const Vector<PODVector<Matrix3x4>>& AnimatedModel::GetGeometrySkinMatrices() const
    // Error: type "const Vector<PODVector<Matrix3x4>>&" can not automatically bind
    // const Vector<ModelMorph>& AnimatedModel::GetMorphs() const
    // Error: type "const Vector<ModelMorph>&" can not automatically bind
    // const PODVector<unsigned char>& AnimatedModel::GetMorphsAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // void AnimatedModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
    // void AnimatedModel::SetAnimationStatesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
    // void AnimatedModel::SetBonesEnabledAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
    // void AnimatedModel::SetMorphsAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool AnimatedModel::Load(Deserializer& source) override", "bool Load(Deserializer&)", AS_METHODPR(AnimatedModel, Load, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimatedModel::LoadXML(const XMLElement& source) override", "bool LoadXML(const XMLElement&in)", AS_METHODPR(AnimatedModel, LoadXML, (const XMLElement&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimatedModel::LoadJSON(const JSONValue& source) override", "bool LoadJSON(const JSONValue&in)", AS_METHODPR(AnimatedModel, LoadJSON, (const JSONValue&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(AnimatedModel, ApplyAttributes, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::Update(const FrameInfo& frame) override", "void Update(const FrameInfo&in)", AS_METHODPR(AnimatedModel, Update, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(AnimatedModel, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::UpdateGeometry(const FrameInfo& frame) override", "void UpdateGeometry(const FrameInfo&in)", AS_METHODPR(AnimatedModel, UpdateGeometry, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("UpdateGeometryType AnimatedModel::GetUpdateGeometryType() override", "UpdateGeometryType GetUpdateGeometryType()", AS_METHODPR(AnimatedModel, GetUpdateGeometryType, (), UpdateGeometryType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(AnimatedModel, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetModel(Model* model, bool createBones=true)", "void SetModel(Model@+, bool = true)", AS_METHODPR(AnimatedModel, SetModel, (Model*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationState* AnimatedModel::AddAnimationState(Animation* animation)", "AnimationState@+ AddAnimationState(Animation@+)", AS_METHODPR(AnimatedModel, AddAnimationState, (Animation*), AnimationState*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::RemoveAnimationState(Animation* animation)", "void RemoveAnimationState(Animation@+)", AS_METHODPR(AnimatedModel, RemoveAnimationState, (Animation*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::RemoveAnimationState(const String& animationName)", "void RemoveAnimationState(const String&in)", AS_METHODPR(AnimatedModel, RemoveAnimationState, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::RemoveAnimationState(StringHash animationNameHash)", "void RemoveAnimationState(StringHash)", AS_METHODPR(AnimatedModel, RemoveAnimationState, (StringHash), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::RemoveAnimationState(AnimationState* state)", "void RemoveAnimationState(AnimationState@+)", AS_METHODPR(AnimatedModel, RemoveAnimationState, (AnimationState*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::RemoveAnimationState(unsigned index)", "void RemoveAnimationState(uint)", AS_METHODPR(AnimatedModel, RemoveAnimationState, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::RemoveAllAnimationStates()", "void RemoveAllAnimationStates()", AS_METHODPR(AnimatedModel, RemoveAllAnimationStates, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetAnimationLodBias(float bias)", "void SetAnimationLodBias(float)", AS_METHODPR(AnimatedModel, SetAnimationLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetAnimationLodBias(float bias)", "void set_animationLodBias(float)", AS_METHODPR(AnimatedModel, SetAnimationLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetUpdateInvisible(bool enable)", "void SetUpdateInvisible(bool)", AS_METHODPR(AnimatedModel, SetUpdateInvisible, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetUpdateInvisible(bool enable)", "void set_updateInvisible(bool)", AS_METHODPR(AnimatedModel, SetUpdateInvisible, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetMorphWeight(unsigned index, float weight)", "void SetMorphWeight(uint, float)", AS_METHODPR(AnimatedModel, SetMorphWeight, (unsigned, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetMorphWeight(const String& name, float weight)", "void SetMorphWeight(const String&in, float)", AS_METHODPR(AnimatedModel, SetMorphWeight, (const String&, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetMorphWeight(const String& name, float weight)", "void set_morphWeights(const String&in, float)", AS_METHODPR(AnimatedModel, SetMorphWeight, (const String&, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetMorphWeight(StringHash nameHash, float weight)", "void SetMorphWeight(StringHash, float)", AS_METHODPR(AnimatedModel, SetMorphWeight, (StringHash, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::ResetMorphWeights()", "void ResetMorphWeights()", AS_METHODPR(AnimatedModel, ResetMorphWeights, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::ApplyAnimation()", "void ApplyAnimation()", AS_METHODPR(AnimatedModel, ApplyAnimation, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Skeleton& AnimatedModel::GetSkeleton()", "Skeleton& GetSkeleton()", AS_METHODPR(AnimatedModel, GetSkeleton, (), Skeleton&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Skeleton& AnimatedModel::GetSkeleton()", "Skeleton& get_skeleton()", AS_METHODPR(AnimatedModel, GetSkeleton, (), Skeleton&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<AnimationState>>& AnimatedModel::GetAnimationStates() const", "Array<AnimationState@>@ GetAnimationStates() const", AS_FUNCTION_OBJFIRST(AnimatedModel_GetAnimationStates_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned AnimatedModel::GetNumAnimationStates() const", "uint GetNumAnimationStates() const", AS_METHODPR(AnimatedModel, GetNumAnimationStates, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned AnimatedModel::GetNumAnimationStates() const", "uint get_numAnimationStates() const", AS_METHODPR(AnimatedModel, GetNumAnimationStates, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationState* AnimatedModel::GetAnimationState(Animation* animation) const", "AnimationState@+ GetAnimationState(Animation@+) const", AS_METHODPR(AnimatedModel, GetAnimationState, (Animation*) const, AnimationState*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationState* AnimatedModel::GetAnimationState(const String& animationName) const", "AnimationState@+ GetAnimationState(const String&in) const", AS_METHODPR(AnimatedModel, GetAnimationState, (const String&) const, AnimationState*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationState* AnimatedModel::GetAnimationState(const String& animationName) const", "AnimationState@+ get_animationStates(const String&in) const", AS_METHODPR(AnimatedModel, GetAnimationState, (const String&) const, AnimationState*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationState* AnimatedModel::GetAnimationState(StringHash animationNameHash) const", "AnimationState@+ GetAnimationState(StringHash) const", AS_METHODPR(AnimatedModel, GetAnimationState, (StringHash) const, AnimationState*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationState* AnimatedModel::GetAnimationState(unsigned index) const", "AnimationState@+ GetAnimationState(uint) const", AS_METHODPR(AnimatedModel, GetAnimationState, (unsigned) const, AnimationState*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimatedModel::GetAnimationLodBias() const", "float GetAnimationLodBias() const", AS_METHODPR(AnimatedModel, GetAnimationLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimatedModel::GetAnimationLodBias() const", "float get_animationLodBias() const", AS_METHODPR(AnimatedModel, GetAnimationLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimatedModel::GetUpdateInvisible() const", "bool GetUpdateInvisible() const", AS_METHODPR(AnimatedModel, GetUpdateInvisible, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimatedModel::GetUpdateInvisible() const", "bool get_updateInvisible() const", AS_METHODPR(AnimatedModel, GetUpdateInvisible, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<VertexBuffer>>& AnimatedModel::GetMorphVertexBuffers() const", "Array<VertexBuffer@>@ GetMorphVertexBuffers() const", AS_FUNCTION_OBJFIRST(AnimatedModel_GetMorphVertexBuffers_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned AnimatedModel::GetNumMorphs() const", "uint GetNumMorphs() const", AS_METHODPR(AnimatedModel, GetNumMorphs, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned AnimatedModel::GetNumMorphs() const", "uint get_numMorphs() const", AS_METHODPR(AnimatedModel, GetNumMorphs, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimatedModel::GetMorphWeight(unsigned index) const", "float GetMorphWeight(uint) const", AS_METHODPR(AnimatedModel, GetMorphWeight, (unsigned) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimatedModel::GetMorphWeight(const String& name) const", "float GetMorphWeight(const String&in) const", AS_METHODPR(AnimatedModel, GetMorphWeight, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimatedModel::GetMorphWeight(const String& name) const", "float get_morphWeights(const String&in) const", AS_METHODPR(AnimatedModel, GetMorphWeight, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimatedModel::GetMorphWeight(StringHash nameHash) const", "float GetMorphWeight(StringHash) const", AS_METHODPR(AnimatedModel, GetMorphWeight, (StringHash) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimatedModel::IsMaster() const", "bool IsMaster() const", AS_METHODPR(AnimatedModel, IsMaster, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetModelAttr(const ResourceRef& value)", "void SetModelAttr(const ResourceRef&in)", AS_METHODPR(AnimatedModel, SetModelAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef AnimatedModel::GetModelAttr() const", "ResourceRef GetModelAttr() const", AS_METHODPR(AnimatedModel, GetModelAttr, () const, ResourceRef), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::UpdateBoneBoundingBox()", "void UpdateBoneBoundingBox()", AS_METHODPR(AnimatedModel, UpdateBoneBoundingBox, (), void), AS_CALL_THISCALL));

    // static void AnimatedModel::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AnimatedModel
        REGISTER_MEMBERS_MANUAL_PART_AnimatedModel();
    #endif
}

// SharedPtr<Animation> Animation::Clone(const String& cloneName=String::EMPTY) const
// SharedPtr<Animation> Animation::Clone(const String& cloneName=String::EMPTY) const | File: ../Graphics/Animation.h
static Animation* Animation_Clone_String(Animation* ptr, const String& cloneName)
{
    SharedPtr<Animation> result = ptr->Clone(cloneName);
    return result.Detach();
}


// class Animation | File: ../Graphics/Animation.h
void CollectMembers_Animation(MemberCollection& members)
{
    CollectMembers_ResourceWithMetadata(members);

    Remove(members.methods_, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::Save(Serializer& dest) const");

    // const HashMap<StringHash, AnimationTrack>& Animation::GetTracks() const
    // Error: type "const HashMap<StringHash, AnimationTrack>&" can not automatically bind
    // AnimationTriggerPoint* Animation::GetTrigger(unsigned index)
    // Error: type "AnimationTriggerPoint*" can not automatically bind
    // const Vector<AnimationTriggerPoint>& Animation::GetTriggers() const
    // Error: type "const Vector<AnimationTriggerPoint>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool Animation::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Animation, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Animation::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(Animation, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::SetAnimationName(const String& name)", "void SetAnimationName(const String&in)", AS_METHODPR(Animation, SetAnimationName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::SetAnimationName(const String& name)", "void set_animationName(const String&in)", AS_METHODPR(Animation, SetAnimationName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::SetLength(float length)", "void SetLength(float)", AS_METHODPR(Animation, SetLength, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::SetLength(float length)", "void set_length(float)", AS_METHODPR(Animation, SetLength, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationTrack* Animation::CreateTrack(const String& name)", "AnimationTrack@+ CreateTrack(const String&in)", AS_METHODPR(Animation, CreateTrack, (const String&), AnimationTrack*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Animation::RemoveTrack(const String& name)", "bool RemoveTrack(const String&in)", AS_METHODPR(Animation, RemoveTrack, (const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::RemoveAllTracks()", "void RemoveAllTracks()", AS_METHODPR(Animation, RemoveAllTracks, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::SetTrigger(unsigned index, const AnimationTriggerPoint& trigger)", "void SetTrigger(uint, const AnimationTriggerPoint&in)", AS_METHODPR(Animation, SetTrigger, (unsigned, const AnimationTriggerPoint&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::SetTrigger(unsigned index, const AnimationTriggerPoint& trigger)", "void set_triggers(uint, const AnimationTriggerPoint&in)", AS_METHODPR(Animation, SetTrigger, (unsigned, const AnimationTriggerPoint&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::AddTrigger(const AnimationTriggerPoint& trigger)", "void AddTrigger(const AnimationTriggerPoint&in)", AS_METHODPR(Animation, AddTrigger, (const AnimationTriggerPoint&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::AddTrigger(float time, bool timeIsNormalized, const Variant& data)", "void AddTrigger(float, bool, const Variant&in)", AS_METHODPR(Animation, AddTrigger, (float, bool, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::RemoveTrigger(unsigned index)", "void RemoveTrigger(uint)", AS_METHODPR(Animation, RemoveTrigger, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::RemoveAllTriggers()", "void RemoveAllTriggers()", AS_METHODPR(Animation, RemoveAllTriggers, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::SetNumTriggers(unsigned num)", "void SetNumTriggers(uint)", AS_METHODPR(Animation, SetNumTriggers, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Animation::SetNumTriggers(unsigned num)", "void set_numTriggers(uint)", AS_METHODPR(Animation, SetNumTriggers, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<Animation> Animation::Clone(const String& cloneName=String::EMPTY) const", "Animation@+ Clone(const String&in = String::EMPTY) const", AS_FUNCTION_OBJFIRST(Animation_Clone_String), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Animation::GetAnimationName() const", "const String& GetAnimationName() const", AS_METHODPR(Animation, GetAnimationName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Animation::GetAnimationName() const", "const String& get_animationName() const", AS_METHODPR(Animation, GetAnimationName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("StringHash Animation::GetAnimationNameHash() const", "StringHash GetAnimationNameHash() const", AS_METHODPR(Animation, GetAnimationNameHash, () const, StringHash), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Animation::GetLength() const", "float GetLength() const", AS_METHODPR(Animation, GetLength, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Animation::GetLength() const", "float get_length() const", AS_METHODPR(Animation, GetLength, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Animation::GetNumTracks() const", "uint GetNumTracks() const", AS_METHODPR(Animation, GetNumTracks, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Animation::GetNumTracks() const", "uint get_numTracks() const", AS_METHODPR(Animation, GetNumTracks, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationTrack* Animation::GetTrack(unsigned index)", "AnimationTrack@+ GetTrack(uint)", AS_METHODPR(Animation, GetTrack, (unsigned), AnimationTrack*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationTrack* Animation::GetTrack(const String& name)", "AnimationTrack@+ GetTrack(const String&in)", AS_METHODPR(Animation, GetTrack, (const String&), AnimationTrack*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationTrack* Animation::GetTrack(const String& name)", "AnimationTrack@+ get_tracks(const String&in)", AS_METHODPR(Animation, GetTrack, (const String&), AnimationTrack*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationTrack* Animation::GetTrack(StringHash nameHash)", "AnimationTrack@+ GetTrack(StringHash)", AS_METHODPR(Animation, GetTrack, (StringHash), AnimationTrack*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Animation::GetNumTriggers() const", "uint GetNumTriggers() const", AS_METHODPR(Animation, GetNumTriggers, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Animation::GetNumTriggers() const", "uint get_numTriggers() const", AS_METHODPR(Animation, GetNumTriggers, () const, unsigned), AS_CALL_THISCALL));

    // static void Animation::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Animation
        REGISTER_MEMBERS_MANUAL_PART_Animation();
    #endif
}

// struct AnimationControl | File: ../Graphics/AnimationController.h
void CollectMembers_AnimationControl(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("String AnimationControl::name_", "String name", offsetof(AnimationControl, name_)));
    members.fields_.Push(RegisterObjectPropertyArgs("StringHash AnimationControl::hash_", "StringHash hash", offsetof(AnimationControl, hash_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float AnimationControl::speed_", "float speed", offsetof(AnimationControl, speed_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float AnimationControl::targetWeight_", "float targetWeight", offsetof(AnimationControl, targetWeight_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float AnimationControl::fadeTime_", "float fadeTime", offsetof(AnimationControl, fadeTime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float AnimationControl::autoFadeTime_", "float autoFadeTime", offsetof(AnimationControl, autoFadeTime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float AnimationControl::setTimeTtl_", "float setTimeTtl", offsetof(AnimationControl, setTimeTtl_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float AnimationControl::setWeightTtl_", "float setWeightTtl", offsetof(AnimationControl, setWeightTtl_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned short AnimationControl::setTime_", "uint16 setTime", offsetof(AnimationControl, setTime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned char AnimationControl::setWeight_", "uint8 setWeight", offsetof(AnimationControl, setWeight_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned char AnimationControl::setTimeRev_", "uint8 setTimeRev", offsetof(AnimationControl, setTimeRev_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned char AnimationControl::setWeightRev_", "uint8 setWeightRev", offsetof(AnimationControl, setWeightRev_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool AnimationControl::removeOnCompletion_", "bool removeOnCompletion", offsetof(AnimationControl, removeOnCompletion_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AnimationControl
        REGISTER_MEMBERS_MANUAL_PART_AnimationControl();
    #endif
}

// class AnimationController | File: ../Graphics/AnimationController.h
void CollectMembers_AnimationController(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.methods_, "virtual void Component::OnSetEnabled()");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // const Vector<AnimationControl>& AnimationController::GetAnimations() const
    // Error: type "const Vector<AnimationControl>&" can not automatically bind
    // VariantVector AnimationController::GetAnimationsAttr() const
    // Error: type "VariantVector" can not automatically bind
    // const PODVector<unsigned char>& AnimationController::GetNetAnimationsAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // VariantVector AnimationController::GetNodeAnimationStatesAttr() const
    // Error: type "VariantVector" can not automatically bind
    // void AnimationController::SetAnimationsAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
    // void AnimationController::SetNetAnimationsAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // void AnimationController::SetNodeAnimationStatesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void AnimationController::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(AnimationController, OnSetEnabled, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void AnimationController::Update(float timeStep)", "void Update(float)", AS_METHODPR(AnimationController, Update, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::Play(const String& name, unsigned char layer, bool looped, float fadeInTime=0.0f)", "bool Play(const String&in, uint8, bool, float = 0.0f)", AS_METHODPR(AnimationController, Play, (const String&, unsigned char, bool, float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::PlayExclusive(const String& name, unsigned char layer, bool looped, float fadeTime=0.0f)", "bool PlayExclusive(const String&in, uint8, bool, float = 0.0f)", AS_METHODPR(AnimationController, PlayExclusive, (const String&, unsigned char, bool, float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::Stop(const String& name, float fadeOutTime=0.0f)", "bool Stop(const String&in, float = 0.0f)", AS_METHODPR(AnimationController, Stop, (const String&, float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationController::StopLayer(unsigned char layer, float fadeOutTime=0.0f)", "void StopLayer(uint8, float = 0.0f)", AS_METHODPR(AnimationController, StopLayer, (unsigned char, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationController::StopAll(float fadeOutTime=0.0f)", "void StopAll(float = 0.0f)", AS_METHODPR(AnimationController, StopAll, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::Fade(const String& name, float targetWeight, float fadeTime)", "bool Fade(const String&in, float, float)", AS_METHODPR(AnimationController, Fade, (const String&, float, float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::FadeOthers(const String& name, float targetWeight, float fadeTime)", "bool FadeOthers(const String&in, float, float)", AS_METHODPR(AnimationController, FadeOthers, (const String&, float, float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::SetLayer(const String& name, unsigned char layer)", "bool SetLayer(const String&in, uint8)", AS_METHODPR(AnimationController, SetLayer, (const String&, unsigned char), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::SetStartBone(const String& name, const String& startBoneName)", "bool SetStartBone(const String&in, const String&in)", AS_METHODPR(AnimationController, SetStartBone, (const String&, const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::SetTime(const String& name, float time)", "bool SetTime(const String&in, float)", AS_METHODPR(AnimationController, SetTime, (const String&, float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::SetWeight(const String& name, float weight)", "bool SetWeight(const String&in, float)", AS_METHODPR(AnimationController, SetWeight, (const String&, float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::SetLooped(const String& name, bool enable)", "bool SetLooped(const String&in, bool)", AS_METHODPR(AnimationController, SetLooped, (const String&, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::SetSpeed(const String& name, float speed)", "bool SetSpeed(const String&in, float)", AS_METHODPR(AnimationController, SetSpeed, (const String&, float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::SetAutoFade(const String& name, float fadeOutTime)", "bool SetAutoFade(const String&in, float)", AS_METHODPR(AnimationController, SetAutoFade, (const String&, float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::SetRemoveOnCompletion(const String& name, bool removeOnCompletion)", "bool SetRemoveOnCompletion(const String&in, bool)", AS_METHODPR(AnimationController, SetRemoveOnCompletion, (const String&, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::SetBlendMode(const String& name, AnimationBlendMode mode)", "bool SetBlendMode(const String&in, AnimationBlendMode)", AS_METHODPR(AnimationController, SetBlendMode, (const String&, AnimationBlendMode), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::IsPlaying(const String& name) const", "bool IsPlaying(const String&in) const", AS_METHODPR(AnimationController, IsPlaying, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::IsPlaying(unsigned char layer) const", "bool IsPlaying(uint8) const", AS_METHODPR(AnimationController, IsPlaying, (unsigned char) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::IsFadingIn(const String& name) const", "bool IsFadingIn(const String&in) const", AS_METHODPR(AnimationController, IsFadingIn, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::IsFadingOut(const String& name) const", "bool IsFadingOut(const String&in) const", AS_METHODPR(AnimationController, IsFadingOut, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::IsAtEnd(const String& name) const", "bool IsAtEnd(const String&in) const", AS_METHODPR(AnimationController, IsAtEnd, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned char AnimationController::GetLayer(const String& name) const", "uint8 GetLayer(const String&in) const", AS_METHODPR(AnimationController, GetLayer, (const String&) const, unsigned char), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Bone* AnimationController::GetStartBone(const String& name) const", "Bone@+ GetStartBone(const String&in) const", AS_METHODPR(AnimationController, GetStartBone, (const String&) const, Bone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& AnimationController::GetStartBoneName(const String& name) const", "const String& GetStartBoneName(const String&in) const", AS_METHODPR(AnimationController, GetStartBoneName, (const String&) const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationController::GetTime(const String& name) const", "float GetTime(const String&in) const", AS_METHODPR(AnimationController, GetTime, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationController::GetWeight(const String& name) const", "float GetWeight(const String&in) const", AS_METHODPR(AnimationController, GetWeight, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::IsLooped(const String& name) const", "bool IsLooped(const String&in) const", AS_METHODPR(AnimationController, IsLooped, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationBlendMode AnimationController::GetBlendMode(const String& name) const", "AnimationBlendMode GetBlendMode(const String&in) const", AS_METHODPR(AnimationController, GetBlendMode, (const String&) const, AnimationBlendMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationController::GetLength(const String& name) const", "float GetLength(const String&in) const", AS_METHODPR(AnimationController, GetLength, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationController::GetSpeed(const String& name) const", "float GetSpeed(const String&in) const", AS_METHODPR(AnimationController, GetSpeed, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationController::GetFadeTarget(const String& name) const", "float GetFadeTarget(const String&in) const", AS_METHODPR(AnimationController, GetFadeTarget, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationController::GetFadeTime(const String& name) const", "float GetFadeTime(const String&in) const", AS_METHODPR(AnimationController, GetFadeTime, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationController::GetAutoFade(const String& name) const", "float GetAutoFade(const String&in) const", AS_METHODPR(AnimationController, GetAutoFade, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationController::GetRemoveOnCompletion(const String& name) const", "bool GetRemoveOnCompletion(const String&in) const", AS_METHODPR(AnimationController, GetRemoveOnCompletion, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationState* AnimationController::GetAnimationState(const String& name) const", "AnimationState@+ GetAnimationState(const String&in) const", AS_METHODPR(AnimationController, GetAnimationState, (const String&) const, AnimationState*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationState* AnimationController::GetAnimationState(StringHash nameHash) const", "AnimationState@+ GetAnimationState(StringHash) const", AS_METHODPR(AnimationController, GetAnimationState, (StringHash) const, AnimationState*), AS_CALL_THISCALL));

    // static void AnimationController::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AnimationController
        REGISTER_MEMBERS_MANUAL_PART_AnimationController();
    #endif
}

// struct AnimationKeyFrame | File: ../Graphics/Animation.h
void CollectMembers_AnimationKeyFrame(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("float AnimationKeyFrame::time_", "float time", offsetof(AnimationKeyFrame, time_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 AnimationKeyFrame::position_", "Vector3 position", offsetof(AnimationKeyFrame, position_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Quaternion AnimationKeyFrame::rotation_", "Quaternion rotation", offsetof(AnimationKeyFrame, rotation_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 AnimationKeyFrame::scale_", "Vector3 scale", offsetof(AnimationKeyFrame, scale_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AnimationKeyFrame
        REGISTER_MEMBERS_MANUAL_PART_AnimationKeyFrame();
    #endif
}

// class AnimationState | File: ../Graphics/AnimationState.h
void CollectMembers_AnimationState(MemberCollection& members)
{
    CollectMembers_RefCounted(members);

    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetStartBone(Bone* startBone)", "void SetStartBone(Bone@+)", AS_METHODPR(AnimationState, SetStartBone, (Bone*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetStartBone(Bone* startBone)", "void set_startBone(Bone@+)", AS_METHODPR(AnimationState, SetStartBone, (Bone*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetLooped(bool looped)", "void SetLooped(bool)", AS_METHODPR(AnimationState, SetLooped, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetLooped(bool looped)", "void set_looped(bool)", AS_METHODPR(AnimationState, SetLooped, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetWeight(float weight)", "void SetWeight(float)", AS_METHODPR(AnimationState, SetWeight, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetWeight(float weight)", "void set_weight(float)", AS_METHODPR(AnimationState, SetWeight, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetBlendMode(AnimationBlendMode mode)", "void SetBlendMode(AnimationBlendMode)", AS_METHODPR(AnimationState, SetBlendMode, (AnimationBlendMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetBlendMode(AnimationBlendMode mode)", "void set_blendMode(AnimationBlendMode)", AS_METHODPR(AnimationState, SetBlendMode, (AnimationBlendMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetTime(float time)", "void SetTime(float)", AS_METHODPR(AnimationState, SetTime, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetTime(float time)", "void set_time(float)", AS_METHODPR(AnimationState, SetTime, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetBoneWeight(unsigned index, float weight, bool recursive=false)", "void SetBoneWeight(uint, float, bool = false)", AS_METHODPR(AnimationState, SetBoneWeight, (unsigned, float, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetBoneWeight(const String& name, float weight, bool recursive=false)", "void SetBoneWeight(const String&in, float, bool = false)", AS_METHODPR(AnimationState, SetBoneWeight, (const String&, float, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetBoneWeight(StringHash nameHash, float weight, bool recursive=false)", "void SetBoneWeight(StringHash, float, bool = false)", AS_METHODPR(AnimationState, SetBoneWeight, (StringHash, float, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::AddWeight(float delta)", "void AddWeight(float)", AS_METHODPR(AnimationState, AddWeight, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::AddTime(float delta)", "void AddTime(float)", AS_METHODPR(AnimationState, AddTime, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetLayer(unsigned char layer)", "void SetLayer(uint8)", AS_METHODPR(AnimationState, SetLayer, (unsigned char), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetLayer(unsigned char layer)", "void set_layer(uint8)", AS_METHODPR(AnimationState, SetLayer, (unsigned char), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Animation* AnimationState::GetAnimation() const", "Animation@+ GetAnimation() const", AS_METHODPR(AnimationState, GetAnimation, () const, Animation*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Animation* AnimationState::GetAnimation() const", "Animation@+ get_animation() const", AS_METHODPR(AnimationState, GetAnimation, () const, Animation*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimatedModel* AnimationState::GetModel() const", "AnimatedModel@+ GetModel() const", AS_METHODPR(AnimationState, GetModel, () const, AnimatedModel*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimatedModel* AnimationState::GetModel() const", "AnimatedModel@+ get_model() const", AS_METHODPR(AnimationState, GetModel, () const, AnimatedModel*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Node* AnimationState::GetNode() const", "Node@+ GetNode() const", AS_METHODPR(AnimationState, GetNode, () const, Node*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Node* AnimationState::GetNode() const", "Node@+ get_node() const", AS_METHODPR(AnimationState, GetNode, () const, Node*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Bone* AnimationState::GetStartBone() const", "Bone@+ GetStartBone() const", AS_METHODPR(AnimationState, GetStartBone, () const, Bone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Bone* AnimationState::GetStartBone() const", "Bone@+ get_startBone() const", AS_METHODPR(AnimationState, GetStartBone, () const, Bone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationState::GetBoneWeight(unsigned index) const", "float GetBoneWeight(uint) const", AS_METHODPR(AnimationState, GetBoneWeight, (unsigned) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationState::GetBoneWeight(const String& name) const", "float GetBoneWeight(const String&in) const", AS_METHODPR(AnimationState, GetBoneWeight, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationState::GetBoneWeight(const String& name) const", "float get_boneWeights(const String&in) const", AS_METHODPR(AnimationState, GetBoneWeight, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationState::GetBoneWeight(StringHash nameHash) const", "float GetBoneWeight(StringHash) const", AS_METHODPR(AnimationState, GetBoneWeight, (StringHash) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned AnimationState::GetTrackIndex(Node* node) const", "uint GetTrackIndex(Node@+) const", AS_METHODPR(AnimationState, GetTrackIndex, (Node*) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned AnimationState::GetTrackIndex(const String& name) const", "uint GetTrackIndex(const String&in) const", AS_METHODPR(AnimationState, GetTrackIndex, (const String&) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned AnimationState::GetTrackIndex(StringHash nameHash) const", "uint GetTrackIndex(StringHash) const", AS_METHODPR(AnimationState, GetTrackIndex, (StringHash) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationState::IsEnabled() const", "bool IsEnabled() const", AS_METHODPR(AnimationState, IsEnabled, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationState::IsEnabled() const", "bool get_enabled() const", AS_METHODPR(AnimationState, IsEnabled, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationState::IsLooped() const", "bool IsLooped() const", AS_METHODPR(AnimationState, IsLooped, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationState::IsLooped() const", "bool get_looped() const", AS_METHODPR(AnimationState, IsLooped, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationState::GetWeight() const", "float GetWeight() const", AS_METHODPR(AnimationState, GetWeight, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationState::GetWeight() const", "float get_weight() const", AS_METHODPR(AnimationState, GetWeight, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationBlendMode AnimationState::GetBlendMode() const", "AnimationBlendMode GetBlendMode() const", AS_METHODPR(AnimationState, GetBlendMode, () const, AnimationBlendMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AnimationBlendMode AnimationState::GetBlendMode() const", "AnimationBlendMode get_blendMode() const", AS_METHODPR(AnimationState, GetBlendMode, () const, AnimationBlendMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationState::GetTime() const", "float GetTime() const", AS_METHODPR(AnimationState, GetTime, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationState::GetTime() const", "float get_time() const", AS_METHODPR(AnimationState, GetTime, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationState::GetLength() const", "float GetLength() const", AS_METHODPR(AnimationState, GetLength, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float AnimationState::GetLength() const", "float get_length() const", AS_METHODPR(AnimationState, GetLength, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned char AnimationState::GetLayer() const", "uint8 GetLayer() const", AS_METHODPR(AnimationState, GetLayer, () const, unsigned char), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned char AnimationState::GetLayer() const", "uint8 get_layer() const", AS_METHODPR(AnimationState, GetLayer, () const, unsigned char), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::Apply()", "void Apply()", AS_METHODPR(AnimationState, Apply, (), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AnimationState
        REGISTER_MEMBERS_MANUAL_PART_AnimationState();
    #endif
}

// struct AnimationStateTrack | File: ../Graphics/AnimationState.h
void CollectMembers_AnimationStateTrack(MemberCollection& members)
{
    // const AnimationTrack* AnimationStateTrack::track_
    // Not registered because pointer
    // Bone* AnimationStateTrack::bone_
    // Not registered because pointer
    // WeakPtr<Node> AnimationStateTrack::node_
    // Error: type "WeakPtr<Node>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("float AnimationStateTrack::weight_", "float weight", offsetof(AnimationStateTrack, weight_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned AnimationStateTrack::keyFrame_", "uint keyFrame", offsetof(AnimationStateTrack, keyFrame_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AnimationStateTrack
        REGISTER_MEMBERS_MANUAL_PART_AnimationStateTrack();
    #endif
}

// struct AnimationTrack | File: ../Graphics/Animation.h
void CollectMembers_AnimationTrack(MemberCollection& members)
{
    // AnimationKeyFrame* AnimationTrack::GetKeyFrame(unsigned index)
    // Error: type "AnimationKeyFrame*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void AnimationTrack::SetKeyFrame(unsigned index, const AnimationKeyFrame& keyFrame)", "void SetKeyFrame(uint, const AnimationKeyFrame&in)", AS_METHODPR(AnimationTrack, SetKeyFrame, (unsigned, const AnimationKeyFrame&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationTrack::SetKeyFrame(unsigned index, const AnimationKeyFrame& keyFrame)", "void set_keyFrames(uint, const AnimationKeyFrame&in)", AS_METHODPR(AnimationTrack, SetKeyFrame, (unsigned, const AnimationKeyFrame&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationTrack::AddKeyFrame(const AnimationKeyFrame& keyFrame)", "void AddKeyFrame(const AnimationKeyFrame&in)", AS_METHODPR(AnimationTrack, AddKeyFrame, (const AnimationKeyFrame&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationTrack::InsertKeyFrame(unsigned index, const AnimationKeyFrame& keyFrame)", "void InsertKeyFrame(uint, const AnimationKeyFrame&in)", AS_METHODPR(AnimationTrack, InsertKeyFrame, (unsigned, const AnimationKeyFrame&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationTrack::RemoveKeyFrame(unsigned index)", "void RemoveKeyFrame(uint)", AS_METHODPR(AnimationTrack, RemoveKeyFrame, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationTrack::RemoveAllKeyFrames()", "void RemoveAllKeyFrames()", AS_METHODPR(AnimationTrack, RemoveAllKeyFrames, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned AnimationTrack::GetNumKeyFrames() const", "uint GetNumKeyFrames() const", AS_METHODPR(AnimationTrack, GetNumKeyFrames, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned AnimationTrack::GetNumKeyFrames() const", "uint get_numKeyFrames() const", AS_METHODPR(AnimationTrack, GetNumKeyFrames, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool AnimationTrack::GetKeyFrameIndex(float time, unsigned& index) const", "bool GetKeyFrameIndex(float, uint&) const", AS_METHODPR(AnimationTrack, GetKeyFrameIndex, (float, unsigned&) const, bool), AS_CALL_THISCALL));

    // Vector<AnimationKeyFrame> AnimationTrack::keyFrames_
    // Error: type "Vector<AnimationKeyFrame>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("String AnimationTrack::name_", "String name", offsetof(AnimationTrack, name_)));
    members.fields_.Push(RegisterObjectPropertyArgs("StringHash AnimationTrack::nameHash_", "StringHash nameHash", offsetof(AnimationTrack, nameHash_)));
    members.fields_.Push(RegisterObjectPropertyArgs("AnimationChannelFlags AnimationTrack::channelMask_", "AnimationChannelFlags channelMask", offsetof(AnimationTrack, channelMask_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AnimationTrack
        REGISTER_MEMBERS_MANUAL_PART_AnimationTrack();
    #endif
}

// struct AnimationTriggerPoint | File: ../Graphics/Animation.h
void CollectMembers_AnimationTriggerPoint(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("float AnimationTriggerPoint::time_", "float time", offsetof(AnimationTriggerPoint, time_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Variant AnimationTriggerPoint::data_", "Variant data", offsetof(AnimationTriggerPoint, data_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AnimationTriggerPoint
        REGISTER_MEMBERS_MANUAL_PART_AnimationTriggerPoint();
    #endif
}

// struct Batch | File: ../Graphics/Batch.h
void CollectMembers_Batch(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("void Batch::CalculateSortKey()", "void CalculateSortKey()", AS_METHODPR(Batch, CalculateSortKey, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Batch::Prepare(View* view, Camera* camera, bool setModelTransform, bool allowDepthWrite) const", "void Prepare(View@+, Camera@+, bool, bool) const", AS_METHODPR(Batch, Prepare, (View*, Camera*, bool, bool) const, void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Batch::Draw(View* view, Camera* camera, bool allowDepthWrite) const", "void Draw(View@+, Camera@+, bool) const", AS_METHODPR(Batch, Draw, (View*, Camera*, bool) const, void), AS_CALL_THISCALL));

    // Geometry* Batch::geometry_
    // Not registered because pointer
    // Material* Batch::material_
    // Not registered because pointer
    // const Matrix3x4* Batch::worldTransform_
    // Not registered because pointer
    // void* Batch::instancingData_
    // Not registered because pointer
    // Zone* Batch::zone_
    // Not registered because pointer
    // LightBatchQueue* Batch::lightQueue_
    // Not registered because pointer
    // Pass* Batch::pass_
    // Not registered because pointer
    // ShaderVariation* Batch::vertexShader_
    // Not registered because pointer
    // ShaderVariation* Batch::pixelShader_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned long long Batch::sortKey_", "uint64 sortKey", offsetof(Batch, sortKey_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float Batch::distance_", "float distance", offsetof(Batch, distance_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned char Batch::renderOrder_", "uint8 renderOrder", offsetof(Batch, renderOrder_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned char Batch::lightMask_", "uint8 lightMask", offsetof(Batch, lightMask_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool Batch::isBase_", "bool isBase", offsetof(Batch, isBase_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned Batch::numWorldTransforms_", "uint numWorldTransforms", offsetof(Batch, numWorldTransforms_)));
    members.fields_.Push(RegisterObjectPropertyArgs("GeometryType Batch::geometryType_", "GeometryType geometryType", offsetof(Batch, geometryType_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Batch
        REGISTER_MEMBERS_MANUAL_PART_Batch();
    #endif
}

// struct BatchGroup | File: ../Graphics/Batch.h
void CollectMembers_BatchGroup(MemberCollection& members)
{
    CollectMembers_Batch(members);

    Remove(members.methods_, "void Batch::Draw(View* view, Camera* camera, bool allowDepthWrite) const");

    // void BatchGroup::SetInstancingData(void* lockedData, unsigned stride, unsigned& freeIndex)
    // Error: type "void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void BatchGroup::AddTransforms(const Batch& batch)", "void AddTransforms(const Batch&in)", AS_METHODPR(BatchGroup, AddTransforms, (const Batch&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BatchGroup::Draw(View* view, Camera* camera, bool allowDepthWrite) const", "void Draw(View@+, Camera@+, bool) const", AS_METHODPR(BatchGroup, Draw, (View*, Camera*, bool) const, void), AS_CALL_THISCALL));

    // PODVector<InstanceData> BatchGroup::instances_
    // Error: type "PODVector<InstanceData>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned BatchGroup::startIndex_", "uint startIndex", offsetof(BatchGroup, startIndex_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_BatchGroup
        REGISTER_MEMBERS_MANUAL_PART_BatchGroup();
    #endif
}

// struct BatchGroupKey | File: ../Graphics/Batch.h
void CollectMembers_BatchGroupKey(MemberCollection& members)
{
    // bool BatchGroupKey::operator!=(const BatchGroupKey& rhs) const
    // Only operator== is needed

    members.methods_.Push(RegisterObjectMethodArgs("bool BatchGroupKey::operator==(const BatchGroupKey& rhs) const", "bool opEquals(const BatchGroupKey&in) const", AS_METHODPR(BatchGroupKey, operator==, (const BatchGroupKey&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned BatchGroupKey::ToHash() const", "uint ToHash() const", AS_METHODPR(BatchGroupKey, ToHash, () const, unsigned), AS_CALL_THISCALL));

    // Zone* BatchGroupKey::zone_
    // Not registered because pointer
    // LightBatchQueue* BatchGroupKey::lightQueue_
    // Not registered because pointer
    // Pass* BatchGroupKey::pass_
    // Not registered because pointer
    // Material* BatchGroupKey::material_
    // Not registered because pointer
    // Geometry* BatchGroupKey::geometry_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned char BatchGroupKey::renderOrder_", "uint8 renderOrder", offsetof(BatchGroupKey, renderOrder_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_BatchGroupKey
        REGISTER_MEMBERS_MANUAL_PART_BatchGroupKey();
    #endif
}

// struct BatchQueue | File: ../Graphics/Batch.h
void CollectMembers_BatchQueue(MemberCollection& members)
{
    // void BatchQueue::SetInstancingData(void* lockedData, unsigned stride, unsigned& freeIndex)
    // Error: type "void*" can not automatically bind
    // void BatchQueue::SortFrontToBack2Pass(PODVector<Batch*>& batches)
    // Error: type "PODVector<Batch*>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void BatchQueue::Clear(int maxSortedInstances)", "void Clear(int)", AS_METHODPR(BatchQueue, Clear, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BatchQueue::SortBackToFront()", "void SortBackToFront()", AS_METHODPR(BatchQueue, SortBackToFront, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BatchQueue::SortFrontToBack()", "void SortFrontToBack()", AS_METHODPR(BatchQueue, SortFrontToBack, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BatchQueue::Draw(View* view, Camera* camera, bool markToStencil, bool usingLightOptimization, bool allowDepthWrite) const", "void Draw(View@+, Camera@+, bool, bool, bool) const", AS_METHODPR(BatchQueue, Draw, (View*, Camera*, bool, bool, bool) const, void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned BatchQueue::GetNumInstances() const", "uint GetNumInstances() const", AS_METHODPR(BatchQueue, GetNumInstances, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool BatchQueue::IsEmpty() const", "bool IsEmpty() const", AS_METHODPR(BatchQueue, IsEmpty, () const, bool), AS_CALL_THISCALL));

    // HashMap<BatchGroupKey, BatchGroup> BatchQueue::batchGroups_
    // Error: type "HashMap<BatchGroupKey, BatchGroup>" can not automatically bind
    // HashMap<unsigned, unsigned> BatchQueue::shaderRemapping_
    // Error: type "HashMap<unsigned, unsigned>" can not automatically bind
    // HashMap<unsigned short, unsigned short> BatchQueue::materialRemapping_
    // Error: type "HashMap<unsigned short, unsigned short>" can not automatically bind
    // HashMap<unsigned short, unsigned short> BatchQueue::geometryRemapping_
    // Error: type "HashMap<unsigned short, unsigned short>" can not automatically bind
    // PODVector<Batch> BatchQueue::batches_
    // Error: type "PODVector<Batch>" can not automatically bind
    // PODVector<Batch*> BatchQueue::sortedBatches_
    // Error: type "PODVector<Batch*>" can not automatically bind
    // PODVector<BatchGroup*> BatchQueue::sortedBatchGroups_
    // Error: type "PODVector<BatchGroup*>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned BatchQueue::maxSortedInstances_", "uint maxSortedInstances", offsetof(BatchQueue, maxSortedInstances_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool BatchQueue::hasExtraDefines_", "bool hasExtraDefines", offsetof(BatchQueue, hasExtraDefines_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String BatchQueue::vsExtraDefines_", "String vsExtraDefines", offsetof(BatchQueue, vsExtraDefines_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String BatchQueue::psExtraDefines_", "String psExtraDefines", offsetof(BatchQueue, psExtraDefines_)));
    members.fields_.Push(RegisterObjectPropertyArgs("StringHash BatchQueue::vsExtraDefinesHash_", "StringHash vsExtraDefinesHash", offsetof(BatchQueue, vsExtraDefinesHash_)));
    members.fields_.Push(RegisterObjectPropertyArgs("StringHash BatchQueue::psExtraDefinesHash_", "StringHash psExtraDefinesHash", offsetof(BatchQueue, psExtraDefinesHash_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_BatchQueue
        REGISTER_MEMBERS_MANUAL_PART_BatchQueue();
    #endif
}

// struct BiasParameters | File: ../Graphics/Light.h
void CollectMembers_BiasParameters(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("void BiasParameters::Validate()", "void Validate()", AS_METHODPR(BiasParameters, Validate, (), void), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("float BiasParameters::constantBias_", "float constantBias", offsetof(BiasParameters, constantBias_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float BiasParameters::slopeScaledBias_", "float slopeScaledBias", offsetof(BiasParameters, slopeScaledBias_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float BiasParameters::normalOffset_", "float normalOffset", offsetof(BiasParameters, normalOffset_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_BiasParameters
        REGISTER_MEMBERS_MANUAL_PART_BiasParameters();
    #endif
}

// struct Billboard | File: ../Graphics/BillboardSet.h
void CollectMembers_Billboard(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 Billboard::position_", "Vector3 position", offsetof(Billboard, position_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector2 Billboard::size_", "Vector2 size", offsetof(Billboard, size_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Rect Billboard::uv_", "Rect uv", offsetof(Billboard, uv_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Color Billboard::color_", "Color color", offsetof(Billboard, color_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float Billboard::rotation_", "float rotation", offsetof(Billboard, rotation_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 Billboard::direction_", "Vector3 direction", offsetof(Billboard, direction_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool Billboard::enabled_", "bool enabled", offsetof(Billboard, enabled_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float Billboard::sortDistance_", "float sortDistance", offsetof(Billboard, sortDistance_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float Billboard::screenScaleFactor_", "float screenScaleFactor", offsetof(Billboard, screenScaleFactor_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Billboard
        REGISTER_MEMBERS_MANUAL_PART_Billboard();
    #endif
}

// class BillboardSet | File: ../Graphics/BillboardSet.h
void CollectMembers_BillboardSet(MemberCollection& members)
{
    CollectMembers_Drawable(members);

    Remove(members.methods_, "virtual UpdateGeometryType Drawable::GetUpdateGeometryType()");
    Remove(members.methods_, "virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)");
    Remove(members.methods_, "virtual void Drawable::UpdateBatches(const FrameInfo& frame)");
    Remove(members.methods_, "virtual void Drawable::UpdateGeometry(const FrameInfo& frame)");

    Remove(members.staticMethods_, "static void Drawable::RegisterObject(Context* context)");

    // PODVector<Billboard>& BillboardSet::GetBillboards()
    // Error: type "PODVector<Billboard>&" can not automatically bind
    // VariantVector BillboardSet::GetBillboardsAttr() const
    // Error: type "VariantVector" can not automatically bind
    // const PODVector<unsigned char>& BillboardSet::GetNetBillboardsAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // void BillboardSet::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
    // void BillboardSet::SetBillboardsAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind
    // void BillboardSet::SetNetBillboardsAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(BillboardSet, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::UpdateGeometry(const FrameInfo& frame) override", "void UpdateGeometry(const FrameInfo&in)", AS_METHODPR(BillboardSet, UpdateGeometry, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("UpdateGeometryType BillboardSet::GetUpdateGeometryType() override", "UpdateGeometryType GetUpdateGeometryType()", AS_METHODPR(BillboardSet, GetUpdateGeometryType, (), UpdateGeometryType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetMaterial(Material* material)", "void SetMaterial(Material@+)", AS_METHODPR(BillboardSet, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetMaterial(Material* material)", "void set_material(Material@+)", AS_METHODPR(BillboardSet, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetNumBillboards(unsigned num)", "void SetNumBillboards(uint)", AS_METHODPR(BillboardSet, SetNumBillboards, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetNumBillboards(unsigned num)", "void set_numBillboards(uint)", AS_METHODPR(BillboardSet, SetNumBillboards, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetRelative(bool enable)", "void SetRelative(bool)", AS_METHODPR(BillboardSet, SetRelative, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetRelative(bool enable)", "void set_relative(bool)", AS_METHODPR(BillboardSet, SetRelative, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetScaled(bool enable)", "void SetScaled(bool)", AS_METHODPR(BillboardSet, SetScaled, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetScaled(bool enable)", "void set_scaled(bool)", AS_METHODPR(BillboardSet, SetScaled, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetSorted(bool enable)", "void SetSorted(bool)", AS_METHODPR(BillboardSet, SetSorted, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetSorted(bool enable)", "void set_sorted(bool)", AS_METHODPR(BillboardSet, SetSorted, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetFixedScreenSize(bool enable)", "void SetFixedScreenSize(bool)", AS_METHODPR(BillboardSet, SetFixedScreenSize, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetFixedScreenSize(bool enable)", "void set_fixedScreenSize(bool)", AS_METHODPR(BillboardSet, SetFixedScreenSize, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetFaceCameraMode(FaceCameraMode mode)", "void SetFaceCameraMode(FaceCameraMode)", AS_METHODPR(BillboardSet, SetFaceCameraMode, (FaceCameraMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetFaceCameraMode(FaceCameraMode mode)", "void set_faceCameraMode(FaceCameraMode)", AS_METHODPR(BillboardSet, SetFaceCameraMode, (FaceCameraMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetMinAngle(float angle)", "void SetMinAngle(float)", AS_METHODPR(BillboardSet, SetMinAngle, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetMinAngle(float angle)", "void set_minAngle(float)", AS_METHODPR(BillboardSet, SetMinAngle, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetAnimationLodBias(float bias)", "void SetAnimationLodBias(float)", AS_METHODPR(BillboardSet, SetAnimationLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetAnimationLodBias(float bias)", "void set_animationLodBias(float)", AS_METHODPR(BillboardSet, SetAnimationLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::Commit()", "void Commit()", AS_METHODPR(BillboardSet, Commit, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* BillboardSet::GetMaterial() const", "Material@+ GetMaterial() const", AS_METHODPR(BillboardSet, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* BillboardSet::GetMaterial() const", "Material@+ get_material() const", AS_METHODPR(BillboardSet, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned BillboardSet::GetNumBillboards() const", "uint GetNumBillboards() const", AS_METHODPR(BillboardSet, GetNumBillboards, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned BillboardSet::GetNumBillboards() const", "uint get_numBillboards() const", AS_METHODPR(BillboardSet, GetNumBillboards, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Billboard* BillboardSet::GetBillboard(unsigned index)", "Billboard@+ GetBillboard(uint)", AS_METHODPR(BillboardSet, GetBillboard, (unsigned), Billboard*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Billboard* BillboardSet::GetBillboard(unsigned index)", "Billboard@+ get_billboards(uint)", AS_METHODPR(BillboardSet, GetBillboard, (unsigned), Billboard*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool BillboardSet::IsRelative() const", "bool IsRelative() const", AS_METHODPR(BillboardSet, IsRelative, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool BillboardSet::IsRelative() const", "bool get_relative() const", AS_METHODPR(BillboardSet, IsRelative, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool BillboardSet::IsScaled() const", "bool IsScaled() const", AS_METHODPR(BillboardSet, IsScaled, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool BillboardSet::IsScaled() const", "bool get_scaled() const", AS_METHODPR(BillboardSet, IsScaled, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool BillboardSet::IsSorted() const", "bool IsSorted() const", AS_METHODPR(BillboardSet, IsSorted, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool BillboardSet::IsSorted() const", "bool get_sorted() const", AS_METHODPR(BillboardSet, IsSorted, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool BillboardSet::IsFixedScreenSize() const", "bool IsFixedScreenSize() const", AS_METHODPR(BillboardSet, IsFixedScreenSize, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool BillboardSet::IsFixedScreenSize() const", "bool get_fixedScreenSize() const", AS_METHODPR(BillboardSet, IsFixedScreenSize, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FaceCameraMode BillboardSet::GetFaceCameraMode() const", "FaceCameraMode GetFaceCameraMode() const", AS_METHODPR(BillboardSet, GetFaceCameraMode, () const, FaceCameraMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FaceCameraMode BillboardSet::GetFaceCameraMode() const", "FaceCameraMode get_faceCameraMode() const", AS_METHODPR(BillboardSet, GetFaceCameraMode, () const, FaceCameraMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float BillboardSet::GetMinAngle() const", "float GetMinAngle() const", AS_METHODPR(BillboardSet, GetMinAngle, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float BillboardSet::GetMinAngle() const", "float get_minAngle() const", AS_METHODPR(BillboardSet, GetMinAngle, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float BillboardSet::GetAnimationLodBias() const", "float GetAnimationLodBias() const", AS_METHODPR(BillboardSet, GetAnimationLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float BillboardSet::GetAnimationLodBias() const", "float get_animationLodBias() const", AS_METHODPR(BillboardSet, GetAnimationLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void BillboardSet::SetMaterialAttr(const ResourceRef& value)", "void SetMaterialAttr(const ResourceRef&in)", AS_METHODPR(BillboardSet, SetMaterialAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef BillboardSet::GetMaterialAttr() const", "ResourceRef GetMaterialAttr() const", AS_METHODPR(BillboardSet, GetMaterialAttr, () const, ResourceRef), AS_CALL_THISCALL));

    // static void BillboardSet::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_BillboardSet
        REGISTER_MEMBERS_MANUAL_PART_BillboardSet();
    #endif
}

// struct Bone | File: ../Graphics/Skeleton.h
void CollectMembers_Bone(MemberCollection& members)
{
    // WeakPtr<Node> Bone::node_
    // Error: type "WeakPtr<Node>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("String Bone::name_", "String name", offsetof(Bone, name_)));
    members.fields_.Push(RegisterObjectPropertyArgs("StringHash Bone::nameHash_", "StringHash nameHash", offsetof(Bone, nameHash_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned Bone::parentIndex_", "uint parentIndex", offsetof(Bone, parentIndex_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 Bone::initialPosition_", "Vector3 initialPosition", offsetof(Bone, initialPosition_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Quaternion Bone::initialRotation_", "Quaternion initialRotation", offsetof(Bone, initialRotation_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 Bone::initialScale_", "Vector3 initialScale", offsetof(Bone, initialScale_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Matrix3x4 Bone::offsetMatrix_", "Matrix3x4 offsetMatrix", offsetof(Bone, offsetMatrix_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool Bone::animated_", "bool animated", offsetof(Bone, animated_)));
    members.fields_.Push(RegisterObjectPropertyArgs("BoneCollisionShapeFlags Bone::collisionMask_", "BoneCollisionShapeFlags collisionMask", offsetof(Bone, collisionMask_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float Bone::radius_", "float radius", offsetof(Bone, radius_)));
    members.fields_.Push(RegisterObjectPropertyArgs("BoundingBox Bone::boundingBox_", "BoundingBox boundingBox", offsetof(Bone, boundingBox_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Bone
        REGISTER_MEMBERS_MANUAL_PART_Bone();
    #endif
}

// class BoxOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_BoxOctreeQuery(MemberCollection& members)
{
    // void BoxOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
    // Error: type "Drawable**" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("Intersection BoxOctreeQuery::TestOctant(const BoundingBox& box, bool inside) override", "Intersection TestOctant(const BoundingBox&in, bool)", AS_METHODPR(BoxOctreeQuery, TestOctant, (const BoundingBox&, bool), Intersection), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("BoundingBox BoxOctreeQuery::box_", "BoundingBox box", offsetof(BoxOctreeQuery, box_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_BoxOctreeQuery
        REGISTER_MEMBERS_MANUAL_PART_BoxOctreeQuery();
    #endif
}

// class Camera | File: ../Graphics/Camera.h
void CollectMembers_Camera(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.methods_, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    members.methods_.Push(RegisterObjectMethodArgs("void Camera::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(Camera, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetNearClip(float nearClip)", "void SetNearClip(float)", AS_METHODPR(Camera, SetNearClip, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetNearClip(float nearClip)", "void set_nearClip(float)", AS_METHODPR(Camera, SetNearClip, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetFarClip(float farClip)", "void SetFarClip(float)", AS_METHODPR(Camera, SetFarClip, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetFarClip(float farClip)", "void set_farClip(float)", AS_METHODPR(Camera, SetFarClip, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetFov(float fov)", "void SetFov(float)", AS_METHODPR(Camera, SetFov, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetFov(float fov)", "void set_fov(float)", AS_METHODPR(Camera, SetFov, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetOrthoSize(float orthoSize)", "void SetOrthoSize(float)", AS_METHODPR(Camera, SetOrthoSize, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetOrthoSize(float orthoSize)", "void set_orthoSize(float)", AS_METHODPR(Camera, SetOrthoSize, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetOrthoSize(const Vector2& orthoSize)", "void SetOrthoSize(const Vector2&in)", AS_METHODPR(Camera, SetOrthoSize, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetAspectRatio(float aspectRatio)", "void SetAspectRatio(float)", AS_METHODPR(Camera, SetAspectRatio, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetAspectRatio(float aspectRatio)", "void set_aspectRatio(float)", AS_METHODPR(Camera, SetAspectRatio, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetFillMode(FillMode mode)", "void SetFillMode(FillMode)", AS_METHODPR(Camera, SetFillMode, (FillMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetFillMode(FillMode mode)", "void set_fillMode(FillMode)", AS_METHODPR(Camera, SetFillMode, (FillMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetZoom(float zoom)", "void SetZoom(float)", AS_METHODPR(Camera, SetZoom, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetZoom(float zoom)", "void set_zoom(float)", AS_METHODPR(Camera, SetZoom, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetLodBias(float bias)", "void SetLodBias(float)", AS_METHODPR(Camera, SetLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetLodBias(float bias)", "void set_lodBias(float)", AS_METHODPR(Camera, SetLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetViewMask(unsigned mask)", "void SetViewMask(uint)", AS_METHODPR(Camera, SetViewMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetViewMask(unsigned mask)", "void set_viewMask(uint)", AS_METHODPR(Camera, SetViewMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetViewOverrideFlags(ViewOverrideFlags flags)", "void SetViewOverrideFlags(ViewOverrideFlags)", AS_METHODPR(Camera, SetViewOverrideFlags, (ViewOverrideFlags), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetViewOverrideFlags(ViewOverrideFlags flags)", "void set_viewOverrideFlags(ViewOverrideFlags)", AS_METHODPR(Camera, SetViewOverrideFlags, (ViewOverrideFlags), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetOrthographic(bool enable)", "void SetOrthographic(bool)", AS_METHODPR(Camera, SetOrthographic, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetOrthographic(bool enable)", "void set_orthographic(bool)", AS_METHODPR(Camera, SetOrthographic, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetAutoAspectRatio(bool enable)", "void SetAutoAspectRatio(bool)", AS_METHODPR(Camera, SetAutoAspectRatio, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetAutoAspectRatio(bool enable)", "void set_autoAspectRatio(bool)", AS_METHODPR(Camera, SetAutoAspectRatio, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetProjectionOffset(const Vector2& offset)", "void SetProjectionOffset(const Vector2&in)", AS_METHODPR(Camera, SetProjectionOffset, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetProjectionOffset(const Vector2& offset)", "void set_projectionOffset(const Vector2&in)", AS_METHODPR(Camera, SetProjectionOffset, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetUseReflection(bool enable)", "void SetUseReflection(bool)", AS_METHODPR(Camera, SetUseReflection, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetUseReflection(bool enable)", "void set_useReflection(bool)", AS_METHODPR(Camera, SetUseReflection, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetReflectionPlane(const Plane& plane)", "void SetReflectionPlane(const Plane&in)", AS_METHODPR(Camera, SetReflectionPlane, (const Plane&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetReflectionPlane(const Plane& plane)", "void set_reflectionPlane(const Plane&in)", AS_METHODPR(Camera, SetReflectionPlane, (const Plane&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetUseClipping(bool enable)", "void SetUseClipping(bool)", AS_METHODPR(Camera, SetUseClipping, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetUseClipping(bool enable)", "void set_useClipping(bool)", AS_METHODPR(Camera, SetUseClipping, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetClipPlane(const Plane& plane)", "void SetClipPlane(const Plane&in)", AS_METHODPR(Camera, SetClipPlane, (const Plane&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetClipPlane(const Plane& plane)", "void set_clipPlane(const Plane&in)", AS_METHODPR(Camera, SetClipPlane, (const Plane&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetFlipVertical(bool enable)", "void SetFlipVertical(bool)", AS_METHODPR(Camera, SetFlipVertical, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetProjection(const Matrix4& projection)", "void SetProjection(const Matrix4&in)", AS_METHODPR(Camera, SetProjection, (const Matrix4&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetProjection(const Matrix4& projection)", "void set_projection(const Matrix4&in)", AS_METHODPR(Camera, SetProjection, (const Matrix4&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetFarClip() const", "float GetFarClip() const", AS_METHODPR(Camera, GetFarClip, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetFarClip() const", "float get_farClip() const", AS_METHODPR(Camera, GetFarClip, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetNearClip() const", "float GetNearClip() const", AS_METHODPR(Camera, GetNearClip, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetNearClip() const", "float get_nearClip() const", AS_METHODPR(Camera, GetNearClip, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetFov() const", "float GetFov() const", AS_METHODPR(Camera, GetFov, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetFov() const", "float get_fov() const", AS_METHODPR(Camera, GetFov, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetOrthoSize() const", "float GetOrthoSize() const", AS_METHODPR(Camera, GetOrthoSize, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetOrthoSize() const", "float get_orthoSize() const", AS_METHODPR(Camera, GetOrthoSize, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetAspectRatio() const", "float GetAspectRatio() const", AS_METHODPR(Camera, GetAspectRatio, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetAspectRatio() const", "float get_aspectRatio() const", AS_METHODPR(Camera, GetAspectRatio, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetZoom() const", "float GetZoom() const", AS_METHODPR(Camera, GetZoom, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetZoom() const", "float get_zoom() const", AS_METHODPR(Camera, GetZoom, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetLodBias() const", "float GetLodBias() const", AS_METHODPR(Camera, GetLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetLodBias() const", "float get_lodBias() const", AS_METHODPR(Camera, GetLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Camera::GetViewMask() const", "uint GetViewMask() const", AS_METHODPR(Camera, GetViewMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Camera::GetViewMask() const", "uint get_viewMask() const", AS_METHODPR(Camera, GetViewMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ViewOverrideFlags Camera::GetViewOverrideFlags() const", "ViewOverrideFlags GetViewOverrideFlags() const", AS_METHODPR(Camera, GetViewOverrideFlags, () const, ViewOverrideFlags), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ViewOverrideFlags Camera::GetViewOverrideFlags() const", "ViewOverrideFlags get_viewOverrideFlags() const", AS_METHODPR(Camera, GetViewOverrideFlags, () const, ViewOverrideFlags), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FillMode Camera::GetFillMode() const", "FillMode GetFillMode() const", AS_METHODPR(Camera, GetFillMode, () const, FillMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FillMode Camera::GetFillMode() const", "FillMode get_fillMode() const", AS_METHODPR(Camera, GetFillMode, () const, FillMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::IsOrthographic() const", "bool IsOrthographic() const", AS_METHODPR(Camera, IsOrthographic, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::IsOrthographic() const", "bool get_orthographic() const", AS_METHODPR(Camera, IsOrthographic, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::GetAutoAspectRatio() const", "bool GetAutoAspectRatio() const", AS_METHODPR(Camera, GetAutoAspectRatio, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::GetAutoAspectRatio() const", "bool get_autoAspectRatio() const", AS_METHODPR(Camera, GetAutoAspectRatio, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Frustum& Camera::GetFrustum() const", "const Frustum& GetFrustum() const", AS_METHODPR(Camera, GetFrustum, () const, const Frustum&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Frustum& Camera::GetFrustum() const", "const Frustum& get_frustum() const", AS_METHODPR(Camera, GetFrustum, () const, const Frustum&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Matrix4 Camera::GetProjection() const", "Matrix4 GetProjection() const", AS_METHODPR(Camera, GetProjection, () const, Matrix4), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Matrix4 Camera::GetProjection() const", "Matrix4 get_projection() const", AS_METHODPR(Camera, GetProjection, () const, Matrix4), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Matrix4 Camera::GetGPUProjection() const", "Matrix4 GetGPUProjection() const", AS_METHODPR(Camera, GetGPUProjection, () const, Matrix4), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Matrix4 Camera::GetGPUProjection() const", "Matrix4 get_gPUProjection() const", AS_METHODPR(Camera, GetGPUProjection, () const, Matrix4), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix3x4& Camera::GetView() const", "const Matrix3x4& GetView() const", AS_METHODPR(Camera, GetView, () const, const Matrix3x4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix3x4& Camera::GetView() const", "const Matrix3x4& get_view() const", AS_METHODPR(Camera, GetView, () const, const Matrix3x4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::GetFrustumSize(Vector3& near, Vector3& far) const", "void GetFrustumSize(Vector3&, Vector3&) const", AS_METHODPR(Camera, GetFrustumSize, (Vector3&, Vector3&) const, void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetHalfViewSize() const", "float GetHalfViewSize() const", AS_METHODPR(Camera, GetHalfViewSize, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetHalfViewSize() const", "float get_halfViewSize() const", AS_METHODPR(Camera, GetHalfViewSize, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Frustum Camera::GetSplitFrustum(float nearClip, float farClip) const", "Frustum GetSplitFrustum(float, float) const", AS_METHODPR(Camera, GetSplitFrustum, (float, float) const, Frustum), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Frustum Camera::GetViewSpaceFrustum() const", "Frustum GetViewSpaceFrustum() const", AS_METHODPR(Camera, GetViewSpaceFrustum, () const, Frustum), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Frustum Camera::GetViewSpaceFrustum() const", "Frustum get_viewSpaceFrustum() const", AS_METHODPR(Camera, GetViewSpaceFrustum, () const, Frustum), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Frustum Camera::GetViewSpaceSplitFrustum(float nearClip, float farClip) const", "Frustum GetViewSpaceSplitFrustum(float, float) const", AS_METHODPR(Camera, GetViewSpaceSplitFrustum, (float, float) const, Frustum), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Ray Camera::GetScreenRay(float x, float y) const", "Ray GetScreenRay(float, float) const", AS_METHODPR(Camera, GetScreenRay, (float, float) const, Ray), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector2 Camera::WorldToScreenPoint(const Vector3& worldPos) const", "Vector2 WorldToScreenPoint(const Vector3&in) const", AS_METHODPR(Camera, WorldToScreenPoint, (const Vector3&) const, Vector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 Camera::ScreenToWorldPoint(const Vector3& screenPos) const", "Vector3 ScreenToWorldPoint(const Vector3&in) const", AS_METHODPR(Camera, ScreenToWorldPoint, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& Camera::GetProjectionOffset() const", "const Vector2& GetProjectionOffset() const", AS_METHODPR(Camera, GetProjectionOffset, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& Camera::GetProjectionOffset() const", "const Vector2& get_projectionOffset() const", AS_METHODPR(Camera, GetProjectionOffset, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::GetUseReflection() const", "bool GetUseReflection() const", AS_METHODPR(Camera, GetUseReflection, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::GetUseReflection() const", "bool get_useReflection() const", AS_METHODPR(Camera, GetUseReflection, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Plane& Camera::GetReflectionPlane() const", "const Plane& GetReflectionPlane() const", AS_METHODPR(Camera, GetReflectionPlane, () const, const Plane&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Plane& Camera::GetReflectionPlane() const", "const Plane& get_reflectionPlane() const", AS_METHODPR(Camera, GetReflectionPlane, () const, const Plane&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::GetUseClipping() const", "bool GetUseClipping() const", AS_METHODPR(Camera, GetUseClipping, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::GetUseClipping() const", "bool get_useClipping() const", AS_METHODPR(Camera, GetUseClipping, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Plane& Camera::GetClipPlane() const", "const Plane& GetClipPlane() const", AS_METHODPR(Camera, GetClipPlane, () const, const Plane&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Plane& Camera::GetClipPlane() const", "const Plane& get_clipPlane() const", AS_METHODPR(Camera, GetClipPlane, () const, const Plane&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::GetFlipVertical() const", "bool GetFlipVertical() const", AS_METHODPR(Camera, GetFlipVertical, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::GetReverseCulling() const", "bool GetReverseCulling() const", AS_METHODPR(Camera, GetReverseCulling, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetDistance(const Vector3& worldPos) const", "float GetDistance(const Vector3&in) const", AS_METHODPR(Camera, GetDistance, (const Vector3&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetDistanceSquared(const Vector3& worldPos) const", "float GetDistanceSquared(const Vector3&in) const", AS_METHODPR(Camera, GetDistanceSquared, (const Vector3&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Camera::GetLodDistance(float distance, float scale, float bias) const", "float GetLodDistance(float, float, float) const", AS_METHODPR(Camera, GetLodDistance, (float, float, float) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Quaternion Camera::GetFaceCameraRotation(const Vector3& position, const Quaternion& rotation, FaceCameraMode mode, float minAngle=0.0f)", "Quaternion GetFaceCameraRotation(const Vector3&in, const Quaternion&in, FaceCameraMode, float = 0.0f)", AS_METHODPR(Camera, GetFaceCameraRotation, (const Vector3&, const Quaternion&, FaceCameraMode, float), Quaternion), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Matrix3x4 Camera::GetEffectiveWorldTransform() const", "Matrix3x4 GetEffectiveWorldTransform() const", AS_METHODPR(Camera, GetEffectiveWorldTransform, () const, Matrix3x4), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Matrix3x4 Camera::GetEffectiveWorldTransform() const", "Matrix3x4 get_effectiveWorldTransform() const", AS_METHODPR(Camera, GetEffectiveWorldTransform, () const, Matrix3x4), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Camera::IsProjectionValid() const", "bool IsProjectionValid() const", AS_METHODPR(Camera, IsProjectionValid, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetAspectRatioInternal(float aspectRatio)", "void SetAspectRatioInternal(float)", AS_METHODPR(Camera, SetAspectRatioInternal, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetOrthoSizeAttr(float orthoSize)", "void SetOrthoSizeAttr(float)", AS_METHODPR(Camera, SetOrthoSizeAttr, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetReflectionPlaneAttr(const Vector4& value)", "void SetReflectionPlaneAttr(const Vector4&in)", AS_METHODPR(Camera, SetReflectionPlaneAttr, (const Vector4&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector4 Camera::GetReflectionPlaneAttr() const", "Vector4 GetReflectionPlaneAttr() const", AS_METHODPR(Camera, GetReflectionPlaneAttr, () const, Vector4), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Camera::SetClipPlaneAttr(const Vector4& value)", "void SetClipPlaneAttr(const Vector4&in)", AS_METHODPR(Camera, SetClipPlaneAttr, (const Vector4&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector4 Camera::GetClipPlaneAttr() const", "Vector4 GetClipPlaneAttr() const", AS_METHODPR(Camera, GetClipPlaneAttr, () const, Vector4), AS_CALL_THISCALL));

    // static void Camera::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Camera
        REGISTER_MEMBERS_MANUAL_PART_Camera();
    #endif
}

// struct CascadeParameters | File: ../Graphics/Light.h
void CollectMembers_CascadeParameters(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("void CascadeParameters::Validate()", "void Validate()", AS_METHODPR(CascadeParameters, Validate, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float CascadeParameters::GetShadowRange() const", "float GetShadowRange() const", AS_METHODPR(CascadeParameters, GetShadowRange, () const, float), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("Vector4 CascadeParameters::splits_", "Vector4 splits", offsetof(CascadeParameters, splits_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float CascadeParameters::fadeStart_", "float fadeStart", offsetof(CascadeParameters, fadeStart_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float CascadeParameters::biasAutoAdjust_", "float biasAutoAdjust", offsetof(CascadeParameters, biasAutoAdjust_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_CascadeParameters
        REGISTER_MEMBERS_MANUAL_PART_CascadeParameters();
    #endif
}

// struct ColorFrame | File: ../Graphics/ParticleEffect.h
void CollectMembers_ColorFrame(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("Color ColorFrame::Interpolate(const ColorFrame& next, float time) const", "Color Interpolate(const ColorFrame&in, float) const", AS_METHODPR(ColorFrame, Interpolate, (const ColorFrame&, float) const, Color), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("Color ColorFrame::color_", "Color color", offsetof(ColorFrame, color_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float ColorFrame::time_", "float time", offsetof(ColorFrame, time_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ColorFrame
        REGISTER_MEMBERS_MANUAL_PART_ColorFrame();
    #endif
}

// class ConstantBuffer | File: ../Graphics/ConstantBuffer.h
void CollectMembers_ConstantBuffer(MemberCollection& members)
{
    CollectMembers_Object(members);
    CollectMembers_GPUObject(members);

    Remove(members.methods_, "virtual void GPUObject::OnDeviceReset()");
    Remove(members.methods_, "virtual void GPUObject::Release()");

    // void ConstantBuffer::SetParameter(unsigned offset, unsigned size, const void* data)
    // Error: type "const void*" can not automatically bind
    // void ConstantBuffer::SetVector3ArrayParameter(unsigned offset, unsigned rows, const void* data)
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void ConstantBuffer::OnDeviceReset() override", "void OnDeviceReset()", AS_METHODPR(ConstantBuffer, OnDeviceReset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ConstantBuffer::Release() override", "void Release()", AS_METHODPR(ConstantBuffer, Release, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ConstantBuffer::SetSize(unsigned size)", "bool SetSize(uint)", AS_METHODPR(ConstantBuffer, SetSize, (unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ConstantBuffer::Apply()", "void Apply()", AS_METHODPR(ConstantBuffer, Apply, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned ConstantBuffer::GetSize() const", "uint GetSize() const", AS_METHODPR(ConstantBuffer, GetSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ConstantBuffer::IsDirty() const", "bool IsDirty() const", AS_METHODPR(ConstantBuffer, IsDirty, () const, bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ConstantBuffer
        REGISTER_MEMBERS_MANUAL_PART_ConstantBuffer();
    #endif
}

// class CustomGeometry | File: ../Graphics/CustomGeometry.h
void CollectMembers_CustomGeometry(MemberCollection& members)
{
    CollectMembers_Drawable(members);

    Remove(members.methods_, "virtual Geometry* Drawable::GetLodGeometry(unsigned batchIndex, unsigned level)");
    Remove(members.methods_, "virtual bool Drawable::DrawOcclusion(OcclusionBuffer* buffer)");
    Remove(members.methods_, "virtual unsigned Drawable::GetNumOccluderTriangles()");
    Remove(members.methods_, "virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)");

    Remove(members.staticMethods_, "static void Drawable::RegisterObject(Context* context)");

    // PODVector<unsigned char> CustomGeometry::GetGeometryDataAttr() const
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // Vector<PODVector<CustomGeometryVertex>>& CustomGeometry::GetVertices()
    // Error: type "Vector<PODVector<CustomGeometryVertex>>&" can not automatically bind
    // void CustomGeometry::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
    // void CustomGeometry::SetGeometryDataAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("Geometry* CustomGeometry::GetLodGeometry(unsigned batchIndex, unsigned level) override", "Geometry@+ GetLodGeometry(uint, uint)", AS_METHODPR(CustomGeometry, GetLodGeometry, (unsigned, unsigned), Geometry*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned CustomGeometry::GetNumOccluderTriangles() override", "uint GetNumOccluderTriangles()", AS_METHODPR(CustomGeometry, GetNumOccluderTriangles, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool CustomGeometry::DrawOcclusion(OcclusionBuffer* buffer) override", "bool DrawOcclusion(OcclusionBuffer@+)", AS_METHODPR(CustomGeometry, DrawOcclusion, (OcclusionBuffer*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::Clear()", "void Clear()", AS_METHODPR(CustomGeometry, Clear, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::SetNumGeometries(unsigned num)", "void SetNumGeometries(uint)", AS_METHODPR(CustomGeometry, SetNumGeometries, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::SetNumGeometries(unsigned num)", "void set_numGeometries(uint)", AS_METHODPR(CustomGeometry, SetNumGeometries, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::SetDynamic(bool enable)", "void SetDynamic(bool)", AS_METHODPR(CustomGeometry, SetDynamic, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::SetDynamic(bool enable)", "void set_dynamic(bool)", AS_METHODPR(CustomGeometry, SetDynamic, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::BeginGeometry(unsigned index, PrimitiveType type)", "void BeginGeometry(uint, PrimitiveType)", AS_METHODPR(CustomGeometry, BeginGeometry, (unsigned, PrimitiveType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::DefineVertex(const Vector3& position)", "void DefineVertex(const Vector3&in)", AS_METHODPR(CustomGeometry, DefineVertex, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::DefineNormal(const Vector3& normal)", "void DefineNormal(const Vector3&in)", AS_METHODPR(CustomGeometry, DefineNormal, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::DefineColor(const Color& color)", "void DefineColor(const Color&in)", AS_METHODPR(CustomGeometry, DefineColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::DefineTexCoord(const Vector2& texCoord)", "void DefineTexCoord(const Vector2&in)", AS_METHODPR(CustomGeometry, DefineTexCoord, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::DefineTangent(const Vector4& tangent)", "void DefineTangent(const Vector4&in)", AS_METHODPR(CustomGeometry, DefineTangent, (const Vector4&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::DefineGeometry(unsigned index, PrimitiveType type, unsigned numVertices, bool hasNormals, bool hasColors, bool hasTexCoords, bool hasTangents)", "void DefineGeometry(uint, PrimitiveType, uint, bool, bool, bool, bool)", AS_METHODPR(CustomGeometry, DefineGeometry, (unsigned, PrimitiveType, unsigned, bool, bool, bool, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::Commit()", "void Commit()", AS_METHODPR(CustomGeometry, Commit, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::SetMaterial(Material* material)", "void SetMaterial(Material@+)", AS_METHODPR(CustomGeometry, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::SetMaterial(Material* material)", "void set_material(Material@+)", AS_METHODPR(CustomGeometry, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool CustomGeometry::SetMaterial(unsigned index, Material* material)", "bool SetMaterial(uint, Material@+)", AS_METHODPR(CustomGeometry, SetMaterial, (unsigned, Material*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool CustomGeometry::SetMaterial(unsigned index, Material* material)", "bool set_materials(uint, Material@+)", AS_METHODPR(CustomGeometry, SetMaterial, (unsigned, Material*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned CustomGeometry::GetNumGeometries() const", "uint GetNumGeometries() const", AS_METHODPR(CustomGeometry, GetNumGeometries, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned CustomGeometry::GetNumGeometries() const", "uint get_numGeometries() const", AS_METHODPR(CustomGeometry, GetNumGeometries, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned CustomGeometry::GetNumVertices(unsigned index) const", "uint GetNumVertices(uint) const", AS_METHODPR(CustomGeometry, GetNumVertices, (unsigned) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned CustomGeometry::GetNumVertices(unsigned index) const", "uint get_numVertices(uint) const", AS_METHODPR(CustomGeometry, GetNumVertices, (unsigned) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool CustomGeometry::IsDynamic() const", "bool IsDynamic() const", AS_METHODPR(CustomGeometry, IsDynamic, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool CustomGeometry::IsDynamic() const", "bool get_dynamic() const", AS_METHODPR(CustomGeometry, IsDynamic, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* CustomGeometry::GetMaterial(unsigned index=0) const", "Material@+ GetMaterial(uint = 0) const", AS_METHODPR(CustomGeometry, GetMaterial, (unsigned) const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* CustomGeometry::GetMaterial(unsigned index=0) const", "Material@+ get_materials(uint = 0) const", AS_METHODPR(CustomGeometry, GetMaterial, (unsigned) const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CustomGeometryVertex* CustomGeometry::GetVertex(unsigned geometryIndex, unsigned vertexNum)", "CustomGeometryVertex@+ GetVertex(uint, uint)", AS_METHODPR(CustomGeometry, GetVertex, (unsigned, unsigned), CustomGeometryVertex*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void CustomGeometry::SetMaterialsAttr(const ResourceRefList& value)", "void SetMaterialsAttr(const ResourceRefList&in)", AS_METHODPR(CustomGeometry, SetMaterialsAttr, (const ResourceRefList&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const ResourceRefList& CustomGeometry::GetMaterialsAttr() const", "const ResourceRefList& GetMaterialsAttr() const", AS_METHODPR(CustomGeometry, GetMaterialsAttr, () const, const ResourceRefList&), AS_CALL_THISCALL));

    // static void CustomGeometry::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_CustomGeometry
        REGISTER_MEMBERS_MANUAL_PART_CustomGeometry();
    #endif
}

// struct CustomGeometryVertex | File: ../Graphics/CustomGeometry.h
void CollectMembers_CustomGeometryVertex(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 CustomGeometryVertex::position_", "Vector3 position", offsetof(CustomGeometryVertex, position_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 CustomGeometryVertex::normal_", "Vector3 normal", offsetof(CustomGeometryVertex, normal_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned CustomGeometryVertex::color_", "uint color", offsetof(CustomGeometryVertex, color_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector2 CustomGeometryVertex::texCoord_", "Vector2 texCoord", offsetof(CustomGeometryVertex, texCoord_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector4 CustomGeometryVertex::tangent_", "Vector4 tangent", offsetof(CustomGeometryVertex, tangent_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_CustomGeometryVertex
        REGISTER_MEMBERS_MANUAL_PART_CustomGeometryVertex();
    #endif
}

// struct DebugLine | File: ../Graphics/DebugRenderer.h
void CollectMembers_DebugLine(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 DebugLine::start_", "Vector3 start", offsetof(DebugLine, start_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 DebugLine::end_", "Vector3 end", offsetof(DebugLine, end_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned DebugLine::color_", "uint color", offsetof(DebugLine, color_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_DebugLine
        REGISTER_MEMBERS_MANUAL_PART_DebugLine();
    #endif
}

// class DebugRenderer | File: ../Graphics/DebugRenderer.h
void CollectMembers_DebugRenderer(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // void DebugRenderer::AddTriangleMesh(const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, const Matrix3x4& transform, const Color& color, bool depthTest=true)
    // Error: type "const void*" can not automatically bind
    // void DebugRenderer::AddTriangleMesh(const void* vertexData, unsigned vertexSize, unsigned vertexStart, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, const Matrix3x4& transform, const Color& color, bool depthTest=true)
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::SetLineAntiAlias(bool enable)", "void SetLineAntiAlias(bool)", AS_METHODPR(DebugRenderer, SetLineAntiAlias, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::SetLineAntiAlias(bool enable)", "void set_lineAntiAlias(bool)", AS_METHODPR(DebugRenderer, SetLineAntiAlias, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::SetView(Camera* camera)", "void SetView(Camera@+)", AS_METHODPR(DebugRenderer, SetView, (Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddLine(const Vector3& start, const Vector3& end, const Color& color, bool depthTest=true)", "void AddLine(const Vector3&in, const Vector3&in, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddLine, (const Vector3&, const Vector3&, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddLine(const Vector3& start, const Vector3& end, unsigned color, bool depthTest=true)", "void AddLine(const Vector3&in, const Vector3&in, uint, bool = true)", AS_METHODPR(DebugRenderer, AddLine, (const Vector3&, const Vector3&, unsigned, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddTriangle(const Vector3& v1, const Vector3& v2, const Vector3& v3, const Color& color, bool depthTest=true)", "void AddTriangle(const Vector3&in, const Vector3&in, const Vector3&in, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddTriangle, (const Vector3&, const Vector3&, const Vector3&, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddTriangle(const Vector3& v1, const Vector3& v2, const Vector3& v3, unsigned color, bool depthTest=true)", "void AddTriangle(const Vector3&in, const Vector3&in, const Vector3&in, uint, bool = true)", AS_METHODPR(DebugRenderer, AddTriangle, (const Vector3&, const Vector3&, const Vector3&, unsigned, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddPolygon(const Vector3& v1, const Vector3& v2, const Vector3& v3, const Vector3& v4, const Color& color, bool depthTest=true)", "void AddPolygon(const Vector3&in, const Vector3&in, const Vector3&in, const Vector3&in, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddPolygon, (const Vector3&, const Vector3&, const Vector3&, const Vector3&, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddPolygon(const Vector3& v1, const Vector3& v2, const Vector3& v3, const Vector3& v4, unsigned color, bool depthTest=true)", "void AddPolygon(const Vector3&in, const Vector3&in, const Vector3&in, const Vector3&in, uint, bool = true)", AS_METHODPR(DebugRenderer, AddPolygon, (const Vector3&, const Vector3&, const Vector3&, const Vector3&, unsigned, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddNode(Node* node, float scale=1.0f, bool depthTest=true)", "void AddNode(Node@+, float = 1.0f, bool = true)", AS_METHODPR(DebugRenderer, AddNode, (Node*, float, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddBoundingBox(const BoundingBox& box, const Color& color, bool depthTest=true, bool solid=false)", "void AddBoundingBox(const BoundingBox&in, const Color&in, bool = true, bool = false)", AS_METHODPR(DebugRenderer, AddBoundingBox, (const BoundingBox&, const Color&, bool, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddBoundingBox(const BoundingBox& box, const Matrix3x4& transform, const Color& color, bool depthTest=true, bool solid=false)", "void AddBoundingBox(const BoundingBox&in, const Matrix3x4&in, const Color&in, bool = true, bool = false)", AS_METHODPR(DebugRenderer, AddBoundingBox, (const BoundingBox&, const Matrix3x4&, const Color&, bool, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddFrustum(const Frustum& frustum, const Color& color, bool depthTest=true)", "void AddFrustum(const Frustum&in, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddFrustum, (const Frustum&, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddPolyhedron(const Polyhedron& poly, const Color& color, bool depthTest=true)", "void AddPolyhedron(const Polyhedron&in, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddPolyhedron, (const Polyhedron&, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddSphere(const Sphere& sphere, const Color& color, bool depthTest=true)", "void AddSphere(const Sphere&in, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddSphere, (const Sphere&, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddSphereSector(const Sphere& sphere, const Quaternion& rotation, float angle, bool drawLines, const Color& color, bool depthTest=true)", "void AddSphereSector(const Sphere&in, const Quaternion&in, float, bool, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddSphereSector, (const Sphere&, const Quaternion&, float, bool, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddCylinder(const Vector3& position, float radius, float height, const Color& color, bool depthTest=true)", "void AddCylinder(const Vector3&in, float, float, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddCylinder, (const Vector3&, float, float, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddSkeleton(const Skeleton& skeleton, const Color& color, bool depthTest=true)", "void AddSkeleton(const Skeleton&in, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddSkeleton, (const Skeleton&, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddCircle(const Vector3& center, const Vector3& normal, float radius, const Color& color, int steps=64, bool depthTest=true)", "void AddCircle(const Vector3&in, const Vector3&in, float, const Color&in, int = 64, bool = true)", AS_METHODPR(DebugRenderer, AddCircle, (const Vector3&, const Vector3&, float, const Color&, int, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddCross(const Vector3& center, float size, const Color& color, bool depthTest=true)", "void AddCross(const Vector3&in, float, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddCross, (const Vector3&, float, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::AddQuad(const Vector3& center, float width, float height, const Color& color, bool depthTest=true)", "void AddQuad(const Vector3&in, float, float, const Color&in, bool = true)", AS_METHODPR(DebugRenderer, AddQuad, (const Vector3&, float, float, const Color&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugRenderer::Render()", "void Render()", AS_METHODPR(DebugRenderer, Render, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool DebugRenderer::GetLineAntiAlias() const", "bool GetLineAntiAlias() const", AS_METHODPR(DebugRenderer, GetLineAntiAlias, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool DebugRenderer::GetLineAntiAlias() const", "bool get_lineAntiAlias() const", AS_METHODPR(DebugRenderer, GetLineAntiAlias, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix3x4& DebugRenderer::GetView() const", "const Matrix3x4& GetView() const", AS_METHODPR(DebugRenderer, GetView, () const, const Matrix3x4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix4& DebugRenderer::GetProjection() const", "const Matrix4& GetProjection() const", AS_METHODPR(DebugRenderer, GetProjection, () const, const Matrix4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Frustum& DebugRenderer::GetFrustum() const", "const Frustum& GetFrustum() const", AS_METHODPR(DebugRenderer, GetFrustum, () const, const Frustum&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool DebugRenderer::IsInside(const BoundingBox& box) const", "bool IsInside(const BoundingBox&in) const", AS_METHODPR(DebugRenderer, IsInside, (const BoundingBox&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool DebugRenderer::HasContent() const", "bool HasContent() const", AS_METHODPR(DebugRenderer, HasContent, () const, bool), AS_CALL_THISCALL));

    // static void DebugRenderer::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_DebugRenderer
        REGISTER_MEMBERS_MANUAL_PART_DebugRenderer();
    #endif
}

// struct DebugTriangle | File: ../Graphics/DebugRenderer.h
void CollectMembers_DebugTriangle(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 DebugTriangle::v1_", "Vector3 v1", offsetof(DebugTriangle, v1_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 DebugTriangle::v2_", "Vector3 v2", offsetof(DebugTriangle, v2_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 DebugTriangle::v3_", "Vector3 v3", offsetof(DebugTriangle, v3_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned DebugTriangle::color_", "uint color", offsetof(DebugTriangle, color_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_DebugTriangle
        REGISTER_MEMBERS_MANUAL_PART_DebugTriangle();
    #endif
}

// struct Decal | File: ../Graphics/DecalSet.h
void CollectMembers_Decal(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("void Decal::AddVertex(const DecalVertex& vertex)", "void AddVertex(const DecalVertex&in)", AS_METHODPR(Decal, AddVertex, (const DecalVertex&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Decal::CalculateBoundingBox()", "void CalculateBoundingBox()", AS_METHODPR(Decal, CalculateBoundingBox, (), void), AS_CALL_THISCALL));

    // PODVector<DecalVertex> Decal::vertices_
    // Error: type "PODVector<DecalVertex>" can not automatically bind
    // PODVector<unsigned short> Decal::indices_
    // Error: type "PODVector<unsigned short>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("float Decal::timer_", "float timer", offsetof(Decal, timer_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float Decal::timeToLive_", "float timeToLive", offsetof(Decal, timeToLive_)));
    members.fields_.Push(RegisterObjectPropertyArgs("BoundingBox Decal::boundingBox_", "BoundingBox boundingBox", offsetof(Decal, boundingBox_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Decal
        REGISTER_MEMBERS_MANUAL_PART_Decal();
    #endif
}

// class DecalSet | File: ../Graphics/DecalSet.h
void CollectMembers_DecalSet(MemberCollection& members)
{
    CollectMembers_Drawable(members);

    Remove(members.methods_, "virtual UpdateGeometryType Drawable::GetUpdateGeometryType()");
    Remove(members.methods_, "virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)");
    Remove(members.methods_, "virtual void Drawable::UpdateBatches(const FrameInfo& frame)");
    Remove(members.methods_, "virtual void Drawable::UpdateGeometry(const FrameInfo& frame)");
    Remove(members.methods_, "virtual void Serializable::ApplyAttributes()");
    Remove(members.methods_, "void Drawable::OnSetEnabled() override");

    Remove(members.staticMethods_, "static void Drawable::RegisterObject(Context* context)");

    // PODVector<unsigned char> DecalSet::GetDecalsAttr() const
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // void DecalSet::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
    // void DecalSet::SetDecalsAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(DecalSet, ApplyAttributes, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(DecalSet, OnSetEnabled, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(DecalSet, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::UpdateGeometry(const FrameInfo& frame) override", "void UpdateGeometry(const FrameInfo&in)", AS_METHODPR(DecalSet, UpdateGeometry, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("UpdateGeometryType DecalSet::GetUpdateGeometryType() override", "UpdateGeometryType GetUpdateGeometryType()", AS_METHODPR(DecalSet, GetUpdateGeometryType, (), UpdateGeometryType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::SetMaterial(Material* material)", "void SetMaterial(Material@+)", AS_METHODPR(DecalSet, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::SetMaterial(Material* material)", "void set_material(Material@+)", AS_METHODPR(DecalSet, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::SetMaxVertices(unsigned num)", "void SetMaxVertices(uint)", AS_METHODPR(DecalSet, SetMaxVertices, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::SetMaxVertices(unsigned num)", "void set_maxVertices(uint)", AS_METHODPR(DecalSet, SetMaxVertices, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::SetMaxIndices(unsigned num)", "void SetMaxIndices(uint)", AS_METHODPR(DecalSet, SetMaxIndices, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::SetMaxIndices(unsigned num)", "void set_maxIndices(uint)", AS_METHODPR(DecalSet, SetMaxIndices, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::SetOptimizeBufferSize(bool enable)", "void SetOptimizeBufferSize(bool)", AS_METHODPR(DecalSet, SetOptimizeBufferSize, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::SetOptimizeBufferSize(bool enable)", "void set_optimizeBufferSize(bool)", AS_METHODPR(DecalSet, SetOptimizeBufferSize, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool DecalSet::AddDecal(Drawable* target, const Vector3& worldPosition, const Quaternion& worldRotation, float size, float aspectRatio, float depth, const Vector2& topLeftUV, const Vector2& bottomRightUV, float timeToLive=0.0f, float normalCutoff=0.1f, unsigned subGeometry=M_MAX_UNSIGNED)", "bool AddDecal(Drawable@+, const Vector3&in, const Quaternion&in, float, float, float, const Vector2&in, const Vector2&in, float = 0.0f, float = 0.1f, uint = M_MAX_UNSIGNED)", AS_METHODPR(DecalSet, AddDecal, (Drawable*, const Vector3&, const Quaternion&, float, float, float, const Vector2&, const Vector2&, float, float, unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::RemoveDecals(unsigned num)", "void RemoveDecals(uint)", AS_METHODPR(DecalSet, RemoveDecals, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::RemoveAllDecals()", "void RemoveAllDecals()", AS_METHODPR(DecalSet, RemoveAllDecals, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* DecalSet::GetMaterial() const", "Material@+ GetMaterial() const", AS_METHODPR(DecalSet, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* DecalSet::GetMaterial() const", "Material@+ get_material() const", AS_METHODPR(DecalSet, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DecalSet::GetNumDecals() const", "uint GetNumDecals() const", AS_METHODPR(DecalSet, GetNumDecals, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DecalSet::GetNumDecals() const", "uint get_numDecals() const", AS_METHODPR(DecalSet, GetNumDecals, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DecalSet::GetNumVertices() const", "uint GetNumVertices() const", AS_METHODPR(DecalSet, GetNumVertices, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DecalSet::GetNumVertices() const", "uint get_numVertices() const", AS_METHODPR(DecalSet, GetNumVertices, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DecalSet::GetNumIndices() const", "uint GetNumIndices() const", AS_METHODPR(DecalSet, GetNumIndices, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DecalSet::GetNumIndices() const", "uint get_numIndices() const", AS_METHODPR(DecalSet, GetNumIndices, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DecalSet::GetMaxVertices() const", "uint GetMaxVertices() const", AS_METHODPR(DecalSet, GetMaxVertices, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DecalSet::GetMaxVertices() const", "uint get_maxVertices() const", AS_METHODPR(DecalSet, GetMaxVertices, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DecalSet::GetMaxIndices() const", "uint GetMaxIndices() const", AS_METHODPR(DecalSet, GetMaxIndices, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DecalSet::GetMaxIndices() const", "uint get_maxIndices() const", AS_METHODPR(DecalSet, GetMaxIndices, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool DecalSet::GetOptimizeBufferSize() const", "bool GetOptimizeBufferSize() const", AS_METHODPR(DecalSet, GetOptimizeBufferSize, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool DecalSet::GetOptimizeBufferSize() const", "bool get_optimizeBufferSize() const", AS_METHODPR(DecalSet, GetOptimizeBufferSize, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DecalSet::SetMaterialAttr(const ResourceRef& value)", "void SetMaterialAttr(const ResourceRef&in)", AS_METHODPR(DecalSet, SetMaterialAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef DecalSet::GetMaterialAttr() const", "ResourceRef GetMaterialAttr() const", AS_METHODPR(DecalSet, GetMaterialAttr, () const, ResourceRef), AS_CALL_THISCALL));

    // static void DecalSet::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_DecalSet
        REGISTER_MEMBERS_MANUAL_PART_DecalSet();
    #endif
}

// struct DecalVertex | File: ../Graphics/DecalSet.h
void CollectMembers_DecalVertex(MemberCollection& members)
{
    // float DecalVertex::blendWeights_[4]
    // Not registered because array
    // unsigned char DecalVertex::blendIndices_[4]
    // Not registered because array

    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 DecalVertex::position_", "Vector3 position", offsetof(DecalVertex, position_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 DecalVertex::normal_", "Vector3 normal", offsetof(DecalVertex, normal_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector2 DecalVertex::texCoord_", "Vector2 texCoord", offsetof(DecalVertex, texCoord_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector4 DecalVertex::tangent_", "Vector4 tangent", offsetof(DecalVertex, tangent_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_DecalVertex
        REGISTER_MEMBERS_MANUAL_PART_DecalVertex();
    #endif
}

// struct DepthValue | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_DepthValue(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("int DepthValue::min_", "int min", offsetof(DepthValue, min_)));
    members.fields_.Push(RegisterObjectPropertyArgs("int DepthValue::max_", "int max", offsetof(DepthValue, max_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_DepthValue
        REGISTER_MEMBERS_MANUAL_PART_DepthValue();
    #endif
}

// const PODVector<Light*>& Drawable::GetLights() const
// const PODVector<Light*>& Drawable::GetLights() const | File: ../Graphics/Drawable.h
static CScriptArray* Drawable_GetLights_void(Drawable* ptr)
{
    const PODVector<Light*>& result = ptr->GetLights();
    return VectorToHandleArray(result, "Array<Light@>");
}


// const PODVector<Light*>& Drawable::GetVertexLights() const
// const PODVector<Light*>& Drawable::GetVertexLights() const | File: ../Graphics/Drawable.h
static CScriptArray* Drawable_GetVertexLights_void(Drawable* ptr)
{
    const PODVector<Light*>& result = ptr->GetVertexLights();
    return VectorToHandleArray(result, "Array<Light@>");
}


// class Drawable | File: ../Graphics/Drawable.h
void CollectMembers_Drawable(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.methods_, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(members.methods_, "virtual void Component::OnSetEnabled()");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // const Vector<SourceBatch>& Drawable::GetBatches() const
    // Error: type "const Vector<SourceBatch>&" can not automatically bind
    // Octant* Drawable::GetOctant() const
    // Error: type "Octant" can not automatically bind bacause have @nobind mark
    // virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(Drawable, OnSetEnabled, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void Drawable::Update(const FrameInfo& frame)", "void Update(const FrameInfo&in)", AS_METHODPR(Drawable, Update, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void Drawable::UpdateBatches(const FrameInfo& frame)", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(Drawable, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void Drawable::UpdateGeometry(const FrameInfo& frame)", "void UpdateGeometry(const FrameInfo&in)", AS_METHODPR(Drawable, UpdateGeometry, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual UpdateGeometryType Drawable::GetUpdateGeometryType()", "UpdateGeometryType GetUpdateGeometryType()", AS_METHODPR(Drawable, GetUpdateGeometryType, (), UpdateGeometryType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual Geometry* Drawable::GetLodGeometry(unsigned batchIndex, unsigned level)", "Geometry@+ GetLodGeometry(uint, uint)", AS_METHODPR(Drawable, GetLodGeometry, (unsigned, unsigned), Geometry*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual unsigned Drawable::GetNumOccluderTriangles()", "uint GetNumOccluderTriangles()", AS_METHODPR(Drawable, GetNumOccluderTriangles, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual bool Drawable::DrawOcclusion(OcclusionBuffer* buffer)", "bool DrawOcclusion(OcclusionBuffer@+)", AS_METHODPR(Drawable, DrawOcclusion, (OcclusionBuffer*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(Drawable, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetDrawDistance(float distance)", "void SetDrawDistance(float)", AS_METHODPR(Drawable, SetDrawDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetDrawDistance(float distance)", "void set_drawDistance(float)", AS_METHODPR(Drawable, SetDrawDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetShadowDistance(float distance)", "void SetShadowDistance(float)", AS_METHODPR(Drawable, SetShadowDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetShadowDistance(float distance)", "void set_shadowDistance(float)", AS_METHODPR(Drawable, SetShadowDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetLodBias(float bias)", "void SetLodBias(float)", AS_METHODPR(Drawable, SetLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetLodBias(float bias)", "void set_lodBias(float)", AS_METHODPR(Drawable, SetLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetViewMask(unsigned mask)", "void SetViewMask(uint)", AS_METHODPR(Drawable, SetViewMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetViewMask(unsigned mask)", "void set_viewMask(uint)", AS_METHODPR(Drawable, SetViewMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetLightMask(unsigned mask)", "void SetLightMask(uint)", AS_METHODPR(Drawable, SetLightMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetLightMask(unsigned mask)", "void set_lightMask(uint)", AS_METHODPR(Drawable, SetLightMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetShadowMask(unsigned mask)", "void SetShadowMask(uint)", AS_METHODPR(Drawable, SetShadowMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetShadowMask(unsigned mask)", "void set_shadowMask(uint)", AS_METHODPR(Drawable, SetShadowMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetZoneMask(unsigned mask)", "void SetZoneMask(uint)", AS_METHODPR(Drawable, SetZoneMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetZoneMask(unsigned mask)", "void set_zoneMask(uint)", AS_METHODPR(Drawable, SetZoneMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetMaxLights(unsigned num)", "void SetMaxLights(uint)", AS_METHODPR(Drawable, SetMaxLights, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetMaxLights(unsigned num)", "void set_maxLights(uint)", AS_METHODPR(Drawable, SetMaxLights, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetCastShadows(bool enable)", "void SetCastShadows(bool)", AS_METHODPR(Drawable, SetCastShadows, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetCastShadows(bool enable)", "void set_castShadows(bool)", AS_METHODPR(Drawable, SetCastShadows, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetOccluder(bool enable)", "void SetOccluder(bool)", AS_METHODPR(Drawable, SetOccluder, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetOccluder(bool enable)", "void set_occluder(bool)", AS_METHODPR(Drawable, SetOccluder, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetOccludee(bool enable)", "void SetOccludee(bool)", AS_METHODPR(Drawable, SetOccludee, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetOccludee(bool enable)", "void set_occludee(bool)", AS_METHODPR(Drawable, SetOccludee, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::MarkForUpdate()", "void MarkForUpdate()", AS_METHODPR(Drawable, MarkForUpdate, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BoundingBox& Drawable::GetBoundingBox() const", "const BoundingBox& GetBoundingBox() const", AS_METHODPR(Drawable, GetBoundingBox, () const, const BoundingBox&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BoundingBox& Drawable::GetBoundingBox() const", "const BoundingBox& get_boundingBox() const", AS_METHODPR(Drawable, GetBoundingBox, () const, const BoundingBox&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BoundingBox& Drawable::GetWorldBoundingBox()", "const BoundingBox& GetWorldBoundingBox()", AS_METHODPR(Drawable, GetWorldBoundingBox, (), const BoundingBox&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BoundingBox& Drawable::GetWorldBoundingBox()", "const BoundingBox& get_worldBoundingBox()", AS_METHODPR(Drawable, GetWorldBoundingBox, (), const BoundingBox&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned char Drawable::GetDrawableFlags() const", "uint8 GetDrawableFlags() const", AS_METHODPR(Drawable, GetDrawableFlags, () const, unsigned char), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetDrawDistance() const", "float GetDrawDistance() const", AS_METHODPR(Drawable, GetDrawDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetDrawDistance() const", "float get_drawDistance() const", AS_METHODPR(Drawable, GetDrawDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetShadowDistance() const", "float GetShadowDistance() const", AS_METHODPR(Drawable, GetShadowDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetShadowDistance() const", "float get_shadowDistance() const", AS_METHODPR(Drawable, GetShadowDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetLodBias() const", "float GetLodBias() const", AS_METHODPR(Drawable, GetLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetLodBias() const", "float get_lodBias() const", AS_METHODPR(Drawable, GetLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Drawable::GetViewMask() const", "uint GetViewMask() const", AS_METHODPR(Drawable, GetViewMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Drawable::GetViewMask() const", "uint get_viewMask() const", AS_METHODPR(Drawable, GetViewMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Drawable::GetLightMask() const", "uint GetLightMask() const", AS_METHODPR(Drawable, GetLightMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Drawable::GetLightMask() const", "uint get_lightMask() const", AS_METHODPR(Drawable, GetLightMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Drawable::GetShadowMask() const", "uint GetShadowMask() const", AS_METHODPR(Drawable, GetShadowMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Drawable::GetShadowMask() const", "uint get_shadowMask() const", AS_METHODPR(Drawable, GetShadowMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Drawable::GetZoneMask() const", "uint GetZoneMask() const", AS_METHODPR(Drawable, GetZoneMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Drawable::GetZoneMask() const", "uint get_zoneMask() const", AS_METHODPR(Drawable, GetZoneMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Drawable::GetMaxLights() const", "uint GetMaxLights() const", AS_METHODPR(Drawable, GetMaxLights, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Drawable::GetMaxLights() const", "uint get_maxLights() const", AS_METHODPR(Drawable, GetMaxLights, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::GetCastShadows() const", "bool GetCastShadows() const", AS_METHODPR(Drawable, GetCastShadows, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::GetCastShadows() const", "bool get_castShadows() const", AS_METHODPR(Drawable, GetCastShadows, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::IsOccluder() const", "bool IsOccluder() const", AS_METHODPR(Drawable, IsOccluder, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::IsOccluder() const", "bool get_occluder() const", AS_METHODPR(Drawable, IsOccluder, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::IsOccludee() const", "bool IsOccludee() const", AS_METHODPR(Drawable, IsOccludee, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::IsOccludee() const", "bool get_occludee() const", AS_METHODPR(Drawable, IsOccludee, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::IsInView() const", "bool IsInView() const", AS_METHODPR(Drawable, IsInView, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::IsInView() const", "bool get_inView() const", AS_METHODPR(Drawable, IsInView, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::IsInView(Camera* camera) const", "bool IsInView(Camera@+) const", AS_METHODPR(Drawable, IsInView, (Camera*) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetZone(Zone* zone, bool temporary=false)", "void SetZone(Zone@+, bool = false)", AS_METHODPR(Drawable, SetZone, (Zone*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetSortValue(float value)", "void SetSortValue(float)", AS_METHODPR(Drawable, SetSortValue, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetMinMaxZ(float minZ, float maxZ)", "void SetMinMaxZ(float, float)", AS_METHODPR(Drawable, SetMinMaxZ, (float, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::MarkInView(const FrameInfo& frame)", "void MarkInView(const FrameInfo&in)", AS_METHODPR(Drawable, MarkInView, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::MarkInView(unsigned frameNumber)", "void MarkInView(uint)", AS_METHODPR(Drawable, MarkInView, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::LimitLights()", "void LimitLights()", AS_METHODPR(Drawable, LimitLights, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::LimitVertexLights(bool removeConvertedLights)", "void LimitVertexLights(bool)", AS_METHODPR(Drawable, LimitVertexLights, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::SetBasePass(unsigned batchIndex)", "void SetBasePass(uint)", AS_METHODPR(Drawable, SetBasePass, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Zone* Drawable::GetZone() const", "Zone@+ GetZone() const", AS_METHODPR(Drawable, GetZone, () const, Zone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Zone* Drawable::GetZone() const", "Zone@+ get_zone() const", AS_METHODPR(Drawable, GetZone, () const, Zone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::IsZoneDirty() const", "bool IsZoneDirty() const", AS_METHODPR(Drawable, IsZoneDirty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetDistance() const", "float GetDistance() const", AS_METHODPR(Drawable, GetDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetLodDistance() const", "float GetLodDistance() const", AS_METHODPR(Drawable, GetLodDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetSortValue() const", "float GetSortValue() const", AS_METHODPR(Drawable, GetSortValue, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::IsInView(const FrameInfo& frame, bool anyCamera=false) const", "bool IsInView(const FrameInfo&in, bool = false) const", AS_METHODPR(Drawable, IsInView, (const FrameInfo&, bool) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Drawable::HasBasePass(unsigned batchIndex) const", "bool HasBasePass(uint) const", AS_METHODPR(Drawable, HasBasePass, (unsigned) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const PODVector<Light*>& Drawable::GetLights() const", "Array<Light@>@ GetLights() const", AS_FUNCTION_OBJFIRST(Drawable_GetLights_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("const PODVector<Light*>& Drawable::GetVertexLights() const", "Array<Light@>@ GetVertexLights() const", AS_FUNCTION_OBJFIRST(Drawable_GetVertexLights_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("Light* Drawable::GetFirstLight() const", "Light@+ GetFirstLight() const", AS_METHODPR(Drawable, GetFirstLight, () const, Light*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetMinZ() const", "float GetMinZ() const", AS_METHODPR(Drawable, GetMinZ, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Drawable::GetMaxZ() const", "float GetMaxZ() const", AS_METHODPR(Drawable, GetMaxZ, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::AddLight(Light* light)", "void AddLight(Light@+)", AS_METHODPR(Drawable, AddLight, (Light*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Drawable::AddVertexLight(Light* light)", "void AddVertexLight(Light@+)", AS_METHODPR(Drawable, AddVertexLight, (Light*), void), AS_CALL_THISCALL));

    // static void Drawable::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Drawable
        REGISTER_MEMBERS_MANUAL_PART_Drawable();
    #endif
}

// struct FocusParameters | File: ../Graphics/Light.h
void CollectMembers_FocusParameters(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("void FocusParameters::Validate()", "void Validate()", AS_METHODPR(FocusParameters, Validate, (), void), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("bool FocusParameters::focus_", "bool focus", offsetof(FocusParameters, focus_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool FocusParameters::nonUniform_", "bool nonUniform", offsetof(FocusParameters, nonUniform_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool FocusParameters::autoSize_", "bool autoSize", offsetof(FocusParameters, autoSize_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float FocusParameters::quantize_", "float quantize", offsetof(FocusParameters, quantize_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float FocusParameters::minView_", "float minView", offsetof(FocusParameters, minView_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_FocusParameters
        REGISTER_MEMBERS_MANUAL_PART_FocusParameters();
    #endif
}

// struct FrameInfo | File: ../Graphics/Drawable.h
void CollectMembers_FrameInfo(MemberCollection& members)
{
    // Camera* FrameInfo::camera_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned FrameInfo::frameNumber_", "uint frameNumber", offsetof(FrameInfo, frameNumber_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float FrameInfo::timeStep_", "float timeStep", offsetof(FrameInfo, timeStep_)));
    members.fields_.Push(RegisterObjectPropertyArgs("IntVector2 FrameInfo::viewSize_", "IntVector2 viewSize", offsetof(FrameInfo, viewSize_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_FrameInfo
        REGISTER_MEMBERS_MANUAL_PART_FrameInfo();
    #endif
}

// class FrustumOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_FrustumOctreeQuery(MemberCollection& members)
{
    // void FrustumOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
    // Error: type "Drawable**" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("Intersection FrustumOctreeQuery::TestOctant(const BoundingBox& box, bool inside) override", "Intersection TestOctant(const BoundingBox&in, bool)", AS_METHODPR(FrustumOctreeQuery, TestOctant, (const BoundingBox&, bool), Intersection), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("Frustum FrustumOctreeQuery::frustum_", "Frustum frustum", offsetof(FrustumOctreeQuery, frustum_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_FrustumOctreeQuery
        REGISTER_MEMBERS_MANUAL_PART_FrustumOctreeQuery();
    #endif
}

// class GPUObject | File: ../Graphics/GPUObject.h
void CollectMembers_GPUObject(MemberCollection& members)
{
    // void* GPUObject::GetGPUObject() const
    // Error: type "void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("virtual void GPUObject::OnDeviceLost()", "void OnDeviceLost()", AS_METHODPR(GPUObject, OnDeviceLost, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void GPUObject::OnDeviceReset()", "void OnDeviceReset()", AS_METHODPR(GPUObject, OnDeviceReset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void GPUObject::Release()", "void Release()", AS_METHODPR(GPUObject, Release, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void GPUObject::ClearDataLost()", "void ClearDataLost()", AS_METHODPR(GPUObject, ClearDataLost, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Graphics* GPUObject::GetGraphics() const", "Graphics@+ GetGraphics() const", AS_METHODPR(GPUObject, GetGraphics, () const, Graphics*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned GPUObject::GetGPUObjectName() const", "uint GetGPUObjectName() const", AS_METHODPR(GPUObject, GetGPUObjectName, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool GPUObject::IsDataLost() const", "bool IsDataLost() const", AS_METHODPR(GPUObject, IsDataLost, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool GPUObject::IsDataLost() const", "bool get_dataLost() const", AS_METHODPR(GPUObject, IsDataLost, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool GPUObject::HasPendingData() const", "bool HasPendingData() const", AS_METHODPR(GPUObject, HasPendingData, () const, bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_GPUObject
        REGISTER_MEMBERS_MANUAL_PART_GPUObject();
    #endif
}

// const Vector<SharedPtr<VertexBuffer>>& Geometry::GetVertexBuffers() const
// const Vector<SharedPtr<VertexBuffer>>& Geometry::GetVertexBuffers() const | File: ../Graphics/Geometry.h
static CScriptArray* Geometry_GetVertexBuffers_void(Geometry* ptr)
{
    const Vector<SharedPtr<VertexBuffer>>& result = ptr->GetVertexBuffers();
    return VectorToHandleArray(result, "Array<VertexBuffer@>");
}


// class Geometry | File: ../Graphics/Geometry.h
void CollectMembers_Geometry(MemberCollection& members)
{
    CollectMembers_Object(members);

    // float Geometry::GetHitDistance(const Ray& ray, Vector3* outNormal=nullptr, Vector2* outUV=nullptr) const
    // Error: type "Vector3*" can not automatically bind
    // void Geometry::GetRawData(const unsigned char*& vertexData, unsigned& vertexSize, const unsigned char*& indexData, unsigned& indexSize, const PODVector<VertexElement>*& elements) const
    // Error: type "const unsigned char*&" can not automatically bind
    // void Geometry::GetRawDataShared(SharedArrayPtr<unsigned char>& vertexData, unsigned& vertexSize, SharedArrayPtr<unsigned char>& indexData, unsigned& indexSize, const PODVector<VertexElement>*& elements) const
    // Error: type "SharedArrayPtr<unsigned char>&" can not automatically bind
    // void Geometry::SetRawIndexData(const SharedArrayPtr<unsigned char>& data, unsigned indexSize)
    // Error: type "const SharedArrayPtr<unsigned char>&" can not automatically bind
    // void Geometry::SetRawVertexData(const SharedArrayPtr<unsigned char>& data, const PODVector<VertexElement>& elements)
    // Error: type "const SharedArrayPtr<unsigned char>&" can not automatically bind
    // void Geometry::SetRawVertexData(const SharedArrayPtr<unsigned char>& data, unsigned elementMask)
    // Error: type "const SharedArrayPtr<unsigned char>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool Geometry::SetNumVertexBuffers(unsigned num)", "bool SetNumVertexBuffers(uint)", AS_METHODPR(Geometry, SetNumVertexBuffers, (unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Geometry::SetNumVertexBuffers(unsigned num)", "bool set_numVertexBuffers(uint)", AS_METHODPR(Geometry, SetNumVertexBuffers, (unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Geometry::SetVertexBuffer(unsigned index, VertexBuffer* buffer)", "bool SetVertexBuffer(uint, VertexBuffer@+)", AS_METHODPR(Geometry, SetVertexBuffer, (unsigned, VertexBuffer*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Geometry::SetIndexBuffer(IndexBuffer* buffer)", "void SetIndexBuffer(IndexBuffer@+)", AS_METHODPR(Geometry, SetIndexBuffer, (IndexBuffer*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Geometry::SetIndexBuffer(IndexBuffer* buffer)", "void set_indexBuffer(IndexBuffer@+)", AS_METHODPR(Geometry, SetIndexBuffer, (IndexBuffer*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Geometry::SetDrawRange(PrimitiveType type, unsigned indexStart, unsigned indexCount, bool getUsedVertexRange=true)", "bool SetDrawRange(PrimitiveType, uint, uint, bool = true)", AS_METHODPR(Geometry, SetDrawRange, (PrimitiveType, unsigned, unsigned, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Geometry::SetDrawRange(PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned vertexStart, unsigned vertexCount, bool checkIllegal=true)", "bool SetDrawRange(PrimitiveType, uint, uint, uint, uint, bool = true)", AS_METHODPR(Geometry, SetDrawRange, (PrimitiveType, unsigned, unsigned, unsigned, unsigned, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Geometry::SetLodDistance(float distance)", "void SetLodDistance(float)", AS_METHODPR(Geometry, SetLodDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Geometry::SetLodDistance(float distance)", "void set_lodDistance(float)", AS_METHODPR(Geometry, SetLodDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Geometry::Draw(Graphics* graphics)", "void Draw(Graphics@+)", AS_METHODPR(Geometry, Draw, (Graphics*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<VertexBuffer>>& Geometry::GetVertexBuffers() const", "Array<VertexBuffer@>@ GetVertexBuffers() const", AS_FUNCTION_OBJFIRST(Geometry_GetVertexBuffers_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Geometry::GetNumVertexBuffers() const", "uint GetNumVertexBuffers() const", AS_METHODPR(Geometry, GetNumVertexBuffers, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Geometry::GetNumVertexBuffers() const", "uint get_numVertexBuffers() const", AS_METHODPR(Geometry, GetNumVertexBuffers, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VertexBuffer* Geometry::GetVertexBuffer(unsigned index) const", "VertexBuffer@+ GetVertexBuffer(uint) const", AS_METHODPR(Geometry, GetVertexBuffer, (unsigned) const, VertexBuffer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VertexBuffer* Geometry::GetVertexBuffer(unsigned index) const", "VertexBuffer@+ get_vertexBuffers(uint) const", AS_METHODPR(Geometry, GetVertexBuffer, (unsigned) const, VertexBuffer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IndexBuffer* Geometry::GetIndexBuffer() const", "IndexBuffer@+ GetIndexBuffer() const", AS_METHODPR(Geometry, GetIndexBuffer, () const, IndexBuffer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IndexBuffer* Geometry::GetIndexBuffer() const", "IndexBuffer@+ get_indexBuffer() const", AS_METHODPR(Geometry, GetIndexBuffer, () const, IndexBuffer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("PrimitiveType Geometry::GetPrimitiveType() const", "PrimitiveType GetPrimitiveType() const", AS_METHODPR(Geometry, GetPrimitiveType, () const, PrimitiveType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("PrimitiveType Geometry::GetPrimitiveType() const", "PrimitiveType get_primitiveType() const", AS_METHODPR(Geometry, GetPrimitiveType, () const, PrimitiveType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Geometry::GetIndexStart() const", "uint GetIndexStart() const", AS_METHODPR(Geometry, GetIndexStart, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Geometry::GetIndexStart() const", "uint get_indexStart() const", AS_METHODPR(Geometry, GetIndexStart, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Geometry::GetIndexCount() const", "uint GetIndexCount() const", AS_METHODPR(Geometry, GetIndexCount, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Geometry::GetIndexCount() const", "uint get_indexCount() const", AS_METHODPR(Geometry, GetIndexCount, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Geometry::GetVertexStart() const", "uint GetVertexStart() const", AS_METHODPR(Geometry, GetVertexStart, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Geometry::GetVertexStart() const", "uint get_vertexStart() const", AS_METHODPR(Geometry, GetVertexStart, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Geometry::GetVertexCount() const", "uint GetVertexCount() const", AS_METHODPR(Geometry, GetVertexCount, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Geometry::GetVertexCount() const", "uint get_vertexCount() const", AS_METHODPR(Geometry, GetVertexCount, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Geometry::GetLodDistance() const", "float GetLodDistance() const", AS_METHODPR(Geometry, GetLodDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Geometry::GetLodDistance() const", "float get_lodDistance() const", AS_METHODPR(Geometry, GetLodDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned short Geometry::GetBufferHash() const", "uint16 GetBufferHash() const", AS_METHODPR(Geometry, GetBufferHash, () const, unsigned short), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Geometry::IsInside(const Ray& ray) const", "bool IsInside(const Ray&in) const", AS_METHODPR(Geometry, IsInside, (const Ray&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Geometry::IsEmpty() const", "bool IsEmpty() const", AS_METHODPR(Geometry, IsEmpty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Geometry::IsEmpty() const", "bool get_empty() const", AS_METHODPR(Geometry, IsEmpty, () const, bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Geometry
        REGISTER_MEMBERS_MANUAL_PART_Geometry();
    #endif
}

// struct GeometryDesc | File: ../Graphics/Model.h
void CollectMembers_GeometryDesc(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("PrimitiveType GeometryDesc::type_", "PrimitiveType type", offsetof(GeometryDesc, type_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned GeometryDesc::vbRef_", "uint vbRef", offsetof(GeometryDesc, vbRef_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned GeometryDesc::ibRef_", "uint ibRef", offsetof(GeometryDesc, ibRef_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned GeometryDesc::indexStart_", "uint indexStart", offsetof(GeometryDesc, indexStart_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned GeometryDesc::indexCount_", "uint indexCount", offsetof(GeometryDesc, indexCount_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_GeometryDesc
        REGISTER_MEMBERS_MANUAL_PART_GeometryDesc();
    #endif
}

// bool Graphics::SetVertexBuffers(const Vector<SharedPtr<VertexBuffer>>& buffers, unsigned instanceOffset=0)
// bool Graphics::SetVertexBuffers(const Vector<SharedPtr<VertexBuffer>>& buffers, unsigned instanceOffset=0) | File: ../Graphics/Graphics.h
static bool Graphics_SetVertexBuffers_VectorSharedPtrVertexBuffer_unsigned(Graphics* ptr, CScriptArray* buffers_conv, unsigned instanceOffset)
{
    Vector<SharedPtr<VertexBuffer>> buffers = HandleArrayToVector<VertexBuffer>(buffers_conv);
    bool result = ptr->SetVertexBuffers(buffers, instanceOffset);
    return result;
}


// PODVector<IntVector3> Graphics::GetResolutions(int monitor) const
// PODVector<IntVector3> Graphics::GetResolutions(int monitor) const | File: ../Graphics/Graphics.h
static CScriptArray* Graphics_GetResolutions_int(Graphics* ptr, int monitor)
{
    PODVector<IntVector3> result = ptr->GetResolutions(monitor);
    return VectorToArray(result, "Array<IntVector3>");
}


// PODVector<int> Graphics::GetMultiSampleLevels() const
// PODVector<int> Graphics::GetMultiSampleLevels() const | File: ../Graphics/Graphics.h
static CScriptArray* Graphics_GetMultiSampleLevels_void(Graphics* ptr)
{
    PODVector<int> result = ptr->GetMultiSampleLevels();
    return VectorToArray(result, "Array<int>");
}


// class Graphics | File: ../Graphics/Graphics.h
void CollectMembers_Graphics(MemberCollection& members)
{
    CollectMembers_Object(members);

    // void Graphics::AddGPUObject(GPUObject* object)
    // Error: type "GPUObject*" can not automatically bind
    // void Graphics::CleanupRenderSurface(RenderSurface* surface)
    // Not registered because have @nobind mark
    // void Graphics::FreeScratchBuffer(void* buffer)
    // Error: type "void*" can not automatically bind
    // void* Graphics::GetExternalWindow() const
    // Error: type "void*" can not automatically bind
    // GraphicsImpl* Graphics::GetImpl() const
    // Error: type "GraphicsImpl*" can not automatically bind
    // ConstantBuffer* Graphics::GetOrCreateConstantBuffer(ShaderType type, unsigned index, unsigned size)
    // Not registered because have @nobind mark
    // ShaderVariation* Graphics::GetShader(ShaderType type, const char* name, const char* defines) const
    // Error: type "const char*" can not automatically bind
    // ShaderProgram* Graphics::GetShaderProgram() const
    // Not registered because have @nobind mark
    // SDL_Window* Graphics::GetWindow() const
    // Error: type "SDL_Window*" can not automatically bind
    // void Graphics::MarkFBODirty()
    // Not registered because have @nobind mark
    // bool Graphics::NeedParameterUpdate(ShaderParameterGroup group, const void* source)
    // Error: type "const void*" can not automatically bind
    // void Graphics::RemoveGPUObject(GPUObject* object)
    // Error: type "GPUObject*" can not automatically bind
    // void* Graphics::ReserveScratchBuffer(unsigned size)
    // Error: type "void*" can not automatically bind
    // void Graphics::Restore()
    // Not registered because have @nobind mark
    // void Graphics::SetExternalWindow(void* window)
    // Error: type "void*" can not automatically bind
    // void Graphics::SetShaderParameter(StringHash param, const float* data, unsigned count)
    // Error: type "const float*" can not automatically bind
    // void Graphics::SetTextureForUpdate(Texture* texture)
    // Not registered because have @nobind mark
    // void Graphics::SetTextureParametersDirty()
    // Not registered because have @nobind mark
    // void Graphics::SetUBO(unsigned object)
    // Not registered because have @nobind mark
    // void Graphics::SetVBO(unsigned object)
    // Not registered because have @nobind mark
    // bool Graphics::SetVertexBuffers(const PODVector<VertexBuffer*>& buffers, unsigned instanceOffset=0)
    // Not registered because have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetWindowTitle(const String& windowTitle)", "void SetWindowTitle(const String&in)", AS_METHODPR(Graphics, SetWindowTitle, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetWindowTitle(const String& windowTitle)", "void set_windowTitle(const String&in)", AS_METHODPR(Graphics, SetWindowTitle, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetWindowIcon(Image* windowIcon)", "void SetWindowIcon(Image@+)", AS_METHODPR(Graphics, SetWindowIcon, (Image*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetWindowIcon(Image* windowIcon)", "void set_windowIcon(Image@+)", AS_METHODPR(Graphics, SetWindowIcon, (Image*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetWindowPosition(const IntVector2& position)", "void SetWindowPosition(const IntVector2&in)", AS_METHODPR(Graphics, SetWindowPosition, (const IntVector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetWindowPosition(const IntVector2& position)", "void set_windowPosition(const IntVector2&in)", AS_METHODPR(Graphics, SetWindowPosition, (const IntVector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetWindowPosition(int x, int y)", "void SetWindowPosition(int, int)", AS_METHODPR(Graphics, SetWindowPosition, (int, int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::SetScreenMode(int width, int height, const ScreenModeParams& params, bool maximize=false)", "bool SetScreenMode(int, int, const ScreenModeParams&in, bool = false)", AS_METHODPR(Graphics, SetScreenMode, (int, int, const ScreenModeParams&, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::SetScreenMode(int width, int height)", "bool SetScreenMode(int, int)", AS_METHODPR(Graphics, SetScreenMode, (int, int), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::SetWindowModes(const WindowModeParams& windowMode, const WindowModeParams& secondaryWindowMode, bool maximize=false)", "bool SetWindowModes(const WindowModeParams&in, const WindowModeParams&in, bool = false)", AS_METHODPR(Graphics, SetWindowModes, (const WindowModeParams&, const WindowModeParams&, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::SetDefaultWindowModes(int width, int height, const ScreenModeParams& params)", "bool SetDefaultWindowModes(int, int, const ScreenModeParams&in)", AS_METHODPR(Graphics, SetDefaultWindowModes, (int, int, const ScreenModeParams&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::SetMode(int width, int height, bool fullscreen, bool borderless, bool resizable, bool highDPI, bool vsync, bool tripleBuffer, int multiSample, int monitor, int refreshRate)", "bool SetMode(int, int, bool, bool, bool, bool, bool, bool, int, int, int)", AS_METHODPR(Graphics, SetMode, (int, int, bool, bool, bool, bool, bool, bool, int, int, int), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::SetMode(int width, int height)", "bool SetMode(int, int)", AS_METHODPR(Graphics, SetMode, (int, int), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetSRGB(bool enable)", "void SetSRGB(bool)", AS_METHODPR(Graphics, SetSRGB, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetSRGB(bool enable)", "void set_sRGB(bool)", AS_METHODPR(Graphics, SetSRGB, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetDither(bool enable)", "void SetDither(bool)", AS_METHODPR(Graphics, SetDither, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetDither(bool enable)", "void set_dither(bool)", AS_METHODPR(Graphics, SetDither, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetFlushGPU(bool enable)", "void SetFlushGPU(bool)", AS_METHODPR(Graphics, SetFlushGPU, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetFlushGPU(bool enable)", "void set_flushGPU(bool)", AS_METHODPR(Graphics, SetFlushGPU, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetForceGL2(bool enable)", "void SetForceGL2(bool)", AS_METHODPR(Graphics, SetForceGL2, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetOrientations(const String& orientations)", "void SetOrientations(const String&in)", AS_METHODPR(Graphics, SetOrientations, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetOrientations(const String& orientations)", "void set_orientations(const String&in)", AS_METHODPR(Graphics, SetOrientations, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::ToggleFullscreen()", "bool ToggleFullscreen()", AS_METHODPR(Graphics, ToggleFullscreen, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::Close()", "void Close()", AS_METHODPR(Graphics, Close, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::TakeScreenShot(Image& destImage)", "bool TakeScreenShot(Image&)", AS_METHODPR(Graphics, TakeScreenShot, (Image&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::BeginFrame()", "bool BeginFrame()", AS_METHODPR(Graphics, BeginFrame, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::EndFrame()", "void EndFrame()", AS_METHODPR(Graphics, EndFrame, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::Clear(ClearTargetFlags flags, const Color& color=Color(0.0f, 0.0f, 0.0f, 0.0f), float depth=1.0f, unsigned stencil=0)", "void Clear(ClearTargetFlags, const Color&in = Color(0.0f, 0.0f, 0.0f, 0.0f), float = 1.0f, uint = 0)", AS_METHODPR(Graphics, Clear, (ClearTargetFlags, const Color&, float, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::ResolveToTexture(Texture2D* destination, const IntRect& viewport)", "bool ResolveToTexture(Texture2D@+, const IntRect&in)", AS_METHODPR(Graphics, ResolveToTexture, (Texture2D*, const IntRect&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::ResolveToTexture(Texture2D* texture)", "bool ResolveToTexture(Texture2D@+)", AS_METHODPR(Graphics, ResolveToTexture, (Texture2D*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::ResolveToTexture(TextureCube* texture)", "bool ResolveToTexture(TextureCube@+)", AS_METHODPR(Graphics, ResolveToTexture, (TextureCube*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::Draw(PrimitiveType type, unsigned vertexStart, unsigned vertexCount)", "void Draw(PrimitiveType, uint, uint)", AS_METHODPR(Graphics, Draw, (PrimitiveType, unsigned, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::Draw(PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned minVertex, unsigned vertexCount)", "void Draw(PrimitiveType, uint, uint, uint, uint)", AS_METHODPR(Graphics, Draw, (PrimitiveType, unsigned, unsigned, unsigned, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::Draw(PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned baseVertexIndex, unsigned minVertex, unsigned vertexCount)", "void Draw(PrimitiveType, uint, uint, uint, uint, uint)", AS_METHODPR(Graphics, Draw, (PrimitiveType, unsigned, unsigned, unsigned, unsigned, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::DrawInstanced(PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned minVertex, unsigned vertexCount, unsigned instanceCount)", "void DrawInstanced(PrimitiveType, uint, uint, uint, uint, uint)", AS_METHODPR(Graphics, DrawInstanced, (PrimitiveType, unsigned, unsigned, unsigned, unsigned, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::DrawInstanced(PrimitiveType type, unsigned indexStart, unsigned indexCount, unsigned baseVertexIndex, unsigned minVertex, unsigned vertexCount, unsigned instanceCount)", "void DrawInstanced(PrimitiveType, uint, uint, uint, uint, uint, uint)", AS_METHODPR(Graphics, DrawInstanced, (PrimitiveType, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetVertexBuffer(VertexBuffer* buffer)", "void SetVertexBuffer(VertexBuffer@+)", AS_METHODPR(Graphics, SetVertexBuffer, (VertexBuffer*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::SetVertexBuffers(const Vector<SharedPtr<VertexBuffer>>& buffers, unsigned instanceOffset=0)", "bool SetVertexBuffers(Array<VertexBuffer@>@+, uint = 0)", AS_FUNCTION_OBJFIRST(Graphics_SetVertexBuffers_VectorSharedPtrVertexBuffer_unsigned), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetIndexBuffer(IndexBuffer* buffer)", "void SetIndexBuffer(IndexBuffer@+)", AS_METHODPR(Graphics, SetIndexBuffer, (IndexBuffer*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaders(ShaderVariation* vs, ShaderVariation* ps)", "void SetShaders(ShaderVariation@+, ShaderVariation@+)", AS_METHODPR(Graphics, SetShaders, (ShaderVariation*, ShaderVariation*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, float value)", "void SetShaderParameter(StringHash, float)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, int value)", "void SetShaderParameter(StringHash, int)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, bool value)", "void SetShaderParameter(StringHash, bool)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, const Color& color)", "void SetShaderParameter(StringHash, const Color&in)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, const Vector2& vector)", "void SetShaderParameter(StringHash, const Vector2&in)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, const Matrix3& matrix)", "void SetShaderParameter(StringHash, const Matrix3&in)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, const Matrix3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, const Vector3& vector)", "void SetShaderParameter(StringHash, const Vector3&in)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, const Matrix4& matrix)", "void SetShaderParameter(StringHash, const Matrix4&in)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, const Matrix4&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, const Vector4& vector)", "void SetShaderParameter(StringHash, const Vector4&in)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, const Vector4&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, const Matrix3x4& matrix)", "void SetShaderParameter(StringHash, const Matrix3x4&in)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, const Matrix3x4&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderParameter(StringHash param, const Variant& value)", "void SetShaderParameter(StringHash, const Variant&in)", AS_METHODPR(Graphics, SetShaderParameter, (StringHash, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::HasShaderParameter(StringHash param)", "bool HasShaderParameter(StringHash)", AS_METHODPR(Graphics, HasShaderParameter, (StringHash), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::HasTextureUnit(TextureUnit unit)", "bool HasTextureUnit(TextureUnit)", AS_METHODPR(Graphics, HasTextureUnit, (TextureUnit), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::ClearParameterSource(ShaderParameterGroup group)", "void ClearParameterSource(ShaderParameterGroup)", AS_METHODPR(Graphics, ClearParameterSource, (ShaderParameterGroup), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::ClearParameterSources()", "void ClearParameterSources()", AS_METHODPR(Graphics, ClearParameterSources, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::ClearTransformSources()", "void ClearTransformSources()", AS_METHODPR(Graphics, ClearTransformSources, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetTexture(unsigned index, Texture* texture)", "void SetTexture(uint, Texture@+)", AS_METHODPR(Graphics, SetTexture, (unsigned, Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetDefaultTextureFilterMode(TextureFilterMode mode)", "void SetDefaultTextureFilterMode(TextureFilterMode)", AS_METHODPR(Graphics, SetDefaultTextureFilterMode, (TextureFilterMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetDefaultTextureAnisotropy(unsigned level)", "void SetDefaultTextureAnisotropy(uint)", AS_METHODPR(Graphics, SetDefaultTextureAnisotropy, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::ResetRenderTargets()", "void ResetRenderTargets()", AS_METHODPR(Graphics, ResetRenderTargets, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::ResetRenderTarget(unsigned index)", "void ResetRenderTarget(uint)", AS_METHODPR(Graphics, ResetRenderTarget, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::ResetDepthStencil()", "void ResetDepthStencil()", AS_METHODPR(Graphics, ResetDepthStencil, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetRenderTarget(unsigned index, RenderSurface* renderTarget)", "void SetRenderTarget(uint, RenderSurface@+)", AS_METHODPR(Graphics, SetRenderTarget, (unsigned, RenderSurface*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetRenderTarget(unsigned index, Texture2D* texture)", "void SetRenderTarget(uint, Texture2D@+)", AS_METHODPR(Graphics, SetRenderTarget, (unsigned, Texture2D*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetDepthStencil(RenderSurface* depthStencil)", "void SetDepthStencil(RenderSurface@+)", AS_METHODPR(Graphics, SetDepthStencil, (RenderSurface*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetDepthStencil(Texture2D* texture)", "void SetDepthStencil(Texture2D@+)", AS_METHODPR(Graphics, SetDepthStencil, (Texture2D*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetViewport(const IntRect& rect)", "void SetViewport(const IntRect&in)", AS_METHODPR(Graphics, SetViewport, (const IntRect&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetBlendMode(BlendMode mode, bool alphaToCoverage=false)", "void SetBlendMode(BlendMode, bool = false)", AS_METHODPR(Graphics, SetBlendMode, (BlendMode, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetColorWrite(bool enable)", "void SetColorWrite(bool)", AS_METHODPR(Graphics, SetColorWrite, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetCullMode(CullMode mode)", "void SetCullMode(CullMode)", AS_METHODPR(Graphics, SetCullMode, (CullMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetDepthBias(float constantBias, float slopeScaledBias)", "void SetDepthBias(float, float)", AS_METHODPR(Graphics, SetDepthBias, (float, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetDepthTest(CompareMode mode)", "void SetDepthTest(CompareMode)", AS_METHODPR(Graphics, SetDepthTest, (CompareMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetDepthWrite(bool enable)", "void SetDepthWrite(bool)", AS_METHODPR(Graphics, SetDepthWrite, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetFillMode(FillMode mode)", "void SetFillMode(FillMode)", AS_METHODPR(Graphics, SetFillMode, (FillMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetLineAntiAlias(bool enable)", "void SetLineAntiAlias(bool)", AS_METHODPR(Graphics, SetLineAntiAlias, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetScissorTest(bool enable, const Rect& rect=Rect::FULL, bool borderInclusive=true)", "void SetScissorTest(bool, const Rect&in = Rect::FULL, bool = true)", AS_METHODPR(Graphics, SetScissorTest, (bool, const Rect&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetScissorTest(bool enable, const IntRect& rect)", "void SetScissorTest(bool, const IntRect&in)", AS_METHODPR(Graphics, SetScissorTest, (bool, const IntRect&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetStencilTest(bool enable, CompareMode mode=CMP_ALWAYS, StencilOp pass=OP_KEEP, StencilOp fail=OP_KEEP, StencilOp zFail=OP_KEEP, unsigned stencilRef=0, unsigned compareMask=M_MAX_UNSIGNED, unsigned writeMask=M_MAX_UNSIGNED)", "void SetStencilTest(bool, CompareMode = CMP_ALWAYS, StencilOp = OP_KEEP, StencilOp = OP_KEEP, StencilOp = OP_KEEP, uint = 0, uint = M_MAX_UNSIGNED, uint = M_MAX_UNSIGNED)", AS_METHODPR(Graphics, SetStencilTest, (bool, CompareMode, StencilOp, StencilOp, StencilOp, unsigned, unsigned, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetClipPlane(bool enable, const Plane& clipPlane=Plane::UP, const Matrix3x4& view=Matrix3x4::IDENTITY, const Matrix4& projection=Matrix4::IDENTITY)", "void SetClipPlane(bool, const Plane&in = Plane::UP, const Matrix3x4&in = Matrix3x4::IDENTITY, const Matrix4&in = Matrix4::IDENTITY)", AS_METHODPR(Graphics, SetClipPlane, (bool, const Plane&, const Matrix3x4&, const Matrix4&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::BeginDumpShaders(const String& fileName)", "void BeginDumpShaders(const String&in)", AS_METHODPR(Graphics, BeginDumpShaders, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::EndDumpShaders()", "void EndDumpShaders()", AS_METHODPR(Graphics, EndDumpShaders, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::PrecacheShaders(Deserializer& source)", "void PrecacheShaders(Deserializer&)", AS_METHODPR(Graphics, PrecacheShaders, (Deserializer&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderCacheDir(const String& path)", "void SetShaderCacheDir(const String&in)", AS_METHODPR(Graphics, SetShaderCacheDir, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::SetShaderCacheDir(const String& path)", "void set_shaderCacheDir(const String&in)", AS_METHODPR(Graphics, SetShaderCacheDir, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::IsInitialized() const", "bool IsInitialized() const", AS_METHODPR(Graphics, IsInitialized, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::IsInitialized() const", "bool get_initialized() const", AS_METHODPR(Graphics, IsInitialized, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Graphics::GetWindowTitle() const", "const String& GetWindowTitle() const", AS_METHODPR(Graphics, GetWindowTitle, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Graphics::GetWindowTitle() const", "const String& get_windowTitle() const", AS_METHODPR(Graphics, GetWindowTitle, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Graphics::GetApiName() const", "const String& GetApiName() const", AS_METHODPR(Graphics, GetApiName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Graphics::GetApiName() const", "const String& get_apiName() const", AS_METHODPR(Graphics, GetApiName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector2 Graphics::GetWindowPosition() const", "IntVector2 GetWindowPosition() const", AS_METHODPR(Graphics, GetWindowPosition, () const, IntVector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector2 Graphics::GetWindowPosition() const", "IntVector2 get_windowPosition() const", AS_METHODPR(Graphics, GetWindowPosition, () const, IntVector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetWidth() const", "int GetWidth() const", AS_METHODPR(Graphics, GetWidth, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetWidth() const", "int get_width() const", AS_METHODPR(Graphics, GetWidth, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetHeight() const", "int GetHeight() const", AS_METHODPR(Graphics, GetHeight, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetHeight() const", "int get_height() const", AS_METHODPR(Graphics, GetHeight, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const ScreenModeParams& Graphics::GetScreenModeParams() const", "const ScreenModeParams& GetScreenModeParams() const", AS_METHODPR(Graphics, GetScreenModeParams, () const, const ScreenModeParams&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetMultiSample() const", "int GetMultiSample() const", AS_METHODPR(Graphics, GetMultiSample, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetMultiSample() const", "int get_multiSample() const", AS_METHODPR(Graphics, GetMultiSample, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector2 Graphics::GetSize() const", "IntVector2 GetSize() const", AS_METHODPR(Graphics, GetSize, () const, IntVector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector2 Graphics::GetSize() const", "IntVector2 get_size() const", AS_METHODPR(Graphics, GetSize, () const, IntVector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetFullscreen() const", "bool GetFullscreen() const", AS_METHODPR(Graphics, GetFullscreen, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetFullscreen() const", "bool get_fullscreen() const", AS_METHODPR(Graphics, GetFullscreen, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetBorderless() const", "bool GetBorderless() const", AS_METHODPR(Graphics, GetBorderless, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetBorderless() const", "bool get_borderless() const", AS_METHODPR(Graphics, GetBorderless, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetResizable() const", "bool GetResizable() const", AS_METHODPR(Graphics, GetResizable, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetResizable() const", "bool get_resizable() const", AS_METHODPR(Graphics, GetResizable, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetHighDPI() const", "bool GetHighDPI() const", AS_METHODPR(Graphics, GetHighDPI, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetVSync() const", "bool GetVSync() const", AS_METHODPR(Graphics, GetVSync, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetVSync() const", "bool get_vSync() const", AS_METHODPR(Graphics, GetVSync, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetRefreshRate() const", "int GetRefreshRate() const", AS_METHODPR(Graphics, GetRefreshRate, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetMonitor() const", "int GetMonitor() const", AS_METHODPR(Graphics, GetMonitor, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetTripleBuffer() const", "bool GetTripleBuffer() const", AS_METHODPR(Graphics, GetTripleBuffer, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetTripleBuffer() const", "bool get_tripleBuffer() const", AS_METHODPR(Graphics, GetTripleBuffer, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetSRGB() const", "bool GetSRGB() const", AS_METHODPR(Graphics, GetSRGB, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetSRGB() const", "bool get_sRGB() const", AS_METHODPR(Graphics, GetSRGB, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetDither() const", "bool GetDither() const", AS_METHODPR(Graphics, GetDither, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetDither() const", "bool get_dither() const", AS_METHODPR(Graphics, GetDither, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetFlushGPU() const", "bool GetFlushGPU() const", AS_METHODPR(Graphics, GetFlushGPU, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetFlushGPU() const", "bool get_flushGPU() const", AS_METHODPR(Graphics, GetFlushGPU, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetForceGL2() const", "bool GetForceGL2() const", AS_METHODPR(Graphics, GetForceGL2, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Graphics::GetOrientations() const", "const String& GetOrientations() const", AS_METHODPR(Graphics, GetOrientations, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Graphics::GetOrientations() const", "const String& get_orientations() const", AS_METHODPR(Graphics, GetOrientations, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::IsDeviceLost() const", "bool IsDeviceLost() const", AS_METHODPR(Graphics, IsDeviceLost, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::IsDeviceLost() const", "bool get_deviceLost() const", AS_METHODPR(Graphics, IsDeviceLost, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetNumPrimitives() const", "uint GetNumPrimitives() const", AS_METHODPR(Graphics, GetNumPrimitives, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetNumPrimitives() const", "uint get_numPrimitives() const", AS_METHODPR(Graphics, GetNumPrimitives, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetNumBatches() const", "uint GetNumBatches() const", AS_METHODPR(Graphics, GetNumBatches, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetNumBatches() const", "uint get_numBatches() const", AS_METHODPR(Graphics, GetNumBatches, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetDummyColorFormat() const", "uint GetDummyColorFormat() const", AS_METHODPR(Graphics, GetDummyColorFormat, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetShadowMapFormat() const", "uint GetShadowMapFormat() const", AS_METHODPR(Graphics, GetShadowMapFormat, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetHiresShadowMapFormat() const", "uint GetHiresShadowMapFormat() const", AS_METHODPR(Graphics, GetHiresShadowMapFormat, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetInstancingSupport() const", "bool GetInstancingSupport() const", AS_METHODPR(Graphics, GetInstancingSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetInstancingSupport() const", "bool get_instancingSupport() const", AS_METHODPR(Graphics, GetInstancingSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetLightPrepassSupport() const", "bool GetLightPrepassSupport() const", AS_METHODPR(Graphics, GetLightPrepassSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetLightPrepassSupport() const", "bool get_lightPrepassSupport() const", AS_METHODPR(Graphics, GetLightPrepassSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetDeferredSupport() const", "bool GetDeferredSupport() const", AS_METHODPR(Graphics, GetDeferredSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetDeferredSupport() const", "bool get_deferredSupport() const", AS_METHODPR(Graphics, GetDeferredSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetAnisotropySupport() const", "bool GetAnisotropySupport() const", AS_METHODPR(Graphics, GetAnisotropySupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetHardwareShadowSupport() const", "bool GetHardwareShadowSupport() const", AS_METHODPR(Graphics, GetHardwareShadowSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetHardwareShadowSupport() const", "bool get_hardwareShadowSupport() const", AS_METHODPR(Graphics, GetHardwareShadowSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetReadableDepthSupport() const", "bool GetReadableDepthSupport() const", AS_METHODPR(Graphics, GetReadableDepthSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetReadableDepthSupport() const", "bool get_readableDepthSupport() const", AS_METHODPR(Graphics, GetReadableDepthSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetSRGBSupport() const", "bool GetSRGBSupport() const", AS_METHODPR(Graphics, GetSRGBSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetSRGBSupport() const", "bool get_sRGBSupport() const", AS_METHODPR(Graphics, GetSRGBSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetSRGBWriteSupport() const", "bool GetSRGBWriteSupport() const", AS_METHODPR(Graphics, GetSRGBWriteSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetSRGBWriteSupport() const", "bool get_sRGBWriteSupport() const", AS_METHODPR(Graphics, GetSRGBWriteSupport, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("PODVector<IntVector3> Graphics::GetResolutions(int monitor) const", "Array<IntVector3>@ GetResolutions(int) const", AS_FUNCTION_OBJFIRST(Graphics_GetResolutions_int), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("PODVector<IntVector3> Graphics::GetResolutions(int monitor) const", "Array<IntVector3>@ get_resolutions(int) const", AS_FUNCTION_OBJFIRST(Graphics_GetResolutions_int), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::FindBestResolutionIndex(int monitor, int width, int height, int refreshRate) const", "uint FindBestResolutionIndex(int, int, int, int) const", AS_METHODPR(Graphics, FindBestResolutionIndex, (int, int, int, int) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("PODVector<int> Graphics::GetMultiSampleLevels() const", "Array<int>@ GetMultiSampleLevels() const", AS_FUNCTION_OBJFIRST(Graphics_GetMultiSampleLevels_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("PODVector<int> Graphics::GetMultiSampleLevels() const", "Array<int>@ get_multiSampleLevels() const", AS_FUNCTION_OBJFIRST(Graphics_GetMultiSampleLevels_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector2 Graphics::GetDesktopResolution(int monitor) const", "IntVector2 GetDesktopResolution(int) const", AS_METHODPR(Graphics, GetDesktopResolution, (int) const, IntVector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector2 Graphics::GetDesktopResolution(int monitor) const", "IntVector2 get_desktopResolution(int) const", AS_METHODPR(Graphics, GetDesktopResolution, (int) const, IntVector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetMonitorCount() const", "int GetMonitorCount() const", AS_METHODPR(Graphics, GetMonitorCount, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetMonitorCount() const", "int get_monitorCount() const", AS_METHODPR(Graphics, GetMonitorCount, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetCurrentMonitor() const", "int GetCurrentMonitor() const", AS_METHODPR(Graphics, GetCurrentMonitor, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Graphics::GetCurrentMonitor() const", "int get_currentMonitor() const", AS_METHODPR(Graphics, GetCurrentMonitor, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetMaximized() const", "bool GetMaximized() const", AS_METHODPR(Graphics, GetMaximized, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetMaximized() const", "bool get_maximized() const", AS_METHODPR(Graphics, GetMaximized, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 Graphics::GetDisplayDPI(int monitor=0) const", "Vector3 GetDisplayDPI(int = 0) const", AS_METHODPR(Graphics, GetDisplayDPI, (int) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 Graphics::GetDisplayDPI(int monitor=0) const", "Vector3 get_displayDPI(int = 0) const", AS_METHODPR(Graphics, GetDisplayDPI, (int) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetFormat(CompressedFormat format) const", "uint GetFormat(CompressedFormat) const", AS_METHODPR(Graphics, GetFormat, (CompressedFormat) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ShaderVariation* Graphics::GetShader(ShaderType type, const String& name, const String& defines=String::EMPTY) const", "ShaderVariation@+ GetShader(ShaderType, const String&in, const String&in = String::EMPTY) const", AS_METHODPR(Graphics, GetShader, (ShaderType, const String&, const String&) const, ShaderVariation*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VertexBuffer* Graphics::GetVertexBuffer(unsigned index) const", "VertexBuffer@+ GetVertexBuffer(uint) const", AS_METHODPR(Graphics, GetVertexBuffer, (unsigned) const, VertexBuffer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IndexBuffer* Graphics::GetIndexBuffer() const", "IndexBuffer@+ GetIndexBuffer() const", AS_METHODPR(Graphics, GetIndexBuffer, () const, IndexBuffer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ShaderVariation* Graphics::GetVertexShader() const", "ShaderVariation@+ GetVertexShader() const", AS_METHODPR(Graphics, GetVertexShader, () const, ShaderVariation*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ShaderVariation* Graphics::GetPixelShader() const", "ShaderVariation@+ GetPixelShader() const", AS_METHODPR(Graphics, GetPixelShader, () const, ShaderVariation*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureUnit Graphics::GetTextureUnit(const String& name)", "TextureUnit GetTextureUnit(const String&in)", AS_METHODPR(Graphics, GetTextureUnit, (const String&), TextureUnit), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Graphics::GetTextureUnitName(TextureUnit unit)", "const String& GetTextureUnitName(TextureUnit)", AS_METHODPR(Graphics, GetTextureUnitName, (TextureUnit), const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Graphics::GetTexture(unsigned index) const", "Texture@+ GetTexture(uint) const", AS_METHODPR(Graphics, GetTexture, (unsigned) const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureFilterMode Graphics::GetDefaultTextureFilterMode() const", "TextureFilterMode GetDefaultTextureFilterMode() const", AS_METHODPR(Graphics, GetDefaultTextureFilterMode, () const, TextureFilterMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetDefaultTextureAnisotropy() const", "uint GetDefaultTextureAnisotropy() const", AS_METHODPR(Graphics, GetDefaultTextureAnisotropy, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* Graphics::GetRenderTarget(unsigned index) const", "RenderSurface@+ GetRenderTarget(uint) const", AS_METHODPR(Graphics, GetRenderTarget, (unsigned) const, RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* Graphics::GetDepthStencil() const", "RenderSurface@+ GetDepthStencil() const", AS_METHODPR(Graphics, GetDepthStencil, () const, RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntRect Graphics::GetViewport() const", "IntRect GetViewport() const", AS_METHODPR(Graphics, GetViewport, () const, IntRect), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("BlendMode Graphics::GetBlendMode() const", "BlendMode GetBlendMode() const", AS_METHODPR(Graphics, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetAlphaToCoverage() const", "bool GetAlphaToCoverage() const", AS_METHODPR(Graphics, GetAlphaToCoverage, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetColorWrite() const", "bool GetColorWrite() const", AS_METHODPR(Graphics, GetColorWrite, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CullMode Graphics::GetCullMode() const", "CullMode GetCullMode() const", AS_METHODPR(Graphics, GetCullMode, () const, CullMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Graphics::GetDepthConstantBias() const", "float GetDepthConstantBias() const", AS_METHODPR(Graphics, GetDepthConstantBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Graphics::GetDepthSlopeScaledBias() const", "float GetDepthSlopeScaledBias() const", AS_METHODPR(Graphics, GetDepthSlopeScaledBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CompareMode Graphics::GetDepthTest() const", "CompareMode GetDepthTest() const", AS_METHODPR(Graphics, GetDepthTest, () const, CompareMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetDepthWrite() const", "bool GetDepthWrite() const", AS_METHODPR(Graphics, GetDepthWrite, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FillMode Graphics::GetFillMode() const", "FillMode GetFillMode() const", AS_METHODPR(Graphics, GetFillMode, () const, FillMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetLineAntiAlias() const", "bool GetLineAntiAlias() const", AS_METHODPR(Graphics, GetLineAntiAlias, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetStencilTest() const", "bool GetStencilTest() const", AS_METHODPR(Graphics, GetStencilTest, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetScissorTest() const", "bool GetScissorTest() const", AS_METHODPR(Graphics, GetScissorTest, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntRect& Graphics::GetScissorRect() const", "const IntRect& GetScissorRect() const", AS_METHODPR(Graphics, GetScissorRect, () const, const IntRect&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CompareMode Graphics::GetStencilTestMode() const", "CompareMode GetStencilTestMode() const", AS_METHODPR(Graphics, GetStencilTestMode, () const, CompareMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("StencilOp Graphics::GetStencilPass() const", "StencilOp GetStencilPass() const", AS_METHODPR(Graphics, GetStencilPass, () const, StencilOp), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("StencilOp Graphics::GetStencilFail() const", "StencilOp GetStencilFail() const", AS_METHODPR(Graphics, GetStencilFail, () const, StencilOp), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("StencilOp Graphics::GetStencilZFail() const", "StencilOp GetStencilZFail() const", AS_METHODPR(Graphics, GetStencilZFail, () const, StencilOp), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetStencilRef() const", "uint GetStencilRef() const", AS_METHODPR(Graphics, GetStencilRef, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetStencilCompareMask() const", "uint GetStencilCompareMask() const", AS_METHODPR(Graphics, GetStencilCompareMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Graphics::GetStencilWriteMask() const", "uint GetStencilWriteMask() const", AS_METHODPR(Graphics, GetStencilWriteMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Graphics::GetUseClipPlane() const", "bool GetUseClipPlane() const", AS_METHODPR(Graphics, GetUseClipPlane, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Graphics::GetShaderCacheDir() const", "const String& GetShaderCacheDir() const", AS_METHODPR(Graphics, GetShaderCacheDir, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Graphics::GetShaderCacheDir() const", "const String& get_shaderCacheDir() const", AS_METHODPR(Graphics, GetShaderCacheDir, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector2 Graphics::GetRenderTargetDimensions() const", "IntVector2 GetRenderTargetDimensions() const", AS_METHODPR(Graphics, GetRenderTargetDimensions, () const, IntVector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::OnWindowResized()", "void OnWindowResized()", AS_METHODPR(Graphics, OnWindowResized, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::OnWindowMoved()", "void OnWindowMoved()", AS_METHODPR(Graphics, OnWindowMoved, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::Maximize()", "void Maximize()", AS_METHODPR(Graphics, Maximize, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::Minimize()", "void Minimize()", AS_METHODPR(Graphics, Minimize, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::Raise() const", "void Raise() const", AS_METHODPR(Graphics, Raise, () const, void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::CleanupScratchBuffers()", "void CleanupScratchBuffers()", AS_METHODPR(Graphics, CleanupScratchBuffers, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::CleanupShaderPrograms(ShaderVariation* variation)", "void CleanupShaderPrograms(ShaderVariation@+)", AS_METHODPR(Graphics, CleanupShaderPrograms, (ShaderVariation*), void), AS_CALL_THISCALL));

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetAlphaFormat()", "uint GetAlphaFormat()", AS_FUNCTIONPR(Graphics::GetAlphaFormat, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetLuminanceFormat()", "uint GetLuminanceFormat()", AS_FUNCTIONPR(Graphics::GetLuminanceFormat, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetLuminanceAlphaFormat()", "uint GetLuminanceAlphaFormat()", AS_FUNCTIONPR(Graphics::GetLuminanceAlphaFormat, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetRGBFormat()", "uint GetRGBFormat()", AS_FUNCTIONPR(Graphics::GetRGBFormat, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetRGBAFormat()", "uint GetRGBAFormat()", AS_FUNCTIONPR(Graphics::GetRGBAFormat, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetRGBA16Format()", "uint GetRGBA16Format()", AS_FUNCTIONPR(Graphics::GetRGBA16Format, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetRGBAFloat16Format()", "uint GetRGBAFloat16Format()", AS_FUNCTIONPR(Graphics::GetRGBAFloat16Format, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetRGBAFloat32Format()", "uint GetRGBAFloat32Format()", AS_FUNCTIONPR(Graphics::GetRGBAFloat32Format, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetRG16Format()", "uint GetRG16Format()", AS_FUNCTIONPR(Graphics::GetRG16Format, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetRGFloat16Format()", "uint GetRGFloat16Format()", AS_FUNCTIONPR(Graphics::GetRGFloat16Format, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetRGFloat32Format()", "uint GetRGFloat32Format()", AS_FUNCTIONPR(Graphics::GetRGFloat32Format, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetFloat16Format()", "uint GetFloat16Format()", AS_FUNCTIONPR(Graphics::GetFloat16Format, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetFloat32Format()", "uint GetFloat32Format()", AS_FUNCTIONPR(Graphics::GetFloat32Format, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetLinearDepthFormat()", "uint GetLinearDepthFormat()", AS_FUNCTIONPR(Graphics::GetLinearDepthFormat, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetDepthStencilFormat()", "uint GetDepthStencilFormat()", AS_FUNCTIONPR(Graphics::GetDepthStencilFormat, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetReadableDepthFormat()", "uint GetReadableDepthFormat()", AS_FUNCTIONPR(Graphics::GetReadableDepthFormat, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetFormat(const String& formatName)", "uint GetFormat(const String&in)", AS_FUNCTIONPR(Graphics::GetFormat, (const String&), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static const Vector2& Graphics::GetPixelUVOffset()", "const Vector2& GetPixelUVOffset()", AS_FUNCTIONPR(Graphics::GetPixelUVOffset, (), const Vector2&), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Graphics::GetMaxBones()", "uint GetMaxBones()", AS_FUNCTIONPR(Graphics::GetMaxBones, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static bool Graphics::GetGL3Support()", "bool GetGL3Support()", AS_FUNCTIONPR(Graphics::GetGL3Support, (), bool), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Graphics
        REGISTER_MEMBERS_MANUAL_PART_Graphics();
    #endif
}

// class IndexBuffer | File: ../Graphics/IndexBuffer.h
void CollectMembers_IndexBuffer(MemberCollection& members)
{
    CollectMembers_Object(members);
    CollectMembers_GPUObject(members);

    Remove(members.methods_, "virtual void GPUObject::OnDeviceLost()");
    Remove(members.methods_, "virtual void GPUObject::OnDeviceReset()");
    Remove(members.methods_, "virtual void GPUObject::Release()");

    // unsigned char* IndexBuffer::GetShadowData() const
    // Error: type "unsigned char*" can not automatically bind
    // SharedArrayPtr<unsigned char> IndexBuffer::GetShadowDataShared() const
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind
    // void* IndexBuffer::Lock(unsigned start, unsigned count, bool discard=false)
    // Error: type "void*" can not automatically bind
    // bool IndexBuffer::SetData(const void* data)
    // Error: type "const void*" can not automatically bind
    // bool IndexBuffer::SetDataRange(const void* data, unsigned start, unsigned count, bool discard=false)
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void IndexBuffer::OnDeviceLost() override", "void OnDeviceLost()", AS_METHODPR(IndexBuffer, OnDeviceLost, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IndexBuffer::OnDeviceReset() override", "void OnDeviceReset()", AS_METHODPR(IndexBuffer, OnDeviceReset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IndexBuffer::Release() override", "void Release()", AS_METHODPR(IndexBuffer, Release, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IndexBuffer::SetShadowed(bool enable)", "void SetShadowed(bool)", AS_METHODPR(IndexBuffer, SetShadowed, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IndexBuffer::SetShadowed(bool enable)", "void set_shadowed(bool)", AS_METHODPR(IndexBuffer, SetShadowed, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IndexBuffer::SetSize(unsigned indexCount, bool largeIndices, bool dynamic=false)", "bool SetSize(uint, bool, bool = false)", AS_METHODPR(IndexBuffer, SetSize, (unsigned, bool, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void IndexBuffer::Unlock()", "void Unlock()", AS_METHODPR(IndexBuffer, Unlock, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IndexBuffer::IsShadowed() const", "bool IsShadowed() const", AS_METHODPR(IndexBuffer, IsShadowed, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IndexBuffer::IsShadowed() const", "bool get_shadowed() const", AS_METHODPR(IndexBuffer, IsShadowed, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IndexBuffer::IsDynamic() const", "bool IsDynamic() const", AS_METHODPR(IndexBuffer, IsDynamic, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IndexBuffer::IsDynamic() const", "bool get_dynamic() const", AS_METHODPR(IndexBuffer, IsDynamic, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IndexBuffer::IsLocked() const", "bool IsLocked() const", AS_METHODPR(IndexBuffer, IsLocked, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned IndexBuffer::GetIndexCount() const", "uint GetIndexCount() const", AS_METHODPR(IndexBuffer, GetIndexCount, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned IndexBuffer::GetIndexCount() const", "uint get_indexCount() const", AS_METHODPR(IndexBuffer, GetIndexCount, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned IndexBuffer::GetIndexSize() const", "uint GetIndexSize() const", AS_METHODPR(IndexBuffer, GetIndexSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned IndexBuffer::GetIndexSize() const", "uint get_indexSize() const", AS_METHODPR(IndexBuffer, GetIndexSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool IndexBuffer::GetUsedVertexRange(unsigned start, unsigned count, unsigned& minVertex, unsigned& vertexCount)", "bool GetUsedVertexRange(uint, uint, uint&, uint&)", AS_METHODPR(IndexBuffer, GetUsedVertexRange, (unsigned, unsigned, unsigned&, unsigned&), bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_IndexBuffer
        REGISTER_MEMBERS_MANUAL_PART_IndexBuffer();
    #endif
}

// struct IndexBufferDesc | File: ../Graphics/Model.h
void CollectMembers_IndexBufferDesc(MemberCollection& members)
{
    // SharedArrayPtr<unsigned char> IndexBufferDesc::data_
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned IndexBufferDesc::indexCount_", "uint indexCount", offsetof(IndexBufferDesc, indexCount_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned IndexBufferDesc::indexSize_", "uint indexSize", offsetof(IndexBufferDesc, indexSize_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned IndexBufferDesc::dataSize_", "uint dataSize", offsetof(IndexBufferDesc, dataSize_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_IndexBufferDesc
        REGISTER_MEMBERS_MANUAL_PART_IndexBufferDesc();
    #endif
}

// struct InstanceData | File: ../Graphics/Batch.h
void CollectMembers_InstanceData(MemberCollection& members)
{
    // const Matrix3x4* InstanceData::worldTransform_
    // Not registered because pointer
    // const void* InstanceData::instancingData_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("float InstanceData::distance_", "float distance", offsetof(InstanceData, distance_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_InstanceData
        REGISTER_MEMBERS_MANUAL_PART_InstanceData();
    #endif
}

// class Light | File: ../Graphics/Light.h
void CollectMembers_Light(MemberCollection& members)
{
    CollectMembers_Drawable(members);

    Remove(members.methods_, "virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)");
    Remove(members.methods_, "virtual void Drawable::UpdateBatches(const FrameInfo& frame)");
    Remove(members.methods_, "void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override");

    Remove(members.staticMethods_, "static void Drawable::RegisterObject(Context* context)");

    // LightBatchQueue* Light::GetLightQueue() const
    // Error: type "LightBatchQueue*" can not automatically bind
    // void Light::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
    // void Light::SetLightQueue(LightBatchQueue* queue)
    // Error: type "LightBatchQueue*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void Light::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(Light, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(Light, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetLightType(LightType type)", "void SetLightType(LightType)", AS_METHODPR(Light, SetLightType, (LightType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetLightType(LightType type)", "void set_lightType(LightType)", AS_METHODPR(Light, SetLightType, (LightType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetPerVertex(bool enable)", "void SetPerVertex(bool)", AS_METHODPR(Light, SetPerVertex, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetPerVertex(bool enable)", "void set_perVertex(bool)", AS_METHODPR(Light, SetPerVertex, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetColor(const Color& color)", "void SetColor(const Color&in)", AS_METHODPR(Light, SetColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetColor(const Color& color)", "void set_color(const Color&in)", AS_METHODPR(Light, SetColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetTemperature(float temperature)", "void SetTemperature(float)", AS_METHODPR(Light, SetTemperature, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetTemperature(float temperature)", "void set_temperature(float)", AS_METHODPR(Light, SetTemperature, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetRadius(float radius)", "void SetRadius(float)", AS_METHODPR(Light, SetRadius, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetRadius(float radius)", "void set_radius(float)", AS_METHODPR(Light, SetRadius, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetLength(float length)", "void SetLength(float)", AS_METHODPR(Light, SetLength, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetLength(float length)", "void set_length(float)", AS_METHODPR(Light, SetLength, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetUsePhysicalValues(bool enable)", "void SetUsePhysicalValues(bool)", AS_METHODPR(Light, SetUsePhysicalValues, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetUsePhysicalValues(bool enable)", "void set_usePhysicalValues(bool)", AS_METHODPR(Light, SetUsePhysicalValues, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetSpecularIntensity(float intensity)", "void SetSpecularIntensity(float)", AS_METHODPR(Light, SetSpecularIntensity, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetSpecularIntensity(float intensity)", "void set_specularIntensity(float)", AS_METHODPR(Light, SetSpecularIntensity, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetBrightness(float brightness)", "void SetBrightness(float)", AS_METHODPR(Light, SetBrightness, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetBrightness(float brightness)", "void set_brightness(float)", AS_METHODPR(Light, SetBrightness, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetRange(float range)", "void SetRange(float)", AS_METHODPR(Light, SetRange, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetRange(float range)", "void set_range(float)", AS_METHODPR(Light, SetRange, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetFov(float fov)", "void SetFov(float)", AS_METHODPR(Light, SetFov, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetFov(float fov)", "void set_fov(float)", AS_METHODPR(Light, SetFov, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetAspectRatio(float aspectRatio)", "void SetAspectRatio(float)", AS_METHODPR(Light, SetAspectRatio, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetAspectRatio(float aspectRatio)", "void set_aspectRatio(float)", AS_METHODPR(Light, SetAspectRatio, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetFadeDistance(float distance)", "void SetFadeDistance(float)", AS_METHODPR(Light, SetFadeDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetFadeDistance(float distance)", "void set_fadeDistance(float)", AS_METHODPR(Light, SetFadeDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowFadeDistance(float distance)", "void SetShadowFadeDistance(float)", AS_METHODPR(Light, SetShadowFadeDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowFadeDistance(float distance)", "void set_shadowFadeDistance(float)", AS_METHODPR(Light, SetShadowFadeDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowBias(const BiasParameters& parameters)", "void SetShadowBias(const BiasParameters&in)", AS_METHODPR(Light, SetShadowBias, (const BiasParameters&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowBias(const BiasParameters& parameters)", "void set_shadowBias(const BiasParameters&in)", AS_METHODPR(Light, SetShadowBias, (const BiasParameters&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowCascade(const CascadeParameters& parameters)", "void SetShadowCascade(const CascadeParameters&in)", AS_METHODPR(Light, SetShadowCascade, (const CascadeParameters&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowCascade(const CascadeParameters& parameters)", "void set_shadowCascade(const CascadeParameters&in)", AS_METHODPR(Light, SetShadowCascade, (const CascadeParameters&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowFocus(const FocusParameters& parameters)", "void SetShadowFocus(const FocusParameters&in)", AS_METHODPR(Light, SetShadowFocus, (const FocusParameters&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowFocus(const FocusParameters& parameters)", "void set_shadowFocus(const FocusParameters&in)", AS_METHODPR(Light, SetShadowFocus, (const FocusParameters&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowIntensity(float intensity)", "void SetShadowIntensity(float)", AS_METHODPR(Light, SetShadowIntensity, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowIntensity(float intensity)", "void set_shadowIntensity(float)", AS_METHODPR(Light, SetShadowIntensity, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowResolution(float resolution)", "void SetShadowResolution(float)", AS_METHODPR(Light, SetShadowResolution, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowResolution(float resolution)", "void set_shadowResolution(float)", AS_METHODPR(Light, SetShadowResolution, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowNearFarRatio(float nearFarRatio)", "void SetShadowNearFarRatio(float)", AS_METHODPR(Light, SetShadowNearFarRatio, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowNearFarRatio(float nearFarRatio)", "void set_shadowNearFarRatio(float)", AS_METHODPR(Light, SetShadowNearFarRatio, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowMaxExtrusion(float extrusion)", "void SetShadowMaxExtrusion(float)", AS_METHODPR(Light, SetShadowMaxExtrusion, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShadowMaxExtrusion(float extrusion)", "void set_shadowMaxExtrusion(float)", AS_METHODPR(Light, SetShadowMaxExtrusion, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetRampTexture(Texture* texture)", "void SetRampTexture(Texture@+)", AS_METHODPR(Light, SetRampTexture, (Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetRampTexture(Texture* texture)", "void set_rampTexture(Texture@+)", AS_METHODPR(Light, SetRampTexture, (Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShapeTexture(Texture* texture)", "void SetShapeTexture(Texture@+)", AS_METHODPR(Light, SetShapeTexture, (Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShapeTexture(Texture* texture)", "void set_shapeTexture(Texture@+)", AS_METHODPR(Light, SetShapeTexture, (Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("LightType Light::GetLightType() const", "LightType GetLightType() const", AS_METHODPR(Light, GetLightType, () const, LightType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("LightType Light::GetLightType() const", "LightType get_lightType() const", AS_METHODPR(Light, GetLightType, () const, LightType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Light::GetPerVertex() const", "bool GetPerVertex() const", AS_METHODPR(Light, GetPerVertex, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Light::GetPerVertex() const", "bool get_perVertex() const", AS_METHODPR(Light, GetPerVertex, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Light::GetColor() const", "const Color& GetColor() const", AS_METHODPR(Light, GetColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Light::GetColor() const", "const Color& get_color() const", AS_METHODPR(Light, GetColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetTemperature() const", "float GetTemperature() const", AS_METHODPR(Light, GetTemperature, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetTemperature() const", "float get_temperature() const", AS_METHODPR(Light, GetTemperature, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetRadius() const", "float GetRadius() const", AS_METHODPR(Light, GetRadius, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetRadius() const", "float get_radius() const", AS_METHODPR(Light, GetRadius, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetLength() const", "float GetLength() const", AS_METHODPR(Light, GetLength, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetLength() const", "float get_length() const", AS_METHODPR(Light, GetLength, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Light::GetUsePhysicalValues() const", "bool GetUsePhysicalValues() const", AS_METHODPR(Light, GetUsePhysicalValues, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Light::GetUsePhysicalValues() const", "bool get_usePhysicalValues() const", AS_METHODPR(Light, GetUsePhysicalValues, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Color Light::GetColorFromTemperature() const", "Color GetColorFromTemperature() const", AS_METHODPR(Light, GetColorFromTemperature, () const, Color), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Color Light::GetColorFromTemperature() const", "Color get_colorFromTemperature() const", AS_METHODPR(Light, GetColorFromTemperature, () const, Color), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetSpecularIntensity() const", "float GetSpecularIntensity() const", AS_METHODPR(Light, GetSpecularIntensity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetSpecularIntensity() const", "float get_specularIntensity() const", AS_METHODPR(Light, GetSpecularIntensity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetBrightness() const", "float GetBrightness() const", AS_METHODPR(Light, GetBrightness, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetBrightness() const", "float get_brightness() const", AS_METHODPR(Light, GetBrightness, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Color Light::GetEffectiveColor() const", "Color GetEffectiveColor() const", AS_METHODPR(Light, GetEffectiveColor, () const, Color), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Color Light::GetEffectiveColor() const", "Color get_effectiveColor() const", AS_METHODPR(Light, GetEffectiveColor, () const, Color), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetEffectiveSpecularIntensity() const", "float GetEffectiveSpecularIntensity() const", AS_METHODPR(Light, GetEffectiveSpecularIntensity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetEffectiveSpecularIntensity() const", "float get_effectiveSpecularIntensity() const", AS_METHODPR(Light, GetEffectiveSpecularIntensity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetRange() const", "float GetRange() const", AS_METHODPR(Light, GetRange, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetRange() const", "float get_range() const", AS_METHODPR(Light, GetRange, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetFov() const", "float GetFov() const", AS_METHODPR(Light, GetFov, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetFov() const", "float get_fov() const", AS_METHODPR(Light, GetFov, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetAspectRatio() const", "float GetAspectRatio() const", AS_METHODPR(Light, GetAspectRatio, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetAspectRatio() const", "float get_aspectRatio() const", AS_METHODPR(Light, GetAspectRatio, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetFadeDistance() const", "float GetFadeDistance() const", AS_METHODPR(Light, GetFadeDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetFadeDistance() const", "float get_fadeDistance() const", AS_METHODPR(Light, GetFadeDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetShadowFadeDistance() const", "float GetShadowFadeDistance() const", AS_METHODPR(Light, GetShadowFadeDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetShadowFadeDistance() const", "float get_shadowFadeDistance() const", AS_METHODPR(Light, GetShadowFadeDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BiasParameters& Light::GetShadowBias() const", "const BiasParameters& GetShadowBias() const", AS_METHODPR(Light, GetShadowBias, () const, const BiasParameters&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BiasParameters& Light::GetShadowBias() const", "const BiasParameters& get_shadowBias() const", AS_METHODPR(Light, GetShadowBias, () const, const BiasParameters&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const CascadeParameters& Light::GetShadowCascade() const", "const CascadeParameters& GetShadowCascade() const", AS_METHODPR(Light, GetShadowCascade, () const, const CascadeParameters&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const CascadeParameters& Light::GetShadowCascade() const", "const CascadeParameters& get_shadowCascade() const", AS_METHODPR(Light, GetShadowCascade, () const, const CascadeParameters&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const FocusParameters& Light::GetShadowFocus() const", "const FocusParameters& GetShadowFocus() const", AS_METHODPR(Light, GetShadowFocus, () const, const FocusParameters&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const FocusParameters& Light::GetShadowFocus() const", "const FocusParameters& get_shadowFocus() const", AS_METHODPR(Light, GetShadowFocus, () const, const FocusParameters&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetShadowIntensity() const", "float GetShadowIntensity() const", AS_METHODPR(Light, GetShadowIntensity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetShadowIntensity() const", "float get_shadowIntensity() const", AS_METHODPR(Light, GetShadowIntensity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetShadowResolution() const", "float GetShadowResolution() const", AS_METHODPR(Light, GetShadowResolution, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetShadowResolution() const", "float get_shadowResolution() const", AS_METHODPR(Light, GetShadowResolution, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetShadowNearFarRatio() const", "float GetShadowNearFarRatio() const", AS_METHODPR(Light, GetShadowNearFarRatio, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetShadowNearFarRatio() const", "float get_shadowNearFarRatio() const", AS_METHODPR(Light, GetShadowNearFarRatio, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetShadowMaxExtrusion() const", "float GetShadowMaxExtrusion() const", AS_METHODPR(Light, GetShadowMaxExtrusion, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetShadowMaxExtrusion() const", "float get_shadowMaxExtrusion() const", AS_METHODPR(Light, GetShadowMaxExtrusion, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Light::GetRampTexture() const", "Texture@+ GetRampTexture() const", AS_METHODPR(Light, GetRampTexture, () const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Light::GetRampTexture() const", "Texture@+ get_rampTexture() const", AS_METHODPR(Light, GetRampTexture, () const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Light::GetShapeTexture() const", "Texture@+ GetShapeTexture() const", AS_METHODPR(Light, GetShapeTexture, () const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Light::GetShapeTexture() const", "Texture@+ get_shapeTexture() const", AS_METHODPR(Light, GetShapeTexture, () const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Frustum Light::GetFrustum() const", "Frustum GetFrustum() const", AS_METHODPR(Light, GetFrustum, () const, Frustum), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Frustum Light::GetFrustum() const", "Frustum get_frustum() const", AS_METHODPR(Light, GetFrustum, () const, Frustum), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Frustum Light::GetViewSpaceFrustum(const Matrix3x4& view) const", "Frustum GetViewSpaceFrustum(const Matrix3x4&in) const", AS_METHODPR(Light, GetViewSpaceFrustum, (const Matrix3x4&) const, Frustum), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Light::GetNumShadowSplits() const", "int GetNumShadowSplits() const", AS_METHODPR(Light, GetNumShadowSplits, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Light::GetNumShadowSplits() const", "int get_numShadowSplits() const", AS_METHODPR(Light, GetNumShadowSplits, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Light::IsNegative() const", "bool IsNegative() const", AS_METHODPR(Light, IsNegative, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Light::IsNegative() const", "bool get_negative() const", AS_METHODPR(Light, IsNegative, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetIntensitySortValue(float distance)", "void SetIntensitySortValue(float)", AS_METHODPR(Light, SetIntensitySortValue, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetIntensitySortValue(const BoundingBox& box)", "void SetIntensitySortValue(const BoundingBox&in)", AS_METHODPR(Light, SetIntensitySortValue, (const BoundingBox&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix3x4& Light::GetVolumeTransform(Camera* camera)", "const Matrix3x4& GetVolumeTransform(Camera@+)", AS_METHODPR(Light, GetVolumeTransform, (Camera*), const Matrix3x4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Light::GetIntensityDivisor(float attenuation=1.0f) const", "float GetIntensityDivisor(float = 1.0f) const", AS_METHODPR(Light, GetIntensityDivisor, (float) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetRampTextureAttr(const ResourceRef& value)", "void SetRampTextureAttr(const ResourceRef&in)", AS_METHODPR(Light, SetRampTextureAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Light::SetShapeTextureAttr(const ResourceRef& value)", "void SetShapeTextureAttr(const ResourceRef&in)", AS_METHODPR(Light, SetShapeTextureAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef Light::GetRampTextureAttr() const", "ResourceRef GetRampTextureAttr() const", AS_METHODPR(Light, GetRampTextureAttr, () const, ResourceRef), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef Light::GetShapeTextureAttr() const", "ResourceRef GetShapeTextureAttr() const", AS_METHODPR(Light, GetShapeTextureAttr, () const, ResourceRef), AS_CALL_THISCALL));

    // static void Light::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static Matrix3x4 Light::GetFullscreenQuadTransform(Camera* camera)", "Matrix3x4 GetFullscreenQuadTransform(Camera@+)", AS_FUNCTIONPR(Light::GetFullscreenQuadTransform, (Camera*), Matrix3x4), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Light
        REGISTER_MEMBERS_MANUAL_PART_Light();
    #endif
}

// struct LightBatchQueue | File: ../Graphics/Batch.h
void CollectMembers_LightBatchQueue(MemberCollection& members)
{
    // Light* LightBatchQueue::light_
    // Not registered because pointer
    // Texture2D* LightBatchQueue::shadowMap_
    // Not registered because pointer
    // Vector<ShadowBatchQueue> LightBatchQueue::shadowSplits_
    // Error: type "Vector<ShadowBatchQueue>" can not automatically bind
    // PODVector<Light*> LightBatchQueue::vertexLights_
    // Error: type "PODVector<Light*>" can not automatically bind
    // PODVector<Batch> LightBatchQueue::volumeBatches_
    // Error: type "PODVector<Batch>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("bool LightBatchQueue::negative_", "bool negative", offsetof(LightBatchQueue, negative_)));
    members.fields_.Push(RegisterObjectPropertyArgs("BatchQueue LightBatchQueue::litBaseBatches_", "BatchQueue litBaseBatches", offsetof(LightBatchQueue, litBaseBatches_)));
    members.fields_.Push(RegisterObjectPropertyArgs("BatchQueue LightBatchQueue::litBatches_", "BatchQueue litBatches", offsetof(LightBatchQueue, litBatches_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_LightBatchQueue
        REGISTER_MEMBERS_MANUAL_PART_LightBatchQueue();
    #endif
}

// struct LightQueryResult | File: ../Graphics/View.h
void CollectMembers_LightQueryResult(MemberCollection& members)
{
    // Light* LightQueryResult::light_
    // Not registered because pointer
    // PODVector<Drawable*> LightQueryResult::litGeometries_
    // Error: type "PODVector<Drawable*>" can not automatically bind
    // PODVector<Drawable*> LightQueryResult::shadowCasters_
    // Error: type "PODVector<Drawable*>" can not automatically bind
    // Camera* LightQueryResult::shadowCameras_[MAX_LIGHT_SPLITS]
    // Not registered because array
    // unsigned LightQueryResult::shadowCasterBegin_[MAX_LIGHT_SPLITS]
    // Not registered because array
    // unsigned LightQueryResult::shadowCasterEnd_[MAX_LIGHT_SPLITS]
    // Not registered because array
    // BoundingBox LightQueryResult::shadowCasterBox_[MAX_LIGHT_SPLITS]
    // Not registered because array
    // float LightQueryResult::shadowNearSplits_[MAX_LIGHT_SPLITS]
    // Not registered because array
    // float LightQueryResult::shadowFarSplits_[MAX_LIGHT_SPLITS]
    // Not registered because array

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned LightQueryResult::numSplits_", "uint numSplits", offsetof(LightQueryResult, numSplits_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_LightQueryResult
        REGISTER_MEMBERS_MANUAL_PART_LightQueryResult();
    #endif
}

// SharedPtr<Material> Material::Clone(const String& cloneName=String::EMPTY) const
// SharedPtr<Material> Material::Clone(const String& cloneName=String::EMPTY) const | File: ../Graphics/Material.h
static Material* Material_Clone_String(Material* ptr, const String& cloneName)
{
    SharedPtr<Material> result = ptr->Clone(cloneName);
    return result.Detach();
}


// class Material | File: ../Graphics/Material.h
void CollectMembers_Material(MemberCollection& members)
{
    CollectMembers_Resource(members);

    Remove(members.methods_, "bool Resource::Load(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::EndLoad()");
    Remove(members.methods_, "virtual bool Resource::Save(Serializer& dest) const");

    // const HashMap<StringHash, MaterialShaderParameter>& Material::GetShaderParameters() const
    // Error: type "const HashMap<StringHash, MaterialShaderParameter>&" can not automatically bind
    // const Vector<TechniqueEntry>& Material::GetTechniques() const
    // Error: type "const Vector<TechniqueEntry>&" can not automatically bind
    // const HashMap<TextureUnit, SharedPtr<Texture>>& Material::GetTextures() const
    // Error: type "const HashMap<TextureUnit, SharedPtr<Texture>>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool Material::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Material, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::EndLoad() override", "bool EndLoad()", AS_METHODPR(Material, EndLoad, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(Material, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::Load(const XMLElement& source)", "bool Load(const XMLElement&in)", AS_METHODPR(Material, Load, (const XMLElement&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::Save(XMLElement& dest) const", "bool Save(XMLElement&) const", AS_METHODPR(Material, Save, (XMLElement&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::Load(const JSONValue& source)", "bool Load(const JSONValue&in)", AS_METHODPR(Material, Load, (const JSONValue&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::Save(JSONValue& dest) const", "bool Save(JSONValue&) const", AS_METHODPR(Material, Save, (JSONValue&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetNumTechniques(unsigned num)", "void SetNumTechniques(uint)", AS_METHODPR(Material, SetNumTechniques, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetNumTechniques(unsigned num)", "void set_numTechniques(uint)", AS_METHODPR(Material, SetNumTechniques, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetTechnique(unsigned index, Technique* tech, MaterialQuality qualityLevel=QUALITY_LOW, float lodDistance=0.0f)", "void SetTechnique(uint, Technique@+, MaterialQuality = QUALITY_LOW, float = 0.0f)", AS_METHODPR(Material, SetTechnique, (unsigned, Technique*, MaterialQuality, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetVertexShaderDefines(const String& defines)", "void SetVertexShaderDefines(const String&in)", AS_METHODPR(Material, SetVertexShaderDefines, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetVertexShaderDefines(const String& defines)", "void set_vertexShaderDefines(const String&in)", AS_METHODPR(Material, SetVertexShaderDefines, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetPixelShaderDefines(const String& defines)", "void SetPixelShaderDefines(const String&in)", AS_METHODPR(Material, SetPixelShaderDefines, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetPixelShaderDefines(const String& defines)", "void set_pixelShaderDefines(const String&in)", AS_METHODPR(Material, SetPixelShaderDefines, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetShaderParameter(const String& name, const Variant& value)", "void SetShaderParameter(const String&in, const Variant&in)", AS_METHODPR(Material, SetShaderParameter, (const String&, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetShaderParameter(const String& name, const Variant& value)", "void set_shaderParameters(const String&in, const Variant&in)", AS_METHODPR(Material, SetShaderParameter, (const String&, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetShaderParameterAnimation(const String& name, ValueAnimation* animation, WrapMode wrapMode=WM_LOOP, float speed=1.0f)", "void SetShaderParameterAnimation(const String&in, ValueAnimation@+, WrapMode = WM_LOOP, float = 1.0f)", AS_METHODPR(Material, SetShaderParameterAnimation, (const String&, ValueAnimation*, WrapMode, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetShaderParameterAnimationWrapMode(const String& name, WrapMode wrapMode)", "void SetShaderParameterAnimationWrapMode(const String&in, WrapMode)", AS_METHODPR(Material, SetShaderParameterAnimationWrapMode, (const String&, WrapMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetShaderParameterAnimationSpeed(const String& name, float speed)", "void SetShaderParameterAnimationSpeed(const String&in, float)", AS_METHODPR(Material, SetShaderParameterAnimationSpeed, (const String&, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetTexture(TextureUnit unit, Texture* texture)", "void SetTexture(TextureUnit, Texture@+)", AS_METHODPR(Material, SetTexture, (TextureUnit, Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetTexture(TextureUnit unit, Texture* texture)", "void set_textures(TextureUnit, Texture@+)", AS_METHODPR(Material, SetTexture, (TextureUnit, Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetUVTransform(const Vector2& offset, float rotation, const Vector2& repeat)", "void SetUVTransform(const Vector2&in, float, const Vector2&in)", AS_METHODPR(Material, SetUVTransform, (const Vector2&, float, const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetUVTransform(const Vector2& offset, float rotation, float repeat)", "void SetUVTransform(const Vector2&in, float, float)", AS_METHODPR(Material, SetUVTransform, (const Vector2&, float, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetCullMode(CullMode mode)", "void SetCullMode(CullMode)", AS_METHODPR(Material, SetCullMode, (CullMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetCullMode(CullMode mode)", "void set_cullMode(CullMode)", AS_METHODPR(Material, SetCullMode, (CullMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetShadowCullMode(CullMode mode)", "void SetShadowCullMode(CullMode)", AS_METHODPR(Material, SetShadowCullMode, (CullMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetShadowCullMode(CullMode mode)", "void set_shadowCullMode(CullMode)", AS_METHODPR(Material, SetShadowCullMode, (CullMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetFillMode(FillMode mode)", "void SetFillMode(FillMode)", AS_METHODPR(Material, SetFillMode, (FillMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetFillMode(FillMode mode)", "void set_fillMode(FillMode)", AS_METHODPR(Material, SetFillMode, (FillMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetDepthBias(const BiasParameters& parameters)", "void SetDepthBias(const BiasParameters&in)", AS_METHODPR(Material, SetDepthBias, (const BiasParameters&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetDepthBias(const BiasParameters& parameters)", "void set_depthBias(const BiasParameters&in)", AS_METHODPR(Material, SetDepthBias, (const BiasParameters&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetAlphaToCoverage(bool enable)", "void SetAlphaToCoverage(bool)", AS_METHODPR(Material, SetAlphaToCoverage, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetAlphaToCoverage(bool enable)", "void set_alphaToCoverage(bool)", AS_METHODPR(Material, SetAlphaToCoverage, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetLineAntiAlias(bool enable)", "void SetLineAntiAlias(bool)", AS_METHODPR(Material, SetLineAntiAlias, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetLineAntiAlias(bool enable)", "void set_lineAntiAlias(bool)", AS_METHODPR(Material, SetLineAntiAlias, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetRenderOrder(unsigned char order)", "void SetRenderOrder(uint8)", AS_METHODPR(Material, SetRenderOrder, (unsigned char), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetRenderOrder(unsigned char order)", "void set_renderOrder(uint8)", AS_METHODPR(Material, SetRenderOrder, (unsigned char), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetOcclusion(bool enable)", "void SetOcclusion(bool)", AS_METHODPR(Material, SetOcclusion, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetOcclusion(bool enable)", "void set_occlusion(bool)", AS_METHODPR(Material, SetOcclusion, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetScene(Scene* scene)", "void SetScene(Scene@+)", AS_METHODPR(Material, SetScene, (Scene*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SetScene(Scene* scene)", "void set_scene(Scene@+)", AS_METHODPR(Material, SetScene, (Scene*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::RemoveShaderParameter(const String& name)", "void RemoveShaderParameter(const String&in)", AS_METHODPR(Material, RemoveShaderParameter, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::ReleaseShaders()", "void ReleaseShaders()", AS_METHODPR(Material, ReleaseShaders, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<Material> Material::Clone(const String& cloneName=String::EMPTY) const", "Material@+ Clone(const String&in = String::EMPTY) const", AS_FUNCTION_OBJFIRST(Material_Clone_String), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::SortTechniques()", "void SortTechniques()", AS_METHODPR(Material, SortTechniques, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Material::MarkForAuxView(unsigned frameNumber)", "void MarkForAuxView(uint)", AS_METHODPR(Material, MarkForAuxView, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Material::GetNumTechniques() const", "uint GetNumTechniques() const", AS_METHODPR(Material, GetNumTechniques, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Material::GetNumTechniques() const", "uint get_numTechniques() const", AS_METHODPR(Material, GetNumTechniques, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const TechniqueEntry& Material::GetTechniqueEntry(unsigned index) const", "const TechniqueEntry& GetTechniqueEntry(uint) const", AS_METHODPR(Material, GetTechniqueEntry, (unsigned) const, const TechniqueEntry&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Technique* Material::GetTechnique(unsigned index) const", "Technique@+ GetTechnique(uint) const", AS_METHODPR(Material, GetTechnique, (unsigned) const, Technique*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Technique* Material::GetTechnique(unsigned index) const", "Technique@+ get_techniques(uint) const", AS_METHODPR(Material, GetTechnique, (unsigned) const, Technique*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Pass* Material::GetPass(unsigned index, const String& passName) const", "Pass@+ GetPass(uint, const String&in) const", AS_METHODPR(Material, GetPass, (unsigned, const String&) const, Pass*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Material::GetTexture(TextureUnit unit) const", "Texture@+ GetTexture(TextureUnit) const", AS_METHODPR(Material, GetTexture, (TextureUnit) const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Material::GetTexture(TextureUnit unit) const", "Texture@+ get_textures(TextureUnit) const", AS_METHODPR(Material, GetTexture, (TextureUnit) const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Material::GetVertexShaderDefines() const", "const String& GetVertexShaderDefines() const", AS_METHODPR(Material, GetVertexShaderDefines, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Material::GetVertexShaderDefines() const", "const String& get_vertexShaderDefines() const", AS_METHODPR(Material, GetVertexShaderDefines, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Material::GetPixelShaderDefines() const", "const String& GetPixelShaderDefines() const", AS_METHODPR(Material, GetPixelShaderDefines, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Material::GetPixelShaderDefines() const", "const String& get_pixelShaderDefines() const", AS_METHODPR(Material, GetPixelShaderDefines, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Variant& Material::GetShaderParameter(const String& name) const", "const Variant& GetShaderParameter(const String&in) const", AS_METHODPR(Material, GetShaderParameter, (const String&) const, const Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Variant& Material::GetShaderParameter(const String& name) const", "const Variant& get_shaderParameters(const String&in) const", AS_METHODPR(Material, GetShaderParameter, (const String&) const, const Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ValueAnimation* Material::GetShaderParameterAnimation(const String& name) const", "ValueAnimation@+ GetShaderParameterAnimation(const String&in) const", AS_METHODPR(Material, GetShaderParameterAnimation, (const String&) const, ValueAnimation*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("WrapMode Material::GetShaderParameterAnimationWrapMode(const String& name) const", "WrapMode GetShaderParameterAnimationWrapMode(const String&in) const", AS_METHODPR(Material, GetShaderParameterAnimationWrapMode, (const String&) const, WrapMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Material::GetShaderParameterAnimationSpeed(const String& name) const", "float GetShaderParameterAnimationSpeed(const String&in) const", AS_METHODPR(Material, GetShaderParameterAnimationSpeed, (const String&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CullMode Material::GetCullMode() const", "CullMode GetCullMode() const", AS_METHODPR(Material, GetCullMode, () const, CullMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CullMode Material::GetCullMode() const", "CullMode get_cullMode() const", AS_METHODPR(Material, GetCullMode, () const, CullMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CullMode Material::GetShadowCullMode() const", "CullMode GetShadowCullMode() const", AS_METHODPR(Material, GetShadowCullMode, () const, CullMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CullMode Material::GetShadowCullMode() const", "CullMode get_shadowCullMode() const", AS_METHODPR(Material, GetShadowCullMode, () const, CullMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FillMode Material::GetFillMode() const", "FillMode GetFillMode() const", AS_METHODPR(Material, GetFillMode, () const, FillMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FillMode Material::GetFillMode() const", "FillMode get_fillMode() const", AS_METHODPR(Material, GetFillMode, () const, FillMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BiasParameters& Material::GetDepthBias() const", "const BiasParameters& GetDepthBias() const", AS_METHODPR(Material, GetDepthBias, () const, const BiasParameters&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BiasParameters& Material::GetDepthBias() const", "const BiasParameters& get_depthBias() const", AS_METHODPR(Material, GetDepthBias, () const, const BiasParameters&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::GetAlphaToCoverage() const", "bool GetAlphaToCoverage() const", AS_METHODPR(Material, GetAlphaToCoverage, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::GetAlphaToCoverage() const", "bool get_alphaToCoverage() const", AS_METHODPR(Material, GetAlphaToCoverage, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::GetLineAntiAlias() const", "bool GetLineAntiAlias() const", AS_METHODPR(Material, GetLineAntiAlias, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::GetLineAntiAlias() const", "bool get_lineAntiAlias() const", AS_METHODPR(Material, GetLineAntiAlias, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned char Material::GetRenderOrder() const", "uint8 GetRenderOrder() const", AS_METHODPR(Material, GetRenderOrder, () const, unsigned char), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned char Material::GetRenderOrder() const", "uint8 get_renderOrder() const", AS_METHODPR(Material, GetRenderOrder, () const, unsigned char), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Material::GetAuxViewFrameNumber() const", "uint GetAuxViewFrameNumber() const", AS_METHODPR(Material, GetAuxViewFrameNumber, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::GetOcclusion() const", "bool GetOcclusion() const", AS_METHODPR(Material, GetOcclusion, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::GetOcclusion() const", "bool get_occlusion() const", AS_METHODPR(Material, GetOcclusion, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Material::GetSpecular() const", "bool GetSpecular() const", AS_METHODPR(Material, GetSpecular, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Scene* Material::GetScene() const", "Scene@+ GetScene() const", AS_METHODPR(Material, GetScene, () const, Scene*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Scene* Material::GetScene() const", "Scene@+ get_scene() const", AS_METHODPR(Material, GetScene, () const, Scene*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Material::GetShaderParameterHash() const", "uint GetShaderParameterHash() const", AS_METHODPR(Material, GetShaderParameterHash, () const, unsigned), AS_CALL_THISCALL));

    // static void Material::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static String Material::GetTextureUnitName(TextureUnit unit)", "String GetTextureUnitName(TextureUnit)", AS_FUNCTIONPR(Material::GetTextureUnitName, (TextureUnit), String), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static Variant Material::ParseShaderParameterValue(const String& value)", "Variant ParseShaderParameterValue(const String&in)", AS_FUNCTIONPR(Material::ParseShaderParameterValue, (const String&), Variant), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Material
        REGISTER_MEMBERS_MANUAL_PART_Material();
    #endif
}

// struct MaterialShaderParameter | File: ../Graphics/Material.h
void CollectMembers_MaterialShaderParameter(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("String MaterialShaderParameter::name_", "String name", offsetof(MaterialShaderParameter, name_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Variant MaterialShaderParameter::value_", "Variant value", offsetof(MaterialShaderParameter, value_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_MaterialShaderParameter
        REGISTER_MEMBERS_MANUAL_PART_MaterialShaderParameter();
    #endif
}

// bool Model::SetVertexBuffers(const Vector<SharedPtr<VertexBuffer>>& buffers, const PODVector<unsigned>& morphRangeStarts, const PODVector<unsigned>& morphRangeCounts)
// bool Model::SetVertexBuffers(const Vector<SharedPtr<VertexBuffer>>& buffers, const PODVector<unsigned>& morphRangeStarts, const PODVector<unsigned>& morphRangeCounts) | File: ../Graphics/Model.h
static bool Model_SetVertexBuffers_VectorSharedPtrVertexBuffer_PODVectorunsigned_PODVectorunsigned(Model* ptr, CScriptArray* buffers_conv, CScriptArray* morphRangeStarts_conv, CScriptArray* morphRangeCounts_conv)
{
    Vector<SharedPtr<VertexBuffer>> buffers = HandleArrayToVector<VertexBuffer>(buffers_conv);
    PODVector<unsigned> morphRangeStarts = ArrayToPODVector<unsigned>(morphRangeStarts_conv);
    PODVector<unsigned> morphRangeCounts = ArrayToPODVector<unsigned>(morphRangeCounts_conv);
    bool result = ptr->SetVertexBuffers(buffers, morphRangeStarts, morphRangeCounts);
    return result;
}


// bool Model::SetIndexBuffers(const Vector<SharedPtr<IndexBuffer>>& buffers)
// bool Model::SetIndexBuffers(const Vector<SharedPtr<IndexBuffer>>& buffers) | File: ../Graphics/Model.h
static bool Model_SetIndexBuffers_VectorSharedPtrIndexBuffer(Model* ptr, CScriptArray* buffers_conv)
{
    Vector<SharedPtr<IndexBuffer>> buffers = HandleArrayToVector<IndexBuffer>(buffers_conv);
    bool result = ptr->SetIndexBuffers(buffers);
    return result;
}


// SharedPtr<Model> Model::Clone(const String& cloneName=String::EMPTY) const
// SharedPtr<Model> Model::Clone(const String& cloneName=String::EMPTY) const | File: ../Graphics/Model.h
static Model* Model_Clone_String(Model* ptr, const String& cloneName)
{
    SharedPtr<Model> result = ptr->Clone(cloneName);
    return result.Detach();
}


// const Vector<SharedPtr<VertexBuffer>>& Model::GetVertexBuffers() const
// const Vector<SharedPtr<VertexBuffer>>& Model::GetVertexBuffers() const | File: ../Graphics/Model.h
static CScriptArray* Model_GetVertexBuffers_void(Model* ptr)
{
    const Vector<SharedPtr<VertexBuffer>>& result = ptr->GetVertexBuffers();
    return VectorToHandleArray(result, "Array<VertexBuffer@>");
}


// const Vector<SharedPtr<IndexBuffer>>& Model::GetIndexBuffers() const
// const Vector<SharedPtr<IndexBuffer>>& Model::GetIndexBuffers() const | File: ../Graphics/Model.h
static CScriptArray* Model_GetIndexBuffers_void(Model* ptr)
{
    const Vector<SharedPtr<IndexBuffer>>& result = ptr->GetIndexBuffers();
    return VectorToHandleArray(result, "Array<IndexBuffer@>");
}


// const PODVector<Vector3>& Model::GetGeometryCenters() const
// const PODVector<Vector3>& Model::GetGeometryCenters() const | File: ../Graphics/Model.h
static CScriptArray* Model_GetGeometryCenters_void(Model* ptr)
{
    const PODVector<Vector3>& result = ptr->GetGeometryCenters();
    return VectorToArray(result, "Array<Vector3>");
}


// class Model | File: ../Graphics/Model.h
void CollectMembers_Model(MemberCollection& members)
{
    CollectMembers_ResourceWithMetadata(members);

    Remove(members.methods_, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::EndLoad()");
    Remove(members.methods_, "virtual bool Resource::Save(Serializer& dest) const");

    // const Vector<Vector<SharedPtr<Geometry>>>& Model::GetGeometries() const
    // Error: type "const Vector<Vector<SharedPtr<Geometry>>>&" can not automatically bind
    // const Vector<PODVector<unsigned>>& Model::GetGeometryBoneMappings() const
    // Error: type "const Vector<PODVector<unsigned>>&" can not automatically bind
    // const ModelMorph* Model::GetMorph(StringHash nameHash) const
    // Error: type "const ModelMorph*" can not automatically bind
    // const ModelMorph* Model::GetMorph(const String& name) const
    // Error: type "const ModelMorph*" can not automatically bind
    // const ModelMorph* Model::GetMorph(unsigned index) const
    // Error: type "const ModelMorph*" can not automatically bind
    // const Vector<ModelMorph>& Model::GetMorphs() const
    // Error: type "const Vector<ModelMorph>&" can not automatically bind
    // void Model::SetGeometryBoneMappings(const Vector<PODVector<unsigned>>& geometryBoneMappings)
    // Error: type "const Vector<PODVector<unsigned>>&" can not automatically bind
    // void Model::SetMorphs(const Vector<ModelMorph>& morphs)
    // Error: type "const Vector<ModelMorph>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool Model::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Model, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Model::EndLoad() override", "bool EndLoad()", AS_METHODPR(Model, EndLoad, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Model::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(Model, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Model::SetBoundingBox(const BoundingBox& box)", "void SetBoundingBox(const BoundingBox&in)", AS_METHODPR(Model, SetBoundingBox, (const BoundingBox&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Model::SetBoundingBox(const BoundingBox& box)", "void set_boundingBox(const BoundingBox&in)", AS_METHODPR(Model, SetBoundingBox, (const BoundingBox&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Model::SetVertexBuffers(const Vector<SharedPtr<VertexBuffer>>& buffers, const PODVector<unsigned>& morphRangeStarts, const PODVector<unsigned>& morphRangeCounts)", "bool SetVertexBuffers(Array<VertexBuffer@>@+, Array<uint>@+, Array<uint>@+)", AS_FUNCTION_OBJFIRST(Model_SetVertexBuffers_VectorSharedPtrVertexBuffer_PODVectorunsigned_PODVectorunsigned), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("bool Model::SetIndexBuffers(const Vector<SharedPtr<IndexBuffer>>& buffers)", "bool SetIndexBuffers(Array<IndexBuffer@>@+)", AS_FUNCTION_OBJFIRST(Model_SetIndexBuffers_VectorSharedPtrIndexBuffer), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("void Model::SetNumGeometries(unsigned num)", "void SetNumGeometries(uint)", AS_METHODPR(Model, SetNumGeometries, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Model::SetNumGeometries(unsigned num)", "void set_numGeometries(uint)", AS_METHODPR(Model, SetNumGeometries, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Model::SetNumGeometryLodLevels(unsigned index, unsigned num)", "bool SetNumGeometryLodLevels(uint, uint)", AS_METHODPR(Model, SetNumGeometryLodLevels, (unsigned, unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Model::SetNumGeometryLodLevels(unsigned index, unsigned num)", "bool set_numGeometryLodLevels(uint, uint)", AS_METHODPR(Model, SetNumGeometryLodLevels, (unsigned, unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Model::SetGeometry(unsigned index, unsigned lodLevel, Geometry* geometry)", "bool SetGeometry(uint, uint, Geometry@+)", AS_METHODPR(Model, SetGeometry, (unsigned, unsigned, Geometry*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Model::SetGeometryCenter(unsigned index, const Vector3& center)", "bool SetGeometryCenter(uint, const Vector3&in)", AS_METHODPR(Model, SetGeometryCenter, (unsigned, const Vector3&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Model::SetGeometryCenter(unsigned index, const Vector3& center)", "bool set_geometryCenters(uint, const Vector3&in)", AS_METHODPR(Model, SetGeometryCenter, (unsigned, const Vector3&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Model::SetSkeleton(const Skeleton& skeleton)", "void SetSkeleton(const Skeleton&in)", AS_METHODPR(Model, SetSkeleton, (const Skeleton&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<Model> Model::Clone(const String& cloneName=String::EMPTY) const", "Model@+ Clone(const String&in = String::EMPTY) const", AS_FUNCTION_OBJFIRST(Model_Clone_String), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("const BoundingBox& Model::GetBoundingBox() const", "const BoundingBox& GetBoundingBox() const", AS_METHODPR(Model, GetBoundingBox, () const, const BoundingBox&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BoundingBox& Model::GetBoundingBox() const", "const BoundingBox& get_boundingBox() const", AS_METHODPR(Model, GetBoundingBox, () const, const BoundingBox&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Skeleton& Model::GetSkeleton()", "Skeleton& GetSkeleton()", AS_METHODPR(Model, GetSkeleton, (), Skeleton&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Skeleton& Model::GetSkeleton()", "Skeleton& get_skeleton()", AS_METHODPR(Model, GetSkeleton, (), Skeleton&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<VertexBuffer>>& Model::GetVertexBuffers() const", "Array<VertexBuffer@>@ GetVertexBuffers() const", AS_FUNCTION_OBJFIRST(Model_GetVertexBuffers_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<IndexBuffer>>& Model::GetIndexBuffers() const", "Array<IndexBuffer@>@ GetIndexBuffers() const", AS_FUNCTION_OBJFIRST(Model_GetIndexBuffers_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Model::GetNumGeometries() const", "uint GetNumGeometries() const", AS_METHODPR(Model, GetNumGeometries, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Model::GetNumGeometries() const", "uint get_numGeometries() const", AS_METHODPR(Model, GetNumGeometries, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Model::GetNumGeometryLodLevels(unsigned index) const", "uint GetNumGeometryLodLevels(uint) const", AS_METHODPR(Model, GetNumGeometryLodLevels, (unsigned) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Model::GetNumGeometryLodLevels(unsigned index) const", "uint get_numGeometryLodLevels(uint) const", AS_METHODPR(Model, GetNumGeometryLodLevels, (unsigned) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const PODVector<Vector3>& Model::GetGeometryCenters() const", "Array<Vector3>@ GetGeometryCenters() const", AS_FUNCTION_OBJFIRST(Model_GetGeometryCenters_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("Geometry* Model::GetGeometry(unsigned index, unsigned lodLevel) const", "Geometry@+ GetGeometry(uint, uint) const", AS_METHODPR(Model, GetGeometry, (unsigned, unsigned) const, Geometry*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Model::GetGeometryCenter(unsigned index) const", "const Vector3& GetGeometryCenter(uint) const", AS_METHODPR(Model, GetGeometryCenter, (unsigned) const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Model::GetGeometryCenter(unsigned index) const", "const Vector3& get_geometryCenters(uint) const", AS_METHODPR(Model, GetGeometryCenter, (unsigned) const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Model::GetNumMorphs() const", "uint GetNumMorphs() const", AS_METHODPR(Model, GetNumMorphs, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Model::GetNumMorphs() const", "uint get_numMorphs() const", AS_METHODPR(Model, GetNumMorphs, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Model::GetMorphRangeStart(unsigned bufferIndex) const", "uint GetMorphRangeStart(uint) const", AS_METHODPR(Model, GetMorphRangeStart, (unsigned) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Model::GetMorphRangeCount(unsigned bufferIndex) const", "uint GetMorphRangeCount(uint) const", AS_METHODPR(Model, GetMorphRangeCount, (unsigned) const, unsigned), AS_CALL_THISCALL));

    // static void Model::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Model
        REGISTER_MEMBERS_MANUAL_PART_Model();
    #endif
}

// struct ModelMorph | File: ../Graphics/Model.h
void CollectMembers_ModelMorph(MemberCollection& members)
{
    // HashMap<unsigned, VertexBufferMorph> ModelMorph::buffers_
    // Error: type "HashMap<unsigned, VertexBufferMorph>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("String ModelMorph::name_", "String name", offsetof(ModelMorph, name_)));
    members.fields_.Push(RegisterObjectPropertyArgs("StringHash ModelMorph::nameHash_", "StringHash nameHash", offsetof(ModelMorph, nameHash_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float ModelMorph::weight_", "float weight", offsetof(ModelMorph, weight_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ModelMorph
        REGISTER_MEMBERS_MANUAL_PART_ModelMorph();
    #endif
}

// struct OcclusionBatch | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_OcclusionBatch(MemberCollection& members)
{
    // const void* OcclusionBatch::vertexData_
    // Not registered because pointer
    // const void* OcclusionBatch::indexData_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("Matrix3x4 OcclusionBatch::model_", "Matrix3x4 model", offsetof(OcclusionBatch, model_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned OcclusionBatch::vertexSize_", "uint vertexSize", offsetof(OcclusionBatch, vertexSize_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned OcclusionBatch::indexSize_", "uint indexSize", offsetof(OcclusionBatch, indexSize_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned OcclusionBatch::drawStart_", "uint drawStart", offsetof(OcclusionBatch, drawStart_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned OcclusionBatch::drawCount_", "uint drawCount", offsetof(OcclusionBatch, drawCount_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_OcclusionBatch
        REGISTER_MEMBERS_MANUAL_PART_OcclusionBatch();
    #endif
}

// class OcclusionBuffer | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_OcclusionBuffer(MemberCollection& members)
{
    CollectMembers_Object(members);

    // bool OcclusionBuffer::AddTriangles(const Matrix3x4& model, const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount)
    // Error: type "const void*" can not automatically bind
    // bool OcclusionBuffer::AddTriangles(const Matrix3x4& model, const void* vertexData, unsigned vertexSize, unsigned vertexStart, unsigned vertexCount)
    // Error: type "const void*" can not automatically bind
    // int* OcclusionBuffer::GetBuffer() const
    // Error: type "int*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool OcclusionBuffer::SetSize(int width, int height, bool threaded)", "bool SetSize(int, int, bool)", AS_METHODPR(OcclusionBuffer, SetSize, (int, int, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void OcclusionBuffer::SetView(Camera* camera)", "void SetView(Camera@+)", AS_METHODPR(OcclusionBuffer, SetView, (Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void OcclusionBuffer::SetMaxTriangles(unsigned triangles)", "void SetMaxTriangles(uint)", AS_METHODPR(OcclusionBuffer, SetMaxTriangles, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void OcclusionBuffer::SetCullMode(CullMode mode)", "void SetCullMode(CullMode)", AS_METHODPR(OcclusionBuffer, SetCullMode, (CullMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void OcclusionBuffer::Reset()", "void Reset()", AS_METHODPR(OcclusionBuffer, Reset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void OcclusionBuffer::Clear()", "void Clear()", AS_METHODPR(OcclusionBuffer, Clear, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void OcclusionBuffer::DrawTriangles()", "void DrawTriangles()", AS_METHODPR(OcclusionBuffer, DrawTriangles, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void OcclusionBuffer::BuildDepthHierarchy()", "void BuildDepthHierarchy()", AS_METHODPR(OcclusionBuffer, BuildDepthHierarchy, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void OcclusionBuffer::ResetUseTimer()", "void ResetUseTimer()", AS_METHODPR(OcclusionBuffer, ResetUseTimer, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix3x4& OcclusionBuffer::GetView() const", "const Matrix3x4& GetView() const", AS_METHODPR(OcclusionBuffer, GetView, () const, const Matrix3x4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix4& OcclusionBuffer::GetProjection() const", "const Matrix4& GetProjection() const", AS_METHODPR(OcclusionBuffer, GetProjection, () const, const Matrix4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int OcclusionBuffer::GetWidth() const", "int GetWidth() const", AS_METHODPR(OcclusionBuffer, GetWidth, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int OcclusionBuffer::GetHeight() const", "int GetHeight() const", AS_METHODPR(OcclusionBuffer, GetHeight, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned OcclusionBuffer::GetNumTriangles() const", "uint GetNumTriangles() const", AS_METHODPR(OcclusionBuffer, GetNumTriangles, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned OcclusionBuffer::GetMaxTriangles() const", "uint GetMaxTriangles() const", AS_METHODPR(OcclusionBuffer, GetMaxTriangles, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CullMode OcclusionBuffer::GetCullMode() const", "CullMode GetCullMode() const", AS_METHODPR(OcclusionBuffer, GetCullMode, () const, CullMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool OcclusionBuffer::IsThreaded() const", "bool IsThreaded() const", AS_METHODPR(OcclusionBuffer, IsThreaded, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool OcclusionBuffer::IsVisible(const BoundingBox& worldSpaceBox) const", "bool IsVisible(const BoundingBox&in) const", AS_METHODPR(OcclusionBuffer, IsVisible, (const BoundingBox&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned OcclusionBuffer::GetUseTimer()", "uint GetUseTimer()", AS_METHODPR(OcclusionBuffer, GetUseTimer, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void OcclusionBuffer::DrawBatch(const OcclusionBatch& batch, unsigned threadIndex)", "void DrawBatch(const OcclusionBatch&in, uint)", AS_METHODPR(OcclusionBuffer, DrawBatch, (const OcclusionBatch&, unsigned), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_OcclusionBuffer
        REGISTER_MEMBERS_MANUAL_PART_OcclusionBuffer();
    #endif
}

// struct OcclusionBufferData | File: ../Graphics/OcclusionBuffer.h
void CollectMembers_OcclusionBufferData(MemberCollection& members)
{
    // SharedArrayPtr<int> OcclusionBufferData::dataWithSafety_
    // Error: type "SharedArrayPtr<int>" can not automatically bind
    // int* OcclusionBufferData::data_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("bool OcclusionBufferData::used_", "bool used", offsetof(OcclusionBufferData, used_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_OcclusionBufferData
        REGISTER_MEMBERS_MANUAL_PART_OcclusionBufferData();
    #endif
}

// class Octant | File: ../Graphics/Octree.h
void CollectMembers_Octant(MemberCollection& members)
{
    // Octant* Octant::GetOrCreateChild(unsigned index)
    // Error: type "Octant" can not automatically bind bacause have @nobind mark
    // Octant* Octant::GetParent() const
    // Error: type "Octant" can not automatically bind bacause have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("void Octant::DeleteChild(unsigned index)", "void DeleteChild(uint)", AS_METHODPR(Octant, DeleteChild, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octant::InsertDrawable(Drawable* drawable)", "void InsertDrawable(Drawable@+)", AS_METHODPR(Octant, InsertDrawable, (Drawable*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Octant::CheckDrawableFit(const BoundingBox& box) const", "bool CheckDrawableFit(const BoundingBox&in) const", AS_METHODPR(Octant, CheckDrawableFit, (const BoundingBox&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octant::AddDrawable(Drawable* drawable)", "void AddDrawable(Drawable@+)", AS_METHODPR(Octant, AddDrawable, (Drawable*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octant::RemoveDrawable(Drawable* drawable, bool resetOctant=true)", "void RemoveDrawable(Drawable@+, bool = true)", AS_METHODPR(Octant, RemoveDrawable, (Drawable*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BoundingBox& Octant::GetWorldBoundingBox() const", "const BoundingBox& GetWorldBoundingBox() const", AS_METHODPR(Octant, GetWorldBoundingBox, () const, const BoundingBox&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BoundingBox& Octant::GetWorldBoundingBox() const", "const BoundingBox& get_worldBoundingBox() const", AS_METHODPR(Octant, GetWorldBoundingBox, () const, const BoundingBox&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const BoundingBox& Octant::GetCullingBox() const", "const BoundingBox& GetCullingBox() const", AS_METHODPR(Octant, GetCullingBox, () const, const BoundingBox&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Octant::GetLevel() const", "uint GetLevel() const", AS_METHODPR(Octant, GetLevel, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Octree* Octant::GetRoot() const", "Octree@+ GetRoot() const", AS_METHODPR(Octant, GetRoot, () const, Octree*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Octant::GetNumDrawables() const", "uint GetNumDrawables() const", AS_METHODPR(Octant, GetNumDrawables, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Octant::IsEmpty()", "bool IsEmpty()", AS_METHODPR(Octant, IsEmpty, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octant::ResetRoot()", "void ResetRoot()", AS_METHODPR(Octant, ResetRoot, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octant::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(Octant, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Octant
        REGISTER_MEMBERS_MANUAL_PART_Octant();
    #endif
}

// class Octree | File: ../Graphics/Octree.h
void CollectMembers_Octree(MemberCollection& members)
{
    CollectMembers_Component(members);
    CollectMembers_Octant(members);

    Remove(members.methods_, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(members.methods_, "void Octant::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // void Octree::GetDrawables(OctreeQuery& query) const
    // Not registered because have @nobind mark
    // void Octree::Raycast(RayOctreeQuery& query) const
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
    // void Octree::RaycastSingle(RayOctreeQuery& query) const
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("void Octree::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(Octree, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::SetSize(const BoundingBox& box, unsigned numLevels)", "void SetSize(const BoundingBox&in, uint)", AS_METHODPR(Octree, SetSize, (const BoundingBox&, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::Update(const FrameInfo& frame)", "void Update(const FrameInfo&in)", AS_METHODPR(Octree, Update, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::AddManualDrawable(Drawable* drawable)", "void AddManualDrawable(Drawable@+)", AS_METHODPR(Octree, AddManualDrawable, (Drawable*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::RemoveManualDrawable(Drawable* drawable)", "void RemoveManualDrawable(Drawable@+)", AS_METHODPR(Octree, RemoveManualDrawable, (Drawable*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Octree::GetNumLevels() const", "uint GetNumLevels() const", AS_METHODPR(Octree, GetNumLevels, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Octree::GetNumLevels() const", "uint get_numLevels() const", AS_METHODPR(Octree, GetNumLevels, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::QueueUpdate(Drawable* drawable)", "void QueueUpdate(Drawable@+)", AS_METHODPR(Octree, QueueUpdate, (Drawable*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::CancelUpdate(Drawable* drawable)", "void CancelUpdate(Drawable@+)", AS_METHODPR(Octree, CancelUpdate, (Drawable*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::DrawDebugGeometry(bool depthTest)", "void DrawDebugGeometry(bool)", AS_METHODPR(Octree, DrawDebugGeometry, (bool), void), AS_CALL_THISCALL));

    // static void Octree::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Octree
        REGISTER_MEMBERS_MANUAL_PART_Octree();
    #endif
}

// class OctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_OctreeQuery(MemberCollection& members)
{
    // virtual void OctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside)=0
    // Error: type "Drawable**" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("virtual Intersection OctreeQuery::TestOctant(const BoundingBox& box, bool inside)=0", "Intersection TestOctant(const BoundingBox&in, bool)", AS_METHODPR(OctreeQuery, TestOctant, (const BoundingBox&, bool), Intersection), AS_CALL_THISCALL));

    // PODVector<Drawable*>& OctreeQuery::result_
    // Error: type "PODVector<Drawable*>&" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned char OctreeQuery::drawableFlags_", "uint8 drawableFlags", offsetof(OctreeQuery, drawableFlags_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned OctreeQuery::viewMask_", "uint viewMask", offsetof(OctreeQuery, viewMask_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_OctreeQuery
        REGISTER_MEMBERS_MANUAL_PART_OctreeQuery();
    #endif
}

// struct OctreeQueryResult | File: ../Graphics/OctreeQuery.h
void CollectMembers_OctreeQueryResult(MemberCollection& members)
{
    // bool OctreeQueryResult::operator!=(const OctreeQueryResult& rhs) const
    // Only operator== is needed

    // Drawable* OctreeQueryResult::drawable_
    // Not registered because pointer
    // Node* OctreeQueryResult::node_
    // Not registered because pointer

    #ifdef REGISTER_MEMBERS_MANUAL_PART_OctreeQueryResult
        REGISTER_MEMBERS_MANUAL_PART_OctreeQueryResult();
    #endif
}

// struct Particle | File: ../Graphics/ParticleEmitter.h
void CollectMembers_Particle(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 Particle::velocity_", "Vector3 velocity", offsetof(Particle, velocity_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector2 Particle::size_", "Vector2 size", offsetof(Particle, size_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float Particle::timer_", "float timer", offsetof(Particle, timer_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float Particle::timeToLive_", "float timeToLive", offsetof(Particle, timeToLive_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float Particle::scale_", "float scale", offsetof(Particle, scale_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float Particle::rotationSpeed_", "float rotationSpeed", offsetof(Particle, rotationSpeed_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned Particle::colorIndex_", "uint colorIndex", offsetof(Particle, colorIndex_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned Particle::texIndex_", "uint texIndex", offsetof(Particle, texIndex_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Particle
        REGISTER_MEMBERS_MANUAL_PART_Particle();
    #endif
}

// SharedPtr<ParticleEffect> ParticleEffect::Clone(const String& cloneName=String::EMPTY) const
// SharedPtr<ParticleEffect> ParticleEffect::Clone(const String& cloneName=String::EMPTY) const | File: ../Graphics/ParticleEffect.h
static ParticleEffect* ParticleEffect_Clone_String(ParticleEffect* ptr, const String& cloneName)
{
    SharedPtr<ParticleEffect> result = ptr->Clone(cloneName);
    return result.Detach();
}


// class ParticleEffect | File: ../Graphics/ParticleEffect.h
void CollectMembers_ParticleEffect(MemberCollection& members)
{
    CollectMembers_Resource(members);

    Remove(members.methods_, "bool Resource::Load(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::EndLoad()");
    Remove(members.methods_, "virtual bool Resource::Save(Serializer& dest) const");

    // const Vector<ColorFrame>& ParticleEffect::GetColorFrames() const
    // Error: type "const Vector<ColorFrame>&" can not automatically bind
    // const Vector<TextureFrame>& ParticleEffect::GetTextureFrames() const
    // Error: type "const Vector<TextureFrame>&" can not automatically bind
    // void ParticleEffect::SetColorFrames(const Vector<ColorFrame>& colorFrames)
    // Error: type "const Vector<ColorFrame>&" can not automatically bind
    // void ParticleEffect::SetTextureFrames(const Vector<TextureFrame>& textureFrames)
    // Error: type "const Vector<TextureFrame>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(ParticleEffect, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::EndLoad() override", "bool EndLoad()", AS_METHODPR(ParticleEffect, EndLoad, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(ParticleEffect, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::Save(XMLElement& dest) const", "bool Save(XMLElement&) const", AS_METHODPR(ParticleEffect, Save, (XMLElement&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::Load(const XMLElement& source)", "bool Load(const XMLElement&in)", AS_METHODPR(ParticleEffect, Load, (const XMLElement&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaterial(Material* material)", "void SetMaterial(Material@+)", AS_METHODPR(ParticleEffect, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaterial(Material* material)", "void set_material(Material@+)", AS_METHODPR(ParticleEffect, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetNumParticles(unsigned num)", "void SetNumParticles(uint)", AS_METHODPR(ParticleEffect, SetNumParticles, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetNumParticles(unsigned num)", "void set_numParticles(uint)", AS_METHODPR(ParticleEffect, SetNumParticles, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetUpdateInvisible(bool enable)", "void SetUpdateInvisible(bool)", AS_METHODPR(ParticleEffect, SetUpdateInvisible, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetUpdateInvisible(bool enable)", "void set_updateInvisible(bool)", AS_METHODPR(ParticleEffect, SetUpdateInvisible, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetRelative(bool enable)", "void SetRelative(bool)", AS_METHODPR(ParticleEffect, SetRelative, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetRelative(bool enable)", "void set_relative(bool)", AS_METHODPR(ParticleEffect, SetRelative, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetScaled(bool enable)", "void SetScaled(bool)", AS_METHODPR(ParticleEffect, SetScaled, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetScaled(bool enable)", "void set_scaled(bool)", AS_METHODPR(ParticleEffect, SetScaled, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetSorted(bool enable)", "void SetSorted(bool)", AS_METHODPR(ParticleEffect, SetSorted, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetSorted(bool enable)", "void set_sorted(bool)", AS_METHODPR(ParticleEffect, SetSorted, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetFixedScreenSize(bool enable)", "void SetFixedScreenSize(bool)", AS_METHODPR(ParticleEffect, SetFixedScreenSize, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetFixedScreenSize(bool enable)", "void set_fixedScreenSize(bool)", AS_METHODPR(ParticleEffect, SetFixedScreenSize, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetAnimationLodBias(float lodBias)", "void SetAnimationLodBias(float)", AS_METHODPR(ParticleEffect, SetAnimationLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetAnimationLodBias(float lodBias)", "void set_animationLodBias(float)", AS_METHODPR(ParticleEffect, SetAnimationLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetEmitterType(EmitterType type)", "void SetEmitterType(EmitterType)", AS_METHODPR(ParticleEffect, SetEmitterType, (EmitterType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetEmitterType(EmitterType type)", "void set_emitterType(EmitterType)", AS_METHODPR(ParticleEffect, SetEmitterType, (EmitterType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetEmitterSize(const Vector3& size)", "void SetEmitterSize(const Vector3&in)", AS_METHODPR(ParticleEffect, SetEmitterSize, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetEmitterSize(const Vector3& size)", "void set_emitterSize(const Vector3&in)", AS_METHODPR(ParticleEffect, SetEmitterSize, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinDirection(const Vector3& direction)", "void SetMinDirection(const Vector3&in)", AS_METHODPR(ParticleEffect, SetMinDirection, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinDirection(const Vector3& direction)", "void set_minDirection(const Vector3&in)", AS_METHODPR(ParticleEffect, SetMinDirection, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxDirection(const Vector3& direction)", "void SetMaxDirection(const Vector3&in)", AS_METHODPR(ParticleEffect, SetMaxDirection, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxDirection(const Vector3& direction)", "void set_maxDirection(const Vector3&in)", AS_METHODPR(ParticleEffect, SetMaxDirection, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetConstantForce(const Vector3& force)", "void SetConstantForce(const Vector3&in)", AS_METHODPR(ParticleEffect, SetConstantForce, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetConstantForce(const Vector3& force)", "void set_constantForce(const Vector3&in)", AS_METHODPR(ParticleEffect, SetConstantForce, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetDampingForce(float force)", "void SetDampingForce(float)", AS_METHODPR(ParticleEffect, SetDampingForce, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetDampingForce(float force)", "void set_dampingForce(float)", AS_METHODPR(ParticleEffect, SetDampingForce, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetActiveTime(float time)", "void SetActiveTime(float)", AS_METHODPR(ParticleEffect, SetActiveTime, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetActiveTime(float time)", "void set_activeTime(float)", AS_METHODPR(ParticleEffect, SetActiveTime, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetInactiveTime(float time)", "void SetInactiveTime(float)", AS_METHODPR(ParticleEffect, SetInactiveTime, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetInactiveTime(float time)", "void set_inactiveTime(float)", AS_METHODPR(ParticleEffect, SetInactiveTime, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinEmissionRate(float rate)", "void SetMinEmissionRate(float)", AS_METHODPR(ParticleEffect, SetMinEmissionRate, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinEmissionRate(float rate)", "void set_minEmissionRate(float)", AS_METHODPR(ParticleEffect, SetMinEmissionRate, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxEmissionRate(float rate)", "void SetMaxEmissionRate(float)", AS_METHODPR(ParticleEffect, SetMaxEmissionRate, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxEmissionRate(float rate)", "void set_maxEmissionRate(float)", AS_METHODPR(ParticleEffect, SetMaxEmissionRate, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinParticleSize(const Vector2& size)", "void SetMinParticleSize(const Vector2&in)", AS_METHODPR(ParticleEffect, SetMinParticleSize, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinParticleSize(const Vector2& size)", "void set_minParticleSize(const Vector2&in)", AS_METHODPR(ParticleEffect, SetMinParticleSize, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxParticleSize(const Vector2& size)", "void SetMaxParticleSize(const Vector2&in)", AS_METHODPR(ParticleEffect, SetMaxParticleSize, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxParticleSize(const Vector2& size)", "void set_maxParticleSize(const Vector2&in)", AS_METHODPR(ParticleEffect, SetMaxParticleSize, (const Vector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinTimeToLive(float time)", "void SetMinTimeToLive(float)", AS_METHODPR(ParticleEffect, SetMinTimeToLive, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinTimeToLive(float time)", "void set_minTimeToLive(float)", AS_METHODPR(ParticleEffect, SetMinTimeToLive, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxTimeToLive(float time)", "void SetMaxTimeToLive(float)", AS_METHODPR(ParticleEffect, SetMaxTimeToLive, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxTimeToLive(float time)", "void set_maxTimeToLive(float)", AS_METHODPR(ParticleEffect, SetMaxTimeToLive, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinVelocity(float velocity)", "void SetMinVelocity(float)", AS_METHODPR(ParticleEffect, SetMinVelocity, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinVelocity(float velocity)", "void set_minVelocity(float)", AS_METHODPR(ParticleEffect, SetMinVelocity, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxVelocity(float velocity)", "void SetMaxVelocity(float)", AS_METHODPR(ParticleEffect, SetMaxVelocity, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxVelocity(float velocity)", "void set_maxVelocity(float)", AS_METHODPR(ParticleEffect, SetMaxVelocity, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinRotation(float rotation)", "void SetMinRotation(float)", AS_METHODPR(ParticleEffect, SetMinRotation, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinRotation(float rotation)", "void set_minRotation(float)", AS_METHODPR(ParticleEffect, SetMinRotation, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxRotation(float rotation)", "void SetMaxRotation(float)", AS_METHODPR(ParticleEffect, SetMaxRotation, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxRotation(float rotation)", "void set_maxRotation(float)", AS_METHODPR(ParticleEffect, SetMaxRotation, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinRotationSpeed(float speed)", "void SetMinRotationSpeed(float)", AS_METHODPR(ParticleEffect, SetMinRotationSpeed, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMinRotationSpeed(float speed)", "void set_minRotationSpeed(float)", AS_METHODPR(ParticleEffect, SetMinRotationSpeed, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxRotationSpeed(float speed)", "void SetMaxRotationSpeed(float)", AS_METHODPR(ParticleEffect, SetMaxRotationSpeed, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetMaxRotationSpeed(float speed)", "void set_maxRotationSpeed(float)", AS_METHODPR(ParticleEffect, SetMaxRotationSpeed, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetSizeAdd(float sizeAdd)", "void SetSizeAdd(float)", AS_METHODPR(ParticleEffect, SetSizeAdd, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetSizeAdd(float sizeAdd)", "void set_sizeAdd(float)", AS_METHODPR(ParticleEffect, SetSizeAdd, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetSizeMul(float sizeMul)", "void SetSizeMul(float)", AS_METHODPR(ParticleEffect, SetSizeMul, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetSizeMul(float sizeMul)", "void set_sizeMul(float)", AS_METHODPR(ParticleEffect, SetSizeMul, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetFaceCameraMode(FaceCameraMode mode)", "void SetFaceCameraMode(FaceCameraMode)", AS_METHODPR(ParticleEffect, SetFaceCameraMode, (FaceCameraMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetFaceCameraMode(FaceCameraMode mode)", "void set_faceCameraMode(FaceCameraMode)", AS_METHODPR(ParticleEffect, SetFaceCameraMode, (FaceCameraMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::AddColorTime(const Color& color, float time)", "void AddColorTime(const Color&in, float)", AS_METHODPR(ParticleEffect, AddColorTime, (const Color&, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::AddColorFrame(const ColorFrame& colorFrame)", "void AddColorFrame(const ColorFrame&in)", AS_METHODPR(ParticleEffect, AddColorFrame, (const ColorFrame&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::RemoveColorFrame(unsigned index)", "void RemoveColorFrame(uint)", AS_METHODPR(ParticleEffect, RemoveColorFrame, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetColorFrame(unsigned index, const ColorFrame& colorFrame)", "void SetColorFrame(uint, const ColorFrame&in)", AS_METHODPR(ParticleEffect, SetColorFrame, (unsigned, const ColorFrame&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetNumColorFrames(unsigned number)", "void SetNumColorFrames(uint)", AS_METHODPR(ParticleEffect, SetNumColorFrames, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetNumColorFrames(unsigned number)", "void set_numColorFrames(uint)", AS_METHODPR(ParticleEffect, SetNumColorFrames, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SortColorFrames()", "void SortColorFrames()", AS_METHODPR(ParticleEffect, SortColorFrames, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::AddTextureTime(const Rect& uv, float time)", "void AddTextureTime(const Rect&in, float)", AS_METHODPR(ParticleEffect, AddTextureTime, (const Rect&, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::AddTextureFrame(const TextureFrame& textureFrame)", "void AddTextureFrame(const TextureFrame&in)", AS_METHODPR(ParticleEffect, AddTextureFrame, (const TextureFrame&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::RemoveTextureFrame(unsigned index)", "void RemoveTextureFrame(uint)", AS_METHODPR(ParticleEffect, RemoveTextureFrame, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetTextureFrame(unsigned index, const TextureFrame& textureFrame)", "void SetTextureFrame(uint, const TextureFrame&in)", AS_METHODPR(ParticleEffect, SetTextureFrame, (unsigned, const TextureFrame&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetNumTextureFrames(unsigned number)", "void SetNumTextureFrames(uint)", AS_METHODPR(ParticleEffect, SetNumTextureFrames, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SetNumTextureFrames(unsigned number)", "void set_numTextureFrames(uint)", AS_METHODPR(ParticleEffect, SetNumTextureFrames, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEffect::SortTextureFrames()", "void SortTextureFrames()", AS_METHODPR(ParticleEffect, SortTextureFrames, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<ParticleEffect> ParticleEffect::Clone(const String& cloneName=String::EMPTY) const", "ParticleEffect@+ Clone(const String&in = String::EMPTY) const", AS_FUNCTION_OBJFIRST(ParticleEffect_Clone_String), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("Material* ParticleEffect::GetMaterial() const", "Material@+ GetMaterial() const", AS_METHODPR(ParticleEffect, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* ParticleEffect::GetMaterial() const", "Material@+ get_material() const", AS_METHODPR(ParticleEffect, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned ParticleEffect::GetNumParticles() const", "uint GetNumParticles() const", AS_METHODPR(ParticleEffect, GetNumParticles, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned ParticleEffect::GetNumParticles() const", "uint get_numParticles() const", AS_METHODPR(ParticleEffect, GetNumParticles, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::GetUpdateInvisible() const", "bool GetUpdateInvisible() const", AS_METHODPR(ParticleEffect, GetUpdateInvisible, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::GetUpdateInvisible() const", "bool get_updateInvisible() const", AS_METHODPR(ParticleEffect, GetUpdateInvisible, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::IsRelative() const", "bool IsRelative() const", AS_METHODPR(ParticleEffect, IsRelative, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::IsRelative() const", "bool get_relative() const", AS_METHODPR(ParticleEffect, IsRelative, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::IsScaled() const", "bool IsScaled() const", AS_METHODPR(ParticleEffect, IsScaled, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::IsScaled() const", "bool get_scaled() const", AS_METHODPR(ParticleEffect, IsScaled, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::IsSorted() const", "bool IsSorted() const", AS_METHODPR(ParticleEffect, IsSorted, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::IsSorted() const", "bool get_sorted() const", AS_METHODPR(ParticleEffect, IsSorted, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::IsFixedScreenSize() const", "bool IsFixedScreenSize() const", AS_METHODPR(ParticleEffect, IsFixedScreenSize, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEffect::IsFixedScreenSize() const", "bool get_fixedScreenSize() const", AS_METHODPR(ParticleEffect, IsFixedScreenSize, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetAnimationLodBias() const", "float GetAnimationLodBias() const", AS_METHODPR(ParticleEffect, GetAnimationLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetAnimationLodBias() const", "float get_animationLodBias() const", AS_METHODPR(ParticleEffect, GetAnimationLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("EmitterType ParticleEffect::GetEmitterType() const", "EmitterType GetEmitterType() const", AS_METHODPR(ParticleEffect, GetEmitterType, () const, EmitterType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("EmitterType ParticleEffect::GetEmitterType() const", "EmitterType get_emitterType() const", AS_METHODPR(ParticleEffect, GetEmitterType, () const, EmitterType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& ParticleEffect::GetEmitterSize() const", "const Vector3& GetEmitterSize() const", AS_METHODPR(ParticleEffect, GetEmitterSize, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& ParticleEffect::GetEmitterSize() const", "const Vector3& get_emitterSize() const", AS_METHODPR(ParticleEffect, GetEmitterSize, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& ParticleEffect::GetMinDirection() const", "const Vector3& GetMinDirection() const", AS_METHODPR(ParticleEffect, GetMinDirection, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& ParticleEffect::GetMinDirection() const", "const Vector3& get_minDirection() const", AS_METHODPR(ParticleEffect, GetMinDirection, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& ParticleEffect::GetMaxDirection() const", "const Vector3& GetMaxDirection() const", AS_METHODPR(ParticleEffect, GetMaxDirection, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& ParticleEffect::GetMaxDirection() const", "const Vector3& get_maxDirection() const", AS_METHODPR(ParticleEffect, GetMaxDirection, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& ParticleEffect::GetConstantForce() const", "const Vector3& GetConstantForce() const", AS_METHODPR(ParticleEffect, GetConstantForce, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& ParticleEffect::GetConstantForce() const", "const Vector3& get_constantForce() const", AS_METHODPR(ParticleEffect, GetConstantForce, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetDampingForce() const", "float GetDampingForce() const", AS_METHODPR(ParticleEffect, GetDampingForce, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetDampingForce() const", "float get_dampingForce() const", AS_METHODPR(ParticleEffect, GetDampingForce, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetActiveTime() const", "float GetActiveTime() const", AS_METHODPR(ParticleEffect, GetActiveTime, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetActiveTime() const", "float get_activeTime() const", AS_METHODPR(ParticleEffect, GetActiveTime, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetInactiveTime() const", "float GetInactiveTime() const", AS_METHODPR(ParticleEffect, GetInactiveTime, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetInactiveTime() const", "float get_inactiveTime() const", AS_METHODPR(ParticleEffect, GetInactiveTime, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMinEmissionRate() const", "float GetMinEmissionRate() const", AS_METHODPR(ParticleEffect, GetMinEmissionRate, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMinEmissionRate() const", "float get_minEmissionRate() const", AS_METHODPR(ParticleEffect, GetMinEmissionRate, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMaxEmissionRate() const", "float GetMaxEmissionRate() const", AS_METHODPR(ParticleEffect, GetMaxEmissionRate, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMaxEmissionRate() const", "float get_maxEmissionRate() const", AS_METHODPR(ParticleEffect, GetMaxEmissionRate, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& ParticleEffect::GetMinParticleSize() const", "const Vector2& GetMinParticleSize() const", AS_METHODPR(ParticleEffect, GetMinParticleSize, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& ParticleEffect::GetMinParticleSize() const", "const Vector2& get_minParticleSize() const", AS_METHODPR(ParticleEffect, GetMinParticleSize, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& ParticleEffect::GetMaxParticleSize() const", "const Vector2& GetMaxParticleSize() const", AS_METHODPR(ParticleEffect, GetMaxParticleSize, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& ParticleEffect::GetMaxParticleSize() const", "const Vector2& get_maxParticleSize() const", AS_METHODPR(ParticleEffect, GetMaxParticleSize, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMinTimeToLive() const", "float GetMinTimeToLive() const", AS_METHODPR(ParticleEffect, GetMinTimeToLive, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMinTimeToLive() const", "float get_minTimeToLive() const", AS_METHODPR(ParticleEffect, GetMinTimeToLive, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMaxTimeToLive() const", "float GetMaxTimeToLive() const", AS_METHODPR(ParticleEffect, GetMaxTimeToLive, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMaxTimeToLive() const", "float get_maxTimeToLive() const", AS_METHODPR(ParticleEffect, GetMaxTimeToLive, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMinVelocity() const", "float GetMinVelocity() const", AS_METHODPR(ParticleEffect, GetMinVelocity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMinVelocity() const", "float get_minVelocity() const", AS_METHODPR(ParticleEffect, GetMinVelocity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMaxVelocity() const", "float GetMaxVelocity() const", AS_METHODPR(ParticleEffect, GetMaxVelocity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMaxVelocity() const", "float get_maxVelocity() const", AS_METHODPR(ParticleEffect, GetMaxVelocity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMinRotation() const", "float GetMinRotation() const", AS_METHODPR(ParticleEffect, GetMinRotation, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMinRotation() const", "float get_minRotation() const", AS_METHODPR(ParticleEffect, GetMinRotation, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMaxRotation() const", "float GetMaxRotation() const", AS_METHODPR(ParticleEffect, GetMaxRotation, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMaxRotation() const", "float get_maxRotation() const", AS_METHODPR(ParticleEffect, GetMaxRotation, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMinRotationSpeed() const", "float GetMinRotationSpeed() const", AS_METHODPR(ParticleEffect, GetMinRotationSpeed, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMinRotationSpeed() const", "float get_minRotationSpeed() const", AS_METHODPR(ParticleEffect, GetMinRotationSpeed, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMaxRotationSpeed() const", "float GetMaxRotationSpeed() const", AS_METHODPR(ParticleEffect, GetMaxRotationSpeed, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetMaxRotationSpeed() const", "float get_maxRotationSpeed() const", AS_METHODPR(ParticleEffect, GetMaxRotationSpeed, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetSizeAdd() const", "float GetSizeAdd() const", AS_METHODPR(ParticleEffect, GetSizeAdd, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetSizeAdd() const", "float get_sizeAdd() const", AS_METHODPR(ParticleEffect, GetSizeAdd, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetSizeMul() const", "float GetSizeMul() const", AS_METHODPR(ParticleEffect, GetSizeMul, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetSizeMul() const", "float get_sizeMul() const", AS_METHODPR(ParticleEffect, GetSizeMul, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned ParticleEffect::GetNumColorFrames() const", "uint GetNumColorFrames() const", AS_METHODPR(ParticleEffect, GetNumColorFrames, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned ParticleEffect::GetNumColorFrames() const", "uint get_numColorFrames() const", AS_METHODPR(ParticleEffect, GetNumColorFrames, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const ColorFrame* ParticleEffect::GetColorFrame(unsigned index) const", "ColorFrame@+ GetColorFrame(uint) const", AS_METHODPR(ParticleEffect, GetColorFrame, (unsigned) const, const ColorFrame*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned ParticleEffect::GetNumTextureFrames() const", "uint GetNumTextureFrames() const", AS_METHODPR(ParticleEffect, GetNumTextureFrames, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned ParticleEffect::GetNumTextureFrames() const", "uint get_numTextureFrames() const", AS_METHODPR(ParticleEffect, GetNumTextureFrames, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const TextureFrame* ParticleEffect::GetTextureFrame(unsigned index) const", "TextureFrame@+ GetTextureFrame(uint) const", AS_METHODPR(ParticleEffect, GetTextureFrame, (unsigned) const, const TextureFrame*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FaceCameraMode ParticleEffect::GetFaceCameraMode() const", "FaceCameraMode GetFaceCameraMode() const", AS_METHODPR(ParticleEffect, GetFaceCameraMode, () const, FaceCameraMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FaceCameraMode ParticleEffect::GetFaceCameraMode() const", "FaceCameraMode get_faceCameraMode() const", AS_METHODPR(ParticleEffect, GetFaceCameraMode, () const, FaceCameraMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 ParticleEffect::GetRandomDirection() const", "Vector3 GetRandomDirection() const", AS_METHODPR(ParticleEffect, GetRandomDirection, () const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector2 ParticleEffect::GetRandomSize() const", "Vector2 GetRandomSize() const", AS_METHODPR(ParticleEffect, GetRandomSize, () const, Vector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetRandomVelocity() const", "float GetRandomVelocity() const", AS_METHODPR(ParticleEffect, GetRandomVelocity, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetRandomTimeToLive() const", "float GetRandomTimeToLive() const", AS_METHODPR(ParticleEffect, GetRandomTimeToLive, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetRandomRotationSpeed() const", "float GetRandomRotationSpeed() const", AS_METHODPR(ParticleEffect, GetRandomRotationSpeed, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float ParticleEffect::GetRandomRotation() const", "float GetRandomRotation() const", AS_METHODPR(ParticleEffect, GetRandomRotation, () const, float), AS_CALL_THISCALL));

    // static void ParticleEffect::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ParticleEffect
        REGISTER_MEMBERS_MANUAL_PART_ParticleEffect();
    #endif
}

// class ParticleEmitter | File: ../Graphics/ParticleEmitter.h
void CollectMembers_ParticleEmitter(MemberCollection& members)
{
    CollectMembers_BillboardSet(members);

    Remove(members.methods_, "virtual void Drawable::Update(const FrameInfo& frame)");
    Remove(members.methods_, "void Drawable::OnSetEnabled() override");

    Remove(members.staticMethods_, "static void BillboardSet::RegisterObject(Context* context)");

    // VariantVector ParticleEmitter::GetParticleBillboardsAttr() const
    // Error: type "VariantVector" can not automatically bind
    // VariantVector ParticleEmitter::GetParticlesAttr() const
    // Error: type "VariantVector" can not automatically bind
    // void ParticleEmitter::SetParticlesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(ParticleEmitter, OnSetEnabled, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::Update(const FrameInfo& frame) override", "void Update(const FrameInfo&in)", AS_METHODPR(ParticleEmitter, Update, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetEffect(ParticleEffect* effect)", "void SetEffect(ParticleEffect@+)", AS_METHODPR(ParticleEmitter, SetEffect, (ParticleEffect*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetEffect(ParticleEffect* effect)", "void set_effect(ParticleEffect@+)", AS_METHODPR(ParticleEmitter, SetEffect, (ParticleEffect*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetNumParticles(unsigned num)", "void SetNumParticles(uint)", AS_METHODPR(ParticleEmitter, SetNumParticles, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetNumParticles(unsigned num)", "void set_numParticles(uint)", AS_METHODPR(ParticleEmitter, SetNumParticles, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetEmitting(bool enable)", "void SetEmitting(bool)", AS_METHODPR(ParticleEmitter, SetEmitting, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetEmitting(bool enable)", "void set_emitting(bool)", AS_METHODPR(ParticleEmitter, SetEmitting, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetSerializeParticles(bool enable)", "void SetSerializeParticles(bool)", AS_METHODPR(ParticleEmitter, SetSerializeParticles, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetSerializeParticles(bool enable)", "void set_serializeParticles(bool)", AS_METHODPR(ParticleEmitter, SetSerializeParticles, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetAutoRemoveMode(AutoRemoveMode mode)", "void SetAutoRemoveMode(AutoRemoveMode)", AS_METHODPR(ParticleEmitter, SetAutoRemoveMode, (AutoRemoveMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetAutoRemoveMode(AutoRemoveMode mode)", "void set_autoRemoveMode(AutoRemoveMode)", AS_METHODPR(ParticleEmitter, SetAutoRemoveMode, (AutoRemoveMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::ResetEmissionTimer()", "void ResetEmissionTimer()", AS_METHODPR(ParticleEmitter, ResetEmissionTimer, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::RemoveAllParticles()", "void RemoveAllParticles()", AS_METHODPR(ParticleEmitter, RemoveAllParticles, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::Reset()", "void Reset()", AS_METHODPR(ParticleEmitter, Reset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::ApplyEffect()", "void ApplyEffect()", AS_METHODPR(ParticleEmitter, ApplyEffect, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ParticleEffect* ParticleEmitter::GetEffect() const", "ParticleEffect@+ GetEffect() const", AS_METHODPR(ParticleEmitter, GetEffect, () const, ParticleEffect*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ParticleEffect* ParticleEmitter::GetEffect() const", "ParticleEffect@+ get_effect() const", AS_METHODPR(ParticleEmitter, GetEffect, () const, ParticleEffect*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned ParticleEmitter::GetNumParticles() const", "uint GetNumParticles() const", AS_METHODPR(ParticleEmitter, GetNumParticles, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned ParticleEmitter::GetNumParticles() const", "uint get_numParticles() const", AS_METHODPR(ParticleEmitter, GetNumParticles, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEmitter::IsEmitting() const", "bool IsEmitting() const", AS_METHODPR(ParticleEmitter, IsEmitting, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEmitter::IsEmitting() const", "bool get_emitting() const", AS_METHODPR(ParticleEmitter, IsEmitting, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEmitter::GetSerializeParticles() const", "bool GetSerializeParticles() const", AS_METHODPR(ParticleEmitter, GetSerializeParticles, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ParticleEmitter::GetSerializeParticles() const", "bool get_serializeParticles() const", AS_METHODPR(ParticleEmitter, GetSerializeParticles, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AutoRemoveMode ParticleEmitter::GetAutoRemoveMode() const", "AutoRemoveMode GetAutoRemoveMode() const", AS_METHODPR(ParticleEmitter, GetAutoRemoveMode, () const, AutoRemoveMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("AutoRemoveMode ParticleEmitter::GetAutoRemoveMode() const", "AutoRemoveMode get_autoRemoveMode() const", AS_METHODPR(ParticleEmitter, GetAutoRemoveMode, () const, AutoRemoveMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ParticleEmitter::SetEffectAttr(const ResourceRef& value)", "void SetEffectAttr(const ResourceRef&in)", AS_METHODPR(ParticleEmitter, SetEffectAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef ParticleEmitter::GetEffectAttr() const", "ResourceRef GetEffectAttr() const", AS_METHODPR(ParticleEmitter, GetEffectAttr, () const, ResourceRef), AS_CALL_THISCALL));

    // static void ParticleEmitter::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ParticleEmitter
        REGISTER_MEMBERS_MANUAL_PART_ParticleEmitter();
    #endif
}

// Vector<SharedPtr<ShaderVariation>>& Pass::GetVertexShaders()
// Vector<SharedPtr<ShaderVariation>>& Pass::GetVertexShaders() | File: ../Graphics/Technique.h
static CScriptArray* Pass_GetVertexShaders_void(Pass* ptr)
{
    Vector<SharedPtr<ShaderVariation>>& result = ptr->GetVertexShaders();
    return VectorToHandleArray(result, "Array<ShaderVariation@>");
}


// Vector<SharedPtr<ShaderVariation>>& Pass::GetPixelShaders()
// Vector<SharedPtr<ShaderVariation>>& Pass::GetPixelShaders() | File: ../Graphics/Technique.h
static CScriptArray* Pass_GetPixelShaders_void(Pass* ptr)
{
    Vector<SharedPtr<ShaderVariation>>& result = ptr->GetPixelShaders();
    return VectorToHandleArray(result, "Array<ShaderVariation@>");
}


// Vector<SharedPtr<ShaderVariation>>& Pass::GetVertexShaders(const StringHash& extraDefinesHash)
// Vector<SharedPtr<ShaderVariation>>& Pass::GetVertexShaders(const StringHash& extraDefinesHash) | File: ../Graphics/Technique.h
static CScriptArray* Pass_GetVertexShaders_StringHash(Pass* ptr, const StringHash& extraDefinesHash)
{
    Vector<SharedPtr<ShaderVariation>>& result = ptr->GetVertexShaders(extraDefinesHash);
    return VectorToHandleArray(result, "Array<ShaderVariation@>");
}


// Vector<SharedPtr<ShaderVariation>>& Pass::GetPixelShaders(const StringHash& extraDefinesHash)
// Vector<SharedPtr<ShaderVariation>>& Pass::GetPixelShaders(const StringHash& extraDefinesHash) | File: ../Graphics/Technique.h
static CScriptArray* Pass_GetPixelShaders_StringHash(Pass* ptr, const StringHash& extraDefinesHash)
{
    Vector<SharedPtr<ShaderVariation>>& result = ptr->GetPixelShaders(extraDefinesHash);
    return VectorToHandleArray(result, "Array<ShaderVariation@>");
}


// class Pass | File: ../Graphics/Technique.h
void CollectMembers_Pass(MemberCollection& members)
{
    CollectMembers_RefCounted(members);

    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetBlendMode(BlendMode mode)", "void SetBlendMode(BlendMode)", AS_METHODPR(Pass, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetBlendMode(BlendMode mode)", "void set_blendMode(BlendMode)", AS_METHODPR(Pass, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetCullMode(CullMode mode)", "void SetCullMode(CullMode)", AS_METHODPR(Pass, SetCullMode, (CullMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetCullMode(CullMode mode)", "void set_cullMode(CullMode)", AS_METHODPR(Pass, SetCullMode, (CullMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetDepthTestMode(CompareMode mode)", "void SetDepthTestMode(CompareMode)", AS_METHODPR(Pass, SetDepthTestMode, (CompareMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetDepthTestMode(CompareMode mode)", "void set_depthTestMode(CompareMode)", AS_METHODPR(Pass, SetDepthTestMode, (CompareMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetLightingMode(PassLightingMode mode)", "void SetLightingMode(PassLightingMode)", AS_METHODPR(Pass, SetLightingMode, (PassLightingMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetLightingMode(PassLightingMode mode)", "void set_lightingMode(PassLightingMode)", AS_METHODPR(Pass, SetLightingMode, (PassLightingMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetDepthWrite(bool enable)", "void SetDepthWrite(bool)", AS_METHODPR(Pass, SetDepthWrite, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetDepthWrite(bool enable)", "void set_depthWrite(bool)", AS_METHODPR(Pass, SetDepthWrite, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetAlphaToCoverage(bool enable)", "void SetAlphaToCoverage(bool)", AS_METHODPR(Pass, SetAlphaToCoverage, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetAlphaToCoverage(bool enable)", "void set_alphaToCoverage(bool)", AS_METHODPR(Pass, SetAlphaToCoverage, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetIsDesktop(bool enable)", "void SetIsDesktop(bool)", AS_METHODPR(Pass, SetIsDesktop, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetIsDesktop(bool enable)", "void set_desktop(bool)", AS_METHODPR(Pass, SetIsDesktop, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetVertexShader(const String& name)", "void SetVertexShader(const String&in)", AS_METHODPR(Pass, SetVertexShader, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetVertexShader(const String& name)", "void set_vertexShader(const String&in)", AS_METHODPR(Pass, SetVertexShader, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetPixelShader(const String& name)", "void SetPixelShader(const String&in)", AS_METHODPR(Pass, SetPixelShader, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetPixelShader(const String& name)", "void set_pixelShader(const String&in)", AS_METHODPR(Pass, SetPixelShader, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetVertexShaderDefines(const String& defines)", "void SetVertexShaderDefines(const String&in)", AS_METHODPR(Pass, SetVertexShaderDefines, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetVertexShaderDefines(const String& defines)", "void set_vertexShaderDefines(const String&in)", AS_METHODPR(Pass, SetVertexShaderDefines, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetPixelShaderDefines(const String& defines)", "void SetPixelShaderDefines(const String&in)", AS_METHODPR(Pass, SetPixelShaderDefines, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetPixelShaderDefines(const String& defines)", "void set_pixelShaderDefines(const String&in)", AS_METHODPR(Pass, SetPixelShaderDefines, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetVertexShaderDefineExcludes(const String& excludes)", "void SetVertexShaderDefineExcludes(const String&in)", AS_METHODPR(Pass, SetVertexShaderDefineExcludes, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetVertexShaderDefineExcludes(const String& excludes)", "void set_vertexShaderDefineExcludes(const String&in)", AS_METHODPR(Pass, SetVertexShaderDefineExcludes, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetPixelShaderDefineExcludes(const String& excludes)", "void SetPixelShaderDefineExcludes(const String&in)", AS_METHODPR(Pass, SetPixelShaderDefineExcludes, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::SetPixelShaderDefineExcludes(const String& excludes)", "void set_pixelShaderDefineExcludes(const String&in)", AS_METHODPR(Pass, SetPixelShaderDefineExcludes, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::ReleaseShaders()", "void ReleaseShaders()", AS_METHODPR(Pass, ReleaseShaders, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Pass::MarkShadersLoaded(unsigned frameNumber)", "void MarkShadersLoaded(uint)", AS_METHODPR(Pass, MarkShadersLoaded, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetName() const", "const String& GetName() const", AS_METHODPR(Pass, GetName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Pass::GetIndex() const", "uint GetIndex() const", AS_METHODPR(Pass, GetIndex, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("BlendMode Pass::GetBlendMode() const", "BlendMode GetBlendMode() const", AS_METHODPR(Pass, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("BlendMode Pass::GetBlendMode() const", "BlendMode get_blendMode() const", AS_METHODPR(Pass, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CullMode Pass::GetCullMode() const", "CullMode GetCullMode() const", AS_METHODPR(Pass, GetCullMode, () const, CullMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CullMode Pass::GetCullMode() const", "CullMode get_cullMode() const", AS_METHODPR(Pass, GetCullMode, () const, CullMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CompareMode Pass::GetDepthTestMode() const", "CompareMode GetDepthTestMode() const", AS_METHODPR(Pass, GetDepthTestMode, () const, CompareMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CompareMode Pass::GetDepthTestMode() const", "CompareMode get_depthTestMode() const", AS_METHODPR(Pass, GetDepthTestMode, () const, CompareMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("PassLightingMode Pass::GetLightingMode() const", "PassLightingMode GetLightingMode() const", AS_METHODPR(Pass, GetLightingMode, () const, PassLightingMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("PassLightingMode Pass::GetLightingMode() const", "PassLightingMode get_lightingMode() const", AS_METHODPR(Pass, GetLightingMode, () const, PassLightingMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Pass::GetShadersLoadedFrameNumber() const", "uint GetShadersLoadedFrameNumber() const", AS_METHODPR(Pass, GetShadersLoadedFrameNumber, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Pass::GetDepthWrite() const", "bool GetDepthWrite() const", AS_METHODPR(Pass, GetDepthWrite, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Pass::GetDepthWrite() const", "bool get_depthWrite() const", AS_METHODPR(Pass, GetDepthWrite, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Pass::GetAlphaToCoverage() const", "bool GetAlphaToCoverage() const", AS_METHODPR(Pass, GetAlphaToCoverage, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Pass::GetAlphaToCoverage() const", "bool get_alphaToCoverage() const", AS_METHODPR(Pass, GetAlphaToCoverage, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Pass::IsDesktop() const", "bool IsDesktop() const", AS_METHODPR(Pass, IsDesktop, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Pass::IsDesktop() const", "bool get_desktop() const", AS_METHODPR(Pass, IsDesktop, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetVertexShader() const", "const String& GetVertexShader() const", AS_METHODPR(Pass, GetVertexShader, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetVertexShader() const", "const String& get_vertexShader() const", AS_METHODPR(Pass, GetVertexShader, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetPixelShader() const", "const String& GetPixelShader() const", AS_METHODPR(Pass, GetPixelShader, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetPixelShader() const", "const String& get_pixelShader() const", AS_METHODPR(Pass, GetPixelShader, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetVertexShaderDefines() const", "const String& GetVertexShaderDefines() const", AS_METHODPR(Pass, GetVertexShaderDefines, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetVertexShaderDefines() const", "const String& get_vertexShaderDefines() const", AS_METHODPR(Pass, GetVertexShaderDefines, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetPixelShaderDefines() const", "const String& GetPixelShaderDefines() const", AS_METHODPR(Pass, GetPixelShaderDefines, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetPixelShaderDefines() const", "const String& get_pixelShaderDefines() const", AS_METHODPR(Pass, GetPixelShaderDefines, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetVertexShaderDefineExcludes() const", "const String& GetVertexShaderDefineExcludes() const", AS_METHODPR(Pass, GetVertexShaderDefineExcludes, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetVertexShaderDefineExcludes() const", "const String& get_vertexShaderDefineExcludes() const", AS_METHODPR(Pass, GetVertexShaderDefineExcludes, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetPixelShaderDefineExcludes() const", "const String& GetPixelShaderDefineExcludes() const", AS_METHODPR(Pass, GetPixelShaderDefineExcludes, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Pass::GetPixelShaderDefineExcludes() const", "const String& get_pixelShaderDefineExcludes() const", AS_METHODPR(Pass, GetPixelShaderDefineExcludes, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector<SharedPtr<ShaderVariation>>& Pass::GetVertexShaders()", "Array<ShaderVariation@>@ GetVertexShaders()", AS_FUNCTION_OBJFIRST(Pass_GetVertexShaders_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("Vector<SharedPtr<ShaderVariation>>& Pass::GetPixelShaders()", "Array<ShaderVariation@>@ GetPixelShaders()", AS_FUNCTION_OBJFIRST(Pass_GetPixelShaders_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("Vector<SharedPtr<ShaderVariation>>& Pass::GetVertexShaders(const StringHash& extraDefinesHash)", "Array<ShaderVariation@>@ GetVertexShaders(const StringHash&in)", AS_FUNCTION_OBJFIRST(Pass_GetVertexShaders_StringHash), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("Vector<SharedPtr<ShaderVariation>>& Pass::GetPixelShaders(const StringHash& extraDefinesHash)", "Array<ShaderVariation@>@ GetPixelShaders(const StringHash&in)", AS_FUNCTION_OBJFIRST(Pass_GetPixelShaders_StringHash), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("String Pass::GetEffectiveVertexShaderDefines() const", "String GetEffectiveVertexShaderDefines() const", AS_METHODPR(Pass, GetEffectiveVertexShaderDefines, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Pass::GetEffectivePixelShaderDefines() const", "String GetEffectivePixelShaderDefines() const", AS_METHODPR(Pass, GetEffectivePixelShaderDefines, () const, String), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Pass
        REGISTER_MEMBERS_MANUAL_PART_Pass();
    #endif
}

// struct PerThreadSceneResult | File: ../Graphics/View.h
void CollectMembers_PerThreadSceneResult(MemberCollection& members)
{
    // PODVector<Drawable*> PerThreadSceneResult::geometries_
    // Error: type "PODVector<Drawable*>" can not automatically bind
    // PODVector<Light*> PerThreadSceneResult::lights_
    // Error: type "PODVector<Light*>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("float PerThreadSceneResult::minZ_", "float minZ", offsetof(PerThreadSceneResult, minZ_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float PerThreadSceneResult::maxZ_", "float maxZ", offsetof(PerThreadSceneResult, maxZ_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_PerThreadSceneResult
        REGISTER_MEMBERS_MANUAL_PART_PerThreadSceneResult();
    #endif
}

// class PointOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_PointOctreeQuery(MemberCollection& members)
{
    // void PointOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
    // Error: type "Drawable**" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("Intersection PointOctreeQuery::TestOctant(const BoundingBox& box, bool inside) override", "Intersection TestOctant(const BoundingBox&in, bool)", AS_METHODPR(PointOctreeQuery, TestOctant, (const BoundingBox&, bool), Intersection), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 PointOctreeQuery::point_", "Vector3 point", offsetof(PointOctreeQuery, point_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_PointOctreeQuery
        REGISTER_MEMBERS_MANUAL_PART_PointOctreeQuery();
    #endif
}

// class RayOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_RayOctreeQuery(MemberCollection& members)
{
    // PODVector<RayQueryResult>& RayOctreeQuery::result_
    // Error: type "PODVector<RayQueryResult>&" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("Ray RayOctreeQuery::ray_", "Ray ray", offsetof(RayOctreeQuery, ray_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned char RayOctreeQuery::drawableFlags_", "uint8 drawableFlags", offsetof(RayOctreeQuery, drawableFlags_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned RayOctreeQuery::viewMask_", "uint viewMask", offsetof(RayOctreeQuery, viewMask_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float RayOctreeQuery::maxDistance_", "float maxDistance", offsetof(RayOctreeQuery, maxDistance_)));
    members.fields_.Push(RegisterObjectPropertyArgs("RayQueryLevel RayOctreeQuery::level_", "RayQueryLevel level", offsetof(RayOctreeQuery, level_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_RayOctreeQuery
        REGISTER_MEMBERS_MANUAL_PART_RayOctreeQuery();
    #endif
}

// struct RayQueryResult | File: ../Graphics/OctreeQuery.h
void CollectMembers_RayQueryResult(MemberCollection& members)
{
    // bool RayQueryResult::operator!=(const RayQueryResult& rhs) const
    // Only operator== is needed

    // Drawable* RayQueryResult::drawable_
    // Not registered because pointer
    // Node* RayQueryResult::node_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 RayQueryResult::position_", "Vector3 position", offsetof(RayQueryResult, position_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 RayQueryResult::normal_", "Vector3 normal", offsetof(RayQueryResult, normal_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector2 RayQueryResult::textureUV_", "Vector2 textureUV", offsetof(RayQueryResult, textureUV_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float RayQueryResult::distance_", "float distance", offsetof(RayQueryResult, distance_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned RayQueryResult::subObject_", "uint subObject", offsetof(RayQueryResult, subObject_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_RayQueryResult
        REGISTER_MEMBERS_MANUAL_PART_RayQueryResult();
    #endif
}

// SharedPtr<RenderPath> RenderPath::Clone()
// SharedPtr<RenderPath> RenderPath::Clone() | File: ../Graphics/RenderPath.h
static RenderPath* RenderPath_Clone_void(RenderPath* ptr)
{
    SharedPtr<RenderPath> result = ptr->Clone();
    return result.Detach();
}


// class RenderPath | File: ../Graphics/RenderPath.h
void CollectMembers_RenderPath(MemberCollection& members)
{
    CollectMembers_RefCounted(members);

    // RenderPathCommand* RenderPath::GetCommand(unsigned index)
    // Error: type "RenderPathCommand*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<RenderPath> RenderPath::Clone()", "RenderPath@+ Clone()", AS_FUNCTION_OBJFIRST(RenderPath_Clone_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderPath::Load(XMLFile* file)", "bool Load(XMLFile@+)", AS_METHODPR(RenderPath, Load, (XMLFile*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderPath::Append(XMLFile* file)", "bool Append(XMLFile@+)", AS_METHODPR(RenderPath, Append, (XMLFile*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::SetEnabled(const String& tag, bool active)", "void SetEnabled(const String&in, bool)", AS_METHODPR(RenderPath, SetEnabled, (const String&, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderPath::IsEnabled(const String& tag) const", "bool IsEnabled(const String&in) const", AS_METHODPR(RenderPath, IsEnabled, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderPath::IsEnabled(const String& tag) const", "bool get_enabled(const String&in) const", AS_METHODPR(RenderPath, IsEnabled, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderPath::IsAdded(const String& tag) const", "bool IsAdded(const String&in) const", AS_METHODPR(RenderPath, IsAdded, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderPath::IsAdded(const String& tag) const", "bool get_added(const String&in) const", AS_METHODPR(RenderPath, IsAdded, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::ToggleEnabled(const String& tag)", "void ToggleEnabled(const String&in)", AS_METHODPR(RenderPath, ToggleEnabled, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::SetRenderTarget(unsigned index, const RenderTargetInfo& info)", "void SetRenderTarget(uint, const RenderTargetInfo&in)", AS_METHODPR(RenderPath, SetRenderTarget, (unsigned, const RenderTargetInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::SetRenderTarget(unsigned index, const RenderTargetInfo& info)", "void set_renderTargets(uint, const RenderTargetInfo&in)", AS_METHODPR(RenderPath, SetRenderTarget, (unsigned, const RenderTargetInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::AddRenderTarget(const RenderTargetInfo& info)", "void AddRenderTarget(const RenderTargetInfo&in)", AS_METHODPR(RenderPath, AddRenderTarget, (const RenderTargetInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::RemoveRenderTarget(unsigned index)", "void RemoveRenderTarget(uint)", AS_METHODPR(RenderPath, RemoveRenderTarget, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::RemoveRenderTarget(const String& name)", "void RemoveRenderTarget(const String&in)", AS_METHODPR(RenderPath, RemoveRenderTarget, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::RemoveRenderTargets(const String& tag)", "void RemoveRenderTargets(const String&in)", AS_METHODPR(RenderPath, RemoveRenderTargets, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::SetCommand(unsigned index, const RenderPathCommand& command)", "void SetCommand(uint, const RenderPathCommand&in)", AS_METHODPR(RenderPath, SetCommand, (unsigned, const RenderPathCommand&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::SetCommand(unsigned index, const RenderPathCommand& command)", "void set_commands(uint, const RenderPathCommand&in)", AS_METHODPR(RenderPath, SetCommand, (unsigned, const RenderPathCommand&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::AddCommand(const RenderPathCommand& command)", "void AddCommand(const RenderPathCommand&in)", AS_METHODPR(RenderPath, AddCommand, (const RenderPathCommand&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::InsertCommand(unsigned index, const RenderPathCommand& command)", "void InsertCommand(uint, const RenderPathCommand&in)", AS_METHODPR(RenderPath, InsertCommand, (unsigned, const RenderPathCommand&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::RemoveCommand(unsigned index)", "void RemoveCommand(uint)", AS_METHODPR(RenderPath, RemoveCommand, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::RemoveCommands(const String& tag)", "void RemoveCommands(const String&in)", AS_METHODPR(RenderPath, RemoveCommands, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::SetShaderParameter(const String& name, const Variant& value)", "void SetShaderParameter(const String&in, const Variant&in)", AS_METHODPR(RenderPath, SetShaderParameter, (const String&, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPath::SetShaderParameter(const String& name, const Variant& value)", "void set_shaderParameters(const String&in, const Variant&in)", AS_METHODPR(RenderPath, SetShaderParameter, (const String&, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RenderPath::GetNumRenderTargets() const", "uint GetNumRenderTargets() const", AS_METHODPR(RenderPath, GetNumRenderTargets, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RenderPath::GetNumRenderTargets() const", "uint get_numRenderTargets() const", AS_METHODPR(RenderPath, GetNumRenderTargets, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RenderPath::GetNumCommands() const", "uint GetNumCommands() const", AS_METHODPR(RenderPath, GetNumCommands, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RenderPath::GetNumCommands() const", "uint get_numCommands() const", AS_METHODPR(RenderPath, GetNumCommands, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Variant& RenderPath::GetShaderParameter(const String& name) const", "const Variant& GetShaderParameter(const String&in) const", AS_METHODPR(RenderPath, GetShaderParameter, (const String&) const, const Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Variant& RenderPath::GetShaderParameter(const String& name) const", "const Variant& get_shaderParameters(const String&in) const", AS_METHODPR(RenderPath, GetShaderParameter, (const String&) const, const Variant&), AS_CALL_THISCALL));

    // Vector<RenderTargetInfo> RenderPath::renderTargets_
    // Error: type "Vector<RenderTargetInfo>" can not automatically bind
    // Vector<RenderPathCommand> RenderPath::commands_
    // Error: type "Vector<RenderPathCommand>" can not automatically bind

    #ifdef REGISTER_MEMBERS_MANUAL_PART_RenderPath
        REGISTER_MEMBERS_MANUAL_PART_RenderPath();
    #endif
}

// struct RenderPathCommand | File: ../Graphics/RenderPath.h
void CollectMembers_RenderPathCommand(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::Load(const XMLElement& element)", "void Load(const XMLElement&in)", AS_METHODPR(RenderPathCommand, Load, (const XMLElement&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetTextureName(TextureUnit unit, const String& name)", "void SetTextureName(TextureUnit, const String&in)", AS_METHODPR(RenderPathCommand, SetTextureName, (TextureUnit, const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetTextureName(TextureUnit unit, const String& name)", "void set_textureNames(TextureUnit, const String&in)", AS_METHODPR(RenderPathCommand, SetTextureName, (TextureUnit, const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetShaderParameter(const String& name, const Variant& value)", "void SetShaderParameter(const String&in, const Variant&in)", AS_METHODPR(RenderPathCommand, SetShaderParameter, (const String&, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetShaderParameter(const String& name, const Variant& value)", "void set_shaderParameters(const String&in, const Variant&in)", AS_METHODPR(RenderPathCommand, SetShaderParameter, (const String&, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::RemoveShaderParameter(const String& name)", "void RemoveShaderParameter(const String&in)", AS_METHODPR(RenderPathCommand, RemoveShaderParameter, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetNumOutputs(unsigned num)", "void SetNumOutputs(uint)", AS_METHODPR(RenderPathCommand, SetNumOutputs, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetNumOutputs(unsigned num)", "void set_numOutputs(uint)", AS_METHODPR(RenderPathCommand, SetNumOutputs, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetOutput(unsigned index, const String& name, CubeMapFace face=FACE_POSITIVE_X)", "void SetOutput(uint, const String&in, CubeMapFace = FACE_POSITIVE_X)", AS_METHODPR(RenderPathCommand, SetOutput, (unsigned, const String&, CubeMapFace), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetOutputName(unsigned index, const String& name)", "void SetOutputName(uint, const String&in)", AS_METHODPR(RenderPathCommand, SetOutputName, (unsigned, const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetOutputName(unsigned index, const String& name)", "void set_outputNames(uint, const String&in)", AS_METHODPR(RenderPathCommand, SetOutputName, (unsigned, const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetOutputFace(unsigned index, CubeMapFace face)", "void SetOutputFace(uint, CubeMapFace)", AS_METHODPR(RenderPathCommand, SetOutputFace, (unsigned, CubeMapFace), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetOutputFace(unsigned index, CubeMapFace face)", "void set_outputFaces(uint, CubeMapFace)", AS_METHODPR(RenderPathCommand, SetOutputFace, (unsigned, CubeMapFace), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetDepthStencilName(const String& name)", "void SetDepthStencilName(const String&in)", AS_METHODPR(RenderPathCommand, SetDepthStencilName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderPathCommand::SetDepthStencilName(const String& name)", "void set_depthStencilName(const String&in)", AS_METHODPR(RenderPathCommand, SetDepthStencilName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& RenderPathCommand::GetTextureName(TextureUnit unit) const", "const String& GetTextureName(TextureUnit) const", AS_METHODPR(RenderPathCommand, GetTextureName, (TextureUnit) const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& RenderPathCommand::GetTextureName(TextureUnit unit) const", "const String& get_textureNames(TextureUnit) const", AS_METHODPR(RenderPathCommand, GetTextureName, (TextureUnit) const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Variant& RenderPathCommand::GetShaderParameter(const String& name) const", "const Variant& GetShaderParameter(const String&in) const", AS_METHODPR(RenderPathCommand, GetShaderParameter, (const String&) const, const Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Variant& RenderPathCommand::GetShaderParameter(const String& name) const", "const Variant& get_shaderParameters(const String&in) const", AS_METHODPR(RenderPathCommand, GetShaderParameter, (const String&) const, const Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RenderPathCommand::GetNumOutputs() const", "uint GetNumOutputs() const", AS_METHODPR(RenderPathCommand, GetNumOutputs, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RenderPathCommand::GetNumOutputs() const", "uint get_numOutputs() const", AS_METHODPR(RenderPathCommand, GetNumOutputs, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& RenderPathCommand::GetOutputName(unsigned index) const", "const String& GetOutputName(uint) const", AS_METHODPR(RenderPathCommand, GetOutputName, (unsigned) const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& RenderPathCommand::GetOutputName(unsigned index) const", "const String& get_outputNames(uint) const", AS_METHODPR(RenderPathCommand, GetOutputName, (unsigned) const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CubeMapFace RenderPathCommand::GetOutputFace(unsigned index) const", "CubeMapFace GetOutputFace(uint) const", AS_METHODPR(RenderPathCommand, GetOutputFace, (unsigned) const, CubeMapFace), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("CubeMapFace RenderPathCommand::GetOutputFace(unsigned index) const", "CubeMapFace get_outputFaces(uint) const", AS_METHODPR(RenderPathCommand, GetOutputFace, (unsigned) const, CubeMapFace), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& RenderPathCommand::GetDepthStencilName() const", "const String& GetDepthStencilName() const", AS_METHODPR(RenderPathCommand, GetDepthStencilName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& RenderPathCommand::GetDepthStencilName() const", "const String& get_depthStencilName() const", AS_METHODPR(RenderPathCommand, GetDepthStencilName, () const, const String&), AS_CALL_THISCALL));

    // String RenderPathCommand::textureNames_[MAX_TEXTURE_UNITS]
    // Not registered because array
    // HashMap<StringHash, Variant> RenderPathCommand::shaderParameters_
    // Error: type "HashMap<StringHash, Variant>" can not automatically bind
    // Vector<Pair<String, CubeMapFace>> RenderPathCommand::outputs_
    // Error: type "Vector<Pair<String, CubeMapFace>>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("String RenderPathCommand::tag_", "String tag", offsetof(RenderPathCommand, tag_)));
    members.fields_.Push(RegisterObjectPropertyArgs("RenderCommandType RenderPathCommand::type_", "RenderCommandType type", offsetof(RenderPathCommand, type_)));
    members.fields_.Push(RegisterObjectPropertyArgs("RenderCommandSortMode RenderPathCommand::sortMode_", "RenderCommandSortMode sortMode", offsetof(RenderPathCommand, sortMode_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String RenderPathCommand::pass_", "String pass", offsetof(RenderPathCommand, pass_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned RenderPathCommand::passIndex_", "uint passIndex", offsetof(RenderPathCommand, passIndex_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String RenderPathCommand::metadata_", "String metadata", offsetof(RenderPathCommand, metadata_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String RenderPathCommand::vertexShaderName_", "String vertexShaderName", offsetof(RenderPathCommand, vertexShaderName_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String RenderPathCommand::pixelShaderName_", "String pixelShaderName", offsetof(RenderPathCommand, pixelShaderName_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String RenderPathCommand::vertexShaderDefines_", "String vertexShaderDefines", offsetof(RenderPathCommand, vertexShaderDefines_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String RenderPathCommand::pixelShaderDefines_", "String pixelShaderDefines", offsetof(RenderPathCommand, pixelShaderDefines_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String RenderPathCommand::depthStencilName_", "String depthStencilName", offsetof(RenderPathCommand, depthStencilName_)));
    members.fields_.Push(RegisterObjectPropertyArgs("ClearTargetFlags RenderPathCommand::clearFlags_", "ClearTargetFlags clearFlags", offsetof(RenderPathCommand, clearFlags_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Color RenderPathCommand::clearColor_", "Color clearColor", offsetof(RenderPathCommand, clearColor_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float RenderPathCommand::clearDepth_", "float clearDepth", offsetof(RenderPathCommand, clearDepth_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned RenderPathCommand::clearStencil_", "uint clearStencil", offsetof(RenderPathCommand, clearStencil_)));
    members.fields_.Push(RegisterObjectPropertyArgs("BlendMode RenderPathCommand::blendMode_", "BlendMode blendMode", offsetof(RenderPathCommand, blendMode_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderPathCommand::enabled_", "bool enabled", offsetof(RenderPathCommand, enabled_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderPathCommand::useFogColor_", "bool useFogColor", offsetof(RenderPathCommand, useFogColor_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderPathCommand::markToStencil_", "bool markToStencil", offsetof(RenderPathCommand, markToStencil_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderPathCommand::useLitBase_", "bool useLitBase", offsetof(RenderPathCommand, useLitBase_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderPathCommand::vertexLights_", "bool vertexLights", offsetof(RenderPathCommand, vertexLights_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String RenderPathCommand::eventName_", "String eventName", offsetof(RenderPathCommand, eventName_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_RenderPathCommand
        REGISTER_MEMBERS_MANUAL_PART_RenderPathCommand();
    #endif
}

// class RenderSurface | File: ../Graphics/RenderSurface.h
void CollectMembers_RenderSurface(MemberCollection& members)
{
    CollectMembers_RefCounted(members);

    // void* RenderSurface::GetReadOnlyView() const
    // Error: type "void*" can not automatically bind
    // void* RenderSurface::GetRenderTargetView() const
    // Error: type "void*" can not automatically bind
    // void* RenderSurface::GetSurface() const
    // Error: type "void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetNumViewports(unsigned num)", "void SetNumViewports(uint)", AS_METHODPR(RenderSurface, SetNumViewports, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetNumViewports(unsigned num)", "void set_numViewports(uint)", AS_METHODPR(RenderSurface, SetNumViewports, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetViewport(unsigned index, Viewport* viewport)", "void SetViewport(uint, Viewport@+)", AS_METHODPR(RenderSurface, SetViewport, (unsigned, Viewport*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetViewport(unsigned index, Viewport* viewport)", "void set_viewports(uint, Viewport@+)", AS_METHODPR(RenderSurface, SetViewport, (unsigned, Viewport*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetUpdateMode(RenderSurfaceUpdateMode mode)", "void SetUpdateMode(RenderSurfaceUpdateMode)", AS_METHODPR(RenderSurface, SetUpdateMode, (RenderSurfaceUpdateMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetUpdateMode(RenderSurfaceUpdateMode mode)", "void set_updateMode(RenderSurfaceUpdateMode)", AS_METHODPR(RenderSurface, SetUpdateMode, (RenderSurfaceUpdateMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetLinkedRenderTarget(RenderSurface* renderTarget)", "void SetLinkedRenderTarget(RenderSurface@+)", AS_METHODPR(RenderSurface, SetLinkedRenderTarget, (RenderSurface*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetLinkedRenderTarget(RenderSurface* renderTarget)", "void set_linkedRenderTarget(RenderSurface@+)", AS_METHODPR(RenderSurface, SetLinkedRenderTarget, (RenderSurface*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetLinkedDepthStencil(RenderSurface* depthStencil)", "void SetLinkedDepthStencil(RenderSurface@+)", AS_METHODPR(RenderSurface, SetLinkedDepthStencil, (RenderSurface*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetLinkedDepthStencil(RenderSurface* depthStencil)", "void set_linkedDepthStencil(RenderSurface@+)", AS_METHODPR(RenderSurface, SetLinkedDepthStencil, (RenderSurface*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::QueueUpdate()", "void QueueUpdate()", AS_METHODPR(RenderSurface, QueueUpdate, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::Release()", "void Release()", AS_METHODPR(RenderSurface, Release, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::OnDeviceLost()", "void OnDeviceLost()", AS_METHODPR(RenderSurface, OnDeviceLost, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderSurface::CreateRenderBuffer(unsigned width, unsigned height, unsigned format, int multiSample)", "bool CreateRenderBuffer(uint, uint, uint, int)", AS_METHODPR(RenderSurface, CreateRenderBuffer, (unsigned, unsigned, unsigned, int), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int RenderSurface::GetWidth() const", "int GetWidth() const", AS_METHODPR(RenderSurface, GetWidth, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int RenderSurface::GetWidth() const", "int get_width() const", AS_METHODPR(RenderSurface, GetWidth, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int RenderSurface::GetHeight() const", "int GetHeight() const", AS_METHODPR(RenderSurface, GetHeight, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int RenderSurface::GetHeight() const", "int get_height() const", AS_METHODPR(RenderSurface, GetHeight, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureUsage RenderSurface::GetUsage() const", "TextureUsage GetUsage() const", AS_METHODPR(RenderSurface, GetUsage, () const, TextureUsage), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureUsage RenderSurface::GetUsage() const", "TextureUsage get_usage() const", AS_METHODPR(RenderSurface, GetUsage, () const, TextureUsage), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int RenderSurface::GetMultiSample() const", "int GetMultiSample() const", AS_METHODPR(RenderSurface, GetMultiSample, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderSurface::GetAutoResolve() const", "bool GetAutoResolve() const", AS_METHODPR(RenderSurface, GetAutoResolve, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RenderSurface::GetNumViewports() const", "uint GetNumViewports() const", AS_METHODPR(RenderSurface, GetNumViewports, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RenderSurface::GetNumViewports() const", "uint get_numViewports() const", AS_METHODPR(RenderSurface, GetNumViewports, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Viewport* RenderSurface::GetViewport(unsigned index) const", "Viewport@+ GetViewport(uint) const", AS_METHODPR(RenderSurface, GetViewport, (unsigned) const, Viewport*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Viewport* RenderSurface::GetViewport(unsigned index) const", "Viewport@+ get_viewports(uint) const", AS_METHODPR(RenderSurface, GetViewport, (unsigned) const, Viewport*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurfaceUpdateMode RenderSurface::GetUpdateMode() const", "RenderSurfaceUpdateMode GetUpdateMode() const", AS_METHODPR(RenderSurface, GetUpdateMode, () const, RenderSurfaceUpdateMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurfaceUpdateMode RenderSurface::GetUpdateMode() const", "RenderSurfaceUpdateMode get_updateMode() const", AS_METHODPR(RenderSurface, GetUpdateMode, () const, RenderSurfaceUpdateMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* RenderSurface::GetLinkedRenderTarget() const", "RenderSurface@+ GetLinkedRenderTarget() const", AS_METHODPR(RenderSurface, GetLinkedRenderTarget, () const, RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* RenderSurface::GetLinkedRenderTarget() const", "RenderSurface@+ get_linkedRenderTarget() const", AS_METHODPR(RenderSurface, GetLinkedRenderTarget, () const, RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* RenderSurface::GetLinkedDepthStencil() const", "RenderSurface@+ GetLinkedDepthStencil() const", AS_METHODPR(RenderSurface, GetLinkedDepthStencil, () const, RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* RenderSurface::GetLinkedDepthStencil() const", "RenderSurface@+ get_linkedDepthStencil() const", AS_METHODPR(RenderSurface, GetLinkedDepthStencil, () const, RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderSurface::IsUpdateQueued() const", "bool IsUpdateQueued() const", AS_METHODPR(RenderSurface, IsUpdateQueued, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::ResetUpdateQueued()", "void ResetUpdateQueued()", AS_METHODPR(RenderSurface, ResetUpdateQueued, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* RenderSurface::GetParentTexture() const", "Texture@+ GetParentTexture() const", AS_METHODPR(RenderSurface, GetParentTexture, () const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* RenderSurface::GetParentTexture() const", "Texture@+ get_parentTexture() const", AS_METHODPR(RenderSurface, GetParentTexture, () const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RenderSurface::GetTarget() const", "uint GetTarget() const", AS_METHODPR(RenderSurface, GetTarget, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RenderSurface::GetRenderBuffer() const", "uint GetRenderBuffer() const", AS_METHODPR(RenderSurface, GetRenderBuffer, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderSurface::IsResolveDirty() const", "bool IsResolveDirty() const", AS_METHODPR(RenderSurface, IsResolveDirty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RenderSurface::IsResolveDirty() const", "bool get_resolveDirty() const", AS_METHODPR(RenderSurface, IsResolveDirty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RenderSurface::SetResolveDirty(bool enable)", "void SetResolveDirty(bool)", AS_METHODPR(RenderSurface, SetResolveDirty, (bool), void), AS_CALL_THISCALL));

    // void* RenderSurface::surface_
    // Not registered because have @nobind mark
    // void* RenderSurface::renderTargetView_
    // Not registered because have @nobind mark
    // unsigned RenderSurface::renderBuffer_
    // Not registered because have @nobind mark
    // void* RenderSurface::readOnlyView_
    // Not registered because have @nobind mark
    // unsigned RenderSurface::target_
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_RenderSurface
        REGISTER_MEMBERS_MANUAL_PART_RenderSurface();
    #endif
}

// struct RenderTargetInfo | File: ../Graphics/RenderPath.h
void CollectMembers_RenderTargetInfo(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("void RenderTargetInfo::Load(const XMLElement& element)", "void Load(const XMLElement&in)", AS_METHODPR(RenderTargetInfo, Load, (const XMLElement&), void), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("String RenderTargetInfo::name_", "String name", offsetof(RenderTargetInfo, name_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String RenderTargetInfo::tag_", "String tag", offsetof(RenderTargetInfo, tag_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned RenderTargetInfo::format_", "uint format", offsetof(RenderTargetInfo, format_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector2 RenderTargetInfo::size_", "Vector2 size", offsetof(RenderTargetInfo, size_)));
    members.fields_.Push(RegisterObjectPropertyArgs("RenderTargetSizeMode RenderTargetInfo::sizeMode_", "RenderTargetSizeMode sizeMode", offsetof(RenderTargetInfo, sizeMode_)));
    members.fields_.Push(RegisterObjectPropertyArgs("int RenderTargetInfo::multiSample_", "int multiSample", offsetof(RenderTargetInfo, multiSample_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderTargetInfo::autoResolve_", "bool autoResolve", offsetof(RenderTargetInfo, autoResolve_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderTargetInfo::enabled_", "bool enabled", offsetof(RenderTargetInfo, enabled_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderTargetInfo::cubemap_", "bool cubemap", offsetof(RenderTargetInfo, cubemap_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderTargetInfo::filtered_", "bool filtered", offsetof(RenderTargetInfo, filtered_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderTargetInfo::sRGB_", "bool sRGB", offsetof(RenderTargetInfo, sRGB_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool RenderTargetInfo::persistent_", "bool persistent", offsetof(RenderTargetInfo, persistent_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_RenderTargetInfo
        REGISTER_MEMBERS_MANUAL_PART_RenderTargetInfo();
    #endif
}

// class Renderer | File: ../Graphics/Renderer.h
void CollectMembers_Renderer(MemberCollection& members)
{
    CollectMembers_Object(members);

    // void Renderer::SetShadowMapFilter(Object* instance, ShadowMapFilter functionPtr)
    // Not registered because have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetNumViewports(unsigned num)", "void SetNumViewports(uint)", AS_METHODPR(Renderer, SetNumViewports, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetNumViewports(unsigned num)", "void set_numViewports(uint)", AS_METHODPR(Renderer, SetNumViewports, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetViewport(unsigned index, Viewport* viewport)", "void SetViewport(uint, Viewport@+)", AS_METHODPR(Renderer, SetViewport, (unsigned, Viewport*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetViewport(unsigned index, Viewport* viewport)", "void set_viewports(uint, Viewport@+)", AS_METHODPR(Renderer, SetViewport, (unsigned, Viewport*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetDefaultRenderPath(RenderPath* renderPath)", "void SetDefaultRenderPath(RenderPath@+)", AS_METHODPR(Renderer, SetDefaultRenderPath, (RenderPath*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetDefaultRenderPath(RenderPath* renderPath)", "void set_defaultRenderPath(RenderPath@+)", AS_METHODPR(Renderer, SetDefaultRenderPath, (RenderPath*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetDefaultRenderPath(XMLFile* xmlFile)", "void SetDefaultRenderPath(XMLFile@+)", AS_METHODPR(Renderer, SetDefaultRenderPath, (XMLFile*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetDefaultTechnique(Technique* technique)", "void SetDefaultTechnique(Technique@+)", AS_METHODPR(Renderer, SetDefaultTechnique, (Technique*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetDefaultTechnique(Technique* technique)", "void set_defaultTechnique(Technique@+)", AS_METHODPR(Renderer, SetDefaultTechnique, (Technique*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetHDRRendering(bool enable)", "void SetHDRRendering(bool)", AS_METHODPR(Renderer, SetHDRRendering, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetHDRRendering(bool enable)", "void set_hdrRendering(bool)", AS_METHODPR(Renderer, SetHDRRendering, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetSpecularLighting(bool enable)", "void SetSpecularLighting(bool)", AS_METHODPR(Renderer, SetSpecularLighting, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetSpecularLighting(bool enable)", "void set_specularLighting(bool)", AS_METHODPR(Renderer, SetSpecularLighting, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetTextureAnisotropy(int level)", "void SetTextureAnisotropy(int)", AS_METHODPR(Renderer, SetTextureAnisotropy, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetTextureAnisotropy(int level)", "void set_textureAnisotropy(int)", AS_METHODPR(Renderer, SetTextureAnisotropy, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetTextureFilterMode(TextureFilterMode mode)", "void SetTextureFilterMode(TextureFilterMode)", AS_METHODPR(Renderer, SetTextureFilterMode, (TextureFilterMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetTextureFilterMode(TextureFilterMode mode)", "void set_textureFilterMode(TextureFilterMode)", AS_METHODPR(Renderer, SetTextureFilterMode, (TextureFilterMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetTextureQuality(MaterialQuality quality)", "void SetTextureQuality(MaterialQuality)", AS_METHODPR(Renderer, SetTextureQuality, (MaterialQuality), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetTextureQuality(MaterialQuality quality)", "void set_textureQuality(MaterialQuality)", AS_METHODPR(Renderer, SetTextureQuality, (MaterialQuality), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMaterialQuality(MaterialQuality quality)", "void SetMaterialQuality(MaterialQuality)", AS_METHODPR(Renderer, SetMaterialQuality, (MaterialQuality), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMaterialQuality(MaterialQuality quality)", "void set_materialQuality(MaterialQuality)", AS_METHODPR(Renderer, SetMaterialQuality, (MaterialQuality), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetDrawShadows(bool enable)", "void SetDrawShadows(bool)", AS_METHODPR(Renderer, SetDrawShadows, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetDrawShadows(bool enable)", "void set_drawShadows(bool)", AS_METHODPR(Renderer, SetDrawShadows, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetShadowMapSize(int size)", "void SetShadowMapSize(int)", AS_METHODPR(Renderer, SetShadowMapSize, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetShadowMapSize(int size)", "void set_shadowMapSize(int)", AS_METHODPR(Renderer, SetShadowMapSize, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetShadowQuality(ShadowQuality quality)", "void SetShadowQuality(ShadowQuality)", AS_METHODPR(Renderer, SetShadowQuality, (ShadowQuality), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetShadowQuality(ShadowQuality quality)", "void set_shadowQuality(ShadowQuality)", AS_METHODPR(Renderer, SetShadowQuality, (ShadowQuality), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetShadowSoftness(float shadowSoftness)", "void SetShadowSoftness(float)", AS_METHODPR(Renderer, SetShadowSoftness, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetShadowSoftness(float shadowSoftness)", "void set_shadowSoftness(float)", AS_METHODPR(Renderer, SetShadowSoftness, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetVSMShadowParameters(float minVariance, float lightBleedingReduction)", "void SetVSMShadowParameters(float, float)", AS_METHODPR(Renderer, SetVSMShadowParameters, (float, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetVSMMultiSample(int multiSample)", "void SetVSMMultiSample(int)", AS_METHODPR(Renderer, SetVSMMultiSample, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetVSMMultiSample(int multiSample)", "void set_vsmMultiSample(int)", AS_METHODPR(Renderer, SetVSMMultiSample, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetReuseShadowMaps(bool enable)", "void SetReuseShadowMaps(bool)", AS_METHODPR(Renderer, SetReuseShadowMaps, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetReuseShadowMaps(bool enable)", "void set_reuseShadowMaps(bool)", AS_METHODPR(Renderer, SetReuseShadowMaps, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMaxShadowMaps(int shadowMaps)", "void SetMaxShadowMaps(int)", AS_METHODPR(Renderer, SetMaxShadowMaps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMaxShadowMaps(int shadowMaps)", "void set_maxShadowMaps(int)", AS_METHODPR(Renderer, SetMaxShadowMaps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetDynamicInstancing(bool enable)", "void SetDynamicInstancing(bool)", AS_METHODPR(Renderer, SetDynamicInstancing, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetDynamicInstancing(bool enable)", "void set_dynamicInstancing(bool)", AS_METHODPR(Renderer, SetDynamicInstancing, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetNumExtraInstancingBufferElements(int elements)", "void SetNumExtraInstancingBufferElements(int)", AS_METHODPR(Renderer, SetNumExtraInstancingBufferElements, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetNumExtraInstancingBufferElements(int elements)", "void set_numExtraInstancingBufferElements(int)", AS_METHODPR(Renderer, SetNumExtraInstancingBufferElements, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMinInstances(int instances)", "void SetMinInstances(int)", AS_METHODPR(Renderer, SetMinInstances, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMinInstances(int instances)", "void set_minInstances(int)", AS_METHODPR(Renderer, SetMinInstances, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMaxSortedInstances(int instances)", "void SetMaxSortedInstances(int)", AS_METHODPR(Renderer, SetMaxSortedInstances, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMaxSortedInstances(int instances)", "void set_maxSortedInstances(int)", AS_METHODPR(Renderer, SetMaxSortedInstances, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMaxOccluderTriangles(int triangles)", "void SetMaxOccluderTriangles(int)", AS_METHODPR(Renderer, SetMaxOccluderTriangles, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMaxOccluderTriangles(int triangles)", "void set_maxOccluderTriangles(int)", AS_METHODPR(Renderer, SetMaxOccluderTriangles, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetOcclusionBufferSize(int size)", "void SetOcclusionBufferSize(int)", AS_METHODPR(Renderer, SetOcclusionBufferSize, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetOcclusionBufferSize(int size)", "void set_occlusionBufferSize(int)", AS_METHODPR(Renderer, SetOcclusionBufferSize, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetOccluderSizeThreshold(float screenSize)", "void SetOccluderSizeThreshold(float)", AS_METHODPR(Renderer, SetOccluderSizeThreshold, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetOccluderSizeThreshold(float screenSize)", "void set_occluderSizeThreshold(float)", AS_METHODPR(Renderer, SetOccluderSizeThreshold, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetThreadedOcclusion(bool enable)", "void SetThreadedOcclusion(bool)", AS_METHODPR(Renderer, SetThreadedOcclusion, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetThreadedOcclusion(bool enable)", "void set_threadedOcclusion(bool)", AS_METHODPR(Renderer, SetThreadedOcclusion, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMobileShadowBiasMul(float mul)", "void SetMobileShadowBiasMul(float)", AS_METHODPR(Renderer, SetMobileShadowBiasMul, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMobileShadowBiasMul(float mul)", "void set_mobileShadowBiasMul(float)", AS_METHODPR(Renderer, SetMobileShadowBiasMul, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMobileShadowBiasAdd(float add)", "void SetMobileShadowBiasAdd(float)", AS_METHODPR(Renderer, SetMobileShadowBiasAdd, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMobileShadowBiasAdd(float add)", "void set_mobileShadowBiasAdd(float)", AS_METHODPR(Renderer, SetMobileShadowBiasAdd, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMobileNormalOffsetMul(float mul)", "void SetMobileNormalOffsetMul(float)", AS_METHODPR(Renderer, SetMobileNormalOffsetMul, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetMobileNormalOffsetMul(float mul)", "void set_mobileNormalOffsetMul(float)", AS_METHODPR(Renderer, SetMobileNormalOffsetMul, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::ReloadShaders()", "void ReloadShaders()", AS_METHODPR(Renderer, ReloadShaders, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::ApplyShadowMapFilter(View* view, Texture2D* shadowMap, float blurScale)", "void ApplyShadowMapFilter(View@+, Texture2D@+, float)", AS_METHODPR(Renderer, ApplyShadowMapFilter, (View*, Texture2D*, float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumViewports() const", "uint GetNumViewports() const", AS_METHODPR(Renderer, GetNumViewports, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumViewports() const", "uint get_numViewports() const", AS_METHODPR(Renderer, GetNumViewports, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Viewport* Renderer::GetViewport(unsigned index) const", "Viewport@+ GetViewport(uint) const", AS_METHODPR(Renderer, GetViewport, (unsigned) const, Viewport*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Viewport* Renderer::GetViewport(unsigned index) const", "Viewport@+ get_viewports(uint) const", AS_METHODPR(Renderer, GetViewport, (unsigned) const, Viewport*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Viewport* Renderer::GetViewportForScene(Scene* scene, unsigned index) const", "Viewport@+ GetViewportForScene(Scene@+, uint) const", AS_METHODPR(Renderer, GetViewportForScene, (Scene*, unsigned) const, Viewport*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderPath* Renderer::GetDefaultRenderPath() const", "RenderPath@+ GetDefaultRenderPath() const", AS_METHODPR(Renderer, GetDefaultRenderPath, () const, RenderPath*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderPath* Renderer::GetDefaultRenderPath() const", "RenderPath@+ get_defaultRenderPath() const", AS_METHODPR(Renderer, GetDefaultRenderPath, () const, RenderPath*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Technique* Renderer::GetDefaultTechnique() const", "Technique@+ GetDefaultTechnique() const", AS_METHODPR(Renderer, GetDefaultTechnique, () const, Technique*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Technique* Renderer::GetDefaultTechnique() const", "Technique@+ get_defaultTechnique() const", AS_METHODPR(Renderer, GetDefaultTechnique, () const, Technique*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetHDRRendering() const", "bool GetHDRRendering() const", AS_METHODPR(Renderer, GetHDRRendering, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetHDRRendering() const", "bool get_hdrRendering() const", AS_METHODPR(Renderer, GetHDRRendering, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetSpecularLighting() const", "bool GetSpecularLighting() const", AS_METHODPR(Renderer, GetSpecularLighting, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetSpecularLighting() const", "bool get_specularLighting() const", AS_METHODPR(Renderer, GetSpecularLighting, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetDrawShadows() const", "bool GetDrawShadows() const", AS_METHODPR(Renderer, GetDrawShadows, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetDrawShadows() const", "bool get_drawShadows() const", AS_METHODPR(Renderer, GetDrawShadows, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetTextureAnisotropy() const", "int GetTextureAnisotropy() const", AS_METHODPR(Renderer, GetTextureAnisotropy, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetTextureAnisotropy() const", "int get_textureAnisotropy() const", AS_METHODPR(Renderer, GetTextureAnisotropy, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureFilterMode Renderer::GetTextureFilterMode() const", "TextureFilterMode GetTextureFilterMode() const", AS_METHODPR(Renderer, GetTextureFilterMode, () const, TextureFilterMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureFilterMode Renderer::GetTextureFilterMode() const", "TextureFilterMode get_textureFilterMode() const", AS_METHODPR(Renderer, GetTextureFilterMode, () const, TextureFilterMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("MaterialQuality Renderer::GetTextureQuality() const", "MaterialQuality GetTextureQuality() const", AS_METHODPR(Renderer, GetTextureQuality, () const, MaterialQuality), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("MaterialQuality Renderer::GetTextureQuality() const", "MaterialQuality get_textureQuality() const", AS_METHODPR(Renderer, GetTextureQuality, () const, MaterialQuality), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("MaterialQuality Renderer::GetMaterialQuality() const", "MaterialQuality GetMaterialQuality() const", AS_METHODPR(Renderer, GetMaterialQuality, () const, MaterialQuality), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("MaterialQuality Renderer::GetMaterialQuality() const", "MaterialQuality get_materialQuality() const", AS_METHODPR(Renderer, GetMaterialQuality, () const, MaterialQuality), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetShadowMapSize() const", "int GetShadowMapSize() const", AS_METHODPR(Renderer, GetShadowMapSize, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetShadowMapSize() const", "int get_shadowMapSize() const", AS_METHODPR(Renderer, GetShadowMapSize, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ShadowQuality Renderer::GetShadowQuality() const", "ShadowQuality GetShadowQuality() const", AS_METHODPR(Renderer, GetShadowQuality, () const, ShadowQuality), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ShadowQuality Renderer::GetShadowQuality() const", "ShadowQuality get_shadowQuality() const", AS_METHODPR(Renderer, GetShadowQuality, () const, ShadowQuality), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Renderer::GetShadowSoftness() const", "float GetShadowSoftness() const", AS_METHODPR(Renderer, GetShadowSoftness, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Renderer::GetShadowSoftness() const", "float get_shadowSoftness() const", AS_METHODPR(Renderer, GetShadowSoftness, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector2 Renderer::GetVSMShadowParameters() const", "Vector2 GetVSMShadowParameters() const", AS_METHODPR(Renderer, GetVSMShadowParameters, () const, Vector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector2 Renderer::GetVSMShadowParameters() const", "Vector2 get_vsmShadowParameters() const", AS_METHODPR(Renderer, GetVSMShadowParameters, () const, Vector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetVSMMultiSample() const", "int GetVSMMultiSample() const", AS_METHODPR(Renderer, GetVSMMultiSample, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetVSMMultiSample() const", "int get_vsmMultiSample() const", AS_METHODPR(Renderer, GetVSMMultiSample, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetReuseShadowMaps() const", "bool GetReuseShadowMaps() const", AS_METHODPR(Renderer, GetReuseShadowMaps, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetReuseShadowMaps() const", "bool get_reuseShadowMaps() const", AS_METHODPR(Renderer, GetReuseShadowMaps, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetMaxShadowMaps() const", "int GetMaxShadowMaps() const", AS_METHODPR(Renderer, GetMaxShadowMaps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetMaxShadowMaps() const", "int get_maxShadowMaps() const", AS_METHODPR(Renderer, GetMaxShadowMaps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetDynamicInstancing() const", "bool GetDynamicInstancing() const", AS_METHODPR(Renderer, GetDynamicInstancing, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetDynamicInstancing() const", "bool get_dynamicInstancing() const", AS_METHODPR(Renderer, GetDynamicInstancing, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetNumExtraInstancingBufferElements() const", "int GetNumExtraInstancingBufferElements() const", AS_METHODPR(Renderer, GetNumExtraInstancingBufferElements, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetNumExtraInstancingBufferElements() const", "int get_numExtraInstancingBufferElements() const", AS_METHODPR(Renderer, GetNumExtraInstancingBufferElements, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetMinInstances() const", "int GetMinInstances() const", AS_METHODPR(Renderer, GetMinInstances, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetMinInstances() const", "int get_minInstances() const", AS_METHODPR(Renderer, GetMinInstances, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetMaxSortedInstances() const", "int GetMaxSortedInstances() const", AS_METHODPR(Renderer, GetMaxSortedInstances, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetMaxSortedInstances() const", "int get_maxSortedInstances() const", AS_METHODPR(Renderer, GetMaxSortedInstances, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetMaxOccluderTriangles() const", "int GetMaxOccluderTriangles() const", AS_METHODPR(Renderer, GetMaxOccluderTriangles, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetMaxOccluderTriangles() const", "int get_maxOccluderTriangles() const", AS_METHODPR(Renderer, GetMaxOccluderTriangles, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetOcclusionBufferSize() const", "int GetOcclusionBufferSize() const", AS_METHODPR(Renderer, GetOcclusionBufferSize, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Renderer::GetOcclusionBufferSize() const", "int get_occlusionBufferSize() const", AS_METHODPR(Renderer, GetOcclusionBufferSize, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Renderer::GetOccluderSizeThreshold() const", "float GetOccluderSizeThreshold() const", AS_METHODPR(Renderer, GetOccluderSizeThreshold, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Renderer::GetOccluderSizeThreshold() const", "float get_occluderSizeThreshold() const", AS_METHODPR(Renderer, GetOccluderSizeThreshold, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetThreadedOcclusion() const", "bool GetThreadedOcclusion() const", AS_METHODPR(Renderer, GetThreadedOcclusion, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::GetThreadedOcclusion() const", "bool get_threadedOcclusion() const", AS_METHODPR(Renderer, GetThreadedOcclusion, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Renderer::GetMobileShadowBiasMul() const", "float GetMobileShadowBiasMul() const", AS_METHODPR(Renderer, GetMobileShadowBiasMul, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Renderer::GetMobileShadowBiasMul() const", "float get_mobileShadowBiasMul() const", AS_METHODPR(Renderer, GetMobileShadowBiasMul, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Renderer::GetMobileShadowBiasAdd() const", "float GetMobileShadowBiasAdd() const", AS_METHODPR(Renderer, GetMobileShadowBiasAdd, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Renderer::GetMobileShadowBiasAdd() const", "float get_mobileShadowBiasAdd() const", AS_METHODPR(Renderer, GetMobileShadowBiasAdd, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Renderer::GetMobileNormalOffsetMul() const", "float GetMobileNormalOffsetMul() const", AS_METHODPR(Renderer, GetMobileNormalOffsetMul, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Renderer::GetMobileNormalOffsetMul() const", "float get_mobileNormalOffsetMul() const", AS_METHODPR(Renderer, GetMobileNormalOffsetMul, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumViews() const", "uint GetNumViews() const", AS_METHODPR(Renderer, GetNumViews, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumViews() const", "uint get_numViews() const", AS_METHODPR(Renderer, GetNumViews, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumPrimitives() const", "uint GetNumPrimitives() const", AS_METHODPR(Renderer, GetNumPrimitives, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumPrimitives() const", "uint get_numPrimitives() const", AS_METHODPR(Renderer, GetNumPrimitives, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumBatches() const", "uint GetNumBatches() const", AS_METHODPR(Renderer, GetNumBatches, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumBatches() const", "uint get_numBatches() const", AS_METHODPR(Renderer, GetNumBatches, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumGeometries(bool allViews=false) const", "uint GetNumGeometries(bool = false) const", AS_METHODPR(Renderer, GetNumGeometries, (bool) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumGeometries(bool allViews=false) const", "uint get_numGeometries(bool = false) const", AS_METHODPR(Renderer, GetNumGeometries, (bool) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumLights(bool allViews=false) const", "uint GetNumLights(bool = false) const", AS_METHODPR(Renderer, GetNumLights, (bool) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumLights(bool allViews=false) const", "uint get_numLights(bool = false) const", AS_METHODPR(Renderer, GetNumLights, (bool) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumShadowMaps(bool allViews=false) const", "uint GetNumShadowMaps(bool = false) const", AS_METHODPR(Renderer, GetNumShadowMaps, (bool) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumShadowMaps(bool allViews=false) const", "uint get_numShadowMaps(bool = false) const", AS_METHODPR(Renderer, GetNumShadowMaps, (bool) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumOccluders(bool allViews=false) const", "uint GetNumOccluders(bool = false) const", AS_METHODPR(Renderer, GetNumOccluders, (bool) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Renderer::GetNumOccluders(bool allViews=false) const", "uint get_numOccluders(bool = false) const", AS_METHODPR(Renderer, GetNumOccluders, (bool) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Zone* Renderer::GetDefaultZone() const", "Zone@+ GetDefaultZone() const", AS_METHODPR(Renderer, GetDefaultZone, () const, Zone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Zone* Renderer::GetDefaultZone() const", "Zone@+ get_defaultZone() const", AS_METHODPR(Renderer, GetDefaultZone, () const, Zone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* Renderer::GetDefaultMaterial() const", "Material@+ GetDefaultMaterial() const", AS_METHODPR(Renderer, GetDefaultMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* Renderer::GetDefaultMaterial() const", "Material@+ get_defaultMaterial() const", AS_METHODPR(Renderer, GetDefaultMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture2D* Renderer::GetDefaultLightRamp() const", "Texture2D@+ GetDefaultLightRamp() const", AS_METHODPR(Renderer, GetDefaultLightRamp, () const, Texture2D*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture2D* Renderer::GetDefaultLightRamp() const", "Texture2D@+ get_defaultLightRamp() const", AS_METHODPR(Renderer, GetDefaultLightRamp, () const, Texture2D*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture2D* Renderer::GetDefaultLightSpot() const", "Texture2D@+ GetDefaultLightSpot() const", AS_METHODPR(Renderer, GetDefaultLightSpot, () const, Texture2D*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture2D* Renderer::GetDefaultLightSpot() const", "Texture2D@+ get_defaultLightSpot() const", AS_METHODPR(Renderer, GetDefaultLightSpot, () const, Texture2D*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureCube* Renderer::GetFaceSelectCubeMap() const", "TextureCube@+ GetFaceSelectCubeMap() const", AS_METHODPR(Renderer, GetFaceSelectCubeMap, () const, TextureCube*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureCube* Renderer::GetIndirectionCubeMap() const", "TextureCube@+ GetIndirectionCubeMap() const", AS_METHODPR(Renderer, GetIndirectionCubeMap, () const, TextureCube*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VertexBuffer* Renderer::GetInstancingBuffer() const", "VertexBuffer@+ GetInstancingBuffer() const", AS_METHODPR(Renderer, GetInstancingBuffer, () const, VertexBuffer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const FrameInfo& Renderer::GetFrameInfo() const", "const FrameInfo& GetFrameInfo() const", AS_METHODPR(Renderer, GetFrameInfo, () const, const FrameInfo&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::Update(float timeStep)", "void Update(float)", AS_METHODPR(Renderer, Update, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::Render()", "void Render()", AS_METHODPR(Renderer, Render, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::DrawDebugGeometry(bool depthTest)", "void DrawDebugGeometry(bool)", AS_METHODPR(Renderer, DrawDebugGeometry, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::QueueRenderSurface(RenderSurface* renderTarget)", "void QueueRenderSurface(RenderSurface@+)", AS_METHODPR(Renderer, QueueRenderSurface, (RenderSurface*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::QueueViewport(RenderSurface* renderTarget, Viewport* viewport)", "void QueueViewport(RenderSurface@+, Viewport@+)", AS_METHODPR(Renderer, QueueViewport, (RenderSurface*, Viewport*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Geometry* Renderer::GetLightGeometry(Light* light)", "Geometry@+ GetLightGeometry(Light@+)", AS_METHODPR(Renderer, GetLightGeometry, (Light*), Geometry*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Geometry* Renderer::GetQuadGeometry()", "Geometry@+ GetQuadGeometry()", AS_METHODPR(Renderer, GetQuadGeometry, (), Geometry*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture2D* Renderer::GetShadowMap(Light* light, Camera* camera, unsigned viewWidth, unsigned viewHeight)", "Texture2D@+ GetShadowMap(Light@+, Camera@+, uint, uint)", AS_METHODPR(Renderer, GetShadowMap, (Light*, Camera*, unsigned, unsigned), Texture2D*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Renderer::GetScreenBuffer(int width, int height, unsigned format, int multiSample, bool autoResolve, bool cubemap, bool filtered, bool srgb, unsigned persistentKey=0)", "Texture@+ GetScreenBuffer(int, int, uint, int, bool, bool, bool, bool, uint = 0)", AS_METHODPR(Renderer, GetScreenBuffer, (int, int, unsigned, int, bool, bool, bool, bool, unsigned), Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* Renderer::GetDepthStencil(int width, int height, int multiSample, bool autoResolve)", "RenderSurface@+ GetDepthStencil(int, int, int, bool)", AS_METHODPR(Renderer, GetDepthStencil, (int, int, int, bool), RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("OcclusionBuffer* Renderer::GetOcclusionBuffer(Camera* camera)", "OcclusionBuffer@+ GetOcclusionBuffer(Camera@+)", AS_METHODPR(Renderer, GetOcclusionBuffer, (Camera*), OcclusionBuffer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Camera* Renderer::GetShadowCamera()", "Camera@+ GetShadowCamera()", AS_METHODPR(Renderer, GetShadowCamera, (), Camera*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::StorePreparedView(View* view, Camera* camera)", "void StorePreparedView(View@+, Camera@+)", AS_METHODPR(Renderer, StorePreparedView, (View*, Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("View* Renderer::GetPreparedView(Camera* camera)", "View@+ GetPreparedView(Camera@+)", AS_METHODPR(Renderer, GetPreparedView, (Camera*), View*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetBatchShaders(Batch& batch, Technique* tech, bool allowShadows, const BatchQueue& queue)", "void SetBatchShaders(Batch&, Technique@+, bool, const BatchQueue&in)", AS_METHODPR(Renderer, SetBatchShaders, (Batch&, Technique*, bool, const BatchQueue&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetLightVolumeBatchShaders(Batch& batch, Camera* camera, const String& vsName, const String& psName, const String& vsDefines, const String& psDefines)", "void SetLightVolumeBatchShaders(Batch&, Camera@+, const String&in, const String&in, const String&in, const String&in)", AS_METHODPR(Renderer, SetLightVolumeBatchShaders, (Batch&, Camera*, const String&, const String&, const String&, const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetCullMode(CullMode mode, Camera* camera)", "void SetCullMode(CullMode, Camera@+)", AS_METHODPR(Renderer, SetCullMode, (CullMode, Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Renderer::ResizeInstancingBuffer(unsigned numInstances)", "bool ResizeInstancingBuffer(uint)", AS_METHODPR(Renderer, ResizeInstancingBuffer, (unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::OptimizeLightByScissor(Light* light, Camera* camera)", "void OptimizeLightByScissor(Light@+, Camera@+)", AS_METHODPR(Renderer, OptimizeLightByScissor, (Light*, Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::OptimizeLightByStencil(Light* light, Camera* camera)", "void OptimizeLightByStencil(Light@+, Camera@+)", AS_METHODPR(Renderer, OptimizeLightByStencil, (Light*, Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Rect& Renderer::GetLightScissor(Light* light, Camera* camera)", "const Rect& GetLightScissor(Light@+, Camera@+)", AS_METHODPR(Renderer, GetLightScissor, (Light*, Camera*), const Rect&), AS_CALL_THISCALL));

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static View* Renderer::GetActualView(View* view)", "View@+ GetActualView(View@+)", AS_FUNCTIONPR(Renderer::GetActualView, (View*), View*), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Renderer
        REGISTER_MEMBERS_MANUAL_PART_Renderer();
    #endif
}

// class RibbonTrail | File: ../Graphics/RibbonTrail.h
void CollectMembers_RibbonTrail(MemberCollection& members)
{
    CollectMembers_Drawable(members);

    Remove(members.methods_, "virtual UpdateGeometryType Drawable::GetUpdateGeometryType()");
    Remove(members.methods_, "virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)");
    Remove(members.methods_, "virtual void Drawable::Update(const FrameInfo& frame)");
    Remove(members.methods_, "virtual void Drawable::UpdateBatches(const FrameInfo& frame)");
    Remove(members.methods_, "virtual void Drawable::UpdateGeometry(const FrameInfo& frame)");
    Remove(members.methods_, "void Drawable::OnSetEnabled() override");

    Remove(members.staticMethods_, "static void Drawable::RegisterObject(Context* context)");

    // void RibbonTrail::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(RibbonTrail, OnSetEnabled, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::Update(const FrameInfo& frame) override", "void Update(const FrameInfo&in)", AS_METHODPR(RibbonTrail, Update, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(RibbonTrail, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::UpdateGeometry(const FrameInfo& frame) override", "void UpdateGeometry(const FrameInfo&in)", AS_METHODPR(RibbonTrail, UpdateGeometry, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("UpdateGeometryType RibbonTrail::GetUpdateGeometryType() override", "UpdateGeometryType GetUpdateGeometryType()", AS_METHODPR(RibbonTrail, GetUpdateGeometryType, (), UpdateGeometryType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetMaterial(Material* material)", "void SetMaterial(Material@+)", AS_METHODPR(RibbonTrail, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetMaterial(Material* material)", "void set_material(Material@+)", AS_METHODPR(RibbonTrail, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetMaterialAttr(const ResourceRef& value)", "void SetMaterialAttr(const ResourceRef&in)", AS_METHODPR(RibbonTrail, SetMaterialAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetVertexDistance(float length)", "void SetVertexDistance(float)", AS_METHODPR(RibbonTrail, SetVertexDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetVertexDistance(float length)", "void set_vertexDistance(float)", AS_METHODPR(RibbonTrail, SetVertexDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetWidth(float width)", "void SetWidth(float)", AS_METHODPR(RibbonTrail, SetWidth, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetWidth(float width)", "void set_width(float)", AS_METHODPR(RibbonTrail, SetWidth, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetStartColor(const Color& color)", "void SetStartColor(const Color&in)", AS_METHODPR(RibbonTrail, SetStartColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetStartColor(const Color& color)", "void set_startColor(const Color&in)", AS_METHODPR(RibbonTrail, SetStartColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetEndColor(const Color& color)", "void SetEndColor(const Color&in)", AS_METHODPR(RibbonTrail, SetEndColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetEndColor(const Color& color)", "void set_endColor(const Color&in)", AS_METHODPR(RibbonTrail, SetEndColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetStartScale(float startScale)", "void SetStartScale(float)", AS_METHODPR(RibbonTrail, SetStartScale, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetStartScale(float startScale)", "void set_startScale(float)", AS_METHODPR(RibbonTrail, SetStartScale, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetEndScale(float endScale)", "void SetEndScale(float)", AS_METHODPR(RibbonTrail, SetEndScale, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetEndScale(float endScale)", "void set_endScale(float)", AS_METHODPR(RibbonTrail, SetEndScale, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetTrailType(TrailType type)", "void SetTrailType(TrailType)", AS_METHODPR(RibbonTrail, SetTrailType, (TrailType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetTrailType(TrailType type)", "void set_trailType(TrailType)", AS_METHODPR(RibbonTrail, SetTrailType, (TrailType), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetBaseVelocity(const Vector3& baseVelocity)", "void SetBaseVelocity(const Vector3&in)", AS_METHODPR(RibbonTrail, SetBaseVelocity, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetBaseVelocity(const Vector3& baseVelocity)", "void set_baseVelocity(const Vector3&in)", AS_METHODPR(RibbonTrail, SetBaseVelocity, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetSorted(bool enable)", "void SetSorted(bool)", AS_METHODPR(RibbonTrail, SetSorted, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetSorted(bool enable)", "void set_sorted(bool)", AS_METHODPR(RibbonTrail, SetSorted, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetLifetime(float time)", "void SetLifetime(float)", AS_METHODPR(RibbonTrail, SetLifetime, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetLifetime(float time)", "void set_lifetime(float)", AS_METHODPR(RibbonTrail, SetLifetime, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetEmitting(bool emitting)", "void SetEmitting(bool)", AS_METHODPR(RibbonTrail, SetEmitting, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetEmitting(bool emitting)", "void set_emitting(bool)", AS_METHODPR(RibbonTrail, SetEmitting, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetUpdateInvisible(bool enable)", "void SetUpdateInvisible(bool)", AS_METHODPR(RibbonTrail, SetUpdateInvisible, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetUpdateInvisible(bool enable)", "void set_updateInvisible(bool)", AS_METHODPR(RibbonTrail, SetUpdateInvisible, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetTailColumn(unsigned tailColumn)", "void SetTailColumn(uint)", AS_METHODPR(RibbonTrail, SetTailColumn, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetTailColumn(unsigned tailColumn)", "void set_tailColumn(uint)", AS_METHODPR(RibbonTrail, SetTailColumn, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetAnimationLodBias(float bias)", "void SetAnimationLodBias(float)", AS_METHODPR(RibbonTrail, SetAnimationLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::SetAnimationLodBias(float bias)", "void set_animationLodBias(float)", AS_METHODPR(RibbonTrail, SetAnimationLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void RibbonTrail::Commit()", "void Commit()", AS_METHODPR(RibbonTrail, Commit, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* RibbonTrail::GetMaterial() const", "Material@+ GetMaterial() const", AS_METHODPR(RibbonTrail, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* RibbonTrail::GetMaterial() const", "Material@+ get_material() const", AS_METHODPR(RibbonTrail, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef RibbonTrail::GetMaterialAttr() const", "ResourceRef GetMaterialAttr() const", AS_METHODPR(RibbonTrail, GetMaterialAttr, () const, ResourceRef), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetVertexDistance() const", "float GetVertexDistance() const", AS_METHODPR(RibbonTrail, GetVertexDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetVertexDistance() const", "float get_vertexDistance() const", AS_METHODPR(RibbonTrail, GetVertexDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetWidth() const", "float GetWidth() const", AS_METHODPR(RibbonTrail, GetWidth, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetWidth() const", "float get_width() const", AS_METHODPR(RibbonTrail, GetWidth, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& RibbonTrail::GetStartColor() const", "const Color& GetStartColor() const", AS_METHODPR(RibbonTrail, GetStartColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& RibbonTrail::GetStartColor() const", "const Color& get_startColor() const", AS_METHODPR(RibbonTrail, GetStartColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& RibbonTrail::GetEndColor() const", "const Color& GetEndColor() const", AS_METHODPR(RibbonTrail, GetEndColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& RibbonTrail::GetEndColor() const", "const Color& get_endColor() const", AS_METHODPR(RibbonTrail, GetEndColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetStartScale() const", "float GetStartScale() const", AS_METHODPR(RibbonTrail, GetStartScale, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetStartScale() const", "float get_startScale() const", AS_METHODPR(RibbonTrail, GetStartScale, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetEndScale() const", "float GetEndScale() const", AS_METHODPR(RibbonTrail, GetEndScale, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetEndScale() const", "float get_endScale() const", AS_METHODPR(RibbonTrail, GetEndScale, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RibbonTrail::IsSorted() const", "bool IsSorted() const", AS_METHODPR(RibbonTrail, IsSorted, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RibbonTrail::IsSorted() const", "bool get_sorted() const", AS_METHODPR(RibbonTrail, IsSorted, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetLifetime() const", "float GetLifetime() const", AS_METHODPR(RibbonTrail, GetLifetime, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetLifetime() const", "float get_lifetime() const", AS_METHODPR(RibbonTrail, GetLifetime, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetAnimationLodBias() const", "float GetAnimationLodBias() const", AS_METHODPR(RibbonTrail, GetAnimationLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float RibbonTrail::GetAnimationLodBias() const", "float get_animationLodBias() const", AS_METHODPR(RibbonTrail, GetAnimationLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TrailType RibbonTrail::GetTrailType() const", "TrailType GetTrailType() const", AS_METHODPR(RibbonTrail, GetTrailType, () const, TrailType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TrailType RibbonTrail::GetTrailType() const", "TrailType get_trailType() const", AS_METHODPR(RibbonTrail, GetTrailType, () const, TrailType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& RibbonTrail::GetBaseVelocity() const", "const Vector3& GetBaseVelocity() const", AS_METHODPR(RibbonTrail, GetBaseVelocity, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& RibbonTrail::GetBaseVelocity() const", "const Vector3& get_baseVelocity() const", AS_METHODPR(RibbonTrail, GetBaseVelocity, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RibbonTrail::GetTailColumn() const", "uint GetTailColumn() const", AS_METHODPR(RibbonTrail, GetTailColumn, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned RibbonTrail::GetTailColumn() const", "uint get_tailColumn() const", AS_METHODPR(RibbonTrail, GetTailColumn, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RibbonTrail::IsEmitting() const", "bool IsEmitting() const", AS_METHODPR(RibbonTrail, IsEmitting, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RibbonTrail::IsEmitting() const", "bool get_emitting() const", AS_METHODPR(RibbonTrail, IsEmitting, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RibbonTrail::GetUpdateInvisible() const", "bool GetUpdateInvisible() const", AS_METHODPR(RibbonTrail, GetUpdateInvisible, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool RibbonTrail::GetUpdateInvisible() const", "bool get_updateInvisible() const", AS_METHODPR(RibbonTrail, GetUpdateInvisible, () const, bool), AS_CALL_THISCALL));

    // static void RibbonTrail::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_RibbonTrail
        REGISTER_MEMBERS_MANUAL_PART_RibbonTrail();
    #endif
}

// struct ScenePassInfo | File: ../Graphics/View.h
void CollectMembers_ScenePassInfo(MemberCollection& members)
{
    // BatchQueue* ScenePassInfo::batchQueue_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ScenePassInfo::passIndex_", "uint passIndex", offsetof(ScenePassInfo, passIndex_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool ScenePassInfo::allowInstancing_", "bool allowInstancing", offsetof(ScenePassInfo, allowInstancing_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool ScenePassInfo::markToStencil_", "bool markToStencil", offsetof(ScenePassInfo, markToStencil_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool ScenePassInfo::vertexLights_", "bool vertexLights", offsetof(ScenePassInfo, vertexLights_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ScenePassInfo
        REGISTER_MEMBERS_MANUAL_PART_ScenePassInfo();
    #endif
}

// struct ScratchBuffer | File: ../Graphics/Graphics.h
void CollectMembers_ScratchBuffer(MemberCollection& members)
{
    // SharedArrayPtr<unsigned char> ScratchBuffer::data_
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ScratchBuffer::size_", "uint size", offsetof(ScratchBuffer, size_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool ScratchBuffer::reserved_", "bool reserved", offsetof(ScratchBuffer, reserved_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ScratchBuffer
        REGISTER_MEMBERS_MANUAL_PART_ScratchBuffer();
    #endif
}

// struct ScreenModeParams | File: ../Graphics/Graphics.h
void CollectMembers_ScreenModeParams(MemberCollection& members)
{
    // bool ScreenModeParams::operator!=(const ScreenModeParams& rhs) const
    // Only operator== is needed

    members.methods_.Push(RegisterObjectMethodArgs("bool ScreenModeParams::EqualsExceptVSync(const ScreenModeParams& rhs) const", "bool EqualsExceptVSync(const ScreenModeParams&in) const", AS_METHODPR(ScreenModeParams, EqualsExceptVSync, (const ScreenModeParams&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ScreenModeParams::operator==(const ScreenModeParams& rhs) const", "bool opEquals(const ScreenModeParams&in) const", AS_METHODPR(ScreenModeParams, operator==, (const ScreenModeParams&) const, bool), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("bool ScreenModeParams::fullscreen_", "bool fullscreen", offsetof(ScreenModeParams, fullscreen_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool ScreenModeParams::borderless_", "bool borderless", offsetof(ScreenModeParams, borderless_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool ScreenModeParams::resizable_", "bool resizable", offsetof(ScreenModeParams, resizable_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool ScreenModeParams::highDPI_", "bool highDPI", offsetof(ScreenModeParams, highDPI_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool ScreenModeParams::vsync_", "bool vsync", offsetof(ScreenModeParams, vsync_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool ScreenModeParams::tripleBuffer_", "bool tripleBuffer", offsetof(ScreenModeParams, tripleBuffer_)));
    members.fields_.Push(RegisterObjectPropertyArgs("int ScreenModeParams::multiSample_", "int multiSample", offsetof(ScreenModeParams, multiSample_)));
    members.fields_.Push(RegisterObjectPropertyArgs("int ScreenModeParams::monitor_", "int monitor", offsetof(ScreenModeParams, monitor_)));
    members.fields_.Push(RegisterObjectPropertyArgs("int ScreenModeParams::refreshRate_", "int refreshRate", offsetof(ScreenModeParams, refreshRate_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ScreenModeParams
        REGISTER_MEMBERS_MANUAL_PART_ScreenModeParams();
    #endif
}

// class Shader | File: ../Graphics/Shader.h
void CollectMembers_Shader(MemberCollection& members)
{
    CollectMembers_Resource(members);

    Remove(members.methods_, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::EndLoad()");

    // ShaderVariation* Shader::GetVariation(ShaderType type, const char* defines)
    // Error: type "const char*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool Shader::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Shader, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Shader::EndLoad() override", "bool EndLoad()", AS_METHODPR(Shader, EndLoad, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ShaderVariation* Shader::GetVariation(ShaderType type, const String& defines)", "ShaderVariation@+ GetVariation(ShaderType, const String&in)", AS_METHODPR(Shader, GetVariation, (ShaderType, const String&), ShaderVariation*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Shader::GetSourceCode(ShaderType type) const", "const String& GetSourceCode(ShaderType) const", AS_METHODPR(Shader, GetSourceCode, (ShaderType) const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Shader::GetTimeStamp() const", "uint GetTimeStamp() const", AS_METHODPR(Shader, GetTimeStamp, () const, unsigned), AS_CALL_THISCALL));

    // static void Shader::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Shader
        REGISTER_MEMBERS_MANUAL_PART_Shader();
    #endif
}

// struct ShaderParameter | File: ../Graphics/ShaderVariation.h
void CollectMembers_ShaderParameter(MemberCollection& members)
{
    // union ShaderParameter::@4 Urho3D::ShaderParameter::@5
    // Error: type "union Urho3D::ShaderParameter::@4" can not automatically bind
    // union ShaderParameter::@6 Urho3D::ShaderParameter::@7
    // Error: type "union Urho3D::ShaderParameter::@6" can not automatically bind
    // ConstantBuffer* ShaderParameter::bufferPtr_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("ShaderType ShaderParameter::type_", "ShaderType type", offsetof(ShaderParameter, type_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String ShaderParameter::name_", "String name", offsetof(ShaderParameter, name_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ShaderParameter::offset_", "uint offset", offsetof(ShaderParameter, offset_)));
    members.fields_.Push(RegisterObjectPropertyArgs("int ShaderParameter::location_", "int location", offsetof(ShaderParameter, location_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ShaderParameter::register_", "uint register", offsetof(ShaderParameter, register_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ShaderParameter::size_", "uint size", offsetof(ShaderParameter, size_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ShaderParameter::glType_", "uint glType", offsetof(ShaderParameter, glType_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ShaderParameter::regCount_", "uint regCount", offsetof(ShaderParameter, regCount_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ShaderParameter::buffer_", "uint buffer", offsetof(ShaderParameter, buffer_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ShaderParameter
        REGISTER_MEMBERS_MANUAL_PART_ShaderParameter();
    #endif
}

// class ShaderParameterAnimationInfo | File: ../Graphics/Material.h
void CollectMembers_ShaderParameterAnimationInfo(MemberCollection& members)
{
    CollectMembers_ValueAnimationInfo(members);

    members.methods_.Push(RegisterObjectMethodArgs("const String& ShaderParameterAnimationInfo::GetName() const", "const String& GetName() const", AS_METHODPR(ShaderParameterAnimationInfo, GetName, () const, const String&), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ShaderParameterAnimationInfo
        REGISTER_MEMBERS_MANUAL_PART_ShaderParameterAnimationInfo();
    #endif
}

// class ShaderPrecache | File: ../Graphics/ShaderPrecache.h
void CollectMembers_ShaderPrecache(MemberCollection& members)
{
    CollectMembers_Object(members);

    members.methods_.Push(RegisterObjectMethodArgs("void ShaderPrecache::StoreShaders(ShaderVariation* vs, ShaderVariation* ps)", "void StoreShaders(ShaderVariation@+, ShaderVariation@+)", AS_METHODPR(ShaderPrecache, StoreShaders, (ShaderVariation*, ShaderVariation*), void), AS_CALL_THISCALL));

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static void ShaderPrecache::LoadShaders(Graphics* graphics, Deserializer& source)", "void LoadShaders(Graphics@+, Deserializer&)", AS_FUNCTIONPR(ShaderPrecache::LoadShaders, (Graphics*, Deserializer&), void), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ShaderPrecache
        REGISTER_MEMBERS_MANUAL_PART_ShaderPrecache();
    #endif
}

// class ShaderVariation | File: ../Graphics/ShaderVariation.h
void CollectMembers_ShaderVariation(MemberCollection& members)
{
    CollectMembers_RefCounted(members);
    CollectMembers_GPUObject(members);

    Remove(members.methods_, "virtual void GPUObject::OnDeviceLost()");
    Remove(members.methods_, "virtual void GPUObject::Release()");

    // const PODVector<unsigned char>& ShaderVariation::GetByteCode() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // const unsigned* ShaderVariation::GetConstantBufferSizes() const
    // Error: type "const unsigned*" can not automatically bind
    // const HashMap<StringHash, ShaderParameter>& ShaderVariation::GetParameters() const
    // Error: type "const HashMap<StringHash, ShaderParameter>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void ShaderVariation::OnDeviceLost() override", "void OnDeviceLost()", AS_METHODPR(ShaderVariation, OnDeviceLost, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ShaderVariation::Release() override", "void Release()", AS_METHODPR(ShaderVariation, Release, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ShaderVariation::Create()", "bool Create()", AS_METHODPR(ShaderVariation, Create, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ShaderVariation::SetName(const String& name)", "void SetName(const String&in)", AS_METHODPR(ShaderVariation, SetName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ShaderVariation::SetDefines(const String& defines)", "void SetDefines(const String&in)", AS_METHODPR(ShaderVariation, SetDefines, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Shader* ShaderVariation::GetOwner() const", "Shader@+ GetOwner() const", AS_METHODPR(ShaderVariation, GetOwner, () const, Shader*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ShaderType ShaderVariation::GetShaderType() const", "ShaderType GetShaderType() const", AS_METHODPR(ShaderVariation, GetShaderType, () const, ShaderType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& ShaderVariation::GetName() const", "const String& GetName() const", AS_METHODPR(ShaderVariation, GetName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String ShaderVariation::GetFullName() const", "String GetFullName() const", AS_METHODPR(ShaderVariation, GetFullName, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ShaderVariation::HasParameter(StringHash param) const", "bool HasParameter(StringHash) const", AS_METHODPR(ShaderVariation, HasParameter, (StringHash) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool ShaderVariation::HasTextureUnit(TextureUnit unit) const", "bool HasTextureUnit(TextureUnit) const", AS_METHODPR(ShaderVariation, HasTextureUnit, (TextureUnit) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned long long ShaderVariation::GetElementHash() const", "uint64 GetElementHash() const", AS_METHODPR(ShaderVariation, GetElementHash, () const, unsigned long long), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& ShaderVariation::GetDefines() const", "const String& GetDefines() const", AS_METHODPR(ShaderVariation, GetDefines, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& ShaderVariation::GetCompilerOutput() const", "const String& GetCompilerOutput() const", AS_METHODPR(ShaderVariation, GetCompilerOutput, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& ShaderVariation::GetDefinesClipPlane()", "const String& GetDefinesClipPlane()", AS_METHODPR(ShaderVariation, GetDefinesClipPlane, (), const String&), AS_CALL_THISCALL));

    // static const char* ShaderVariation::elementSemanticNames[]
    // Error: type "const char*" can not automatically bind

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ShaderVariation
        REGISTER_MEMBERS_MANUAL_PART_ShaderVariation();
    #endif
}

// struct ShadowBatchQueue | File: ../Graphics/Batch.h
void CollectMembers_ShadowBatchQueue(MemberCollection& members)
{
    // Camera* ShadowBatchQueue::shadowCamera_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("IntRect ShadowBatchQueue::shadowViewport_", "IntRect shadowViewport", offsetof(ShadowBatchQueue, shadowViewport_)));
    members.fields_.Push(RegisterObjectPropertyArgs("BatchQueue ShadowBatchQueue::shadowBatches_", "BatchQueue shadowBatches", offsetof(ShadowBatchQueue, shadowBatches_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float ShadowBatchQueue::nearSplit_", "float nearSplit", offsetof(ShadowBatchQueue, nearSplit_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float ShadowBatchQueue::farSplit_", "float farSplit", offsetof(ShadowBatchQueue, farSplit_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ShadowBatchQueue
        REGISTER_MEMBERS_MANUAL_PART_ShadowBatchQueue();
    #endif
}

// class Skeleton | File: ../Graphics/Skeleton.h
void CollectMembers_Skeleton(MemberCollection& members)
{
    // Bone* Skeleton::GetBone(const char* name)
    // Error: type "const char*" can not automatically bind
    // const Vector<Bone>& Skeleton::GetBones() const
    // Error: type "const Vector<Bone>&" can not automatically bind
    // Vector<Bone>& Skeleton::GetModifiableBones()
    // Error: type "Vector<Bone>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool Skeleton::Load(Deserializer& source)", "bool Load(Deserializer&)", AS_METHODPR(Skeleton, Load, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Skeleton::Save(Serializer& dest) const", "bool Save(Serializer&) const", AS_METHODPR(Skeleton, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Skeleton::Define(const Skeleton& src)", "void Define(const Skeleton&in)", AS_METHODPR(Skeleton, Define, (const Skeleton&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Skeleton::SetRootBoneIndex(unsigned index)", "void SetRootBoneIndex(uint)", AS_METHODPR(Skeleton, SetRootBoneIndex, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Skeleton::ClearBones()", "void ClearBones()", AS_METHODPR(Skeleton, ClearBones, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Skeleton::Reset()", "void Reset()", AS_METHODPR(Skeleton, Reset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Skeleton::GetNumBones() const", "uint GetNumBones() const", AS_METHODPR(Skeleton, GetNumBones, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Skeleton::GetNumBones() const", "uint get_numBones() const", AS_METHODPR(Skeleton, GetNumBones, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Bone* Skeleton::GetRootBone()", "Bone@+ GetRootBone()", AS_METHODPR(Skeleton, GetRootBone, (), Bone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Bone* Skeleton::GetRootBone()", "Bone@+ get_rootBone()", AS_METHODPR(Skeleton, GetRootBone, (), Bone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Skeleton::GetBoneIndex(const String& boneName) const", "uint GetBoneIndex(const String&in) const", AS_METHODPR(Skeleton, GetBoneIndex, (const String&) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Skeleton::GetBoneIndex(const StringHash& boneNameHash) const", "uint GetBoneIndex(const StringHash&in) const", AS_METHODPR(Skeleton, GetBoneIndex, (const StringHash&) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Skeleton::GetBoneIndex(const Bone* bone) const", "uint GetBoneIndex(Bone@+) const", AS_METHODPR(Skeleton, GetBoneIndex, (const Bone*) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Bone* Skeleton::GetBoneParent(const Bone* bone)", "Bone@+ GetBoneParent(Bone@+)", AS_METHODPR(Skeleton, GetBoneParent, (const Bone*), Bone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Bone* Skeleton::GetBone(unsigned index)", "Bone@+ GetBone(uint)", AS_METHODPR(Skeleton, GetBone, (unsigned), Bone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Bone* Skeleton::GetBone(unsigned index)", "Bone@+ get_bones(uint)", AS_METHODPR(Skeleton, GetBone, (unsigned), Bone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Bone* Skeleton::GetBone(const String& name)", "Bone@+ GetBone(const String&in)", AS_METHODPR(Skeleton, GetBone, (const String&), Bone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Bone* Skeleton::GetBone(const StringHash& boneNameHash)", "Bone@+ GetBone(const StringHash&in)", AS_METHODPR(Skeleton, GetBone, (const StringHash&), Bone*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Skeleton::ResetSilent()", "void ResetSilent()", AS_METHODPR(Skeleton, ResetSilent, (), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Skeleton
        REGISTER_MEMBERS_MANUAL_PART_Skeleton();
    #endif
}

// class Skybox | File: ../Graphics/Skybox.h
void CollectMembers_Skybox(MemberCollection& members)
{
    CollectMembers_StaticModel(members);

    Remove(members.methods_, "void StaticModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override");
    Remove(members.methods_, "void StaticModel::UpdateBatches(const FrameInfo& frame) override");

    Remove(members.staticMethods_, "static void StaticModel::RegisterObject(Context* context)");

    // void Skybox::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("void Skybox::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(Skybox, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));

    // static void Skybox::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Skybox
        REGISTER_MEMBERS_MANUAL_PART_Skybox();
    #endif
}

// struct SourceBatch | File: ../Graphics/Drawable.h
void CollectMembers_SourceBatch(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("SourceBatch& SourceBatch::operator=(const SourceBatch& rhs)", "SourceBatch& opAssign(const SourceBatch&in)", AS_METHODPR(SourceBatch, operator=, (const SourceBatch&), SourceBatch&), AS_CALL_THISCALL));

    // Geometry* SourceBatch::geometry_
    // Not registered because pointer
    // SharedPtr<Material> SourceBatch::material_
    // Error: type "SharedPtr<Material>" can not automatically bind
    // const Matrix3x4* SourceBatch::worldTransform_
    // Not registered because pointer
    // void* SourceBatch::instancingData_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("float SourceBatch::distance_", "float distance", offsetof(SourceBatch, distance_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned SourceBatch::numWorldTransforms_", "uint numWorldTransforms", offsetof(SourceBatch, numWorldTransforms_)));
    members.fields_.Push(RegisterObjectPropertyArgs("GeometryType SourceBatch::geometryType_", "GeometryType geometryType", offsetof(SourceBatch, geometryType_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_SourceBatch
        REGISTER_MEMBERS_MANUAL_PART_SourceBatch();
    #endif
}

// class SphereOctreeQuery | File: ../Graphics/OctreeQuery.h
void CollectMembers_SphereOctreeQuery(MemberCollection& members)
{
    // void SphereOctreeQuery::TestDrawables(Drawable** start, Drawable** end, bool inside) override
    // Error: type "Drawable**" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("Intersection SphereOctreeQuery::TestOctant(const BoundingBox& box, bool inside) override", "Intersection TestOctant(const BoundingBox&in, bool)", AS_METHODPR(SphereOctreeQuery, TestOctant, (const BoundingBox&, bool), Intersection), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("Sphere SphereOctreeQuery::sphere_", "Sphere sphere", offsetof(SphereOctreeQuery, sphere_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_SphereOctreeQuery
        REGISTER_MEMBERS_MANUAL_PART_SphereOctreeQuery();
    #endif
}

// class StaticModel | File: ../Graphics/StaticModel.h
void CollectMembers_StaticModel(MemberCollection& members)
{
    CollectMembers_Drawable(members);

    Remove(members.methods_, "virtual Geometry* Drawable::GetLodGeometry(unsigned batchIndex, unsigned level)");
    Remove(members.methods_, "virtual bool Drawable::DrawOcclusion(OcclusionBuffer* buffer)");
    Remove(members.methods_, "virtual unsigned Drawable::GetNumOccluderTriangles()");
    Remove(members.methods_, "virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)");
    Remove(members.methods_, "virtual void Drawable::UpdateBatches(const FrameInfo& frame)");

    Remove(members.staticMethods_, "static void Drawable::RegisterObject(Context* context)");

    // void StaticModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
    // virtual void StaticModel::SetModel(Model* model)
    // Not registered because have @manualbind mark

    members.methods_.Push(RegisterObjectMethodArgs("void StaticModel::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(StaticModel, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Geometry* StaticModel::GetLodGeometry(unsigned batchIndex, unsigned level) override", "Geometry@+ GetLodGeometry(uint, uint)", AS_METHODPR(StaticModel, GetLodGeometry, (unsigned, unsigned), Geometry*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned StaticModel::GetNumOccluderTriangles() override", "uint GetNumOccluderTriangles()", AS_METHODPR(StaticModel, GetNumOccluderTriangles, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool StaticModel::DrawOcclusion(OcclusionBuffer* buffer) override", "bool DrawOcclusion(OcclusionBuffer@+)", AS_METHODPR(StaticModel, DrawOcclusion, (OcclusionBuffer*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void StaticModel::SetMaterial(Material* material)", "void SetMaterial(Material@+)", AS_METHODPR(StaticModel, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void StaticModel::SetMaterial(Material* material)", "void set_material(Material@+)", AS_METHODPR(StaticModel, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual bool StaticModel::SetMaterial(unsigned index, Material* material)", "bool SetMaterial(uint, Material@+)", AS_METHODPR(StaticModel, SetMaterial, (unsigned, Material*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual bool StaticModel::SetMaterial(unsigned index, Material* material)", "bool set_materials(uint, Material@+)", AS_METHODPR(StaticModel, SetMaterial, (unsigned, Material*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void StaticModel::SetOcclusionLodLevel(unsigned level)", "void SetOcclusionLodLevel(uint)", AS_METHODPR(StaticModel, SetOcclusionLodLevel, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void StaticModel::SetOcclusionLodLevel(unsigned level)", "void set_occlusionLodLevel(uint)", AS_METHODPR(StaticModel, SetOcclusionLodLevel, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void StaticModel::ApplyMaterialList(const String& fileName=String::EMPTY)", "void ApplyMaterialList(const String&in = String::EMPTY)", AS_METHODPR(StaticModel, ApplyMaterialList, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Model* StaticModel::GetModel() const", "Model@+ GetModel() const", AS_METHODPR(StaticModel, GetModel, () const, Model*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Model* StaticModel::GetModel() const", "Model@+ get_model() const", AS_METHODPR(StaticModel, GetModel, () const, Model*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned StaticModel::GetNumGeometries() const", "uint GetNumGeometries() const", AS_METHODPR(StaticModel, GetNumGeometries, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned StaticModel::GetNumGeometries() const", "uint get_numGeometries() const", AS_METHODPR(StaticModel, GetNumGeometries, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual Material* StaticModel::GetMaterial() const", "Material@+ GetMaterial() const", AS_METHODPR(StaticModel, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual Material* StaticModel::GetMaterial() const", "Material@+ get_material() const", AS_METHODPR(StaticModel, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual Material* StaticModel::GetMaterial(unsigned index) const", "Material@+ GetMaterial(uint) const", AS_METHODPR(StaticModel, GetMaterial, (unsigned) const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual Material* StaticModel::GetMaterial(unsigned index) const", "Material@+ get_materials(uint) const", AS_METHODPR(StaticModel, GetMaterial, (unsigned) const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned StaticModel::GetOcclusionLodLevel() const", "uint GetOcclusionLodLevel() const", AS_METHODPR(StaticModel, GetOcclusionLodLevel, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned StaticModel::GetOcclusionLodLevel() const", "uint get_occlusionLodLevel() const", AS_METHODPR(StaticModel, GetOcclusionLodLevel, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool StaticModel::IsInside(const Vector3& point) const", "bool IsInside(const Vector3&in) const", AS_METHODPR(StaticModel, IsInside, (const Vector3&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool StaticModel::IsInsideLocal(const Vector3& point) const", "bool IsInsideLocal(const Vector3&in) const", AS_METHODPR(StaticModel, IsInsideLocal, (const Vector3&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void StaticModel::SetModelAttr(const ResourceRef& value)", "void SetModelAttr(const ResourceRef&in)", AS_METHODPR(StaticModel, SetModelAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void StaticModel::SetMaterialsAttr(const ResourceRefList& value)", "void SetMaterialsAttr(const ResourceRefList&in)", AS_METHODPR(StaticModel, SetMaterialsAttr, (const ResourceRefList&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef StaticModel::GetModelAttr() const", "ResourceRef GetModelAttr() const", AS_METHODPR(StaticModel, GetModelAttr, () const, ResourceRef), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const ResourceRefList& StaticModel::GetMaterialsAttr() const", "const ResourceRefList& GetMaterialsAttr() const", AS_METHODPR(StaticModel, GetMaterialsAttr, () const, const ResourceRefList&), AS_CALL_THISCALL));

    // static void StaticModel::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_StaticModel
        REGISTER_MEMBERS_MANUAL_PART_StaticModel();
    #endif
}

// struct StaticModelGeometryData | File: ../Graphics/StaticModel.h
void CollectMembers_StaticModelGeometryData(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 StaticModelGeometryData::center_", "Vector3 center", offsetof(StaticModelGeometryData, center_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned StaticModelGeometryData::lodLevel_", "uint lodLevel", offsetof(StaticModelGeometryData, lodLevel_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_StaticModelGeometryData
        REGISTER_MEMBERS_MANUAL_PART_StaticModelGeometryData();
    #endif
}

// class StaticModelGroup | File: ../Graphics/StaticModelGroup.h
void CollectMembers_StaticModelGroup(MemberCollection& members)
{
    CollectMembers_StaticModel(members);

    Remove(members.methods_, "bool StaticModel::DrawOcclusion(OcclusionBuffer* buffer) override");
    Remove(members.methods_, "unsigned StaticModel::GetNumOccluderTriangles() override");
    Remove(members.methods_, "virtual void Serializable::ApplyAttributes()");
    Remove(members.methods_, "void StaticModel::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override");
    Remove(members.methods_, "void StaticModel::UpdateBatches(const FrameInfo& frame) override");

    Remove(members.staticMethods_, "static void StaticModel::RegisterObject(Context* context)");

    // const VariantVector& StaticModelGroup::GetNodeIDsAttr() const
    // Error: type "const VariantVector&" can not automatically bind
    // void StaticModelGroup::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark
    // void StaticModelGroup::SetNodeIDsAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void StaticModelGroup::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(StaticModelGroup, ApplyAttributes, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void StaticModelGroup::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(StaticModelGroup, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned StaticModelGroup::GetNumOccluderTriangles() override", "uint GetNumOccluderTriangles()", AS_METHODPR(StaticModelGroup, GetNumOccluderTriangles, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool StaticModelGroup::DrawOcclusion(OcclusionBuffer* buffer) override", "bool DrawOcclusion(OcclusionBuffer@+)", AS_METHODPR(StaticModelGroup, DrawOcclusion, (OcclusionBuffer*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void StaticModelGroup::AddInstanceNode(Node* node)", "void AddInstanceNode(Node@+)", AS_METHODPR(StaticModelGroup, AddInstanceNode, (Node*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void StaticModelGroup::RemoveInstanceNode(Node* node)", "void RemoveInstanceNode(Node@+)", AS_METHODPR(StaticModelGroup, RemoveInstanceNode, (Node*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void StaticModelGroup::RemoveAllInstanceNodes()", "void RemoveAllInstanceNodes()", AS_METHODPR(StaticModelGroup, RemoveAllInstanceNodes, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned StaticModelGroup::GetNumInstanceNodes() const", "uint GetNumInstanceNodes() const", AS_METHODPR(StaticModelGroup, GetNumInstanceNodes, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned StaticModelGroup::GetNumInstanceNodes() const", "uint get_numInstanceNodes() const", AS_METHODPR(StaticModelGroup, GetNumInstanceNodes, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Node* StaticModelGroup::GetInstanceNode(unsigned index) const", "Node@+ GetInstanceNode(uint) const", AS_METHODPR(StaticModelGroup, GetInstanceNode, (unsigned) const, Node*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Node* StaticModelGroup::GetInstanceNode(unsigned index) const", "Node@+ get_instanceNodes(uint) const", AS_METHODPR(StaticModelGroup, GetInstanceNode, (unsigned) const, Node*), AS_CALL_THISCALL));

    // static void StaticModelGroup::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_StaticModelGroup
        REGISTER_MEMBERS_MANUAL_PART_StaticModelGroup();
    #endif
}

// SharedPtr<Technique> Technique::Clone(const String& cloneName=String::EMPTY) const
// SharedPtr<Technique> Technique::Clone(const String& cloneName=String::EMPTY) const | File: ../Graphics/Technique.h
static Technique* Technique_Clone_String(Technique* ptr, const String& cloneName)
{
    SharedPtr<Technique> result = ptr->Clone(cloneName);
    return result.Detach();
}


// Vector<String> Technique::GetPassNames() const
// Vector<String> Technique::GetPassNames() const | File: ../Graphics/Technique.h
static CScriptArray* Technique_GetPassNames_void(Technique* ptr)
{
    Vector<String> result = ptr->GetPassNames();
    return VectorToArray<String>(result, "Array<String>");
}


// PODVector<Pass*> Technique::GetPasses() const
// PODVector<Pass*> Technique::GetPasses() const | File: ../Graphics/Technique.h
static CScriptArray* Technique_GetPasses_void(Technique* ptr)
{
    PODVector<Pass*> result = ptr->GetPasses();
    return VectorToHandleArray(result, "Array<Pass@>");
}


// SharedPtr<Technique> Technique::CloneWithDefines(const String& vsDefines, const String& psDefines)
// SharedPtr<Technique> Technique::CloneWithDefines(const String& vsDefines, const String& psDefines) | File: ../Graphics/Technique.h
static Technique* Technique_CloneWithDefines_String_String(Technique* ptr, const String& vsDefines, const String& psDefines)
{
    SharedPtr<Technique> result = ptr->CloneWithDefines(vsDefines, psDefines);
    return result.Detach();
}


// class Technique | File: ../Graphics/Technique.h
void CollectMembers_Technique(MemberCollection& members)
{
    CollectMembers_Resource(members);

    Remove(members.methods_, "virtual bool Resource::BeginLoad(Deserializer& source)");

    members.methods_.Push(RegisterObjectMethodArgs("bool Technique::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Technique, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Technique::SetIsDesktop(bool enable)", "void SetIsDesktop(bool)", AS_METHODPR(Technique, SetIsDesktop, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Technique::SetIsDesktop(bool enable)", "void set_desktop(bool)", AS_METHODPR(Technique, SetIsDesktop, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Pass* Technique::CreatePass(const String& name)", "Pass@+ CreatePass(const String&in)", AS_METHODPR(Technique, CreatePass, (const String&), Pass*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Technique::RemovePass(const String& name)", "void RemovePass(const String&in)", AS_METHODPR(Technique, RemovePass, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Technique::ReleaseShaders()", "void ReleaseShaders()", AS_METHODPR(Technique, ReleaseShaders, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<Technique> Technique::Clone(const String& cloneName=String::EMPTY) const", "Technique@+ Clone(const String&in = String::EMPTY) const", AS_FUNCTION_OBJFIRST(Technique_Clone_String), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("bool Technique::IsDesktop() const", "bool IsDesktop() const", AS_METHODPR(Technique, IsDesktop, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Technique::IsDesktop() const", "bool get_desktop() const", AS_METHODPR(Technique, IsDesktop, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Technique::IsSupported() const", "bool IsSupported() const", AS_METHODPR(Technique, IsSupported, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Technique::IsSupported() const", "bool get_supported() const", AS_METHODPR(Technique, IsSupported, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Technique::HasPass(unsigned passIndex) const", "bool HasPass(uint) const", AS_METHODPR(Technique, HasPass, (unsigned) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Technique::HasPass(const String& name) const", "bool HasPass(const String&in) const", AS_METHODPR(Technique, HasPass, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Pass* Technique::GetPass(unsigned passIndex) const", "Pass@+ GetPass(uint) const", AS_METHODPR(Technique, GetPass, (unsigned) const, Pass*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Pass* Technique::GetPass(const String& name) const", "Pass@+ GetPass(const String&in) const", AS_METHODPR(Technique, GetPass, (const String&) const, Pass*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Pass* Technique::GetSupportedPass(unsigned passIndex) const", "Pass@+ GetSupportedPass(uint) const", AS_METHODPR(Technique, GetSupportedPass, (unsigned) const, Pass*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Pass* Technique::GetSupportedPass(const String& name) const", "Pass@+ GetSupportedPass(const String&in) const", AS_METHODPR(Technique, GetSupportedPass, (const String&) const, Pass*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Technique::GetNumPasses() const", "uint GetNumPasses() const", AS_METHODPR(Technique, GetNumPasses, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Technique::GetNumPasses() const", "uint get_numPasses() const", AS_METHODPR(Technique, GetNumPasses, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector<String> Technique::GetPassNames() const", "Array<String>@ GetPassNames() const", AS_FUNCTION_OBJFIRST(Technique_GetPassNames_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("Vector<String> Technique::GetPassNames() const", "Array<String>@ get_passNames() const", AS_FUNCTION_OBJFIRST(Technique_GetPassNames_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("PODVector<Pass*> Technique::GetPasses() const", "Array<Pass@>@ GetPasses() const", AS_FUNCTION_OBJFIRST(Technique_GetPasses_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("PODVector<Pass*> Technique::GetPasses() const", "Array<Pass@>@ get_passes() const", AS_FUNCTION_OBJFIRST(Technique_GetPasses_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<Technique> Technique::CloneWithDefines(const String& vsDefines, const String& psDefines)", "Technique@+ CloneWithDefines(const String&in, const String&in)", AS_FUNCTION_OBJFIRST(Technique_CloneWithDefines_String_String), AS_CALL_CDECL_OBJFIRST));

    // static void Technique::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Technique::GetPassIndex(const String& passName)", "uint GetPassIndex(const String&in)", AS_FUNCTIONPR(Technique::GetPassIndex, (const String&), unsigned), AS_CALL_CDECL));

    members.staticFields_.Push(RegisterGlobalPropertyArgs("static unsigned Technique::basePassIndex", "uint basePassIndex", (void*)&Technique::basePassIndex));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static unsigned Technique::alphaPassIndex", "uint alphaPassIndex", (void*)&Technique::alphaPassIndex));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static unsigned Technique::materialPassIndex", "uint materialPassIndex", (void*)&Technique::materialPassIndex));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static unsigned Technique::deferredPassIndex", "uint deferredPassIndex", (void*)&Technique::deferredPassIndex));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static unsigned Technique::lightPassIndex", "uint lightPassIndex", (void*)&Technique::lightPassIndex));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static unsigned Technique::litBasePassIndex", "uint litBasePassIndex", (void*)&Technique::litBasePassIndex));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static unsigned Technique::litAlphaPassIndex", "uint litAlphaPassIndex", (void*)&Technique::litAlphaPassIndex));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static unsigned Technique::shadowPassIndex", "uint shadowPassIndex", (void*)&Technique::shadowPassIndex));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Technique
        REGISTER_MEMBERS_MANUAL_PART_Technique();
    #endif
}

// struct TechniqueEntry | File: ../Graphics/Material.h
void CollectMembers_TechniqueEntry(MemberCollection& members)
{
    // SharedPtr<Technique> TechniqueEntry::technique_
    // Error: type "SharedPtr<Technique>" can not automatically bind
    // SharedPtr<Technique> TechniqueEntry::original_
    // Error: type "SharedPtr<Technique>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("MaterialQuality TechniqueEntry::qualityLevel_", "MaterialQuality qualityLevel", offsetof(TechniqueEntry, qualityLevel_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float TechniqueEntry::lodDistance_", "float lodDistance", offsetof(TechniqueEntry, lodDistance_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_TechniqueEntry
        REGISTER_MEMBERS_MANUAL_PART_TechniqueEntry();
    #endif
}

// class Terrain | File: ../Graphics/Terrain.h
void CollectMembers_Terrain(MemberCollection& members)
{
    CollectMembers_Component(members);

    Remove(members.methods_, "virtual void Component::OnSetEnabled()");
    Remove(members.methods_, "virtual void Serializable::ApplyAttributes()");

    Remove(members.staticMethods_, "static void Animatable::RegisterObject(Context* context)");

    // SharedArrayPtr<float> Terrain::GetHeightData() const
    // Error: type "SharedArrayPtr<float>" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(Terrain, ApplyAttributes, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(Terrain, OnSetEnabled, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetPatchSize(int size)", "void SetPatchSize(int)", AS_METHODPR(Terrain, SetPatchSize, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetPatchSize(int size)", "void set_patchSize(int)", AS_METHODPR(Terrain, SetPatchSize, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetSpacing(const Vector3& spacing)", "void SetSpacing(const Vector3&in)", AS_METHODPR(Terrain, SetSpacing, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetSpacing(const Vector3& spacing)", "void set_spacing(const Vector3&in)", AS_METHODPR(Terrain, SetSpacing, (const Vector3&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetMaxLodLevels(unsigned levels)", "void SetMaxLodLevels(uint)", AS_METHODPR(Terrain, SetMaxLodLevels, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetMaxLodLevels(unsigned levels)", "void set_maxLodLevels(uint)", AS_METHODPR(Terrain, SetMaxLodLevels, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetOcclusionLodLevel(unsigned level)", "void SetOcclusionLodLevel(uint)", AS_METHODPR(Terrain, SetOcclusionLodLevel, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetOcclusionLodLevel(unsigned level)", "void set_occlusionLodLevel(uint)", AS_METHODPR(Terrain, SetOcclusionLodLevel, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetSmoothing(bool enable)", "void SetSmoothing(bool)", AS_METHODPR(Terrain, SetSmoothing, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetSmoothing(bool enable)", "void set_smoothing(bool)", AS_METHODPR(Terrain, SetSmoothing, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::SetHeightMap(Image* image)", "bool SetHeightMap(Image@+)", AS_METHODPR(Terrain, SetHeightMap, (Image*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::SetHeightMap(Image* image)", "bool set_heightMap(Image@+)", AS_METHODPR(Terrain, SetHeightMap, (Image*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetMaterial(Material* material)", "void SetMaterial(Material@+)", AS_METHODPR(Terrain, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetMaterial(Material* material)", "void set_material(Material@+)", AS_METHODPR(Terrain, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetNorthNeighbor(Terrain* north)", "void SetNorthNeighbor(Terrain@+)", AS_METHODPR(Terrain, SetNorthNeighbor, (Terrain*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetNorthNeighbor(Terrain* north)", "void set_northNeighbor(Terrain@+)", AS_METHODPR(Terrain, SetNorthNeighbor, (Terrain*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetSouthNeighbor(Terrain* south)", "void SetSouthNeighbor(Terrain@+)", AS_METHODPR(Terrain, SetSouthNeighbor, (Terrain*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetSouthNeighbor(Terrain* south)", "void set_southNeighbor(Terrain@+)", AS_METHODPR(Terrain, SetSouthNeighbor, (Terrain*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetWestNeighbor(Terrain* west)", "void SetWestNeighbor(Terrain@+)", AS_METHODPR(Terrain, SetWestNeighbor, (Terrain*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetWestNeighbor(Terrain* west)", "void set_westNeighbor(Terrain@+)", AS_METHODPR(Terrain, SetWestNeighbor, (Terrain*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetEastNeighbor(Terrain* east)", "void SetEastNeighbor(Terrain@+)", AS_METHODPR(Terrain, SetEastNeighbor, (Terrain*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetEastNeighbor(Terrain* east)", "void set_eastNeighbor(Terrain@+)", AS_METHODPR(Terrain, SetEastNeighbor, (Terrain*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetNeighbors(Terrain* north, Terrain* south, Terrain* west, Terrain* east)", "void SetNeighbors(Terrain@+, Terrain@+, Terrain@+, Terrain@+)", AS_METHODPR(Terrain, SetNeighbors, (Terrain*, Terrain*, Terrain*, Terrain*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetDrawDistance(float distance)", "void SetDrawDistance(float)", AS_METHODPR(Terrain, SetDrawDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetDrawDistance(float distance)", "void set_drawDistance(float)", AS_METHODPR(Terrain, SetDrawDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetShadowDistance(float distance)", "void SetShadowDistance(float)", AS_METHODPR(Terrain, SetShadowDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetShadowDistance(float distance)", "void set_shadowDistance(float)", AS_METHODPR(Terrain, SetShadowDistance, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetLodBias(float bias)", "void SetLodBias(float)", AS_METHODPR(Terrain, SetLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetLodBias(float bias)", "void set_lodBias(float)", AS_METHODPR(Terrain, SetLodBias, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetViewMask(unsigned mask)", "void SetViewMask(uint)", AS_METHODPR(Terrain, SetViewMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetViewMask(unsigned mask)", "void set_viewMask(uint)", AS_METHODPR(Terrain, SetViewMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetLightMask(unsigned mask)", "void SetLightMask(uint)", AS_METHODPR(Terrain, SetLightMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetLightMask(unsigned mask)", "void set_lightMask(uint)", AS_METHODPR(Terrain, SetLightMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetShadowMask(unsigned mask)", "void SetShadowMask(uint)", AS_METHODPR(Terrain, SetShadowMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetShadowMask(unsigned mask)", "void set_shadowMask(uint)", AS_METHODPR(Terrain, SetShadowMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetZoneMask(unsigned mask)", "void SetZoneMask(uint)", AS_METHODPR(Terrain, SetZoneMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetZoneMask(unsigned mask)", "void set_zoneMask(uint)", AS_METHODPR(Terrain, SetZoneMask, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetMaxLights(unsigned num)", "void SetMaxLights(uint)", AS_METHODPR(Terrain, SetMaxLights, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetMaxLights(unsigned num)", "void set_maxLights(uint)", AS_METHODPR(Terrain, SetMaxLights, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetCastShadows(bool enable)", "void SetCastShadows(bool)", AS_METHODPR(Terrain, SetCastShadows, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetCastShadows(bool enable)", "void set_castShadows(bool)", AS_METHODPR(Terrain, SetCastShadows, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetOccluder(bool enable)", "void SetOccluder(bool)", AS_METHODPR(Terrain, SetOccluder, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetOccluder(bool enable)", "void set_occluder(bool)", AS_METHODPR(Terrain, SetOccluder, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetOccludee(bool enable)", "void SetOccludee(bool)", AS_METHODPR(Terrain, SetOccludee, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetOccludee(bool enable)", "void set_occludee(bool)", AS_METHODPR(Terrain, SetOccludee, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::ApplyHeightMap()", "void ApplyHeightMap()", AS_METHODPR(Terrain, ApplyHeightMap, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Terrain::GetPatchSize() const", "int GetPatchSize() const", AS_METHODPR(Terrain, GetPatchSize, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Terrain::GetPatchSize() const", "int get_patchSize() const", AS_METHODPR(Terrain, GetPatchSize, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Terrain::GetSpacing() const", "const Vector3& GetSpacing() const", AS_METHODPR(Terrain, GetSpacing, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Terrain::GetSpacing() const", "const Vector3& get_spacing() const", AS_METHODPR(Terrain, GetSpacing, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntVector2& Terrain::GetNumVertices() const", "const IntVector2& GetNumVertices() const", AS_METHODPR(Terrain, GetNumVertices, () const, const IntVector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntVector2& Terrain::GetNumVertices() const", "const IntVector2& get_numVertices() const", AS_METHODPR(Terrain, GetNumVertices, () const, const IntVector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntVector2& Terrain::GetNumPatches() const", "const IntVector2& GetNumPatches() const", AS_METHODPR(Terrain, GetNumPatches, () const, const IntVector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntVector2& Terrain::GetNumPatches() const", "const IntVector2& get_numPatches() const", AS_METHODPR(Terrain, GetNumPatches, () const, const IntVector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetMaxLodLevels() const", "uint GetMaxLodLevels() const", AS_METHODPR(Terrain, GetMaxLodLevels, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetMaxLodLevels() const", "uint get_maxLodLevels() const", AS_METHODPR(Terrain, GetMaxLodLevels, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetOcclusionLodLevel() const", "uint GetOcclusionLodLevel() const", AS_METHODPR(Terrain, GetOcclusionLodLevel, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetOcclusionLodLevel() const", "uint get_occlusionLodLevel() const", AS_METHODPR(Terrain, GetOcclusionLodLevel, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::GetSmoothing() const", "bool GetSmoothing() const", AS_METHODPR(Terrain, GetSmoothing, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::GetSmoothing() const", "bool get_smoothing() const", AS_METHODPR(Terrain, GetSmoothing, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Image* Terrain::GetHeightMap() const", "Image@+ GetHeightMap() const", AS_METHODPR(Terrain, GetHeightMap, () const, Image*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Image* Terrain::GetHeightMap() const", "Image@+ get_heightMap() const", AS_METHODPR(Terrain, GetHeightMap, () const, Image*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* Terrain::GetMaterial() const", "Material@+ GetMaterial() const", AS_METHODPR(Terrain, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Material* Terrain::GetMaterial() const", "Material@+ get_material() const", AS_METHODPR(Terrain, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TerrainPatch* Terrain::GetPatch(unsigned index) const", "TerrainPatch@+ GetPatch(uint) const", AS_METHODPR(Terrain, GetPatch, (unsigned) const, TerrainPatch*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TerrainPatch* Terrain::GetPatch(unsigned index) const", "TerrainPatch@+ get_patches(uint) const", AS_METHODPR(Terrain, GetPatch, (unsigned) const, TerrainPatch*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TerrainPatch* Terrain::GetPatch(int x, int z) const", "TerrainPatch@+ GetPatch(int, int) const", AS_METHODPR(Terrain, GetPatch, (int, int) const, TerrainPatch*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TerrainPatch* Terrain::GetNeighborPatch(int x, int z) const", "TerrainPatch@+ GetNeighborPatch(int, int) const", AS_METHODPR(Terrain, GetNeighborPatch, (int, int) const, TerrainPatch*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Terrain::GetHeight(const Vector3& worldPosition) const", "float GetHeight(const Vector3&in) const", AS_METHODPR(Terrain, GetHeight, (const Vector3&) const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 Terrain::GetNormal(const Vector3& worldPosition) const", "Vector3 GetNormal(const Vector3&in) const", AS_METHODPR(Terrain, GetNormal, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector2 Terrain::WorldToHeightMap(const Vector3& worldPosition) const", "IntVector2 WorldToHeightMap(const Vector3&in) const", AS_METHODPR(Terrain, WorldToHeightMap, (const Vector3&) const, IntVector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 Terrain::HeightMapToWorld(const IntVector2& pixelPosition) const", "Vector3 HeightMapToWorld(const IntVector2&in) const", AS_METHODPR(Terrain, HeightMapToWorld, (const IntVector2&) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Terrain* Terrain::GetNorthNeighbor() const", "Terrain@+ GetNorthNeighbor() const", AS_METHODPR(Terrain, GetNorthNeighbor, () const, Terrain*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Terrain* Terrain::GetNorthNeighbor() const", "Terrain@+ get_northNeighbor() const", AS_METHODPR(Terrain, GetNorthNeighbor, () const, Terrain*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Terrain* Terrain::GetSouthNeighbor() const", "Terrain@+ GetSouthNeighbor() const", AS_METHODPR(Terrain, GetSouthNeighbor, () const, Terrain*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Terrain* Terrain::GetSouthNeighbor() const", "Terrain@+ get_southNeighbor() const", AS_METHODPR(Terrain, GetSouthNeighbor, () const, Terrain*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Terrain* Terrain::GetWestNeighbor() const", "Terrain@+ GetWestNeighbor() const", AS_METHODPR(Terrain, GetWestNeighbor, () const, Terrain*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Terrain* Terrain::GetWestNeighbor() const", "Terrain@+ get_westNeighbor() const", AS_METHODPR(Terrain, GetWestNeighbor, () const, Terrain*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Terrain* Terrain::GetEastNeighbor() const", "Terrain@+ GetEastNeighbor() const", AS_METHODPR(Terrain, GetEastNeighbor, () const, Terrain*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Terrain* Terrain::GetEastNeighbor() const", "Terrain@+ get_eastNeighbor() const", AS_METHODPR(Terrain, GetEastNeighbor, () const, Terrain*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Terrain::GetDrawDistance() const", "float GetDrawDistance() const", AS_METHODPR(Terrain, GetDrawDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Terrain::GetDrawDistance() const", "float get_drawDistance() const", AS_METHODPR(Terrain, GetDrawDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Terrain::GetShadowDistance() const", "float GetShadowDistance() const", AS_METHODPR(Terrain, GetShadowDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Terrain::GetShadowDistance() const", "float get_shadowDistance() const", AS_METHODPR(Terrain, GetShadowDistance, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Terrain::GetLodBias() const", "float GetLodBias() const", AS_METHODPR(Terrain, GetLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Terrain::GetLodBias() const", "float get_lodBias() const", AS_METHODPR(Terrain, GetLodBias, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetViewMask() const", "uint GetViewMask() const", AS_METHODPR(Terrain, GetViewMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetViewMask() const", "uint get_viewMask() const", AS_METHODPR(Terrain, GetViewMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetLightMask() const", "uint GetLightMask() const", AS_METHODPR(Terrain, GetLightMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetLightMask() const", "uint get_lightMask() const", AS_METHODPR(Terrain, GetLightMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetShadowMask() const", "uint GetShadowMask() const", AS_METHODPR(Terrain, GetShadowMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetShadowMask() const", "uint get_shadowMask() const", AS_METHODPR(Terrain, GetShadowMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetZoneMask() const", "uint GetZoneMask() const", AS_METHODPR(Terrain, GetZoneMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetZoneMask() const", "uint get_zoneMask() const", AS_METHODPR(Terrain, GetZoneMask, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetMaxLights() const", "uint GetMaxLights() const", AS_METHODPR(Terrain, GetMaxLights, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Terrain::GetMaxLights() const", "uint get_maxLights() const", AS_METHODPR(Terrain, GetMaxLights, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::IsVisible() const", "bool IsVisible() const", AS_METHODPR(Terrain, IsVisible, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::GetCastShadows() const", "bool GetCastShadows() const", AS_METHODPR(Terrain, GetCastShadows, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::GetCastShadows() const", "bool get_castShadows() const", AS_METHODPR(Terrain, GetCastShadows, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::IsOccluder() const", "bool IsOccluder() const", AS_METHODPR(Terrain, IsOccluder, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::IsOccluder() const", "bool get_occluder() const", AS_METHODPR(Terrain, IsOccluder, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::IsOccludee() const", "bool IsOccludee() const", AS_METHODPR(Terrain, IsOccludee, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Terrain::IsOccludee() const", "bool get_occludee() const", AS_METHODPR(Terrain, IsOccludee, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::CreatePatchGeometry(TerrainPatch* patch)", "void CreatePatchGeometry(TerrainPatch@+)", AS_METHODPR(Terrain, CreatePatchGeometry, (TerrainPatch*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::UpdatePatchLod(TerrainPatch* patch)", "void UpdatePatchLod(TerrainPatch@+)", AS_METHODPR(Terrain, UpdatePatchLod, (TerrainPatch*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetHeightMapAttr(const ResourceRef& value)", "void SetHeightMapAttr(const ResourceRef&in)", AS_METHODPR(Terrain, SetHeightMapAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetMaterialAttr(const ResourceRef& value)", "void SetMaterialAttr(const ResourceRef&in)", AS_METHODPR(Terrain, SetMaterialAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetPatchSizeAttr(int value)", "void SetPatchSizeAttr(int)", AS_METHODPR(Terrain, SetPatchSizeAttr, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetMaxLodLevelsAttr(unsigned value)", "void SetMaxLodLevelsAttr(uint)", AS_METHODPR(Terrain, SetMaxLodLevelsAttr, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Terrain::SetOcclusionLodLevelAttr(unsigned value)", "void SetOcclusionLodLevelAttr(uint)", AS_METHODPR(Terrain, SetOcclusionLodLevelAttr, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef Terrain::GetHeightMapAttr() const", "ResourceRef GetHeightMapAttr() const", AS_METHODPR(Terrain, GetHeightMapAttr, () const, ResourceRef), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef Terrain::GetMaterialAttr() const", "ResourceRef GetMaterialAttr() const", AS_METHODPR(Terrain, GetMaterialAttr, () const, ResourceRef), AS_CALL_THISCALL));

    // static void Terrain::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Terrain
        REGISTER_MEMBERS_MANUAL_PART_Terrain();
    #endif
}

// class TerrainPatch | File: ../Graphics/TerrainPatch.h
void CollectMembers_TerrainPatch(MemberCollection& members)
{
    CollectMembers_Drawable(members);

    Remove(members.methods_, "virtual Geometry* Drawable::GetLodGeometry(unsigned batchIndex, unsigned level)");
    Remove(members.methods_, "virtual UpdateGeometryType Drawable::GetUpdateGeometryType()");
    Remove(members.methods_, "virtual bool Drawable::DrawOcclusion(OcclusionBuffer* buffer)");
    Remove(members.methods_, "virtual unsigned Drawable::GetNumOccluderTriangles()");
    Remove(members.methods_, "virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)");
    Remove(members.methods_, "virtual void Drawable::UpdateBatches(const FrameInfo& frame)");
    Remove(members.methods_, "virtual void Drawable::UpdateGeometry(const FrameInfo& frame)");
    Remove(members.methods_, "void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override");

    Remove(members.staticMethods_, "static void Drawable::RegisterObject(Context* context)");

    // PODVector<float>& TerrainPatch::GetLodErrors()
    // Error: type "PODVector<float>&" can not automatically bind
    // void TerrainPatch::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("void TerrainPatch::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(TerrainPatch, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TerrainPatch::UpdateGeometry(const FrameInfo& frame) override", "void UpdateGeometry(const FrameInfo&in)", AS_METHODPR(TerrainPatch, UpdateGeometry, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("UpdateGeometryType TerrainPatch::GetUpdateGeometryType() override", "UpdateGeometryType GetUpdateGeometryType()", AS_METHODPR(TerrainPatch, GetUpdateGeometryType, (), UpdateGeometryType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Geometry* TerrainPatch::GetLodGeometry(unsigned batchIndex, unsigned level) override", "Geometry@+ GetLodGeometry(uint, uint)", AS_METHODPR(TerrainPatch, GetLodGeometry, (unsigned, unsigned), Geometry*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned TerrainPatch::GetNumOccluderTriangles() override", "uint GetNumOccluderTriangles()", AS_METHODPR(TerrainPatch, GetNumOccluderTriangles, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool TerrainPatch::DrawOcclusion(OcclusionBuffer* buffer) override", "bool DrawOcclusion(OcclusionBuffer@+)", AS_METHODPR(TerrainPatch, DrawOcclusion, (OcclusionBuffer*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TerrainPatch::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(TerrainPatch, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TerrainPatch::SetOwner(Terrain* terrain)", "void SetOwner(Terrain@+)", AS_METHODPR(TerrainPatch, SetOwner, (Terrain*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TerrainPatch::SetNeighbors(TerrainPatch* north, TerrainPatch* south, TerrainPatch* west, TerrainPatch* east)", "void SetNeighbors(TerrainPatch@+, TerrainPatch@+, TerrainPatch@+, TerrainPatch@+)", AS_METHODPR(TerrainPatch, SetNeighbors, (TerrainPatch*, TerrainPatch*, TerrainPatch*, TerrainPatch*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TerrainPatch::SetMaterial(Material* material)", "void SetMaterial(Material@+)", AS_METHODPR(TerrainPatch, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TerrainPatch::SetBoundingBox(const BoundingBox& box)", "void SetBoundingBox(const BoundingBox&in)", AS_METHODPR(TerrainPatch, SetBoundingBox, (const BoundingBox&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TerrainPatch::SetCoordinates(const IntVector2& coordinates)", "void SetCoordinates(const IntVector2&in)", AS_METHODPR(TerrainPatch, SetCoordinates, (const IntVector2&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TerrainPatch::ResetLod()", "void ResetLod()", AS_METHODPR(TerrainPatch, ResetLod, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Geometry* TerrainPatch::GetGeometry() const", "Geometry@+ GetGeometry() const", AS_METHODPR(TerrainPatch, GetGeometry, () const, Geometry*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Geometry* TerrainPatch::GetMaxLodGeometry() const", "Geometry@+ GetMaxLodGeometry() const", AS_METHODPR(TerrainPatch, GetMaxLodGeometry, () const, Geometry*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Geometry* TerrainPatch::GetOcclusionGeometry() const", "Geometry@+ GetOcclusionGeometry() const", AS_METHODPR(TerrainPatch, GetOcclusionGeometry, () const, Geometry*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VertexBuffer* TerrainPatch::GetVertexBuffer() const", "VertexBuffer@+ GetVertexBuffer() const", AS_METHODPR(TerrainPatch, GetVertexBuffer, () const, VertexBuffer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Terrain* TerrainPatch::GetOwner() const", "Terrain@+ GetOwner() const", AS_METHODPR(TerrainPatch, GetOwner, () const, Terrain*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TerrainPatch* TerrainPatch::GetNorthPatch() const", "TerrainPatch@+ GetNorthPatch() const", AS_METHODPR(TerrainPatch, GetNorthPatch, () const, TerrainPatch*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TerrainPatch* TerrainPatch::GetSouthPatch() const", "TerrainPatch@+ GetSouthPatch() const", AS_METHODPR(TerrainPatch, GetSouthPatch, () const, TerrainPatch*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TerrainPatch* TerrainPatch::GetWestPatch() const", "TerrainPatch@+ GetWestPatch() const", AS_METHODPR(TerrainPatch, GetWestPatch, () const, TerrainPatch*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TerrainPatch* TerrainPatch::GetEastPatch() const", "TerrainPatch@+ GetEastPatch() const", AS_METHODPR(TerrainPatch, GetEastPatch, () const, TerrainPatch*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntVector2& TerrainPatch::GetCoordinates() const", "const IntVector2& GetCoordinates() const", AS_METHODPR(TerrainPatch, GetCoordinates, () const, const IntVector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned TerrainPatch::GetLodLevel() const", "uint GetLodLevel() const", AS_METHODPR(TerrainPatch, GetLodLevel, () const, unsigned), AS_CALL_THISCALL));

    // static void TerrainPatch::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_TerrainPatch
        REGISTER_MEMBERS_MANUAL_PART_TerrainPatch();
    #endif
}

// class Texture | File: ../Graphics/Texture.h
void CollectMembers_Texture(MemberCollection& members)
{
    CollectMembers_ResourceWithMetadata(members);
    CollectMembers_GPUObject(members);

    // void* Texture::GetResolveTexture() const
    // Error: type "void*" can not automatically bind
    // unsigned Texture::GetSRGBFormat(unsigned format)
    // Not registered because have @nobind mark
    // void* Texture::GetSampler() const
    // Error: type "void*" can not automatically bind
    // void* Texture::GetShaderResourceView() const
    // Error: type "void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetNumLevels(unsigned levels)", "void SetNumLevels(uint)", AS_METHODPR(Texture, SetNumLevels, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetFilterMode(TextureFilterMode mode)", "void SetFilterMode(TextureFilterMode)", AS_METHODPR(Texture, SetFilterMode, (TextureFilterMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetFilterMode(TextureFilterMode mode)", "void set_filterMode(TextureFilterMode)", AS_METHODPR(Texture, SetFilterMode, (TextureFilterMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetAddressMode(TextureCoordinate coord, TextureAddressMode mode)", "void SetAddressMode(TextureCoordinate, TextureAddressMode)", AS_METHODPR(Texture, SetAddressMode, (TextureCoordinate, TextureAddressMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetAddressMode(TextureCoordinate coord, TextureAddressMode mode)", "void set_addressMode(TextureCoordinate, TextureAddressMode)", AS_METHODPR(Texture, SetAddressMode, (TextureCoordinate, TextureAddressMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetAnisotropy(unsigned level)", "void SetAnisotropy(uint)", AS_METHODPR(Texture, SetAnisotropy, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetAnisotropy(unsigned level)", "void set_anisotropy(uint)", AS_METHODPR(Texture, SetAnisotropy, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetShadowCompare(bool enable)", "void SetShadowCompare(bool)", AS_METHODPR(Texture, SetShadowCompare, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetBorderColor(const Color& color)", "void SetBorderColor(const Color&in)", AS_METHODPR(Texture, SetBorderColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetBorderColor(const Color& color)", "void set_borderColor(const Color&in)", AS_METHODPR(Texture, SetBorderColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetSRGB(bool enable)", "void SetSRGB(bool)", AS_METHODPR(Texture, SetSRGB, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetSRGB(bool enable)", "void set_sRGB(bool)", AS_METHODPR(Texture, SetSRGB, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetBackupTexture(Texture* texture)", "void SetBackupTexture(Texture@+)", AS_METHODPR(Texture, SetBackupTexture, (Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetBackupTexture(Texture* texture)", "void set_backupTexture(Texture@+)", AS_METHODPR(Texture, SetBackupTexture, (Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetMipsToSkip(MaterialQuality quality, int toSkip)", "void SetMipsToSkip(MaterialQuality, int)", AS_METHODPR(Texture, SetMipsToSkip, (MaterialQuality, int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetMipsToSkip(MaterialQuality quality, int toSkip)", "void set_mipsToSkip(MaterialQuality, int)", AS_METHODPR(Texture, SetMipsToSkip, (MaterialQuality, int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetFormat() const", "uint GetFormat() const", AS_METHODPR(Texture, GetFormat, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetFormat() const", "uint get_format() const", AS_METHODPR(Texture, GetFormat, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::IsCompressed() const", "bool IsCompressed() const", AS_METHODPR(Texture, IsCompressed, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::IsCompressed() const", "bool get_compressed() const", AS_METHODPR(Texture, IsCompressed, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetLevels() const", "uint GetLevels() const", AS_METHODPR(Texture, GetLevels, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetLevels() const", "uint get_levels() const", AS_METHODPR(Texture, GetLevels, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetWidth() const", "int GetWidth() const", AS_METHODPR(Texture, GetWidth, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetWidth() const", "int get_width() const", AS_METHODPR(Texture, GetWidth, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetHeight() const", "int GetHeight() const", AS_METHODPR(Texture, GetHeight, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetHeight() const", "int get_height() const", AS_METHODPR(Texture, GetHeight, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetDepth() const", "int GetDepth() const", AS_METHODPR(Texture, GetDepth, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureFilterMode Texture::GetFilterMode() const", "TextureFilterMode GetFilterMode() const", AS_METHODPR(Texture, GetFilterMode, () const, TextureFilterMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureFilterMode Texture::GetFilterMode() const", "TextureFilterMode get_filterMode() const", AS_METHODPR(Texture, GetFilterMode, () const, TextureFilterMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureAddressMode Texture::GetAddressMode(TextureCoordinate coord) const", "TextureAddressMode GetAddressMode(TextureCoordinate) const", AS_METHODPR(Texture, GetAddressMode, (TextureCoordinate) const, TextureAddressMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureAddressMode Texture::GetAddressMode(TextureCoordinate coord) const", "TextureAddressMode get_addressMode(TextureCoordinate) const", AS_METHODPR(Texture, GetAddressMode, (TextureCoordinate) const, TextureAddressMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetAnisotropy() const", "uint GetAnisotropy() const", AS_METHODPR(Texture, GetAnisotropy, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetAnisotropy() const", "uint get_anisotropy() const", AS_METHODPR(Texture, GetAnisotropy, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::GetShadowCompare() const", "bool GetShadowCompare() const", AS_METHODPR(Texture, GetShadowCompare, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Texture::GetBorderColor() const", "const Color& GetBorderColor() const", AS_METHODPR(Texture, GetBorderColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Texture::GetBorderColor() const", "const Color& get_borderColor() const", AS_METHODPR(Texture, GetBorderColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::GetSRGB() const", "bool GetSRGB() const", AS_METHODPR(Texture, GetSRGB, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::GetSRGB() const", "bool get_sRGB() const", AS_METHODPR(Texture, GetSRGB, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetMultiSample() const", "int GetMultiSample() const", AS_METHODPR(Texture, GetMultiSample, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetMultiSample() const", "int get_multiSample() const", AS_METHODPR(Texture, GetMultiSample, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::GetAutoResolve() const", "bool GetAutoResolve() const", AS_METHODPR(Texture, GetAutoResolve, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::GetAutoResolve() const", "bool get_autoResolve() const", AS_METHODPR(Texture, GetAutoResolve, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::IsResolveDirty() const", "bool IsResolveDirty() const", AS_METHODPR(Texture, IsResolveDirty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::IsResolveDirty() const", "bool get_resolveDirty() const", AS_METHODPR(Texture, IsResolveDirty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::GetLevelsDirty() const", "bool GetLevelsDirty() const", AS_METHODPR(Texture, GetLevelsDirty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::GetLevelsDirty() const", "bool get_levelsDirty() const", AS_METHODPR(Texture, GetLevelsDirty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Texture::GetBackupTexture() const", "Texture@+ GetBackupTexture() const", AS_METHODPR(Texture, GetBackupTexture, () const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Texture::GetBackupTexture() const", "Texture@+ get_backupTexture() const", AS_METHODPR(Texture, GetBackupTexture, () const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetMipsToSkip(MaterialQuality quality) const", "int GetMipsToSkip(MaterialQuality) const", AS_METHODPR(Texture, GetMipsToSkip, (MaterialQuality) const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetMipsToSkip(MaterialQuality quality) const", "int get_mipsToSkip(MaterialQuality) const", AS_METHODPR(Texture, GetMipsToSkip, (MaterialQuality) const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetLevelWidth(unsigned level) const", "int GetLevelWidth(uint) const", AS_METHODPR(Texture, GetLevelWidth, (unsigned) const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetLevelWidth(unsigned level) const", "int get_levelWidth(uint) const", AS_METHODPR(Texture, GetLevelWidth, (unsigned) const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetLevelHeight(unsigned level) const", "int GetLevelHeight(uint) const", AS_METHODPR(Texture, GetLevelHeight, (unsigned) const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetLevelHeight(unsigned level) const", "int get_levelHeight(uint) const", AS_METHODPR(Texture, GetLevelHeight, (unsigned) const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Texture::GetLevelDepth(unsigned level) const", "int GetLevelDepth(uint) const", AS_METHODPR(Texture, GetLevelDepth, (unsigned) const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureUsage Texture::GetUsage() const", "TextureUsage GetUsage() const", AS_METHODPR(Texture, GetUsage, () const, TextureUsage), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("TextureUsage Texture::GetUsage() const", "TextureUsage get_usage() const", AS_METHODPR(Texture, GetUsage, () const, TextureUsage), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetDataSize(int width, int height) const", "uint GetDataSize(int, int) const", AS_METHODPR(Texture, GetDataSize, (int, int) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetDataSize(int width, int height, int depth) const", "uint GetDataSize(int, int, int) const", AS_METHODPR(Texture, GetDataSize, (int, int, int) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetRowDataSize(int width) const", "uint GetRowDataSize(int) const", AS_METHODPR(Texture, GetRowDataSize, (int) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetComponents() const", "uint GetComponents() const", AS_METHODPR(Texture, GetComponents, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetComponents() const", "uint get_components() const", AS_METHODPR(Texture, GetComponents, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture::GetParametersDirty() const", "bool GetParametersDirty() const", AS_METHODPR(Texture, GetParametersDirty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetParameters(XMLFile* file)", "void SetParameters(XMLFile@+)", AS_METHODPR(Texture, SetParameters, (XMLFile*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetParameters(const XMLElement& element)", "void SetParameters(const XMLElement&in)", AS_METHODPR(Texture, SetParameters, (const XMLElement&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetParametersDirty()", "void SetParametersDirty()", AS_METHODPR(Texture, SetParametersDirty, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::UpdateParameters()", "void UpdateParameters()", AS_METHODPR(Texture, UpdateParameters, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture::GetTarget() const", "uint GetTarget() const", AS_METHODPR(Texture, GetTarget, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetResolveDirty(bool enable)", "void SetResolveDirty(bool)", AS_METHODPR(Texture, SetResolveDirty, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::SetLevelsDirty()", "void SetLevelsDirty()", AS_METHODPR(Texture, SetLevelsDirty, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture::RegenerateLevels()", "void RegenerateLevels()", AS_METHODPR(Texture, RegenerateLevels, (), void), AS_CALL_THISCALL));

    // static unsigned Texture::GetSRVFormat(unsigned format)
    // Not registered because have @nobind mark
    // static unsigned Texture::GetDSVFormat(unsigned format)
    // Not registered because have @nobind mark
    // static unsigned Texture::GetExternalFormat(unsigned format)
    // Not registered because have @nobind mark
    // static unsigned Texture::GetDataType(unsigned format)
    // Not registered because have @nobind mark

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Texture::CheckMaxLevels(int width, int height, unsigned requestedLevels)", "uint CheckMaxLevels(int, int, uint)", AS_FUNCTIONPR(Texture::CheckMaxLevels, (int, int, unsigned), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Texture::CheckMaxLevels(int width, int height, int depth, unsigned requestedLevels)", "uint CheckMaxLevels(int, int, int, uint)", AS_FUNCTIONPR(Texture::CheckMaxLevels, (int, int, int, unsigned), unsigned), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Texture
        REGISTER_MEMBERS_MANUAL_PART_Texture();
    #endif
}

// SharedPtr<Image> Texture2D::GetImage() const
// SharedPtr<Image> Texture2D::GetImage() const | File: ../Graphics/Texture2D.h
static Image* Texture2D_GetImage_void(Texture2D* ptr)
{
    SharedPtr<Image> result = ptr->GetImage();
    return result.Detach();
}


// class Texture2D | File: ../Graphics/Texture2D.h
void CollectMembers_Texture2D(MemberCollection& members)
{
    CollectMembers_Texture(members);

    Remove(members.methods_, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::EndLoad()");
    Remove(members.methods_, "virtual void GPUObject::OnDeviceLost()");
    Remove(members.methods_, "virtual void GPUObject::OnDeviceReset()");
    Remove(members.methods_, "virtual void GPUObject::Release()");

    // bool Texture2D::GetData(unsigned level, void* dest) const
    // Error: type "void*" can not automatically bind
    // bool Texture2D::SetData(unsigned level, int x, int y, int width, int height, const void* data)
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool Texture2D::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Texture2D, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture2D::EndLoad() override", "bool EndLoad()", AS_METHODPR(Texture2D, EndLoad, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture2D::OnDeviceLost() override", "void OnDeviceLost()", AS_METHODPR(Texture2D, OnDeviceLost, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture2D::OnDeviceReset() override", "void OnDeviceReset()", AS_METHODPR(Texture2D, OnDeviceReset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture2D::Release() override", "void Release()", AS_METHODPR(Texture2D, Release, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture2D::SetSize(int width, int height, unsigned format, TextureUsage usage=TEXTURE_STATIC, int multiSample=1, bool autoResolve=true)", "bool SetSize(int, int, uint, TextureUsage = TEXTURE_STATIC, int = 1, bool = true)", AS_METHODPR(Texture2D, SetSize, (int, int, unsigned, TextureUsage, int, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture2D::SetData(Image* image, bool useAlpha=false)", "bool SetData(Image@+, bool = false)", AS_METHODPR(Texture2D, SetData, (Image*, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture2D::GetImage(Image& image) const", "bool GetImage(Image&) const", AS_METHODPR(Texture2D, GetImage, (Image&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<Image> Texture2D::GetImage() const", "Image@+ GetImage() const", AS_FUNCTION_OBJFIRST(Texture2D_GetImage_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* Texture2D::GetRenderSurface() const", "RenderSurface@+ GetRenderSurface() const", AS_METHODPR(Texture2D, GetRenderSurface, () const, RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* Texture2D::GetRenderSurface() const", "RenderSurface@+ get_renderSurface() const", AS_METHODPR(Texture2D, GetRenderSurface, () const, RenderSurface*), AS_CALL_THISCALL));

    // static void Texture2D::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Texture2D
        REGISTER_MEMBERS_MANUAL_PART_Texture2D();
    #endif
}

// class Texture2DArray | File: ../Graphics/Texture2DArray.h
void CollectMembers_Texture2DArray(MemberCollection& members)
{
    CollectMembers_Texture(members);

    Remove(members.methods_, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::EndLoad()");
    Remove(members.methods_, "virtual void GPUObject::OnDeviceLost()");
    Remove(members.methods_, "virtual void GPUObject::OnDeviceReset()");
    Remove(members.methods_, "virtual void GPUObject::Release()");

    // bool Texture2DArray::GetData(unsigned layer, unsigned level, void* dest) const
    // Error: type "void*" can not automatically bind
    // bool Texture2DArray::SetData(unsigned layer, unsigned level, int x, int y, int width, int height, const void* data)
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool Texture2DArray::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Texture2DArray, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture2DArray::EndLoad() override", "bool EndLoad()", AS_METHODPR(Texture2DArray, EndLoad, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture2DArray::OnDeviceLost() override", "void OnDeviceLost()", AS_METHODPR(Texture2DArray, OnDeviceLost, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture2DArray::OnDeviceReset() override", "void OnDeviceReset()", AS_METHODPR(Texture2DArray, OnDeviceReset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture2DArray::Release() override", "void Release()", AS_METHODPR(Texture2DArray, Release, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture2DArray::SetLayers(unsigned layers)", "void SetLayers(uint)", AS_METHODPR(Texture2DArray, SetLayers, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture2DArray::SetLayers(unsigned layers)", "void set_layers(uint)", AS_METHODPR(Texture2DArray, SetLayers, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture2DArray::SetSize(unsigned layers, int width, int height, unsigned format, TextureUsage usage=TEXTURE_STATIC)", "bool SetSize(uint, int, int, uint, TextureUsage = TEXTURE_STATIC)", AS_METHODPR(Texture2DArray, SetSize, (unsigned, int, int, unsigned, TextureUsage), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture2DArray::SetData(unsigned layer, Deserializer& source)", "bool SetData(uint, Deserializer&)", AS_METHODPR(Texture2DArray, SetData, (unsigned, Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture2DArray::SetData(unsigned layer, Image* image, bool useAlpha=false)", "bool SetData(uint, Image@+, bool = false)", AS_METHODPR(Texture2DArray, SetData, (unsigned, Image*, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture2DArray::GetLayers() const", "uint GetLayers() const", AS_METHODPR(Texture2DArray, GetLayers, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Texture2DArray::GetLayers() const", "uint get_layers() const", AS_METHODPR(Texture2DArray, GetLayers, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* Texture2DArray::GetRenderSurface() const", "RenderSurface@+ GetRenderSurface() const", AS_METHODPR(Texture2DArray, GetRenderSurface, () const, RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* Texture2DArray::GetRenderSurface() const", "RenderSurface@+ get_renderSurface() const", AS_METHODPR(Texture2DArray, GetRenderSurface, () const, RenderSurface*), AS_CALL_THISCALL));

    // static void Texture2DArray::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Texture2DArray
        REGISTER_MEMBERS_MANUAL_PART_Texture2DArray();
    #endif
}

// class Texture3D | File: ../Graphics/Texture3D.h
void CollectMembers_Texture3D(MemberCollection& members)
{
    CollectMembers_Texture(members);

    Remove(members.methods_, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::EndLoad()");
    Remove(members.methods_, "virtual void GPUObject::OnDeviceLost()");
    Remove(members.methods_, "virtual void GPUObject::OnDeviceReset()");
    Remove(members.methods_, "virtual void GPUObject::Release()");

    // bool Texture3D::GetData(unsigned level, void* dest) const
    // Error: type "void*" can not automatically bind
    // bool Texture3D::SetData(unsigned level, int x, int y, int z, int width, int height, int depth, const void* data)
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool Texture3D::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Texture3D, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture3D::EndLoad() override", "bool EndLoad()", AS_METHODPR(Texture3D, EndLoad, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture3D::OnDeviceLost() override", "void OnDeviceLost()", AS_METHODPR(Texture3D, OnDeviceLost, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture3D::OnDeviceReset() override", "void OnDeviceReset()", AS_METHODPR(Texture3D, OnDeviceReset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Texture3D::Release() override", "void Release()", AS_METHODPR(Texture3D, Release, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture3D::SetSize(int width, int height, int depth, unsigned format, TextureUsage usage=TEXTURE_STATIC)", "bool SetSize(int, int, int, uint, TextureUsage = TEXTURE_STATIC)", AS_METHODPR(Texture3D, SetSize, (int, int, int, unsigned, TextureUsage), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Texture3D::SetData(Image* image, bool useAlpha=false)", "bool SetData(Image@+, bool = false)", AS_METHODPR(Texture3D, SetData, (Image*, bool), bool), AS_CALL_THISCALL));

    // static void Texture3D::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Texture3D
        REGISTER_MEMBERS_MANUAL_PART_Texture3D();
    #endif
}

// SharedPtr<Image> TextureCube::GetImage(CubeMapFace face) const
// SharedPtr<Image> TextureCube::GetImage(CubeMapFace face) const | File: ../Graphics/TextureCube.h
static Image* TextureCube_GetImage_CubeMapFace(TextureCube* ptr, CubeMapFace face)
{
    SharedPtr<Image> result = ptr->GetImage(face);
    return result.Detach();
}


// class TextureCube | File: ../Graphics/TextureCube.h
void CollectMembers_TextureCube(MemberCollection& members)
{
    CollectMembers_Texture(members);

    Remove(members.methods_, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(members.methods_, "virtual bool Resource::EndLoad()");
    Remove(members.methods_, "virtual void GPUObject::OnDeviceLost()");
    Remove(members.methods_, "virtual void GPUObject::OnDeviceReset()");
    Remove(members.methods_, "virtual void GPUObject::Release()");

    // bool TextureCube::GetData(CubeMapFace face, unsigned level, void* dest) const
    // Error: type "void*" can not automatically bind
    // bool TextureCube::SetData(CubeMapFace face, unsigned level, int x, int y, int width, int height, const void* data)
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool TextureCube::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(TextureCube, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool TextureCube::EndLoad() override", "bool EndLoad()", AS_METHODPR(TextureCube, EndLoad, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TextureCube::OnDeviceLost() override", "void OnDeviceLost()", AS_METHODPR(TextureCube, OnDeviceLost, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TextureCube::OnDeviceReset() override", "void OnDeviceReset()", AS_METHODPR(TextureCube, OnDeviceReset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void TextureCube::Release() override", "void Release()", AS_METHODPR(TextureCube, Release, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool TextureCube::SetSize(int size, unsigned format, TextureUsage usage=TEXTURE_STATIC, int multiSample=1)", "bool SetSize(int, uint, TextureUsage = TEXTURE_STATIC, int = 1)", AS_METHODPR(TextureCube, SetSize, (int, unsigned, TextureUsage, int), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool TextureCube::SetData(CubeMapFace face, Deserializer& source)", "bool SetData(CubeMapFace, Deserializer&)", AS_METHODPR(TextureCube, SetData, (CubeMapFace, Deserializer&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool TextureCube::SetData(CubeMapFace face, Image* image, bool useAlpha=false)", "bool SetData(CubeMapFace, Image@+, bool = false)", AS_METHODPR(TextureCube, SetData, (CubeMapFace, Image*, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<Image> TextureCube::GetImage(CubeMapFace face) const", "Image@+ GetImage(CubeMapFace) const", AS_FUNCTION_OBJFIRST(TextureCube_GetImage_CubeMapFace), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* TextureCube::GetRenderSurface(CubeMapFace face) const", "RenderSurface@+ GetRenderSurface(CubeMapFace) const", AS_METHODPR(TextureCube, GetRenderSurface, (CubeMapFace) const, RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* TextureCube::GetRenderSurface(CubeMapFace face) const", "RenderSurface@+ get_renderSurfaces(CubeMapFace) const", AS_METHODPR(TextureCube, GetRenderSurface, (CubeMapFace) const, RenderSurface*), AS_CALL_THISCALL));

    // static void TextureCube::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_TextureCube
        REGISTER_MEMBERS_MANUAL_PART_TextureCube();
    #endif
}

// struct TextureFrame | File: ../Graphics/ParticleEffect.h
void CollectMembers_TextureFrame(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("Rect TextureFrame::uv_", "Rect uv", offsetof(TextureFrame, uv_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float TextureFrame::time_", "float time", offsetof(TextureFrame, time_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_TextureFrame
        REGISTER_MEMBERS_MANUAL_PART_TextureFrame();
    #endif
}

// struct TrailPoint | File: ../Graphics/RibbonTrail.h
void CollectMembers_TrailPoint(MemberCollection& members)
{
    // TrailPoint* TrailPoint::next_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 TrailPoint::position_", "Vector3 position", offsetof(TrailPoint, position_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 TrailPoint::forward_", "Vector3 forward", offsetof(TrailPoint, forward_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Vector3 TrailPoint::parentPos_", "Vector3 parentPos", offsetof(TrailPoint, parentPos_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float TrailPoint::elapsedLength_", "float elapsedLength", offsetof(TrailPoint, elapsedLength_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float TrailPoint::lifetime_", "float lifetime", offsetof(TrailPoint, lifetime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("float TrailPoint::sortDistance_", "float sortDistance", offsetof(TrailPoint, sortDistance_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_TrailPoint
        REGISTER_MEMBERS_MANUAL_PART_TrailPoint();
    #endif
}

// bool VertexBuffer::SetSize(unsigned vertexCount, const PODVector<VertexElement>& elements, bool dynamic=false)
// bool VertexBuffer::SetSize(unsigned vertexCount, const PODVector<VertexElement>& elements, bool dynamic=false) | File: ../Graphics/VertexBuffer.h
static bool VertexBuffer_SetSize_unsigned_PODVectorVertexElement_bool(VertexBuffer* ptr, unsigned vertexCount, CScriptArray* elements_conv, bool dynamic)
{
    PODVector<VertexElement> elements = ArrayToPODVector<VertexElement>(elements_conv);
    bool result = ptr->SetSize(vertexCount, elements, dynamic);
    return result;
}


// const PODVector<VertexElement>& VertexBuffer::GetElements() const
// const PODVector<VertexElement>& VertexBuffer::GetElements() const | File: ../Graphics/VertexBuffer.h
static CScriptArray* VertexBuffer_GetElements_void(VertexBuffer* ptr)
{
    const PODVector<VertexElement>& result = ptr->GetElements();
    return VectorToArray(result, "Array<VertexElement>");
}


// static bool VertexBuffer::HasElement(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0)
// static bool VertexBuffer::HasElement(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) | File: ../Graphics/VertexBuffer.h
static bool VertexBuffer_HasElement_PODVectorVertexElement_VertexElementType_VertexElementSemantic_unsignedchar(CScriptArray* elements_conv, VertexElementType type, VertexElementSemantic semantic, unsigned char index)
{
    PODVector<VertexElement> elements = ArrayToPODVector<VertexElement>(elements_conv);
    bool result = VertexBuffer::HasElement(elements, type, semantic, index);
    return result;
}


// static unsigned VertexBuffer::GetElementOffset(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0)
// static unsigned VertexBuffer::GetElementOffset(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) | File: ../Graphics/VertexBuffer.h
static unsigned VertexBuffer_GetElementOffset_PODVectorVertexElement_VertexElementType_VertexElementSemantic_unsignedchar(CScriptArray* elements_conv, VertexElementType type, VertexElementSemantic semantic, unsigned char index)
{
    PODVector<VertexElement> elements = ArrayToPODVector<VertexElement>(elements_conv);
    unsigned result = VertexBuffer::GetElementOffset(elements, type, semantic, index);
    return result;
}


// static PODVector<VertexElement> VertexBuffer::GetElements(unsigned elementMask)
// static PODVector<VertexElement> VertexBuffer::GetElements(unsigned elementMask) | File: ../Graphics/VertexBuffer.h
static CScriptArray* VertexBuffer_GetElements_unsigned(unsigned elementMask)
{
    PODVector<VertexElement> result = VertexBuffer::GetElements(elementMask);
    return VectorToArray(result, "Array<VertexElement>");
}


// static unsigned VertexBuffer::GetVertexSize(const PODVector<VertexElement>& elements)
// static unsigned VertexBuffer::GetVertexSize(const PODVector<VertexElement>& elements) | File: ../Graphics/VertexBuffer.h
static unsigned VertexBuffer_GetVertexSize_PODVectorVertexElement(CScriptArray* elements_conv)
{
    PODVector<VertexElement> elements = ArrayToPODVector<VertexElement>(elements_conv);
    unsigned result = VertexBuffer::GetVertexSize(elements);
    return result;
}


// class VertexBuffer | File: ../Graphics/VertexBuffer.h
void CollectMembers_VertexBuffer(MemberCollection& members)
{
    CollectMembers_Object(members);
    CollectMembers_GPUObject(members);

    Remove(members.methods_, "virtual void GPUObject::OnDeviceLost()");
    Remove(members.methods_, "virtual void GPUObject::OnDeviceReset()");
    Remove(members.methods_, "virtual void GPUObject::Release()");

    // const VertexElement* VertexBuffer::GetElement(VertexElementSemantic semantic, unsigned char index=0) const
    // Error: type "const VertexElement*" can not automatically bind
    // const VertexElement* VertexBuffer::GetElement(VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) const
    // Error: type "const VertexElement*" can not automatically bind
    // unsigned char* VertexBuffer::GetShadowData() const
    // Error: type "unsigned char*" can not automatically bind
    // SharedArrayPtr<unsigned char> VertexBuffer::GetShadowDataShared() const
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind
    // void* VertexBuffer::Lock(unsigned start, unsigned count, bool discard=false)
    // Error: type "void*" can not automatically bind
    // bool VertexBuffer::SetData(const void* data)
    // Error: type "const void*" can not automatically bind
    // bool VertexBuffer::SetDataRange(const void* data, unsigned start, unsigned count, bool discard=false)
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void VertexBuffer::OnDeviceLost() override", "void OnDeviceLost()", AS_METHODPR(VertexBuffer, OnDeviceLost, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void VertexBuffer::OnDeviceReset() override", "void OnDeviceReset()", AS_METHODPR(VertexBuffer, OnDeviceReset, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void VertexBuffer::Release() override", "void Release()", AS_METHODPR(VertexBuffer, Release, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void VertexBuffer::SetShadowed(bool enable)", "void SetShadowed(bool)", AS_METHODPR(VertexBuffer, SetShadowed, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void VertexBuffer::SetShadowed(bool enable)", "void set_shadowed(bool)", AS_METHODPR(VertexBuffer, SetShadowed, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::SetSize(unsigned vertexCount, const PODVector<VertexElement>& elements, bool dynamic=false)", "bool SetSize(uint, Array<VertexElement>@+, bool = false)", AS_FUNCTION_OBJFIRST(VertexBuffer_SetSize_unsigned_PODVectorVertexElement_bool), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::SetSize(unsigned vertexCount, unsigned elementMask, bool dynamic=false)", "bool SetSize(uint, uint, bool = false)", AS_METHODPR(VertexBuffer, SetSize, (unsigned, unsigned, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void VertexBuffer::Unlock()", "void Unlock()", AS_METHODPR(VertexBuffer, Unlock, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::IsShadowed() const", "bool IsShadowed() const", AS_METHODPR(VertexBuffer, IsShadowed, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::IsShadowed() const", "bool get_shadowed() const", AS_METHODPR(VertexBuffer, IsShadowed, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::IsDynamic() const", "bool IsDynamic() const", AS_METHODPR(VertexBuffer, IsDynamic, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::IsDynamic() const", "bool get_dynamic() const", AS_METHODPR(VertexBuffer, IsDynamic, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::IsLocked() const", "bool IsLocked() const", AS_METHODPR(VertexBuffer, IsLocked, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned VertexBuffer::GetVertexCount() const", "uint GetVertexCount() const", AS_METHODPR(VertexBuffer, GetVertexCount, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned VertexBuffer::GetVertexCount() const", "uint get_vertexCount() const", AS_METHODPR(VertexBuffer, GetVertexCount, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned VertexBuffer::GetVertexSize() const", "uint GetVertexSize() const", AS_METHODPR(VertexBuffer, GetVertexSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned VertexBuffer::GetVertexSize() const", "uint get_vertexSize() const", AS_METHODPR(VertexBuffer, GetVertexSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const PODVector<VertexElement>& VertexBuffer::GetElements() const", "Array<VertexElement>@ GetElements() const", AS_FUNCTION_OBJFIRST(VertexBuffer_GetElements_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("const PODVector<VertexElement>& VertexBuffer::GetElements() const", "Array<VertexElement>@ get_elements() const", AS_FUNCTION_OBJFIRST(VertexBuffer_GetElements_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::HasElement(VertexElementSemantic semantic, unsigned char index=0) const", "bool HasElement(VertexElementSemantic, uint8 = 0) const", AS_METHODPR(VertexBuffer, HasElement, (VertexElementSemantic, unsigned char) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::HasElement(VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) const", "bool HasElement(VertexElementType, VertexElementSemantic, uint8 = 0) const", AS_METHODPR(VertexBuffer, HasElement, (VertexElementType, VertexElementSemantic, unsigned char) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned VertexBuffer::GetElementOffset(VertexElementSemantic semantic, unsigned char index=0) const", "uint GetElementOffset(VertexElementSemantic, uint8 = 0) const", AS_METHODPR(VertexBuffer, GetElementOffset, (VertexElementSemantic, unsigned char) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned VertexBuffer::GetElementOffset(VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) const", "uint GetElementOffset(VertexElementType, VertexElementSemantic, uint8 = 0) const", AS_METHODPR(VertexBuffer, GetElementOffset, (VertexElementType, VertexElementSemantic, unsigned char) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VertexMaskFlags VertexBuffer::GetElementMask() const", "VertexMaskFlags GetElementMask() const", AS_METHODPR(VertexBuffer, GetElementMask, () const, VertexMaskFlags), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VertexMaskFlags VertexBuffer::GetElementMask() const", "VertexMaskFlags get_elementMask() const", AS_METHODPR(VertexBuffer, GetElementMask, () const, VertexMaskFlags), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned long long VertexBuffer::GetBufferHash(unsigned streamIndex)", "uint64 GetBufferHash(uint)", AS_METHODPR(VertexBuffer, GetBufferHash, (unsigned), unsigned long long), AS_CALL_THISCALL));

    // static const VertexElement* VertexBuffer::GetElement(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0)
    // Error: type "const VertexElement*" can not automatically bind
    // static void VertexBuffer::UpdateOffsets(PODVector<VertexElement>& elements)
    // Error: type "PODVector<VertexElement>&" can not automatically bind

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static bool VertexBuffer::HasElement(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0)", "bool HasElement(Array<VertexElement>@+, VertexElementType, VertexElementSemantic, uint8 = 0)", AS_FUNCTION(VertexBuffer_HasElement_PODVectorVertexElement_VertexElementType_VertexElementSemantic_unsignedchar), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned VertexBuffer::GetElementOffset(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0)", "uint GetElementOffset(Array<VertexElement>@+, VertexElementType, VertexElementSemantic, uint8 = 0)", AS_FUNCTION(VertexBuffer_GetElementOffset_PODVectorVertexElement_VertexElementType_VertexElementSemantic_unsignedchar), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static PODVector<VertexElement> VertexBuffer::GetElements(unsigned elementMask)", "Array<VertexElement>@ GetElements(uint)", AS_FUNCTION(VertexBuffer_GetElements_unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned VertexBuffer::GetVertexSize(const PODVector<VertexElement>& elements)", "uint GetVertexSize(Array<VertexElement>@+)", AS_FUNCTION(VertexBuffer_GetVertexSize_PODVectorVertexElement), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned VertexBuffer::GetVertexSize(unsigned elementMask)", "uint GetVertexSize(uint)", AS_FUNCTIONPR(VertexBuffer::GetVertexSize, (unsigned), unsigned), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_VertexBuffer
        REGISTER_MEMBERS_MANUAL_PART_VertexBuffer();
    #endif
}

// struct VertexBufferDesc | File: ../Graphics/Model.h
void CollectMembers_VertexBufferDesc(MemberCollection& members)
{
    // PODVector<VertexElement> VertexBufferDesc::vertexElements_
    // Error: type "PODVector<VertexElement>" can not automatically bind
    // SharedArrayPtr<unsigned char> VertexBufferDesc::data_
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned VertexBufferDesc::vertexCount_", "uint vertexCount", offsetof(VertexBufferDesc, vertexCount_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned VertexBufferDesc::dataSize_", "uint dataSize", offsetof(VertexBufferDesc, dataSize_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_VertexBufferDesc
        REGISTER_MEMBERS_MANUAL_PART_VertexBufferDesc();
    #endif
}

// struct VertexBufferMorph | File: ../Graphics/Model.h
void CollectMembers_VertexBufferMorph(MemberCollection& members)
{
    // SharedArrayPtr<unsigned char> VertexBufferMorph::morphData_
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("VertexMaskFlags VertexBufferMorph::elementMask_", "VertexMaskFlags elementMask", offsetof(VertexBufferMorph, elementMask_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned VertexBufferMorph::vertexCount_", "uint vertexCount", offsetof(VertexBufferMorph, vertexCount_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned VertexBufferMorph::dataSize_", "uint dataSize", offsetof(VertexBufferMorph, dataSize_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_VertexBufferMorph
        REGISTER_MEMBERS_MANUAL_PART_VertexBufferMorph();
    #endif
}

// struct VertexElement | File: ../Graphics/GraphicsDefs.h
void CollectMembers_VertexElement(MemberCollection& members)
{
    // bool VertexElement::operator!=(const VertexElement& rhs) const
    // Only operator== is needed

    members.methods_.Push(RegisterObjectMethodArgs("bool VertexElement::operator==(const VertexElement& rhs) const", "bool opEquals(const VertexElement&in) const", AS_METHODPR(VertexElement, operator==, (const VertexElement&) const, bool), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("VertexElementType VertexElement::type_", "VertexElementType type", offsetof(VertexElement, type_)));
    members.fields_.Push(RegisterObjectPropertyArgs("VertexElementSemantic VertexElement::semantic_", "VertexElementSemantic semantic", offsetof(VertexElement, semantic_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned char VertexElement::index_", "uint8 index", offsetof(VertexElement, index_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool VertexElement::perInstance_", "bool perInstance", offsetof(VertexElement, perInstance_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned VertexElement::offset_", "uint offset", offsetof(VertexElement, offset_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_VertexElement
        REGISTER_MEMBERS_MANUAL_PART_VertexElement();
    #endif
}

// const PODVector<Drawable*>& View::GetGeometries() const
// const PODVector<Drawable*>& View::GetGeometries() const | File: ../Graphics/View.h
static CScriptArray* View_GetGeometries_void(View* ptr)
{
    const PODVector<Drawable*>& result = ptr->GetGeometries();
    return VectorToHandleArray(result, "Array<Drawable@>");
}


// const PODVector<Drawable*>& View::GetOccluders() const
// const PODVector<Drawable*>& View::GetOccluders() const | File: ../Graphics/View.h
static CScriptArray* View_GetOccluders_void(View* ptr)
{
    const PODVector<Drawable*>& result = ptr->GetOccluders();
    return VectorToHandleArray(result, "Array<Drawable@>");
}


// const PODVector<Light*>& View::GetLights() const
// const PODVector<Light*>& View::GetLights() const | File: ../Graphics/View.h
static CScriptArray* View_GetLights_void(View* ptr)
{
    const PODVector<Light*>& result = ptr->GetLights();
    return VectorToHandleArray(result, "Array<Light@>");
}


// class View | File: ../Graphics/View.h
void CollectMembers_View(MemberCollection& members)
{
    CollectMembers_Object(members);

    // const Vector<LightBatchQueue>& View::GetLightQueues() const
    // Error: type "const Vector<LightBatchQueue>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool View::Define(RenderSurface* renderTarget, Viewport* viewport)", "bool Define(RenderSurface@+, Viewport@+)", AS_METHODPR(View, Define, (RenderSurface*, Viewport*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void View::Update(const FrameInfo& frame)", "void Update(const FrameInfo&in)", AS_METHODPR(View, Update, (const FrameInfo&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void View::Render()", "void Render()", AS_METHODPR(View, Render, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Graphics* View::GetGraphics() const", "Graphics@+ GetGraphics() const", AS_METHODPR(View, GetGraphics, () const, Graphics*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Renderer* View::GetRenderer() const", "Renderer@+ GetRenderer() const", AS_METHODPR(View, GetRenderer, () const, Renderer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Scene* View::GetScene() const", "Scene@+ GetScene() const", AS_METHODPR(View, GetScene, () const, Scene*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Octree* View::GetOctree() const", "Octree@+ GetOctree() const", AS_METHODPR(View, GetOctree, () const, Octree*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Camera* View::GetCamera() const", "Camera@+ GetCamera() const", AS_METHODPR(View, GetCamera, () const, Camera*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Camera* View::GetCullCamera() const", "Camera@+ GetCullCamera() const", AS_METHODPR(View, GetCullCamera, () const, Camera*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const FrameInfo& View::GetFrameInfo() const", "const FrameInfo& GetFrameInfo() const", AS_METHODPR(View, GetFrameInfo, () const, const FrameInfo&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderSurface* View::GetRenderTarget() const", "RenderSurface@+ GetRenderTarget() const", AS_METHODPR(View, GetRenderTarget, () const, RenderSurface*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool View::GetDrawDebug() const", "bool GetDrawDebug() const", AS_METHODPR(View, GetDrawDebug, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntRect& View::GetViewRect() const", "const IntRect& GetViewRect() const", AS_METHODPR(View, GetViewRect, () const, const IntRect&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntVector2& View::GetViewSize() const", "const IntVector2& GetViewSize() const", AS_METHODPR(View, GetViewSize, () const, const IntVector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const PODVector<Drawable*>& View::GetGeometries() const", "Array<Drawable@>@ GetGeometries() const", AS_FUNCTION_OBJFIRST(View_GetGeometries_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("const PODVector<Drawable*>& View::GetOccluders() const", "Array<Drawable@>@ GetOccluders() const", AS_FUNCTION_OBJFIRST(View_GetOccluders_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("const PODVector<Light*>& View::GetLights() const", "Array<Light@>@ GetLights() const", AS_FUNCTION_OBJFIRST(View_GetLights_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("OcclusionBuffer* View::GetOcclusionBuffer() const", "OcclusionBuffer@+ GetOcclusionBuffer() const", AS_METHODPR(View, GetOcclusionBuffer, () const, OcclusionBuffer*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned View::GetNumActiveOccluders() const", "uint GetNumActiveOccluders() const", AS_METHODPR(View, GetNumActiveOccluders, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("View* View::GetSourceView() const", "View@+ GetSourceView() const", AS_METHODPR(View, GetSourceView, () const, View*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void View::SetGlobalShaderParameters()", "void SetGlobalShaderParameters()", AS_METHODPR(View, SetGlobalShaderParameters, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void View::SetCameraShaderParameters(Camera* camera)", "void SetCameraShaderParameters(Camera@+)", AS_METHODPR(View, SetCameraShaderParameters, (Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void View::SetCommandShaderParameters(const RenderPathCommand& command)", "void SetCommandShaderParameters(const RenderPathCommand&in)", AS_METHODPR(View, SetCommandShaderParameters, (const RenderPathCommand&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void View::SetGBufferShaderParameters(const IntVector2& texSize, const IntRect& viewRect)", "void SetGBufferShaderParameters(const IntVector2&in, const IntRect&in)", AS_METHODPR(View, SetGBufferShaderParameters, (const IntVector2&, const IntRect&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void View::DrawFullscreenQuad(bool setIdentityProjection=false)", "void DrawFullscreenQuad(bool = false)", AS_METHODPR(View, DrawFullscreenQuad, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* View::FindNamedTexture(const String& name, bool isRenderTarget, bool isVolumeMap=false)", "Texture@+ FindNamedTexture(const String&in, bool, bool = false)", AS_METHODPR(View, FindNamedTexture, (const String&, bool, bool), Texture*), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_View
        REGISTER_MEMBERS_MANUAL_PART_View();
    #endif
}

// class Viewport | File: ../Graphics/Viewport.h
void CollectMembers_Viewport(MemberCollection& members)
{
    CollectMembers_Object(members);

    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetScene(Scene* scene)", "void SetScene(Scene@+)", AS_METHODPR(Viewport, SetScene, (Scene*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetScene(Scene* scene)", "void set_scene(Scene@+)", AS_METHODPR(Viewport, SetScene, (Scene*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetCamera(Camera* camera)", "void SetCamera(Camera@+)", AS_METHODPR(Viewport, SetCamera, (Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetCamera(Camera* camera)", "void set_camera(Camera@+)", AS_METHODPR(Viewport, SetCamera, (Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetRect(const IntRect& rect)", "void SetRect(const IntRect&in)", AS_METHODPR(Viewport, SetRect, (const IntRect&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetRect(const IntRect& rect)", "void set_rect(const IntRect&in)", AS_METHODPR(Viewport, SetRect, (const IntRect&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetRenderPath(RenderPath* renderPath)", "void SetRenderPath(RenderPath@+)", AS_METHODPR(Viewport, SetRenderPath, (RenderPath*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetRenderPath(RenderPath* renderPath)", "void set_renderPath(RenderPath@+)", AS_METHODPR(Viewport, SetRenderPath, (RenderPath*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Viewport::SetRenderPath(XMLFile* file)", "bool SetRenderPath(XMLFile@+)", AS_METHODPR(Viewport, SetRenderPath, (XMLFile*), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetDrawDebug(bool enable)", "void SetDrawDebug(bool)", AS_METHODPR(Viewport, SetDrawDebug, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetDrawDebug(bool enable)", "void set_drawDebug(bool)", AS_METHODPR(Viewport, SetDrawDebug, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetCullCamera(Camera* camera)", "void SetCullCamera(Camera@+)", AS_METHODPR(Viewport, SetCullCamera, (Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::SetCullCamera(Camera* camera)", "void set_cullCamera(Camera@+)", AS_METHODPR(Viewport, SetCullCamera, (Camera*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Scene* Viewport::GetScene() const", "Scene@+ GetScene() const", AS_METHODPR(Viewport, GetScene, () const, Scene*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Scene* Viewport::GetScene() const", "Scene@+ get_scene() const", AS_METHODPR(Viewport, GetScene, () const, Scene*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Camera* Viewport::GetCamera() const", "Camera@+ GetCamera() const", AS_METHODPR(Viewport, GetCamera, () const, Camera*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Camera* Viewport::GetCamera() const", "Camera@+ get_camera() const", AS_METHODPR(Viewport, GetCamera, () const, Camera*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("View* Viewport::GetView() const", "View@+ GetView() const", AS_METHODPR(Viewport, GetView, () const, View*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntRect& Viewport::GetRect() const", "const IntRect& GetRect() const", AS_METHODPR(Viewport, GetRect, () const, const IntRect&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntRect& Viewport::GetRect() const", "const IntRect& get_rect() const", AS_METHODPR(Viewport, GetRect, () const, const IntRect&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderPath* Viewport::GetRenderPath() const", "RenderPath@+ GetRenderPath() const", AS_METHODPR(Viewport, GetRenderPath, () const, RenderPath*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RenderPath* Viewport::GetRenderPath() const", "RenderPath@+ get_renderPath() const", AS_METHODPR(Viewport, GetRenderPath, () const, RenderPath*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Viewport::GetDrawDebug() const", "bool GetDrawDebug() const", AS_METHODPR(Viewport, GetDrawDebug, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Viewport::GetDrawDebug() const", "bool get_drawDebug() const", AS_METHODPR(Viewport, GetDrawDebug, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Camera* Viewport::GetCullCamera() const", "Camera@+ GetCullCamera() const", AS_METHODPR(Viewport, GetCullCamera, () const, Camera*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Camera* Viewport::GetCullCamera() const", "Camera@+ get_cullCamera() const", AS_METHODPR(Viewport, GetCullCamera, () const, Camera*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Ray Viewport::GetScreenRay(int x, int y) const", "Ray GetScreenRay(int, int) const", AS_METHODPR(Viewport, GetScreenRay, (int, int) const, Ray), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector2 Viewport::WorldToScreenPoint(const Vector3& worldPos) const", "IntVector2 WorldToScreenPoint(const Vector3&in) const", AS_METHODPR(Viewport, WorldToScreenPoint, (const Vector3&) const, IntVector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 Viewport::ScreenToWorldPoint(int x, int y, float depth) const", "Vector3 ScreenToWorldPoint(int, int, float) const", AS_METHODPR(Viewport, ScreenToWorldPoint, (int, int, float) const, Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Viewport::AllocateView()", "void AllocateView()", AS_METHODPR(Viewport, AllocateView, (), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Viewport
        REGISTER_MEMBERS_MANUAL_PART_Viewport();
    #endif
}

// struct WindowModeParams | File: ../Graphics/Graphics.h
void CollectMembers_WindowModeParams(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("int WindowModeParams::width_", "int width", offsetof(WindowModeParams, width_)));
    members.fields_.Push(RegisterObjectPropertyArgs("int WindowModeParams::height_", "int height", offsetof(WindowModeParams, height_)));
    members.fields_.Push(RegisterObjectPropertyArgs("ScreenModeParams WindowModeParams::screenParams_", "ScreenModeParams screenParams", offsetof(WindowModeParams, screenParams_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_WindowModeParams
        REGISTER_MEMBERS_MANUAL_PART_WindowModeParams();
    #endif
}

// class Zone | File: ../Graphics/Zone.h
void CollectMembers_Zone(MemberCollection& members)
{
    CollectMembers_Drawable(members);

    Remove(members.methods_, "void Drawable::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override");

    Remove(members.staticMethods_, "static void Drawable::RegisterObject(Context* context)");

    members.methods_.Push(RegisterObjectMethodArgs("void Zone::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(Zone, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetBoundingBox(const BoundingBox& box)", "void SetBoundingBox(const BoundingBox&in)", AS_METHODPR(Zone, SetBoundingBox, (const BoundingBox&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetBoundingBox(const BoundingBox& box)", "void set_boundingBox(const BoundingBox&in)", AS_METHODPR(Zone, SetBoundingBox, (const BoundingBox&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetAmbientColor(const Color& color)", "void SetAmbientColor(const Color&in)", AS_METHODPR(Zone, SetAmbientColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetAmbientColor(const Color& color)", "void set_ambientColor(const Color&in)", AS_METHODPR(Zone, SetAmbientColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetFogColor(const Color& color)", "void SetFogColor(const Color&in)", AS_METHODPR(Zone, SetFogColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetFogColor(const Color& color)", "void set_fogColor(const Color&in)", AS_METHODPR(Zone, SetFogColor, (const Color&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetFogStart(float start)", "void SetFogStart(float)", AS_METHODPR(Zone, SetFogStart, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetFogStart(float start)", "void set_fogStart(float)", AS_METHODPR(Zone, SetFogStart, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetFogEnd(float end)", "void SetFogEnd(float)", AS_METHODPR(Zone, SetFogEnd, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetFogEnd(float end)", "void set_fogEnd(float)", AS_METHODPR(Zone, SetFogEnd, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetFogHeight(float height)", "void SetFogHeight(float)", AS_METHODPR(Zone, SetFogHeight, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetFogHeight(float height)", "void set_fogHeight(float)", AS_METHODPR(Zone, SetFogHeight, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetFogHeightScale(float scale)", "void SetFogHeightScale(float)", AS_METHODPR(Zone, SetFogHeightScale, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetFogHeightScale(float scale)", "void set_fogHeightScale(float)", AS_METHODPR(Zone, SetFogHeightScale, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetPriority(int priority)", "void SetPriority(int)", AS_METHODPR(Zone, SetPriority, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetPriority(int priority)", "void set_priority(int)", AS_METHODPR(Zone, SetPriority, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetHeightFog(bool enable)", "void SetHeightFog(bool)", AS_METHODPR(Zone, SetHeightFog, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetHeightFog(bool enable)", "void set_heightFog(bool)", AS_METHODPR(Zone, SetHeightFog, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetOverride(bool enable)", "void SetOverride(bool)", AS_METHODPR(Zone, SetOverride, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetOverride(bool enable)", "void set_override(bool)", AS_METHODPR(Zone, SetOverride, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetAmbientGradient(bool enable)", "void SetAmbientGradient(bool)", AS_METHODPR(Zone, SetAmbientGradient, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetAmbientGradient(bool enable)", "void set_ambientGradient(bool)", AS_METHODPR(Zone, SetAmbientGradient, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetZoneTexture(Texture* texture)", "void SetZoneTexture(Texture@+)", AS_METHODPR(Zone, SetZoneTexture, (Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetZoneTexture(Texture* texture)", "void set_zoneTexture(Texture@+)", AS_METHODPR(Zone, SetZoneTexture, (Texture*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix3x4& Zone::GetInverseWorldTransform() const", "const Matrix3x4& GetInverseWorldTransform() const", AS_METHODPR(Zone, GetInverseWorldTransform, () const, const Matrix3x4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix3x4& Zone::GetInverseWorldTransform() const", "const Matrix3x4& get_inverseWorldTransform() const", AS_METHODPR(Zone, GetInverseWorldTransform, () const, const Matrix3x4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Zone::GetAmbientColor() const", "const Color& GetAmbientColor() const", AS_METHODPR(Zone, GetAmbientColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Zone::GetAmbientColor() const", "const Color& get_ambientColor() const", AS_METHODPR(Zone, GetAmbientColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Zone::GetAmbientStartColor()", "const Color& GetAmbientStartColor()", AS_METHODPR(Zone, GetAmbientStartColor, (), const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Zone::GetAmbientStartColor()", "const Color& get_ambientStartColor()", AS_METHODPR(Zone, GetAmbientStartColor, (), const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Zone::GetAmbientEndColor()", "const Color& GetAmbientEndColor()", AS_METHODPR(Zone, GetAmbientEndColor, (), const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Zone::GetAmbientEndColor()", "const Color& get_ambientEndColor()", AS_METHODPR(Zone, GetAmbientEndColor, (), const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Zone::GetFogColor() const", "const Color& GetFogColor() const", AS_METHODPR(Zone, GetFogColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Zone::GetFogColor() const", "const Color& get_fogColor() const", AS_METHODPR(Zone, GetFogColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Zone::GetFogStart() const", "float GetFogStart() const", AS_METHODPR(Zone, GetFogStart, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Zone::GetFogStart() const", "float get_fogStart() const", AS_METHODPR(Zone, GetFogStart, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Zone::GetFogEnd() const", "float GetFogEnd() const", AS_METHODPR(Zone, GetFogEnd, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Zone::GetFogEnd() const", "float get_fogEnd() const", AS_METHODPR(Zone, GetFogEnd, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Zone::GetFogHeight() const", "float GetFogHeight() const", AS_METHODPR(Zone, GetFogHeight, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Zone::GetFogHeight() const", "float get_fogHeight() const", AS_METHODPR(Zone, GetFogHeight, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Zone::GetFogHeightScale() const", "float GetFogHeightScale() const", AS_METHODPR(Zone, GetFogHeightScale, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Zone::GetFogHeightScale() const", "float get_fogHeightScale() const", AS_METHODPR(Zone, GetFogHeightScale, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Zone::GetPriority() const", "int GetPriority() const", AS_METHODPR(Zone, GetPriority, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Zone::GetPriority() const", "int get_priority() const", AS_METHODPR(Zone, GetPriority, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Zone::GetHeightFog() const", "bool GetHeightFog() const", AS_METHODPR(Zone, GetHeightFog, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Zone::GetHeightFog() const", "bool get_heightFog() const", AS_METHODPR(Zone, GetHeightFog, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Zone::GetOverride() const", "bool GetOverride() const", AS_METHODPR(Zone, GetOverride, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Zone::GetOverride() const", "bool get_override() const", AS_METHODPR(Zone, GetOverride, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Zone::GetAmbientGradient() const", "bool GetAmbientGradient() const", AS_METHODPR(Zone, GetAmbientGradient, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Zone::GetAmbientGradient() const", "bool get_ambientGradient() const", AS_METHODPR(Zone, GetAmbientGradient, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Zone::GetZoneTexture() const", "Texture@+ GetZoneTexture() const", AS_METHODPR(Zone, GetZoneTexture, () const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Texture* Zone::GetZoneTexture() const", "Texture@+ get_zoneTexture() const", AS_METHODPR(Zone, GetZoneTexture, () const, Texture*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Zone::IsInside(const Vector3& point) const", "bool IsInside(const Vector3&in) const", AS_METHODPR(Zone, IsInside, (const Vector3&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Zone::SetZoneTextureAttr(const ResourceRef& value)", "void SetZoneTextureAttr(const ResourceRef&in)", AS_METHODPR(Zone, SetZoneTextureAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef Zone::GetZoneTextureAttr() const", "ResourceRef GetZoneTextureAttr() const", AS_METHODPR(Zone, GetZoneTextureAttr, () const, ResourceRef), AS_CALL_THISCALL));

    // static void Zone::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Zone
        REGISTER_MEMBERS_MANUAL_PART_Zone();
    #endif
}

} // namespace Urho3D
