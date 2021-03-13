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

#include "../Graphics/AnimationController.h"
#include "../Graphics/IndexBuffer.h"
#include "../Graphics/RenderPath.h"
#include "../Graphics/Texture2D.h"
#include "../Graphics/Animation.h"
#include "../Graphics/AnimationState.h"
#include "../Graphics/AnimationController.h"
#include "../Graphics/GraphicsDefs.h"
#include "../Graphics/Model.h"
#include "../Graphics/AnimatedModel.h"
#include "../Graphics/ParticleEffect.h"
#include "../Graphics/VertexBuffer.h"
#include "../Graphics/Graphics.h"
#include "../Graphics/Octree.h"
#include "../Graphics/TextureCube.h"
#include "../Graphics/Renderer.h"
#include "../Graphics/Technique.h"

namespace Urho3D
{

// Vector<RenderTargetInfo> RenderPath::renderTargets_ | File: ../Graphics/RenderPath.h
RenderTargetInfo* RenderPath_GetRenderTarget(unsigned index, RenderPath* ptr);

// Vector<RenderPathCommand> RenderPath::commands_ | File: ../Graphics/RenderPath.h
RenderPathCommand* RenderPath_GetCommand(unsigned index, RenderPath* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_RenderPath() \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("Vector<RenderTargetInfo> RenderPath::renderTargets_", "const RenderTargetInfo& get_renderTargets(uint) const", AS_FUNCTION_OBJLAST(RenderPath_GetRenderTarget), AS_CALL_CDECL_OBJLAST)); \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("Vector<RenderPathCommand> RenderPath::commands_", "const RenderPathCommand& get_commands(uint) const", AS_FUNCTION_OBJLAST(RenderPath_GetCommand), AS_CALL_CDECL_OBJLAST)); \

// ========================================================================================

// SharedPtr<Technique> TechniqueEntry::technique_ | File: ../Graphics/Material.h
void TechniqueEntry_SetTechnique(Technique* technique, TechniqueEntry* ptr);

