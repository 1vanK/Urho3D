// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

// bool String::operator<(const String& rhs) const | File: ../Container/Str.h
// bool String::operator>(const String& rhs) const | File: ../Container/Str.h
static int String_Comparison(const String& lhs, const String& rhs)
{
    if (lhs < rhs)
        return -1;

    if (lhs > rhs)
        return 1;

    return 0;
}

// bool StringHash::operator<(const StringHash& rhs) const | File: ../Math/StringHash.h
// bool StringHash::operator>(const StringHash& rhs) const | File: ../Math/StringHash.h
static int StringHash_Comparison(const StringHash& lhs, const StringHash& rhs)
{
    if (lhs < rhs)
        return -1;

    if (lhs > rhs)
        return 1;

    return 0;
}

void ASRegisterGenerated_Members_Sn_Sz(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Sound::RegisterObject(Context* context) | File: ../Audio/Sound.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_ResourceWithMetadata
    REGISTER_MANUAL_PART_ResourceWithMetadata(Sound, "Sound")
#endif
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Sound, "Sound")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Sound, "Sound")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Sound, "Sound")
#endif
#ifdef REGISTER_MANUAL_PART_Sound
    REGISTER_MANUAL_PART_Sound(Sound, "Sound")
#endif
    RegisterSubclass<ResourceWithMetadata, Sound>(engine, "ResourceWithMetadata", "Sound");
    RegisterSubclass<Resource, Sound>(engine, "Resource", "Sound");
    RegisterSubclass<Object, Sound>(engine, "Object", "Sound");
    RegisterSubclass<RefCounted, Sound>(engine, "RefCounted", "Sound");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void SoundListener::RegisterObject(Context* context) | File: ../Audio/SoundListener.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(SoundListener, "SoundListener")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(SoundListener, "SoundListener")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(SoundListener, "SoundListener")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(SoundListener, "SoundListener")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(SoundListener, "SoundListener")
#endif
#ifdef REGISTER_MANUAL_PART_SoundListener
    REGISTER_MANUAL_PART_SoundListener(SoundListener, "SoundListener")
#endif
    RegisterSubclass<Component, SoundListener>(engine, "Component", "SoundListener");
    RegisterSubclass<Animatable, SoundListener>(engine, "Animatable", "SoundListener");
    RegisterSubclass<Serializable, SoundListener>(engine, "Serializable", "SoundListener");
    RegisterSubclass<Object, SoundListener>(engine, "Object", "SoundListener");
    RegisterSubclass<RefCounted, SoundListener>(engine, "RefCounted", "SoundListener");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void SoundSource::RegisterObject(Context* context) | File: ../Audio/SoundSource.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(SoundSource, "SoundSource")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(SoundSource, "SoundSource")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(SoundSource, "SoundSource")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(SoundSource, "SoundSource")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(SoundSource, "SoundSource")
#endif
#ifdef REGISTER_MANUAL_PART_SoundSource
    REGISTER_MANUAL_PART_SoundSource(SoundSource, "SoundSource")
