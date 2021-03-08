// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_U(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(UI, "UI")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(UI, "UI")
#endif
#ifdef REGISTER_MANUAL_PART_UI
    REGISTER_MANUAL_PART_UI(UI, "UI")
#endif
    RegisterSubclass<Object, UI>(engine, "Object", "UI");
    RegisterSubclass<RefCounted, UI>(engine, "RefCounted", "UI");

    // BlendMode UIBatch::blendMode_ | File: ../UI/UIBatch.h
    engine->RegisterObjectProperty("UIBatch", "BlendMode blendMode", offsetof(UIBatch, blendMode_));
    // unsigned UIBatch::color_ | File: ../UI/UIBatch.h
    engine->RegisterObjectProperty("UIBatch", "uint color", offsetof(UIBatch, color_));
    // Material* UIBatch::customMaterial_ | File: ../UI/UIBatch.h
    // Material* can not be registered
    // UIElement* UIBatch::element_ | File: ../UI/UIBatch.h
    // UIElement* can not be registered
    // Vector2 UIBatch::invTextureSize_ | File: ../UI/UIBatch.h
    engine->RegisterObjectProperty("UIBatch", "Vector2 invTextureSize", offsetof(UIBatch, invTextureSize_));
    // Vector3 UIBatch::posAdjust | File: ../UI/UIBatch.h
    engine->SetDefaultNamespace("UIBatch");
    engine->RegisterGlobalProperty("Vector3 posAdjust", (void*)&UIBatch::posAdjust);
    engine->SetDefaultNamespace("");
    // IntRect UIBatch::scissor_ | File: ../UI/UIBatch.h
    engine->RegisterObjectProperty("UIBatch", "IntRect scissor", offsetof(UIBatch, scissor_));
    // Texture* UIBatch::texture_ | File: ../UI/UIBatch.h
    // Texture* can not be registered
    // bool UIBatch::useGradient_ | File: ../UI/UIBatch.h
    engine->RegisterObjectProperty("UIBatch", "bool useGradient", offsetof(UIBatch, useGradient_));
    // PODVector<float>* UIBatch::vertexData_ | File: ../UI/UIBatch.h
    // PODVector<float>* can not be registered
    // unsigned UIBatch::vertexEnd_ | File: ../UI/UIBatch.h
    engine->RegisterObjectProperty("UIBatch", "uint vertexEnd", offsetof(UIBatch, vertexEnd_));
    // unsigned UIBatch::vertexStart_ | File: ../UI/UIBatch.h
    engine->RegisterObjectProperty("UIBatch", "uint vertexStart", offsetof(UIBatch, vertexStart_));
    // static void UIBatch::AddOrMerge(const UIBatch& batch, PODVector<UIBatch>& batches) | File: ../UI/UIBatch.h
    // Error: type "PODVector<UIBatch>&" can not automatically bind
    // UIBatch& UIBatch::operator=(const UIBatch&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<UIBatch>(engine, "UIBatch");
#ifdef REGISTER_MANUAL_PART_UIBatch
    REGISTER_MANUAL_PART_UIBatch(UIBatch, "UIBatch")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void UIComponent::RegisterObject(Context* context) | File: ../UI/UIComponent.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(UIComponent, "UIComponent")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(UIComponent, "UIComponent")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(UIComponent, "UIComponent")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(UIComponent, "UIComponent")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(UIComponent, "UIComponent")
#endif
#ifdef REGISTER_MANUAL_PART_UIComponent
    REGISTER_MANUAL_PART_UIComponent(UIComponent, "UIComponent")
#endif
    RegisterSubclass<Component, UIComponent>(engine, "Component", "UIComponent");
    RegisterSubclass<Animatable, UIComponent>(engine, "Animatable", "UIComponent");
    RegisterSubclass<Serializable, UIComponent>(engine, "Serializable", "UIComponent");
    RegisterSubclass<Object, UIComponent>(engine, "Object", "UIComponent");
    RegisterSubclass<RefCounted, UIComponent>(engine, "RefCounted", "UIComponent");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void UIElement::RegisterObject(Context* context) | File: ../UI/UIElement.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(UIElement, "UIElement")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(UIElement, "UIElement")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(UIElement, "UIElement")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(UIElement, "UIElement")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(UIElement, "UIElement")
#endif
    RegisterSubclass<Animatable, UIElement>(engine, "Animatable", "UIElement");
    RegisterSubclass<Serializable, UIElement>(engine, "Serializable", "UIElement");
    RegisterSubclass<Object, UIElement>(engine, "Object", "UIElement");
    RegisterSubclass<RefCounted, UIElement>(engine, "RefCounted", "UIElement");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void UISelectable::RegisterObject(Context* context) | File: ../UI/UISelectable.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(UISelectable, "UISelectable")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(UISelectable, "UISelectable")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(UISelectable, "UISelectable")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(UISelectable, "UISelectable")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(UISelectable, "UISelectable")
#endif
#ifdef REGISTER_MANUAL_PART_UISelectable
    REGISTER_MANUAL_PART_UISelectable(UISelectable, "UISelectable")
#endif
    RegisterSubclass<UIElement, UISelectable>(engine, "UIElement", "UISelectable");
    RegisterSubclass<Animatable, UISelectable>(engine, "Animatable", "UISelectable");
    RegisterSubclass<Serializable, UISelectable>(engine, "Serializable", "UISelectable");
    RegisterSubclass<Object, UISelectable>(engine, "Object", "UISelectable");
    RegisterSubclass<RefCounted, UISelectable>(engine, "RefCounted", "UISelectable");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static const Urho3D::String& UnknownComponent::GetTypeNameStatic() | File: ../Scene/UnknownComponent.h
    // Error: type "const Urho3D::String&" can not automatically bind
    // static Urho3D::StringHash UnknownComponent::GetTypeStatic() | File: ../Scene/UnknownComponent.h
    // Error: type "Urho3D::StringHash" can not automatically bind
    // static void UnknownComponent::RegisterObject(Context* context) | File: ../Scene/UnknownComponent.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(UnknownComponent, "UnknownComponent")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(UnknownComponent, "UnknownComponent")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(UnknownComponent, "UnknownComponent")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(UnknownComponent, "UnknownComponent")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(UnknownComponent, "UnknownComponent")
#endif
#ifdef REGISTER_MANUAL_PART_UnknownComponent
    REGISTER_MANUAL_PART_UnknownComponent(UnknownComponent, "UnknownComponent")
#endif
    RegisterSubclass<Component, UnknownComponent>(engine, "Component", "UnknownComponent");
    RegisterSubclass<Animatable, UnknownComponent>(engine, "Animatable", "UnknownComponent");
    RegisterSubclass<Serializable, UnknownComponent>(engine, "Serializable", "UnknownComponent");
    RegisterSubclass<Object, UnknownComponent>(engine, "Object", "UnknownComponent");
    RegisterSubclass<RefCounted, UnknownComponent>(engine, "RefCounted", "UnknownComponent");

}

}
