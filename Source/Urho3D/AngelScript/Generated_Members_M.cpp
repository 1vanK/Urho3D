// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_M(asIScriptEngine* engine)
{
    // static String Material::GetTextureUnitName(TextureUnit unit) | File: ../Graphics/Material.h
    engine->SetDefaultNamespace("Material");
    engine->RegisterGlobalFunction("String GetTextureUnitName(TextureUnit)", AS_FUNCTIONPR(Material::GetTextureUnitName, (TextureUnit), String), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static Variant Material::ParseShaderParameterValue(const String& value) | File: ../Graphics/Material.h
    engine->SetDefaultNamespace("Material");
    engine->RegisterGlobalFunction("Variant ParseShaderParameterValue(const String&in)", AS_FUNCTIONPR(Material::ParseShaderParameterValue, (const String&), Variant), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static void Material::RegisterObject(Context* context) | File: ../Graphics/Material.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Material, "Material")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Material, "Material")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Material, "Material")
#endif
#ifdef REGISTER_MANUAL_PART_Material
    REGISTER_MANUAL_PART_Material(Material, "Material")
#endif
    RegisterSubclass<Resource, Material>(engine, "Resource", "Material");
    RegisterSubclass<Object, Material>(engine, "Object", "Material");
    RegisterSubclass<RefCounted, Material>(engine, "RefCounted", "Material");

    // static void Matrix2::BulkTranspose(float* dest, const float* src, unsigned count) | File: ../Math/Matrix2.h
    // Error: type "float*" can not automatically bind
#ifdef REGISTER_MANUAL_PART_Matrix2
    REGISTER_MANUAL_PART_Matrix2(Matrix2, "Matrix2")
#endif

    // static void Matrix3::BulkTranspose(float* dest, const float* src, unsigned count) | File: ../Math/Matrix3.h
    // Error: type "float*" can not automatically bind
#ifdef REGISTER_MANUAL_PART_Matrix3
    REGISTER_MANUAL_PART_Matrix3(Matrix3, "Matrix3")
#endif

#ifdef REGISTER_MANUAL_PART_Matrix3x4
    REGISTER_MANUAL_PART_Matrix3x4(Matrix3x4, "Matrix3x4")
#endif

    // static void Matrix4::BulkTranspose(float* dest, const float* src, unsigned count) | File: ../Math/Matrix4.h
    // Error: type "float*" can not automatically bind
#ifdef REGISTER_MANUAL_PART_Matrix4
    REGISTER_MANUAL_PART_Matrix4(Matrix4, "Matrix4")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Menu::RegisterObject(Context* context) | File: ../UI/Menu.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Button
    REGISTER_MANUAL_PART_Button(Menu, "Menu")
#endif
#ifdef REGISTER_MANUAL_PART_BorderImage
    REGISTER_MANUAL_PART_BorderImage(Menu, "Menu")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(Menu, "Menu")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Menu, "Menu")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Menu, "Menu")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Menu, "Menu")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Menu, "Menu")
#endif
#ifdef REGISTER_MANUAL_PART_Menu
    REGISTER_MANUAL_PART_Menu(Menu, "Menu")
#endif
    RegisterSubclass<Button, Menu>(engine, "Button", "Menu");
    RegisterSubclass<BorderImage, Menu>(engine, "BorderImage", "Menu");
    RegisterSubclass<UIElement, Menu>(engine, "UIElement", "Menu");
    RegisterSubclass<Animatable, Menu>(engine, "Animatable", "Menu");
    RegisterSubclass<Serializable, Menu>(engine, "Serializable", "Menu");
    RegisterSubclass<Object, Menu>(engine, "Object", "Menu");
    RegisterSubclass<RefCounted, Menu>(engine, "RefCounted", "Menu");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void MessageBox::RegisterObject(Context* context) | File: ../UI/MessageBox.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(MessageBox, "MessageBox")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(MessageBox, "MessageBox")
#endif
#ifdef REGISTER_MANUAL_PART_MessageBox
    REGISTER_MANUAL_PART_MessageBox(MessageBox, "MessageBox")
#endif
    RegisterSubclass<Object, MessageBox>(engine, "Object", "MessageBox");
    RegisterSubclass<RefCounted, MessageBox>(engine, "RefCounted", "MessageBox");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Model::RegisterObject(Context* context) | File: ../Graphics/Model.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_ResourceWithMetadata
    REGISTER_MANUAL_PART_ResourceWithMetadata(Model, "Model")
#endif
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Model, "Model")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Model, "Model")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Model, "Model")
#endif
#ifdef REGISTER_MANUAL_PART_Model
    REGISTER_MANUAL_PART_Model(Model, "Model")
#endif
    RegisterSubclass<ResourceWithMetadata, Model>(engine, "ResourceWithMetadata", "Model");
    RegisterSubclass<Resource, Model>(engine, "Resource", "Model");
    RegisterSubclass<Object, Model>(engine, "Object", "Model");
    RegisterSubclass<RefCounted, Model>(engine, "RefCounted", "Model");

    // Mutex& Mutex::operator=(const Mutex&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Mutex>(engine, "Mutex");
#ifdef REGISTER_MANUAL_PART_Mutex
    REGISTER_MANUAL_PART_Mutex(Mutex, "Mutex")
#endif

#ifdef REGISTER_MANUAL_PART_MutexLock
    REGISTER_MANUAL_PART_MutexLock(MutexLock, "MutexLock")
#endif

#ifdef URHO3D_PHYSICS
    // ManifoldPair& ManifoldPair::operator=(const ManifoldPair&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ManifoldPair>(engine, "ManifoldPair");
#ifdef REGISTER_MANUAL_PART_ManifoldPair
    REGISTER_MANUAL_PART_ManifoldPair(ManifoldPair, "ManifoldPair")
#endif
#endif

    // MaterialShaderParameter& MaterialShaderParameter::operator=(const MaterialShaderParameter&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<MaterialShaderParameter>(engine, "MaterialShaderParameter");
#ifdef REGISTER_MANUAL_PART_MaterialShaderParameter
    REGISTER_MANUAL_PART_MaterialShaderParameter(MaterialShaderParameter, "MaterialShaderParameter")
#endif

    // ModelMorph& ModelMorph::operator=(const ModelMorph&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ModelMorph>(engine, "ModelMorph");
#ifdef REGISTER_MANUAL_PART_ModelMorph
    REGISTER_MANUAL_PART_ModelMorph(ModelMorph, "ModelMorph")
#endif

}

}
