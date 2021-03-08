// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_Q(asIScriptEngine* engine)
{
    // const Quaternion Quaternion::IDENTITY | File: ../Math/Quaternion.h
    engine->SetDefaultNamespace("Quaternion");
    engine->RegisterGlobalProperty("const Quaternion IDENTITY", (void*)&Quaternion::IDENTITY);
    engine->SetDefaultNamespace("");
    // float Quaternion::w_ | File: ../Math/Quaternion.h
    engine->RegisterObjectProperty("Quaternion", "float w", offsetof(Quaternion, w_));
    // float Quaternion::x_ | File: ../Math/Quaternion.h
    engine->RegisterObjectProperty("Quaternion", "float x", offsetof(Quaternion, x_));
    // float Quaternion::y_ | File: ../Math/Quaternion.h
    engine->RegisterObjectProperty("Quaternion", "float y", offsetof(Quaternion, y_));
    // float Quaternion::z_ | File: ../Math/Quaternion.h
    engine->RegisterObjectProperty("Quaternion", "float z", offsetof(Quaternion, z_));
#ifdef REGISTER_MANUAL_PART_Quaternion
    REGISTER_MANUAL_PART_Quaternion(Quaternion, "Quaternion")
#endif

}

}
