// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// class Animatable | File: ../Scene/Animatable.h
void CollectMembers_Animatable(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Serializable(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual bool Serializable::LoadJSON(const JSONValue& source)");
    Remove(methods, "virtual bool Serializable::LoadXML(const XMLElement& source)");
    Remove(methods, "virtual bool Serializable::SaveJSON(JSONValue& dest) const");
    Remove(methods, "virtual bool Serializable::SaveXML(XMLElement& dest) const");

    methods.Push(RegisterObjectMethodArgs("bool Animatable::LoadXML(const XMLElement& source) override", "bool LoadXML(const XMLElement&in)", AS_METHODPR(Animatable, LoadXML, (const XMLElement&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Animatable::SaveXML(XMLElement& dest) const override", "bool SaveXML(XMLElement&) const", AS_METHODPR(Animatable, SaveXML, (XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Animatable::LoadJSON(const JSONValue& source) override", "bool LoadJSON(const JSONValue&in)", AS_METHODPR(Animatable, LoadJSON, (const JSONValue&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Animatable::SaveJSON(JSONValue& dest) const override", "bool SaveJSON(JSONValue&) const", AS_METHODPR(Animatable, SaveJSON, (JSONValue&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::SetAnimationEnabled(bool enable)", "void SetAnimationEnabled(bool)", AS_METHODPR(Animatable, SetAnimationEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::SetAnimationEnabled(bool enable)", "void set_animationEnabled(bool)", AS_METHODPR(Animatable, SetAnimationEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::SetAnimationTime(float time)", "void SetAnimationTime(float)", AS_METHODPR(Animatable, SetAnimationTime, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::SetObjectAnimation(ObjectAnimation* objectAnimation)", "void SetObjectAnimation(ObjectAnimation@+)", AS_METHODPR(Animatable, SetObjectAnimation, (ObjectAnimation*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::SetObjectAnimation(ObjectAnimation* objectAnimation)", "void set_objectAnimation(ObjectAnimation@+)", AS_METHODPR(Animatable, SetObjectAnimation, (ObjectAnimation*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::SetAttributeAnimation(const String& name, ValueAnimation* attributeAnimation, WrapMode wrapMode=WM_LOOP, float speed=1.0f)", "void SetAttributeAnimation(const String&in, ValueAnimation@+, WrapMode = WM_LOOP, float = 1.0f)", AS_METHODPR(Animatable, SetAttributeAnimation, (const String&, ValueAnimation*, WrapMode, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::SetAttributeAnimationWrapMode(const String& name, WrapMode wrapMode)", "void SetAttributeAnimationWrapMode(const String&in, WrapMode)", AS_METHODPR(Animatable, SetAttributeAnimationWrapMode, (const String&, WrapMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::SetAttributeAnimationSpeed(const String& name, float speed)", "void SetAttributeAnimationSpeed(const String&in, float)", AS_METHODPR(Animatable, SetAttributeAnimationSpeed, (const String&, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::SetAttributeAnimationTime(const String& name, float time)", "void SetAttributeAnimationTime(const String&in, float)", AS_METHODPR(Animatable, SetAttributeAnimationTime, (const String&, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::RemoveObjectAnimation()", "void RemoveObjectAnimation()", AS_METHODPR(Animatable, RemoveObjectAnimation, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::RemoveAttributeAnimation(const String& name)", "void RemoveAttributeAnimation(const String&in)", AS_METHODPR(Animatable, RemoveAttributeAnimation, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Animatable::GetAnimationEnabled() const", "bool GetAnimationEnabled() const", AS_METHODPR(Animatable, GetAnimationEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Animatable::GetAnimationEnabled() const", "bool get_animationEnabled() const", AS_METHODPR(Animatable, GetAnimationEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ObjectAnimation* Animatable::GetObjectAnimation() const", "ObjectAnimation@+ GetObjectAnimation() const", AS_METHODPR(Animatable, GetObjectAnimation, () const, ObjectAnimation*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ObjectAnimation* Animatable::GetObjectAnimation() const", "ObjectAnimation@+ get_objectAnimation() const", AS_METHODPR(Animatable, GetObjectAnimation, () const, ObjectAnimation*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ValueAnimation* Animatable::GetAttributeAnimation(const String& name) const", "ValueAnimation@+ GetAttributeAnimation(const String&in) const", AS_METHODPR(Animatable, GetAttributeAnimation, (const String&) const, ValueAnimation*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("WrapMode Animatable::GetAttributeAnimationWrapMode(const String& name) const", "WrapMode GetAttributeAnimationWrapMode(const String&in) const", AS_METHODPR(Animatable, GetAttributeAnimationWrapMode, (const String&) const, WrapMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Animatable::GetAttributeAnimationSpeed(const String& name) const", "float GetAttributeAnimationSpeed(const String&in) const", AS_METHODPR(Animatable, GetAttributeAnimationSpeed, (const String&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Animatable::GetAttributeAnimationTime(const String& name) const", "float GetAttributeAnimationTime(const String&in) const", AS_METHODPR(Animatable, GetAttributeAnimationTime, (const String&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Animatable::SetObjectAnimationAttr(const ResourceRef& value)", "void SetObjectAnimationAttr(const ResourceRef&in)", AS_METHODPR(Animatable, SetObjectAnimationAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef Animatable::GetObjectAnimationAttr() const", "ResourceRef GetObjectAnimationAttr() const", AS_METHODPR(Animatable, GetObjectAnimationAttr, () const, ResourceRef), AS_CALL_THISCALL));

    // static void Animatable::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MANUAL_PART_Animatable
        REGISTER_MANUAL_PART_Animatable();
    #endif
}

// struct AsyncProgress | File: ../Scene/Scene.h
void CollectMembers_AsyncProgress(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // SharedPtr<File> AsyncProgress::file_
    // Error: type "SharedPtr<File>" can not automatically bind
    // SharedPtr<XMLFile> AsyncProgress::xmlFile_
    // Error: type "SharedPtr<XMLFile>" can not automatically bind
    // SharedPtr<JSONFile> AsyncProgress::jsonFile_
    // Error: type "SharedPtr<JSONFile>" can not automatically bind
    // HashSet<StringHash> AsyncProgress::resources_
    // Error: type "HashSet<StringHash>" can not automatically bind

    fields.Push(RegisterObjectPropertyArgs("XMLElement AsyncProgress::xmlElement_", "XMLElement xmlElement", offsetof(AsyncProgress, xmlElement_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned AsyncProgress::jsonIndex_", "uint jsonIndex", offsetof(AsyncProgress, jsonIndex_)));
    fields.Push(RegisterObjectPropertyArgs("LoadMode AsyncProgress::mode_", "LoadMode mode", offsetof(AsyncProgress, mode_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned AsyncProgress::loadedResources_", "uint loadedResources", offsetof(AsyncProgress, loadedResources_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned AsyncProgress::totalResources_", "uint totalResources", offsetof(AsyncProgress, totalResources_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned AsyncProgress::loadedNodes_", "uint loadedNodes", offsetof(AsyncProgress, loadedNodes_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned AsyncProgress::totalNodes_", "uint totalNodes", offsetof(AsyncProgress, totalNodes_)));

    #ifdef REGISTER_MANUAL_PART_AsyncProgress
        REGISTER_MANUAL_PART_AsyncProgress();
    #endif
}

// class AttributeAnimationInfo | File: ../Scene/Animatable.h
void CollectMembers_AttributeAnimationInfo(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_ValueAnimationInfo(methods, staticMethods, fields, wrappedFields, staticFields);

    methods.Push(RegisterObjectMethodArgs("const AttributeInfo& AttributeAnimationInfo::GetAttributeInfo() const", "const AttributeInfo& GetAttributeInfo() const", AS_METHODPR(AttributeAnimationInfo, GetAttributeInfo, () const, const AttributeInfo&), AS_CALL_THISCALL));

    #ifdef REGISTER_MANUAL_PART_AttributeAnimationInfo
        REGISTER_MANUAL_PART_AttributeAnimationInfo();
    #endif
}

// class Component | File: ../Scene/Component.h
void CollectMembers_Component(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Animatable(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "bool Animatable::SaveJSON(JSONValue& dest) const override");
    Remove(methods, "bool Animatable::SaveXML(XMLElement& dest) const override");
    Remove(methods, "virtual bool Serializable::Save(Serializer& dest) const");
    Remove(methods, "virtual void Serializable::MarkNetworkUpdate()");

    // void Component::AddReplicationState(ComponentReplicationState* state)
    // Error: type "ComponentReplicationState*" can not automatically bind
    // void Component::CleanupConnection(Connection* connection)
    // Not registered because have @manualbind mark
    // void Component::GetComponents(PODVector<Component*>& dest, StringHash type) const
    // Error: type "PODVector<Component*>&" can not automatically bind
    // virtual void Component::GetDependencyNodes(PODVector<Node*>& dest)
    // Error: type "PODVector<Node*>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("virtual void Component::OnSetEnabled()", "void OnSetEnabled()", AS_METHODPR(Component, OnSetEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Component::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(Component, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Component::SaveXML(XMLElement& dest) const override", "bool SaveXML(XMLElement&) const", AS_METHODPR(Component, SaveXML, (XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Component::SaveJSON(JSONValue& dest) const override", "bool SaveJSON(JSONValue&) const", AS_METHODPR(Component, SaveJSON, (JSONValue&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Component::MarkNetworkUpdate() override", "void MarkNetworkUpdate()", AS_METHODPR(Component, MarkNetworkUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(Component, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Component::SetEnabled(bool enable)", "void SetEnabled(bool)", AS_METHODPR(Component, SetEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Component::SetEnabled(bool enable)", "void set_enabled(bool)", AS_METHODPR(Component, SetEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Component::Remove()", "void Remove()", AS_METHODPR(Component, Remove, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Component::GetID() const", "uint GetID() const", AS_METHODPR(Component, GetID, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Component::GetID() const", "uint get_id() const", AS_METHODPR(Component, GetID, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Component::IsReplicated() const", "bool IsReplicated() const", AS_METHODPR(Component, IsReplicated, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Component::IsReplicated() const", "bool get_replicated() const", AS_METHODPR(Component, IsReplicated, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Component::GetNode() const", "Node@+ GetNode() const", AS_METHODPR(Component, GetNode, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Component::GetNode() const", "Node@+ get_node() const", AS_METHODPR(Component, GetNode, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Scene* Component::GetScene() const", "Scene@+ GetScene() const", AS_METHODPR(Component, GetScene, () const, Scene*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Component::IsEnabled() const", "bool IsEnabled() const", AS_METHODPR(Component, IsEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Component::IsEnabled() const", "bool get_enabled() const", AS_METHODPR(Component, IsEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Component::IsEnabledEffective() const", "bool IsEnabledEffective() const", AS_METHODPR(Component, IsEnabledEffective, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Component::IsEnabledEffective() const", "bool get_enabledEffective() const", AS_METHODPR(Component, IsEnabledEffective, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Component* Component::GetComponent(StringHash type) const", "Component@+ GetComponent(StringHash) const", AS_METHODPR(Component, GetComponent, (StringHash) const, Component*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Component::PrepareNetworkUpdate()", "void PrepareNetworkUpdate()", AS_METHODPR(Component, PrepareNetworkUpdate, (), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MANUAL_PART_Component
        REGISTER_MANUAL_PART_Component();
    #endif
}

// struct ComponentReplicationState | File: ../Scene/ReplicationState.h
void CollectMembers_ComponentReplicationState(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_ReplicationState(methods, staticMethods, fields, wrappedFields, staticFields);

    // NodeReplicationState* ComponentReplicationState::nodeState_
    // Not registered because pointer
    // WeakPtr<Component> ComponentReplicationState::component_
    // Error: type "WeakPtr<Component>" can not automatically bind

    fields.Push(RegisterObjectPropertyArgs("DirtyBits ComponentReplicationState::dirtyAttributes_", "DirtyBits dirtyAttributes", offsetof(ComponentReplicationState, dirtyAttributes_)));

    #ifdef REGISTER_MANUAL_PART_ComponentReplicationState
        REGISTER_MANUAL_PART_ComponentReplicationState();
    #endif
}

// struct DirtyBits | File: ../Scene/ReplicationState.h
void CollectMembers_DirtyBits(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("void DirtyBits::Set(unsigned index)", "void Set(uint)", AS_METHODPR(DirtyBits, Set, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DirtyBits::Clear(unsigned index)", "void Clear(uint)", AS_METHODPR(DirtyBits, Clear, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DirtyBits::ClearAll()", "void ClearAll()", AS_METHODPR(DirtyBits, ClearAll, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool DirtyBits::IsSet(unsigned index) const", "bool IsSet(uint) const", AS_METHODPR(DirtyBits, IsSet, (unsigned) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned DirtyBits::Count() const", "uint Count() const", AS_METHODPR(DirtyBits, Count, () const, unsigned), AS_CALL_THISCALL));

    // unsigned char DirtyBits::data_[MAX_NETWORK_ATTRIBUTES/8]
    // Not registered because array

    fields.Push(RegisterObjectPropertyArgs("unsigned char DirtyBits::count_", "uint8 count", offsetof(DirtyBits, count_)));

    #ifdef REGISTER_MANUAL_PART_DirtyBits
        REGISTER_MANUAL_PART_DirtyBits();
    #endif
}

// class LogicComponent | File: ../Scene/LogicComponent.h
void CollectMembers_LogicComponent(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual void Component::OnSetEnabled()");

    #ifdef REGISTER_MANUAL_PART_LogicComponent
        REGISTER_MANUAL_PART_LogicComponent();
    #endif
}

// struct NetworkState | File: ../Scene/ReplicationState.h
void CollectMembers_NetworkState(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // const Vector<AttributeInfo>* NetworkState::attributes_
    // Not registered because pointer
    // Vector<Variant> NetworkState::currentValues_
    // Error: type "Vector<Variant>" can not automatically bind
    // Vector<Variant> NetworkState::previousValues_
    // Error: type "Vector<Variant>" can not automatically bind
    // PODVector<ReplicationState*> NetworkState::replicationStates_
    // Error: type "PODVector<ReplicationState*>" can not automatically bind

    fields.Push(RegisterObjectPropertyArgs("VariantMap NetworkState::previousVars_", "VariantMap previousVars", offsetof(NetworkState, previousVars_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned long long NetworkState::interceptMask_", "uint64 interceptMask", offsetof(NetworkState, interceptMask_)));

    #ifdef REGISTER_MANUAL_PART_NetworkState
        REGISTER_MANUAL_PART_NetworkState();
    #endif
}

// void Node::SetTags(const StringVector& tags)
// void Node::SetTags(const StringVector& tags) | File: ../Scene/Node.h
static void Node_SetTags_StringVector(Node* ptr, CScriptArray* tags_conv)
{
    StringVector tags = ArrayToVector<String>(tags_conv);
    ptr->SetTags(tags);
}


// void Node::AddTags(const StringVector& tags)
// void Node::AddTags(const StringVector& tags) | File: ../Scene/Node.h
static void Node_AddTags_StringVector(Node* ptr, CScriptArray* tags_conv)
{
    StringVector tags = ArrayToVector<String>(tags_conv);
    ptr->AddTags(tags);
}


// const StringVector& Node::GetTags() const
// const StringVector& Node::GetTags() const | File: ../Scene/Node.h
static CScriptArray* Node_GetTags_void(Node* ptr)
{
    const StringVector& result = ptr->GetTags();
    return VectorToArray<String>(result, "Array<String>");
}


// const Vector<SharedPtr<Node>>& Node::GetChildren() const
// const Vector<SharedPtr<Node>>& Node::GetChildren() const | File: ../Scene/Node.h
static CScriptArray* Node_GetChildren_void(Node* ptr)
{
    const Vector<SharedPtr<Node>>& result = ptr->GetChildren();
    return VectorToHandleArray(result, "Array<Node@>");
}


// PODVector<Node*> Node::GetChildren(bool recursive) const
// PODVector<Node*> Node::GetChildren(bool recursive) const | File: ../Scene/Node.h
static CScriptArray* Node_GetChildren_bool(Node* ptr, bool recursive)
{
    PODVector<Node*> result = ptr->GetChildren(recursive);
    return VectorToHandleArray(result, "Array<Node@>");
}


// PODVector<Node*> Node::GetChildrenWithComponent(StringHash type, bool recursive=false) const
// PODVector<Node*> Node::GetChildrenWithComponent(StringHash type, bool recursive=false) const | File: ../Scene/Node.h
static CScriptArray* Node_GetChildrenWithComponent_StringHash_bool(Node* ptr, StringHash type, bool recursive)
{
    PODVector<Node*> result = ptr->GetChildrenWithComponent(type, recursive);
    return VectorToHandleArray(result, "Array<Node@>");
}


// PODVector<Node*> Node::GetChildrenWithTag(const String& tag, bool recursive=false) const
// PODVector<Node*> Node::GetChildrenWithTag(const String& tag, bool recursive=false) const | File: ../Scene/Node.h
static CScriptArray* Node_GetChildrenWithTag_String_bool(Node* ptr, const String& tag, bool recursive)
{
    PODVector<Node*> result = ptr->GetChildrenWithTag(tag, recursive);
    return VectorToHandleArray(result, "Array<Node@>");
}


// const Vector<SharedPtr<Component>>& Node::GetComponents() const
// const Vector<SharedPtr<Component>>& Node::GetComponents() const | File: ../Scene/Node.h
static CScriptArray* Node_GetComponents_void(Node* ptr)
{
    const Vector<SharedPtr<Component>>& result = ptr->GetComponents();
    return VectorToHandleArray(result, "Array<Component@>");
}


// const PODVector<Node*>& Node::GetDependencyNodes() const
// const PODVector<Node*>& Node::GetDependencyNodes() const | File: ../Scene/Node.h
static CScriptArray* Node_GetDependencyNodes_void(Node* ptr)
{
    const PODVector<Node*>& result = ptr->GetDependencyNodes();
    return VectorToHandleArray(result, "Array<Node@>");
}


// class Node | File: ../Scene/Node.h
void CollectMembers_Node(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Animatable(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "bool Animatable::LoadJSON(const JSONValue& source) override");
    Remove(methods, "bool Animatable::LoadXML(const XMLElement& source) override");
    Remove(methods, "bool Animatable::SaveJSON(JSONValue& dest) const override");
    Remove(methods, "bool Animatable::SaveXML(XMLElement& dest) const override");
    Remove(methods, "virtual bool Serializable::Load(Deserializer& source)");
    Remove(methods, "virtual bool Serializable::Save(Serializer& dest) const");
    Remove(methods, "virtual bool Serializable::SaveDefaultAttributes() const");
    Remove(methods, "virtual void Serializable::ApplyAttributes()");
    Remove(methods, "virtual void Serializable::MarkNetworkUpdate()");

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    // virtual void Node::AddReplicationState(NodeReplicationState* state)
    // Error: type "NodeReplicationState*" can not automatically bind
    // void Node::CleanupConnection(Connection* connection)
    // Not registered because have @manualbind mark
    // Node* Node::GetChild(const char* name, bool recursive=false) const
    // Error: type "const char*" can not automatically bind
    // void Node::GetChildren(PODVector<Node*>& dest, bool recursive=false) const
    // Error: type "PODVector<Node*>&" can not automatically bind
    // void Node::GetChildrenWithComponent(PODVector<Node*>& dest, StringHash type, bool recursive=false) const
    // Error: type "PODVector<Node*>&" can not automatically bind
    // void Node::GetChildrenWithTag(PODVector<Node*>& dest, const String& tag, bool recursive=false) const
    // Error: type "PODVector<Node*>&" can not automatically bind
    // void Node::GetComponents(PODVector<Component*>& dest, StringHash type, bool recursive=false) const
    // Error: type "PODVector<Component*>&" can not automatically bind
    // const Vector<WeakPtr<Component>> Node::GetListeners() const
    // Error: type "const Vector<WeakPtr<Component>>" can not automatically bind
    // const PODVector<unsigned char>& Node::GetNetParentAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // const PODVector<unsigned char>& Node::GetNetRotationAttr() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // Connection* Node::GetOwner() const
    // Not registered because have @manualbind mark
    // void Node::SetNetParentAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // void Node::SetNetRotationAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // void Node::SetOwner(Connection* owner)
    // Not registered because have @manualbind mark

    methods.Push(RegisterObjectMethodArgs("bool Node::Load(Deserializer& source) override", "bool Load(Deserializer&)", AS_METHODPR(Node, Load, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::LoadXML(const XMLElement& source) override", "bool LoadXML(const XMLElement&in)", AS_METHODPR(Node, LoadXML, (const XMLElement&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::LoadJSON(const JSONValue& source) override", "bool LoadJSON(const JSONValue&in)", AS_METHODPR(Node, LoadJSON, (const JSONValue&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(Node, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::SaveXML(XMLElement& dest) const override", "bool SaveXML(XMLElement&) const", AS_METHODPR(Node, SaveXML, (XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::SaveJSON(JSONValue& dest) const override", "bool SaveJSON(JSONValue&) const", AS_METHODPR(Node, SaveJSON, (JSONValue&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(Node, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::SaveDefaultAttributes() const override", "bool SaveDefaultAttributes() const", AS_METHODPR(Node, SaveDefaultAttributes, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::MarkNetworkUpdate() override", "void MarkNetworkUpdate()", AS_METHODPR(Node, MarkNetworkUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::SaveXML(Serializer& dest, const String& indentation=\"\t\") const", "bool SaveXML(Serializer&, const String&in = \"\t\") const", AS_METHODPR(Node, SaveXML, (Serializer&, const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::SaveJSON(Serializer& dest, const String& indentation=\"\t\") const", "bool SaveJSON(Serializer&, const String&in = \"\t\") const", AS_METHODPR(Node, SaveJSON, (Serializer&, const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetName(const String& name)", "void SetName(const String&in)", AS_METHODPR(Node, SetName, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetName(const String& name)", "void set_name(const String&in)", AS_METHODPR(Node, SetName, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetTags(const StringVector& tags)", "void SetTags(Array<String>@+)", AS_FUNCTION_OBJFIRST(Node_SetTags_StringVector), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("void Node::AddTag(const String& tag)", "void AddTag(const String&in)", AS_METHODPR(Node, AddTag, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::AddTags(const String& tags, char separator=';')", "void AddTags(const String&in, int8 = ';')", AS_METHODPR(Node, AddTags, (const String&, char), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::AddTags(const StringVector& tags)", "void AddTags(Array<String>@+)", AS_FUNCTION_OBJFIRST(Node_AddTags_StringVector), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool Node::RemoveTag(const String& tag)", "bool RemoveTag(const String&in)", AS_METHODPR(Node, RemoveTag, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RemoveAllTags()", "void RemoveAllTags()", AS_METHODPR(Node, RemoveAllTags, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetPosition(const Vector3& position)", "void SetPosition(const Vector3&in)", AS_METHODPR(Node, SetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetPosition(const Vector3& position)", "void set_position(const Vector3&in)", AS_METHODPR(Node, SetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetPosition2D(const Vector2& position)", "void SetPosition2D(const Vector2&in)", AS_METHODPR(Node, SetPosition2D, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetPosition2D(const Vector2& position)", "void set_position2D(const Vector2&in)", AS_METHODPR(Node, SetPosition2D, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetPosition2D(float x, float y)", "void SetPosition2D(float, float)", AS_METHODPR(Node, SetPosition2D, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetRotation(const Quaternion& rotation)", "void SetRotation(const Quaternion&in)", AS_METHODPR(Node, SetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetRotation(const Quaternion& rotation)", "void set_rotation(const Quaternion&in)", AS_METHODPR(Node, SetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetRotation2D(float rotation)", "void SetRotation2D(float)", AS_METHODPR(Node, SetRotation2D, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetRotation2D(float rotation)", "void set_rotation2D(float)", AS_METHODPR(Node, SetRotation2D, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetDirection(const Vector3& direction)", "void SetDirection(const Vector3&in)", AS_METHODPR(Node, SetDirection, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetDirection(const Vector3& direction)", "void set_direction(const Vector3&in)", AS_METHODPR(Node, SetDirection, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetScale(float scale)", "void SetScale(float)", AS_METHODPR(Node, SetScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetScale(const Vector3& scale)", "void SetScale(const Vector3&in)", AS_METHODPR(Node, SetScale, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetScale(const Vector3& scale)", "void set_scale(const Vector3&in)", AS_METHODPR(Node, SetScale, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetScale2D(const Vector2& scale)", "void SetScale2D(const Vector2&in)", AS_METHODPR(Node, SetScale2D, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetScale2D(const Vector2& scale)", "void set_scale2D(const Vector2&in)", AS_METHODPR(Node, SetScale2D, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetScale2D(float x, float y)", "void SetScale2D(float, float)", AS_METHODPR(Node, SetScale2D, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetTransform(const Vector3& position, const Quaternion& rotation)", "void SetTransform(const Vector3&in, const Quaternion&in)", AS_METHODPR(Node, SetTransform, (const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetTransform(const Vector3& position, const Quaternion& rotation, float scale)", "void SetTransform(const Vector3&in, const Quaternion&in, float)", AS_METHODPR(Node, SetTransform, (const Vector3&, const Quaternion&, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetTransform(const Vector3& position, const Quaternion& rotation, const Vector3& scale)", "void SetTransform(const Vector3&in, const Quaternion&in, const Vector3&in)", AS_METHODPR(Node, SetTransform, (const Vector3&, const Quaternion&, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetTransform(const Matrix3x4& matrix)", "void SetTransform(const Matrix3x4&in)", AS_METHODPR(Node, SetTransform, (const Matrix3x4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetTransform2D(const Vector2& position, float rotation)", "void SetTransform2D(const Vector2&in, float)", AS_METHODPR(Node, SetTransform2D, (const Vector2&, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetTransform2D(const Vector2& position, float rotation, float scale)", "void SetTransform2D(const Vector2&in, float, float)", AS_METHODPR(Node, SetTransform2D, (const Vector2&, float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetTransform2D(const Vector2& position, float rotation, const Vector2& scale)", "void SetTransform2D(const Vector2&in, float, const Vector2&in)", AS_METHODPR(Node, SetTransform2D, (const Vector2&, float, const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldPosition(const Vector3& position)", "void SetWorldPosition(const Vector3&in)", AS_METHODPR(Node, SetWorldPosition, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldPosition(const Vector3& position)", "void set_worldPosition(const Vector3&in)", AS_METHODPR(Node, SetWorldPosition, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldPosition2D(const Vector2& position)", "void SetWorldPosition2D(const Vector2&in)", AS_METHODPR(Node, SetWorldPosition2D, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldPosition2D(const Vector2& position)", "void set_worldPosition2D(const Vector2&in)", AS_METHODPR(Node, SetWorldPosition2D, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldPosition2D(float x, float y)", "void SetWorldPosition2D(float, float)", AS_METHODPR(Node, SetWorldPosition2D, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldRotation(const Quaternion& rotation)", "void SetWorldRotation(const Quaternion&in)", AS_METHODPR(Node, SetWorldRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldRotation(const Quaternion& rotation)", "void set_worldRotation(const Quaternion&in)", AS_METHODPR(Node, SetWorldRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldRotation2D(float rotation)", "void SetWorldRotation2D(float)", AS_METHODPR(Node, SetWorldRotation2D, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldRotation2D(float rotation)", "void set_worldRotation2D(float)", AS_METHODPR(Node, SetWorldRotation2D, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldDirection(const Vector3& direction)", "void SetWorldDirection(const Vector3&in)", AS_METHODPR(Node, SetWorldDirection, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldDirection(const Vector3& direction)", "void set_worldDirection(const Vector3&in)", AS_METHODPR(Node, SetWorldDirection, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldScale(float scale)", "void SetWorldScale(float)", AS_METHODPR(Node, SetWorldScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldScale(const Vector3& scale)", "void SetWorldScale(const Vector3&in)", AS_METHODPR(Node, SetWorldScale, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldScale(const Vector3& scale)", "void set_worldScale(const Vector3&in)", AS_METHODPR(Node, SetWorldScale, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldScale2D(const Vector2& scale)", "void SetWorldScale2D(const Vector2&in)", AS_METHODPR(Node, SetWorldScale2D, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldScale2D(const Vector2& scale)", "void set_worldScale2D(const Vector2&in)", AS_METHODPR(Node, SetWorldScale2D, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldScale2D(float x, float y)", "void SetWorldScale2D(float, float)", AS_METHODPR(Node, SetWorldScale2D, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldTransform(const Vector3& position, const Quaternion& rotation)", "void SetWorldTransform(const Vector3&in, const Quaternion&in)", AS_METHODPR(Node, SetWorldTransform, (const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldTransform(const Vector3& position, const Quaternion& rotation, float scale)", "void SetWorldTransform(const Vector3&in, const Quaternion&in, float)", AS_METHODPR(Node, SetWorldTransform, (const Vector3&, const Quaternion&, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldTransform(const Vector3& position, const Quaternion& rotation, const Vector3& scale)", "void SetWorldTransform(const Vector3&in, const Quaternion&in, const Vector3&in)", AS_METHODPR(Node, SetWorldTransform, (const Vector3&, const Quaternion&, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldTransform(const Matrix3x4& worldTransform)", "void SetWorldTransform(const Matrix3x4&in)", AS_METHODPR(Node, SetWorldTransform, (const Matrix3x4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldTransform2D(const Vector2& position, float rotation)", "void SetWorldTransform2D(const Vector2&in, float)", AS_METHODPR(Node, SetWorldTransform2D, (const Vector2&, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldTransform2D(const Vector2& position, float rotation, float scale)", "void SetWorldTransform2D(const Vector2&in, float, float)", AS_METHODPR(Node, SetWorldTransform2D, (const Vector2&, float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetWorldTransform2D(const Vector2& position, float rotation, const Vector2& scale)", "void SetWorldTransform2D(const Vector2&in, float, const Vector2&in)", AS_METHODPR(Node, SetWorldTransform2D, (const Vector2&, float, const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Translate(const Vector3& delta, TransformSpace space=TS_LOCAL)", "void Translate(const Vector3&in, TransformSpace = TS_LOCAL)", AS_METHODPR(Node, Translate, (const Vector3&, TransformSpace), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Translate2D(const Vector2& delta, TransformSpace space=TS_LOCAL)", "void Translate2D(const Vector2&in, TransformSpace = TS_LOCAL)", AS_METHODPR(Node, Translate2D, (const Vector2&, TransformSpace), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Rotate(const Quaternion& delta, TransformSpace space=TS_LOCAL)", "void Rotate(const Quaternion&in, TransformSpace = TS_LOCAL)", AS_METHODPR(Node, Rotate, (const Quaternion&, TransformSpace), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Rotate2D(float delta, TransformSpace space=TS_LOCAL)", "void Rotate2D(float, TransformSpace = TS_LOCAL)", AS_METHODPR(Node, Rotate2D, (float, TransformSpace), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RotateAround(const Vector3& point, const Quaternion& delta, TransformSpace space=TS_LOCAL)", "void RotateAround(const Vector3&in, const Quaternion&in, TransformSpace = TS_LOCAL)", AS_METHODPR(Node, RotateAround, (const Vector3&, const Quaternion&, TransformSpace), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RotateAround2D(const Vector2& point, float delta, TransformSpace space=TS_LOCAL)", "void RotateAround2D(const Vector2&in, float, TransformSpace = TS_LOCAL)", AS_METHODPR(Node, RotateAround2D, (const Vector2&, float, TransformSpace), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Pitch(float angle, TransformSpace space=TS_LOCAL)", "void Pitch(float, TransformSpace = TS_LOCAL)", AS_METHODPR(Node, Pitch, (float, TransformSpace), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Yaw(float angle, TransformSpace space=TS_LOCAL)", "void Yaw(float, TransformSpace = TS_LOCAL)", AS_METHODPR(Node, Yaw, (float, TransformSpace), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Roll(float angle, TransformSpace space=TS_LOCAL)", "void Roll(float, TransformSpace = TS_LOCAL)", AS_METHODPR(Node, Roll, (float, TransformSpace), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::LookAt(const Vector3& target, const Vector3& up=Vector3::UP, TransformSpace space=TS_WORLD)", "bool LookAt(const Vector3&in, const Vector3&in = Vector3::UP, TransformSpace = TS_WORLD)", AS_METHODPR(Node, LookAt, (const Vector3&, const Vector3&, TransformSpace), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Scale(float scale)", "void Scale(float)", AS_METHODPR(Node, Scale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Scale(const Vector3& scale)", "void Scale(const Vector3&in)", AS_METHODPR(Node, Scale, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Scale2D(const Vector2& scale)", "void Scale2D(const Vector2&in)", AS_METHODPR(Node, Scale2D, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetEnabled(bool enable)", "void SetEnabled(bool)", AS_METHODPR(Node, SetEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetEnabled(bool enable)", "void set_enabled(bool)", AS_METHODPR(Node, SetEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetDeepEnabled(bool enable)", "void SetDeepEnabled(bool)", AS_METHODPR(Node, SetDeepEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::ResetDeepEnabled()", "void ResetDeepEnabled()", AS_METHODPR(Node, ResetDeepEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetEnabledRecursive(bool enable)", "void SetEnabledRecursive(bool)", AS_METHODPR(Node, SetEnabledRecursive, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::MarkDirty()", "void MarkDirty()", AS_METHODPR(Node, MarkDirty, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Node::CreateChild(const String& name=String::EMPTY, CreateMode mode=REPLICATED, unsigned id=0, bool temporary=false)", "Node@+ CreateChild(const String&in = String::EMPTY, CreateMode = REPLICATED, uint = 0, bool = false)", AS_METHODPR(Node, CreateChild, (const String&, CreateMode, unsigned, bool), Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Node::CreateTemporaryChild(const String& name=String::EMPTY, CreateMode mode=REPLICATED, unsigned id=0)", "Node@+ CreateTemporaryChild(const String&in = String::EMPTY, CreateMode = REPLICATED, uint = 0)", AS_METHODPR(Node, CreateTemporaryChild, (const String&, CreateMode, unsigned), Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::AddChild(Node* node, unsigned index=M_MAX_UNSIGNED)", "void AddChild(Node@+, uint = M_MAX_UNSIGNED)", AS_METHODPR(Node, AddChild, (Node*, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RemoveChild(Node* node)", "void RemoveChild(Node@+)", AS_METHODPR(Node, RemoveChild, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RemoveAllChildren()", "void RemoveAllChildren()", AS_METHODPR(Node, RemoveAllChildren, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RemoveChildren(bool removeReplicated, bool removeLocal, bool recursive)", "void RemoveChildren(bool, bool, bool)", AS_METHODPR(Node, RemoveChildren, (bool, bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Component* Node::CreateComponent(StringHash type, CreateMode mode=REPLICATED, unsigned id=0)", "Component@+ CreateComponent(StringHash, CreateMode = REPLICATED, uint = 0)", AS_METHODPR(Node, CreateComponent, (StringHash, CreateMode, unsigned), Component*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Component* Node::GetOrCreateComponent(StringHash type, CreateMode mode=REPLICATED, unsigned id=0)", "Component@+ GetOrCreateComponent(StringHash, CreateMode = REPLICATED, uint = 0)", AS_METHODPR(Node, GetOrCreateComponent, (StringHash, CreateMode, unsigned), Component*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Component* Node::CloneComponent(Component* component, unsigned id=0)", "Component@+ CloneComponent(Component@+, uint = 0)", AS_METHODPR(Node, CloneComponent, (Component*, unsigned), Component*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Component* Node::CloneComponent(Component* component, CreateMode mode, unsigned id=0)", "Component@+ CloneComponent(Component@+, CreateMode, uint = 0)", AS_METHODPR(Node, CloneComponent, (Component*, CreateMode, unsigned), Component*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RemoveComponent(Component* component)", "void RemoveComponent(Component@+)", AS_METHODPR(Node, RemoveComponent, (Component*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RemoveComponent(StringHash type)", "void RemoveComponent(StringHash)", AS_METHODPR(Node, RemoveComponent, (StringHash), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RemoveComponents(bool removeReplicated, bool removeLocal)", "void RemoveComponents(bool, bool)", AS_METHODPR(Node, RemoveComponents, (bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RemoveComponents(StringHash type)", "void RemoveComponents(StringHash)", AS_METHODPR(Node, RemoveComponents, (StringHash), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RemoveAllComponents()", "void RemoveAllComponents()", AS_METHODPR(Node, RemoveAllComponents, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::ReorderComponent(Component* component, unsigned index)", "void ReorderComponent(Component@+, uint)", AS_METHODPR(Node, ReorderComponent, (Component*, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Node::Clone(CreateMode mode=REPLICATED)", "Node@+ Clone(CreateMode = REPLICATED)", AS_METHODPR(Node, Clone, (CreateMode), Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::Remove()", "void Remove()", AS_METHODPR(Node, Remove, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetParent(Node* parent)", "void SetParent(Node@+)", AS_METHODPR(Node, SetParent, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetParent(Node* parent)", "void set_parent(Node@+)", AS_METHODPR(Node, SetParent, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetVar(StringHash key, const Variant& value)", "void SetVar(StringHash, const Variant&in)", AS_METHODPR(Node, SetVar, (StringHash, const Variant&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::AddListener(Component* component)", "void AddListener(Component@+)", AS_METHODPR(Node, AddListener, (Component*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::RemoveListener(Component* component)", "void RemoveListener(Component@+)", AS_METHODPR(Node, RemoveListener, (Component*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Node::GetID() const", "uint GetID() const", AS_METHODPR(Node, GetID, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Node::GetID() const", "uint get_id() const", AS_METHODPR(Node, GetID, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::IsReplicated() const", "bool IsReplicated() const", AS_METHODPR(Node, IsReplicated, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::IsReplicated() const", "bool get_replicated() const", AS_METHODPR(Node, IsReplicated, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Node::GetName() const", "const String& GetName() const", AS_METHODPR(Node, GetName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Node::GetName() const", "const String& get_name() const", AS_METHODPR(Node, GetName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("StringHash Node::GetNameHash() const", "StringHash GetNameHash() const", AS_METHODPR(Node, GetNameHash, () const, StringHash), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const StringVector& Node::GetTags() const", "Array<String>@ GetTags() const", AS_FUNCTION_OBJFIRST(Node_GetTags_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("const StringVector& Node::GetTags() const", "Array<String>@ get_tags() const", AS_FUNCTION_OBJFIRST(Node_GetTags_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool Node::HasTag(const String& tag) const", "bool HasTag(const String&in) const", AS_METHODPR(Node, HasTag, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Node::GetParent() const", "Node@+ GetParent() const", AS_METHODPR(Node, GetParent, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Node::GetParent() const", "Node@+ get_parent() const", AS_METHODPR(Node, GetParent, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Scene* Node::GetScene() const", "Scene@+ GetScene() const", AS_METHODPR(Node, GetScene, () const, Scene*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Scene* Node::GetScene() const", "Scene@+ get_scene() const", AS_METHODPR(Node, GetScene, () const, Scene*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::IsChildOf(Node* node) const", "bool IsChildOf(Node@+) const", AS_METHODPR(Node, IsChildOf, (Node*) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::IsEnabled() const", "bool IsEnabled() const", AS_METHODPR(Node, IsEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::IsEnabled() const", "bool get_enabled() const", AS_METHODPR(Node, IsEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::IsEnabledSelf() const", "bool IsEnabledSelf() const", AS_METHODPR(Node, IsEnabledSelf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::IsEnabledSelf() const", "bool get_enabledSelf() const", AS_METHODPR(Node, IsEnabledSelf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& Node::GetPosition() const", "const Vector3& GetPosition() const", AS_METHODPR(Node, GetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& Node::GetPosition() const", "const Vector3& get_position() const", AS_METHODPR(Node, GetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Node::GetPosition2D() const", "Vector2 GetPosition2D() const", AS_METHODPR(Node, GetPosition2D, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Node::GetPosition2D() const", "Vector2 get_position2D() const", AS_METHODPR(Node, GetPosition2D, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Quaternion& Node::GetRotation() const", "const Quaternion& GetRotation() const", AS_METHODPR(Node, GetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Quaternion& Node::GetRotation() const", "const Quaternion& get_rotation() const", AS_METHODPR(Node, GetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Node::GetRotation2D() const", "float GetRotation2D() const", AS_METHODPR(Node, GetRotation2D, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Node::GetRotation2D() const", "float get_rotation2D() const", AS_METHODPR(Node, GetRotation2D, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetDirection() const", "Vector3 GetDirection() const", AS_METHODPR(Node, GetDirection, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetDirection() const", "Vector3 get_direction() const", AS_METHODPR(Node, GetDirection, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetUp() const", "Vector3 GetUp() const", AS_METHODPR(Node, GetUp, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetUp() const", "Vector3 get_up() const", AS_METHODPR(Node, GetUp, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetRight() const", "Vector3 GetRight() const", AS_METHODPR(Node, GetRight, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetRight() const", "Vector3 get_right() const", AS_METHODPR(Node, GetRight, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& Node::GetScale() const", "const Vector3& GetScale() const", AS_METHODPR(Node, GetScale, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& Node::GetScale() const", "const Vector3& get_scale() const", AS_METHODPR(Node, GetScale, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Node::GetScale2D() const", "Vector2 GetScale2D() const", AS_METHODPR(Node, GetScale2D, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Node::GetScale2D() const", "Vector2 get_scale2D() const", AS_METHODPR(Node, GetScale2D, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4 Node::GetTransform() const", "Matrix3x4 GetTransform() const", AS_METHODPR(Node, GetTransform, () const, Matrix3x4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4 Node::GetTransform() const", "Matrix3x4 get_transform() const", AS_METHODPR(Node, GetTransform, () const, Matrix3x4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetWorldPosition() const", "Vector3 GetWorldPosition() const", AS_METHODPR(Node, GetWorldPosition, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetWorldPosition() const", "Vector3 get_worldPosition() const", AS_METHODPR(Node, GetWorldPosition, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Node::GetWorldPosition2D() const", "Vector2 GetWorldPosition2D() const", AS_METHODPR(Node, GetWorldPosition2D, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Node::GetWorldPosition2D() const", "Vector2 get_worldPosition2D() const", AS_METHODPR(Node, GetWorldPosition2D, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Node::GetWorldRotation() const", "Quaternion GetWorldRotation() const", AS_METHODPR(Node, GetWorldRotation, () const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Node::GetWorldRotation() const", "Quaternion get_worldRotation() const", AS_METHODPR(Node, GetWorldRotation, () const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Node::GetWorldRotation2D() const", "float GetWorldRotation2D() const", AS_METHODPR(Node, GetWorldRotation2D, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Node::GetWorldRotation2D() const", "float get_worldRotation2D() const", AS_METHODPR(Node, GetWorldRotation2D, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetWorldDirection() const", "Vector3 GetWorldDirection() const", AS_METHODPR(Node, GetWorldDirection, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetWorldDirection() const", "Vector3 get_worldDirection() const", AS_METHODPR(Node, GetWorldDirection, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetWorldUp() const", "Vector3 GetWorldUp() const", AS_METHODPR(Node, GetWorldUp, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetWorldUp() const", "Vector3 get_worldUp() const", AS_METHODPR(Node, GetWorldUp, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetWorldRight() const", "Vector3 GetWorldRight() const", AS_METHODPR(Node, GetWorldRight, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetWorldRight() const", "Vector3 get_worldRight() const", AS_METHODPR(Node, GetWorldRight, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetWorldScale() const", "Vector3 GetWorldScale() const", AS_METHODPR(Node, GetWorldScale, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetWorldScale() const", "Vector3 get_worldScale() const", AS_METHODPR(Node, GetWorldScale, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetSignedWorldScale() const", "Vector3 GetSignedWorldScale() const", AS_METHODPR(Node, GetSignedWorldScale, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::GetSignedWorldScale() const", "Vector3 get_signedWorldScale() const", AS_METHODPR(Node, GetSignedWorldScale, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Node::GetWorldScale2D() const", "Vector2 GetWorldScale2D() const", AS_METHODPR(Node, GetWorldScale2D, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Node::GetWorldScale2D() const", "Vector2 get_worldScale2D() const", AS_METHODPR(Node, GetWorldScale2D, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Matrix3x4& Node::GetWorldTransform() const", "const Matrix3x4& GetWorldTransform() const", AS_METHODPR(Node, GetWorldTransform, () const, const Matrix3x4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Matrix3x4& Node::GetWorldTransform() const", "const Matrix3x4& get_worldTransform() const", AS_METHODPR(Node, GetWorldTransform, () const, const Matrix3x4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::LocalToWorld(const Vector3& position) const", "Vector3 LocalToWorld(const Vector3&in) const", AS_METHODPR(Node, LocalToWorld, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::LocalToWorld(const Vector4& vector) const", "Vector3 LocalToWorld(const Vector4&in) const", AS_METHODPR(Node, LocalToWorld, (const Vector4&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Node::LocalToWorld2D(const Vector2& vector) const", "Vector2 LocalToWorld2D(const Vector2&in) const", AS_METHODPR(Node, LocalToWorld2D, (const Vector2&) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::WorldToLocal(const Vector3& position) const", "Vector3 WorldToLocal(const Vector3&in) const", AS_METHODPR(Node, WorldToLocal, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Node::WorldToLocal(const Vector4& vector) const", "Vector3 WorldToLocal(const Vector4&in) const", AS_METHODPR(Node, WorldToLocal, (const Vector4&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Node::WorldToLocal2D(const Vector2& vector) const", "Vector2 WorldToLocal2D(const Vector2&in) const", AS_METHODPR(Node, WorldToLocal2D, (const Vector2&) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::IsDirty() const", "bool IsDirty() const", AS_METHODPR(Node, IsDirty, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Node::GetNumChildren(bool recursive=false) const", "uint GetNumChildren(bool = false) const", AS_METHODPR(Node, GetNumChildren, (bool) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<Node>>& Node::GetChildren() const", "Array<Node@>@ GetChildren() const", AS_FUNCTION_OBJFIRST(Node_GetChildren_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("PODVector<Node*> Node::GetChildren(bool recursive) const", "Array<Node@>@ GetChildren(bool) const", AS_FUNCTION_OBJFIRST(Node_GetChildren_bool), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("PODVector<Node*> Node::GetChildrenWithComponent(StringHash type, bool recursive=false) const", "Array<Node@>@ GetChildrenWithComponent(StringHash, bool = false) const", AS_FUNCTION_OBJFIRST(Node_GetChildrenWithComponent_StringHash_bool), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("PODVector<Node*> Node::GetChildrenWithTag(const String& tag, bool recursive=false) const", "Array<Node@>@ GetChildrenWithTag(const String&in, bool = false) const", AS_FUNCTION_OBJFIRST(Node_GetChildrenWithTag_String_bool), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("Node* Node::GetChild(unsigned index) const", "Node@+ GetChild(uint) const", AS_METHODPR(Node, GetChild, (unsigned) const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Node::GetChild(const String& name, bool recursive=false) const", "Node@+ GetChild(const String&in, bool = false) const", AS_METHODPR(Node, GetChild, (const String&, bool) const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Node::GetChild(StringHash nameHash, bool recursive=false) const", "Node@+ GetChild(StringHash, bool = false) const", AS_METHODPR(Node, GetChild, (StringHash, bool) const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Node::GetNumComponents() const", "uint GetNumComponents() const", AS_METHODPR(Node, GetNumComponents, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Node::GetNumComponents() const", "uint get_numComponents() const", AS_METHODPR(Node, GetNumComponents, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Node::GetNumNetworkComponents() const", "uint GetNumNetworkComponents() const", AS_METHODPR(Node, GetNumNetworkComponents, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<Component>>& Node::GetComponents() const", "Array<Component@>@ GetComponents() const", AS_FUNCTION_OBJFIRST(Node_GetComponents_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("Component* Node::GetComponent(StringHash type, bool recursive=false) const", "Component@+ GetComponent(StringHash, bool = false) const", AS_METHODPR(Node, GetComponent, (StringHash, bool) const, Component*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Component* Node::GetParentComponent(StringHash type, bool fullTraversal=false) const", "Component@+ GetParentComponent(StringHash, bool = false) const", AS_METHODPR(Node, GetParentComponent, (StringHash, bool) const, Component*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::HasComponent(StringHash type) const", "bool HasComponent(StringHash) const", AS_METHODPR(Node, HasComponent, (StringHash) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Variant& Node::GetVar(StringHash key) const", "const Variant& GetVar(StringHash) const", AS_METHODPR(Node, GetVar, (StringHash) const, const Variant&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const VariantMap& Node::GetVars() const", "const VariantMap& GetVars() const", AS_METHODPR(Node, GetVars, () const, const VariantMap&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetID(unsigned id)", "void SetID(uint)", AS_METHODPR(Node, SetID, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetID(unsigned id)", "void set_id(uint)", AS_METHODPR(Node, SetID, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetScene(Scene* scene)", "void SetScene(Scene@+)", AS_METHODPR(Node, SetScene, (Scene*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::ResetScene()", "void ResetScene()", AS_METHODPR(Node, ResetScene, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetNetPositionAttr(const Vector3& value)", "void SetNetPositionAttr(const Vector3&in)", AS_METHODPR(Node, SetNetPositionAttr, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& Node::GetNetPositionAttr() const", "const Vector3& GetNetPositionAttr() const", AS_METHODPR(Node, GetNetPositionAttr, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::Load(Deserializer& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)", "bool Load(Deserializer&, SceneResolver&, bool = true, bool = false, CreateMode = REPLICATED)", AS_METHODPR(Node, Load, (Deserializer&, SceneResolver&, bool, bool, CreateMode), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::LoadXML(const XMLElement& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)", "bool LoadXML(const XMLElement&in, SceneResolver&, bool = true, bool = false, CreateMode = REPLICATED)", AS_METHODPR(Node, LoadXML, (const XMLElement&, SceneResolver&, bool, bool, CreateMode), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Node::LoadJSON(const JSONValue& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)", "bool LoadJSON(const JSONValue&in, SceneResolver&, bool = true, bool = false, CreateMode = REPLICATED)", AS_METHODPR(Node, LoadJSON, (const JSONValue&, SceneResolver&, bool, bool, CreateMode), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const PODVector<Node*>& Node::GetDependencyNodes() const", "Array<Node@>@ GetDependencyNodes() const", AS_FUNCTION_OBJFIRST(Node_GetDependencyNodes_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("void Node::PrepareNetworkUpdate()", "void PrepareNetworkUpdate()", AS_METHODPR(Node, PrepareNetworkUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::MarkReplicationDirty()", "void MarkReplicationDirty()", AS_METHODPR(Node, MarkReplicationDirty, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Node::CreateChild(unsigned id, CreateMode mode, bool temporary=false)", "Node@+ CreateChild(uint, CreateMode, bool = false)", AS_METHODPR(Node, CreateChild, (unsigned, CreateMode, bool), Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::AddComponent(Component* component, unsigned id, CreateMode mode)", "void AddComponent(Component@+, uint, CreateMode)", AS_METHODPR(Node, AddComponent, (Component*, unsigned, CreateMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Node::GetNumPersistentChildren() const", "uint GetNumPersistentChildren() const", AS_METHODPR(Node, GetNumPersistentChildren, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Node::GetNumPersistentComponents() const", "uint GetNumPersistentComponents() const", AS_METHODPR(Node, GetNumPersistentComponents, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetPositionSilent(const Vector3& position)", "void SetPositionSilent(const Vector3&in)", AS_METHODPR(Node, SetPositionSilent, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetRotationSilent(const Quaternion& rotation)", "void SetRotationSilent(const Quaternion&in)", AS_METHODPR(Node, SetRotationSilent, (const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetScaleSilent(const Vector3& scale)", "void SetScaleSilent(const Vector3&in)", AS_METHODPR(Node, SetScaleSilent, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Node::SetTransformSilent(const Vector3& position, const Quaternion& rotation, const Vector3& scale)", "void SetTransformSilent(const Vector3&in, const Quaternion&in, const Vector3&in)", AS_METHODPR(Node, SetTransformSilent, (const Vector3&, const Quaternion&, const Vector3&), void), AS_CALL_THISCALL));

    // static void Node::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MANUAL_PART_Node
        REGISTER_MANUAL_PART_Node();
    #endif
}

// struct NodeImpl | File: ../Scene/Node.h
void CollectMembers_NodeImpl(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // PODVector<Node*> NodeImpl::dependencyNodes_
    // Error: type "PODVector<Node*>" can not automatically bind
    // Connection* NodeImpl::owner_
    // Not registered because pointer
    // StringVector NodeImpl::tags_
    // Error: type "StringVector" can not automatically bind

    fields.Push(RegisterObjectPropertyArgs("String NodeImpl::name_", "String name", offsetof(NodeImpl, name_)));
    fields.Push(RegisterObjectPropertyArgs("StringHash NodeImpl::nameHash_", "StringHash nameHash", offsetof(NodeImpl, nameHash_)));
    fields.Push(RegisterObjectPropertyArgs("VectorBuffer NodeImpl::attrBuffer_", "VectorBuffer attrBuffer", offsetof(NodeImpl, attrBuffer_)));

    #ifdef REGISTER_MANUAL_PART_NodeImpl
        REGISTER_MANUAL_PART_NodeImpl();
    #endif
}

// struct NodeReplicationState | File: ../Scene/ReplicationState.h
void CollectMembers_NodeReplicationState(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_ReplicationState(methods, staticMethods, fields, wrappedFields, staticFields);

    // SceneReplicationState* NodeReplicationState::sceneState_
    // Not registered because pointer
    // WeakPtr<Node> NodeReplicationState::node_
    // Error: type "WeakPtr<Node>" can not automatically bind
    // HashSet<StringHash> NodeReplicationState::dirtyVars_
    // Error: type "HashSet<StringHash>" can not automatically bind
    // HashMap<unsigned, ComponentReplicationState> NodeReplicationState::componentStates_
    // Error: type "HashMap<unsigned, ComponentReplicationState>" can not automatically bind

    fields.Push(RegisterObjectPropertyArgs("DirtyBits NodeReplicationState::dirtyAttributes_", "DirtyBits dirtyAttributes", offsetof(NodeReplicationState, dirtyAttributes_)));
    fields.Push(RegisterObjectPropertyArgs("float NodeReplicationState::priorityAcc_", "float priorityAcc", offsetof(NodeReplicationState, priorityAcc_)));
    fields.Push(RegisterObjectPropertyArgs("bool NodeReplicationState::markedDirty_", "bool markedDirty", offsetof(NodeReplicationState, markedDirty_)));

    #ifdef REGISTER_MANUAL_PART_NodeReplicationState
        REGISTER_MANUAL_PART_NodeReplicationState();
    #endif
}

// class ObjectAnimation | File: ../Scene/ObjectAnimation.h
void CollectMembers_ObjectAnimation(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Resource(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(methods, "virtual bool Resource::Save(Serializer& dest) const");

    // const HashMap<String, SharedPtr<ValueAnimationInfo>>& ObjectAnimation::GetAttributeAnimationInfos() const
    // Error: type "const HashMap<String, SharedPtr<ValueAnimationInfo>>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool ObjectAnimation::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(ObjectAnimation, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ObjectAnimation::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(ObjectAnimation, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ObjectAnimation::LoadXML(const XMLElement& source)", "bool LoadXML(const XMLElement&in)", AS_METHODPR(ObjectAnimation, LoadXML, (const XMLElement&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ObjectAnimation::SaveXML(XMLElement& dest) const", "bool SaveXML(XMLElement&) const", AS_METHODPR(ObjectAnimation, SaveXML, (XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ObjectAnimation::LoadJSON(const JSONValue& source)", "bool LoadJSON(const JSONValue&in)", AS_METHODPR(ObjectAnimation, LoadJSON, (const JSONValue&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ObjectAnimation::SaveJSON(JSONValue& dest) const", "bool SaveJSON(JSONValue&) const", AS_METHODPR(ObjectAnimation, SaveJSON, (JSONValue&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ObjectAnimation::AddAttributeAnimation(const String& name, ValueAnimation* attributeAnimation, WrapMode wrapMode=WM_LOOP, float speed=1.0f)", "void AddAttributeAnimation(const String&in, ValueAnimation@+, WrapMode = WM_LOOP, float = 1.0f)", AS_METHODPR(ObjectAnimation, AddAttributeAnimation, (const String&, ValueAnimation*, WrapMode, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ObjectAnimation::RemoveAttributeAnimation(const String& name)", "void RemoveAttributeAnimation(const String&in)", AS_METHODPR(ObjectAnimation, RemoveAttributeAnimation, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ObjectAnimation::RemoveAttributeAnimation(ValueAnimation* attributeAnimation)", "void RemoveAttributeAnimation(ValueAnimation@+)", AS_METHODPR(ObjectAnimation, RemoveAttributeAnimation, (ValueAnimation*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ValueAnimation* ObjectAnimation::GetAttributeAnimation(const String& name) const", "ValueAnimation@+ GetAttributeAnimation(const String&in) const", AS_METHODPR(ObjectAnimation, GetAttributeAnimation, (const String&) const, ValueAnimation*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ValueAnimation* ObjectAnimation::GetAttributeAnimation(const String& name) const", "ValueAnimation@+ get_attributeAnimations(const String&in) const", AS_METHODPR(ObjectAnimation, GetAttributeAnimation, (const String&) const, ValueAnimation*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("WrapMode ObjectAnimation::GetAttributeAnimationWrapMode(const String& name) const", "WrapMode GetAttributeAnimationWrapMode(const String&in) const", AS_METHODPR(ObjectAnimation, GetAttributeAnimationWrapMode, (const String&) const, WrapMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("WrapMode ObjectAnimation::GetAttributeAnimationWrapMode(const String& name) const", "WrapMode get_wrapModes(const String&in) const", AS_METHODPR(ObjectAnimation, GetAttributeAnimationWrapMode, (const String&) const, WrapMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ObjectAnimation::GetAttributeAnimationSpeed(const String& name) const", "float GetAttributeAnimationSpeed(const String&in) const", AS_METHODPR(ObjectAnimation, GetAttributeAnimationSpeed, (const String&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ObjectAnimation::GetAttributeAnimationSpeed(const String& name) const", "float get_speeds(const String&in) const", AS_METHODPR(ObjectAnimation, GetAttributeAnimationSpeed, (const String&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ValueAnimationInfo* ObjectAnimation::GetAttributeAnimationInfo(const String& name) const", "ValueAnimationInfo@+ GetAttributeAnimationInfo(const String&in) const", AS_METHODPR(ObjectAnimation, GetAttributeAnimationInfo, (const String&) const, ValueAnimationInfo*), AS_CALL_THISCALL));

    // static void ObjectAnimation::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MANUAL_PART_ObjectAnimation
        REGISTER_MANUAL_PART_ObjectAnimation();
    #endif
}

// struct ReplicationState | File: ../Scene/ReplicationState.h
void CollectMembers_ReplicationState(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // Connection* ReplicationState::connection_
    // Not registered because pointer

    #ifdef REGISTER_MANUAL_PART_ReplicationState
        REGISTER_MANUAL_PART_ReplicationState();
    #endif
}

// const Vector<SharedPtr<PackageFile>>& Scene::GetRequiredPackageFiles() const
// const Vector<SharedPtr<PackageFile>>& Scene::GetRequiredPackageFiles() const | File: ../Scene/Scene.h
static CScriptArray* Scene_GetRequiredPackageFiles_void(Scene* ptr)
{
    const Vector<SharedPtr<PackageFile>>& result = ptr->GetRequiredPackageFiles();
    return VectorToHandleArray(result, "Array<PackageFile@>");
}


// class Scene | File: ../Scene/Scene.h
void CollectMembers_Scene(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Node(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "Component* Node::GetComponent(StringHash type, bool recursive=false) const");
    Remove(methods, "bool Node::Load(Deserializer& source) override");
    Remove(methods, "bool Node::Load(Deserializer& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)");
    Remove(methods, "bool Node::LoadJSON(const JSONValue& source) override");
    Remove(methods, "bool Node::LoadJSON(const JSONValue& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)");
    Remove(methods, "bool Node::LoadXML(const XMLElement& source) override");
    Remove(methods, "bool Node::LoadXML(const XMLElement& source, SceneResolver& resolver, bool loadChildren=true, bool rewriteIDs=false, CreateMode mode=REPLICATED)");
    Remove(methods, "bool Node::Save(Serializer& dest) const override");
    Remove(methods, "bool Node::SaveJSON(JSONValue& dest) const override");
    Remove(methods, "bool Node::SaveJSON(Serializer& dest, const String& indentation=\"\t\") const");
    Remove(methods, "bool Node::SaveXML(Serializer& dest, const String& indentation=\"\t\") const");
    Remove(methods, "bool Node::SaveXML(XMLElement& dest) const override");
    Remove(methods, "template<class T> T* Node::GetComponent(bool recursive=false) const");
    Remove(methods, "virtual void Node::AddReplicationState(NodeReplicationState* state)");
    Remove(methods, "void Node::CleanupConnection(Connection* connection)");
    Remove(methods, "void Node::MarkNetworkUpdate() override");
    Remove(methods, "void Node::MarkReplicationDirty()");
    Remove(methods, "void Node::PrepareNetworkUpdate()");

    Remove(staticMethods, "static void Node::RegisterObject(Context* context)");

    // void Scene::AddReplicationState(NodeReplicationState* state) override
    // Error: type "NodeReplicationState*" can not automatically bind
    // void Scene::CleanupConnection(Connection* connection)
    // Not registered because have @manualbind mark
    // Component* Node::GetComponent(StringHash type, bool recursive=false) const
    // Not registered because have @manualbind mark
    // bool Scene::GetNodesWithTag(PODVector<Node*>& dest, const String& tag) const
    // Error: type "PODVector<Node*>&" can not automatically bind
    // bool Node::SaveJSON(JSONValue& dest) const override
    // Not registered because have @manualbind mark
    // bool Node::SaveJSON(Serializer& dest, const String& indentation="\t") const
    // Not registered because have @manualbind mark
    // bool Node::SaveXML(Serializer& dest, const String& indentation="\t") const
    // Not registered because have @manualbind mark
    // bool Node::SaveXML(XMLElement& dest) const override
    // Not registered because have @manualbind mark

    methods.Push(RegisterObjectMethodArgs("bool Scene::Load(Deserializer& source) override", "bool Load(Deserializer&)", AS_METHODPR(Scene, Load, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(Scene, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::LoadXML(const XMLElement& source) override", "bool LoadXML(const XMLElement&in)", AS_METHODPR(Scene, LoadXML, (const XMLElement&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::LoadJSON(const JSONValue& source) override", "bool LoadJSON(const JSONValue&in)", AS_METHODPR(Scene, LoadJSON, (const JSONValue&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::MarkNetworkUpdate() override", "void MarkNetworkUpdate()", AS_METHODPR(Scene, MarkNetworkUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::LoadXML(Deserializer& source)", "bool LoadXML(Deserializer&)", AS_METHODPR(Scene, LoadXML, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::LoadJSON(Deserializer& source)", "bool LoadJSON(Deserializer&)", AS_METHODPR(Scene, LoadJSON, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::SaveXML(Serializer& dest, const String& indentation=\"\t\") const", "bool SaveXML(Serializer&, const String&in = \"\t\") const", AS_METHODPR(Scene, SaveXML, (Serializer&, const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::SaveJSON(Serializer& dest, const String& indentation=\"\t\") const", "bool SaveJSON(Serializer&, const String&in = \"\t\") const", AS_METHODPR(Scene, SaveJSON, (Serializer&, const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::LoadAsync(File* file, LoadMode mode=LOAD_SCENE_AND_RESOURCES)", "bool LoadAsync(File@+, LoadMode = LOAD_SCENE_AND_RESOURCES)", AS_METHODPR(Scene, LoadAsync, (File*, LoadMode), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::LoadAsyncXML(File* file, LoadMode mode=LOAD_SCENE_AND_RESOURCES)", "bool LoadAsyncXML(File@+, LoadMode = LOAD_SCENE_AND_RESOURCES)", AS_METHODPR(Scene, LoadAsyncXML, (File*, LoadMode), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::LoadAsyncJSON(File* file, LoadMode mode=LOAD_SCENE_AND_RESOURCES)", "bool LoadAsyncJSON(File@+, LoadMode = LOAD_SCENE_AND_RESOURCES)", AS_METHODPR(Scene, LoadAsyncJSON, (File*, LoadMode), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::StopAsyncLoading()", "void StopAsyncLoading()", AS_METHODPR(Scene, StopAsyncLoading, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Scene::Instantiate(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode=REPLICATED)", "Node@+ Instantiate(Deserializer&, const Vector3&in, const Quaternion&in, CreateMode = REPLICATED)", AS_METHODPR(Scene, Instantiate, (Deserializer&, const Vector3&, const Quaternion&, CreateMode), Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Scene::InstantiateXML(const XMLElement& source, const Vector3& position, const Quaternion& rotation, CreateMode mode=REPLICATED)", "Node@+ InstantiateXML(const XMLElement&in, const Vector3&in, const Quaternion&in, CreateMode = REPLICATED)", AS_METHODPR(Scene, InstantiateXML, (const XMLElement&, const Vector3&, const Quaternion&, CreateMode), Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Scene::InstantiateXML(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode=REPLICATED)", "Node@+ InstantiateXML(Deserializer&, const Vector3&in, const Quaternion&in, CreateMode = REPLICATED)", AS_METHODPR(Scene, InstantiateXML, (Deserializer&, const Vector3&, const Quaternion&, CreateMode), Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Scene::InstantiateJSON(const JSONValue& source, const Vector3& position, const Quaternion& rotation, CreateMode mode=REPLICATED)", "Node@+ InstantiateJSON(const JSONValue&in, const Vector3&in, const Quaternion&in, CreateMode = REPLICATED)", AS_METHODPR(Scene, InstantiateJSON, (const JSONValue&, const Vector3&, const Quaternion&, CreateMode), Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Scene::InstantiateJSON(Deserializer& source, const Vector3& position, const Quaternion& rotation, CreateMode mode=REPLICATED)", "Node@+ InstantiateJSON(Deserializer&, const Vector3&in, const Quaternion&in, CreateMode = REPLICATED)", AS_METHODPR(Scene, InstantiateJSON, (Deserializer&, const Vector3&, const Quaternion&, CreateMode), Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::Clear(bool clearReplicated=true, bool clearLocal=true)", "void Clear(bool = true, bool = true)", AS_METHODPR(Scene, Clear, (bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetUpdateEnabled(bool enable)", "void SetUpdateEnabled(bool)", AS_METHODPR(Scene, SetUpdateEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetUpdateEnabled(bool enable)", "void set_updateEnabled(bool)", AS_METHODPR(Scene, SetUpdateEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetTimeScale(float scale)", "void SetTimeScale(float)", AS_METHODPR(Scene, SetTimeScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetTimeScale(float scale)", "void set_timeScale(float)", AS_METHODPR(Scene, SetTimeScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetElapsedTime(float time)", "void SetElapsedTime(float)", AS_METHODPR(Scene, SetElapsedTime, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetElapsedTime(float time)", "void set_elapsedTime(float)", AS_METHODPR(Scene, SetElapsedTime, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetSmoothingConstant(float constant)", "void SetSmoothingConstant(float)", AS_METHODPR(Scene, SetSmoothingConstant, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetSmoothingConstant(float constant)", "void set_smoothingConstant(float)", AS_METHODPR(Scene, SetSmoothingConstant, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetSnapThreshold(float threshold)", "void SetSnapThreshold(float)", AS_METHODPR(Scene, SetSnapThreshold, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetSnapThreshold(float threshold)", "void set_snapThreshold(float)", AS_METHODPR(Scene, SetSnapThreshold, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetAsyncLoadingMs(int ms)", "void SetAsyncLoadingMs(int)", AS_METHODPR(Scene, SetAsyncLoadingMs, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetAsyncLoadingMs(int ms)", "void set_asyncLoadingMs(int)", AS_METHODPR(Scene, SetAsyncLoadingMs, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::AddRequiredPackageFile(PackageFile* package)", "void AddRequiredPackageFile(PackageFile@+)", AS_METHODPR(Scene, AddRequiredPackageFile, (PackageFile*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::ClearRequiredPackageFiles()", "void ClearRequiredPackageFiles()", AS_METHODPR(Scene, ClearRequiredPackageFiles, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::RegisterVar(const String& name)", "void RegisterVar(const String&in)", AS_METHODPR(Scene, RegisterVar, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::UnregisterVar(const String& name)", "void UnregisterVar(const String&in)", AS_METHODPR(Scene, UnregisterVar, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::UnregisterAllVars()", "void UnregisterAllVars()", AS_METHODPR(Scene, UnregisterAllVars, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* Scene::GetNode(unsigned id) const", "Node@+ GetNode(uint) const", AS_METHODPR(Scene, GetNode, (unsigned) const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Component* Scene::GetComponent(unsigned id) const", "Component@+ GetComponent(uint) const", AS_METHODPR(Scene, GetComponent, (unsigned) const, Component*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::IsUpdateEnabled() const", "bool IsUpdateEnabled() const", AS_METHODPR(Scene, IsUpdateEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::IsUpdateEnabled() const", "bool get_updateEnabled() const", AS_METHODPR(Scene, IsUpdateEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::IsAsyncLoading() const", "bool IsAsyncLoading() const", AS_METHODPR(Scene, IsAsyncLoading, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::IsAsyncLoading() const", "bool get_asyncLoading() const", AS_METHODPR(Scene, IsAsyncLoading, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Scene::GetAsyncProgress() const", "float GetAsyncProgress() const", AS_METHODPR(Scene, GetAsyncProgress, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Scene::GetAsyncProgress() const", "float get_asyncProgress() const", AS_METHODPR(Scene, GetAsyncProgress, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("LoadMode Scene::GetAsyncLoadMode() const", "LoadMode GetAsyncLoadMode() const", AS_METHODPR(Scene, GetAsyncLoadMode, () const, LoadMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("LoadMode Scene::GetAsyncLoadMode() const", "LoadMode get_asyncLoadMode() const", AS_METHODPR(Scene, GetAsyncLoadMode, () const, LoadMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Scene::GetFileName() const", "const String& GetFileName() const", AS_METHODPR(Scene, GetFileName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Scene::GetFileName() const", "const String& get_fileName() const", AS_METHODPR(Scene, GetFileName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Scene::GetChecksum() const", "uint GetChecksum() const", AS_METHODPR(Scene, GetChecksum, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Scene::GetChecksum() const", "uint get_checksum() const", AS_METHODPR(Scene, GetChecksum, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Scene::GetTimeScale() const", "float GetTimeScale() const", AS_METHODPR(Scene, GetTimeScale, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Scene::GetTimeScale() const", "float get_timeScale() const", AS_METHODPR(Scene, GetTimeScale, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Scene::GetElapsedTime() const", "float GetElapsedTime() const", AS_METHODPR(Scene, GetElapsedTime, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Scene::GetElapsedTime() const", "float get_elapsedTime() const", AS_METHODPR(Scene, GetElapsedTime, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Scene::GetSmoothingConstant() const", "float GetSmoothingConstant() const", AS_METHODPR(Scene, GetSmoothingConstant, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Scene::GetSmoothingConstant() const", "float get_smoothingConstant() const", AS_METHODPR(Scene, GetSmoothingConstant, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Scene::GetSnapThreshold() const", "float GetSnapThreshold() const", AS_METHODPR(Scene, GetSnapThreshold, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Scene::GetSnapThreshold() const", "float get_snapThreshold() const", AS_METHODPR(Scene, GetSnapThreshold, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Scene::GetAsyncLoadingMs() const", "int GetAsyncLoadingMs() const", AS_METHODPR(Scene, GetAsyncLoadingMs, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Scene::GetAsyncLoadingMs() const", "int get_asyncLoadingMs() const", AS_METHODPR(Scene, GetAsyncLoadingMs, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<PackageFile>>& Scene::GetRequiredPackageFiles() const", "Array<PackageFile@>@ GetRequiredPackageFiles() const", AS_FUNCTION_OBJFIRST(Scene_GetRequiredPackageFiles_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<PackageFile>>& Scene::GetRequiredPackageFiles() const", "Array<PackageFile@>@ get_requiredPackageFiles() const", AS_FUNCTION_OBJFIRST(Scene_GetRequiredPackageFiles_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("const String& Scene::GetVarName(StringHash hash) const", "const String& GetVarName(StringHash) const", AS_METHODPR(Scene, GetVarName, (StringHash) const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::Update(float timeStep)", "void Update(float)", AS_METHODPR(Scene, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::BeginThreadedUpdate()", "void BeginThreadedUpdate()", AS_METHODPR(Scene, BeginThreadedUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::EndThreadedUpdate()", "void EndThreadedUpdate()", AS_METHODPR(Scene, EndThreadedUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::DelayedMarkedDirty(Component* component)", "void DelayedMarkedDirty(Component@+)", AS_METHODPR(Scene, DelayedMarkedDirty, (Component*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Scene::IsThreadedUpdate() const", "bool IsThreadedUpdate() const", AS_METHODPR(Scene, IsThreadedUpdate, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Scene::GetFreeNodeID(CreateMode mode)", "uint GetFreeNodeID(CreateMode)", AS_METHODPR(Scene, GetFreeNodeID, (CreateMode), unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Scene::GetFreeComponentID(CreateMode mode)", "uint GetFreeComponentID(CreateMode)", AS_METHODPR(Scene, GetFreeComponentID, (CreateMode), unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::NodeTagAdded(Node* node, const String& tag)", "void NodeTagAdded(Node@+, const String&in)", AS_METHODPR(Scene, NodeTagAdded, (Node*, const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::NodeTagRemoved(Node* node, const String& tag)", "void NodeTagRemoved(Node@+, const String&in)", AS_METHODPR(Scene, NodeTagRemoved, (Node*, const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::NodeAdded(Node* node)", "void NodeAdded(Node@+)", AS_METHODPR(Scene, NodeAdded, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::NodeRemoved(Node* node)", "void NodeRemoved(Node@+)", AS_METHODPR(Scene, NodeRemoved, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::ComponentAdded(Component* component)", "void ComponentAdded(Component@+)", AS_METHODPR(Scene, ComponentAdded, (Component*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::ComponentRemoved(Component* component)", "void ComponentRemoved(Component@+)", AS_METHODPR(Scene, ComponentRemoved, (Component*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::SetVarNamesAttr(const String& value)", "void SetVarNamesAttr(const String&in)", AS_METHODPR(Scene, SetVarNamesAttr, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Scene::GetVarNamesAttr() const", "String GetVarNamesAttr() const", AS_METHODPR(Scene, GetVarNamesAttr, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::PrepareNetworkUpdate()", "void PrepareNetworkUpdate()", AS_METHODPR(Scene, PrepareNetworkUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::MarkNetworkUpdate(Node* node)", "void MarkNetworkUpdate(Node@+)", AS_METHODPR(Scene, MarkNetworkUpdate, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::MarkNetworkUpdate(Component* component)", "void MarkNetworkUpdate(Component@+)", AS_METHODPR(Scene, MarkNetworkUpdate, (Component*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Scene::MarkReplicationDirty(Node* node)", "void MarkReplicationDirty(Node@+)", AS_METHODPR(Scene, MarkReplicationDirty, (Node*), void), AS_CALL_THISCALL));

    // static void Scene::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    staticMethods.Push(RegisterGlobalFunctionArgs("static bool Scene::IsReplicatedID(unsigned id)", "bool IsReplicatedID(uint)", AS_FUNCTIONPR(Scene::IsReplicatedID, (unsigned), bool), AS_CALL_CDECL));

    #ifdef REGISTER_MANUAL_PART_Scene
        REGISTER_MANUAL_PART_Scene();
    #endif
}

// struct SceneReplicationState | File: ../Scene/ReplicationState.h
void CollectMembers_SceneReplicationState(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_ReplicationState(methods, staticMethods, fields, wrappedFields, staticFields);

    methods.Push(RegisterObjectMethodArgs("void SceneReplicationState::Clear()", "void Clear()", AS_METHODPR(SceneReplicationState, Clear, (), void), AS_CALL_THISCALL));

    // HashMap<unsigned, NodeReplicationState> SceneReplicationState::nodeStates_
    // Error: type "HashMap<unsigned, NodeReplicationState>" can not automatically bind
    // HashSet<unsigned> SceneReplicationState::dirtyNodes_
    // Error: type "HashSet<unsigned>" can not automatically bind

    #ifdef REGISTER_MANUAL_PART_SceneReplicationState
        REGISTER_MANUAL_PART_SceneReplicationState();
    #endif
}

// class SceneResolver | File: ../Scene/SceneResolver.h
void CollectMembers_SceneResolver(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("void SceneResolver::Reset()", "void Reset()", AS_METHODPR(SceneResolver, Reset, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SceneResolver::AddNode(unsigned oldID, Node* node)", "void AddNode(uint, Node@+)", AS_METHODPR(SceneResolver, AddNode, (unsigned, Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SceneResolver::AddComponent(unsigned oldID, Component* component)", "void AddComponent(uint, Component@+)", AS_METHODPR(SceneResolver, AddComponent, (unsigned, Component*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SceneResolver::Resolve()", "void Resolve()", AS_METHODPR(SceneResolver, Resolve, (), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MANUAL_PART_SceneResolver
        REGISTER_MANUAL_PART_SceneResolver();
    #endif
}

// class Serializable | File: ../Scene/Serializable.h
void CollectMembers_Serializable(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Object(methods, staticMethods, fields, wrappedFields, staticFields);

    // virtual const Vector<AttributeInfo>* Serializable::GetAttributes() const
    // Error: type "const Vector<AttributeInfo>*" can not automatically bind
    // virtual const Vector<AttributeInfo>* Serializable::GetNetworkAttributes() const
    // Error: type "const Vector<AttributeInfo>*" can not automatically bind
    // NetworkState* Serializable::GetNetworkState() const
    // Error: type "NetworkState*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("virtual void Serializable::OnSetAttribute(const AttributeInfo& attr, const Variant& src)", "void OnSetAttribute(const AttributeInfo&in, const Variant&in)", AS_METHODPR(Serializable, OnSetAttribute, (const AttributeInfo&, const Variant&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void Serializable::OnGetAttribute(const AttributeInfo& attr, Variant& dest) const", "void OnGetAttribute(const AttributeInfo&in, Variant&) const", AS_METHODPR(Serializable, OnGetAttribute, (const AttributeInfo&, Variant&) const, void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Serializable::Load(Deserializer& source)", "bool Load(Deserializer&)", AS_METHODPR(Serializable, Load, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Serializable::Save(Serializer& dest) const", "bool Save(Serializer&) const", AS_METHODPR(Serializable, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Serializable::LoadXML(const XMLElement& source)", "bool LoadXML(const XMLElement&in)", AS_METHODPR(Serializable, LoadXML, (const XMLElement&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Serializable::SaveXML(XMLElement& dest) const", "bool SaveXML(XMLElement&) const", AS_METHODPR(Serializable, SaveXML, (XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Serializable::LoadJSON(const JSONValue& source)", "bool LoadJSON(const JSONValue&in)", AS_METHODPR(Serializable, LoadJSON, (const JSONValue&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Serializable::SaveJSON(JSONValue& dest) const", "bool SaveJSON(JSONValue&) const", AS_METHODPR(Serializable, SaveJSON, (JSONValue&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void Serializable::ApplyAttributes()", "void ApplyAttributes()", AS_METHODPR(Serializable, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Serializable::SaveDefaultAttributes() const", "bool SaveDefaultAttributes() const", AS_METHODPR(Serializable, SaveDefaultAttributes, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void Serializable::MarkNetworkUpdate()", "void MarkNetworkUpdate()", AS_METHODPR(Serializable, MarkNetworkUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Serializable::SetAttribute(unsigned index, const Variant& value)", "bool SetAttribute(uint, const Variant&in)", AS_METHODPR(Serializable, SetAttribute, (unsigned, const Variant&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Serializable::SetAttribute(unsigned index, const Variant& value)", "bool set_attributes(uint, const Variant&in)", AS_METHODPR(Serializable, SetAttribute, (unsigned, const Variant&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Serializable::SetAttribute(const String& name, const Variant& value)", "bool SetAttribute(const String&in, const Variant&in)", AS_METHODPR(Serializable, SetAttribute, (const String&, const Variant&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Serializable::SetInstanceDefault(bool enable)", "void SetInstanceDefault(bool)", AS_METHODPR(Serializable, SetInstanceDefault, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Serializable::ResetToDefault()", "void ResetToDefault()", AS_METHODPR(Serializable, ResetToDefault, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Serializable::RemoveInstanceDefault()", "void RemoveInstanceDefault()", AS_METHODPR(Serializable, RemoveInstanceDefault, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Serializable::SetTemporary(bool enable)", "void SetTemporary(bool)", AS_METHODPR(Serializable, SetTemporary, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Serializable::SetTemporary(bool enable)", "void set_temporary(bool)", AS_METHODPR(Serializable, SetTemporary, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Serializable::SetInterceptNetworkUpdate(const String& attributeName, bool enable)", "void SetInterceptNetworkUpdate(const String&in, bool)", AS_METHODPR(Serializable, SetInterceptNetworkUpdate, (const String&, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Serializable::AllocateNetworkState()", "void AllocateNetworkState()", AS_METHODPR(Serializable, AllocateNetworkState, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Serializable::WriteInitialDeltaUpdate(Serializer& dest, unsigned char timeStamp)", "void WriteInitialDeltaUpdate(Serializer&, uint8)", AS_METHODPR(Serializable, WriteInitialDeltaUpdate, (Serializer&, unsigned char), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Serializable::WriteDeltaUpdate(Serializer& dest, const DirtyBits& attributeBits, unsigned char timeStamp)", "void WriteDeltaUpdate(Serializer&, const DirtyBits&in, uint8)", AS_METHODPR(Serializable, WriteDeltaUpdate, (Serializer&, const DirtyBits&, unsigned char), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Serializable::WriteLatestDataUpdate(Serializer& dest, unsigned char timeStamp)", "void WriteLatestDataUpdate(Serializer&, uint8)", AS_METHODPR(Serializable, WriteLatestDataUpdate, (Serializer&, unsigned char), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Serializable::ReadDeltaUpdate(Deserializer& source)", "bool ReadDeltaUpdate(Deserializer&)", AS_METHODPR(Serializable, ReadDeltaUpdate, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Serializable::ReadLatestDataUpdate(Deserializer& source)", "bool ReadLatestDataUpdate(Deserializer&)", AS_METHODPR(Serializable, ReadLatestDataUpdate, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Variant Serializable::GetAttribute(unsigned index) const", "Variant GetAttribute(uint) const", AS_METHODPR(Serializable, GetAttribute, (unsigned) const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Variant Serializable::GetAttribute(unsigned index) const", "Variant get_attributes(uint) const", AS_METHODPR(Serializable, GetAttribute, (unsigned) const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Variant Serializable::GetAttribute(const String& name) const", "Variant GetAttribute(const String&in) const", AS_METHODPR(Serializable, GetAttribute, (const String&) const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Variant Serializable::GetAttributeDefault(unsigned index) const", "Variant GetAttributeDefault(uint) const", AS_METHODPR(Serializable, GetAttributeDefault, (unsigned) const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Variant Serializable::GetAttributeDefault(unsigned index) const", "Variant get_attributeDefaults(uint) const", AS_METHODPR(Serializable, GetAttributeDefault, (unsigned) const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Variant Serializable::GetAttributeDefault(const String& name) const", "Variant GetAttributeDefault(const String&in) const", AS_METHODPR(Serializable, GetAttributeDefault, (const String&) const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Serializable::GetNumAttributes() const", "uint GetNumAttributes() const", AS_METHODPR(Serializable, GetNumAttributes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Serializable::GetNumAttributes() const", "uint get_numAttributes() const", AS_METHODPR(Serializable, GetNumAttributes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Serializable::GetNumNetworkAttributes() const", "uint GetNumNetworkAttributes() const", AS_METHODPR(Serializable, GetNumNetworkAttributes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Serializable::IsTemporary() const", "bool IsTemporary() const", AS_METHODPR(Serializable, IsTemporary, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Serializable::IsTemporary() const", "bool get_temporary() const", AS_METHODPR(Serializable, IsTemporary, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Serializable::GetInterceptNetworkUpdate(const String& attributeName) const", "bool GetInterceptNetworkUpdate(const String&in) const", AS_METHODPR(Serializable, GetInterceptNetworkUpdate, (const String&) const, bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MANUAL_PART_Serializable
        REGISTER_MANUAL_PART_Serializable();
    #endif
}

// class SmoothedTransform | File: ../Scene/SmoothedTransform.h
void CollectMembers_SmoothedTransform(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void SmoothedTransform::Update(float constant, float squaredSnapThreshold)", "void Update(float, float)", AS_METHODPR(SmoothedTransform, Update, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SmoothedTransform::SetTargetPosition(const Vector3& position)", "void SetTargetPosition(const Vector3&in)", AS_METHODPR(SmoothedTransform, SetTargetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SmoothedTransform::SetTargetPosition(const Vector3& position)", "void set_targetPosition(const Vector3&in)", AS_METHODPR(SmoothedTransform, SetTargetPosition, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SmoothedTransform::SetTargetRotation(const Quaternion& rotation)", "void SetTargetRotation(const Quaternion&in)", AS_METHODPR(SmoothedTransform, SetTargetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SmoothedTransform::SetTargetRotation(const Quaternion& rotation)", "void set_targetRotation(const Quaternion&in)", AS_METHODPR(SmoothedTransform, SetTargetRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SmoothedTransform::SetTargetWorldPosition(const Vector3& position)", "void SetTargetWorldPosition(const Vector3&in)", AS_METHODPR(SmoothedTransform, SetTargetWorldPosition, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SmoothedTransform::SetTargetWorldPosition(const Vector3& position)", "void set_targetWorldPosition(const Vector3&in)", AS_METHODPR(SmoothedTransform, SetTargetWorldPosition, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SmoothedTransform::SetTargetWorldRotation(const Quaternion& rotation)", "void SetTargetWorldRotation(const Quaternion&in)", AS_METHODPR(SmoothedTransform, SetTargetWorldRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SmoothedTransform::SetTargetWorldRotation(const Quaternion& rotation)", "void set_targetWorldRotation(const Quaternion&in)", AS_METHODPR(SmoothedTransform, SetTargetWorldRotation, (const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& SmoothedTransform::GetTargetPosition() const", "const Vector3& GetTargetPosition() const", AS_METHODPR(SmoothedTransform, GetTargetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector3& SmoothedTransform::GetTargetPosition() const", "const Vector3& get_targetPosition() const", AS_METHODPR(SmoothedTransform, GetTargetPosition, () const, const Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Quaternion& SmoothedTransform::GetTargetRotation() const", "const Quaternion& GetTargetRotation() const", AS_METHODPR(SmoothedTransform, GetTargetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Quaternion& SmoothedTransform::GetTargetRotation() const", "const Quaternion& get_targetRotation() const", AS_METHODPR(SmoothedTransform, GetTargetRotation, () const, const Quaternion&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 SmoothedTransform::GetTargetWorldPosition() const", "Vector3 GetTargetWorldPosition() const", AS_METHODPR(SmoothedTransform, GetTargetWorldPosition, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 SmoothedTransform::GetTargetWorldPosition() const", "Vector3 get_targetWorldPosition() const", AS_METHODPR(SmoothedTransform, GetTargetWorldPosition, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion SmoothedTransform::GetTargetWorldRotation() const", "Quaternion GetTargetWorldRotation() const", AS_METHODPR(SmoothedTransform, GetTargetWorldRotation, () const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion SmoothedTransform::GetTargetWorldRotation() const", "Quaternion get_targetWorldRotation() const", AS_METHODPR(SmoothedTransform, GetTargetWorldRotation, () const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool SmoothedTransform::IsInProgress() const", "bool IsInProgress() const", AS_METHODPR(SmoothedTransform, IsInProgress, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool SmoothedTransform::IsInProgress() const", "bool get_inProgress() const", AS_METHODPR(SmoothedTransform, IsInProgress, () const, bool), AS_CALL_THISCALL));

    // static void SmoothedTransform::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MANUAL_PART_SmoothedTransform
        REGISTER_MANUAL_PART_SmoothedTransform();
    #endif
}

// class SplinePath | File: ../Scene/SplinePath.h
void CollectMembers_SplinePath(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(methods, "virtual void Serializable::ApplyAttributes()");

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    // const VariantVector& SplinePath::GetControlPointIdsAttr() const
    // Error: type "const VariantVector&" can not automatically bind
    // void SplinePath::SetControlPointIdsAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void SplinePath::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(SplinePath, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(SplinePath, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::AddControlPoint(Node* point, unsigned index=M_MAX_UNSIGNED)", "void AddControlPoint(Node@+, uint = M_MAX_UNSIGNED)", AS_METHODPR(SplinePath, AddControlPoint, (Node*, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::RemoveControlPoint(Node* point)", "void RemoveControlPoint(Node@+)", AS_METHODPR(SplinePath, RemoveControlPoint, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::ClearControlPoints()", "void ClearControlPoints()", AS_METHODPR(SplinePath, ClearControlPoints, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::SetInterpolationMode(InterpolationMode interpolationMode)", "void SetInterpolationMode(InterpolationMode)", AS_METHODPR(SplinePath, SetInterpolationMode, (InterpolationMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::SetInterpolationMode(InterpolationMode interpolationMode)", "void set_interpolationMode(InterpolationMode)", AS_METHODPR(SplinePath, SetInterpolationMode, (InterpolationMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::SetSpeed(float speed)", "void SetSpeed(float)", AS_METHODPR(SplinePath, SetSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::SetSpeed(float speed)", "void set_speed(float)", AS_METHODPR(SplinePath, SetSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::SetPosition(float factor)", "void SetPosition(float)", AS_METHODPR(SplinePath, SetPosition, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::SetControlledNode(Node* controlled)", "void SetControlledNode(Node@+)", AS_METHODPR(SplinePath, SetControlledNode, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::SetControlledNode(Node* controlled)", "void set_controlledNode(Node@+)", AS_METHODPR(SplinePath, SetControlledNode, (Node*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("InterpolationMode SplinePath::GetInterpolationMode() const", "InterpolationMode GetInterpolationMode() const", AS_METHODPR(SplinePath, GetInterpolationMode, () const, InterpolationMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("InterpolationMode SplinePath::GetInterpolationMode() const", "InterpolationMode get_interpolationMode() const", AS_METHODPR(SplinePath, GetInterpolationMode, () const, InterpolationMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SplinePath::GetSpeed() const", "float GetSpeed() const", AS_METHODPR(SplinePath, GetSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SplinePath::GetSpeed() const", "float get_speed() const", AS_METHODPR(SplinePath, GetSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SplinePath::GetLength() const", "float GetLength() const", AS_METHODPR(SplinePath, GetLength, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SplinePath::GetLength() const", "float get_length() const", AS_METHODPR(SplinePath, GetLength, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 SplinePath::GetPosition() const", "Vector3 GetPosition() const", AS_METHODPR(SplinePath, GetPosition, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* SplinePath::GetControlledNode() const", "Node@+ GetControlledNode() const", AS_METHODPR(SplinePath, GetControlledNode, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* SplinePath::GetControlledNode() const", "Node@+ get_controlledNode() const", AS_METHODPR(SplinePath, GetControlledNode, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 SplinePath::GetPoint(float factor) const", "Vector3 GetPoint(float) const", AS_METHODPR(SplinePath, GetPoint, (float) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::Move(float timeStep)", "void Move(float)", AS_METHODPR(SplinePath, Move, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::Reset()", "void Reset()", AS_METHODPR(SplinePath, Reset, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool SplinePath::IsFinished() const", "bool IsFinished() const", AS_METHODPR(SplinePath, IsFinished, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool SplinePath::IsFinished() const", "bool get_isFinished() const", AS_METHODPR(SplinePath, IsFinished, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SplinePath::SetControlledIdAttr(unsigned value)", "void SetControlledIdAttr(uint)", AS_METHODPR(SplinePath, SetControlledIdAttr, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned SplinePath::GetControlledIdAttr() const", "uint GetControlledIdAttr() const", AS_METHODPR(SplinePath, GetControlledIdAttr, () const, unsigned), AS_CALL_THISCALL));

    // static void SplinePath::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MANUAL_PART_SplinePath
        REGISTER_MANUAL_PART_SplinePath();
    #endif
}

// const Vector<String>& UnknownComponent::GetXMLAttributes() const
// const Vector<String>& UnknownComponent::GetXMLAttributes() const | File: ../Scene/UnknownComponent.h
static CScriptArray* UnknownComponent_GetXMLAttributes_void(UnknownComponent* ptr)
{
    const Vector<String>& result = ptr->GetXMLAttributes();
    return VectorToArray<String>(result, "Array<String>");
}


// class UnknownComponent | File: ../Scene/UnknownComponent.h
void CollectMembers_UnknownComponent(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "bool Animatable::LoadJSON(const JSONValue& source) override");
    Remove(methods, "bool Animatable::LoadXML(const XMLElement& source) override");
    Remove(methods, "bool Component::Save(Serializer& dest) const override");
    Remove(methods, "bool Component::SaveJSON(JSONValue& dest) const override");
    Remove(methods, "bool Component::SaveXML(XMLElement& dest) const override");
    Remove(methods, "virtual StringHash Object::GetType() const =0");
    Remove(methods, "virtual bool Serializable::Load(Deserializer& source)");
    Remove(methods, "virtual const String& Object::GetTypeName() const =0");
    Remove(methods, "virtual const Vector<AttributeInfo>* Serializable::GetAttributes() const");

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    // const Vector<AttributeInfo>* UnknownComponent::GetAttributes() const override
    // Error: type "const Vector<AttributeInfo>*" can not automatically bind
    // const PODVector<unsigned char>& UnknownComponent::GetBinaryAttributes() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("StringHash UnknownComponent::GetType() const override", "StringHash GetType() const", AS_METHODPR(UnknownComponent, GetType, () const, StringHash), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("StringHash UnknownComponent::GetType() const override", "StringHash get_type() const", AS_METHODPR(UnknownComponent, GetType, () const, StringHash), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& UnknownComponent::GetTypeName() const override", "const String& GetTypeName() const", AS_METHODPR(UnknownComponent, GetTypeName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& UnknownComponent::GetTypeName() const override", "const String& get_typeName() const", AS_METHODPR(UnknownComponent, GetTypeName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UnknownComponent::Load(Deserializer& source) override", "bool Load(Deserializer&)", AS_METHODPR(UnknownComponent, Load, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UnknownComponent::LoadXML(const XMLElement& source) override", "bool LoadXML(const XMLElement&in)", AS_METHODPR(UnknownComponent, LoadXML, (const XMLElement&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UnknownComponent::LoadJSON(const JSONValue& source) override", "bool LoadJSON(const JSONValue&in)", AS_METHODPR(UnknownComponent, LoadJSON, (const JSONValue&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UnknownComponent::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(UnknownComponent, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UnknownComponent::SaveXML(XMLElement& dest) const override", "bool SaveXML(XMLElement&) const", AS_METHODPR(UnknownComponent, SaveXML, (XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UnknownComponent::SaveJSON(JSONValue& dest) const override", "bool SaveJSON(JSONValue&) const", AS_METHODPR(UnknownComponent, SaveJSON, (JSONValue&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UnknownComponent::SetTypeName(const String& typeName)", "void SetTypeName(const String&in)", AS_METHODPR(UnknownComponent, SetTypeName, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UnknownComponent::SetType(StringHash typeHash)", "void SetType(StringHash)", AS_METHODPR(UnknownComponent, SetType, (StringHash), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector<String>& UnknownComponent::GetXMLAttributes() const", "Array<String>@ GetXMLAttributes() const", AS_FUNCTION_OBJFIRST(UnknownComponent_GetXMLAttributes_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool UnknownComponent::GetUseXML() const", "bool GetUseXML() const", AS_METHODPR(UnknownComponent, GetUseXML, () const, bool), AS_CALL_THISCALL));

    // static void UnknownComponent::RegisterObject(Context* context)
    // Not registered because have @nobind mark
    // static Urho3D::StringHash UnknownComponent::GetTypeStatic()
    // Error: type "Urho3D::StringHash" can not automatically bind
    // static const Urho3D::String& UnknownComponent::GetTypeNameStatic()
    // Error: type "const Urho3D::String&" can not automatically bind

    #ifdef REGISTER_MANUAL_PART_UnknownComponent
        REGISTER_MANUAL_PART_UnknownComponent();
    #endif
}

// struct VAnimEventFrame | File: ../Scene/ValueAnimation.h
void CollectMembers_VAnimEventFrame(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    fields.Push(RegisterObjectPropertyArgs("float VAnimEventFrame::time_", "float time", offsetof(VAnimEventFrame, time_)));
    fields.Push(RegisterObjectPropertyArgs("StringHash VAnimEventFrame::eventType_", "StringHash eventType", offsetof(VAnimEventFrame, eventType_)));
    fields.Push(RegisterObjectPropertyArgs("VariantMap VAnimEventFrame::eventData_", "VariantMap eventData", offsetof(VAnimEventFrame, eventData_)));

    #ifdef REGISTER_MANUAL_PART_VAnimEventFrame
        REGISTER_MANUAL_PART_VAnimEventFrame();
    #endif
}

// struct VAnimKeyFrame | File: ../Scene/ValueAnimation.h
void CollectMembers_VAnimKeyFrame(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    fields.Push(RegisterObjectPropertyArgs("float VAnimKeyFrame::time_", "float time", offsetof(VAnimKeyFrame, time_)));
    fields.Push(RegisterObjectPropertyArgs("Variant VAnimKeyFrame::value_", "Variant value", offsetof(VAnimKeyFrame, value_)));

    #ifdef REGISTER_MANUAL_PART_VAnimKeyFrame
        REGISTER_MANUAL_PART_VAnimKeyFrame();
    #endif
}

// class ValueAnimation | File: ../Scene/ValueAnimation.h
void CollectMembers_ValueAnimation(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Resource(methods, staticMethods, fields, wrappedFields, staticFields);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(methods, "virtual bool Resource::Save(Serializer& dest) const");

    // void ValueAnimation::GetEventFrames(float beginTime, float endTime, PODVector<const VAnimEventFrame*>& eventFrames) const
    // Error: type "PODVector<const VAnimEventFrame*>&" can not automatically bind
    // const Vector<VAnimKeyFrame>& ValueAnimation::GetKeyFrames() const
    // Error: type "const Vector<VAnimKeyFrame>&" can not automatically bind
    // void* ValueAnimation::GetOwner() const
    // Error: type "void*" can not automatically bind
    // void ValueAnimation::SetOwner(void* owner)
    // Error: type "void*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool ValueAnimation::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(ValueAnimation, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ValueAnimation::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(ValueAnimation, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ValueAnimation::LoadXML(const XMLElement& source)", "bool LoadXML(const XMLElement&in)", AS_METHODPR(ValueAnimation, LoadXML, (const XMLElement&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ValueAnimation::SaveXML(XMLElement& dest) const", "bool SaveXML(XMLElement&) const", AS_METHODPR(ValueAnimation, SaveXML, (XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ValueAnimation::LoadJSON(const JSONValue& source)", "bool LoadJSON(const JSONValue&in)", AS_METHODPR(ValueAnimation, LoadJSON, (const JSONValue&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ValueAnimation::SaveJSON(JSONValue& dest) const", "bool SaveJSON(JSONValue&) const", AS_METHODPR(ValueAnimation, SaveJSON, (JSONValue&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ValueAnimation::SetInterpolationMethod(InterpMethod method)", "void SetInterpolationMethod(InterpMethod)", AS_METHODPR(ValueAnimation, SetInterpolationMethod, (InterpMethod), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ValueAnimation::SetInterpolationMethod(InterpMethod method)", "void set_interpolationMethod(InterpMethod)", AS_METHODPR(ValueAnimation, SetInterpolationMethod, (InterpMethod), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ValueAnimation::SetSplineTension(float tension)", "void SetSplineTension(float)", AS_METHODPR(ValueAnimation, SetSplineTension, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ValueAnimation::SetSplineTension(float tension)", "void set_splineTension(float)", AS_METHODPR(ValueAnimation, SetSplineTension, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ValueAnimation::SetValueType(VariantType valueType)", "void SetValueType(VariantType)", AS_METHODPR(ValueAnimation, SetValueType, (VariantType), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ValueAnimation::SetValueType(VariantType valueType)", "void set_valueType(VariantType)", AS_METHODPR(ValueAnimation, SetValueType, (VariantType), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ValueAnimation::SetKeyFrame(float time, const Variant& value)", "bool SetKeyFrame(float, const Variant&in)", AS_METHODPR(ValueAnimation, SetKeyFrame, (float, const Variant&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ValueAnimation::SetEventFrame(float time, const StringHash& eventType, const VariantMap& eventData=VariantMap())", "void SetEventFrame(float, const StringHash&in, const VariantMap&in = VariantMap())", AS_METHODPR(ValueAnimation, SetEventFrame, (float, const StringHash&, const VariantMap&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ValueAnimation::IsValid() const", "bool IsValid() const", AS_METHODPR(ValueAnimation, IsValid, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("InterpMethod ValueAnimation::GetInterpolationMethod() const", "InterpMethod GetInterpolationMethod() const", AS_METHODPR(ValueAnimation, GetInterpolationMethod, () const, InterpMethod), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("InterpMethod ValueAnimation::GetInterpolationMethod() const", "InterpMethod get_interpolationMethod() const", AS_METHODPR(ValueAnimation, GetInterpolationMethod, () const, InterpMethod), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ValueAnimation::GetSplineTension() const", "float GetSplineTension() const", AS_METHODPR(ValueAnimation, GetSplineTension, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ValueAnimation::GetSplineTension() const", "float get_splineTension() const", AS_METHODPR(ValueAnimation, GetSplineTension, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("VariantType ValueAnimation::GetValueType() const", "VariantType GetValueType() const", AS_METHODPR(ValueAnimation, GetValueType, () const, VariantType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("VariantType ValueAnimation::GetValueType() const", "VariantType get_valueType() const", AS_METHODPR(ValueAnimation, GetValueType, () const, VariantType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ValueAnimation::GetBeginTime() const", "float GetBeginTime() const", AS_METHODPR(ValueAnimation, GetBeginTime, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ValueAnimation::GetEndTime() const", "float GetEndTime() const", AS_METHODPR(ValueAnimation, GetEndTime, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Variant ValueAnimation::GetAnimationValue(float scaledTime) const", "Variant GetAnimationValue(float) const", AS_METHODPR(ValueAnimation, GetAnimationValue, (float) const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ValueAnimation::HasEventFrames() const", "bool HasEventFrames() const", AS_METHODPR(ValueAnimation, HasEventFrames, () const, bool), AS_CALL_THISCALL));

    // static void ValueAnimation::RegisterObject(Context* context)
    // Not registered because have @nobind mark

    #ifdef REGISTER_MANUAL_PART_ValueAnimation
        REGISTER_MANUAL_PART_ValueAnimation();
    #endif
}

// class ValueAnimationInfo | File: ../Scene/ValueAnimationInfo.h
void CollectMembers_ValueAnimationInfo(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_RefCounted(methods, staticMethods, fields, wrappedFields, staticFields);

    methods.Push(RegisterObjectMethodArgs("bool ValueAnimationInfo::Update(float timeStep)", "bool Update(float)", AS_METHODPR(ValueAnimationInfo, Update, (float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ValueAnimationInfo::SetTime(float time)", "bool SetTime(float)", AS_METHODPR(ValueAnimationInfo, SetTime, (float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ValueAnimationInfo::SetWrapMode(WrapMode wrapMode)", "void SetWrapMode(WrapMode)", AS_METHODPR(ValueAnimationInfo, SetWrapMode, (WrapMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ValueAnimationInfo::SetSpeed(float speed)", "void SetSpeed(float)", AS_METHODPR(ValueAnimationInfo, SetSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Object* ValueAnimationInfo::GetTarget() const", "Object@+ GetTarget() const", AS_METHODPR(ValueAnimationInfo, GetTarget, () const, Object*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ValueAnimation* ValueAnimationInfo::GetAnimation() const", "ValueAnimation@+ GetAnimation() const", AS_METHODPR(ValueAnimationInfo, GetAnimation, () const, ValueAnimation*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("WrapMode ValueAnimationInfo::GetWrapMode() const", "WrapMode GetWrapMode() const", AS_METHODPR(ValueAnimationInfo, GetWrapMode, () const, WrapMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ValueAnimationInfo::GetTime() const", "float GetTime() const", AS_METHODPR(ValueAnimationInfo, GetTime, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ValueAnimationInfo::GetSpeed() const", "float GetSpeed() const", AS_METHODPR(ValueAnimationInfo, GetSpeed, () const, float), AS_CALL_THISCALL));

    #ifdef REGISTER_MANUAL_PART_ValueAnimationInfo
        REGISTER_MANUAL_PART_ValueAnimationInfo();
    #endif
}

} // namespace Urho3D