#endif
    RegisterSubclass<Component, SoundSource>(engine, "Component", "SoundSource");
    RegisterSubclass<Animatable, SoundSource>(engine, "Animatable", "SoundSource");
    RegisterSubclass<Serializable, SoundSource>(engine, "Serializable", "SoundSource");
    RegisterSubclass<Object, SoundSource>(engine, "Object", "SoundSource");
    RegisterSubclass<RefCounted, SoundSource>(engine, "RefCounted", "SoundSource");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void SoundSource3D::RegisterObject(Context* context) | File: ../Audio/SoundSource3D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_SoundSource
    REGISTER_MANUAL_PART_SoundSource(SoundSource3D, "SoundSource3D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(SoundSource3D, "SoundSource3D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(SoundSource3D, "SoundSource3D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(SoundSource3D, "SoundSource3D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(SoundSource3D, "SoundSource3D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(SoundSource3D, "SoundSource3D")
#endif
#ifdef REGISTER_MANUAL_PART_SoundSource3D
    REGISTER_MANUAL_PART_SoundSource3D(SoundSource3D, "SoundSource3D")
#endif
    RegisterSubclass<SoundSource, SoundSource3D>(engine, "SoundSource", "SoundSource3D");
    RegisterSubclass<Component, SoundSource3D>(engine, "Component", "SoundSource3D");
    RegisterSubclass<Animatable, SoundSource3D>(engine, "Animatable", "SoundSource3D");
    RegisterSubclass<Serializable, SoundSource3D>(engine, "Serializable", "SoundSource3D");
    RegisterSubclass<Object, SoundSource3D>(engine, "Object", "SoundSource3D");
    RegisterSubclass<RefCounted, SoundSource3D>(engine, "RefCounted", "SoundSource3D");

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(SoundStream, "SoundStream")
#endif
#ifdef REGISTER_MANUAL_PART_SoundStream
    REGISTER_MANUAL_PART_SoundStream(SoundStream, "SoundStream")
#endif
    RegisterSubclass<RefCounted, SoundStream>(engine, "RefCounted", "SoundStream");

    // Vector3 Sphere::center_ | File: ../Math/Sphere.h
    engine->RegisterObjectProperty("Sphere", "Vector3 center", offsetof(Sphere, center_));
    // float Sphere::radius_ | File: ../Math/Sphere.h
    engine->RegisterObjectProperty("Sphere", "float radius", offsetof(Sphere, radius_));
#ifdef REGISTER_MANUAL_PART_Sphere
    REGISTER_MANUAL_PART_Sphere(Sphere, "Sphere")
#endif

#ifdef REGISTER_MANUAL_PART_Spline
    REGISTER_MANUAL_PART_Spline(Spline, "Spline")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void SplinePath::RegisterObject(Context* context) | File: ../Scene/SplinePath.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(SplinePath, "SplinePath")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(SplinePath, "SplinePath")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(SplinePath, "SplinePath")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(SplinePath, "SplinePath")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(SplinePath, "SplinePath")
#endif
#ifdef REGISTER_MANUAL_PART_SplinePath
    REGISTER_MANUAL_PART_SplinePath(SplinePath, "SplinePath")
#endif
    RegisterSubclass<Component, SplinePath>(engine, "Component", "SplinePath");
    RegisterSubclass<Animatable, SplinePath>(engine, "Animatable", "SplinePath");
    RegisterSubclass<Serializable, SplinePath>(engine, "Serializable", "SplinePath");
    RegisterSubclass<Object, SplinePath>(engine, "Object", "SplinePath");
    RegisterSubclass<RefCounted, SplinePath>(engine, "RefCounted", "SplinePath");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Sprite::RegisterObject(Context* context) | File: ../UI/Sprite.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(Sprite, "Sprite")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Sprite, "Sprite")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Sprite, "Sprite")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Sprite, "Sprite")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Sprite, "Sprite")
#endif
#ifdef REGISTER_MANUAL_PART_Sprite
    REGISTER_MANUAL_PART_Sprite(Sprite, "Sprite")
