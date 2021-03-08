// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_Ta_Tm(asIScriptEngine* engine)
{
    // unsigned Technique::alphaPassIndex | File: ../Graphics/Technique.h
    engine->SetDefaultNamespace("Technique");
    engine->RegisterGlobalProperty("uint alphaPassIndex", (void*)&Technique::alphaPassIndex);
    engine->SetDefaultNamespace("");
    // unsigned Technique::basePassIndex | File: ../Graphics/Technique.h
    engine->SetDefaultNamespace("Technique");
    engine->RegisterGlobalProperty("uint basePassIndex", (void*)&Technique::basePassIndex);
    engine->SetDefaultNamespace("");
    // unsigned Technique::deferredPassIndex | File: ../Graphics/Technique.h
    engine->SetDefaultNamespace("Technique");
    engine->RegisterGlobalProperty("uint deferredPassIndex", (void*)&Technique::deferredPassIndex);
    engine->SetDefaultNamespace("");
    // unsigned Technique::lightPassIndex | File: ../Graphics/Technique.h
    engine->SetDefaultNamespace("Technique");
    engine->RegisterGlobalProperty("uint lightPassIndex", (void*)&Technique::lightPassIndex);
    engine->SetDefaultNamespace("");
    // unsigned Technique::litAlphaPassIndex | File: ../Graphics/Technique.h
    engine->SetDefaultNamespace("Technique");
    engine->RegisterGlobalProperty("uint litAlphaPassIndex", (void*)&Technique::litAlphaPassIndex);
    engine->SetDefaultNamespace("");
    // unsigned Technique::litBasePassIndex | File: ../Graphics/Technique.h
    engine->SetDefaultNamespace("Technique");
    engine->RegisterGlobalProperty("uint litBasePassIndex", (void*)&Technique::litBasePassIndex);
    engine->SetDefaultNamespace("");
    // unsigned Technique::materialPassIndex | File: ../Graphics/Technique.h
    engine->SetDefaultNamespace("Technique");
    engine->RegisterGlobalProperty("uint materialPassIndex", (void*)&Technique::materialPassIndex);
    engine->SetDefaultNamespace("");
    // unsigned Technique::shadowPassIndex | File: ../Graphics/Technique.h
    engine->SetDefaultNamespace("Technique");
    engine->RegisterGlobalProperty("uint shadowPassIndex", (void*)&Technique::shadowPassIndex);
    engine->SetDefaultNamespace("");
    // static unsigned Technique::GetPassIndex(const String& passName) | File: ../Graphics/Technique.h
    engine->SetDefaultNamespace("Technique");
    engine->RegisterGlobalFunction("uint GetPassIndex(const String&in)", AS_FUNCTIONPR(Technique::GetPassIndex, (const String&), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Technique::RegisterObject(Context* context) | File: ../Graphics/Technique.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Technique, "Technique")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Technique, "Technique")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Technique, "Technique")
#endif
#ifdef REGISTER_MANUAL_PART_Technique
    REGISTER_MANUAL_PART_Technique(Technique, "Technique")
#endif
    RegisterSubclass<Resource, Technique>(engine, "Resource", "Technique");
    RegisterSubclass<Object, Technique>(engine, "Object", "Technique");
    RegisterSubclass<RefCounted, Technique>(engine, "RefCounted", "Technique");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Terrain::RegisterObject(Context* context) | File: ../Graphics/Terrain.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Terrain, "Terrain")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Terrain, "Terrain")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Terrain, "Terrain")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Terrain, "Terrain")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Terrain, "Terrain")
#endif
#ifdef REGISTER_MANUAL_PART_Terrain
    REGISTER_MANUAL_PART_Terrain(Terrain, "Terrain")
#endif
    RegisterSubclass<Component, Terrain>(engine, "Component", "Terrain");
    RegisterSubclass<Animatable, Terrain>(engine, "Animatable", "Terrain");
    RegisterSubclass<Serializable, Terrain>(engine, "Serializable", "Terrain");
    RegisterSubclass<Object, Terrain>(engine, "Object", "Terrain");
    RegisterSubclass<RefCounted, Terrain>(engine, "RefCounted", "Terrain");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void TerrainPatch::RegisterObject(Context* context) | File: ../Graphics/TerrainPatch.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(TerrainPatch, "TerrainPatch")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(TerrainPatch, "TerrainPatch")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(TerrainPatch, "TerrainPatch")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(TerrainPatch, "TerrainPatch")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(TerrainPatch, "TerrainPatch")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TerrainPatch, "TerrainPatch")
