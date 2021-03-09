// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// struct BackgroundLoadItem | File: ../Resource/BackgroundLoader.h
void CollectMembers_BackgroundLoadItem(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // SharedPtr<Resource> BackgroundLoadItem::resource_
    // Error: type "SharedPtr<Resource>" can not automatically bind
    // HashSet<Pair<StringHash, StringHash>> BackgroundLoadItem::dependencies_
    // Error: type "HashSet<Pair<StringHash, StringHash>>" can not automatically bind
    // HashSet<Pair<StringHash, StringHash>> BackgroundLoadItem::dependents_
    // Error: type "HashSet<Pair<StringHash, StringHash>>" can not automatically bind

    fields.Push(RegisterObjectPropertyArgs("bool BackgroundLoadItem::sendEventOnFailure_", "bool sendEventOnFailure", offsetof(BackgroundLoadItem, sendEventOnFailure_)));
}

// class BackgroundLoader | File: ../Resource/BackgroundLoader.h
void CollectMembers_BackgroundLoader(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("void BackgroundLoader::ThreadFunction() override", "void ThreadFunction()", AS_METHODPR(BackgroundLoader, ThreadFunction, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool BackgroundLoader::QueueResource(StringHash type, const String& name, bool sendEventOnFailure, Resource* caller)", "bool QueueResource(StringHash, const String&in, bool, Resource@+)", AS_METHODPR(BackgroundLoader, QueueResource, (StringHash, const String&, bool, Resource*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BackgroundLoader::WaitForResource(StringHash type, StringHash nameHash)", "void WaitForResource(StringHash, StringHash)", AS_METHODPR(BackgroundLoader, WaitForResource, (StringHash, StringHash), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BackgroundLoader::FinishResources(int maxMs)", "void FinishResources(int)", AS_METHODPR(BackgroundLoader, FinishResources, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned BackgroundLoader::GetNumQueuedResources() const", "uint GetNumQueuedResources() const", AS_METHODPR(BackgroundLoader, GetNumQueuedResources, () const, unsigned), AS_CALL_THISCALL));
}

// struct CompressedLevel | File: ../Resource/Image.h
void CollectMembers_CompressedLevel(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // bool CompressedLevel::Decompress(unsigned char* dest) const
    // Error: type "unsigned char*" can not automatically bind

    // unsigned char* CompressedLevel::data_
    // Not registered because pointer

    fields.Push(RegisterObjectPropertyArgs("CompressedFormat CompressedLevel::format_", "CompressedFormat format", offsetof(CompressedLevel, format_)));
    fields.Push(RegisterObjectPropertyArgs("int CompressedLevel::width_", "int width", offsetof(CompressedLevel, width_)));
    fields.Push(RegisterObjectPropertyArgs("int CompressedLevel::height_", "int height", offsetof(CompressedLevel, height_)));
    fields.Push(RegisterObjectPropertyArgs("int CompressedLevel::depth_", "int depth", offsetof(CompressedLevel, depth_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned CompressedLevel::blockSize_", "uint blockSize", offsetof(CompressedLevel, blockSize_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned CompressedLevel::dataSize_", "uint dataSize", offsetof(CompressedLevel, dataSize_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned CompressedLevel::rowSize_", "uint rowSize", offsetof(CompressedLevel, rowSize_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned CompressedLevel::rows_", "uint rows", offsetof(CompressedLevel, rows_)));
}

// SharedPtr<Image> Image::GetNextLevel() const
// SharedPtr<Image> Image::GetNextLevel() const | File: ../Resource/Image.h
static Image* Image_GetNextLevel_void(Image* ptr)
{
    SharedPtr<Image> result = ptr->GetNextLevel();
    return result.Detach();
}


// SharedPtr<Image> Image::GetNextSibling() const
// SharedPtr<Image> Image::GetNextSibling() const | File: ../Resource/Image.h
static Image* Image_GetNextSibling_void(Image* ptr)
{
    SharedPtr<Image> result = ptr->GetNextSibling();
    return result.Detach();
}


// SharedPtr<Image> Image::ConvertToRGBA() const
// SharedPtr<Image> Image::ConvertToRGBA() const | File: ../Resource/Image.h
static Image* Image_ConvertToRGBA_void(Image* ptr)
{
    SharedPtr<Image> result = ptr->ConvertToRGBA();
    return result.Detach();
}


// SharedPtr<Image> Image::GetDecompressedImage() const
// SharedPtr<Image> Image::GetDecompressedImage() const | File: ../Resource/Image.h
static Image* Image_GetDecompressedImage_void(Image* ptr)
{
    SharedPtr<Image> result = ptr->GetDecompressedImage();
    return result.Detach();
}


// class Image | File: ../Resource/Image.h
void CollectMembers_Image(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Resource(methods, fields, staticFields);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(methods, "virtual bool Resource::Save(Serializer& dest) const");
    Remove(methods, "virtual bool Resource::SaveFile(const String& fileName) const");

    // unsigned char* Image::GetData() const
    // Error: type "unsigned char*" can not automatically bind
    // void Image::GetLevels(PODVector<Image*>& levels)
    // Error: type "PODVector<Image*>&" can not automatically bind
    // void Image::GetLevels(PODVector<const Image*>& levels) const
    // Error: type "PODVector<const Image*>&" can not automatically bind
    // SDL_Surface* Image::GetSDLSurface(const IntRect& rect=IntRect::ZERO) const
    // Error: type "SDL_Surface*" can not automatically bind
    // void Image::SetData(const unsigned char* pixelData)
    // Error: type "const unsigned char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool Image::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Image, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(Image, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SaveFile(const String& fileName) const override", "bool SaveFile(const String&in) const", AS_METHODPR(Image, SaveFile, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SaveFile(const String& fileName) const override", "bool Save(const String&in) const", AS_METHODPR(Image, SaveFile, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SetSize(int width, int height, unsigned components)", "bool SetSize(int, int, uint)", AS_METHODPR(Image, SetSize, (int, int, unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SetSize(int width, int height, int depth, unsigned components)", "bool SetSize(int, int, int, uint)", AS_METHODPR(Image, SetSize, (int, int, int, unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Image::SetPixel(int x, int y, const Color& color)", "void SetPixel(int, int, const Color&in)", AS_METHODPR(Image, SetPixel, (int, int, const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Image::SetPixel(int x, int y, int z, const Color& color)", "void SetPixel(int, int, int, const Color&in)", AS_METHODPR(Image, SetPixel, (int, int, int, const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Image::SetPixelInt(int x, int y, unsigned uintColor)", "void SetPixelInt(int, int, uint)", AS_METHODPR(Image, SetPixelInt, (int, int, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Image::SetPixelInt(int x, int y, int z, unsigned uintColor)", "void SetPixelInt(int, int, int, uint)", AS_METHODPR(Image, SetPixelInt, (int, int, int, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::LoadColorLUT(Deserializer& source)", "bool LoadColorLUT(Deserializer&)", AS_METHODPR(Image, LoadColorLUT, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::FlipHorizontal()", "bool FlipHorizontal()", AS_METHODPR(Image, FlipHorizontal, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::FlipVertical()", "bool FlipVertical()", AS_METHODPR(Image, FlipVertical, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::Resize(int width, int height)", "bool Resize(int, int)", AS_METHODPR(Image, Resize, (int, int), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Image::Clear(const Color& color)", "void Clear(const Color&in)", AS_METHODPR(Image, Clear, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Image::ClearInt(unsigned uintColor)", "void ClearInt(uint)", AS_METHODPR(Image, ClearInt, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SaveBMP(const String& fileName) const", "bool SaveBMP(const String&in) const", AS_METHODPR(Image, SaveBMP, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SavePNG(const String& fileName) const", "bool SavePNG(const String&in) const", AS_METHODPR(Image, SavePNG, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SaveTGA(const String& fileName) const", "bool SaveTGA(const String&in) const", AS_METHODPR(Image, SaveTGA, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SaveJPG(const String& fileName, int quality) const", "bool SaveJPG(const String&in, int) const", AS_METHODPR(Image, SaveJPG, (const String&, int) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SaveDDS(const String& fileName) const", "bool SaveDDS(const String&in) const", AS_METHODPR(Image, SaveDDS, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SaveWEBP(const String& fileName, float compression=0.0f) const", "bool SaveWEBP(const String&in, float = 0.0f) const", AS_METHODPR(Image, SaveWEBP, (const String&, float) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::IsCubemap() const", "bool IsCubemap() const", AS_METHODPR(Image, IsCubemap, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::IsCubemap() const", "bool get_cubemap() const", AS_METHODPR(Image, IsCubemap, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::IsArray() const", "bool IsArray() const", AS_METHODPR(Image, IsArray, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::IsArray() const", "bool get_array() const", AS_METHODPR(Image, IsArray, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::IsSRGB() const", "bool IsSRGB() const", AS_METHODPR(Image, IsSRGB, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::IsSRGB() const", "bool get_sRGB() const", AS_METHODPR(Image, IsSRGB, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Image::GetPixel(int x, int y) const", "Color GetPixel(int, int) const", AS_METHODPR(Image, GetPixel, (int, int) const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Image::GetPixel(int x, int y, int z) const", "Color GetPixel(int, int, int) const", AS_METHODPR(Image, GetPixel, (int, int, int) const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Image::GetPixelInt(int x, int y) const", "uint GetPixelInt(int, int) const", AS_METHODPR(Image, GetPixelInt, (int, int) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Image::GetPixelInt(int x, int y, int z) const", "uint GetPixelInt(int, int, int) const", AS_METHODPR(Image, GetPixelInt, (int, int, int) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Image::GetPixelBilinear(float x, float y) const", "Color GetPixelBilinear(float, float) const", AS_METHODPR(Image, GetPixelBilinear, (float, float) const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Image::GetPixelTrilinear(float x, float y, float z) const", "Color GetPixelTrilinear(float, float, float) const", AS_METHODPR(Image, GetPixelTrilinear, (float, float, float) const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Image::GetWidth() const", "int GetWidth() const", AS_METHODPR(Image, GetWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Image::GetWidth() const", "int get_width() const", AS_METHODPR(Image, GetWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Image::GetHeight() const", "int GetHeight() const", AS_METHODPR(Image, GetHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Image::GetHeight() const", "int get_height() const", AS_METHODPR(Image, GetHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Image::GetDepth() const", "int GetDepth() const", AS_METHODPR(Image, GetDepth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Image::GetDepth() const", "int get_depth() const", AS_METHODPR(Image, GetDepth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Image::GetComponents() const", "uint GetComponents() const", AS_METHODPR(Image, GetComponents, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Image::GetComponents() const", "uint get_components() const", AS_METHODPR(Image, GetComponents, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::IsCompressed() const", "bool IsCompressed() const", AS_METHODPR(Image, IsCompressed, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::IsCompressed() const", "bool get_compressed() const", AS_METHODPR(Image, IsCompressed, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("CompressedFormat Image::GetCompressedFormat() const", "CompressedFormat GetCompressedFormat() const", AS_METHODPR(Image, GetCompressedFormat, () const, CompressedFormat), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("CompressedFormat Image::GetCompressedFormat() const", "CompressedFormat get_compressedFormat() const", AS_METHODPR(Image, GetCompressedFormat, () const, CompressedFormat), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Image::GetNumCompressedLevels() const", "uint GetNumCompressedLevels() const", AS_METHODPR(Image, GetNumCompressedLevels, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Image::GetNumCompressedLevels() const", "uint get_numCompressedLevels() const", AS_METHODPR(Image, GetNumCompressedLevels, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SharedPtr<Image> Image::GetNextLevel() const", "Image@+ GetNextLevel() const", AS_FUNCTION_OBJFIRST(Image_GetNextLevel_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("SharedPtr<Image> Image::GetNextSibling() const", "Image@+ GetNextSibling() const", AS_FUNCTION_OBJFIRST(Image_GetNextSibling_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("SharedPtr<Image> Image::ConvertToRGBA() const", "Image@+ ConvertToRGBA() const", AS_FUNCTION_OBJFIRST(Image_ConvertToRGBA_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("CompressedLevel Image::GetCompressedLevel(unsigned index) const", "CompressedLevel GetCompressedLevel(uint) const", AS_METHODPR(Image, GetCompressedLevel, (unsigned) const, CompressedLevel), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SharedPtr<Image> Image::GetDecompressedImage() const", "Image@+ GetDecompressedImage() const", AS_FUNCTION_OBJFIRST(Image_GetDecompressedImage_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("Image* Image::GetSubimage(const IntRect& rect) const", "Image@+ GetSubimage(const IntRect&in) const", AS_METHODPR(Image, GetSubimage, (const IntRect&) const, Image*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Image::PrecalculateLevels()", "void PrecalculateLevels()", AS_METHODPR(Image, PrecalculateLevels, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::HasAlphaChannel() const", "bool HasAlphaChannel() const", AS_METHODPR(Image, HasAlphaChannel, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::HasAlphaChannel() const", "bool get_hasAlphaChannel() const", AS_METHODPR(Image, HasAlphaChannel, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Image::SetSubimage(const Image* image, const IntRect& rect)", "bool SetSubimage(Image@+, const IntRect&in)", AS_METHODPR(Image, SetSubimage, (const Image*, const IntRect&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Image::CleanupLevels()", "void CleanupLevels()", AS_METHODPR(Image, CleanupLevels, (), void), AS_CALL_THISCALL));
}

// class JSONFile | File: ../Resource/JSONFile.h
void CollectMembers_JSONFile(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Resource(methods, fields, staticFields);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(methods, "virtual bool Resource::Save(Serializer& dest) const");

    methods.Push(RegisterObjectMethodArgs("bool JSONFile::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(JSONFile, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONFile::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(JSONFile, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONFile::Save(Serializer& dest, const String& indendation) const", "bool Save(Serializer&, const String&in) const", AS_METHODPR(JSONFile, Save, (Serializer&, const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONFile::FromString(const String& source)", "bool FromString(const String&in)", AS_METHODPR(JSONFile, FromString, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String JSONFile::ToString(const String& indendation=\"\t\") const", "String ToString(const String&in = \"\t\") const", AS_METHODPR(JSONFile, ToString, (const String&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONFile::GetRoot()", "JSONValue& GetRoot()", AS_METHODPR(JSONFile, GetRoot, (), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONFile::GetRoot()", "JSONValue& get_root()", AS_METHODPR(JSONFile, GetRoot, (), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const JSONValue& JSONFile::GetRoot() const", "const JSONValue& GetRoot() const", AS_METHODPR(JSONFile, GetRoot, () const, const JSONValue&), AS_CALL_THISCALL));
}

// void JSONValue::SetVariant(const Variant& variant, Context* context=nullptr)
// void JSONValue::SetVariant(const Variant& variant, Context* context=nullptr) | File: ../Resource/JSONValue.h
static void JSONValue_SetVariant_Variant_Context(JSONValue* ptr, const Variant& variant)
{
    Context* context = GetScriptContext();
    ptr->SetVariant(variant, context);
}


// void JSONValue::SetVariantValue(const Variant& variant, Context* context=nullptr)
// void JSONValue::SetVariantValue(const Variant& variant, Context* context=nullptr) | File: ../Resource/JSONValue.h
static void JSONValue_SetVariantValue_Variant_Context(JSONValue* ptr, const Variant& variant)
{
    Context* context = GetScriptContext();
    ptr->SetVariantValue(variant, context);
}


// void JSONValue::SetVariantMap(const VariantMap& variantMap, Context* context=nullptr)
// void JSONValue::SetVariantMap(const VariantMap& variantMap, Context* context=nullptr) | File: ../Resource/JSONValue.h
static void JSONValue_SetVariantMap_VariantMap_Context(JSONValue* ptr, const VariantMap& variantMap)
{
    Context* context = GetScriptContext();
    ptr->SetVariantMap(variantMap, context);
}


// class JSONValue | File: ../Resource/JSONValue.h
void CollectMembers_JSONValue(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // ConstJSONObjectIterator JSONValue::Begin() const
    // Error: type "ConstJSONObjectIterator" can not automatically bind
    // JSONObjectIterator JSONValue::Begin()
    // Error: type "JSONObjectIterator" can not automatically bind
    // ConstJSONObjectIterator JSONValue::End() const
    // Error: type "ConstJSONObjectIterator" can not automatically bind
    // JSONObjectIterator JSONValue::End()
    // Error: type "JSONObjectIterator" can not automatically bind
    // const JSONArray& JSONValue::GetArray() const
    // Error: type "const JSONArray&" can not automatically bind
    // const char* JSONValue::GetCString(const char* defaultValue="") const
    // Error: type "const char*" can not automatically bind
    // const JSONObject& JSONValue::GetObject() const
    // Error: type "const JSONObject&" can not automatically bind
    // VariantVector JSONValue::GetVariantVector() const
    // Error: type "VariantVector" can not automatically bind
    // void JSONValue::SetVariantVector(const VariantVector& variantVector, Context* context=nullptr)
    // Error: type "const VariantVector&" can not automatically bind
    // JSONValue& JSONValue::operator=(const JSONArray& rhs)
    // Error: type "const JSONArray&" can not automatically bind
    // JSONValue& JSONValue::operator=(const JSONObject& rhs)
    // Error: type "const JSONObject&" can not automatically bind
    // JSONValue& JSONValue::operator=(const char* rhs)
    // Error: type "const char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONValue::operator=(bool rhs)", "JSONValue& opAssign(bool)", AS_METHODPR(JSONValue, operator=, (bool), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONValue::operator=(int rhs)", "JSONValue& opAssign(int)", AS_METHODPR(JSONValue, operator=, (int), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONValue::operator=(unsigned rhs)", "JSONValue& opAssign(uint)", AS_METHODPR(JSONValue, operator=, (unsigned), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONValue::operator=(float rhs)", "JSONValue& opAssign(float)", AS_METHODPR(JSONValue, operator=, (float), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONValue::operator=(double rhs)", "JSONValue& opAssign(double)", AS_METHODPR(JSONValue, operator=, (double), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONValue::operator=(const String& rhs)", "JSONValue& opAssign(const String&in)", AS_METHODPR(JSONValue, operator=, (const String&), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONValue::operator=(const JSONValue& rhs)", "JSONValue& opAssign(const JSONValue&in)", AS_METHODPR(JSONValue, operator=, (const JSONValue&), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValueType JSONValue::GetValueType() const", "JSONValueType GetValueType() const", AS_METHODPR(JSONValue, GetValueType, () const, JSONValueType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValueType JSONValue::GetValueType() const", "JSONValueType get_valueType() const", AS_METHODPR(JSONValue, GetValueType, () const, JSONValueType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONNumberType JSONValue::GetNumberType() const", "JSONNumberType GetNumberType() const", AS_METHODPR(JSONValue, GetNumberType, () const, JSONNumberType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONNumberType JSONValue::GetNumberType() const", "JSONNumberType get_numberType() const", AS_METHODPR(JSONValue, GetNumberType, () const, JSONNumberType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String JSONValue::GetValueTypeName() const", "String GetValueTypeName() const", AS_METHODPR(JSONValue, GetValueTypeName, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String JSONValue::GetValueTypeName() const", "String get_valueTypeName() const", AS_METHODPR(JSONValue, GetValueTypeName, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String JSONValue::GetNumberTypeName() const", "String GetNumberTypeName() const", AS_METHODPR(JSONValue, GetNumberTypeName, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String JSONValue::GetNumberTypeName() const", "String get_numberTypeName() const", AS_METHODPR(JSONValue, GetNumberTypeName, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsNull() const", "bool IsNull() const", AS_METHODPR(JSONValue, IsNull, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsNull() const", "bool get_isNull() const", AS_METHODPR(JSONValue, IsNull, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsBool() const", "bool IsBool() const", AS_METHODPR(JSONValue, IsBool, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsBool() const", "bool get_isBool() const", AS_METHODPR(JSONValue, IsBool, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsNumber() const", "bool IsNumber() const", AS_METHODPR(JSONValue, IsNumber, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsNumber() const", "bool get_isNumber() const", AS_METHODPR(JSONValue, IsNumber, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsString() const", "bool IsString() const", AS_METHODPR(JSONValue, IsString, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsString() const", "bool get_isString() const", AS_METHODPR(JSONValue, IsString, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsArray() const", "bool IsArray() const", AS_METHODPR(JSONValue, IsArray, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsArray() const", "bool get_isArray() const", AS_METHODPR(JSONValue, IsArray, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsObject() const", "bool IsObject() const", AS_METHODPR(JSONValue, IsObject, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::IsObject() const", "bool get_isObject() const", AS_METHODPR(JSONValue, IsObject, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::GetBool(bool defaultValue=false) const", "bool GetBool(bool = false) const", AS_METHODPR(JSONValue, GetBool, (bool) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int JSONValue::GetInt(int defaultValue=0) const", "int GetInt(int = 0) const", AS_METHODPR(JSONValue, GetInt, (int) const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned JSONValue::GetUInt(unsigned defaultValue=0) const", "uint GetUInt(uint = 0) const", AS_METHODPR(JSONValue, GetUInt, (unsigned) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float JSONValue::GetFloat(float defaultValue=0.0f) const", "float GetFloat(float = 0.0f) const", AS_METHODPR(JSONValue, GetFloat, (float) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("double JSONValue::GetDouble(double defaultValue=0.0) const", "double GetDouble(double = 0.0) const", AS_METHODPR(JSONValue, GetDouble, (double) const, double), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& JSONValue::GetString(const String& defaultValue=String::EMPTY) const", "const String& GetString(const String&in = String::EMPTY) const", AS_METHODPR(JSONValue, GetString, (const String&) const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONValue::operator[](unsigned index)", "JSONValue& opIndex(uint)", AS_METHODPR(JSONValue, operator[], (unsigned), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const JSONValue& JSONValue::operator[](unsigned index) const", "const JSONValue& opIndex(uint) const", AS_METHODPR(JSONValue, operator[], (unsigned) const, const JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::Push(const JSONValue& value)", "void Push(const JSONValue&in)", AS_METHODPR(JSONValue, Push, (const JSONValue&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::Pop()", "void Pop()", AS_METHODPR(JSONValue, Pop, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::Insert(unsigned pos, const JSONValue& value)", "void Insert(uint, const JSONValue&in)", AS_METHODPR(JSONValue, Insert, (unsigned, const JSONValue&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::Erase(unsigned pos, unsigned length=1)", "void Erase(uint, uint = 1)", AS_METHODPR(JSONValue, Erase, (unsigned, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::Resize(unsigned newSize)", "void Resize(uint)", AS_METHODPR(JSONValue, Resize, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned JSONValue::Size() const", "uint Size() const", AS_METHODPR(JSONValue, Size, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned JSONValue::Size() const", "uint get_size() const", AS_METHODPR(JSONValue, Size, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JSONValue& JSONValue::operator[](const String& key)", "JSONValue& opIndex(const String&in)", AS_METHODPR(JSONValue, operator[], (const String&), JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const JSONValue& JSONValue::operator[](const String& key) const", "const JSONValue& opIndex(const String&in) const", AS_METHODPR(JSONValue, operator[], (const String&) const, const JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::Set(const String& key, const JSONValue& value)", "void Set(const String&in, const JSONValue&in)", AS_METHODPR(JSONValue, Set, (const String&, const JSONValue&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const JSONValue& JSONValue::Get(const String& key) const", "const JSONValue& Get(const String&in) const", AS_METHODPR(JSONValue, Get, (const String&) const, const JSONValue&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::Erase(const String& key)", "bool Erase(const String&in)", AS_METHODPR(JSONValue, Erase, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JSONValue::Contains(const String& key) const", "bool Contains(const String&in) const", AS_METHODPR(JSONValue, Contains, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::Clear()", "void Clear()", AS_METHODPR(JSONValue, Clear, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::SetType(JSONValueType valueType, JSONNumberType numberType=JSONNT_NAN)", "void SetType(JSONValueType, JSONNumberType = JSONNT_NAN)", AS_METHODPR(JSONValue, SetType, (JSONValueType, JSONNumberType), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::SetVariant(const Variant& variant, Context* context=nullptr)", "void SetVariant(const Variant&in)", AS_FUNCTION_OBJFIRST(JSONValue_SetVariant_Variant_Context), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("Variant JSONValue::GetVariant() const", "Variant GetVariant() const", AS_METHODPR(JSONValue, GetVariant, () const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::SetVariantValue(const Variant& variant, Context* context=nullptr)", "void SetVariantValue(const Variant&in)", AS_FUNCTION_OBJFIRST(JSONValue_SetVariantValue_Variant_Context), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("Variant JSONValue::GetVariantValue(VariantType type) const", "Variant GetVariantValue(VariantType) const", AS_METHODPR(JSONValue, GetVariantValue, (VariantType) const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JSONValue::SetVariantMap(const VariantMap& variantMap, Context* context=nullptr)", "void SetVariantMap(const VariantMap&in)", AS_FUNCTION_OBJFIRST(JSONValue_SetVariantMap_VariantMap_Context), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("VariantMap JSONValue::GetVariantMap() const", "VariantMap GetVariantMap() const", AS_METHODPR(JSONValue, GetVariantMap, () const, VariantMap), AS_CALL_THISCALL));

    // bool JSONValue::boolValue_
    // Not registered because have @nobind mark
    // double JSONValue::numberValue_
    // Not registered because have @nobind mark
    // String* JSONValue::stringValue_
    // Not registered because have @nobind mark
    // JSONArray* JSONValue::arrayValue_
    // Not registered because have @nobind mark
    // JSONObject* JSONValue::objectValue_
    // Not registered because have @nobind mark

    // const JSONArray JSONValue::emptyArray
    // Error: type "const JSONArray" can not automatically bind
    // const JSONObject JSONValue::emptyObject
    // Error: type "const JSONObject" can not automatically bind

    staticFields.Push(RegisterGlobalPropertyArgs("const JSONValue JSONValue::EMPTY", "const JSONValue EMPTY", (void*)&JSONValue::EMPTY));
}

// class Localization | File: ../Resource/Localization.h
void CollectMembers_Localization(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Object(methods, fields, staticFields);

    methods.Push(RegisterObjectMethodArgs("int Localization::GetNumLanguages() const", "int GetNumLanguages() const", AS_METHODPR(Localization, GetNumLanguages, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Localization::GetNumLanguages() const", "int get_numLanguages() const", AS_METHODPR(Localization, GetNumLanguages, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Localization::GetLanguageIndex() const", "int GetLanguageIndex() const", AS_METHODPR(Localization, GetLanguageIndex, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Localization::GetLanguageIndex() const", "int get_languageIndex() const", AS_METHODPR(Localization, GetLanguageIndex, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Localization::GetLanguageIndex(const String& language)", "int GetLanguageIndex(const String&in)", AS_METHODPR(Localization, GetLanguageIndex, (const String&), int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Localization::GetLanguage()", "String GetLanguage()", AS_METHODPR(Localization, GetLanguage, (), String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Localization::GetLanguage()", "String get_language()", AS_METHODPR(Localization, GetLanguage, (), String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Localization::GetLanguage(int index)", "String GetLanguage(int)", AS_METHODPR(Localization, GetLanguage, (int), String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Localization::SetLanguage(int index)", "void SetLanguage(int)", AS_METHODPR(Localization, SetLanguage, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Localization::SetLanguage(const String& language)", "void SetLanguage(const String&in)", AS_METHODPR(Localization, SetLanguage, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Localization::Get(const String& id)", "String Get(const String&in)", AS_METHODPR(Localization, Get, (const String&), String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Localization::Reset()", "void Reset()", AS_METHODPR(Localization, Reset, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Localization::LoadJSONFile(const String& name, const String& language=String::EMPTY)", "void LoadJSONFile(const String&in, const String&in = String::EMPTY)", AS_METHODPR(Localization, LoadJSONFile, (const String&, const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Localization::LoadMultipleLanguageJSON(const JSONValue& source)", "void LoadMultipleLanguageJSON(const JSONValue&in)", AS_METHODPR(Localization, LoadMultipleLanguageJSON, (const JSONValue&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Localization::LoadSingleLanguageJSON(const JSONValue& source, const String& language=String::EMPTY)", "void LoadSingleLanguageJSON(const JSONValue&in, const String&in = String::EMPTY)", AS_METHODPR(Localization, LoadSingleLanguageJSON, (const JSONValue&, const String&), void), AS_CALL_THISCALL));
}

// class Resource | File: ../Resource/Resource.h
void CollectMembers_Resource(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Object(methods, fields, staticFields);

    methods.Push(RegisterObjectMethodArgs("bool Resource::Load(Deserializer& source)", "bool Load(Deserializer&)", AS_METHODPR(Resource, Load, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Resource::BeginLoad(Deserializer& source)", "bool BeginLoad(Deserializer&)", AS_METHODPR(Resource, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Resource::EndLoad()", "bool EndLoad()", AS_METHODPR(Resource, EndLoad, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Resource::Save(Serializer& dest) const", "bool Save(Serializer&) const", AS_METHODPR(Resource, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Resource::LoadFile(const String& fileName)", "bool LoadFile(const String&in)", AS_METHODPR(Resource, LoadFile, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Resource::LoadFile(const String& fileName)", "bool Load(const String&in)", AS_METHODPR(Resource, LoadFile, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Resource::SaveFile(const String& fileName) const", "bool SaveFile(const String&in) const", AS_METHODPR(Resource, SaveFile, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool Resource::SaveFile(const String& fileName) const", "bool Save(const String&in) const", AS_METHODPR(Resource, SaveFile, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Resource::SetName(const String& name)", "void SetName(const String&in)", AS_METHODPR(Resource, SetName, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Resource::SetName(const String& name)", "void set_name(const String&in)", AS_METHODPR(Resource, SetName, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Resource::SetMemoryUse(unsigned size)", "void SetMemoryUse(uint)", AS_METHODPR(Resource, SetMemoryUse, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Resource::ResetUseTimer()", "void ResetUseTimer()", AS_METHODPR(Resource, ResetUseTimer, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Resource::SetAsyncLoadState(AsyncLoadState newState)", "void SetAsyncLoadState(AsyncLoadState)", AS_METHODPR(Resource, SetAsyncLoadState, (AsyncLoadState), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Resource::GetName() const", "const String& GetName() const", AS_METHODPR(Resource, GetName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Resource::GetName() const", "const String& get_name() const", AS_METHODPR(Resource, GetName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("StringHash Resource::GetNameHash() const", "StringHash GetNameHash() const", AS_METHODPR(Resource, GetNameHash, () const, StringHash), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Resource::GetMemoryUse() const", "uint GetMemoryUse() const", AS_METHODPR(Resource, GetMemoryUse, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Resource::GetMemoryUse() const", "uint get_memoryUse() const", AS_METHODPR(Resource, GetMemoryUse, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Resource::GetUseTimer()", "uint GetUseTimer()", AS_METHODPR(Resource, GetUseTimer, (), unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Resource::GetUseTimer()", "uint get_useTimer()", AS_METHODPR(Resource, GetUseTimer, (), unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("AsyncLoadState Resource::GetAsyncLoadState() const", "AsyncLoadState GetAsyncLoadState() const", AS_METHODPR(Resource, GetAsyncLoadState, () const, AsyncLoadState), AS_CALL_THISCALL));
}

// SharedPtr<File> ResourceCache::GetFile(const String& name, bool sendEventOnFailure=true)
// SharedPtr<File> ResourceCache::GetFile(const String& name, bool sendEventOnFailure=true) | File: ../Resource/ResourceCache.h
static File* ResourceCache_GetFile_String_bool(ResourceCache* ptr, const String& name, bool sendEventOnFailure)
{
    SharedPtr<File> result = ptr->GetFile(name, sendEventOnFailure);
    return result.Detach();
}


// SharedPtr<Resource> ResourceCache::GetTempResource(StringHash type, const String& name, bool sendEventOnFailure=true)
// SharedPtr<Resource> ResourceCache::GetTempResource(StringHash type, const String& name, bool sendEventOnFailure=true) | File: ../Resource/ResourceCache.h
static Resource* ResourceCache_GetTempResource_StringHash_String_bool(ResourceCache* ptr, StringHash type, const String& name, bool sendEventOnFailure)
{
    SharedPtr<Resource> result = ptr->GetTempResource(type, name, sendEventOnFailure);
    return result.Detach();
}


// const Vector<String>& ResourceCache::GetResourceDirs() const
// const Vector<String>& ResourceCache::GetResourceDirs() const | File: ../Resource/ResourceCache.h
static CScriptArray* ResourceCache_GetResourceDirs_void(ResourceCache* ptr)
{
    const Vector<String>& result = ptr->GetResourceDirs();
    return VectorToArray<String>(result, "Array<String>");
}


// const Vector<SharedPtr<PackageFile>>& ResourceCache::GetPackageFiles() const
// const Vector<SharedPtr<PackageFile>>& ResourceCache::GetPackageFiles() const | File: ../Resource/ResourceCache.h
static CScriptArray* ResourceCache_GetPackageFiles_void(ResourceCache* ptr)
{
    const Vector<SharedPtr<PackageFile>>& result = ptr->GetPackageFiles();
    return VectorToHandleArray(result, "Array<PackageFile@>");
}


// class ResourceCache | File: ../Resource/ResourceCache.h
void CollectMembers_ResourceCache(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Object(methods, fields, staticFields);

    // void ResourceCache::AddResourceRouter(ResourceRouter* router, bool addAsFirst=false)
    // Error: type "ResourceRouter" can not automatically bind bacause have @nobind mark
    // const HashMap<StringHash, ResourceGroup>& ResourceCache::GetAllResources() const
    // Error: type "const HashMap<StringHash, ResourceGroup>&" can not automatically bind
    // ResourceRouter* ResourceCache::GetResourceRouter(unsigned index) const
    // Error: type "ResourceRouter" can not automatically bind bacause have @nobind mark
    // void ResourceCache::GetResources(PODVector<Resource*>& result, StringHash type) const
    // Error: type "PODVector<Resource*>&" can not automatically bind
    // void ResourceCache::RemoveResourceRouter(ResourceRouter* router)
    // Error: type "ResourceRouter" can not automatically bind bacause have @nobind mark

    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::AddResourceDir(const String& pathName, unsigned priority=PRIORITY_LAST)", "bool AddResourceDir(const String&in, uint = PRIORITY_LAST)", AS_METHODPR(ResourceCache, AddResourceDir, (const String&, unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::AddPackageFile(PackageFile* package, unsigned priority=PRIORITY_LAST)", "bool AddPackageFile(PackageFile@+, uint = PRIORITY_LAST)", AS_METHODPR(ResourceCache, AddPackageFile, (PackageFile*, unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::AddPackageFile(const String& fileName, unsigned priority=PRIORITY_LAST)", "bool AddPackageFile(const String&in, uint = PRIORITY_LAST)", AS_METHODPR(ResourceCache, AddPackageFile, (const String&, unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::AddManualResource(Resource* resource)", "bool AddManualResource(Resource@+)", AS_METHODPR(ResourceCache, AddManualResource, (Resource*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::RemoveResourceDir(const String& pathName)", "void RemoveResourceDir(const String&in)", AS_METHODPR(ResourceCache, RemoveResourceDir, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::RemovePackageFile(PackageFile* package, bool releaseResources=true, bool forceRelease=false)", "void RemovePackageFile(PackageFile@+, bool = true, bool = false)", AS_METHODPR(ResourceCache, RemovePackageFile, (PackageFile*, bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::RemovePackageFile(const String& fileName, bool releaseResources=true, bool forceRelease=false)", "void RemovePackageFile(const String&in, bool = true, bool = false)", AS_METHODPR(ResourceCache, RemovePackageFile, (const String&, bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::ReleaseResource(StringHash type, const String& name, bool force=false)", "void ReleaseResource(StringHash, const String&in, bool = false)", AS_METHODPR(ResourceCache, ReleaseResource, (StringHash, const String&, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::ReleaseResources(StringHash type, bool force=false)", "void ReleaseResources(StringHash, bool = false)", AS_METHODPR(ResourceCache, ReleaseResources, (StringHash, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::ReleaseResources(StringHash type, const String& partialName, bool force=false)", "void ReleaseResources(StringHash, const String&in, bool = false)", AS_METHODPR(ResourceCache, ReleaseResources, (StringHash, const String&, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::ReleaseResources(const String& partialName, bool force=false)", "void ReleaseResources(const String&in, bool = false)", AS_METHODPR(ResourceCache, ReleaseResources, (const String&, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::ReleaseAllResources(bool force=false)", "void ReleaseAllResources(bool = false)", AS_METHODPR(ResourceCache, ReleaseAllResources, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::ReloadResource(Resource* resource)", "bool ReloadResource(Resource@+)", AS_METHODPR(ResourceCache, ReloadResource, (Resource*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::ReloadResourceWithDependencies(const String& fileName)", "void ReloadResourceWithDependencies(const String&in)", AS_METHODPR(ResourceCache, ReloadResourceWithDependencies, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::SetMemoryBudget(StringHash type, unsigned long long budget)", "void SetMemoryBudget(StringHash, uint64)", AS_METHODPR(ResourceCache, SetMemoryBudget, (StringHash, unsigned long long), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::SetMemoryBudget(StringHash type, unsigned long long budget)", "void set_memoryBudget(StringHash, uint64)", AS_METHODPR(ResourceCache, SetMemoryBudget, (StringHash, unsigned long long), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::SetAutoReloadResources(bool enable)", "void SetAutoReloadResources(bool)", AS_METHODPR(ResourceCache, SetAutoReloadResources, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::SetAutoReloadResources(bool enable)", "void set_autoReloadResources(bool)", AS_METHODPR(ResourceCache, SetAutoReloadResources, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::SetReturnFailedResources(bool enable)", "void SetReturnFailedResources(bool)", AS_METHODPR(ResourceCache, SetReturnFailedResources, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::SetReturnFailedResources(bool enable)", "void set_returnFailedResources(bool)", AS_METHODPR(ResourceCache, SetReturnFailedResources, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::SetSearchPackagesFirst(bool value)", "void SetSearchPackagesFirst(bool)", AS_METHODPR(ResourceCache, SetSearchPackagesFirst, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::SetSearchPackagesFirst(bool value)", "void set_searchPackagesFirst(bool)", AS_METHODPR(ResourceCache, SetSearchPackagesFirst, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::SetFinishBackgroundResourcesMs(int ms)", "void SetFinishBackgroundResourcesMs(int)", AS_METHODPR(ResourceCache, SetFinishBackgroundResourcesMs, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::SetFinishBackgroundResourcesMs(int ms)", "void set_finishBackgroundResourcesMs(int)", AS_METHODPR(ResourceCache, SetFinishBackgroundResourcesMs, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SharedPtr<File> ResourceCache::GetFile(const String& name, bool sendEventOnFailure=true)", "File@+ GetFile(const String&in, bool = true)", AS_FUNCTION_OBJFIRST(ResourceCache_GetFile_String_bool), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("Resource* ResourceCache::GetResource(StringHash type, const String& name, bool sendEventOnFailure=true)", "Resource@+ GetResource(StringHash, const String&in, bool = true)", AS_METHODPR(ResourceCache, GetResource, (StringHash, const String&, bool), Resource*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SharedPtr<Resource> ResourceCache::GetTempResource(StringHash type, const String& name, bool sendEventOnFailure=true)", "Resource@+ GetTempResource(StringHash, const String&in, bool = true)", AS_FUNCTION_OBJFIRST(ResourceCache_GetTempResource_StringHash_String_bool), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::BackgroundLoadResource(StringHash type, const String& name, bool sendEventOnFailure=true, Resource* caller=nullptr)", "bool BackgroundLoadResource(StringHash, const String&in, bool = true, Resource@+ = null)", AS_METHODPR(ResourceCache, BackgroundLoadResource, (StringHash, const String&, bool, Resource*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned ResourceCache::GetNumBackgroundLoadResources() const", "uint GetNumBackgroundLoadResources() const", AS_METHODPR(ResourceCache, GetNumBackgroundLoadResources, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned ResourceCache::GetNumBackgroundLoadResources() const", "uint get_numBackgroundLoadResources() const", AS_METHODPR(ResourceCache, GetNumBackgroundLoadResources, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Resource* ResourceCache::GetExistingResource(StringHash type, const String& name)", "Resource@+ GetExistingResource(StringHash, const String&in)", AS_METHODPR(ResourceCache, GetExistingResource, (StringHash, const String&), Resource*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector<String>& ResourceCache::GetResourceDirs() const", "Array<String>@ GetResourceDirs() const", AS_FUNCTION_OBJFIRST(ResourceCache_GetResourceDirs_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("const Vector<String>& ResourceCache::GetResourceDirs() const", "Array<String>@ get_resourceDirs() const", AS_FUNCTION_OBJFIRST(ResourceCache_GetResourceDirs_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<PackageFile>>& ResourceCache::GetPackageFiles() const", "Array<PackageFile@>@ GetPackageFiles() const", AS_FUNCTION_OBJFIRST(ResourceCache_GetPackageFiles_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<PackageFile>>& ResourceCache::GetPackageFiles() const", "Array<PackageFile@>@ get_packageFiles() const", AS_FUNCTION_OBJFIRST(ResourceCache_GetPackageFiles_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::Exists(const String& name) const", "bool Exists(const String&in) const", AS_METHODPR(ResourceCache, Exists, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned long long ResourceCache::GetMemoryBudget(StringHash type) const", "uint64 GetMemoryBudget(StringHash) const", AS_METHODPR(ResourceCache, GetMemoryBudget, (StringHash) const, unsigned long long), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned long long ResourceCache::GetMemoryBudget(StringHash type) const", "uint64 get_memoryBudget(StringHash) const", AS_METHODPR(ResourceCache, GetMemoryBudget, (StringHash) const, unsigned long long), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned long long ResourceCache::GetMemoryUse(StringHash type) const", "uint64 GetMemoryUse(StringHash) const", AS_METHODPR(ResourceCache, GetMemoryUse, (StringHash) const, unsigned long long), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned long long ResourceCache::GetMemoryUse(StringHash type) const", "uint64 get_memoryUse(StringHash) const", AS_METHODPR(ResourceCache, GetMemoryUse, (StringHash) const, unsigned long long), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned long long ResourceCache::GetTotalMemoryUse() const", "uint64 GetTotalMemoryUse() const", AS_METHODPR(ResourceCache, GetTotalMemoryUse, () const, unsigned long long), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned long long ResourceCache::GetTotalMemoryUse() const", "uint64 get_totalMemoryUse() const", AS_METHODPR(ResourceCache, GetTotalMemoryUse, () const, unsigned long long), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String ResourceCache::GetResourceFileName(const String& name) const", "String GetResourceFileName(const String&in) const", AS_METHODPR(ResourceCache, GetResourceFileName, (const String&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::GetAutoReloadResources() const", "bool GetAutoReloadResources() const", AS_METHODPR(ResourceCache, GetAutoReloadResources, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::GetAutoReloadResources() const", "bool get_autoReloadResources() const", AS_METHODPR(ResourceCache, GetAutoReloadResources, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::GetReturnFailedResources() const", "bool GetReturnFailedResources() const", AS_METHODPR(ResourceCache, GetReturnFailedResources, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::GetReturnFailedResources() const", "bool get_returnFailedResources() const", AS_METHODPR(ResourceCache, GetReturnFailedResources, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::GetSearchPackagesFirst() const", "bool GetSearchPackagesFirst() const", AS_METHODPR(ResourceCache, GetSearchPackagesFirst, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceCache::GetSearchPackagesFirst() const", "bool get_searchPackagesFirst() const", AS_METHODPR(ResourceCache, GetSearchPackagesFirst, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int ResourceCache::GetFinishBackgroundResourcesMs() const", "int GetFinishBackgroundResourcesMs() const", AS_METHODPR(ResourceCache, GetFinishBackgroundResourcesMs, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int ResourceCache::GetFinishBackgroundResourcesMs() const", "int get_finishBackgroundResourcesMs() const", AS_METHODPR(ResourceCache, GetFinishBackgroundResourcesMs, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String ResourceCache::GetPreferredResourceDir(const String& path) const", "String GetPreferredResourceDir(const String&in) const", AS_METHODPR(ResourceCache, GetPreferredResourceDir, (const String&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String ResourceCache::SanitateResourceName(const String& name) const", "String SanitateResourceName(const String&in) const", AS_METHODPR(ResourceCache, SanitateResourceName, (const String&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String ResourceCache::SanitateResourceDirName(const String& name) const", "String SanitateResourceDirName(const String&in) const", AS_METHODPR(ResourceCache, SanitateResourceDirName, (const String&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::StoreResourceDependency(Resource* resource, const String& dependency)", "void StoreResourceDependency(Resource@+, const String&in)", AS_METHODPR(ResourceCache, StoreResourceDependency, (Resource*, const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceCache::ResetDependencies(Resource* resource)", "void ResetDependencies(Resource@+)", AS_METHODPR(ResourceCache, ResetDependencies, (Resource*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String ResourceCache::PrintMemoryUsage() const", "String PrintMemoryUsage() const", AS_METHODPR(ResourceCache, PrintMemoryUsage, () const, String), AS_CALL_THISCALL));
}

// struct ResourceGroup | File: ../Resource/ResourceCache.h
void CollectMembers_ResourceGroup(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // HashMap<StringHash, SharedPtr<Resource>> ResourceGroup::resources_
    // Error: type "HashMap<StringHash, SharedPtr<Resource>>" can not automatically bind

    fields.Push(RegisterObjectPropertyArgs("unsigned long long ResourceGroup::memoryBudget_", "uint64 memoryBudget", offsetof(ResourceGroup, memoryBudget_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned long long ResourceGroup::memoryUse_", "uint64 memoryUse", offsetof(ResourceGroup, memoryUse_)));
}

// class ResourceRouter | File: ../Resource/ResourceCache.h
void CollectMembers_ResourceRouter(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("virtual void ResourceRouter::Route(String& name, ResourceRequest requestType)=0", "void Route(String&, ResourceRequest)", AS_METHODPR(ResourceRouter, Route, (String&, ResourceRequest), void), AS_CALL_THISCALL));
}

// class ResourceWithMetadata | File: ../Resource/Resource.h
void CollectMembers_ResourceWithMetadata(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Resource(methods, fields, staticFields);

    methods.Push(RegisterObjectMethodArgs("void ResourceWithMetadata::AddMetadata(const String& name, const Variant& value)", "void AddMetadata(const String&in, const Variant&in)", AS_METHODPR(ResourceWithMetadata, AddMetadata, (const String&, const Variant&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceWithMetadata::AddMetadata(const String& name, const Variant& value)", "void set_metadata(const String&in, const Variant&in)", AS_METHODPR(ResourceWithMetadata, AddMetadata, (const String&, const Variant&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceWithMetadata::RemoveMetadata(const String& name)", "void RemoveMetadata(const String&in)", AS_METHODPR(ResourceWithMetadata, RemoveMetadata, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ResourceWithMetadata::RemoveAllMetadata()", "void RemoveAllMetadata()", AS_METHODPR(ResourceWithMetadata, RemoveAllMetadata, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Variant& ResourceWithMetadata::GetMetadata(const String& name) const", "const Variant& GetMetadata(const String&in) const", AS_METHODPR(ResourceWithMetadata, GetMetadata, (const String&) const, const Variant&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Variant& ResourceWithMetadata::GetMetadata(const String& name) const", "const Variant& get_metadata(const String&in) const", AS_METHODPR(ResourceWithMetadata, GetMetadata, (const String&) const, const Variant&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceWithMetadata::HasMetadata() const", "bool HasMetadata() const", AS_METHODPR(ResourceWithMetadata, HasMetadata, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ResourceWithMetadata::HasMetadata() const", "bool get_hasMetadata() const", AS_METHODPR(ResourceWithMetadata, HasMetadata, () const, bool), AS_CALL_THISCALL));
}

// bool XMLElement::SetStringVector(const StringVector& value)
// bool XMLElement::SetStringVector(const StringVector& value) | File: ../Resource/XMLElement.h
static bool XMLElement_SetStringVector_StringVector(XMLElement* ptr, CScriptArray* value_conv)
{
    StringVector value = ArrayToVector<String>(value_conv);
    bool result = ptr->SetStringVector(value);
    return result;
}


// Vector<String> XMLElement::GetAttributeNames() const
// Vector<String> XMLElement::GetAttributeNames() const | File: ../Resource/XMLElement.h
static CScriptArray* XMLElement_GetAttributeNames_void(XMLElement* ptr)
{
    Vector<String> result = ptr->GetAttributeNames();
    return VectorToArray<String>(result, "Array<String>");
}


// StringVector XMLElement::GetStringVector() const
// StringVector XMLElement::GetStringVector() const | File: ../Resource/XMLElement.h
static CScriptArray* XMLElement_GetStringVector_void(XMLElement* ptr)
{
    StringVector result = ptr->GetStringVector();
    return VectorToArray<String>(result, "Array<String>");
}


// class XMLElement | File: ../Resource/XMLElement.h
void CollectMembers_XMLElement(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // XMLElement XMLElement::CreateChild(const char* name)
    // Error: type "const char*" can not automatically bind
    // String XMLElement::GetAttribute(const char* name) const
    // Error: type "const char*" can not automatically bind
    // const char* XMLElement::GetAttributeCString(const char* name) const
    // Error: type "const char*" can not automatically bind
    // String XMLElement::GetAttributeLower(const char* name) const
    // Error: type "const char*" can not automatically bind
    // String XMLElement::GetAttributeUpper(const char* name) const
    // Error: type "const char*" can not automatically bind
    // PODVector<unsigned char> XMLElement::GetBuffer(const String& name) const
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // bool XMLElement::GetBuffer(const String& name, void* dest, unsigned size) const
    // Error: type "void*" can not automatically bind
    // XMLElement XMLElement::GetChild(const char* name) const
    // Error: type "const char*" can not automatically bind
    // XMLElement XMLElement::GetNext(const char* name) const
    // Error: type "const char*" can not automatically bind
    // pugi::xml_node_struct* XMLElement::GetNode() const
    // Error: type "pugi::xml_node_struct*" can not automatically bind
    // XMLElement XMLElement::GetOrCreateChild(const char* name)
    // Error: type "const char*" can not automatically bind
    // VariantVector XMLElement::GetVariantVector() const
    // Error: type "VariantVector" can not automatically bind
    // const pugi::xpath_node* XMLElement::GetXPathNode() const
    // Error: type "const pugi::xpath_node*" can not automatically bind
    // const XPathResultSet* XMLElement::GetXPathResultSet() const
    // Error: type "const XPathResultSet*" can not automatically bind
    // bool XMLElement::HasAttribute(const char* name) const
    // Error: type "const char*" can not automatically bind
    // bool XMLElement::HasChild(const char* name) const
    // Error: type "const char*" can not automatically bind
    // bool XMLElement::RemoveAttribute(const char* name)
    // Error: type "const char*" can not automatically bind
    // bool XMLElement::RemoveChild(const char* name)
    // Error: type "const char*" can not automatically bind
    // bool XMLElement::RemoveChildren(const char* name)
    // Error: type "const char*" can not automatically bind
    // XPathResultSet XMLElement::Select(const String& query, pugi::xpath_variable_set* variables=nullptr) const
    // Error: type "pugi::xpath_variable_set*" can not automatically bind
    // XMLElement XMLElement::SelectSingle(const String& query, pugi::xpath_variable_set* variables=nullptr) const
    // Error: type "pugi::xpath_variable_set*" can not automatically bind
    // bool XMLElement::SetAttribute(const char* name, const char* value)
    // Error: type "const char*" can not automatically bind
    // bool XMLElement::SetAttribute(const char* value)
    // Error: type "const char*" can not automatically bind
    // bool XMLElement::SetBuffer(const String& name, const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // bool XMLElement::SetBuffer(const String& name, const void* data, unsigned size)
    // Error: type "const void*" can not automatically bind
    // bool XMLElement::SetValue(const char* value)
    // Error: type "const char*" can not automatically bind
    // bool XMLElement::SetVariantVector(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("XMLElement& XMLElement::operator=(const XMLElement& rhs)", "XMLElement& opAssign(const XMLElement&in)", AS_METHODPR(XMLElement, operator=, (const XMLElement&), XMLElement&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLElement::CreateChild(const String& name)", "XMLElement CreateChild(const String&in)", AS_METHODPR(XMLElement, CreateChild, (const String&), XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLElement::GetOrCreateChild(const String& name)", "XMLElement GetOrCreateChild(const String&in)", AS_METHODPR(XMLElement, GetOrCreateChild, (const String&), XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::AppendChild(XMLElement element, bool asCopy=false)", "bool AppendChild(XMLElement, bool = false)", AS_METHODPR(XMLElement, AppendChild, (XMLElement, bool), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::Remove()", "bool Remove()", AS_METHODPR(XMLElement, Remove, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::RemoveChild(const XMLElement& element)", "bool RemoveChild(const XMLElement&in)", AS_METHODPR(XMLElement, RemoveChild, (const XMLElement&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::RemoveChild(const String& name)", "bool RemoveChild(const String&in)", AS_METHODPR(XMLElement, RemoveChild, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::RemoveChildren(const String& name=String::EMPTY)", "bool RemoveChildren(const String&in = String::EMPTY)", AS_METHODPR(XMLElement, RemoveChildren, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::RemoveAttribute(const String& name=String::EMPTY)", "bool RemoveAttribute(const String&in = String::EMPTY)", AS_METHODPR(XMLElement, RemoveAttribute, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLElement::SelectSinglePrepared(const XPathQuery& query) const", "XMLElement SelectSinglePrepared(const XPathQuery&in) const", AS_METHODPR(XMLElement, SelectSinglePrepared, (const XPathQuery&) const, XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XPathResultSet XMLElement::SelectPrepared(const XPathQuery& query) const", "XPathResultSet SelectPrepared(const XPathQuery&in) const", AS_METHODPR(XMLElement, SelectPrepared, (const XPathQuery&) const, XPathResultSet), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetValue(const String& value)", "bool SetValue(const String&in)", AS_METHODPR(XMLElement, SetValue, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetValue(const String& value)", "bool set_value(const String&in)", AS_METHODPR(XMLElement, SetValue, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetAttribute(const String& name, const String& value)", "bool SetAttribute(const String&in, const String&in)", AS_METHODPR(XMLElement, SetAttribute, (const String&, const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetAttribute(const String& value)", "bool SetAttribute(const String&in)", AS_METHODPR(XMLElement, SetAttribute, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetBool(const String& name, bool value)", "bool SetBool(const String&in, bool)", AS_METHODPR(XMLElement, SetBool, (const String&, bool), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetBoundingBox(const BoundingBox& value)", "bool SetBoundingBox(const BoundingBox&in)", AS_METHODPR(XMLElement, SetBoundingBox, (const BoundingBox&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetColor(const String& name, const Color& value)", "bool SetColor(const String&in, const Color&in)", AS_METHODPR(XMLElement, SetColor, (const String&, const Color&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetFloat(const String& name, float value)", "bool SetFloat(const String&in, float)", AS_METHODPR(XMLElement, SetFloat, (const String&, float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetDouble(const String& name, double value)", "bool SetDouble(const String&in, double)", AS_METHODPR(XMLElement, SetDouble, (const String&, double), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetUInt(const String& name, unsigned value)", "bool SetUInt(const String&in, uint)", AS_METHODPR(XMLElement, SetUInt, (const String&, unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetInt(const String& name, int value)", "bool SetInt(const String&in, int)", AS_METHODPR(XMLElement, SetInt, (const String&, int), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetUInt64(const String& name, unsigned long long value)", "bool SetUInt64(const String&in, uint64)", AS_METHODPR(XMLElement, SetUInt64, (const String&, unsigned long long), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetInt64(const String& name, long long value)", "bool SetInt64(const String&in, int64)", AS_METHODPR(XMLElement, SetInt64, (const String&, long long), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetIntRect(const String& name, const IntRect& value)", "bool SetIntRect(const String&in, const IntRect&in)", AS_METHODPR(XMLElement, SetIntRect, (const String&, const IntRect&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetIntVector2(const String& name, const IntVector2& value)", "bool SetIntVector2(const String&in, const IntVector2&in)", AS_METHODPR(XMLElement, SetIntVector2, (const String&, const IntVector2&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetIntVector3(const String& name, const IntVector3& value)", "bool SetIntVector3(const String&in, const IntVector3&in)", AS_METHODPR(XMLElement, SetIntVector3, (const String&, const IntVector3&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetRect(const String& name, const Rect& value)", "bool SetRect(const String&in, const Rect&in)", AS_METHODPR(XMLElement, SetRect, (const String&, const Rect&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetQuaternion(const String& name, const Quaternion& value)", "bool SetQuaternion(const String&in, const Quaternion&in)", AS_METHODPR(XMLElement, SetQuaternion, (const String&, const Quaternion&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetString(const String& name, const String& value)", "bool SetString(const String&in, const String&in)", AS_METHODPR(XMLElement, SetString, (const String&, const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetVariant(const Variant& value)", "bool SetVariant(const Variant&in)", AS_METHODPR(XMLElement, SetVariant, (const Variant&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetVariantValue(const Variant& value)", "bool SetVariantValue(const Variant&in)", AS_METHODPR(XMLElement, SetVariantValue, (const Variant&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetResourceRef(const ResourceRef& value)", "bool SetResourceRef(const ResourceRef&in)", AS_METHODPR(XMLElement, SetResourceRef, (const ResourceRef&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetResourceRefList(const ResourceRefList& value)", "bool SetResourceRefList(const ResourceRefList&in)", AS_METHODPR(XMLElement, SetResourceRefList, (const ResourceRefList&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetStringVector(const StringVector& value)", "bool SetStringVector(Array<String>@+)", AS_FUNCTION_OBJFIRST(XMLElement_SetStringVector_StringVector), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetVariantMap(const VariantMap& value)", "bool SetVariantMap(const VariantMap&in)", AS_METHODPR(XMLElement, SetVariantMap, (const VariantMap&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetVector2(const String& name, const Vector2& value)", "bool SetVector2(const String&in, const Vector2&in)", AS_METHODPR(XMLElement, SetVector2, (const String&, const Vector2&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetVector3(const String& name, const Vector3& value)", "bool SetVector3(const String&in, const Vector3&in)", AS_METHODPR(XMLElement, SetVector3, (const String&, const Vector3&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetVector4(const String& name, const Vector4& value)", "bool SetVector4(const String&in, const Vector4&in)", AS_METHODPR(XMLElement, SetVector4, (const String&, const Vector4&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetVectorVariant(const String& name, const Variant& value)", "bool SetVectorVariant(const String&in, const Variant&in)", AS_METHODPR(XMLElement, SetVectorVariant, (const String&, const Variant&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetMatrix3(const String& name, const Matrix3& value)", "bool SetMatrix3(const String&in, const Matrix3&in)", AS_METHODPR(XMLElement, SetMatrix3, (const String&, const Matrix3&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetMatrix3x4(const String& name, const Matrix3x4& value)", "bool SetMatrix3x4(const String&in, const Matrix3x4&in)", AS_METHODPR(XMLElement, SetMatrix3x4, (const String&, const Matrix3x4&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::SetMatrix4(const String& name, const Matrix4& value)", "bool SetMatrix4(const String&in, const Matrix4&in)", AS_METHODPR(XMLElement, SetMatrix4, (const String&, const Matrix4&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::IsNull() const", "bool IsNull() const", AS_METHODPR(XMLElement, IsNull, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::IsNull() const", "bool get_isNull() const", AS_METHODPR(XMLElement, IsNull, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::NotNull() const", "bool NotNull() const", AS_METHODPR(XMLElement, NotNull, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::NotNull() const", "bool get_notNull() const", AS_METHODPR(XMLElement, NotNull, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("explicit XMLElement::operator bool() const", "bool opConv() const", AS_METHODPR(XMLElement, operator bool, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XMLElement::GetName() const", "String GetName() const", AS_METHODPR(XMLElement, GetName, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XMLElement::GetName() const", "String get_name() const", AS_METHODPR(XMLElement, GetName, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::HasChild(const String& name) const", "bool HasChild(const String&in) const", AS_METHODPR(XMLElement, HasChild, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLElement::GetChild(const String& name=String::EMPTY) const", "XMLElement GetChild(const String&in = String::EMPTY) const", AS_METHODPR(XMLElement, GetChild, (const String&) const, XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLElement::GetNext(const String& name=String::EMPTY) const", "XMLElement GetNext(const String&in = String::EMPTY) const", AS_METHODPR(XMLElement, GetNext, (const String&) const, XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLElement::GetParent() const", "XMLElement GetParent() const", AS_METHODPR(XMLElement, GetParent, () const, XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLElement::GetParent() const", "XMLElement get_parent() const", AS_METHODPR(XMLElement, GetParent, () const, XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned XMLElement::GetNumAttributes() const", "uint GetNumAttributes() const", AS_METHODPR(XMLElement, GetNumAttributes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned XMLElement::GetNumAttributes() const", "uint get_numAttributes() const", AS_METHODPR(XMLElement, GetNumAttributes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::HasAttribute(const String& name) const", "bool HasAttribute(const String&in) const", AS_METHODPR(XMLElement, HasAttribute, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XMLElement::GetValue() const", "String GetValue() const", AS_METHODPR(XMLElement, GetValue, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XMLElement::GetValue() const", "String get_value() const", AS_METHODPR(XMLElement, GetValue, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XMLElement::GetAttribute(const String& name=String::EMPTY) const", "String GetAttribute(const String&in = String::EMPTY) const", AS_METHODPR(XMLElement, GetAttribute, (const String&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XMLElement::GetAttributeLower(const String& name) const", "String GetAttributeLower(const String&in) const", AS_METHODPR(XMLElement, GetAttributeLower, (const String&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XMLElement::GetAttributeUpper(const String& name) const", "String GetAttributeUpper(const String&in) const", AS_METHODPR(XMLElement, GetAttributeUpper, (const String&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector<String> XMLElement::GetAttributeNames() const", "Array<String>@ GetAttributeNames() const", AS_FUNCTION_OBJFIRST(XMLElement_GetAttributeNames_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool XMLElement::GetBool(const String& name) const", "bool GetBool(const String&in) const", AS_METHODPR(XMLElement, GetBool, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox XMLElement::GetBoundingBox() const", "BoundingBox GetBoundingBox() const", AS_METHODPR(XMLElement, GetBoundingBox, () const, BoundingBox), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color XMLElement::GetColor(const String& name) const", "Color GetColor(const String&in) const", AS_METHODPR(XMLElement, GetColor, (const String&) const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float XMLElement::GetFloat(const String& name) const", "float GetFloat(const String&in) const", AS_METHODPR(XMLElement, GetFloat, (const String&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("double XMLElement::GetDouble(const String& name) const", "double GetDouble(const String&in) const", AS_METHODPR(XMLElement, GetDouble, (const String&) const, double), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned XMLElement::GetUInt(const String& name) const", "uint GetUInt(const String&in) const", AS_METHODPR(XMLElement, GetUInt, (const String&) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int XMLElement::GetInt(const String& name) const", "int GetInt(const String&in) const", AS_METHODPR(XMLElement, GetInt, (const String&) const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned long long XMLElement::GetUInt64(const String& name) const", "uint64 GetUInt64(const String&in) const", AS_METHODPR(XMLElement, GetUInt64, (const String&) const, unsigned long long), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("long long XMLElement::GetInt64(const String& name) const", "int64 GetInt64(const String&in) const", AS_METHODPR(XMLElement, GetInt64, (const String&) const, long long), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect XMLElement::GetIntRect(const String& name) const", "IntRect GetIntRect(const String&in) const", AS_METHODPR(XMLElement, GetIntRect, (const String&) const, IntRect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 XMLElement::GetIntVector2(const String& name) const", "IntVector2 GetIntVector2(const String&in) const", AS_METHODPR(XMLElement, GetIntVector2, (const String&) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3 XMLElement::GetIntVector3(const String& name) const", "IntVector3 GetIntVector3(const String&in) const", AS_METHODPR(XMLElement, GetIntVector3, (const String&) const, IntVector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect XMLElement::GetRect(const String& name) const", "Rect GetRect(const String&in) const", AS_METHODPR(XMLElement, GetRect, (const String&) const, Rect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion XMLElement::GetQuaternion(const String& name) const", "Quaternion GetQuaternion(const String&in) const", AS_METHODPR(XMLElement, GetQuaternion, (const String&) const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Variant XMLElement::GetVariant() const", "Variant GetVariant() const", AS_METHODPR(XMLElement, GetVariant, () const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Variant XMLElement::GetVariantValue(VariantType type) const", "Variant GetVariantValue(VariantType) const", AS_METHODPR(XMLElement, GetVariantValue, (VariantType) const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef XMLElement::GetResourceRef() const", "ResourceRef GetResourceRef() const", AS_METHODPR(XMLElement, GetResourceRef, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRefList XMLElement::GetResourceRefList() const", "ResourceRefList GetResourceRefList() const", AS_METHODPR(XMLElement, GetResourceRefList, () const, ResourceRefList), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("StringVector XMLElement::GetStringVector() const", "Array<String>@ GetStringVector() const", AS_FUNCTION_OBJFIRST(XMLElement_GetStringVector_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("VariantMap XMLElement::GetVariantMap() const", "VariantMap GetVariantMap() const", AS_METHODPR(XMLElement, GetVariantMap, () const, VariantMap), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 XMLElement::GetVector2(const String& name) const", "Vector2 GetVector2(const String&in) const", AS_METHODPR(XMLElement, GetVector2, (const String&) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 XMLElement::GetVector3(const String& name) const", "Vector3 GetVector3(const String&in) const", AS_METHODPR(XMLElement, GetVector3, (const String&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 XMLElement::GetVector4(const String& name) const", "Vector4 GetVector4(const String&in) const", AS_METHODPR(XMLElement, GetVector4, (const String&) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 XMLElement::GetVector(const String& name) const", "Vector4 GetVector(const String&in) const", AS_METHODPR(XMLElement, GetVector, (const String&) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Variant XMLElement::GetVectorVariant(const String& name) const", "Variant GetVectorVariant(const String&in) const", AS_METHODPR(XMLElement, GetVectorVariant, (const String&) const, Variant), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 XMLElement::GetMatrix3(const String& name) const", "Matrix3 GetMatrix3(const String&in) const", AS_METHODPR(XMLElement, GetMatrix3, (const String&) const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4 XMLElement::GetMatrix3x4(const String& name) const", "Matrix3x4 GetMatrix3x4(const String&in) const", AS_METHODPR(XMLElement, GetMatrix3x4, (const String&) const, Matrix3x4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4 XMLElement::GetMatrix4(const String& name) const", "Matrix4 GetMatrix4(const String&in) const", AS_METHODPR(XMLElement, GetMatrix4, (const String&) const, Matrix4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLFile* XMLElement::GetFile() const", "XMLFile@+ GetFile() const", AS_METHODPR(XMLElement, GetFile, () const, XMLFile*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLFile* XMLElement::GetFile() const", "XMLFile@+ get_file() const", AS_METHODPR(XMLElement, GetFile, () const, XMLFile*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned XMLElement::GetXPathResultIndex() const", "uint GetXPathResultIndex() const", AS_METHODPR(XMLElement, GetXPathResultIndex, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLElement::NextResult() const", "XMLElement NextResult() const", AS_METHODPR(XMLElement, NextResult, () const, XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLElement::NextResult() const", "XMLElement get_nextResult() const", AS_METHODPR(XMLElement, NextResult, () const, XMLElement), AS_CALL_THISCALL));

    staticFields.Push(RegisterGlobalPropertyArgs("const XMLElement XMLElement::EMPTY", "const XMLElement EMPTY", (void*)&XMLElement::EMPTY));
}

// class XMLFile | File: ../Resource/XMLFile.h
void CollectMembers_XMLFile(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Resource(methods, fields, staticFields);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(methods, "virtual bool Resource::Save(Serializer& dest) const");

    // pugi::xml_document* XMLFile::GetDocument() const
    // Error: type "pugi::xml_document*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool XMLFile::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(XMLFile, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLFile::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(XMLFile, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLFile::Save(Serializer& dest, const String& indentation) const", "bool Save(Serializer&, const String&in) const", AS_METHODPR(XMLFile, Save, (Serializer&, const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XMLFile::FromString(const String& source)", "bool FromString(const String&in)", AS_METHODPR(XMLFile, FromString, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLFile::CreateRoot(const String& name)", "XMLElement CreateRoot(const String&in)", AS_METHODPR(XMLFile, CreateRoot, (const String&), XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLFile::GetOrCreateRoot(const String& name)", "XMLElement GetOrCreateRoot(const String&in)", AS_METHODPR(XMLFile, GetOrCreateRoot, (const String&), XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XMLFile::GetRoot(const String& name=String::EMPTY)", "XMLElement GetRoot(const String&in = String::EMPTY)", AS_METHODPR(XMLFile, GetRoot, (const String&), XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XMLFile::ToString(const String& indentation=\"\t\") const", "String ToString(const String&in = \"\t\") const", AS_METHODPR(XMLFile, ToString, (const String&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void XMLFile::Patch(XMLFile* patchFile)", "void Patch(XMLFile@+)", AS_METHODPR(XMLFile, Patch, (XMLFile*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void XMLFile::Patch(const XMLElement& patchElement)", "void Patch(const XMLElement&in)", AS_METHODPR(XMLFile, Patch, (const XMLElement&), void), AS_CALL_THISCALL));
}

// class XPathQuery | File: ../Resource/XMLElement.h
void CollectMembers_XPathQuery(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // pugi::xpath_query* XPathQuery::GetXPathQuery() const
    // Error: type "pugi::xpath_query*" can not automatically bind
    // pugi::xpath_variable_set* XPathQuery::GetXPathVariableSet() const
    // Error: type "pugi::xpath_variable_set*" can not automatically bind
    // bool XPathQuery::SetVariable(const char* name, const char* value)
    // Error: type "const char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void XPathQuery::Bind()", "void Bind()", AS_METHODPR(XPathQuery, Bind, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XPathQuery::SetVariable(const String& name, bool value)", "bool SetVariable(const String&in, bool)", AS_METHODPR(XPathQuery, SetVariable, (const String&, bool), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XPathQuery::SetVariable(const String& name, float value)", "bool SetVariable(const String&in, float)", AS_METHODPR(XPathQuery, SetVariable, (const String&, float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XPathQuery::SetVariable(const String& name, const String& value)", "bool SetVariable(const String&in, const String&in)", AS_METHODPR(XPathQuery, SetVariable, (const String&, const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XPathQuery::SetVariable(const String& name, const XPathResultSet& value)", "bool SetVariable(const String&in, const XPathResultSet&in)", AS_METHODPR(XPathQuery, SetVariable, (const String&, const XPathResultSet&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XPathQuery::SetQuery(const String& queryString, const String& variableString=String::EMPTY, bool bind=true)", "bool SetQuery(const String&in, const String&in = String::EMPTY, bool = true)", AS_METHODPR(XPathQuery, SetQuery, (const String&, const String&, bool), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void XPathQuery::Clear()", "void Clear()", AS_METHODPR(XPathQuery, Clear, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XPathQuery::EvaluateToBool(const XMLElement& element) const", "bool EvaluateToBool(const XMLElement&in) const", AS_METHODPR(XPathQuery, EvaluateToBool, (const XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float XPathQuery::EvaluateToFloat(const XMLElement& element) const", "float EvaluateToFloat(const XMLElement&in) const", AS_METHODPR(XPathQuery, EvaluateToFloat, (const XMLElement&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XPathQuery::EvaluateToString(const XMLElement& element) const", "String EvaluateToString(const XMLElement&in) const", AS_METHODPR(XPathQuery, EvaluateToString, (const XMLElement&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XPathResultSet XPathQuery::Evaluate(const XMLElement& element) const", "XPathResultSet Evaluate(const XMLElement&in) const", AS_METHODPR(XPathQuery, Evaluate, (const XMLElement&) const, XPathResultSet), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XPathQuery::GetQuery() const", "String GetQuery() const", AS_METHODPR(XPathQuery, GetQuery, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String XPathQuery::GetQuery() const", "String get_query() const", AS_METHODPR(XPathQuery, GetQuery, () const, String), AS_CALL_THISCALL));
}

// class XPathResultSet | File: ../Resource/XMLElement.h
void CollectMembers_XPathResultSet(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // pugi::xpath_node_set* XPathResultSet::GetXPathNodeSet() const
    // Error: type "pugi::xpath_node_set*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("XPathResultSet& XPathResultSet::operator=(const XPathResultSet& rhs)", "XPathResultSet& opAssign(const XPathResultSet&in)", AS_METHODPR(XPathResultSet, operator=, (const XPathResultSet&), XPathResultSet&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XPathResultSet::operator[](unsigned index) const", "XMLElement opIndex(uint) const", AS_METHODPR(XPathResultSet, operator[], (unsigned) const, XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XPathResultSet::FirstResult()", "XMLElement FirstResult()", AS_METHODPR(XPathResultSet, FirstResult, (), XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLElement XPathResultSet::FirstResult()", "XMLElement get_firstResult()", AS_METHODPR(XPathResultSet, FirstResult, (), XMLElement), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned XPathResultSet::Size() const", "uint Size() const", AS_METHODPR(XPathResultSet, Size, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned XPathResultSet::Size() const", "uint get_size() const", AS_METHODPR(XPathResultSet, Size, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XPathResultSet::Empty() const", "bool Empty() const", AS_METHODPR(XPathResultSet, Empty, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool XPathResultSet::Empty() const", "bool get_empty() const", AS_METHODPR(XPathResultSet, Empty, () const, bool), AS_CALL_THISCALL));
}

} // namespace Urho3D
