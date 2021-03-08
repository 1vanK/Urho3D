// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_Z(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Zone::RegisterObject(Context* context) | File: ../Graphics/Zone.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(Zone, "Zone")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Zone, "Zone")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Zone, "Zone")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Zone, "Zone")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Zone, "Zone")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Zone, "Zone")
#endif
#ifdef REGISTER_MANUAL_PART_Zone
    REGISTER_MANUAL_PART_Zone(Zone, "Zone")
#endif
    RegisterSubclass<Drawable, Zone>(engine, "Drawable", "Zone");
    RegisterSubclass<Component, Zone>(engine, "Component", "Zone");
    RegisterSubclass<Animatable, Zone>(engine, "Animatable", "Zone");
    RegisterSubclass<Serializable, Zone>(engine, "Serializable", "Zone");
    RegisterSubclass<Object, Zone>(engine, "Object", "Zone");
    RegisterSubclass<RefCounted, Zone>(engine, "RefCounted", "Zone");

}

}
