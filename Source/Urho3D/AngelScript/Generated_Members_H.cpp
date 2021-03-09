// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_H(asIScriptEngine* engine)
{
    // HashBase& HashBase::operator=(const HashBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<HashBase>(engine, "HashBase");
#ifdef REGISTER_MANUAL_PART_HashBase
    REGISTER_MANUAL_PART_HashBase(HashBase, "HashBase")
#endif

    // static long long HiresTimer::GetFrequency() | File: ../Core/Timer.h
    engine->SetDefaultNamespace("HiresTimer");
    engine->RegisterGlobalFunction("int64 GetFrequency()", AS_FUNCTIONPR(HiresTimer::GetFrequency, (), long long), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static bool HiresTimer::IsSupported() | File: ../Core/Timer.h
    engine->SetDefaultNamespace("HiresTimer");
    engine->RegisterGlobalFunction("bool IsSupported()", AS_FUNCTIONPR(HiresTimer::IsSupported, (), bool), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // HiresTimer& HiresTimer::operator=(const HiresTimer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<HiresTimer>(engine, "HiresTimer");
#ifdef REGISTER_MANUAL_PART_HiresTimer
    REGISTER_MANUAL_PART_HiresTimer(HiresTimer, "HiresTimer")
#endif

#ifdef URHO3D_NETWORK
    // static ThreadID Thread::GetCurrentThreadID() | File: ../Core/Thread.h
    // Not registered because have @nobind mark
    // static bool Thread::IsMainThread() | File: ../Core/Thread.h
    engine->SetDefaultNamespace("HttpRequest");
    engine->RegisterGlobalFunction("bool IsMainThread()", AS_FUNCTIONPR(HttpRequest::IsMainThread, (), bool), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static void Thread::SetMainThread() | File: ../Core/Thread.h
    engine->SetDefaultNamespace("HttpRequest");
    engine->RegisterGlobalFunction("void SetMainThread()", AS_FUNCTIONPR(HttpRequest::SetMainThread, (), void), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(HttpRequest, "HttpRequest")
#endif
#ifdef REGISTER_MANUAL_PART_Deserializer
    REGISTER_MANUAL_PART_Deserializer(HttpRequest, "HttpRequest")
#endif
#ifdef REGISTER_MANUAL_PART_Thread
    REGISTER_MANUAL_PART_Thread(HttpRequest, "HttpRequest")
#endif
#ifdef REGISTER_MANUAL_PART_HttpRequest
    REGISTER_MANUAL_PART_HttpRequest(HttpRequest, "HttpRequest")
#endif
    RegisterSubclass<RefCounted, HttpRequest>(engine, "RefCounted", "HttpRequest");
    RegisterSubclass<Deserializer, HttpRequest>(engine, "Deserializer", "HttpRequest");
#endif

    // HashIteratorBase& HashIteratorBase::operator=(const HashIteratorBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<HashIteratorBase>(engine, "HashIteratorBase");
#ifdef REGISTER_MANUAL_PART_HashIteratorBase
    REGISTER_MANUAL_PART_HashIteratorBase(HashIteratorBase, "HashIteratorBase")
#endif

    // HashNodeBase& HashNodeBase::operator=(const HashNodeBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<HashNodeBase>(engine, "HashNodeBase");
#ifdef REGISTER_MANUAL_PART_HashNodeBase
    REGISTER_MANUAL_PART_HashNodeBase(HashNodeBase, "HashNodeBase")
#endif

#ifdef URHO3D_PHYSICS
#ifdef REGISTER_MANUAL_PART_CollisionGeometryData
    REGISTER_MANUAL_PART_CollisionGeometryData(HeightfieldData, "HeightfieldData")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(HeightfieldData, "HeightfieldData")
#endif
#ifdef REGISTER_MANUAL_PART_HeightfieldData
    REGISTER_MANUAL_PART_HeightfieldData(HeightfieldData, "HeightfieldData")
#endif
    RegisterSubclass<CollisionGeometryData, HeightfieldData>(engine, "CollisionGeometryData", "HeightfieldData");
    RegisterSubclass<RefCounted, HeightfieldData>(engine, "RefCounted", "HeightfieldData");
#endif

}

}
