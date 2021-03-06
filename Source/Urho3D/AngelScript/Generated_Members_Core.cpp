// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// class AttributeAccessor | File: ../Core/Attribute.h
void CollectMembers_AttributeAccessor(MemberCollection& members)
{
    CollectMembers_RefCounted(members);

    members.methods_.Push(RegisterObjectMethodArgs("virtual void AttributeAccessor::Get(const Serializable* ptr, Variant& dest) const = 0", "void Get(Serializable@+, Variant&) const", AS_METHODPR(AttributeAccessor, Get, (const Serializable*, Variant&) const, void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void AttributeAccessor::Set(Serializable* ptr, const Variant& src) = 0", "void Set(Serializable@+, const Variant&in)", AS_METHODPR(AttributeAccessor, Set, (Serializable*, const Variant&), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AttributeAccessor
        REGISTER_MEMBERS_MANUAL_PART_AttributeAccessor();
    #endif
}

// struct AttributeHandle | File: ../Core/Attribute.h
void CollectMembers_AttributeHandle(MemberCollection& members)
{
    // AttributeHandle& AttributeHandle::SetMetadata(StringHash key, const Variant& value)
    // Error: type "AttributeHandle" can not automatically bind bacause have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AttributeHandle
        REGISTER_MEMBERS_MANUAL_PART_AttributeHandle();
    #endif
}

// struct AttributeInfo | File: ../Core/Attribute.h
void CollectMembers_AttributeInfo(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("const Variant& AttributeInfo::GetMetadata(const StringHash& key) const", "const Variant& GetMetadata(const StringHash&in) const", AS_METHODPR(AttributeInfo, GetMetadata, (const StringHash&) const, const Variant&), AS_CALL_THISCALL));

    // template <class T> T AttributeInfo::GetMetadata(const StringHash& key) const
    // Not registered because template

    // const char** AttributeInfo::enumNames_
    // Error: type "const char**" can not automatically bind
    // SharedPtr<AttributeAccessor> AttributeInfo::accessor_
    // Error: type "SharedPtr<AttributeAccessor>" can not automatically bind
    // void* AttributeInfo::ptr_
    // Not registered because pointer

    members.fields_.Push(RegisterObjectPropertyArgs("VariantType AttributeInfo::type_", "VariantType type", offsetof(AttributeInfo, type_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String AttributeInfo::name_", "String name", offsetof(AttributeInfo, name_)));
    members.fields_.Push(RegisterObjectPropertyArgs("Variant AttributeInfo::defaultValue_", "Variant defaultValue", offsetof(AttributeInfo, defaultValue_)));
    members.fields_.Push(RegisterObjectPropertyArgs("AttributeModeFlags AttributeInfo::mode_", "AttributeModeFlags mode", offsetof(AttributeInfo, mode_)));
    members.fields_.Push(RegisterObjectPropertyArgs("VariantMap AttributeInfo::metadata_", "VariantMap metadata", offsetof(AttributeInfo, metadata_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AttributeInfo
        REGISTER_MEMBERS_MANUAL_PART_AttributeInfo();
    #endif
}

// class AutoProfileBlock | File: ../Core/Profiler.h
void CollectMembers_AutoProfileBlock(MemberCollection& members)
{
    #ifdef REGISTER_MEMBERS_MANUAL_PART_AutoProfileBlock
        REGISTER_MEMBERS_MANUAL_PART_AutoProfileBlock();
    #endif
}

// class Condition | File: ../Core/Condition.h
void CollectMembers_Condition(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("void Condition::Set()", "void Set()", AS_METHODPR(Condition, Set, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Condition::Wait()", "void Wait()", AS_METHODPR(Condition, Wait, (), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Condition
        REGISTER_MEMBERS_MANUAL_PART_Condition();
    #endif
}

// SharedPtr<Object> Context::CreateObject(StringHash objectType)
// SharedPtr<Object> Context::CreateObject(StringHash objectType) | File: ../Core/Context.h
static Object* Context_CreateObject_StringHash(Context* ptr, StringHash objectType)
{
    SharedPtr<Object> result = ptr->CreateObject(objectType);
    return result.Detach();
}


// class Context | File: ../Core/Context.h
void CollectMembers_Context(MemberCollection& members)
{
    CollectMembers_RefCounted(members);

    // const HashMap<StringHash, Vector<AttributeInfo>>& Context::GetAllAttributes() const
    // Error: type "const HashMap<StringHash, Vector<AttributeInfo>>&" can not automatically bind
    // AttributeInfo* Context::GetAttribute(StringHash objectType, const char* name)
    // Error: type "const char*" can not automatically bind
    // const Vector<AttributeInfo>* Context::GetAttributes(StringHash type) const
    // Error: type "const Vector<AttributeInfo>*" can not automatically bind
    // EventHandler* Context::GetEventHandler() const
    // Error: type "EventHandler*" can not automatically bind
    // const Vector<AttributeInfo>* Context::GetNetworkAttributes(StringHash type) const
    // Error: type "const Vector<AttributeInfo>*" can not automatically bind
    // const HashMap<String, Vector<StringHash>>& Context::GetObjectCategories() const
    // Error: type "const HashMap<String, Vector<StringHash>>&" can not automatically bind
    // const HashMap<StringHash, SharedPtr<ObjectFactory>>& Context::GetObjectFactories() const
    // Error: type "const HashMap<StringHash, SharedPtr<ObjectFactory>>&" can not automatically bind
    // const HashMap<StringHash, SharedPtr<Object>>& Context::GetSubsystems() const
    // Error: type "const HashMap<StringHash, SharedPtr<Object>>&" can not automatically bind
    // AttributeHandle Context::RegisterAttribute(StringHash objectType, const AttributeInfo& attr)
    // Error: type "AttributeHandle" can not automatically bind bacause have @nobind mark
    // void Context::RegisterFactory(ObjectFactory* factory, const char* category)
    // Error: type "const char*" can not automatically bind
    // void Context::RemoveAttribute(StringHash objectType, const char* name)
    // Error: type "const char*" can not automatically bind
    // void Context::UpdateAttributeDefaultValue(StringHash objectType, const char* name, const Variant& defaultValue)
    // Error: type "const char*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<Object> Context::CreateObject(StringHash objectType)", "Object@+ CreateObject(StringHash)", AS_FUNCTION_OBJFIRST(Context_CreateObject_StringHash), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("void Context::RegisterFactory(ObjectFactory* factory)", "void RegisterFactory(ObjectFactory@+)", AS_METHODPR(Context, RegisterFactory, (ObjectFactory*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Context::RegisterSubsystem(Object* object)", "void RegisterSubsystem(Object@+)", AS_METHODPR(Context, RegisterSubsystem, (Object*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Context::RemoveSubsystem(StringHash objectType)", "void RemoveSubsystem(StringHash)", AS_METHODPR(Context, RemoveSubsystem, (StringHash), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Context::RemoveAllAttributes(StringHash objectType)", "void RemoveAllAttributes(StringHash)", AS_METHODPR(Context, RemoveAllAttributes, (StringHash), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VariantMap& Context::GetEventDataMap()", "VariantMap& GetEventDataMap()", AS_METHODPR(Context, GetEventDataMap, (), VariantMap&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Context::RequireSDL(unsigned int sdlFlags)", "bool RequireSDL(uint)", AS_METHODPR(Context, RequireSDL, (unsigned int), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Context::ReleaseSDL()", "void ReleaseSDL()", AS_METHODPR(Context, ReleaseSDL, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Context::CopyBaseAttributes(StringHash baseType, StringHash derivedType)", "void CopyBaseAttributes(StringHash, StringHash)", AS_METHODPR(Context, CopyBaseAttributes, (StringHash, StringHash), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Object* Context::GetSubsystem(StringHash type) const", "Object@+ GetSubsystem(StringHash) const", AS_METHODPR(Context, GetSubsystem, (StringHash) const, Object*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Variant& Context::GetGlobalVar(StringHash key) const", "const Variant& GetGlobalVar(StringHash) const", AS_METHODPR(Context, GetGlobalVar, (StringHash) const, const Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const VariantMap& Context::GetGlobalVars() const", "const VariantMap& GetGlobalVars() const", AS_METHODPR(Context, GetGlobalVars, () const, const VariantMap&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Context::SetGlobalVar(StringHash key, const Variant& value)", "void SetGlobalVar(StringHash, const Variant&in)", AS_METHODPR(Context, SetGlobalVar, (StringHash, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Object* Context::GetEventSender() const", "Object@+ GetEventSender() const", AS_METHODPR(Context, GetEventSender, () const, Object*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Context::GetTypeName(StringHash objectType) const", "const String& GetTypeName(StringHash) const", AS_METHODPR(Context, GetTypeName, (StringHash) const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("EventReceiverGroup* Context::GetEventReceivers(Object* sender, StringHash eventType)", "EventReceiverGroup@+ GetEventReceivers(Object@+, StringHash)", AS_METHODPR(Context, GetEventReceivers, (Object*, StringHash), EventReceiverGroup*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("EventReceiverGroup* Context::GetEventReceivers(StringHash eventType)", "EventReceiverGroup@+ GetEventReceivers(StringHash)", AS_METHODPR(Context, GetEventReceivers, (StringHash), EventReceiverGroup*), AS_CALL_THISCALL));

    // template <class T> SharedPtr<T> Context::CreateObject()
    // Not registered because template
    // template <class T> void Context::RegisterFactory()
    // Not registered because template
    // template <class T> void Context::RegisterFactory(const char* category)
    // Not registered because template
    // template <class T> T* Context::RegisterSubsystem()
    // Not registered because template
    // template <class T> void Context::RemoveSubsystem()
    // Not registered because template
    // template <class T> AttributeHandle Context::RegisterAttribute(const AttributeInfo& attr)
    // Not registered because template
    // template <class T> void Context::RemoveAttribute(const char* name)
    // Not registered because template
    // template <class T> void Context::RemoveAllAttributes()
    // Not registered because template
    // template <class T, class U> void Context::CopyBaseAttributes()
    // Not registered because template
    // template <class T> void Context::UpdateAttributeDefaultValue(const char* name, const Variant& defaultValue)
    // Not registered because template
    // template <class T> T* Context::GetSubsystem() const
    // Not registered because template
    // template <class T> AttributeInfo* Context::GetAttribute(const char* name)
    // Not registered because template

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Context
        REGISTER_MEMBERS_MANUAL_PART_Context();
    #endif
}

// class CustomVariantValue | File: ../Core/Variant.h
void CollectMembers_CustomVariantValue(MemberCollection& members)
{
    // virtual bool CustomVariantValue::Assign(const CustomVariantValue& rhs)
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark
    // virtual CustomVariantValue* CustomVariantValue::Clone() const
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark
    // virtual void CustomVariantValue::Clone(void* dest) const
    // Error: type "void*" can not automatically bind
    // virtual bool CustomVariantValue::Compare(const CustomVariantValue& rhs) const
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark
    // const std::type_info& CustomVariantValue::GetTypeInfo() const
    // Error: type "const std::type_info&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("virtual unsigned CustomVariantValue::GetSize() const", "uint GetSize() const", AS_METHODPR(CustomVariantValue, GetSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual bool CustomVariantValue::IsZero() const", "bool IsZero() const", AS_METHODPR(CustomVariantValue, IsZero, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual String CustomVariantValue::ToString() const", "String ToString() const", AS_METHODPR(CustomVariantValue, ToString, () const, String), AS_CALL_THISCALL));

    // template <class T> bool CustomVariantValue::IsType() const
    // Not registered because template
    // template <class T> T* CustomVariantValue::GetValuePtr()
    // Not registered because template
    // template <class T> const T* CustomVariantValue::GetValuePtr() const
    // Not registered because template

    #ifdef REGISTER_MEMBERS_MANUAL_PART_CustomVariantValue
        REGISTER_MEMBERS_MANUAL_PART_CustomVariantValue();
    #endif
}

// class EventHandler | File: ../Core/Object.h
void CollectMembers_EventHandler(MemberCollection& members)
{
    // virtual EventHandler* EventHandler::Clone() const = 0
    // Error: type "EventHandler*" can not automatically bind
    // void* EventHandler::GetUserData() const
    // Error: type "void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void EventHandler::SetSenderAndEventType(Object* sender, StringHash eventType)", "void SetSenderAndEventType(Object@+, StringHash)", AS_METHODPR(EventHandler, SetSenderAndEventType, (Object*, StringHash), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void EventHandler::Invoke(VariantMap& eventData) = 0", "void Invoke(VariantMap&)", AS_METHODPR(EventHandler, Invoke, (VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Object* EventHandler::GetReceiver() const", "Object@+ GetReceiver() const", AS_METHODPR(EventHandler, GetReceiver, () const, Object*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Object* EventHandler::GetSender() const", "Object@+ GetSender() const", AS_METHODPR(EventHandler, GetSender, () const, Object*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const StringHash& EventHandler::GetEventType() const", "const StringHash& GetEventType() const", AS_METHODPR(EventHandler, GetEventType, () const, const StringHash&), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_EventHandler
        REGISTER_MEMBERS_MANUAL_PART_EventHandler();
    #endif
}

// class EventHandler11Impl | File: ../Core/Object.h
void CollectMembers_EventHandler11Impl(MemberCollection& members)
{
    // EventHandler* EventHandler11Impl::Clone() const override
    // Error: type "EventHandler*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void EventHandler11Impl::Invoke(VariantMap& eventData) override", "void Invoke(VariantMap&)", AS_METHODPR(EventHandler11Impl, Invoke, (VariantMap&), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_EventHandler11Impl
        REGISTER_MEMBERS_MANUAL_PART_EventHandler11Impl();
    #endif
}

// class EventProfiler | File: ../Core/EventProfiler.h
void CollectMembers_EventProfiler(MemberCollection& members)
{
    CollectMembers_Profiler(members);

    Remove(members.methods_, "void Profiler::BeginBlock(const char* name)");

    members.methods_.Push(RegisterObjectMethodArgs("void EventProfiler::BeginBlock(StringHash eventID)", "void BeginBlock(StringHash)", AS_METHODPR(EventProfiler, BeginBlock, (StringHash), void), AS_CALL_THISCALL));

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static void EventProfiler::SetActive(bool newActive)", "void SetActive(bool)", AS_FUNCTIONPR(EventProfiler::SetActive, (bool), void), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static bool EventProfiler::IsActive()", "bool IsActive()", AS_FUNCTIONPR(EventProfiler::IsActive, (), bool), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_EventProfiler
        REGISTER_MEMBERS_MANUAL_PART_EventProfiler();
    #endif
}

// class EventProfilerBlock | File: ../Core/EventProfiler.h
void CollectMembers_EventProfilerBlock(MemberCollection& members)
{
    // EventProfilerBlock* EventProfilerBlock::GetChild(StringHash eventID)
    // Error: type "EventProfilerBlock" can not automatically bind bacause have @nobind mark

    members.fields_.Push(RegisterObjectPropertyArgs("StringHash EventProfilerBlock::eventID_", "StringHash eventID", offsetof(EventProfilerBlock, eventID_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_EventProfilerBlock
        REGISTER_MEMBERS_MANUAL_PART_EventProfilerBlock();
    #endif
}

// class EventReceiverGroup | File: ../Core/Context.h
void CollectMembers_EventReceiverGroup(MemberCollection& members)
{
    CollectMembers_RefCounted(members);

    members.methods_.Push(RegisterObjectMethodArgs("void EventReceiverGroup::BeginSendEvent()", "void BeginSendEvent()", AS_METHODPR(EventReceiverGroup, BeginSendEvent, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void EventReceiverGroup::EndSendEvent()", "void EndSendEvent()", AS_METHODPR(EventReceiverGroup, EndSendEvent, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void EventReceiverGroup::Add(Object* object)", "void Add(Object@+)", AS_METHODPR(EventReceiverGroup, Add, (Object*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void EventReceiverGroup::Remove(Object* object)", "void Remove(Object@+)", AS_METHODPR(EventReceiverGroup, Remove, (Object*), void), AS_CALL_THISCALL));

    // PODVector<Object*> EventReceiverGroup::receivers_
    // Error: type "PODVector<Object*>" can not automatically bind

    #ifdef REGISTER_MEMBERS_MANUAL_PART_EventReceiverGroup
        REGISTER_MEMBERS_MANUAL_PART_EventReceiverGroup();
    #endif
}

// class HiresTimer | File: ../Core/Timer.h
void CollectMembers_HiresTimer(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("long long HiresTimer::GetUSec(bool reset)", "int64 GetUSec(bool)", AS_METHODPR(HiresTimer, GetUSec, (bool), long long), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void HiresTimer::Reset()", "void Reset()", AS_METHODPR(HiresTimer, Reset, (), void), AS_CALL_THISCALL));

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static bool HiresTimer::IsSupported()", "bool IsSupported()", AS_FUNCTIONPR(HiresTimer::IsSupported, (), bool), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static long long HiresTimer::GetFrequency()", "int64 GetFrequency()", AS_FUNCTIONPR(HiresTimer::GetFrequency, (), long long), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_HiresTimer
        REGISTER_MEMBERS_MANUAL_PART_HiresTimer();
    #endif
}

// class Mutex | File: ../Core/Mutex.h
void CollectMembers_Mutex(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("void Mutex::Acquire()", "void Acquire()", AS_METHODPR(Mutex, Acquire, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Mutex::TryAcquire()", "bool TryAcquire()", AS_METHODPR(Mutex, TryAcquire, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Mutex::Release()", "void Release()", AS_METHODPR(Mutex, Release, (), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Mutex
        REGISTER_MEMBERS_MANUAL_PART_Mutex();
    #endif
}

// class MutexLock | File: ../Core/Mutex.h
void CollectMembers_MutexLock(MemberCollection& members)
{
    // MutexLock& MutexLock::operator =(const MutexLock& rhs) = delete
    // Not registered because deleted

    #ifdef REGISTER_MEMBERS_MANUAL_PART_MutexLock
        REGISTER_MEMBERS_MANUAL_PART_MutexLock();
    #endif
}

// void Object::UnsubscribeFromAllEventsExcept(const PODVector<StringHash>& exceptions, bool onlyUserData)
// void Object::UnsubscribeFromAllEventsExcept(const PODVector<StringHash>& exceptions, bool onlyUserData) | File: ../Core/Object.h
static void Object_UnsubscribeFromAllEventsExcept_PODVectorStringHash_bool(Object* ptr, CScriptArray* exceptions_conv, bool onlyUserData)
{
    PODVector<StringHash> exceptions = ArrayToPODVector<StringHash>(exceptions_conv);
    ptr->UnsubscribeFromAllEventsExcept(exceptions, onlyUserData);
}


// class Object | File: ../Core/Object.h
void CollectMembers_Object(MemberCollection& members)
{
    CollectMembers_RefCounted(members);

    // Context* Object::GetContext() const
    // Error: type "Context*" can used only as function parameter
    // EventHandler* Object::GetEventHandler() const
    // Error: type "EventHandler*" can not automatically bind
    // virtual const TypeInfo* Object::GetTypeInfo() const = 0
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // bool Object::IsInstanceOf(const TypeInfo* typeInfo) const
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // void Object::SubscribeToEvent(Object* sender, StringHash eventType, EventHandler* handler)
    // Error: type "EventHandler*" can not automatically bind
    // void Object::SubscribeToEvent(Object* sender, StringHash eventType, const std::function<void(StringHash, VariantMap&)>& function, void* userData = nullptr)
    // Error: type "const std::function<void(StringHash, VariantMap&)>&" can not automatically bind
    // void Object::SubscribeToEvent(StringHash eventType, EventHandler* handler)
    // Error: type "EventHandler*" can not automatically bind
    // void Object::SubscribeToEvent(StringHash eventType, const std::function<void(StringHash, VariantMap&)>& function, void* userData = nullptr)
    // Error: type "const std::function<void(StringHash, VariantMap&)>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("virtual StringHash Object::GetType() const = 0", "StringHash GetType() const", AS_METHODPR(Object, GetType, () const, StringHash), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual StringHash Object::GetType() const = 0", "StringHash get_type() const", AS_METHODPR(Object, GetType, () const, StringHash), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual const String& Object::GetTypeName() const = 0", "const String& GetTypeName() const", AS_METHODPR(Object, GetTypeName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual const String& Object::GetTypeName() const = 0", "const String& get_typeName() const", AS_METHODPR(Object, GetTypeName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void Object::OnEvent(Object* sender, StringHash eventType, VariantMap& eventData)", "void OnEvent(Object@+, StringHash, VariantMap&)", AS_METHODPR(Object, OnEvent, (Object*, StringHash, VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Object::IsInstanceOf(StringHash type) const", "bool IsInstanceOf(StringHash) const", AS_METHODPR(Object, IsInstanceOf, (StringHash) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Object::UnsubscribeFromEvent(StringHash eventType)", "void UnsubscribeFromEvent(StringHash)", AS_METHODPR(Object, UnsubscribeFromEvent, (StringHash), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Object::UnsubscribeFromEvent(Object* sender, StringHash eventType)", "void UnsubscribeFromEvent(Object@+, StringHash)", AS_METHODPR(Object, UnsubscribeFromEvent, (Object*, StringHash), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Object::UnsubscribeFromEvents(Object* sender)", "void UnsubscribeFromEvents(Object@+)", AS_METHODPR(Object, UnsubscribeFromEvents, (Object*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Object::UnsubscribeFromAllEvents()", "void UnsubscribeFromAllEvents()", AS_METHODPR(Object, UnsubscribeFromAllEvents, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Object::UnsubscribeFromAllEventsExcept(const PODVector<StringHash>& exceptions, bool onlyUserData)", "void UnsubscribeFromAllEventsExcept(Array<StringHash>@+, bool)", AS_FUNCTION_OBJFIRST(Object_UnsubscribeFromAllEventsExcept_PODVectorStringHash_bool), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("void Object::SendEvent(StringHash eventType)", "void SendEvent(StringHash)", AS_METHODPR(Object, SendEvent, (StringHash), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Object::SendEvent(StringHash eventType, VariantMap& eventData)", "void SendEvent(StringHash, VariantMap&)", AS_METHODPR(Object, SendEvent, (StringHash, VariantMap&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VariantMap& Object::GetEventDataMap() const", "VariantMap& GetEventDataMap() const", AS_METHODPR(Object, GetEventDataMap, () const, VariantMap&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Variant& Object::GetGlobalVar(StringHash key) const", "const Variant& GetGlobalVar(StringHash) const", AS_METHODPR(Object, GetGlobalVar, (StringHash) const, const Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Variant& Object::GetGlobalVar(StringHash key) const", "const Variant& get_globalVar(StringHash) const", AS_METHODPR(Object, GetGlobalVar, (StringHash) const, const Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const VariantMap& Object::GetGlobalVars() const", "const VariantMap& GetGlobalVars() const", AS_METHODPR(Object, GetGlobalVars, () const, const VariantMap&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const VariantMap& Object::GetGlobalVars() const", "const VariantMap& get_globalVars() const", AS_METHODPR(Object, GetGlobalVars, () const, const VariantMap&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Object::SetGlobalVar(StringHash key, const Variant& value)", "void SetGlobalVar(StringHash, const Variant&in)", AS_METHODPR(Object, SetGlobalVar, (StringHash, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Object::SetGlobalVar(StringHash key, const Variant& value)", "void set_globalVar(StringHash, const Variant&in)", AS_METHODPR(Object, SetGlobalVar, (StringHash, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Object* Object::GetSubsystem(StringHash type) const", "Object@+ GetSubsystem(StringHash) const", AS_METHODPR(Object, GetSubsystem, (StringHash) const, Object*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Object* Object::GetEventSender() const", "Object@+ GetEventSender() const", AS_METHODPR(Object, GetEventSender, () const, Object*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Object::HasSubscribedToEvent(StringHash eventType) const", "bool HasSubscribedToEvent(StringHash) const", AS_METHODPR(Object, HasSubscribedToEvent, (StringHash) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Object::HasSubscribedToEvent(Object* sender, StringHash eventType) const", "bool HasSubscribedToEvent(Object@+, StringHash) const", AS_METHODPR(Object, HasSubscribedToEvent, (Object*, StringHash) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Object::HasEventHandlers() const", "bool HasEventHandlers() const", AS_METHODPR(Object, HasEventHandlers, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Object::GetCategory() const", "const String& GetCategory() const", AS_METHODPR(Object, GetCategory, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Object::GetCategory() const", "const String& get_category() const", AS_METHODPR(Object, GetCategory, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Object::SetBlockEvents(bool block)", "void SetBlockEvents(bool)", AS_METHODPR(Object, SetBlockEvents, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Object::GetBlockEvents() const", "bool GetBlockEvents() const", AS_METHODPR(Object, GetBlockEvents, () const, bool), AS_CALL_THISCALL));

    // template <typename T> bool Object::IsInstanceOf() const
    // Not registered because template
    // template <typename T> T* Object::Cast()
    // Not registered because template
    // template <typename T> const T* Object::Cast() const
    // Not registered because template
    // template <typename... Args> void Object::SendEvent(StringHash eventType, Args... args)
    // Not registered because template
    // template <class T> T* Object::GetSubsystem() const
    // Not registered because template
    // static const TypeInfo* Object::GetTypeInfoStatic()
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Object
        REGISTER_MEMBERS_MANUAL_PART_Object();
    #endif
}

// virtual SharedPtr<Object> ObjectFactory::CreateObject() = 0
// virtual SharedPtr<Object> ObjectFactory::CreateObject() = 0 | File: ../Core/Object.h
static Object* ObjectFactory_CreateObject_void(ObjectFactory* ptr)
{
    SharedPtr<Object> result = ptr->CreateObject();
    return result.Detach();
}


// class ObjectFactory | File: ../Core/Object.h
void CollectMembers_ObjectFactory(MemberCollection& members)
{
    CollectMembers_RefCounted(members);

    // Context* ObjectFactory::GetContext() const
    // Error: type "Context*" can used only as function parameter
    // const TypeInfo* ObjectFactory::GetTypeInfo() const
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("virtual SharedPtr<Object> ObjectFactory::CreateObject() = 0", "Object@+ CreateObject()", AS_FUNCTION_OBJFIRST(ObjectFactory_CreateObject_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("StringHash ObjectFactory::GetType() const", "StringHash GetType() const", AS_METHODPR(ObjectFactory, GetType, () const, StringHash), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& ObjectFactory::GetTypeName() const", "const String& GetTypeName() const", AS_METHODPR(ObjectFactory, GetTypeName, () const, const String&), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ObjectFactory
        REGISTER_MEMBERS_MANUAL_PART_ObjectFactory();
    #endif
}

// class Profiler | File: ../Core/Profiler.h
void CollectMembers_Profiler(MemberCollection& members)
{
    CollectMembers_Object(members);

    // void Profiler::BeginBlock(const char* name)
    // Error: type "const char*" can not automatically bind
    // const ProfilerBlock* Profiler::GetCurrentBlock()
    // Error: type "ProfilerBlock" can not automatically bind bacause have @nobind mark
    // const ProfilerBlock* Profiler::GetRootBlock()
    // Error: type "ProfilerBlock" can not automatically bind bacause have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("void Profiler::EndBlock()", "void EndBlock()", AS_METHODPR(Profiler, EndBlock, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Profiler::BeginFrame()", "void BeginFrame()", AS_METHODPR(Profiler, BeginFrame, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Profiler::EndFrame()", "void EndFrame()", AS_METHODPR(Profiler, EndFrame, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Profiler::BeginInterval()", "void BeginInterval()", AS_METHODPR(Profiler, BeginInterval, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Profiler::PrintData(bool showUnused = false, bool showTotal = false, unsigned maxDepth = M_MAX_UNSIGNED) const", "const String& PrintData(bool = false, bool = false, uint = M_MAX_UNSIGNED) const", AS_METHODPR(Profiler, PrintData, (bool, bool, unsigned) const, const String&), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Profiler
        REGISTER_MEMBERS_MANUAL_PART_Profiler();
    #endif
}

// class ProfilerBlock | File: ../Core/Profiler.h
void CollectMembers_ProfilerBlock(MemberCollection& members)
{
    // ProfilerBlock* ProfilerBlock::GetChild(const char* name)
    // Error: type "const char*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void ProfilerBlock::Begin()", "void Begin()", AS_METHODPR(ProfilerBlock, Begin, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ProfilerBlock::End()", "void End()", AS_METHODPR(ProfilerBlock, End, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ProfilerBlock::EndFrame()", "void EndFrame()", AS_METHODPR(ProfilerBlock, EndFrame, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void ProfilerBlock::BeginInterval()", "void BeginInterval()", AS_METHODPR(ProfilerBlock, BeginInterval, (), void), AS_CALL_THISCALL));

    // char* ProfilerBlock::name_
    // Not registered because pointer
    // ProfilerBlock* ProfilerBlock::parent_
    // Not registered because pointer
    // PODVector<ProfilerBlock*> ProfilerBlock::children_
    // Error: type "PODVector<ProfilerBlock*>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("HiresTimer ProfilerBlock::timer_", "HiresTimer timer", offsetof(ProfilerBlock, timer_)));
    members.fields_.Push(RegisterObjectPropertyArgs("long long ProfilerBlock::time_", "int64 time", offsetof(ProfilerBlock, time_)));
    members.fields_.Push(RegisterObjectPropertyArgs("long long ProfilerBlock::maxTime_", "int64 maxTime", offsetof(ProfilerBlock, maxTime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ProfilerBlock::count_", "uint count", offsetof(ProfilerBlock, count_)));
    members.fields_.Push(RegisterObjectPropertyArgs("long long ProfilerBlock::frameTime_", "int64 frameTime", offsetof(ProfilerBlock, frameTime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("long long ProfilerBlock::frameMaxTime_", "int64 frameMaxTime", offsetof(ProfilerBlock, frameMaxTime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ProfilerBlock::frameCount_", "uint frameCount", offsetof(ProfilerBlock, frameCount_)));
    members.fields_.Push(RegisterObjectPropertyArgs("long long ProfilerBlock::intervalTime_", "int64 intervalTime", offsetof(ProfilerBlock, intervalTime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("long long ProfilerBlock::intervalMaxTime_", "int64 intervalMaxTime", offsetof(ProfilerBlock, intervalMaxTime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ProfilerBlock::intervalCount_", "uint intervalCount", offsetof(ProfilerBlock, intervalCount_)));
    members.fields_.Push(RegisterObjectPropertyArgs("long long ProfilerBlock::totalTime_", "int64 totalTime", offsetof(ProfilerBlock, totalTime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("long long ProfilerBlock::totalMaxTime_", "int64 totalMaxTime", offsetof(ProfilerBlock, totalMaxTime_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned ProfilerBlock::totalCount_", "uint totalCount", offsetof(ProfilerBlock, totalCount_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ProfilerBlock
        REGISTER_MEMBERS_MANUAL_PART_ProfilerBlock();
    #endif
}

// struct ResourceRef | File: ../Core/Variant.h
void CollectMembers_ResourceRef(MemberCollection& members)
{
    // bool ResourceRef::operator !=(const ResourceRef& rhs) const
    // Only operator == is needed

    members.methods_.Push(RegisterObjectMethodArgs("bool ResourceRef::operator ==(const ResourceRef& rhs) const", "bool opEquals(const ResourceRef&in) const", AS_METHODPR(ResourceRef, operator==, (const ResourceRef&) const, bool), AS_CALL_THISCALL));

    members.fields_.Push(RegisterObjectPropertyArgs("StringHash ResourceRef::type_", "StringHash type", offsetof(ResourceRef, type_)));
    members.fields_.Push(RegisterObjectPropertyArgs("String ResourceRef::name_", "String name", offsetof(ResourceRef, name_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ResourceRef
        REGISTER_MEMBERS_MANUAL_PART_ResourceRef();
    #endif
}

// struct ResourceRefList | File: ../Core/Variant.h
void CollectMembers_ResourceRefList(MemberCollection& members)
{
    // bool ResourceRefList::operator !=(const ResourceRefList& rhs) const
    // Only operator == is needed

    members.methods_.Push(RegisterObjectMethodArgs("bool ResourceRefList::operator ==(const ResourceRefList& rhs) const", "bool opEquals(const ResourceRefList&in) const", AS_METHODPR(ResourceRefList, operator==, (const ResourceRefList&) const, bool), AS_CALL_THISCALL));

    // StringVector ResourceRefList::names_
    // Error: type "StringVector" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("StringHash ResourceRefList::type_", "StringHash type", offsetof(ResourceRefList, type_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_ResourceRefList
        REGISTER_MEMBERS_MANUAL_PART_ResourceRefList();
    #endif
}

// class Spline | File: ../Core/Spline.h
void CollectMembers_Spline(MemberCollection& members)
{
    // const VariantVector& Spline::GetKnots() const
    // Error: type "const VariantVector&" can not automatically bind
    // void Spline::SetKnots(const Vector<Variant>& knots)
    // Error: type "const Vector<Variant>&" can not automatically bind
    // bool Spline::operator !=(const Spline& rhs) const
    // Only operator == is needed

    members.methods_.Push(RegisterObjectMethodArgs("Spline& Spline::operator =(const Spline& rhs) = default", "Spline& opAssign(const Spline&in)", AS_METHODPR(Spline, operator=, (const Spline&), Spline&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Spline::operator ==(const Spline& rhs) const", "bool opEquals(const Spline&in) const", AS_METHODPR(Spline, operator==, (const Spline&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("InterpolationMode Spline::GetInterpolationMode() const", "InterpolationMode GetInterpolationMode() const", AS_METHODPR(Spline, GetInterpolationMode, () const, InterpolationMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("InterpolationMode Spline::GetInterpolationMode() const", "InterpolationMode get_interpolationMode() const", AS_METHODPR(Spline, GetInterpolationMode, () const, InterpolationMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant Spline::GetKnot(unsigned index) const", "Variant GetKnot(uint) const", AS_METHODPR(Spline, GetKnot, (unsigned) const, Variant), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant Spline::GetKnot(unsigned index) const", "Variant get_knot(uint) const", AS_METHODPR(Spline, GetKnot, (unsigned) const, Variant), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant Spline::GetPoint(float f) const", "Variant GetPoint(float) const", AS_METHODPR(Spline, GetPoint, (float) const, Variant), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Spline::SetInterpolationMode(InterpolationMode interpolationMode)", "void SetInterpolationMode(InterpolationMode)", AS_METHODPR(Spline, SetInterpolationMode, (InterpolationMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Spline::SetInterpolationMode(InterpolationMode interpolationMode)", "void set_interpolationMode(InterpolationMode)", AS_METHODPR(Spline, SetInterpolationMode, (InterpolationMode), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Spline::SetKnot(const Variant& knot, unsigned index)", "void SetKnot(const Variant&in, uint)", AS_METHODPR(Spline, SetKnot, (const Variant&, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Spline::AddKnot(const Variant& knot)", "void AddKnot(const Variant&in)", AS_METHODPR(Spline, AddKnot, (const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Spline::AddKnot(const Variant& knot, unsigned index)", "void AddKnot(const Variant&in, uint)", AS_METHODPR(Spline, AddKnot, (const Variant&, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Spline::RemoveKnot()", "void RemoveKnot()", AS_METHODPR(Spline, RemoveKnot, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Spline::RemoveKnot(unsigned index)", "void RemoveKnot(uint)", AS_METHODPR(Spline, RemoveKnot, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Spline::Clear()", "void Clear()", AS_METHODPR(Spline, Clear, (), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Spline
        REGISTER_MEMBERS_MANUAL_PART_Spline();
    #endif
}

// class StringHashRegister | File: ../Core/StringHashRegister.h
void CollectMembers_StringHashRegister(MemberCollection& members)
{
    // const StringMap& StringHashRegister::GetInternalMap() const
    // Error: type "const StringMap&" can not automatically bind
    // StringHash StringHashRegister::RegisterString(const StringHash& hash, const char* string)
    // Error: type "const char*" can not automatically bind
    // StringHash StringHashRegister::RegisterString(const char* string)
    // Error: type "const char*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("String StringHashRegister::GetStringCopy(const StringHash& hash) const", "String GetStringCopy(const StringHash&in) const", AS_METHODPR(StringHashRegister, GetStringCopy, (const StringHash&) const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool StringHashRegister::Contains(const StringHash& hash) const", "bool Contains(const StringHash&in) const", AS_METHODPR(StringHashRegister, Contains, (const StringHash&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& StringHashRegister::GetString(const StringHash& hash) const", "const String& GetString(const StringHash&in) const", AS_METHODPR(StringHashRegister, GetString, (const StringHash&) const, const String&), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_StringHashRegister
        REGISTER_MEMBERS_MANUAL_PART_StringHashRegister();
    #endif
}

// class Thread | File: ../Core/Thread.h
void CollectMembers_Thread(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("virtual void Thread::ThreadFunction() = 0", "void ThreadFunction()", AS_METHODPR(Thread, ThreadFunction, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Thread::Run()", "bool Run()", AS_METHODPR(Thread, Run, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Thread::Stop()", "void Stop()", AS_METHODPR(Thread, Stop, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Thread::SetPriority(int priority)", "void SetPriority(int)", AS_METHODPR(Thread, SetPriority, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Thread::IsStarted() const", "bool IsStarted() const", AS_METHODPR(Thread, IsStarted, () const, bool), AS_CALL_THISCALL));

    // static ThreadID Thread::GetCurrentThreadID()
    // Not registered because have @nobind mark

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static void Thread::SetMainThread()", "void SetMainThread()", AS_FUNCTIONPR(Thread::SetMainThread, (), void), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static bool Thread::IsMainThread()", "bool IsMainThread()", AS_FUNCTIONPR(Thread::IsMainThread, (), bool), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Thread
        REGISTER_MEMBERS_MANUAL_PART_Thread();
    #endif
}

// class Time | File: ../Core/Timer.h
void CollectMembers_Time(MemberCollection& members)
{
    CollectMembers_Object(members);

    members.methods_.Push(RegisterObjectMethodArgs("void Time::BeginFrame(float timeStep)", "void BeginFrame(float)", AS_METHODPR(Time, BeginFrame, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Time::EndFrame()", "void EndFrame()", AS_METHODPR(Time, EndFrame, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Time::SetTimerPeriod(unsigned mSec)", "void SetTimerPeriod(uint)", AS_METHODPR(Time, SetTimerPeriod, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Time::GetFrameNumber() const", "uint GetFrameNumber() const", AS_METHODPR(Time, GetFrameNumber, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Time::GetFrameNumber() const", "uint get_frameNumber() const", AS_METHODPR(Time, GetFrameNumber, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Time::GetTimeStep() const", "float GetTimeStep() const", AS_METHODPR(Time, GetTimeStep, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Time::GetTimeStep() const", "float get_timeStep() const", AS_METHODPR(Time, GetTimeStep, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Time::GetTimerPeriod() const", "uint GetTimerPeriod() const", AS_METHODPR(Time, GetTimerPeriod, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Time::GetElapsedTime()", "float GetElapsedTime()", AS_METHODPR(Time, GetElapsedTime, (), float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Time::GetElapsedTime()", "float get_elapsedTime()", AS_METHODPR(Time, GetElapsedTime, (), float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Time::GetFramesPerSecond() const", "float GetFramesPerSecond() const", AS_METHODPR(Time, GetFramesPerSecond, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Time::GetFramesPerSecond() const", "float get_framesPerSecond() const", AS_METHODPR(Time, GetFramesPerSecond, () const, float), AS_CALL_THISCALL));

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Time::GetSystemTime()", "uint GetSystemTime()", AS_FUNCTIONPR(Time::GetSystemTime, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static unsigned Time::GetTimeSinceEpoch()", "uint GetTimeSinceEpoch()", AS_FUNCTIONPR(Time::GetTimeSinceEpoch, (), unsigned), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static String Time::GetTimeStamp()", "String GetTimeStamp()", AS_FUNCTIONPR(Time::GetTimeStamp, (), String), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static void Time::Sleep(unsigned mSec)", "void Sleep(uint)", AS_FUNCTIONPR(Time::Sleep, (unsigned), void), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Time
        REGISTER_MEMBERS_MANUAL_PART_Time();
    #endif
}

// class Timer | File: ../Core/Timer.h
void CollectMembers_Timer(MemberCollection& members)
{
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Timer::GetMSec(bool reset)", "uint GetMSec(bool)", AS_METHODPR(Timer, GetMSec, (bool), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Timer::Reset()", "void Reset()", AS_METHODPR(Timer, Reset, (), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Timer
        REGISTER_MEMBERS_MANUAL_PART_Timer();
    #endif
}

// class TypeInfo | File: ../Core/Object.h
void CollectMembers_TypeInfo(MemberCollection& members)
{
    // const TypeInfo* TypeInfo::GetBaseTypeInfo() const
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // bool TypeInfo::IsTypeOf(const TypeInfo* typeInfo) const
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark

    members.methods_.Push(RegisterObjectMethodArgs("bool TypeInfo::IsTypeOf(StringHash type) const", "bool IsTypeOf(StringHash) const", AS_METHODPR(TypeInfo, IsTypeOf, (StringHash) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("StringHash TypeInfo::GetType() const", "StringHash GetType() const", AS_METHODPR(TypeInfo, GetType, () const, StringHash), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& TypeInfo::GetTypeName() const", "const String& GetTypeName() const", AS_METHODPR(TypeInfo, GetTypeName, () const, const String&), AS_CALL_THISCALL));

    // template <typename T> bool TypeInfo::IsTypeOf() const
    // Not registered because template

    #ifdef REGISTER_MEMBERS_MANUAL_PART_TypeInfo
        REGISTER_MEMBERS_MANUAL_PART_TypeInfo();
    #endif
}

// Variant& Variant::operator =(const StringVector& rhs)
// Variant& Variant::operator =(const StringVector& rhs) | File: ../Core/Variant.h
static Variant& Variant_operatorequals_StringVector(Variant* ptr, CScriptArray* rhs_conv)
{
    StringVector rhs = ArrayToVector<String>(rhs_conv);
    Variant& result = ptr->operator=(rhs);
    return result;
}


// bool Variant::operator ==(const StringVector& rhs) const
// bool Variant::operator ==(const StringVector& rhs) const | File: ../Core/Variant.h
static bool Variant_operatorequalsequals_StringVector(Variant* ptr, CScriptArray* rhs_conv)
{
    StringVector rhs = ArrayToVector<String>(rhs_conv);
    bool result = ptr->operator==(rhs);
    return result;
}


// const StringVector& Variant::GetStringVector() const
// const StringVector& Variant::GetStringVector() const | File: ../Core/Variant.h
static CScriptArray* Variant_GetStringVector_void(Variant* ptr)
{
    const StringVector& result = ptr->GetStringVector();
    return VectorToArray<String>(result, "Array<String>");
}


// class Variant | File: ../Core/Variant.h
void CollectMembers_Variant(MemberCollection& members)
{
    // void Variant::FromString(VariantType type, const char* value)
    // Error: type "const char*" can not automatically bind
    // void Variant::FromString(const char* type, const char* value)
    // Error: type "const char*" can not automatically bind
    // const PODVector<unsigned char>& Variant::GetBuffer() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // PODVector<unsigned char>* Variant::GetBufferPtr()
    // Error: type "PODVector<unsigned char>*" can not automatically bind
    // CustomVariantValue* Variant::GetCustomVariantValuePtr()
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark
    // const CustomVariantValue* Variant::GetCustomVariantValuePtr() const
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark
    // StringVector* Variant::GetStringVectorPtr()
    // Error: type "StringVector*" can not automatically bind
    // VariantMap* Variant::GetVariantMapPtr()
    // Error: type "VariantMap*" can not automatically bind
    // const VariantVector& Variant::GetVariantVector() const
    // Error: type "const VariantVector&" can not automatically bind
    // VariantVector* Variant::GetVariantVectorPtr()
    // Error: type "VariantVector*" can not automatically bind
    // void* Variant::GetVoidPtr() const
    // Error: type "void*" can not automatically bind
    // void Variant::SetBuffer(const void* data, unsigned size)
    // Error: type "const void*" can not automatically bind
    // void Variant::SetCustomVariantValue(const CustomVariantValue& value)
    // Error: type "CustomVariantValue" can not automatically bind bacause have @nobind mark
    // bool Variant::operator !=(RefCounted* rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(bool rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const IntRect& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const IntVector2& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const IntVector3& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const Matrix3& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const Matrix3x4& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const Matrix4& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const PODVector<unsigned char>& rhs) const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // bool Variant::operator !=(const Quaternion& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const Rect& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const ResourceRef& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const ResourceRefList& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const String& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const StringHash& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const StringVector& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const Variant& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const VariantMap& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const VariantVector& rhs) const
    // Error: type "const VariantVector&" can not automatically bind
    // bool Variant::operator !=(const Vector2& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const Vector3& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const Vector4& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(const VectorBuffer& rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(double rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(float rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(int rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(long long rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(unsigned long long rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(unsigned rhs) const
    // Only operator == is needed
    // bool Variant::operator !=(void* rhs) const
    // Error: type "void*" can not automatically bind
    // Variant& Variant::operator =(const PODVector<unsigned char>& rhs)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // Variant& Variant::operator =(const VariantVector& rhs)
    // Error: type "const VariantVector&" can not automatically bind
    // Variant& Variant::operator =(const char* rhs)
    // Error: type "const char*" can not automatically bind
    // Variant& Variant::operator =(void* rhs)
    // Error: type "void*" can not automatically bind
    // bool Variant::operator ==(const PODVector<unsigned char>& rhs) const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // bool Variant::operator ==(const VariantVector& rhs) const
    // Error: type "const VariantVector&" can not automatically bind
    // bool Variant::operator ==(void* rhs) const
    // Error: type "void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void Variant::Clear()", "void Clear()", AS_METHODPR(Variant, Clear, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const Variant& rhs)", "Variant& opAssign(const Variant&in)", AS_METHODPR(Variant, operator=, (const Variant&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(int rhs)", "Variant& opAssign(int)", AS_METHODPR(Variant, operator=, (int), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(long long rhs)", "Variant& opAssign(int64)", AS_METHODPR(Variant, operator=, (long long), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(unsigned long long rhs)", "Variant& opAssign(uint64)", AS_METHODPR(Variant, operator=, (unsigned long long), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(unsigned rhs)", "Variant& opAssign(uint)", AS_METHODPR(Variant, operator=, (unsigned), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const StringHash& rhs)", "Variant& opAssign(const StringHash&in)", AS_METHODPR(Variant, operator=, (const StringHash&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(bool rhs)", "Variant& opAssign(bool)", AS_METHODPR(Variant, operator=, (bool), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(float rhs)", "Variant& opAssign(float)", AS_METHODPR(Variant, operator=, (float), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(double rhs)", "Variant& opAssign(double)", AS_METHODPR(Variant, operator=, (double), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const Vector2& rhs)", "Variant& opAssign(const Vector2&in)", AS_METHODPR(Variant, operator=, (const Vector2&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const Vector3& rhs)", "Variant& opAssign(const Vector3&in)", AS_METHODPR(Variant, operator=, (const Vector3&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const Vector4& rhs)", "Variant& opAssign(const Vector4&in)", AS_METHODPR(Variant, operator=, (const Vector4&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const Quaternion& rhs)", "Variant& opAssign(const Quaternion&in)", AS_METHODPR(Variant, operator=, (const Quaternion&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const Color& rhs)", "Variant& opAssign(const Color&in)", AS_METHODPR(Variant, operator=, (const Color&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const String& rhs)", "Variant& opAssign(const String&in)", AS_METHODPR(Variant, operator=, (const String&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const VectorBuffer& rhs)", "Variant& opAssign(const VectorBuffer&in)", AS_METHODPR(Variant, operator=, (const VectorBuffer&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const ResourceRef& rhs)", "Variant& opAssign(const ResourceRef&in)", AS_METHODPR(Variant, operator=, (const ResourceRef&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const ResourceRefList& rhs)", "Variant& opAssign(const ResourceRefList&in)", AS_METHODPR(Variant, operator=, (const ResourceRefList&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const StringVector& rhs)", "Variant& opAssign(Array<String>@+)", AS_FUNCTION_OBJFIRST(Variant_operatorequals_StringVector), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const VariantMap& rhs)", "Variant& opAssign(const VariantMap&in)", AS_METHODPR(Variant, operator=, (const VariantMap&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const Rect& rhs)", "Variant& opAssign(const Rect&in)", AS_METHODPR(Variant, operator=, (const Rect&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const IntRect& rhs)", "Variant& opAssign(const IntRect&in)", AS_METHODPR(Variant, operator=, (const IntRect&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const IntVector2& rhs)", "Variant& opAssign(const IntVector2&in)", AS_METHODPR(Variant, operator=, (const IntVector2&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const IntVector3& rhs)", "Variant& opAssign(const IntVector3&in)", AS_METHODPR(Variant, operator=, (const IntVector3&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(RefCounted* rhs)", "Variant& opAssign(RefCounted@+)", AS_METHODPR(Variant, operator=, (RefCounted*), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const Matrix3& rhs)", "Variant& opAssign(const Matrix3&in)", AS_METHODPR(Variant, operator=, (const Matrix3&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const Matrix3x4& rhs)", "Variant& opAssign(const Matrix3x4&in)", AS_METHODPR(Variant, operator=, (const Matrix3x4&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant& Variant::operator =(const Matrix4& rhs)", "Variant& opAssign(const Matrix4&in)", AS_METHODPR(Variant, operator=, (const Matrix4&), Variant&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const Variant& rhs) const", "bool opEquals(const Variant&in) const", AS_METHODPR(Variant, operator==, (const Variant&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(int rhs) const", "bool opEquals(int) const", AS_METHODPR(Variant, operator==, (int) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(unsigned rhs) const", "bool opEquals(uint) const", AS_METHODPR(Variant, operator==, (unsigned) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(long long rhs) const", "bool opEquals(int64) const", AS_METHODPR(Variant, operator==, (long long) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(unsigned long long rhs) const", "bool opEquals(uint64) const", AS_METHODPR(Variant, operator==, (unsigned long long) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(bool rhs) const", "bool opEquals(bool) const", AS_METHODPR(Variant, operator==, (bool) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(float rhs) const", "bool opEquals(float) const", AS_METHODPR(Variant, operator==, (float) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(double rhs) const", "bool opEquals(double) const", AS_METHODPR(Variant, operator==, (double) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const Vector2& rhs) const", "bool opEquals(const Vector2&in) const", AS_METHODPR(Variant, operator==, (const Vector2&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const Vector3& rhs) const", "bool opEquals(const Vector3&in) const", AS_METHODPR(Variant, operator==, (const Vector3&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const Vector4& rhs) const", "bool opEquals(const Vector4&in) const", AS_METHODPR(Variant, operator==, (const Vector4&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const Quaternion& rhs) const", "bool opEquals(const Quaternion&in) const", AS_METHODPR(Variant, operator==, (const Quaternion&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const Color& rhs) const", "bool opEquals(const Color&in) const", AS_METHODPR(Variant, operator==, (const Color&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const String& rhs) const", "bool opEquals(const String&in) const", AS_METHODPR(Variant, operator==, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const VectorBuffer& rhs) const", "bool opEquals(const VectorBuffer&in) const", AS_METHODPR(Variant, operator==, (const VectorBuffer&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const ResourceRef& rhs) const", "bool opEquals(const ResourceRef&in) const", AS_METHODPR(Variant, operator==, (const ResourceRef&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const ResourceRefList& rhs) const", "bool opEquals(const ResourceRefList&in) const", AS_METHODPR(Variant, operator==, (const ResourceRefList&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const StringVector& rhs) const", "bool opEquals(Array<String>@+) const", AS_FUNCTION_OBJFIRST(Variant_operatorequalsequals_StringVector), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const VariantMap& rhs) const", "bool opEquals(const VariantMap&in) const", AS_METHODPR(Variant, operator==, (const VariantMap&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const Rect& rhs) const", "bool opEquals(const Rect&in) const", AS_METHODPR(Variant, operator==, (const Rect&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const IntRect& rhs) const", "bool opEquals(const IntRect&in) const", AS_METHODPR(Variant, operator==, (const IntRect&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const IntVector2& rhs) const", "bool opEquals(const IntVector2&in) const", AS_METHODPR(Variant, operator==, (const IntVector2&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const IntVector3& rhs) const", "bool opEquals(const IntVector3&in) const", AS_METHODPR(Variant, operator==, (const IntVector3&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const StringHash& rhs) const", "bool opEquals(const StringHash&in) const", AS_METHODPR(Variant, operator==, (const StringHash&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(RefCounted* rhs) const", "bool opEquals(RefCounted@+) const", AS_METHODPR(Variant, operator==, (RefCounted*) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const Matrix3& rhs) const", "bool opEquals(const Matrix3&in) const", AS_METHODPR(Variant, operator==, (const Matrix3&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const Matrix3x4& rhs) const", "bool opEquals(const Matrix3x4&in) const", AS_METHODPR(Variant, operator==, (const Matrix3x4&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::operator ==(const Matrix4& rhs) const", "bool opEquals(const Matrix4&in) const", AS_METHODPR(Variant, operator==, (const Matrix4&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Variant::FromString(const String& type, const String& value)", "void FromString(const String&in, const String&in)", AS_METHODPR(Variant, FromString, (const String&, const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Variant::FromString(VariantType type, const String& value)", "void FromString(VariantType, const String&in)", AS_METHODPR(Variant, FromString, (VariantType, const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Variant::GetInt() const", "int GetInt() const", AS_METHODPR(Variant, GetInt, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("long long Variant::GetInt64() const", "int64 GetInt64() const", AS_METHODPR(Variant, GetInt64, () const, long long), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned long long Variant::GetUInt64() const", "uint64 GetUInt64() const", AS_METHODPR(Variant, GetUInt64, () const, unsigned long long), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Variant::GetUInt() const", "uint GetUInt() const", AS_METHODPR(Variant, GetUInt, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("StringHash Variant::GetStringHash() const", "StringHash GetStringHash() const", AS_METHODPR(Variant, GetStringHash, () const, StringHash), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::GetBool() const", "bool GetBool() const", AS_METHODPR(Variant, GetBool, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Variant::GetFloat() const", "float GetFloat() const", AS_METHODPR(Variant, GetFloat, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("double Variant::GetDouble() const", "double GetDouble() const", AS_METHODPR(Variant, GetDouble, () const, double), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector2& Variant::GetVector2() const", "const Vector2& GetVector2() const", AS_METHODPR(Variant, GetVector2, () const, const Vector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector3& Variant::GetVector3() const", "const Vector3& GetVector3() const", AS_METHODPR(Variant, GetVector3, () const, const Vector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector4& Variant::GetVector4() const", "const Vector4& GetVector4() const", AS_METHODPR(Variant, GetVector4, () const, const Vector4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Quaternion& Variant::GetQuaternion() const", "const Quaternion& GetQuaternion() const", AS_METHODPR(Variant, GetQuaternion, () const, const Quaternion&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Color& Variant::GetColor() const", "const Color& GetColor() const", AS_METHODPR(Variant, GetColor, () const, const Color&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Variant::GetString() const", "const String& GetString() const", AS_METHODPR(Variant, GetString, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VectorBuffer Variant::GetVectorBuffer() const", "VectorBuffer GetVectorBuffer() const", AS_METHODPR(Variant, GetVectorBuffer, () const, VectorBuffer), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const ResourceRef& Variant::GetResourceRef() const", "const ResourceRef& GetResourceRef() const", AS_METHODPR(Variant, GetResourceRef, () const, const ResourceRef&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const ResourceRefList& Variant::GetResourceRefList() const", "const ResourceRefList& GetResourceRefList() const", AS_METHODPR(Variant, GetResourceRefList, () const, const ResourceRefList&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const StringVector& Variant::GetStringVector() const", "Array<String>@ GetStringVector() const", AS_FUNCTION_OBJFIRST(Variant_GetStringVector_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("const VariantMap& Variant::GetVariantMap() const", "const VariantMap& GetVariantMap() const", AS_METHODPR(Variant, GetVariantMap, () const, const VariantMap&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Rect& Variant::GetRect() const", "const Rect& GetRect() const", AS_METHODPR(Variant, GetRect, () const, const Rect&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntRect& Variant::GetIntRect() const", "const IntRect& GetIntRect() const", AS_METHODPR(Variant, GetIntRect, () const, const IntRect&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntVector2& Variant::GetIntVector2() const", "const IntVector2& GetIntVector2() const", AS_METHODPR(Variant, GetIntVector2, () const, const IntVector2&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const IntVector3& Variant::GetIntVector3() const", "const IntVector3& GetIntVector3() const", AS_METHODPR(Variant, GetIntVector3, () const, const IntVector3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("RefCounted* Variant::GetPtr() const", "RefCounted@+ GetPtr() const", AS_METHODPR(Variant, GetPtr, () const, RefCounted*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix3& Variant::GetMatrix3() const", "const Matrix3& GetMatrix3() const", AS_METHODPR(Variant, GetMatrix3, () const, const Matrix3&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix3x4& Variant::GetMatrix3x4() const", "const Matrix3x4& GetMatrix3x4() const", AS_METHODPR(Variant, GetMatrix3x4, () const, const Matrix3x4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Matrix4& Variant::GetMatrix4() const", "const Matrix4& GetMatrix4() const", AS_METHODPR(Variant, GetMatrix4, () const, const Matrix4&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VariantType Variant::GetType() const", "VariantType GetType() const", AS_METHODPR(Variant, GetType, () const, VariantType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("VariantType Variant::GetType() const", "VariantType get_type() const", AS_METHODPR(Variant, GetType, () const, VariantType), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Variant::GetTypeName() const", "String GetTypeName() const", AS_METHODPR(Variant, GetTypeName, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Variant::GetTypeName() const", "String get_typeName() const", AS_METHODPR(Variant, GetTypeName, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Variant::ToString() const", "String ToString() const", AS_METHODPR(Variant, ToString, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::IsZero() const", "bool IsZero() const", AS_METHODPR(Variant, IsZero, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::IsZero() const", "bool get_zero() const", AS_METHODPR(Variant, IsZero, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::IsEmpty() const", "bool IsEmpty() const", AS_METHODPR(Variant, IsEmpty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::IsEmpty() const", "bool get_empty() const", AS_METHODPR(Variant, IsEmpty, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Variant::IsCustom() const", "bool IsCustom() const", AS_METHODPR(Variant, IsCustom, () const, bool), AS_CALL_THISCALL));

    // template <class T> Variant& Variant::operator =(const CustomVariantValueImpl<T>& value)
    // Not registered because template
    // template <class T> void Variant::SetCustom(const T& value)
    // Not registered because template
    // template <class T> T Variant::GetCustom() const
    // Not registered because template
    // template <class T> bool Variant::IsCustomType() const
    // Not registered because template
    // template <class T> T Variant::Get() const
    // Not registered because template
    // template <class T> T* Variant::GetCustomPtr()
    // Not registered because template
    // template <> int Variant::Get() const
    // Not registered because template
    // template <> unsigned Variant::Get() const
    // Not registered because template
    // template <> long long Variant::Get() const
    // Not registered because template
    // template <> unsigned long long Variant::Get() const
    // Not registered because template
    // template <> StringHash Variant::Get() const
    // Not registered because template
    // template <> bool Variant::Get() const
    // Not registered because template
    // template <> float Variant::Get() const
    // Not registered because template
    // template <> double Variant::Get() const
    // Not registered because template
    // template <> const Vector2& Variant::Get() const
    // Not registered because template
    // template <> const Vector3& Variant::Get() const
    // Not registered because template
    // template <> const Vector4& Variant::Get() const
    // Not registered because template
    // template <> const Quaternion& Variant::Get() const
    // Not registered because template
    // template <> const Color& Variant::Get() const
    // Not registered because template
    // template <> const String& Variant::Get() const
    // Not registered because template
    // template <> const Rect& Variant::Get() const
    // Not registered because template
    // template <> const IntRect& Variant::Get() const
    // Not registered because template
    // template <> const IntVector2& Variant::Get() const
    // Not registered because template
    // template <> const IntVector3& Variant::Get() const
    // Not registered because template
    // template <> const PODVector<unsigned char>& Variant::Get() const
    // Not registered because template
    // template <> void* Variant::Get() const
    // Not registered because template
    // template <> RefCounted* Variant::Get() const
    // Not registered because template
    // template <> const Matrix3& Variant::Get() const
    // Not registered because template
    // template <> const Matrix3x4& Variant::Get() const
    // Not registered because template
    // template <> const Matrix4& Variant::Get() const
    // Not registered because template
    // template <> ResourceRef Variant::Get() const
    // Not registered because template
    // template <> ResourceRefList Variant::Get() const
    // Not registered because template
    // template <> VariantVector Variant::Get() const
    // Not registered because template
    // template <> StringVector Variant::Get() const
    // Not registered because template
    // template <> VariantMap Variant::Get() const
    // Not registered because template
    // template <> Vector2 Variant::Get() const
    // Not registered because template
    // template <> Vector3 Variant::Get() const
    // Not registered because template
    // template <> Vector4 Variant::Get() const
    // Not registered because template
    // template <> Quaternion Variant::Get() const
    // Not registered because template
    // template <> Color Variant::Get() const
    // Not registered because template
    // template <> String Variant::Get() const
    // Not registered because template
    // template <> Rect Variant::Get() const
    // Not registered because template
    // template <> IntRect Variant::Get() const
    // Not registered because template
    // template <> IntVector2 Variant::Get() const
    // Not registered because template
    // template <> IntVector3 Variant::Get() const
    // Not registered because template
    // template <> PODVector<unsigned char> Variant::Get() const
    // Not registered because template
    // template <> Matrix3 Variant::Get() const
    // Not registered because template
    // template <> Matrix3x4 Variant::Get() const
    // Not registered because template
    // template <> Matrix4 Variant::Get() const
    // Not registered because template
    // static VariantType Variant::GetTypeFromName(const char* typeName)
    // Error: type "const char*" can not automatically bind

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static String Variant::GetTypeName(VariantType type)", "String GetTypeName(VariantType)", AS_FUNCTIONPR(Variant::GetTypeName, (VariantType), String), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static VariantType Variant::GetTypeFromName(const String& typeName)", "VariantType GetTypeFromName(const String&in)", AS_FUNCTIONPR(Variant::GetTypeFromName, (const String&), VariantType), AS_CALL_CDECL));

    // static const PODVector<unsigned char> Variant::emptyBuffer
    // Error: type "const PODVector<unsigned char>" can not automatically bind
    // static const VariantVector Variant::emptyVariantVector
    // Error: type "const VariantVector" can not automatically bind
    // static const StringVector Variant::emptyStringVector
    // Error: type "const StringVector" can not automatically bind

    members.staticFields_.Push(RegisterGlobalPropertyArgs("static const Variant Variant::EMPTY", "const Variant EMPTY", (void*)&Variant::EMPTY));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static const ResourceRef Variant::emptyResourceRef", "const ResourceRef emptyResourceRef", (void*)&Variant::emptyResourceRef));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static const ResourceRefList Variant::emptyResourceRefList", "const ResourceRefList emptyResourceRefList", (void*)&Variant::emptyResourceRefList));
    members.staticFields_.Push(RegisterGlobalPropertyArgs("static const VariantMap Variant::emptyVariantMap", "const VariantMap emptyVariantMap", (void*)&Variant::emptyVariantMap));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Variant
        REGISTER_MEMBERS_MANUAL_PART_Variant();
    #endif
}

// struct WorkItem | File: ../Core/WorkQueue.h
void CollectMembers_WorkItem(MemberCollection& members)
{
    // void(* WorkItem::workFunction_) (const WorkItem* , unsigned)
    // Not registered because pointer
    // void* WorkItem::start_
    // Not registered because pointer
    // void* WorkItem::end_
    // Not registered because pointer
    // void* WorkItem::aux_
    // Not registered because pointer
    // std::atomic<bool> WorkItem::completed_
    // Error: type "std::atomic<bool>" can not automatically bind

    members.fields_.Push(RegisterObjectPropertyArgs("unsigned WorkItem::priority_", "uint priority", offsetof(WorkItem, priority_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool WorkItem::sendEvent_", "bool sendEvent", offsetof(WorkItem, sendEvent_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_WorkItem
        REGISTER_MEMBERS_MANUAL_PART_WorkItem();
    #endif
}

// class WorkQueue | File: ../Core/WorkQueue.h
void CollectMembers_WorkQueue(MemberCollection& members)
{
    CollectMembers_Object(members);

    // void WorkQueue::AddWorkItem(const SharedPtr<WorkItem>& item)
    // Error: type "const SharedPtr<WorkItem>&" can not automatically bind
    // SharedPtr<WorkItem> WorkQueue::GetFreeItem()
    // Error: type "SharedPtr<WorkItem>" can not automatically bind
    // bool WorkQueue::RemoveWorkItem(SharedPtr<WorkItem> item)
    // Error: type "SharedPtr<WorkItem>" can not automatically bind
    // unsigned WorkQueue::RemoveWorkItems(const Vector<SharedPtr<WorkItem>>& items)
    // Error: type "const Vector<SharedPtr<WorkItem>>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("void WorkQueue::CreateThreads(unsigned numThreads)", "void CreateThreads(uint)", AS_METHODPR(WorkQueue, CreateThreads, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void WorkQueue::Pause()", "void Pause()", AS_METHODPR(WorkQueue, Pause, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void WorkQueue::Resume()", "void Resume()", AS_METHODPR(WorkQueue, Resume, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void WorkQueue::Complete(unsigned priority)", "void Complete(uint)", AS_METHODPR(WorkQueue, Complete, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void WorkQueue::SetTolerance(int tolerance)", "void SetTolerance(int)", AS_METHODPR(WorkQueue, SetTolerance, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void WorkQueue::SetNonThreadedWorkMs(int ms)", "void SetNonThreadedWorkMs(int)", AS_METHODPR(WorkQueue, SetNonThreadedWorkMs, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned WorkQueue::GetNumThreads() const", "uint GetNumThreads() const", AS_METHODPR(WorkQueue, GetNumThreads, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool WorkQueue::IsCompleted(unsigned priority) const", "bool IsCompleted(uint) const", AS_METHODPR(WorkQueue, IsCompleted, (unsigned) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool WorkQueue::IsCompleting() const", "bool IsCompleting() const", AS_METHODPR(WorkQueue, IsCompleting, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int WorkQueue::GetTolerance() const", "int GetTolerance() const", AS_METHODPR(WorkQueue, GetTolerance, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int WorkQueue::GetNonThreadedWorkMs() const", "int GetNonThreadedWorkMs() const", AS_METHODPR(WorkQueue, GetNonThreadedWorkMs, () const, int), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_WorkQueue
        REGISTER_MEMBERS_MANUAL_PART_WorkQueue();
    #endif
}

} // namespace Urho3D
