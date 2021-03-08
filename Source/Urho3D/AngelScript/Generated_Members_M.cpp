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

    // const Matrix2 Matrix2::IDENTITY | File: ../Math/Matrix2.h
    engine->SetDefaultNamespace("Matrix2");
    engine->RegisterGlobalProperty("const Matrix2 IDENTITY", (void*)&Matrix2::IDENTITY);
    engine->SetDefaultNamespace("");
    // float Matrix2::m00_ | File: ../Math/Matrix2.h
    engine->RegisterObjectProperty("Matrix2", "float m00", offsetof(Matrix2, m00_));
    // float Matrix2::m01_ | File: ../Math/Matrix2.h
    engine->RegisterObjectProperty("Matrix2", "float m01", offsetof(Matrix2, m01_));
    // float Matrix2::m10_ | File: ../Math/Matrix2.h
    engine->RegisterObjectProperty("Matrix2", "float m10", offsetof(Matrix2, m10_));
    // float Matrix2::m11_ | File: ../Math/Matrix2.h
    engine->RegisterObjectProperty("Matrix2", "float m11", offsetof(Matrix2, m11_));
    // const Matrix2 Matrix2::ZERO | File: ../Math/Matrix2.h
    engine->SetDefaultNamespace("Matrix2");
    engine->RegisterGlobalProperty("const Matrix2 ZERO", (void*)&Matrix2::ZERO);
    engine->SetDefaultNamespace("");
    // static void Matrix2::BulkTranspose(float* dest, const float* src, unsigned count) | File: ../Math/Matrix2.h
    // Error: type "float*" can not automatically bind
#ifdef REGISTER_MANUAL_PART_Matrix2
    REGISTER_MANUAL_PART_Matrix2(Matrix2, "Matrix2")
#endif

    // const Matrix3 Matrix3::IDENTITY | File: ../Math/Matrix3.h
    engine->SetDefaultNamespace("Matrix3");
    engine->RegisterGlobalProperty("const Matrix3 IDENTITY", (void*)&Matrix3::IDENTITY);
    engine->SetDefaultNamespace("");
    // float Matrix3::m00_ | File: ../Math/Matrix3.h
    engine->RegisterObjectProperty("Matrix3", "float m00", offsetof(Matrix3, m00_));
    // float Matrix3::m01_ | File: ../Math/Matrix3.h
    engine->RegisterObjectProperty("Matrix3", "float m01", offsetof(Matrix3, m01_));
    // float Matrix3::m02_ | File: ../Math/Matrix3.h
    engine->RegisterObjectProperty("Matrix3", "float m02", offsetof(Matrix3, m02_));
    // float Matrix3::m10_ | File: ../Math/Matrix3.h
    engine->RegisterObjectProperty("Matrix3", "float m10", offsetof(Matrix3, m10_));
    // float Matrix3::m11_ | File: ../Math/Matrix3.h
    engine->RegisterObjectProperty("Matrix3", "float m11", offsetof(Matrix3, m11_));
    // float Matrix3::m12_ | File: ../Math/Matrix3.h
    engine->RegisterObjectProperty("Matrix3", "float m12", offsetof(Matrix3, m12_));
    // float Matrix3::m20_ | File: ../Math/Matrix3.h
    engine->RegisterObjectProperty("Matrix3", "float m20", offsetof(Matrix3, m20_));
    // float Matrix3::m21_ | File: ../Math/Matrix3.h
    engine->RegisterObjectProperty("Matrix3", "float m21", offsetof(Matrix3, m21_));
    // float Matrix3::m22_ | File: ../Math/Matrix3.h
    engine->RegisterObjectProperty("Matrix3", "float m22", offsetof(Matrix3, m22_));
    // const Matrix3 Matrix3::ZERO | File: ../Math/Matrix3.h
    engine->SetDefaultNamespace("Matrix3");
    engine->RegisterGlobalProperty("const Matrix3 ZERO", (void*)&Matrix3::ZERO);
    engine->SetDefaultNamespace("");
    // static void Matrix3::BulkTranspose(float* dest, const float* src, unsigned count) | File: ../Math/Matrix3.h
    // Error: type "float*" can not automatically bind
#ifdef REGISTER_MANUAL_PART_Matrix3
    REGISTER_MANUAL_PART_Matrix3(Matrix3, "Matrix3")
#endif

    // const Matrix3x4 Matrix3x4::IDENTITY | File: ../Math/Matrix3x4.h
    engine->SetDefaultNamespace("Matrix3x4");
    engine->RegisterGlobalProperty("const Matrix3x4 IDENTITY", (void*)&Matrix3x4::IDENTITY);
    engine->SetDefaultNamespace("");
    // float Matrix3x4::m00_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m00", offsetof(Matrix3x4, m00_));
    // float Matrix3x4::m01_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m01", offsetof(Matrix3x4, m01_));
    // float Matrix3x4::m02_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m02", offsetof(Matrix3x4, m02_));
    // float Matrix3x4::m03_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m03", offsetof(Matrix3x4, m03_));
    // float Matrix3x4::m10_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m10", offsetof(Matrix3x4, m10_));
    // float Matrix3x4::m11_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m11", offsetof(Matrix3x4, m11_));
    // float Matrix3x4::m12_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m12", offsetof(Matrix3x4, m12_));
    // float Matrix3x4::m13_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m13", offsetof(Matrix3x4, m13_));
    // float Matrix3x4::m20_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m20", offsetof(Matrix3x4, m20_));
    // float Matrix3x4::m21_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m21", offsetof(Matrix3x4, m21_));
    // float Matrix3x4::m22_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m22", offsetof(Matrix3x4, m22_));
    // float Matrix3x4::m23_ | File: ../Math/Matrix3x4.h
    engine->RegisterObjectProperty("Matrix3x4", "float m23", offsetof(Matrix3x4, m23_));
    // const Matrix3x4 Matrix3x4::ZERO | File: ../Math/Matrix3x4.h
    engine->SetDefaultNamespace("Matrix3x4");
    engine->RegisterGlobalProperty("const Matrix3x4 ZERO", (void*)&Matrix3x4::ZERO);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Matrix3x4
    REGISTER_MANUAL_PART_Matrix3x4(Matrix3x4, "Matrix3x4")