// SharedPtr<Technique> TechniqueEntry::technique_ | File: ../Graphics/Material.h
Technique* TechniqueEntry_GetTechnique(TechniqueEntry* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_TechniqueEntry() \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("SharedPtr<Technique> TechniqueEntry::technique_", "void set_technique(Technique@+)", AS_FUNCTION_OBJLAST(TechniqueEntry_SetTechnique), AS_CALL_CDECL_OBJLAST)); \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("SharedPtr<Technique> TechniqueEntry::technique_", "Technique@+ get_technique() const", AS_FUNCTION_OBJLAST(TechniqueEntry_GetTechnique), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

bool Material_Load_File(File* file, Material* ptr);

// const HashMap<StringHash, MaterialShaderParameter>& Material::GetShaderParameters() const | File: ../Graphics/Material.h
CScriptArray* Material_GetShaderParameterNames(Material* material);

// const TechniqueEntry& Material::GetTechniqueEntry(unsigned index) const | File: ../Graphics/Material.h
const TechniqueEntry& Material_GetTechniqueEntry(unsigned index, Material* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Material() \
    members.methods_.Push(RegisterObjectMethodArgs("dc07831b-d300-4aa7-9750-9a9a2769746d", "bool Load(File@+)", AS_FUNCTION_OBJLAST(Material_Load_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("const HashMap<StringHash, MaterialShaderParameter>& Material::GetShaderParameters() const", "Array<String>@ get_shaderParameterNames() const", AS_FUNCTION_OBJLAST(Material_GetShaderParameterNames), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("const TechniqueEntry& Material::GetTechniqueEntry(unsigned index) const", "const TechniqueEntry& get_techniqueEntries(uint) const", AS_FUNCTION_OBJLAST(Material_GetTechniqueEntry), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

bool ParticleEffect_Load_File(File* file, ParticleEffect* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_ParticleEffect() \
    members.methods_.Push(RegisterObjectMethodArgs("574f63cb-380c-4ba5-957b-8a837b317213", "bool Load(File@+)", AS_FUNCTION_OBJLAST(ParticleEffect_Load_File), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

VectorBuffer VertexBuffer_GetData(VertexBuffer* ptr);

// bool VertexBuffer::SetData(const void* data) | File: ../Graphics/VertexBuffer.h
bool VertexBuffer_SetData(VectorBuffer& src, VertexBuffer* ptr);

// bool VertexBuffer::SetDataRange(const void* data, unsigned start, unsigned count, bool discard = false) | File: ../Graphics/VertexBuffer.h
bool VertexBuffer_SetDataRange(VectorBuffer& src, unsigned start, unsigned count, bool discard, VertexBuffer* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_VertexBuffer() \
    members.methods_.Push(RegisterObjectMethodArgs("7cdfd3ef-6d52-4060-a585-e0fa0c8097f2", "VectorBuffer GetData() const", AS_FUNCTION_OBJLAST(VertexBuffer_GetData), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::SetData(const void* data)", "bool SetData(VectorBuffer&)", AS_FUNCTION_OBJLAST(VertexBuffer_SetData), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool VertexBuffer::SetDataRange(const void* data, unsigned start, unsigned count, bool discard = false)", "bool SetDataRange(VectorBuffer&, uint, uint, bool discard = false)", AS_FUNCTION_OBJLAST(VertexBuffer_SetDataRange), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

VectorBuffer IndexBuffer_GetData(IndexBuffer* ptr);

// bool IndexBuffer::SetData(const void* data) | File: ../Graphics/IndexBuffer.h
bool IndexBuffer_SetData(VectorBuffer& src, IndexBuffer* ptr);

// bool IndexBuffer::SetDataRange(const void* data, unsigned start, unsigned count, bool discard = false) | File: ../Graphics/IndexBuffer.h
bool IndexBuffer_SetDataRange(VectorBuffer& src, unsigned start, unsigned count, bool discard, IndexBuffer* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_IndexBuffer() \
    members.methods_.Push(RegisterObjectMethodArgs("8a99b74c-1525-4c4d-b3ae-c7b4a0afabde", "VectorBuffer GetData()", AS_FUNCTION_OBJLAST(IndexBuffer_GetData), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool IndexBuffer::SetData(const void* data)", "bool SetData(VectorBuffer&)", AS_FUNCTION_OBJLAST(IndexBuffer_SetData), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool IndexBuffer::SetDataRange(const void* data, unsigned start, unsigned count, bool discard = false)", "bool SetDataRange(VectorBuffer&, uint, uint, bool discard = false)", AS_FUNCTION_OBJLAST(IndexBuffer_SetDataRange), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

#define REGISTER_MEMBERS_MANUAL_PART_AnimationTrack() \
    members.methods_.Push(RegisterObjectMethodArgs("AnimationKeyFrame* AnimationTrack::GetKeyFrame(unsigned index)", "const AnimationKeyFrame& get_keyFrames(uint) const", AS_METHOD(AnimationTrack, GetKeyFrame), AS_CALL_THISCALL));

// ========================================================================================

// AnimationTriggerPoint* Animation::GetTrigger(unsigned index) | File: ../Graphics/Animation.h
AnimationTriggerPoint* Animation_GetTrigger(unsigned index, Animation* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Animation() \
    members.methods_.Push(RegisterObjectMethodArgs("AnimationTriggerPoint* Animation::GetTrigger(unsigned index)", "const AnimationTriggerPoint& get_triggers(uint) const", AS_FUNCTION_OBJLAST(Animation_GetTrigger), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

#define REGISTER_MEMBERS_MANUAL_PART_CascadeParameters() \
    members.fields_.Push(RegisterObjectPropertyArgs("Vector4 CascadeParameters::splits_", "float split1", offsetof(CascadeParameters, splits_.x_))); \
    members.fields_.Push(RegisterObjectPropertyArgs("Vector4 CascadeParameters::splits_", "float split2", offsetof(CascadeParameters, splits_.y_))); \
    members.fields_.Push(RegisterObjectPropertyArgs("Vector4 CascadeParameters::splits_", "float split3", offsetof(CascadeParameters, splits_.z_))); \
    members.fields_.Push(RegisterObjectPropertyArgs("Vector4 CascadeParameters::splits_", "float split4", offsetof(CascadeParameters, splits_.w_)));

// ========================================================================================

// void AnimationState::SetBoneWeight(const String& name, float weight, bool recursive = false) | File: ../Graphics/AnimationState.h
void AnimationState_SetBoneWeight(const String& name, float weight, AnimationState* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_AnimationState() \
    members.methods_.Push(RegisterObjectMethodArgs("void AnimationState::SetBoneWeight(const String& name, float weight, bool recursive = false)", "void set_boneWeights(const String&in, float)", AS_FUNCTION_OBJLAST(AnimationState_SetBoneWeight), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// virtual void StaticModel::SetModel(Model* model) | File: ../Graphics/StaticModel.h
void StaticModel_SetModel(Model* model, StaticModel* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_StaticModel() \
    members.methods_.Push(RegisterObjectMethodArgs("virtual void StaticModel::SetModel(Model* model)", "void SetModel(Model@+)", AS_FUNCTION_OBJLAST(StaticModel_SetModel), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("virtual void StaticModel::SetModel(Model* model)", "void set_model(Model@+)", AS_FUNCTION_OBJLAST(StaticModel_SetModel), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// const Vector<ModelMorph>& AnimatedModel::GetMorphs() const | File: ../Graphics/AnimatedModel.h
const String& AnimatedModel_GetMorphName(unsigned index, AnimatedModel* ptr);

// void AnimatedModel::SetModel(Model* model, bool createBones = true) | File: ../Graphics/AnimatedModel.h
void AnimatedModel_SetModel(Model* model, AnimatedModel* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_AnimatedModel() \
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<ModelMorph>& AnimatedModel::GetMorphs() const", "const String& get_morphNames(uint) const", AS_FUNCTION_OBJLAST(AnimatedModel_GetMorphName), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void AnimatedModel::SetModel(Model* model, bool createBones = true)", "void set_model(Model@+)", AS_FUNCTION_OBJLAST(AnimatedModel_SetModel), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// const Vector<AnimationControl>& AnimationController::GetAnimations() const | File: ../Graphics/AnimationController.h
unsigned AnimationController_GetNumAnimations(AnimationController* controller);

// const Vector<AnimationControl>& AnimationController::GetAnimations() const | File: ../Graphics/AnimationController.h
const AnimationControl* AnimationController_GetAnimation(unsigned index, AnimationController* controller);

#define REGISTER_MEMBERS_MANUAL_PART_AnimationController() \
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<AnimationControl>& AnimationController::GetAnimations() const", "uint get_numAnimations() const", AS_FUNCTION_OBJLAST(AnimationController_GetNumAnimations), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<AnimationControl>& AnimationController::GetAnimations() const", "const AnimationControl@+ get_animations(uint) const", AS_FUNCTION_OBJLAST(AnimationController_GetAnimation), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// void Graphics::PrecacheShaders(Deserializer& source) | File: ../Graphics/Graphics.h
void Graphics_PrecacheShaders_File(File* file, Graphics* ptr);

// void Graphics::PrecacheShaders(Deserializer& source) | File: ../Graphics/Graphics.h
void Graphics_PrecacheShaders_VectorBuffer(VectorBuffer& buffer, Graphics* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Graphics() \
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::PrecacheShaders(Deserializer& source)", "void PrecacheShaders(File@+)", AS_FUNCTION_OBJLAST(Graphics_PrecacheShaders_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Graphics::PrecacheShaders(Deserializer& source)", "void PrecacheShaders(VectorBuffer&)", AS_FUNCTION_OBJLAST(Graphics_PrecacheShaders_VectorBuffer), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// Drawable* RayQueryResult::drawable_ | File: ../Graphics/OctreeQuery.h
Drawable* RayQueryResult_GetDrawable(RayQueryResult* ptr);

// Node* RayQueryResult::node_ | File: ../Graphics/OctreeQuery.h
Node* RayQueryResult_GetNode(RayQueryResult* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_RayQueryResult() \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("Drawable* RayQueryResult::drawable_", "Drawable@+ get_drawable() const", AS_FUNCTION_OBJLAST(RayQueryResult_GetDrawable), AS_CALL_CDECL_OBJLAST)); \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("Node* RayQueryResult::node_", "Node@+ get_node() const", AS_FUNCTION_OBJLAST(RayQueryResult_GetNode), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// void Octree::Raycast(RayOctreeQuery& query) const | File: ../Graphics/Octree.h
CScriptArray* Octree_Raycast(const Ray& ray, RayQueryLevel level, float maxDistance, unsigned char drawableFlags, unsigned viewMask, Octree* ptr);

// void Octree::RaycastSingle(RayOctreeQuery& query) const | File: ../Graphics/Octree.h
RayQueryResult Octree_RaycastSingle(const Ray& ray, RayQueryLevel level, float maxDistance, unsigned char drawableFlags, unsigned viewMask, Octree* ptr);

// void Octree::GetDrawables(OctreeQuery& query) const | File: ../Graphics/Octree.h
CScriptArray* Octree_GetDrawables_Point(const Vector3& point, unsigned char drawableFlags, unsigned viewMask, Octree* ptr);
CScriptArray* Octree_GetDrawables_Box(const BoundingBox& box, unsigned char drawableFlags, unsigned viewMask, Octree* ptr);
CScriptArray* Octree_GetDrawables_Frustum(const Frustum& frustum, unsigned char drawableFlags, unsigned viewMask, Octree* ptr);
CScriptArray* Octree_GetDrawables_Sphere(const Sphere& sphere, unsigned char drawableFlags, unsigned viewMask, Octree* ptr);
CScriptArray* Octree_GetDrawables_All(unsigned char drawableFlags, unsigned viewMask, Octree* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Octree() \
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::Raycast(RayOctreeQuery& query) const", "Array<RayQueryResult>@ Raycast(const Ray&in, RayQueryLevel level = RAY_TRIANGLE, float maxDistance = M_INFINITY, uint8 drawableFlags = DRAWABLE_ANY, uint viewMask = DEFAULT_VIEWMASK) const", AS_FUNCTION_OBJLAST(Octree_Raycast), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::RaycastSingle(RayOctreeQuery& query) const", "RayQueryResult RaycastSingle(const Ray&in, RayQueryLevel level = RAY_TRIANGLE, float maxDistance = M_INFINITY, uint8 drawableFlags = DRAWABLE_ANY, uint viewMask = DEFAULT_VIEWMASK) const", AS_FUNCTION_OBJLAST(Octree_RaycastSingle), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::GetDrawables(OctreeQuery& query) const", "Array<Drawable@>@ GetDrawables(const Vector3&in, uint8 drawableFlags = DRAWABLE_ANY, uint viewMask = DEFAULT_VIEWMASK)", AS_FUNCTION_OBJLAST(Octree_GetDrawables_Point), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::GetDrawables(OctreeQuery& query) const", "Array<Drawable@>@ GetDrawables(const BoundingBox&in, uint8 drawableFlags = DRAWABLE_ANY, uint viewMask = DEFAULT_VIEWMASK)", AS_FUNCTION_OBJLAST(Octree_GetDrawables_Box), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::GetDrawables(OctreeQuery& query) const", "Array<Drawable@>@ GetDrawables(const Frustum&in, uint8 drawableFlags = DRAWABLE_ANY, uint viewMask = DEFAULT_VIEWMASK)", AS_FUNCTION_OBJLAST(Octree_GetDrawables_Frustum), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::GetDrawables(OctreeQuery& query) const", "Array<Drawable@>@ GetDrawables(const Sphere&in, uint8 drawableFlags = DRAWABLE_ANY, uint viewMask = DEFAULT_VIEWMASK)", AS_FUNCTION_OBJLAST(Octree_GetDrawables_Sphere), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Octree::GetDrawables(OctreeQuery& query) const", "Array<Drawable@>@ GetAllDrawables(uint8 drawableFlags = DRAWABLE_ANY, uint viewMask = DEFAULT_VIEWMASK)", AS_FUNCTION_OBJLAST(Octree_GetDrawables_All), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// void Renderer::SetVSMShadowParameters(float minVariance, float lightBleedingReduction) | File: ../Graphics/Renderer.h
void Renderer_SetVSMShadowParameters(const Vector2& parameters, Renderer* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Renderer() \
    members.methods_.Push(RegisterObjectMethodArgs("void Renderer::SetVSMShadowParameters(float minVariance, float lightBleedingReduction)", "void set_vsmShadowParameters(const Vector2&in)", AS_FUNCTION_OBJLAST(Renderer_SetVSMShadowParameters), AS_CALL_CDECL_OBJLAST));

}