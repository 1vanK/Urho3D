// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_Ca_Cm(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Camera::RegisterObject(Context* context) | File: ../Graphics/Camera.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Camera, "Camera")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Camera, "Camera")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Camera, "Camera")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Camera, "Camera")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Camera, "Camera")
#endif
#ifdef REGISTER_MANUAL_PART_Camera
    REGISTER_MANUAL_PART_Camera(Camera, "Camera")
#endif
    RegisterSubclass<Component, Camera>(engine, "Component", "Camera");
    RegisterSubclass<Animatable, Camera>(engine, "Animatable", "Camera");
    RegisterSubclass<Serializable, Camera>(engine, "Serializable", "Camera");
    RegisterSubclass<Object, Camera>(engine, "Object", "Camera");
    RegisterSubclass<RefCounted, Camera>(engine, "RefCounted", "Camera");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void CheckBox::RegisterObject(Context* context) | File: ../UI/CheckBox.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_BorderImage
    REGISTER_MANUAL_PART_BorderImage(CheckBox, "CheckBox")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(CheckBox, "CheckBox")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(CheckBox, "CheckBox")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(CheckBox, "CheckBox")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(CheckBox, "CheckBox")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(CheckBox, "CheckBox")
#endif
#ifdef REGISTER_MANUAL_PART_CheckBox
    REGISTER_MANUAL_PART_CheckBox(CheckBox, "CheckBox")
#endif
    RegisterSubclass<BorderImage, CheckBox>(engine, "BorderImage", "CheckBox");
    RegisterSubclass<UIElement, CheckBox>(engine, "UIElement", "CheckBox");
    RegisterSubclass<Animatable, CheckBox>(engine, "Animatable", "CheckBox");
    RegisterSubclass<Serializable, CheckBox>(engine, "Serializable", "CheckBox");
    RegisterSubclass<Object, CheckBox>(engine, "Object", "CheckBox");
    RegisterSubclass<RefCounted, CheckBox>(engine, "RefCounted", "CheckBox");

    // float CascadeParameters::biasAutoAdjust_ | File: ../Graphics/Light.h
    engine->RegisterObjectProperty("CascadeParameters", "float biasAutoAdjust", offsetof(CascadeParameters, biasAutoAdjust_));
    // float CascadeParameters::fadeStart_ | File: ../Graphics/Light.h
    engine->RegisterObjectProperty("CascadeParameters", "float fadeStart", offsetof(CascadeParameters, fadeStart_));
    // Vector4 CascadeParameters::splits_ | File: ../Graphics/Light.h
    engine->RegisterObjectProperty("CascadeParameters", "Vector4 splits", offsetof(CascadeParameters, splits_));
    // CascadeParameters& CascadeParameters::operator=(const CascadeParameters&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<CascadeParameters>(engine, "CascadeParameters");
#ifdef REGISTER_MANUAL_PART_CascadeParameters
    REGISTER_MANUAL_PART_CascadeParameters(CascadeParameters, "CascadeParameters")
#endif

    // Vector2 CharLocation::position_ | File: ../UI/Text.h
    engine->RegisterObjectProperty("CharLocation", "Vector2 position", offsetof(CharLocation, position_));
    // Vector2 CharLocation::size_ | File: ../UI/Text.h
    engine->RegisterObjectProperty("CharLocation", "Vector2 size", offsetof(CharLocation, size_));
    // CharLocation& CharLocation::operator=(const CharLocation&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<CharLocation>(engine, "CharLocation");
#ifdef REGISTER_MANUAL_PART_CharLocation
    REGISTER_MANUAL_PART_CharLocation(CharLocation, "CharLocation")
#endif

}

}