#endif

    // const Matrix4 Matrix4::IDENTITY | File: ../Math/Matrix4.h
    engine->SetDefaultNamespace("Matrix4");
    engine->RegisterGlobalProperty("const Matrix4 IDENTITY", (void*)&Matrix4::IDENTITY);
    engine->SetDefaultNamespace("");
    // float Matrix4::m00_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m00", offsetof(Matrix4, m00_));
    // float Matrix4::m01_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m01", offsetof(Matrix4, m01_));
    // float Matrix4::m02_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m02", offsetof(Matrix4, m02_));
    // float Matrix4::m03_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m03", offsetof(Matrix4, m03_));
    // float Matrix4::m10_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m10", offsetof(Matrix4, m10_));
    // float Matrix4::m11_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m11", offsetof(Matrix4, m11_));
    // float Matrix4::m12_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m12", offsetof(Matrix4, m12_));
    // float Matrix4::m13_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m13", offsetof(Matrix4, m13_));
    // float Matrix4::m20_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m20", offsetof(Matrix4, m20_));
    // float Matrix4::m21_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m21", offsetof(Matrix4, m21_));
    // float Matrix4::m22_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m22", offsetof(Matrix4, m22_));
    // float Matrix4::m23_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m23", offsetof(Matrix4, m23_));
    // float Matrix4::m30_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m30", offsetof(Matrix4, m30_));
    // float Matrix4::m31_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m31", offsetof(Matrix4, m31_));
    // float Matrix4::m32_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m32", offsetof(Matrix4, m32_));
    // float Matrix4::m33_ | File: ../Math/Matrix4.h
    engine->RegisterObjectProperty("Matrix4", "float m33", offsetof(Matrix4, m33_));
    // const Matrix4 Matrix4::ZERO | File: ../Math/Matrix4.h
    engine->SetDefaultNamespace("Matrix4");
    engine->RegisterGlobalProperty("const Matrix4 ZERO", (void*)&Matrix4::ZERO);
    engine->SetDefaultNamespace("");
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
    // btPersistentManifold* ManifoldPair::flippedManifold_ | File: ../Physics/PhysicsWorld.h
    // btPersistentManifold* can not be registered
    // btPersistentManifold* ManifoldPair::manifold_ | File: ../Physics/PhysicsWorld.h
    // btPersistentManifold* can not be registered
    // ManifoldPair& ManifoldPair::operator=(const ManifoldPair&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ManifoldPair>(engine, "ManifoldPair");
#ifdef REGISTER_MANUAL_PART_ManifoldPair
    REGISTER_MANUAL_PART_ManifoldPair(ManifoldPair, "ManifoldPair")
#endif
#endif

    // String MaterialShaderParameter::name_ | File: ../Graphics/Material.h
    engine->RegisterObjectProperty("MaterialShaderParameter", "String name", offsetof(MaterialShaderParameter, name_));
    // Variant MaterialShaderParameter::value_ | File: ../Graphics/Material.h
    engine->RegisterObjectProperty("MaterialShaderParameter", "Variant value", offsetof(MaterialShaderParameter, value_));
    // MaterialShaderParameter& MaterialShaderParameter::operator=(const MaterialShaderParameter&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<MaterialShaderParameter>(engine, "MaterialShaderParameter");
#ifdef REGISTER_MANUAL_PART_MaterialShaderParameter
    REGISTER_MANUAL_PART_MaterialShaderParameter(MaterialShaderParameter, "MaterialShaderParameter")
#endif

    // HashMap<unsigned, VertexBufferMorph> ModelMorph::buffers_ | File: ../Graphics/Model.h
    // Error: type "HashMap<unsigned, VertexBufferMorph>" can not automatically bind
    // String ModelMorph::name_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("ModelMorph", "String name", offsetof(ModelMorph, name_));
    // StringHash ModelMorph::nameHash_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("ModelMorph", "StringHash nameHash", offsetof(ModelMorph, nameHash_));
    // float ModelMorph::weight_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("ModelMorph", "float weight", offsetof(ModelMorph, weight_));
    // ModelMorph& ModelMorph::operator=(const ModelMorph&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ModelMorph>(engine, "ModelMorph");
#ifdef REGISTER_MANUAL_PART_ModelMorph
    REGISTER_MANUAL_PART_ModelMorph(ModelMorph, "ModelMorph")
#endif

}

}