#endif
    RegisterSubclass<UIElement, Sprite>(engine, "UIElement", "Sprite");
    RegisterSubclass<Animatable, Sprite>(engine, "Animatable", "Sprite");
    RegisterSubclass<Serializable, Sprite>(engine, "Serializable", "Sprite");
    RegisterSubclass<Object, Sprite>(engine, "Object", "Sprite");
    RegisterSubclass<RefCounted, Sprite>(engine, "RefCounted", "Sprite");

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static Sprite2D* Sprite2D::LoadFromResourceRef(Object* object, const ResourceRef& value) | File: ../Urho2D/Sprite2D.h
    engine->SetDefaultNamespace("Sprite2D");
    engine->RegisterGlobalFunction("Sprite2D@+ LoadFromResourceRef(Object@+, const ResourceRef&in)", AS_FUNCTIONPR(Sprite2D::LoadFromResourceRef, (Object*, const ResourceRef&), Sprite2D*), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static void Sprite2D::RegisterObject(Context* context) | File: ../Urho2D/Sprite2D.h
    // Not registered because have @nobind mark
    // static ResourceRef Sprite2D::SaveToResourceRef(Sprite2D* sprite) | File: ../Urho2D/Sprite2D.h
    engine->SetDefaultNamespace("Sprite2D");
    engine->RegisterGlobalFunction("ResourceRef SaveToResourceRef(Sprite2D@+)", AS_FUNCTIONPR(Sprite2D::SaveToResourceRef, (Sprite2D*), ResourceRef), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Sprite2D, "Sprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Sprite2D, "Sprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Sprite2D, "Sprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Sprite2D
    REGISTER_MANUAL_PART_Sprite2D(Sprite2D, "Sprite2D")
#endif
    RegisterSubclass<Resource, Sprite2D>(engine, "Resource", "Sprite2D");
    RegisterSubclass<Object, Sprite2D>(engine, "Object", "Sprite2D");
    RegisterSubclass<RefCounted, Sprite2D>(engine, "RefCounted", "Sprite2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void SpriteSheet2D::RegisterObject(Context* context) | File: ../Urho2D/SpriteSheet2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(SpriteSheet2D, "SpriteSheet2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(SpriteSheet2D, "SpriteSheet2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(SpriteSheet2D, "SpriteSheet2D")
#endif
#ifdef REGISTER_MANUAL_PART_SpriteSheet2D
    REGISTER_MANUAL_PART_SpriteSheet2D(SpriteSheet2D, "SpriteSheet2D")
#endif
    RegisterSubclass<Resource, SpriteSheet2D>(engine, "Resource", "SpriteSheet2D");
    RegisterSubclass<Object, SpriteSheet2D>(engine, "Object", "SpriteSheet2D");
    RegisterSubclass<RefCounted, SpriteSheet2D>(engine, "RefCounted", "SpriteSheet2D");
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void StaticModel::RegisterObject(Context* context) | File: ../Graphics/StaticModel.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(StaticModel, "StaticModel")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(StaticModel, "StaticModel")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(StaticModel, "StaticModel")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(StaticModel, "StaticModel")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(StaticModel, "StaticModel")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(StaticModel, "StaticModel")
#endif
#ifdef REGISTER_MANUAL_PART_StaticModel
    REGISTER_MANUAL_PART_StaticModel(StaticModel, "StaticModel")
#endif
    RegisterSubclass<Drawable, StaticModel>(engine, "Drawable", "StaticModel");
    RegisterSubclass<Component, StaticModel>(engine, "Component", "StaticModel");
    RegisterSubclass<Animatable, StaticModel>(engine, "Animatable", "StaticModel");
    RegisterSubclass<Serializable, StaticModel>(engine, "Serializable", "StaticModel");
    RegisterSubclass<Object, StaticModel>(engine, "Object", "StaticModel");
    RegisterSubclass<RefCounted, StaticModel>(engine, "RefCounted", "StaticModel");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void StaticModelGroup::RegisterObject(Context* context) | File: ../Graphics/StaticModelGroup.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_StaticModel
    REGISTER_MANUAL_PART_StaticModel(StaticModelGroup, "StaticModelGroup")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(StaticModelGroup, "StaticModelGroup")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(StaticModelGroup, "StaticModelGroup")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(StaticModelGroup, "StaticModelGroup")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(StaticModelGroup, "StaticModelGroup")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(StaticModelGroup, "StaticModelGroup")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(StaticModelGroup, "StaticModelGroup")
#endif
#ifdef REGISTER_MANUAL_PART_StaticModelGroup
    REGISTER_MANUAL_PART_StaticModelGroup(StaticModelGroup, "StaticModelGroup")
#endif
    RegisterSubclass<StaticModel, StaticModelGroup>(engine, "StaticModel", "StaticModelGroup");
    RegisterSubclass<Drawable, StaticModelGroup>(engine, "Drawable", "StaticModelGroup");
    RegisterSubclass<Component, StaticModelGroup>(engine, "Component", "StaticModelGroup");
    RegisterSubclass<Animatable, StaticModelGroup>(engine, "Animatable", "StaticModelGroup");
    RegisterSubclass<Serializable, StaticModelGroup>(engine, "Serializable", "StaticModelGroup");
    RegisterSubclass<Object, StaticModelGroup>(engine, "Object", "StaticModelGroup");
    RegisterSubclass<RefCounted, StaticModelGroup>(engine, "RefCounted", "StaticModelGroup");

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void StaticSprite2D::RegisterObject(Context* context) | File: ../Urho2D/StaticSprite2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable2D
    REGISTER_MANUAL_PART_Drawable2D(StaticSprite2D, "StaticSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(StaticSprite2D, "StaticSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(StaticSprite2D, "StaticSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(StaticSprite2D, "StaticSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(StaticSprite2D, "StaticSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(StaticSprite2D, "StaticSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(StaticSprite2D, "StaticSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_StaticSprite2D
    REGISTER_MANUAL_PART_StaticSprite2D(StaticSprite2D, "StaticSprite2D")
#endif
    RegisterSubclass<Drawable2D, StaticSprite2D>(engine, "Drawable2D", "StaticSprite2D");
    RegisterSubclass<Drawable, StaticSprite2D>(engine, "Drawable", "StaticSprite2D");
    RegisterSubclass<Component, StaticSprite2D>(engine, "Component", "StaticSprite2D");
    RegisterSubclass<Animatable, StaticSprite2D>(engine, "Animatable", "StaticSprite2D");
    RegisterSubclass<Serializable, StaticSprite2D>(engine, "Serializable", "StaticSprite2D");
    RegisterSubclass<Object, StaticSprite2D>(engine, "Object", "StaticSprite2D");
    RegisterSubclass<RefCounted, StaticSprite2D>(engine, "RefCounted", "StaticSprite2D");
#endif

#ifdef URHO3D_URHO2D
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void StretchableSprite2D::RegisterObject(Context* context) | File: ../Urho2D/StretchableSprite2D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_StaticSprite2D
    REGISTER_MANUAL_PART_StaticSprite2D(StretchableSprite2D, "StretchableSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable2D
    REGISTER_MANUAL_PART_Drawable2D(StretchableSprite2D, "StretchableSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(StretchableSprite2D, "StretchableSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(StretchableSprite2D, "StretchableSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(StretchableSprite2D, "StretchableSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(StretchableSprite2D, "StretchableSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(StretchableSprite2D, "StretchableSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(StretchableSprite2D, "StretchableSprite2D")
#endif
#ifdef REGISTER_MANUAL_PART_StretchableSprite2D
    REGISTER_MANUAL_PART_StretchableSprite2D(StretchableSprite2D, "StretchableSprite2D")
#endif
    RegisterSubclass<StaticSprite2D, StretchableSprite2D>(engine, "StaticSprite2D", "StretchableSprite2D");
    RegisterSubclass<Drawable2D, StretchableSprite2D>(engine, "Drawable2D", "StretchableSprite2D");
    RegisterSubclass<Drawable, StretchableSprite2D>(engine, "Drawable", "StretchableSprite2D");
    RegisterSubclass<Component, StretchableSprite2D>(engine, "Component", "StretchableSprite2D");
    RegisterSubclass<Animatable, StretchableSprite2D>(engine, "Animatable", "StretchableSprite2D");
    RegisterSubclass<Serializable, StretchableSprite2D>(engine, "Serializable", "StretchableSprite2D");
    RegisterSubclass<Object, StretchableSprite2D>(engine, "Object", "StretchableSprite2D");
    RegisterSubclass<RefCounted, StretchableSprite2D>(engine, "RefCounted", "StretchableSprite2D");
#endif

    // const String String::EMPTY | File: ../Container/Str.h
    engine->SetDefaultNamespace("String");
    engine->RegisterGlobalProperty("const String EMPTY", (void*)&String::EMPTY);
    engine->SetDefaultNamespace("");
    // const unsigned String::MIN_CAPACITY | File: ../Container/Str.h
    engine->SetDefaultNamespace("String");
    engine->RegisterGlobalProperty("const uint MIN_CAPACITY", (void*)&String::MIN_CAPACITY);
    engine->SetDefaultNamespace("");
    // const unsigned String::NPOS | File: ../Container/Str.h
    engine->SetDefaultNamespace("String");
    engine->RegisterGlobalProperty("const uint NPOS", (void*)&String::NPOS);
    engine->SetDefaultNamespace("");
    // static int String::Compare(const char* lhs, const char* rhs, bool caseSensitive) | File: ../Container/Str.h
    // Error: type "const char*" can not automatically bind
    // static unsigned String::CStringLength(const char* str) | File: ../Container/Str.h
    // Error: type "const char*" can not automatically bind
    // static unsigned String::DecodeUTF8(const char*& src) | File: ../Container/Str.h
    // Error: type "const char*&" can not automatically bind
    // static void String::EncodeUTF8(char*& dest, unsigned unicodeChar) | File: ../Container/Str.h
    // Error: type "char*&" can not automatically bind
    // static String String::Joined(const Vector<String>& subStrings, const String& glue) | File: ../Container/Str.h
    // Not registered because have @manualbind mark
    // static Vector<String> String::Split(const char* str, char separator, bool keepEmptyStrings=false) | File: ../Container/Str.h
    // Error: type "const char*" can not automatically bind
    // bool String::operator<(const String& rhs) const | File: ../Container/Str.h
    // bool String::operator>(const String& rhs) const | File: ../Container/Str.h
    engine->RegisterObjectMethod("String", "int opCmp(const String&in) const", AS_FUNCTION_OBJFIRST(String_Comparison), AS_CALL_CDECL_OBJFIRST);
#ifdef REGISTER_MANUAL_PART_String
    REGISTER_MANUAL_PART_String(String, "String")
#endif

    // const StringHash StringHash::ZERO | File: ../Math/StringHash.h
    engine->SetDefaultNamespace("StringHash");
    engine->RegisterGlobalProperty("const StringHash ZERO", (void*)&StringHash::ZERO);
    engine->SetDefaultNamespace("");
    // static unsigned StringHash::Calculate(const char* str, unsigned hash=0) | File: ../Math/StringHash.h
    // Error: type "const char*" can not automatically bind
    // static StringHashRegister* StringHash::GetGlobalStringHashRegister() | File: ../Math/StringHash.h
    // Error: type "StringHashRegister*" can not automatically bind
    // bool StringHash::operator<(const StringHash& rhs) const | File: ../Math/StringHash.h
    // bool StringHash::operator>(const StringHash& rhs) const | File: ../Math/StringHash.h
    engine->RegisterObjectMethod("StringHash", "int opCmp(const StringHash&in) const", AS_FUNCTION_OBJFIRST(StringHash_Comparison), AS_CALL_CDECL_OBJFIRST);
#ifdef REGISTER_MANUAL_PART_StringHash
    REGISTER_MANUAL_PART_StringHash(StringHash, "StringHash")
#endif

    // StringHashRegister& StringHashRegister::operator=(const StringHashRegister&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<StringHashRegister>(engine, "StringHashRegister");
#ifdef REGISTER_MANUAL_PART_StringHashRegister
    REGISTER_MANUAL_PART_StringHashRegister(StringHashRegister, "StringHashRegister")
#endif

    // float SourceBatch::distance_ | File: ../Graphics/Drawable.h
    engine->RegisterObjectProperty("SourceBatch", "float distance", offsetof(SourceBatch, distance_));
    // Geometry* SourceBatch::geometry_ | File: ../Graphics/Drawable.h
    // Geometry* can not be registered
    // GeometryType SourceBatch::geometryType_ | File: ../Graphics/Drawable.h
    engine->RegisterObjectProperty("SourceBatch", "GeometryType geometryType", offsetof(SourceBatch, geometryType_));
    // void* SourceBatch::instancingData_ | File: ../Graphics/Drawable.h
    // void* can not be registered
    // SharedPtr<Material> SourceBatch::material_ | File: ../Graphics/Drawable.h
    // Error: type "SharedPtr<Material>" can not automatically bind
    // unsigned SourceBatch::numWorldTransforms_ | File: ../Graphics/Drawable.h
    engine->RegisterObjectProperty("SourceBatch", "uint numWorldTransforms", offsetof(SourceBatch, numWorldTransforms_));
    // const Matrix3x4* SourceBatch::worldTransform_ | File: ../Graphics/Drawable.h
    // const Matrix3x4* can not be registered
#ifdef REGISTER_MANUAL_PART_SourceBatch
    REGISTER_MANUAL_PART_SourceBatch(SourceBatch, "SourceBatch")
#endif

#ifdef URHO3D_URHO2D
    // float SourceBatch2D::distance_ | File: ../Urho2D/Drawable2D.h
    engine->RegisterObjectProperty("SourceBatch2D", "float distance", offsetof(SourceBatch2D, distance_));
    // int SourceBatch2D::drawOrder_ | File: ../Urho2D/Drawable2D.h
    engine->RegisterObjectProperty("SourceBatch2D", "int drawOrder", offsetof(SourceBatch2D, drawOrder_));
    // SharedPtr<Material> SourceBatch2D::material_ | File: ../Urho2D/Drawable2D.h
    // Error: type "SharedPtr<Material>" can not automatically bind
    // WeakPtr<Drawable2D> SourceBatch2D::owner_ | File: ../Urho2D/Drawable2D.h
    // Error: type "WeakPtr<Drawable2D>" can not automatically bind
    // Vector<Vertex2D> SourceBatch2D::vertices_ | File: ../Urho2D/Drawable2D.h
    // Error: type "Vector<Vertex2D>" can not automatically bind
    // SourceBatch2D& SourceBatch2D::operator=(const SourceBatch2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<SourceBatch2D>(engine, "SourceBatch2D");
#ifdef REGISTER_MANUAL_PART_SourceBatch2D
    REGISTER_MANUAL_PART_SourceBatch2D(SourceBatch2D, "SourceBatch2D")
#endif
#endif

    // Vector3 StaticModelGeometryData::center_ | File: ../Graphics/StaticModel.h
    engine->RegisterObjectProperty("StaticModelGeometryData", "Vector3 center", offsetof(StaticModelGeometryData, center_));
    // unsigned StaticModelGeometryData::lodLevel_ | File: ../Graphics/StaticModel.h
    engine->RegisterObjectProperty("StaticModelGeometryData", "uint lodLevel", offsetof(StaticModelGeometryData, lodLevel_));
    // StaticModelGeometryData& StaticModelGeometryData::operator=(const StaticModelGeometryData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<StaticModelGeometryData>(engine, "StaticModelGeometryData");
#ifdef REGISTER_MANUAL_PART_StaticModelGeometryData
    REGISTER_MANUAL_PART_StaticModelGeometryData(StaticModelGeometryData, "StaticModelGeometryData")
#endif

    // bool StoredLogMessage::error_ | File: ../IO/Log.h
    engine->RegisterObjectProperty("StoredLogMessage", "bool error", offsetof(StoredLogMessage, error_));
    // int StoredLogMessage::level_ | File: ../IO/Log.h
    engine->RegisterObjectProperty("StoredLogMessage", "int level", offsetof(StoredLogMessage, level_));
    // String StoredLogMessage::message_ | File: ../IO/Log.h
    engine->RegisterObjectProperty("StoredLogMessage", "String message", offsetof(StoredLogMessage, message_));
    // StoredLogMessage& StoredLogMessage::operator=(const StoredLogMessage&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<StoredLogMessage>(engine, "StoredLogMessage");
#ifdef REGISTER_MANUAL_PART_StoredLogMessage
    REGISTER_MANUAL_PART_StoredLogMessage(StoredLogMessage, "StoredLogMessage")
#endif

}

}