#endif
#ifdef REGISTER_MANUAL_PART_TerrainPatch
    REGISTER_MANUAL_PART_TerrainPatch(TerrainPatch, "TerrainPatch")
#endif
    RegisterSubclass<Drawable, TerrainPatch>(engine, "Drawable", "TerrainPatch");
    RegisterSubclass<Component, TerrainPatch>(engine, "Component", "TerrainPatch");
    RegisterSubclass<Animatable, TerrainPatch>(engine, "Animatable", "TerrainPatch");
    RegisterSubclass<Serializable, TerrainPatch>(engine, "Serializable", "TerrainPatch");
    RegisterSubclass<Object, TerrainPatch>(engine, "Object", "TerrainPatch");
    RegisterSubclass<RefCounted, TerrainPatch>(engine, "RefCounted", "TerrainPatch");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Text::RegisterObject(Context* context) | File: ../UI/Text.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_UISelectable
    REGISTER_MANUAL_PART_UISelectable(Text, "Text")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(Text, "Text")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Text, "Text")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Text, "Text")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Text, "Text")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Text, "Text")
#endif
#ifdef REGISTER_MANUAL_PART_Text
    REGISTER_MANUAL_PART_Text(Text, "Text")
#endif
    RegisterSubclass<UISelectable, Text>(engine, "UISelectable", "Text");
    RegisterSubclass<UIElement, Text>(engine, "UIElement", "Text");
    RegisterSubclass<Animatable, Text>(engine, "Animatable", "Text");
    RegisterSubclass<Serializable, Text>(engine, "Serializable", "Text");
    RegisterSubclass<Object, Text>(engine, "Object", "Text");
    RegisterSubclass<RefCounted, Text>(engine, "RefCounted", "Text");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Text3D::RegisterObject(Context* context) | File: ../UI/Text3D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(Text3D, "Text3D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Text3D, "Text3D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Text3D, "Text3D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Text3D, "Text3D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Text3D, "Text3D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Text3D, "Text3D")
#endif
#ifdef REGISTER_MANUAL_PART_Text3D
    REGISTER_MANUAL_PART_Text3D(Text3D, "Text3D")
#endif
    RegisterSubclass<Drawable, Text3D>(engine, "Drawable", "Text3D");
    RegisterSubclass<Component, Text3D>(engine, "Component", "Text3D");
    RegisterSubclass<Animatable, Text3D>(engine, "Animatable", "Text3D");
    RegisterSubclass<Serializable, Text3D>(engine, "Serializable", "Text3D");
    RegisterSubclass<Object, Text3D>(engine, "Object", "Text3D");
    RegisterSubclass<RefCounted, Text3D>(engine, "RefCounted", "Text3D");

    // static unsigned Texture::CheckMaxLevels(int width, int height, unsigned requestedLevels) | File: ../Graphics/Texture.h
    engine->SetDefaultNamespace("Texture");
    engine->RegisterGlobalFunction("uint CheckMaxLevels(int, int, uint)", AS_FUNCTIONPR(Texture::CheckMaxLevels, (int, int, unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Texture::CheckMaxLevels(int width, int height, int depth, unsigned requestedLevels) | File: ../Graphics/Texture.h
    engine->SetDefaultNamespace("Texture");
    engine->RegisterGlobalFunction("uint CheckMaxLevels(int, int, int, uint)", AS_FUNCTIONPR(Texture::CheckMaxLevels, (int, int, int, unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Texture::GetDataType(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetDSVFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetExternalFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetSRVFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_ResourceWithMetadata
    REGISTER_MANUAL_PART_ResourceWithMetadata(Texture, "Texture")
#endif
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Texture, "Texture")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Texture, "Texture")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Texture, "Texture")
#endif
#ifdef REGISTER_MANUAL_PART_GPUObject
    REGISTER_MANUAL_PART_GPUObject(Texture, "Texture")
#endif
#ifdef REGISTER_MANUAL_PART_Texture
    REGISTER_MANUAL_PART_Texture(Texture, "Texture")
#endif
    RegisterSubclass<ResourceWithMetadata, Texture>(engine, "ResourceWithMetadata", "Texture");
    RegisterSubclass<Resource, Texture>(engine, "Resource", "Texture");
    RegisterSubclass<Object, Texture>(engine, "Object", "Texture");
    RegisterSubclass<RefCounted, Texture>(engine, "RefCounted", "Texture");

    // static unsigned Texture::CheckMaxLevels(int width, int height, unsigned requestedLevels) | File: ../Graphics/Texture.h
    engine->SetDefaultNamespace("Texture2D");
    engine->RegisterGlobalFunction("uint CheckMaxLevels(int, int, uint)", AS_FUNCTIONPR(Texture2D::CheckMaxLevels, (int, int, unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Texture::CheckMaxLevels(int width, int height, int depth, unsigned requestedLevels) | File: ../Graphics/Texture.h
    engine->SetDefaultNamespace("Texture2D");
    engine->RegisterGlobalFunction("uint CheckMaxLevels(int, int, int, uint)", AS_FUNCTIONPR(Texture2D::CheckMaxLevels, (int, int, int, unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Texture::GetDataType(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetDSVFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetExternalFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetSRVFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Texture2D::RegisterObject(Context* context) | File: ../Graphics/Texture2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Texture
    REGISTER_MANUAL_PART_Texture(Texture2D, "Texture2D")
#endif
#ifdef REGISTER_MANUAL_PART_ResourceWithMetadata
    REGISTER_MANUAL_PART_ResourceWithMetadata(Texture2D, "Texture2D")
#endif
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Texture2D, "Texture2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Texture2D, "Texture2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Texture2D, "Texture2D")
#endif
#ifdef REGISTER_MANUAL_PART_GPUObject
    REGISTER_MANUAL_PART_GPUObject(Texture2D, "Texture2D")
#endif
#ifdef REGISTER_MANUAL_PART_Texture2D
    REGISTER_MANUAL_PART_Texture2D(Texture2D, "Texture2D")
#endif
    RegisterSubclass<Texture, Texture2D>(engine, "Texture", "Texture2D");
    RegisterSubclass<ResourceWithMetadata, Texture2D>(engine, "ResourceWithMetadata", "Texture2D");
    RegisterSubclass<Resource, Texture2D>(engine, "Resource", "Texture2D");
    RegisterSubclass<Object, Texture2D>(engine, "Object", "Texture2D");
    RegisterSubclass<RefCounted, Texture2D>(engine, "RefCounted", "Texture2D");

    // static unsigned Texture::CheckMaxLevels(int width, int height, unsigned requestedLevels) | File: ../Graphics/Texture.h
    engine->SetDefaultNamespace("Texture2DArray");
    engine->RegisterGlobalFunction("uint CheckMaxLevels(int, int, uint)", AS_FUNCTIONPR(Texture2DArray::CheckMaxLevels, (int, int, unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Texture::CheckMaxLevels(int width, int height, int depth, unsigned requestedLevels) | File: ../Graphics/Texture.h
    engine->SetDefaultNamespace("Texture2DArray");
    engine->RegisterGlobalFunction("uint CheckMaxLevels(int, int, int, uint)", AS_FUNCTIONPR(Texture2DArray::CheckMaxLevels, (int, int, int, unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Texture::GetDataType(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetDSVFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetExternalFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetSRVFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Texture2DArray::RegisterObject(Context* context) | File: ../Graphics/Texture2DArray.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Texture
    REGISTER_MANUAL_PART_Texture(Texture2DArray, "Texture2DArray")
#endif
#ifdef REGISTER_MANUAL_PART_ResourceWithMetadata
    REGISTER_MANUAL_PART_ResourceWithMetadata(Texture2DArray, "Texture2DArray")
#endif
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Texture2DArray, "Texture2DArray")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Texture2DArray, "Texture2DArray")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Texture2DArray, "Texture2DArray")
#endif
#ifdef REGISTER_MANUAL_PART_GPUObject
    REGISTER_MANUAL_PART_GPUObject(Texture2DArray, "Texture2DArray")
#endif
#ifdef REGISTER_MANUAL_PART_Texture2DArray
    REGISTER_MANUAL_PART_Texture2DArray(Texture2DArray, "Texture2DArray")
#endif
    RegisterSubclass<Texture, Texture2DArray>(engine, "Texture", "Texture2DArray");
    RegisterSubclass<ResourceWithMetadata, Texture2DArray>(engine, "ResourceWithMetadata", "Texture2DArray");
    RegisterSubclass<Resource, Texture2DArray>(engine, "Resource", "Texture2DArray");
    RegisterSubclass<Object, Texture2DArray>(engine, "Object", "Texture2DArray");
    RegisterSubclass<RefCounted, Texture2DArray>(engine, "RefCounted", "Texture2DArray");

    // static unsigned Texture::CheckMaxLevels(int width, int height, unsigned requestedLevels) | File: ../Graphics/Texture.h
    engine->SetDefaultNamespace("Texture3D");
    engine->RegisterGlobalFunction("uint CheckMaxLevels(int, int, uint)", AS_FUNCTIONPR(Texture3D::CheckMaxLevels, (int, int, unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Texture::CheckMaxLevels(int width, int height, int depth, unsigned requestedLevels) | File: ../Graphics/Texture.h
    engine->SetDefaultNamespace("Texture3D");
    engine->RegisterGlobalFunction("uint CheckMaxLevels(int, int, int, uint)", AS_FUNCTIONPR(Texture3D::CheckMaxLevels, (int, int, int, unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Texture::GetDataType(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetDSVFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetExternalFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetSRVFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Texture3D::RegisterObject(Context* context) | File: ../Graphics/Texture3D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Texture
    REGISTER_MANUAL_PART_Texture(Texture3D, "Texture3D")
#endif
#ifdef REGISTER_MANUAL_PART_ResourceWithMetadata
    REGISTER_MANUAL_PART_ResourceWithMetadata(Texture3D, "Texture3D")
#endif
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Texture3D, "Texture3D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Texture3D, "Texture3D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Texture3D, "Texture3D")
#endif
#ifdef REGISTER_MANUAL_PART_GPUObject
    REGISTER_MANUAL_PART_GPUObject(Texture3D, "Texture3D")
#endif
#ifdef REGISTER_MANUAL_PART_Texture3D
    REGISTER_MANUAL_PART_Texture3D(Texture3D, "Texture3D")
#endif
    RegisterSubclass<Texture, Texture3D>(engine, "Texture", "Texture3D");
    RegisterSubclass<ResourceWithMetadata, Texture3D>(engine, "ResourceWithMetadata", "Texture3D");
    RegisterSubclass<Resource, Texture3D>(engine, "Resource", "Texture3D");
    RegisterSubclass<Object, Texture3D>(engine, "Object", "Texture3D");
    RegisterSubclass<RefCounted, Texture3D>(engine, "RefCounted", "Texture3D");

    // static unsigned Texture::CheckMaxLevels(int width, int height, unsigned requestedLevels) | File: ../Graphics/Texture.h
    engine->SetDefaultNamespace("TextureCube");
    engine->RegisterGlobalFunction("uint CheckMaxLevels(int, int, uint)", AS_FUNCTIONPR(TextureCube::CheckMaxLevels, (int, int, unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Texture::CheckMaxLevels(int width, int height, int depth, unsigned requestedLevels) | File: ../Graphics/Texture.h
    engine->SetDefaultNamespace("TextureCube");
    engine->RegisterGlobalFunction("uint CheckMaxLevels(int, int, int, uint)", AS_FUNCTIONPR(TextureCube::CheckMaxLevels, (int, int, int, unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Texture::GetDataType(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetDSVFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetExternalFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static unsigned Texture::GetSRVFormat(unsigned format) | File: ../Graphics/Texture.h
    // Not registered because have @nobind mark
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void TextureCube::RegisterObject(Context* context) | File: ../Graphics/TextureCube.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Texture
    REGISTER_MANUAL_PART_Texture(TextureCube, "TextureCube")
#endif
#ifdef REGISTER_MANUAL_PART_ResourceWithMetadata
    REGISTER_MANUAL_PART_ResourceWithMetadata(TextureCube, "TextureCube")
#endif
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(TextureCube, "TextureCube")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(TextureCube, "TextureCube")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TextureCube, "TextureCube")
#endif
#ifdef REGISTER_MANUAL_PART_GPUObject
    REGISTER_MANUAL_PART_GPUObject(TextureCube, "TextureCube")
#endif
#ifdef REGISTER_MANUAL_PART_TextureCube
    REGISTER_MANUAL_PART_TextureCube(TextureCube, "TextureCube")
#endif
    RegisterSubclass<Texture, TextureCube>(engine, "Texture", "TextureCube");
    RegisterSubclass<ResourceWithMetadata, TextureCube>(engine, "ResourceWithMetadata", "TextureCube");
    RegisterSubclass<Resource, TextureCube>(engine, "Resource", "TextureCube");
    RegisterSubclass<Object, TextureCube>(engine, "Object", "TextureCube");
    RegisterSubclass<RefCounted, TextureCube>(engine, "RefCounted", "TextureCube");

#ifdef URHO3D_URHO2D
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Tile2D, "Tile2D")
#endif
#ifdef REGISTER_MANUAL_PART_Tile2D
    REGISTER_MANUAL_PART_Tile2D(Tile2D, "Tile2D")
#endif
    RegisterSubclass<RefCounted, Tile2D>(engine, "RefCounted", "Tile2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void TileMap2D::RegisterObject(Context* context) | File: ../Urho2D/TileMap2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(TileMap2D, "TileMap2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(TileMap2D, "TileMap2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(TileMap2D, "TileMap2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(TileMap2D, "TileMap2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TileMap2D, "TileMap2D")
#endif
#ifdef REGISTER_MANUAL_PART_TileMap2D
    REGISTER_MANUAL_PART_TileMap2D(TileMap2D, "TileMap2D")
#endif
    RegisterSubclass<Component, TileMap2D>(engine, "Component", "TileMap2D");
    RegisterSubclass<Animatable, TileMap2D>(engine, "Animatable", "TileMap2D");
    RegisterSubclass<Serializable, TileMap2D>(engine, "Serializable", "TileMap2D");
    RegisterSubclass<Object, TileMap2D>(engine, "Object", "TileMap2D");
    RegisterSubclass<RefCounted, TileMap2D>(engine, "RefCounted", "TileMap2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void TileMapLayer2D::RegisterObject(Context* context) | File: ../Urho2D/TileMapLayer2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(TileMapLayer2D, "TileMapLayer2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(TileMapLayer2D, "TileMapLayer2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(TileMapLayer2D, "TileMapLayer2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(TileMapLayer2D, "TileMapLayer2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TileMapLayer2D, "TileMapLayer2D")
#endif
#ifdef REGISTER_MANUAL_PART_TileMapLayer2D
    REGISTER_MANUAL_PART_TileMapLayer2D(TileMapLayer2D, "TileMapLayer2D")
#endif
    RegisterSubclass<Component, TileMapLayer2D>(engine, "Component", "TileMapLayer2D");
    RegisterSubclass<Animatable, TileMapLayer2D>(engine, "Animatable", "TileMapLayer2D");
    RegisterSubclass<Serializable, TileMapLayer2D>(engine, "Serializable", "TileMapLayer2D");
    RegisterSubclass<Object, TileMapLayer2D>(engine, "Object", "TileMapLayer2D");
    RegisterSubclass<RefCounted, TileMapLayer2D>(engine, "RefCounted", "TileMapLayer2D");
#endif

#ifdef URHO3D_URHO2D
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TileMapObject2D, "TileMapObject2D")
#endif
#ifdef REGISTER_MANUAL_PART_TileMapObject2D
    REGISTER_MANUAL_PART_TileMapObject2D(TileMapObject2D, "TileMapObject2D")
#endif
    RegisterSubclass<RefCounted, TileMapObject2D>(engine, "RefCounted", "TileMapObject2D");
#endif

    // static unsigned Time::GetSystemTime() | File: ../Core/Timer.h
    engine->SetDefaultNamespace("Time");
    engine->RegisterGlobalFunction("uint GetSystemTime()", AS_FUNCTIONPR(Time::GetSystemTime, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Time::GetTimeSinceEpoch() | File: ../Core/Timer.h
    engine->SetDefaultNamespace("Time");
    engine->RegisterGlobalFunction("uint GetTimeSinceEpoch()", AS_FUNCTIONPR(Time::GetTimeSinceEpoch, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static String Time::GetTimeStamp() | File: ../Core/Timer.h
    engine->SetDefaultNamespace("Time");
    engine->RegisterGlobalFunction("String GetTimeStamp()", AS_FUNCTIONPR(Time::GetTimeStamp, (), String), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Time::Sleep(unsigned mSec) | File: ../Core/Timer.h
    engine->SetDefaultNamespace("Time");
    engine->RegisterGlobalFunction("void Sleep(uint)", AS_FUNCTIONPR(Time::Sleep, (unsigned), void), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Time, "Time")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Time, "Time")
#endif
#ifdef REGISTER_MANUAL_PART_Time
    REGISTER_MANUAL_PART_Time(Time, "Time")
#endif
    RegisterSubclass<Object, Time>(engine, "Object", "Time");
    RegisterSubclass<RefCounted, Time>(engine, "RefCounted", "Time");

    // Timer& Timer::operator=(const Timer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Timer>(engine, "Timer");
#ifdef REGISTER_MANUAL_PART_Timer
    REGISTER_MANUAL_PART_Timer(Timer, "Timer")
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void TmxFile2D::RegisterObject(Context* context) | File: ../Urho2D/TmxFile2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(TmxFile2D, "TmxFile2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(TmxFile2D, "TmxFile2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TmxFile2D, "TmxFile2D")
#endif
#ifdef REGISTER_MANUAL_PART_TmxFile2D
    REGISTER_MANUAL_PART_TmxFile2D(TmxFile2D, "TmxFile2D")
#endif
    RegisterSubclass<Resource, TmxFile2D>(engine, "Resource", "TmxFile2D");
    RegisterSubclass<Object, TmxFile2D>(engine, "Object", "TmxFile2D");
    RegisterSubclass<RefCounted, TmxFile2D>(engine, "RefCounted", "TmxFile2D");
#endif

#ifdef URHO3D_URHO2D
#ifdef REGISTER_MANUAL_PART_TmxLayer2D
    REGISTER_MANUAL_PART_TmxLayer2D(TmxImageLayer2D, "TmxImageLayer2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TmxImageLayer2D, "TmxImageLayer2D")
#endif
#ifdef REGISTER_MANUAL_PART_TmxImageLayer2D
    REGISTER_MANUAL_PART_TmxImageLayer2D(TmxImageLayer2D, "TmxImageLayer2D")
#endif
    RegisterSubclass<TmxLayer2D, TmxImageLayer2D>(engine, "TmxLayer2D", "TmxImageLayer2D");
    RegisterSubclass<RefCounted, TmxImageLayer2D>(engine, "RefCounted", "TmxImageLayer2D");
#endif

#ifdef URHO3D_URHO2D
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TmxLayer2D, "TmxLayer2D")
#endif
#ifdef REGISTER_MANUAL_PART_TmxLayer2D
    REGISTER_MANUAL_PART_TmxLayer2D(TmxLayer2D, "TmxLayer2D")
#endif
    RegisterSubclass<RefCounted, TmxLayer2D>(engine, "RefCounted", "TmxLayer2D");
#endif

#ifdef URHO3D_URHO2D
#ifdef REGISTER_MANUAL_PART_TmxLayer2D
    REGISTER_MANUAL_PART_TmxLayer2D(TmxObjectGroup2D, "TmxObjectGroup2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TmxObjectGroup2D, "TmxObjectGroup2D")
#endif
#ifdef REGISTER_MANUAL_PART_TmxObjectGroup2D
    REGISTER_MANUAL_PART_TmxObjectGroup2D(TmxObjectGroup2D, "TmxObjectGroup2D")
#endif
    RegisterSubclass<TmxLayer2D, TmxObjectGroup2D>(engine, "TmxLayer2D", "TmxObjectGroup2D");
    RegisterSubclass<RefCounted, TmxObjectGroup2D>(engine, "RefCounted", "TmxObjectGroup2D");
#endif

#ifdef URHO3D_URHO2D
#ifdef REGISTER_MANUAL_PART_TmxLayer2D
    REGISTER_MANUAL_PART_TmxLayer2D(TmxTileLayer2D, "TmxTileLayer2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(TmxTileLayer2D, "TmxTileLayer2D")
#endif
#ifdef REGISTER_MANUAL_PART_TmxTileLayer2D
    REGISTER_MANUAL_PART_TmxTileLayer2D(TmxTileLayer2D, "TmxTileLayer2D")
#endif
    RegisterSubclass<TmxLayer2D, TmxTileLayer2D>(engine, "TmxLayer2D", "TmxTileLayer2D");
    RegisterSubclass<RefCounted, TmxTileLayer2D>(engine, "RefCounted", "TmxTileLayer2D");
#endif

    // float TechniqueEntry::lodDistance_ | File: ../Graphics/Material.h
    engine->RegisterObjectProperty("TechniqueEntry", "float lodDistance", offsetof(TechniqueEntry, lodDistance_));
    // SharedPtr<Technique> TechniqueEntry::original_ | File: ../Graphics/Material.h
    // Error: type "SharedPtr<Technique>" can not automatically bind
    // MaterialQuality TechniqueEntry::qualityLevel_ | File: ../Graphics/Material.h
    engine->RegisterObjectProperty("TechniqueEntry", "MaterialQuality qualityLevel", offsetof(TechniqueEntry, qualityLevel_));
    // SharedPtr<Technique> TechniqueEntry::technique_ | File: ../Graphics/Material.h
    // Error: type "SharedPtr<Technique>" can not automatically bind
    // TechniqueEntry& TechniqueEntry::operator=(const TechniqueEntry&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<TechniqueEntry>(engine, "TechniqueEntry");
#ifdef REGISTER_MANUAL_PART_TechniqueEntry
    REGISTER_MANUAL_PART_TechniqueEntry(TechniqueEntry, "TechniqueEntry")
#endif

    // float TextureFrame::time_ | File: ../Graphics/ParticleEffect.h
    engine->RegisterObjectProperty("TextureFrame", "float time", offsetof(TextureFrame, time_));
    // Rect TextureFrame::uv_ | File: ../Graphics/ParticleEffect.h
    engine->RegisterObjectProperty("TextureFrame", "Rect uv", offsetof(TextureFrame, uv_));
    // TextureFrame& TextureFrame::operator=(const TextureFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<TextureFrame>(engine, "TextureFrame");
    engine->RegisterObjectBehaviour("TextureFrame", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("TextureFrame", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_TextureFrame
    REGISTER_MANUAL_PART_TextureFrame(TextureFrame, "TextureFrame")
#endif

#ifdef URHO3D_URHO2D
    // int TileMapInfo2D::height_ | File: ../Urho2D/TileMapDefs2D.h
    engine->RegisterObjectProperty("TileMapInfo2D", "int height", offsetof(TileMapInfo2D, height_));
    // Orientation2D TileMapInfo2D::orientation_ | File: ../Urho2D/TileMapDefs2D.h
    engine->RegisterObjectProperty("TileMapInfo2D", "Orientation2D orientation", offsetof(TileMapInfo2D, orientation_));
    // float TileMapInfo2D::tileHeight_ | File: ../Urho2D/TileMapDefs2D.h
    engine->RegisterObjectProperty("TileMapInfo2D", "float tileHeight", offsetof(TileMapInfo2D, tileHeight_));
    // float TileMapInfo2D::tileWidth_ | File: ../Urho2D/TileMapDefs2D.h
    engine->RegisterObjectProperty("TileMapInfo2D", "float tileWidth", offsetof(TileMapInfo2D, tileWidth_));
    // int TileMapInfo2D::width_ | File: ../Urho2D/TileMapDefs2D.h
    engine->RegisterObjectProperty("TileMapInfo2D", "int width", offsetof(TileMapInfo2D, width_));
    // TileMapInfo2D& TileMapInfo2D::operator=(const TileMapInfo2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<TileMapInfo2D>(engine, "TileMapInfo2D");
    engine->RegisterObjectBehaviour("TileMapInfo2D", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("TileMapInfo2D", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_TileMapInfo2D
    REGISTER_MANUAL_PART_TileMapInfo2D(TileMapInfo2D, "TileMapInfo2D")
#endif
#endif

}

}
