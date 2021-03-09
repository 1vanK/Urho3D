// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

// static VariantMap Engine::ParseParameters(const Vector<String>& arguments) | File: ../Engine/Engine.h
static VariantMap Engine_ParseParameters_VectorString(CScriptArray* arguments_conv)
{
    Vector<String> arguments = ArrayToVector<String>(arguments_conv);
    VariantMap result = Engine::ParseParameters(arguments);
    return result;
}

void ASRegisterGenerated_Members_E(asIScriptEngine* engine)
{
    // static const Variant& Engine::GetParameter(const VariantMap& parameters, const String& parameter, const Variant& defaultValue=Variant::EMPTY) | File: ../Engine/Engine.h
    engine->SetDefaultNamespace("Engine");
    engine->RegisterGlobalFunction("const Variant& GetParameter(const VariantMap&in, const String&in, const Variant&in = Variant::EMPTY)", AS_FUNCTIONPR(Engine::GetParameter, (const VariantMap&, const String&, const Variant&), const Variant&), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static bool Engine::HasParameter(const VariantMap& parameters, const String& parameter) | File: ../Engine/Engine.h
    engine->SetDefaultNamespace("Engine");
    engine->RegisterGlobalFunction("bool HasParameter(const VariantMap&in, const String&in)", AS_FUNCTIONPR(Engine::HasParameter, (const VariantMap&, const String&), bool), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static VariantMap Engine::ParseParameters(const Vector<String>& arguments) | File: ../Engine/Engine.h
    engine->SetDefaultNamespace("Engine");
    engine->RegisterGlobalFunction("VariantMap ParseParameters(Array<String>@+)", AS_FUNCTION(Engine_ParseParameters_VectorString), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Engine, "Engine")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Engine, "Engine")
#endif
#ifdef REGISTER_MANUAL_PART_Engine
    REGISTER_MANUAL_PART_Engine(Engine, "Engine")
#endif
    RegisterSubclass<Object, Engine>(engine, "Object", "Engine");
    RegisterSubclass<RefCounted, Engine>(engine, "RefCounted", "Engine");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static bool EventProfiler::IsActive() | File: ../Core/EventProfiler.h
    engine->SetDefaultNamespace("EventProfiler");
    engine->RegisterGlobalFunction("bool IsActive()", AS_FUNCTIONPR(EventProfiler::IsActive, (), bool), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static void EventProfiler::SetActive(bool newActive) | File: ../Core/EventProfiler.h
    engine->SetDefaultNamespace("EventProfiler");
    engine->RegisterGlobalFunction("void SetActive(bool)", AS_FUNCTIONPR(EventProfiler::SetActive, (bool), void), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Profiler
    REGISTER_MANUAL_PART_Profiler(EventProfiler, "EventProfiler")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(EventProfiler, "EventProfiler")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(EventProfiler, "EventProfiler")
#endif
#ifdef REGISTER_MANUAL_PART_EventProfiler
    REGISTER_MANUAL_PART_EventProfiler(EventProfiler, "EventProfiler")
#endif
    RegisterSubclass<Profiler, EventProfiler>(engine, "Profiler", "EventProfiler");
    RegisterSubclass<Object, EventProfiler>(engine, "Object", "EventProfiler");
    RegisterSubclass<RefCounted, EventProfiler>(engine, "RefCounted", "EventProfiler");

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(EventReceiverGroup, "EventReceiverGroup")
#endif
#ifdef REGISTER_MANUAL_PART_EventReceiverGroup
    REGISTER_MANUAL_PART_EventReceiverGroup(EventReceiverGroup, "EventReceiverGroup")
#endif
    RegisterSubclass<RefCounted, EventReceiverGroup>(engine, "RefCounted", "EventReceiverGroup");

}

}
