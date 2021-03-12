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

#include "../Graphics/Skeleton.h"
#include "../Scene/Scene.h"
#include "../Graphics/Octree.h"
#include "../Graphics/DebugRenderer.h"
#include "../IO/PackageFile.h"

namespace Urho3D
{

#ifdef URHO3D_NETWORK
    static const bool URHO3D_NETWORK_DEFINED = true;
#else
    static const bool URHO3D_NETWORK_DEFINED = false;
#endif

const AttributeInfo& SerializableGetAttributeInfo(unsigned index, Serializable* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Serializable() \
    members.methods_.Push(RegisterObjectMethodArgs("fad125ab-81f8-4980-94c8-cc946d76e69a", "const AttributeInfo& get_attributeInfos(uint) const", AS_FUNCTION_OBJLAST(SerializableGetAttributeInfo), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

#define REGISTER_CLASS_MANUAL_PART_Node() \
    RegisterNamedObjectConstructor<Node>(engine, "Node");

// bool Node::SaveXML(Serializer& dest, const String& indentation = "\t") const | File: ../Scene/Node.h
bool Node_SaveXML_File(File* file, const String& indentation, Node* ptr);
bool Node_SaveXML_VectorBuffer(VectorBuffer& buffer, const String& indentation, Node* ptr);

// bool Node::SaveJSON(Serializer& dest, const String& indentation="\t") const | File: ../Scene/Node.h
bool Node_SaveJSON_File(File* file, Node* ptr);
bool Node_SaveJSON_VectorBuffer(VectorBuffer& buffer, Node* ptr);

// template <class T> void Node::GetChildrenWithComponent(PODVector<Node*>& dest, bool recursive = false) const | File: ../Scene/Node.h
CScriptArray* Node_GetChildrenWithScript(bool recursive, Node* ptr);
CScriptArray* Node_GetChildrenWithClassName(const String& className, bool recursive, Node* ptr);

// void Node::GetComponents(PODVector<Component*>& dest, StringHash type, bool recursive = false) const | File: ../Scene/Node.h
CScriptArray* Node_GetComponents_Type(const String& typeName, bool recursive, Node* ptr);

// unsigned Node::GetNumChildren(bool recursive = false) const | File: ../Scene/Node.h
unsigned Node_GetNumChildren_NonRecursive(Node* ptr);
unsigned Node_GetNumChildren_Recursive(Node* ptr);

// Node* Node::GetChild(unsigned index) const | File: ../Scene/Node.h
Node* Node_GetChild(unsigned index, Node* ptr);

// Node* Node::GetChild(const String& name, bool recursive = false) const | File: ../Scene/Node.h
Node* Node_GetChild_Name_NonRecursive(const String& name, Node* ptr);
Node* Node_GetChild_Name_Recursive(const String& name, Node* ptr);

// const Vector<SharedPtr<Component>>& Node::GetComponents() const | File: ../Scene/Node.h
Component* Node_GetComponent(unsigned index, Node* ptr);

// const VariantMap& Node::GetVars() const | File: ../Scene/Node.h
VariantMap& Node_GetVars(Node* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Node() \
    members.methods_.Push(RegisterObjectMethodArgs("bool Node::SaveXML(Serializer& dest, const String& indentation = \"\t\") const", "bool SaveXML(File@+, const String&in indentation = \"\t\")", AS_FUNCTION_OBJLAST(Node_SaveXML_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Node::SaveXML(Serializer& dest, const String& indentation = \"\t\") const", "bool SaveXML(VectorBuffer&, const String&in indentation = \"\t\")", AS_FUNCTION_OBJLAST(Node_SaveXML_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Node::SaveJSON(Serializer& dest, const String& indentation = \"\t\") const", "bool SaveJSON(File@+)", AS_FUNCTION_OBJLAST(Node_SaveJSON_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Node::SaveJSON(Serializer& dest, const String& indentation = \"\t\") const", "bool SaveJSON(VectorBuffer&)", AS_FUNCTION_OBJLAST(Node_SaveJSON_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("a159d71d-b9e5-454d-a01b-b5bb5fe78451", "Array<Node@>@ GetChildrenWithScript(bool recursive = false) const", AS_FUNCTION_OBJLAST(Node_GetChildrenWithScript), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("e38b37f8-1fb6-4fa7-9908-9178f16eefdf", "Array<Node@>@ GetChildrenWithScript(const String&in, bool recursive = false) const", AS_FUNCTION_OBJLAST(Node_GetChildrenWithClassName), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Node::GetComponents(PODVector<Component*>& dest, StringHash type, bool recursive = false) const", "Array<Component@>@ GetComponents(const String&in, bool recursive = false) const", AS_FUNCTION_OBJLAST(Node_GetComponents_Type), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Node::GetNumChildren(bool recursive = false) const", "uint get_numChildren() const", AS_FUNCTION_OBJLAST(Node_GetNumChildren_NonRecursive), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Node::GetNumChildren(bool recursive = false) const", "uint get_numAllChildren() const", AS_FUNCTION_OBJLAST(Node_GetNumChildren_Recursive), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Node::GetChild(unsigned index) const", "Node@+ get_children(uint) const", AS_FUNCTION_OBJLAST(Node_GetChild), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Node::GetChild(const String& name, bool recursive = false) const", "Node@+ get_childrenByName(const String&in) const", AS_FUNCTION_OBJLAST(Node_GetChild_Name_NonRecursive), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Node::GetChild(const String& name, bool recursive = false) const", "Node@+ get_allChildrenByName(const String&in) const", AS_FUNCTION_OBJLAST(Node_GetChild_Name_Recursive), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<Component>>& Node::GetComponents() const", "Component@+ get_components(uint) const", AS_FUNCTION_OBJLAST(Node_GetComponent), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("const VariantMap& Node::GetVars() const", "VariantMap& get_vars()", AS_FUNCTION_OBJLAST(Node_GetVars), AS_CALL_CDECL_OBJLAST)); \
    /* Workarounds for Connection that used outside URHO3D_NETWORK define */ \
    if (URHO3D_NETWORK_DEFINED) \
    { \
        members.methods_.Push(RegisterObjectMethodArgs("void Node::SetOwner(Connection* owner)", "void SetOwner(Connection@+)", AS_METHOD(Node, SetOwner), AS_CALL_THISCALL)); \
        members.methods_.Push(RegisterObjectMethodArgs("void Node::SetOwner(Connection* owner)", "void set_owner(Connection@+)", AS_METHOD(Node, SetOwner), AS_CALL_THISCALL)); \
        members.methods_.Push(RegisterObjectMethodArgs("Connection* Node::GetOwner() const", "Connection@+ GetOwner() const", AS_METHOD(Node, GetOwner), AS_CALL_THISCALL)); \
        members.methods_.Push(RegisterObjectMethodArgs("Connection* Node::GetOwner() const", "Connection@+ get_owner() const", AS_METHOD(Node, GetOwner), AS_CALL_THISCALL)); \
        members.methods_.Push(RegisterObjectMethodArgs("void Node::CleanupConnection(Connection* connection)", "void CleanupConnection(Connection@+)", AS_METHOD(Node, CleanupConnection), AS_CALL_THISCALL)); \
    }

// ========================================================================================

#define REGISTER_CLASS_MANUAL_PART_Scene() \
    RegisterNamedObjectConstructor<Scene>(engine, "Scene");

// bool Scene::LoadXML(Deserializer& source) | File: ../Scene/Scene.h
bool Scene_LoadXML_File(File* file, Scene* ptr);
bool Scene_LoadXML_VectorBuffer(VectorBuffer& buffer, Scene* ptr);

// bool Scene::LoadJSON(Deserializer& source) | File: ../Scene/Scene.h
bool Scene_LoadJSON_File(File* file, Scene* ptr);
bool Scene_LoadJSON_VectorBuffer(VectorBuffer& buffer, Scene* ptr);

// Node* Scene::Instantiate(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED) | File: ../Scene/Scene.h
Node* Scene_Instantiate_File(File* file, const Vector3& position, const Quaternion& rotation, CreateMode mode, Scene* ptr);
Node* Scene_Instantiate_VectorBuffer(VectorBuffer& buffer, const Vector3& position, const Quaternion& rotation, CreateMode mode, Scene* ptr);

// Node* Scene::InstantiateXML(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED) | File: ../Scene/Scene.h
Node* Scene_InstantiateXML_File(File* file, const Vector3& position, const Quaternion& rotation, CreateMode mode, Scene* ptr);
Node* Scene_InstantiateXML_VectorBuffer(VectorBuffer& buffer, const Vector3& position, const Quaternion& rotation, CreateMode mode, Scene* ptr);

// Node* Scene::InstantiateXML(const XMLElement& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED) | File: ../Scene/Scene.h
Node* Scene_InstantiateXML_XMLFile(XMLFile* xml, const Vector3& position, const Quaternion& rotation, CreateMode mode, Scene* ptr);

// Node* Scene::InstantiateJSON(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED) | File: ../Scene/Scene.h
Node* Scene_InstantiateJSON_File(File* file, const Vector3& position, const Quaternion& rotation, CreateMode mode, Scene* ptr);
Node* Scene_InstantiateJSON_VectorBuffer(VectorBuffer& buffer, const Vector3& position, const Quaternion& rotation, CreateMode mode, Scene* ptr);

// Node* Scene::InstantiateJSON(const JSONValue& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED)  | File: ../Scene/Scene.h
Node* Scene_InstantiateJSON_JSONFile(JSONFile* json, const Vector3& position, const Quaternion& rotation, CreateMode mode, Scene* ptr);

// bool Scene::GetNodesWithTag(PODVector<Node*>& dest, const String& tag) const | File: ../Scene/Scene.h
CScriptArray* Scene_GetNodesWithTag(const String& tag, Scene* ptr);

// template <class T> T* Scene::GetComponent(bool recursive = false) const | File: ../Scene/Node.h
DebugRenderer* Scene_GetDebugRenderer(Scene* ptr);
Octree* Scene_GetOctree(Scene* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Scene() \
    members.methods_.Push(RegisterObjectMethodArgs("bool Scene::LoadXML(Deserializer& source)", "bool LoadXML(File@+)", AS_FUNCTION_OBJLAST(Scene_LoadXML_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Scene::LoadXML(Deserializer& source)", "bool LoadXML(VectorBuffer&)", AS_FUNCTION_OBJLAST(Scene_LoadXML_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Scene::LoadJSON(Deserializer& source)", "bool LoadJSON(File@+)", AS_FUNCTION_OBJLAST(Scene_LoadJSON_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Scene::LoadJSON(Deserializer& source)", "bool LoadJSON(VectorBuffer&)", AS_FUNCTION_OBJLAST(Scene_LoadJSON_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Scene::Instantiate(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED)", "Node@+ Instantiate(File@+, const Vector3&in, const Quaternion&in, CreateMode mode = REPLICATED)", AS_FUNCTION_OBJLAST(Scene_Instantiate_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Scene::Instantiate(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED)", "Node@+ Instantiate(VectorBuffer&, const Vector3&in, const Quaternion&in, CreateMode mode = REPLICATED)", AS_FUNCTION_OBJLAST(Scene_Instantiate_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Scene::InstantiateXML(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED)", "Node@+ InstantiateXML(File@+, const Vector3&in, const Quaternion&in, CreateMode mode = REPLICATED)", AS_FUNCTION_OBJLAST(Scene_InstantiateXML_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Scene::InstantiateXML(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED)", "Node@+ InstantiateXML(VectorBuffer&, const Vector3&in, const Quaternion&in, CreateMode mode = REPLICATED)", AS_FUNCTION_OBJLAST(Scene_InstantiateXML_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Scene::InstantiateXML(const XMLElement& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED)", "Node@+ InstantiateXML(XMLFile@+, const Vector3&in, const Quaternion&in, CreateMode mode = REPLICATED)", AS_FUNCTION_OBJLAST(Scene_InstantiateXML_XMLFile), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Scene::InstantiateJSON(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED)", "Node@+ InstantiateJSON(File@+, const Vector3&in, const Quaternion&in, CreateMode mode = REPLICATED)", AS_FUNCTION_OBJLAST(Scene_InstantiateJSON_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Scene::InstantiateJSON(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED)", "Node@+ InstantiateJSON(VectorBuffer&, const Vector3&in, const Quaternion&in, CreateMode mode = REPLICATED)", AS_FUNCTION_OBJLAST(Scene_InstantiateJSON_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("Node* Scene::InstantiateJSON(const JSONValue& source, const Vector3& position, const Quaternion& rotation, CreateMode mode = REPLICATED)", "Node@+ InstantiateJSON(JSONFile@+, const Vector3&in, const Quaternion&in, CreateMode mode = REPLICATED)", AS_FUNCTION_OBJLAST(Scene_InstantiateJSON_JSONFile), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Scene::GetNodesWithTag(PODVector<Node*>& dest, const String& tag) const", "Array<Node@>@ GetNodesWithTag(const String&in) const", AS_FUNCTION_OBJLAST(Scene_GetNodesWithTag), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("b110d8f3-ac5a-4543-81c7-afbd4d1d3676", "DebugRenderer@+ get_debugRenderer() const", AS_FUNCTION_OBJLAST(Scene_GetDebugRenderer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("2595b413-601b-4428-845c-d3bdf37a5e50", "Octree@+ get_octree() const", AS_FUNCTION_OBJLAST(Scene_GetOctree), AS_CALL_CDECL_OBJLAST)); \
    /* Workaround Doxygen bug: have no const flag in xml */ \
    members.methods_.Push(RegisterObjectMethodArgs("Component* Scene::GetComponent(StringHash type, bool recursive = false) const", "Component@+ GetComponent(StringHash, bool = false) const", AS_METHODPR(Scene, GetComponent, (StringHash, bool) const, Component*), AS_CALL_THISCALL)); \
    /* Workaround Doxygen bug: have no const flag in xml */ \
    members.methods_.Push(RegisterObjectMethodArgs("bool Scene::SaveXML(XMLElement& dest) const override", "bool SaveXML(XMLElement&) const", AS_METHODPR(Scene, SaveXML, (XMLElement &) const, bool), AS_CALL_THISCALL)); \
    /* Workaround Doxygen bug: have no const flag in xml */ \
    members.methods_.Push(RegisterObjectMethodArgs("bool Scene::SaveJSON(JSONValue& dest) const override", "bool SaveJSON(JSONValue&) const", AS_METHODPR(Scene, SaveJSON, (JSONValue &) const, bool), AS_CALL_THISCALL));

// ========================================================================================

// WeakPtr<Node> Bone::node_ | File: ../Graphics/Skeleton.h
Node* BoneGetNode(Bone* ptr);
// WeakPtr<Node> Bone::node_ | File: ../Graphics/Skeleton.h
void BoneSetNode(Node* node, Bone* ptr);

#define REGISTER_MANUAL_PART_Bone(T, className) \
    /* WeakPtr<Node> Bone::node_ | File: ../Graphics/Skeleton.h */ \
    engine->RegisterObjectMethod(className, "void set_node(Node@+)", AS_FUNCTION_OBJLAST(BoneSetNode), AS_CALL_CDECL_OBJLAST); \
    /* WeakPtr<Node> Bone::node_ | File: ../Graphics/Skeleton.h */ \
    engine->RegisterObjectMethod(className, "Node@+ get_node() const", AS_FUNCTION_OBJLAST(BoneGetNode), AS_CALL_CDECL_OBJLAST);

// ========================================================================================

#define REGISTER_MEMBERS_MANUAL_PART_Component() \
    /* Workarounds for Connection that used outside URHO3D_NETWORK define */ \
    if (URHO3D_NETWORK_DEFINED) \
    { \
        members.methods_.Push(RegisterObjectMethodArgs("void Component::CleanupConnection(Connection* connection)", "void CleanupConnection(Connection@+)", AS_METHODPR(Component, CleanupConnection, (Connection*), void), AS_CALL_THISCALL)); \
    }

}
