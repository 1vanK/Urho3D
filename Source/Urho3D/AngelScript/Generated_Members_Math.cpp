// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// class AreaAllocator | File: ../Math/AreaAllocator.h
void CollectMembers_AreaAllocator(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    methods.Push(RegisterObjectMethodArgs("void AreaAllocator::Reset(int width, int height, int maxWidth=0, int maxHeight=0, bool fastMode=true)", "void Reset(int, int, int = 0, int = 0, bool = true)", AS_METHODPR(AreaAllocator, Reset, (int, int, int, int, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool AreaAllocator::Allocate(int width, int height, int& x, int& y)", "bool Allocate(int, int, int&, int&)", AS_METHODPR(AreaAllocator, Allocate, (int, int, int&, int&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int AreaAllocator::GetWidth() const", "int GetWidth() const", AS_METHODPR(AreaAllocator, GetWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int AreaAllocator::GetHeight() const", "int GetHeight() const", AS_METHODPR(AreaAllocator, GetHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool AreaAllocator::GetFastMode() const", "bool GetFastMode() const", AS_METHODPR(AreaAllocator, GetFastMode, () const, bool), AS_CALL_THISCALL));
}

// class BoundingBox | File: ../Math/BoundingBox.h
void CollectMembers_BoundingBox(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // void BoundingBox::Define(const Vector3* vertices, unsigned count)
    // Error: type "const Vector3*" can not automatically bind
    // void BoundingBox::Merge(const Vector3* vertices, unsigned count)
    // Error: type "const Vector3*" can not automatically bind
    // bool BoundingBox::operator!=(const BoundingBox& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("BoundingBox& BoundingBox::operator=(const BoundingBox& rhs) noexcept", "BoundingBox& opAssign(const BoundingBox&in)", AS_METHODPR(BoundingBox, operator=, (const BoundingBox&), BoundingBox&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox& BoundingBox::operator=(const Rect& rhs) noexcept", "BoundingBox& opAssign(const Rect&in)", AS_METHODPR(BoundingBox, operator=, (const Rect&), BoundingBox&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool BoundingBox::operator==(const BoundingBox& rhs) const", "bool opEquals(const BoundingBox&in) const", AS_METHODPR(BoundingBox, operator==, (const BoundingBox&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Define(const BoundingBox& box)", "void Define(const BoundingBox&in)", AS_METHODPR(BoundingBox, Define, (const BoundingBox&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Define(const Rect& rect)", "void Define(const Rect&in)", AS_METHODPR(BoundingBox, Define, (const Rect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Define(const Vector3& min, const Vector3& max)", "void Define(const Vector3&in, const Vector3&in)", AS_METHODPR(BoundingBox, Define, (const Vector3&, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Define(float min, float max)", "void Define(float, float)", AS_METHODPR(BoundingBox, Define, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Define(const Vector3& point)", "void Define(const Vector3&in)", AS_METHODPR(BoundingBox, Define, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Merge(const Vector3& point)", "void Merge(const Vector3&in)", AS_METHODPR(BoundingBox, Merge, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Merge(const BoundingBox& box)", "void Merge(const BoundingBox&in)", AS_METHODPR(BoundingBox, Merge, (const BoundingBox&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Define(const Frustum& frustum)", "void Define(const Frustum&in)", AS_METHODPR(BoundingBox, Define, (const Frustum&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Define(const Polyhedron& poly)", "void Define(const Polyhedron&in)", AS_METHODPR(BoundingBox, Define, (const Polyhedron&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Define(const Sphere& sphere)", "void Define(const Sphere&in)", AS_METHODPR(BoundingBox, Define, (const Sphere&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Merge(const Frustum& frustum)", "void Merge(const Frustum&in)", AS_METHODPR(BoundingBox, Merge, (const Frustum&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Merge(const Polyhedron& poly)", "void Merge(const Polyhedron&in)", AS_METHODPR(BoundingBox, Merge, (const Polyhedron&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Merge(const Sphere& sphere)", "void Merge(const Sphere&in)", AS_METHODPR(BoundingBox, Merge, (const Sphere&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Clip(const BoundingBox& box)", "void Clip(const BoundingBox&in)", AS_METHODPR(BoundingBox, Clip, (const BoundingBox&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Transform(const Matrix3& transform)", "void Transform(const Matrix3&in)", AS_METHODPR(BoundingBox, Transform, (const Matrix3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Transform(const Matrix3x4& transform)", "void Transform(const Matrix3x4&in)", AS_METHODPR(BoundingBox, Transform, (const Matrix3x4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BoundingBox::Clear()", "void Clear()", AS_METHODPR(BoundingBox, Clear, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool BoundingBox::Defined() const", "bool Defined() const", AS_METHODPR(BoundingBox, Defined, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 BoundingBox::Center() const", "Vector3 Center() const", AS_METHODPR(BoundingBox, Center, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 BoundingBox::Center() const", "Vector3 get_center() const", AS_METHODPR(BoundingBox, Center, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 BoundingBox::Size() const", "Vector3 Size() const", AS_METHODPR(BoundingBox, Size, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 BoundingBox::Size() const", "Vector3 get_size() const", AS_METHODPR(BoundingBox, Size, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 BoundingBox::HalfSize() const", "Vector3 HalfSize() const", AS_METHODPR(BoundingBox, HalfSize, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 BoundingBox::HalfSize() const", "Vector3 get_halfSize() const", AS_METHODPR(BoundingBox, HalfSize, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox BoundingBox::Transformed(const Matrix3& transform) const", "BoundingBox Transformed(const Matrix3&in) const", AS_METHODPR(BoundingBox, Transformed, (const Matrix3&) const, BoundingBox), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BoundingBox BoundingBox::Transformed(const Matrix3x4& transform) const", "BoundingBox Transformed(const Matrix3x4&in) const", AS_METHODPR(BoundingBox, Transformed, (const Matrix3x4&) const, BoundingBox), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect BoundingBox::Projected(const Matrix4& projection) const", "Rect Projected(const Matrix4&in) const", AS_METHODPR(BoundingBox, Projected, (const Matrix4&) const, Rect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float BoundingBox::DistanceToPoint(const Vector3& point) const", "float DistanceToPoint(const Vector3&in) const", AS_METHODPR(BoundingBox, DistanceToPoint, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection BoundingBox::IsInside(const Vector3& point) const", "Intersection IsInside(const Vector3&in) const", AS_METHODPR(BoundingBox, IsInside, (const Vector3&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection BoundingBox::IsInside(const BoundingBox& box) const", "Intersection IsInside(const BoundingBox&in) const", AS_METHODPR(BoundingBox, IsInside, (const BoundingBox&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection BoundingBox::IsInsideFast(const BoundingBox& box) const", "Intersection IsInsideFast(const BoundingBox&in) const", AS_METHODPR(BoundingBox, IsInsideFast, (const BoundingBox&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection BoundingBox::IsInside(const Sphere& sphere) const", "Intersection IsInside(const Sphere&in) const", AS_METHODPR(BoundingBox, IsInside, (const Sphere&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection BoundingBox::IsInsideFast(const Sphere& sphere) const", "Intersection IsInsideFast(const Sphere&in) const", AS_METHODPR(BoundingBox, IsInsideFast, (const Sphere&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String BoundingBox::ToString() const", "String ToString() const", AS_METHODPR(BoundingBox, ToString, () const, String), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("Vector3 BoundingBox::min_", "Vector3 min", offsetof(BoundingBox, min_)));
    fields.Push(RegisterObjectPropertyArgs("float BoundingBox::dummyMin_", "float dummyMin", offsetof(BoundingBox, dummyMin_)));
    fields.Push(RegisterObjectPropertyArgs("Vector3 BoundingBox::max_", "Vector3 max", offsetof(BoundingBox, max_)));
    fields.Push(RegisterObjectPropertyArgs("float BoundingBox::dummyMax_", "float dummyMax", offsetof(BoundingBox, dummyMax_)));
}

// class Color | File: ../Math/Color.h
void CollectMembers_Color(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // void Color::Bounds(float* min, float* max, bool clipped=false) const
    // Error: type "float*" can not automatically bind
    // const float* Color::Data() const
    // Error: type "const float*" can not automatically bind
    // void Color::FromUIntMask(unsigned color, const ChannelMask& mask)
    // Error: type "const ChannelMask&" can not automatically bind
    // unsigned Color::ToUIntMask(const ChannelMask& mask) const
    // Error: type "const ChannelMask&" can not automatically bind
    // bool Color::operator!=(const Color& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Color& Color::operator=(const Color& rhs) noexcept=default", "Color& opAssign(const Color&in)", AS_METHODPR(Color, operator=, (const Color&), Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Color::operator==(const Color& rhs) const", "bool opEquals(const Color&in) const", AS_METHODPR(Color, operator==, (const Color&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Color::operator*(float rhs) const", "Color opMul(float) const", AS_METHODPR(Color, operator*, (float) const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Color::operator+(const Color& rhs) const", "Color opAdd(const Color&in) const", AS_METHODPR(Color, operator+, (const Color&) const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Color::operator-() const", "Color opNeg() const", AS_METHODPR(Color, operator-, () const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Color::operator-(const Color& rhs) const", "Color opSub(const Color&in) const", AS_METHODPR(Color, operator-, (const Color&) const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color& Color::operator+=(const Color& rhs)", "Color& opAddAssign(const Color&in)", AS_METHODPR(Color, operator+=, (const Color&), Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Color::ToUInt() const", "uint ToUInt() const", AS_METHODPR(Color, ToUInt, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Color::ToHSL() const", "Vector3 ToHSL() const", AS_METHODPR(Color, ToHSL, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Color::ToHSV() const", "Vector3 ToHSV() const", AS_METHODPR(Color, ToHSV, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Color::FromUInt(unsigned color)", "void FromUInt(uint)", AS_METHODPR(Color, FromUInt, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Color::FromHSL(float h, float s, float l, float a=1.0f)", "void FromHSL(float, float, float, float = 1.0f)", AS_METHODPR(Color, FromHSL, (float, float, float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Color::FromHSV(float h, float s, float v, float a=1.0f)", "void FromHSV(float, float, float, float = 1.0f)", AS_METHODPR(Color, FromHSV, (float, float, float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Color::ToVector3() const", "Vector3 ToVector3() const", AS_METHODPR(Color, ToVector3, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Color::ToVector3() const", "Vector3 get_rgb() const", AS_METHODPR(Color, ToVector3, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Color::ToVector4() const", "Vector4 ToVector4() const", AS_METHODPR(Color, ToVector4, () const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Color::ToVector4() const", "Vector4 get_rgba() const", AS_METHODPR(Color, ToVector4, () const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::SumRGB() const", "float SumRGB() const", AS_METHODPR(Color, SumRGB, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::Average() const", "float Average() const", AS_METHODPR(Color, Average, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::Luma() const", "float Luma() const", AS_METHODPR(Color, Luma, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::Chroma() const", "float Chroma() const", AS_METHODPR(Color, Chroma, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::Hue() const", "float Hue() const", AS_METHODPR(Color, Hue, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::SaturationHSL() const", "float SaturationHSL() const", AS_METHODPR(Color, SaturationHSL, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::SaturationHSV() const", "float SaturationHSV() const", AS_METHODPR(Color, SaturationHSV, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::Value() const", "float Value() const", AS_METHODPR(Color, Value, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Color::GammaToLinear() const", "Color GammaToLinear() const", AS_METHODPR(Color, GammaToLinear, () const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Color::LinearToGamma() const", "Color LinearToGamma() const", AS_METHODPR(Color, LinearToGamma, () const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::Lightness() const", "float Lightness() const", AS_METHODPR(Color, Lightness, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::MaxRGB() const", "float MaxRGB() const", AS_METHODPR(Color, MaxRGB, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::MinRGB() const", "float MinRGB() const", AS_METHODPR(Color, MinRGB, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Color::Range() const", "float Range() const", AS_METHODPR(Color, Range, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Color::Clip(bool clipAlpha=false)", "void Clip(bool = false)", AS_METHODPR(Color, Clip, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Color::Invert(bool invertAlpha=false)", "void Invert(bool = false)", AS_METHODPR(Color, Invert, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Color::Lerp(const Color& rhs, float t) const", "Color Lerp(const Color&in, float) const", AS_METHODPR(Color, Lerp, (const Color&, float) const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Color Color::Abs() const", "Color Abs() const", AS_METHODPR(Color, Abs, () const, Color), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Color::Equals(const Color& rhs) const", "bool Equals(const Color&in) const", AS_METHODPR(Color, Equals, (const Color&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Color::ToString() const", "String ToString() const", AS_METHODPR(Color, ToString, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Color::ToUIntArgb() const", "uint ToUIntArgb() const", AS_METHODPR(Color, ToUIntArgb, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Color::ToHash() const", "uint ToHash() const", AS_METHODPR(Color, ToHash, () const, unsigned), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("float Color::r_", "float r", offsetof(Color, r_)));
    fields.Push(RegisterObjectPropertyArgs("float Color::g_", "float g", offsetof(Color, g_)));
    fields.Push(RegisterObjectPropertyArgs("float Color::b_", "float b", offsetof(Color, b_)));
    fields.Push(RegisterObjectPropertyArgs("float Color::a_", "float a", offsetof(Color, a_)));
}

// class Frustum | File: ../Math/Frustum.h
void CollectMembers_Frustum(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    methods.Push(RegisterObjectMethodArgs("Frustum& Frustum::operator=(const Frustum& rhs) noexcept", "Frustum& opAssign(const Frustum&in)", AS_METHODPR(Frustum, operator=, (const Frustum&), Frustum&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Frustum::Define(float fov, float aspectRatio, float zoom, float nearZ, float farZ, const Matrix3x4& transform=Matrix3x4::IDENTITY)", "void Define(float, float, float, float, float, const Matrix3x4&in = Matrix3x4::IDENTITY)", AS_METHODPR(Frustum, Define, (float, float, float, float, float, const Matrix3x4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Frustum::Define(const Vector3& near, const Vector3& far, const Matrix3x4& transform=Matrix3x4::IDENTITY)", "void Define(const Vector3&in, const Vector3&in, const Matrix3x4&in = Matrix3x4::IDENTITY)", AS_METHODPR(Frustum, Define, (const Vector3&, const Vector3&, const Matrix3x4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Frustum::Define(const BoundingBox& box, const Matrix3x4& transform=Matrix3x4::IDENTITY)", "void Define(const BoundingBox&in, const Matrix3x4&in = Matrix3x4::IDENTITY)", AS_METHODPR(Frustum, Define, (const BoundingBox&, const Matrix3x4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Frustum::Define(const Matrix4& projection)", "void Define(const Matrix4&in)", AS_METHODPR(Frustum, Define, (const Matrix4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Frustum::DefineOrtho(float orthoSize, float aspectRatio, float zoom, float nearZ, float farZ, const Matrix3x4& transform=Matrix3x4::IDENTITY)", "void DefineOrtho(float, float, float, float, float, const Matrix3x4&in = Matrix3x4::IDENTITY)", AS_METHODPR(Frustum, DefineOrtho, (float, float, float, float, float, const Matrix3x4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Frustum::DefineSplit(const Matrix4& projection, float near, float far)", "void DefineSplit(const Matrix4&in, float, float)", AS_METHODPR(Frustum, DefineSplit, (const Matrix4&, float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Frustum::Transform(const Matrix3& transform)", "void Transform(const Matrix3&in)", AS_METHODPR(Frustum, Transform, (const Matrix3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Frustum::Transform(const Matrix3x4& transform)", "void Transform(const Matrix3x4&in)", AS_METHODPR(Frustum, Transform, (const Matrix3x4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Frustum::IsInside(const Vector3& point) const", "Intersection IsInside(const Vector3&in) const", AS_METHODPR(Frustum, IsInside, (const Vector3&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Frustum::IsInside(const Sphere& sphere) const", "Intersection IsInside(const Sphere&in) const", AS_METHODPR(Frustum, IsInside, (const Sphere&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Frustum::IsInsideFast(const Sphere& sphere) const", "Intersection IsInsideFast(const Sphere&in) const", AS_METHODPR(Frustum, IsInsideFast, (const Sphere&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Frustum::IsInside(const BoundingBox& box) const", "Intersection IsInside(const BoundingBox&in) const", AS_METHODPR(Frustum, IsInside, (const BoundingBox&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Frustum::IsInsideFast(const BoundingBox& box) const", "Intersection IsInsideFast(const BoundingBox&in) const", AS_METHODPR(Frustum, IsInsideFast, (const BoundingBox&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Frustum::Distance(const Vector3& point) const", "float Distance(const Vector3&in) const", AS_METHODPR(Frustum, Distance, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Frustum Frustum::Transformed(const Matrix3& transform) const", "Frustum Transformed(const Matrix3&in) const", AS_METHODPR(Frustum, Transformed, (const Matrix3&) const, Frustum), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Frustum Frustum::Transformed(const Matrix3x4& transform) const", "Frustum Transformed(const Matrix3x4&in) const", AS_METHODPR(Frustum, Transformed, (const Matrix3x4&) const, Frustum), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect Frustum::Projected(const Matrix4& projection) const", "Rect Projected(const Matrix4&in) const", AS_METHODPR(Frustum, Projected, (const Matrix4&) const, Rect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Frustum::UpdatePlanes()", "void UpdatePlanes()", AS_METHODPR(Frustum, UpdatePlanes, (), void), AS_CALL_THISCALL));

    // Plane Frustum::planes_[NUM_FRUSTUM_PLANES]
    // Not registered because array
    // Vector3 Frustum::vertices_[NUM_FRUSTUM_VERTICES]
    // Not registered because array
}

// class IntRect | File: ../Math/Rect.h
void CollectMembers_IntRect(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const int* IntRect::Data() const
    // Error: type "const int*" can not automatically bind
    // bool IntRect::operator!=(const IntRect& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("bool IntRect::operator==(const IntRect& rhs) const", "bool opEquals(const IntRect&in) const", AS_METHODPR(IntRect, operator==, (const IntRect&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect& IntRect::operator+=(const IntRect& rhs)", "IntRect& opAddAssign(const IntRect&in)", AS_METHODPR(IntRect, operator+=, (const IntRect&), IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect& IntRect::operator-=(const IntRect& rhs)", "IntRect& opSubAssign(const IntRect&in)", AS_METHODPR(IntRect, operator-=, (const IntRect&), IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect& IntRect::operator/=(float value)", "IntRect& opDivAssign(float)", AS_METHODPR(IntRect, operator/=, (float), IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect& IntRect::operator*=(float value)", "IntRect& opMulAssign(float)", AS_METHODPR(IntRect, operator*=, (float), IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect IntRect::operator/(float value) const", "IntRect opDiv(float) const", AS_METHODPR(IntRect, operator/, (float) const, IntRect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect IntRect::operator*(float value) const", "IntRect opMul(float) const", AS_METHODPR(IntRect, operator*, (float) const, IntRect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect IntRect::operator+(const IntRect& rhs) const", "IntRect opAdd(const IntRect&in) const", AS_METHODPR(IntRect, operator+, (const IntRect&) const, IntRect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect IntRect::operator-(const IntRect& rhs) const", "IntRect opSub(const IntRect&in) const", AS_METHODPR(IntRect, operator-, (const IntRect&) const, IntRect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntRect::Size() const", "IntVector2 Size() const", AS_METHODPR(IntRect, Size, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntRect::Size() const", "IntVector2 get_size() const", AS_METHODPR(IntRect, Size, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int IntRect::Width() const", "int Width() const", AS_METHODPR(IntRect, Width, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int IntRect::Width() const", "int get_width() const", AS_METHODPR(IntRect, Width, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int IntRect::Height() const", "int Height() const", AS_METHODPR(IntRect, Height, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int IntRect::Height() const", "int get_height() const", AS_METHODPR(IntRect, Height, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection IntRect::IsInside(const IntVector2& point) const", "Intersection IsInside(const IntVector2&in) const", AS_METHODPR(IntRect, IsInside, (const IntVector2&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection IntRect::IsInside(const IntRect& rect) const", "Intersection IsInside(const IntRect&in) const", AS_METHODPR(IntRect, IsInside, (const IntRect&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void IntRect::Clip(const IntRect& rect)", "void Clip(const IntRect&in)", AS_METHODPR(IntRect, Clip, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void IntRect::Merge(const IntRect& rect)", "void Merge(const IntRect&in)", AS_METHODPR(IntRect, Merge, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String IntRect::ToString() const", "String ToString() const", AS_METHODPR(IntRect, ToString, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntRect::Min() const", "IntVector2 Min() const", AS_METHODPR(IntRect, Min, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntRect::Max() const", "IntVector2 Max() const", AS_METHODPR(IntRect, Max, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int IntRect::Left() const", "int Left() const", AS_METHODPR(IntRect, Left, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int IntRect::Top() const", "int Top() const", AS_METHODPR(IntRect, Top, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int IntRect::Right() const", "int Right() const", AS_METHODPR(IntRect, Right, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int IntRect::Bottom() const", "int Bottom() const", AS_METHODPR(IntRect, Bottom, () const, int), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("int IntRect::left_", "int left", offsetof(IntRect, left_)));
    fields.Push(RegisterObjectPropertyArgs("int IntRect::top_", "int top", offsetof(IntRect, top_)));
    fields.Push(RegisterObjectPropertyArgs("int IntRect::right_", "int right", offsetof(IntRect, right_)));
    fields.Push(RegisterObjectPropertyArgs("int IntRect::bottom_", "int bottom", offsetof(IntRect, bottom_)));
}

// class IntVector2 | File: ../Math/Vector2.h
void CollectMembers_IntVector2(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const int* IntVector2::Data() const
    // Error: type "const int*" can not automatically bind
    // bool IntVector2::operator!=(const IntVector2& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("IntVector2& IntVector2::operator=(const IntVector2& rhs) noexcept=default", "IntVector2& opAssign(const IntVector2&in)", AS_METHODPR(IntVector2, operator=, (const IntVector2&), IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool IntVector2::operator==(const IntVector2& rhs) const", "bool opEquals(const IntVector2&in) const", AS_METHODPR(IntVector2, operator==, (const IntVector2&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntVector2::operator+(const IntVector2& rhs) const", "IntVector2 opAdd(const IntVector2&in) const", AS_METHODPR(IntVector2, operator+, (const IntVector2&) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntVector2::operator-() const", "IntVector2 opNeg() const", AS_METHODPR(IntVector2, operator-, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntVector2::operator-(const IntVector2& rhs) const", "IntVector2 opSub(const IntVector2&in) const", AS_METHODPR(IntVector2, operator-, (const IntVector2&) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntVector2::operator*(int rhs) const", "IntVector2 opMul(int) const", AS_METHODPR(IntVector2, operator*, (int) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntVector2::operator*(const IntVector2& rhs) const", "IntVector2 opMul(const IntVector2&in) const", AS_METHODPR(IntVector2, operator*, (const IntVector2&) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntVector2::operator/(int rhs) const", "IntVector2 opDiv(int) const", AS_METHODPR(IntVector2, operator/, (int) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 IntVector2::operator/(const IntVector2& rhs) const", "IntVector2 opDiv(const IntVector2&in) const", AS_METHODPR(IntVector2, operator/, (const IntVector2&) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2& IntVector2::operator+=(const IntVector2& rhs)", "IntVector2& opAddAssign(const IntVector2&in)", AS_METHODPR(IntVector2, operator+=, (const IntVector2&), IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2& IntVector2::operator-=(const IntVector2& rhs)", "IntVector2& opSubAssign(const IntVector2&in)", AS_METHODPR(IntVector2, operator-=, (const IntVector2&), IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2& IntVector2::operator*=(int rhs)", "IntVector2& opMulAssign(int)", AS_METHODPR(IntVector2, operator*=, (int), IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2& IntVector2::operator*=(const IntVector2& rhs)", "IntVector2& opMulAssign(const IntVector2&in)", AS_METHODPR(IntVector2, operator*=, (const IntVector2&), IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2& IntVector2::operator/=(int rhs)", "IntVector2& opDivAssign(int)", AS_METHODPR(IntVector2, operator/=, (int), IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2& IntVector2::operator/=(const IntVector2& rhs)", "IntVector2& opDivAssign(const IntVector2&in)", AS_METHODPR(IntVector2, operator/=, (const IntVector2&), IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String IntVector2::ToString() const", "String ToString() const", AS_METHODPR(IntVector2, ToString, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned IntVector2::ToHash() const", "uint ToHash() const", AS_METHODPR(IntVector2, ToHash, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float IntVector2::Length() const", "float Length() const", AS_METHODPR(IntVector2, Length, () const, float), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("int IntVector2::x_", "int x", offsetof(IntVector2, x_)));
    fields.Push(RegisterObjectPropertyArgs("int IntVector2::y_", "int y", offsetof(IntVector2, y_)));
}

// class IntVector3 | File: ../Math/Vector3.h
void CollectMembers_IntVector3(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const int* IntVector3::Data() const
    // Error: type "const int*" can not automatically bind
    // bool IntVector3::operator!=(const IntVector3& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("IntVector3& IntVector3::operator=(const IntVector3& rhs) noexcept=default", "IntVector3& opAssign(const IntVector3&in)", AS_METHODPR(IntVector3, operator=, (const IntVector3&), IntVector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool IntVector3::operator==(const IntVector3& rhs) const", "bool opEquals(const IntVector3&in) const", AS_METHODPR(IntVector3, operator==, (const IntVector3&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3 IntVector3::operator+(const IntVector3& rhs) const", "IntVector3 opAdd(const IntVector3&in) const", AS_METHODPR(IntVector3, operator+, (const IntVector3&) const, IntVector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3 IntVector3::operator-() const", "IntVector3 opNeg() const", AS_METHODPR(IntVector3, operator-, () const, IntVector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3 IntVector3::operator-(const IntVector3& rhs) const", "IntVector3 opSub(const IntVector3&in) const", AS_METHODPR(IntVector3, operator-, (const IntVector3&) const, IntVector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3 IntVector3::operator*(int rhs) const", "IntVector3 opMul(int) const", AS_METHODPR(IntVector3, operator*, (int) const, IntVector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3 IntVector3::operator*(const IntVector3& rhs) const", "IntVector3 opMul(const IntVector3&in) const", AS_METHODPR(IntVector3, operator*, (const IntVector3&) const, IntVector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3 IntVector3::operator/(int rhs) const", "IntVector3 opDiv(int) const", AS_METHODPR(IntVector3, operator/, (int) const, IntVector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3 IntVector3::operator/(const IntVector3& rhs) const", "IntVector3 opDiv(const IntVector3&in) const", AS_METHODPR(IntVector3, operator/, (const IntVector3&) const, IntVector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3& IntVector3::operator+=(const IntVector3& rhs)", "IntVector3& opAddAssign(const IntVector3&in)", AS_METHODPR(IntVector3, operator+=, (const IntVector3&), IntVector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3& IntVector3::operator-=(const IntVector3& rhs)", "IntVector3& opSubAssign(const IntVector3&in)", AS_METHODPR(IntVector3, operator-=, (const IntVector3&), IntVector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3& IntVector3::operator*=(int rhs)", "IntVector3& opMulAssign(int)", AS_METHODPR(IntVector3, operator*=, (int), IntVector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3& IntVector3::operator*=(const IntVector3& rhs)", "IntVector3& opMulAssign(const IntVector3&in)", AS_METHODPR(IntVector3, operator*=, (const IntVector3&), IntVector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3& IntVector3::operator/=(int rhs)", "IntVector3& opDivAssign(int)", AS_METHODPR(IntVector3, operator/=, (int), IntVector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector3& IntVector3::operator/=(const IntVector3& rhs)", "IntVector3& opDivAssign(const IntVector3&in)", AS_METHODPR(IntVector3, operator/=, (const IntVector3&), IntVector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String IntVector3::ToString() const", "String ToString() const", AS_METHODPR(IntVector3, ToString, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned IntVector3::ToHash() const", "uint ToHash() const", AS_METHODPR(IntVector3, ToHash, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float IntVector3::Length() const", "float Length() const", AS_METHODPR(IntVector3, Length, () const, float), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("int IntVector3::x_", "int x", offsetof(IntVector3, x_)));
    fields.Push(RegisterObjectPropertyArgs("int IntVector3::y_", "int y", offsetof(IntVector3, y_)));
    fields.Push(RegisterObjectPropertyArgs("int IntVector3::z_", "int z", offsetof(IntVector3, z_)));
}

// class Matrix2 | File: ../Math/Matrix2.h
void CollectMembers_Matrix2(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const float* Matrix2::Data() const
    // Error: type "const float*" can not automatically bind
    // bool Matrix2::operator!=(const Matrix2& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Matrix2& Matrix2::operator=(const Matrix2& rhs) noexcept=default", "Matrix2& opAssign(const Matrix2&in)", AS_METHODPR(Matrix2, operator=, (const Matrix2&), Matrix2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix2::operator==(const Matrix2& rhs) const", "bool opEquals(const Matrix2&in) const", AS_METHODPR(Matrix2, operator==, (const Matrix2&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Matrix2::operator*(const Vector2& rhs) const", "Vector2 opMul(const Vector2&in) const", AS_METHODPR(Matrix2, operator*, (const Vector2&) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix2 Matrix2::operator+(const Matrix2& rhs) const", "Matrix2 opAdd(const Matrix2&in) const", AS_METHODPR(Matrix2, operator+, (const Matrix2&) const, Matrix2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix2 Matrix2::operator-(const Matrix2& rhs) const", "Matrix2 opSub(const Matrix2&in) const", AS_METHODPR(Matrix2, operator-, (const Matrix2&) const, Matrix2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix2 Matrix2::operator*(float rhs) const", "Matrix2 opMul(float) const", AS_METHODPR(Matrix2, operator*, (float) const, Matrix2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix2 Matrix2::operator*(const Matrix2& rhs) const", "Matrix2 opMul(const Matrix2&in) const", AS_METHODPR(Matrix2, operator*, (const Matrix2&) const, Matrix2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix2::SetScale(const Vector2& scale)", "void SetScale(const Vector2&in)", AS_METHODPR(Matrix2, SetScale, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix2::SetScale(float scale)", "void SetScale(float)", AS_METHODPR(Matrix2, SetScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Matrix2::Scale() const", "Vector2 Scale() const", AS_METHODPR(Matrix2, Scale, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix2 Matrix2::Transpose() const", "Matrix2 Transpose() const", AS_METHODPR(Matrix2, Transpose, () const, Matrix2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix2 Matrix2::Scaled(const Vector2& scale) const", "Matrix2 Scaled(const Vector2&in) const", AS_METHODPR(Matrix2, Scaled, (const Vector2&) const, Matrix2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix2::Equals(const Matrix2& rhs) const", "bool Equals(const Matrix2&in) const", AS_METHODPR(Matrix2, Equals, (const Matrix2&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix2 Matrix2::Inverse() const", "Matrix2 Inverse() const", AS_METHODPR(Matrix2, Inverse, () const, Matrix2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix2::IsNaN() const", "bool IsNaN() const", AS_METHODPR(Matrix2, IsNaN, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix2::IsInf() const", "bool IsInf() const", AS_METHODPR(Matrix2, IsInf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Matrix2::ToString() const", "String ToString() const", AS_METHODPR(Matrix2, ToString, () const, String), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("float Matrix2::m00_", "float m00", offsetof(Matrix2, m00_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix2::m01_", "float m01", offsetof(Matrix2, m01_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix2::m10_", "float m10", offsetof(Matrix2, m10_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix2::m11_", "float m11", offsetof(Matrix2, m11_)));
}

// class Matrix3 | File: ../Math/Matrix3.h
void CollectMembers_Matrix3(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const float* Matrix3::Data() const
    // Error: type "const float*" can not automatically bind
    // bool Matrix3::operator!=(const Matrix3& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Matrix3& Matrix3::operator=(const Matrix3& rhs) noexcept=default", "Matrix3& opAssign(const Matrix3&in)", AS_METHODPR(Matrix3, operator=, (const Matrix3&), Matrix3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix3::operator==(const Matrix3& rhs) const", "bool opEquals(const Matrix3&in) const", AS_METHODPR(Matrix3, operator==, (const Matrix3&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3::operator*(const Vector3& rhs) const", "Vector3 opMul(const Vector3&in) const", AS_METHODPR(Matrix3, operator*, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix3::operator+(const Matrix3& rhs) const", "Matrix3 opAdd(const Matrix3&in) const", AS_METHODPR(Matrix3, operator+, (const Matrix3&) const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix3::operator-(const Matrix3& rhs) const", "Matrix3 opSub(const Matrix3&in) const", AS_METHODPR(Matrix3, operator-, (const Matrix3&) const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix3::operator*(float rhs) const", "Matrix3 opMul(float) const", AS_METHODPR(Matrix3, operator*, (float) const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix3::operator*(const Matrix3& rhs) const", "Matrix3 opMul(const Matrix3&in) const", AS_METHODPR(Matrix3, operator*, (const Matrix3&) const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix3::SetScale(const Vector3& scale)", "void SetScale(const Vector3&in)", AS_METHODPR(Matrix3, SetScale, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix3::SetScale(float scale)", "void SetScale(float)", AS_METHODPR(Matrix3, SetScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3::Scale() const", "Vector3 Scale() const", AS_METHODPR(Matrix3, Scale, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3::SignedScale(const Matrix3& rotation) const", "Vector3 SignedScale(const Matrix3&in) const", AS_METHODPR(Matrix3, SignedScale, (const Matrix3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix3::Transpose() const", "Matrix3 Transpose() const", AS_METHODPR(Matrix3, Transpose, () const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix3::Scaled(const Vector3& scale) const", "Matrix3 Scaled(const Vector3&in) const", AS_METHODPR(Matrix3, Scaled, (const Vector3&) const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix3::Equals(const Matrix3& rhs) const", "bool Equals(const Matrix3&in) const", AS_METHODPR(Matrix3, Equals, (const Matrix3&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix3::Inverse() const", "Matrix3 Inverse() const", AS_METHODPR(Matrix3, Inverse, () const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Matrix3::Element(unsigned i, unsigned j) const", "float Element(uint, uint) const", AS_METHODPR(Matrix3, Element, (unsigned, unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3::Row(unsigned i) const", "Vector3 Row(uint) const", AS_METHODPR(Matrix3, Row, (unsigned) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3::Column(unsigned j) const", "Vector3 Column(uint) const", AS_METHODPR(Matrix3, Column, (unsigned) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix3::IsNaN() const", "bool IsNaN() const", AS_METHODPR(Matrix3, IsNaN, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix3::IsInf() const", "bool IsInf() const", AS_METHODPR(Matrix3, IsInf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Matrix3::ToString() const", "String ToString() const", AS_METHODPR(Matrix3, ToString, () const, String), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("float Matrix3::m00_", "float m00", offsetof(Matrix3, m00_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3::m01_", "float m01", offsetof(Matrix3, m01_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3::m02_", "float m02", offsetof(Matrix3, m02_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3::m10_", "float m10", offsetof(Matrix3, m10_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3::m11_", "float m11", offsetof(Matrix3, m11_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3::m12_", "float m12", offsetof(Matrix3, m12_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3::m20_", "float m20", offsetof(Matrix3, m20_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3::m21_", "float m21", offsetof(Matrix3, m21_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3::m22_", "float m22", offsetof(Matrix3, m22_)));
}

// class Matrix3x4 | File: ../Math/Matrix3x4.h
void CollectMembers_Matrix3x4(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const float* Matrix3x4::Data() const
    // Error: type "const float*" can not automatically bind
    // bool Matrix3x4::operator!=(const Matrix3x4& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Matrix3x4& Matrix3x4::operator=(const Matrix3x4& rhs) noexcept=default", "Matrix3x4& opAssign(const Matrix3x4&in)", AS_METHODPR(Matrix3x4, operator=, (const Matrix3x4&), Matrix3x4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4& Matrix3x4::operator=(const Matrix3& rhs) noexcept", "Matrix3x4& opAssign(const Matrix3&in)", AS_METHODPR(Matrix3x4, operator=, (const Matrix3&), Matrix3x4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4& Matrix3x4::operator=(const Matrix4& rhs) noexcept", "Matrix3x4& opAssign(const Matrix4&in)", AS_METHODPR(Matrix3x4, operator=, (const Matrix4&), Matrix3x4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix3x4::operator==(const Matrix3x4& rhs) const", "bool opEquals(const Matrix3x4&in) const", AS_METHODPR(Matrix3x4, operator==, (const Matrix3x4&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3x4::operator*(const Vector3& rhs) const", "Vector3 opMul(const Vector3&in) const", AS_METHODPR(Matrix3x4, operator*, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3x4::operator*(const Vector4& rhs) const", "Vector3 opMul(const Vector4&in) const", AS_METHODPR(Matrix3x4, operator*, (const Vector4&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4 Matrix3x4::operator+(const Matrix3x4& rhs) const", "Matrix3x4 opAdd(const Matrix3x4&in) const", AS_METHODPR(Matrix3x4, operator+, (const Matrix3x4&) const, Matrix3x4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4 Matrix3x4::operator-(const Matrix3x4& rhs) const", "Matrix3x4 opSub(const Matrix3x4&in) const", AS_METHODPR(Matrix3x4, operator-, (const Matrix3x4&) const, Matrix3x4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4 Matrix3x4::operator*(float rhs) const", "Matrix3x4 opMul(float) const", AS_METHODPR(Matrix3x4, operator*, (float) const, Matrix3x4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4 Matrix3x4::operator*(const Matrix3x4& rhs) const", "Matrix3x4 opMul(const Matrix3x4&in) const", AS_METHODPR(Matrix3x4, operator*, (const Matrix3x4&) const, Matrix3x4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4 Matrix3x4::operator*(const Matrix4& rhs) const", "Matrix4 opMul(const Matrix4&in) const", AS_METHODPR(Matrix3x4, operator*, (const Matrix4&) const, Matrix4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix3x4::SetTranslation(const Vector3& translation)", "void SetTranslation(const Vector3&in)", AS_METHODPR(Matrix3x4, SetTranslation, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix3x4::SetRotation(const Matrix3& rotation)", "void SetRotation(const Matrix3&in)", AS_METHODPR(Matrix3x4, SetRotation, (const Matrix3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix3x4::SetScale(const Vector3& scale)", "void SetScale(const Vector3&in)", AS_METHODPR(Matrix3x4, SetScale, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix3x4::SetScale(float scale)", "void SetScale(float)", AS_METHODPR(Matrix3x4, SetScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix3x4::ToMatrix3() const", "Matrix3 ToMatrix3() const", AS_METHODPR(Matrix3x4, ToMatrix3, () const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4 Matrix3x4::ToMatrix4() const", "Matrix4 ToMatrix4() const", AS_METHODPR(Matrix3x4, ToMatrix4, () const, Matrix4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix3x4::RotationMatrix() const", "Matrix3 RotationMatrix() const", AS_METHODPR(Matrix3x4, RotationMatrix, () const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3x4::Translation() const", "Vector3 Translation() const", AS_METHODPR(Matrix3x4, Translation, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Matrix3x4::Rotation() const", "Quaternion Rotation() const", AS_METHODPR(Matrix3x4, Rotation, () const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3x4::Scale() const", "Vector3 Scale() const", AS_METHODPR(Matrix3x4, Scale, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3x4::SignedScale(const Matrix3& rotation) const", "Vector3 SignedScale(const Matrix3&in) const", AS_METHODPR(Matrix3x4, SignedScale, (const Matrix3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix3x4::Equals(const Matrix3x4& rhs) const", "bool Equals(const Matrix3x4&in) const", AS_METHODPR(Matrix3x4, Equals, (const Matrix3x4&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix3x4::Decompose(Vector3& translation, Quaternion& rotation, Vector3& scale) const", "void Decompose(Vector3&, Quaternion&, Vector3&) const", AS_METHODPR(Matrix3x4, Decompose, (Vector3&, Quaternion&, Vector3&) const, void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4 Matrix3x4::Inverse() const", "Matrix3x4 Inverse() const", AS_METHODPR(Matrix3x4, Inverse, () const, Matrix3x4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Matrix3x4::Element(unsigned i, unsigned j) const", "float Element(uint, uint) const", AS_METHODPR(Matrix3x4, Element, (unsigned, unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Matrix3x4::Row(unsigned i) const", "Vector4 Row(uint) const", AS_METHODPR(Matrix3x4, Row, (unsigned) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix3x4::Column(unsigned j) const", "Vector3 Column(uint) const", AS_METHODPR(Matrix3x4, Column, (unsigned) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix3x4::IsNaN() const", "bool IsNaN() const", AS_METHODPR(Matrix3x4, IsNaN, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix3x4::IsInf() const", "bool IsInf() const", AS_METHODPR(Matrix3x4, IsInf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Matrix3x4::ToString() const", "String ToString() const", AS_METHODPR(Matrix3x4, ToString, () const, String), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m00_", "float m00", offsetof(Matrix3x4, m00_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m01_", "float m01", offsetof(Matrix3x4, m01_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m02_", "float m02", offsetof(Matrix3x4, m02_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m03_", "float m03", offsetof(Matrix3x4, m03_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m10_", "float m10", offsetof(Matrix3x4, m10_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m11_", "float m11", offsetof(Matrix3x4, m11_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m12_", "float m12", offsetof(Matrix3x4, m12_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m13_", "float m13", offsetof(Matrix3x4, m13_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m20_", "float m20", offsetof(Matrix3x4, m20_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m21_", "float m21", offsetof(Matrix3x4, m21_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m22_", "float m22", offsetof(Matrix3x4, m22_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix3x4::m23_", "float m23", offsetof(Matrix3x4, m23_)));
}

// class Matrix4 | File: ../Math/Matrix4.h
void CollectMembers_Matrix4(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const float* Matrix4::Data() const
    // Error: type "const float*" can not automatically bind
    // bool Matrix4::operator!=(const Matrix4& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Matrix4& Matrix4::operator=(const Matrix4& rhs) noexcept", "Matrix4& opAssign(const Matrix4&in)", AS_METHODPR(Matrix4, operator=, (const Matrix4&), Matrix4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4& Matrix4::operator=(const Matrix3& rhs) noexcept", "Matrix4& opAssign(const Matrix3&in)", AS_METHODPR(Matrix4, operator=, (const Matrix3&), Matrix4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix4::operator==(const Matrix4& rhs) const", "bool opEquals(const Matrix4&in) const", AS_METHODPR(Matrix4, operator==, (const Matrix4&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix4::operator*(const Vector3& rhs) const", "Vector3 opMul(const Vector3&in) const", AS_METHODPR(Matrix4, operator*, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Matrix4::operator*(const Vector4& rhs) const", "Vector4 opMul(const Vector4&in) const", AS_METHODPR(Matrix4, operator*, (const Vector4&) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4 Matrix4::operator+(const Matrix4& rhs) const", "Matrix4 opAdd(const Matrix4&in) const", AS_METHODPR(Matrix4, operator+, (const Matrix4&) const, Matrix4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4 Matrix4::operator-(const Matrix4& rhs) const", "Matrix4 opSub(const Matrix4&in) const", AS_METHODPR(Matrix4, operator-, (const Matrix4&) const, Matrix4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4 Matrix4::operator*(float rhs) const", "Matrix4 opMul(float) const", AS_METHODPR(Matrix4, operator*, (float) const, Matrix4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4 Matrix4::operator*(const Matrix4& rhs) const", "Matrix4 opMul(const Matrix4&in) const", AS_METHODPR(Matrix4, operator*, (const Matrix4&) const, Matrix4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4 Matrix4::operator*(const Matrix3x4& rhs) const", "Matrix4 opMul(const Matrix3x4&in) const", AS_METHODPR(Matrix4, operator*, (const Matrix3x4&) const, Matrix4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix4::SetTranslation(const Vector3& translation)", "void SetTranslation(const Vector3&in)", AS_METHODPR(Matrix4, SetTranslation, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix4::SetRotation(const Matrix3& rotation)", "void SetRotation(const Matrix3&in)", AS_METHODPR(Matrix4, SetRotation, (const Matrix3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix4::SetScale(const Vector3& scale)", "void SetScale(const Vector3&in)", AS_METHODPR(Matrix4, SetScale, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix4::SetScale(float scale)", "void SetScale(float)", AS_METHODPR(Matrix4, SetScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix4::ToMatrix3() const", "Matrix3 ToMatrix3() const", AS_METHODPR(Matrix4, ToMatrix3, () const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Matrix4::RotationMatrix() const", "Matrix3 RotationMatrix() const", AS_METHODPR(Matrix4, RotationMatrix, () const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix4::Translation() const", "Vector3 Translation() const", AS_METHODPR(Matrix4, Translation, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Matrix4::Rotation() const", "Quaternion Rotation() const", AS_METHODPR(Matrix4, Rotation, () const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix4::Scale() const", "Vector3 Scale() const", AS_METHODPR(Matrix4, Scale, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Matrix4::SignedScale(const Matrix3& rotation) const", "Vector3 SignedScale(const Matrix3&in) const", AS_METHODPR(Matrix4, SignedScale, (const Matrix3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4 Matrix4::Transpose() const", "Matrix4 Transpose() const", AS_METHODPR(Matrix4, Transpose, () const, Matrix4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix4::Equals(const Matrix4& rhs) const", "bool Equals(const Matrix4&in) const", AS_METHODPR(Matrix4, Equals, (const Matrix4&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Matrix4::Decompose(Vector3& translation, Quaternion& rotation, Vector3& scale) const", "void Decompose(Vector3&, Quaternion&, Vector3&) const", AS_METHODPR(Matrix4, Decompose, (Vector3&, Quaternion&, Vector3&) const, void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix4 Matrix4::Inverse() const", "Matrix4 Inverse() const", AS_METHODPR(Matrix4, Inverse, () const, Matrix4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Matrix4::Element(unsigned i, unsigned j) const", "float Element(uint, uint) const", AS_METHODPR(Matrix4, Element, (unsigned, unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Matrix4::Row(unsigned i) const", "Vector4 Row(uint) const", AS_METHODPR(Matrix4, Row, (unsigned) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Matrix4::Column(unsigned j) const", "Vector4 Column(uint) const", AS_METHODPR(Matrix4, Column, (unsigned) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix4::IsNaN() const", "bool IsNaN() const", AS_METHODPR(Matrix4, IsNaN, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Matrix4::IsInf() const", "bool IsInf() const", AS_METHODPR(Matrix4, IsInf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Matrix4::ToString() const", "String ToString() const", AS_METHODPR(Matrix4, ToString, () const, String), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m00_", "float m00", offsetof(Matrix4, m00_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m01_", "float m01", offsetof(Matrix4, m01_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m02_", "float m02", offsetof(Matrix4, m02_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m03_", "float m03", offsetof(Matrix4, m03_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m10_", "float m10", offsetof(Matrix4, m10_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m11_", "float m11", offsetof(Matrix4, m11_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m12_", "float m12", offsetof(Matrix4, m12_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m13_", "float m13", offsetof(Matrix4, m13_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m20_", "float m20", offsetof(Matrix4, m20_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m21_", "float m21", offsetof(Matrix4, m21_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m22_", "float m22", offsetof(Matrix4, m22_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m23_", "float m23", offsetof(Matrix4, m23_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m30_", "float m30", offsetof(Matrix4, m30_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m31_", "float m31", offsetof(Matrix4, m31_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m32_", "float m32", offsetof(Matrix4, m32_)));
    fields.Push(RegisterObjectPropertyArgs("float Matrix4::m33_", "float m33", offsetof(Matrix4, m33_)));
}

// class Plane | File: ../Math/Plane.h
void CollectMembers_Plane(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    methods.Push(RegisterObjectMethodArgs("Plane& Plane::operator=(const Plane& rhs) noexcept=default", "Plane& opAssign(const Plane&in)", AS_METHODPR(Plane, operator=, (const Plane&), Plane&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Plane::Define(const Vector3& v0, const Vector3& v1, const Vector3& v2)", "void Define(const Vector3&in, const Vector3&in, const Vector3&in)", AS_METHODPR(Plane, Define, (const Vector3&, const Vector3&, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Plane::Define(const Vector3& normal, const Vector3& point)", "void Define(const Vector3&in, const Vector3&in)", AS_METHODPR(Plane, Define, (const Vector3&, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Plane::Define(const Vector4& plane)", "void Define(const Vector4&in)", AS_METHODPR(Plane, Define, (const Vector4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Plane::Transform(const Matrix3& transform)", "void Transform(const Matrix3&in)", AS_METHODPR(Plane, Transform, (const Matrix3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Plane::Transform(const Matrix3x4& transform)", "void Transform(const Matrix3x4&in)", AS_METHODPR(Plane, Transform, (const Matrix3x4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Plane::Transform(const Matrix4& transform)", "void Transform(const Matrix4&in)", AS_METHODPR(Plane, Transform, (const Matrix4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Plane::Project(const Vector3& point) const", "Vector3 Project(const Vector3&in) const", AS_METHODPR(Plane, Project, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Plane::Distance(const Vector3& point) const", "float Distance(const Vector3&in) const", AS_METHODPR(Plane, Distance, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Plane::Reflect(const Vector3& direction) const", "Vector3 Reflect(const Vector3&in) const", AS_METHODPR(Plane, Reflect, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4 Plane::ReflectionMatrix() const", "Matrix3x4 ReflectionMatrix() const", AS_METHODPR(Plane, ReflectionMatrix, () const, Matrix3x4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3x4 Plane::ReflectionMatrix() const", "Matrix3x4 get_reflectionMatrix() const", AS_METHODPR(Plane, ReflectionMatrix, () const, Matrix3x4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Plane Plane::Transformed(const Matrix3& transform) const", "Plane Transformed(const Matrix3&in) const", AS_METHODPR(Plane, Transformed, (const Matrix3&) const, Plane), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Plane Plane::Transformed(const Matrix3x4& transform) const", "Plane Transformed(const Matrix3x4&in) const", AS_METHODPR(Plane, Transformed, (const Matrix3x4&) const, Plane), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Plane Plane::Transformed(const Matrix4& transform) const", "Plane Transformed(const Matrix4&in) const", AS_METHODPR(Plane, Transformed, (const Matrix4&) const, Plane), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Plane::ToVector4() const", "Vector4 ToVector4() const", AS_METHODPR(Plane, ToVector4, () const, Vector4), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("Vector3 Plane::normal_", "Vector3 normal", offsetof(Plane, normal_)));
    fields.Push(RegisterObjectPropertyArgs("Vector3 Plane::absNormal_", "Vector3 absNormal", offsetof(Plane, absNormal_)));
    fields.Push(RegisterObjectPropertyArgs("float Plane::d_", "float d", offsetof(Plane, d_)));
}

// void Polyhedron::AddFace(const PODVector<Vector3>& face)
// void Polyhedron::AddFace(const PODVector<Vector3>& face) | File: ../Math/Polyhedron.h
static void Polyhedron_AddFace_PODVectorVector3(Polyhedron* ptr, CScriptArray* face_conv)
{
    PODVector<Vector3> face = ArrayToPODVector<Vector3>(face_conv);
    ptr->AddFace(face);
}


// class Polyhedron | File: ../Math/Polyhedron.h
void CollectMembers_Polyhedron(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    methods.Push(RegisterObjectMethodArgs("Polyhedron& Polyhedron::operator=(const Polyhedron& rhs)", "Polyhedron& opAssign(const Polyhedron&in)", AS_METHODPR(Polyhedron, operator=, (const Polyhedron&), Polyhedron&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::Define(const BoundingBox& box)", "void Define(const BoundingBox&in)", AS_METHODPR(Polyhedron, Define, (const BoundingBox&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::Define(const Frustum& frustum)", "void Define(const Frustum&in)", AS_METHODPR(Polyhedron, Define, (const Frustum&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::AddFace(const Vector3& v0, const Vector3& v1, const Vector3& v2)", "void AddFace(const Vector3&in, const Vector3&in, const Vector3&in)", AS_METHODPR(Polyhedron, AddFace, (const Vector3&, const Vector3&, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::AddFace(const Vector3& v0, const Vector3& v1, const Vector3& v2, const Vector3& v3)", "void AddFace(const Vector3&in, const Vector3&in, const Vector3&in, const Vector3&in)", AS_METHODPR(Polyhedron, AddFace, (const Vector3&, const Vector3&, const Vector3&, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::AddFace(const PODVector<Vector3>& face)", "void AddFace(Array<Vector3>@+)", AS_FUNCTION_OBJFIRST(Polyhedron_AddFace_PODVectorVector3), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::Clip(const Plane& plane)", "void Clip(const Plane&in)", AS_METHODPR(Polyhedron, Clip, (const Plane&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::Clip(const BoundingBox& box)", "void Clip(const BoundingBox&in)", AS_METHODPR(Polyhedron, Clip, (const BoundingBox&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::Clip(const Frustum& frustum)", "void Clip(const Frustum&in)", AS_METHODPR(Polyhedron, Clip, (const Frustum&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::Clear()", "void Clear()", AS_METHODPR(Polyhedron, Clear, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::Transform(const Matrix3& transform)", "void Transform(const Matrix3&in)", AS_METHODPR(Polyhedron, Transform, (const Matrix3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Polyhedron::Transform(const Matrix3x4& transform)", "void Transform(const Matrix3x4&in)", AS_METHODPR(Polyhedron, Transform, (const Matrix3x4&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Polyhedron Polyhedron::Transformed(const Matrix3& transform) const", "Polyhedron Transformed(const Matrix3&in) const", AS_METHODPR(Polyhedron, Transformed, (const Matrix3&) const, Polyhedron), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Polyhedron Polyhedron::Transformed(const Matrix3x4& transform) const", "Polyhedron Transformed(const Matrix3x4&in) const", AS_METHODPR(Polyhedron, Transformed, (const Matrix3x4&) const, Polyhedron), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Polyhedron::Empty() const", "bool Empty() const", AS_METHODPR(Polyhedron, Empty, () const, bool), AS_CALL_THISCALL));

    // Vector<PODVector<Vector3>> Polyhedron::faces_
    // Error: type "Vector<PODVector<Vector3>>" can not automatically bind
}

// class Quaternion | File: ../Math/Quaternion.h
void CollectMembers_Quaternion(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const float* Quaternion::Data() const
    // Error: type "const float*" can not automatically bind
    // bool Quaternion::operator!=(const Quaternion& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Quaternion& Quaternion::operator=(const Quaternion& rhs) noexcept", "Quaternion& opAssign(const Quaternion&in)", AS_METHODPR(Quaternion, operator=, (const Quaternion&), Quaternion&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion& Quaternion::operator+=(const Quaternion& rhs)", "Quaternion& opAddAssign(const Quaternion&in)", AS_METHODPR(Quaternion, operator+=, (const Quaternion&), Quaternion&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion& Quaternion::operator*=(float rhs)", "Quaternion& opMulAssign(float)", AS_METHODPR(Quaternion, operator*=, (float), Quaternion&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Quaternion::operator==(const Quaternion& rhs) const", "bool opEquals(const Quaternion&in) const", AS_METHODPR(Quaternion, operator==, (const Quaternion&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Quaternion::operator*(float rhs) const", "Quaternion opMul(float) const", AS_METHODPR(Quaternion, operator*, (float) const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Quaternion::operator-() const", "Quaternion opNeg() const", AS_METHODPR(Quaternion, operator-, () const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Quaternion::operator+(const Quaternion& rhs) const", "Quaternion opAdd(const Quaternion&in) const", AS_METHODPR(Quaternion, operator+, (const Quaternion&) const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Quaternion::operator-(const Quaternion& rhs) const", "Quaternion opSub(const Quaternion&in) const", AS_METHODPR(Quaternion, operator-, (const Quaternion&) const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Quaternion::operator*(const Quaternion& rhs) const", "Quaternion opMul(const Quaternion&in) const", AS_METHODPR(Quaternion, operator*, (const Quaternion&) const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Quaternion::operator*(const Vector3& rhs) const", "Vector3 opMul(const Vector3&in) const", AS_METHODPR(Quaternion, operator*, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Quaternion::FromAngleAxis(float angle, const Vector3& axis)", "void FromAngleAxis(float, const Vector3&in)", AS_METHODPR(Quaternion, FromAngleAxis, (float, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Quaternion::FromEulerAngles(float x, float y, float z)", "void FromEulerAngles(float, float, float)", AS_METHODPR(Quaternion, FromEulerAngles, (float, float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Quaternion::FromRotationTo(const Vector3& start, const Vector3& end)", "void FromRotationTo(const Vector3&in, const Vector3&in)", AS_METHODPR(Quaternion, FromRotationTo, (const Vector3&, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Quaternion::FromAxes(const Vector3& xAxis, const Vector3& yAxis, const Vector3& zAxis)", "void FromAxes(const Vector3&in, const Vector3&in, const Vector3&in)", AS_METHODPR(Quaternion, FromAxes, (const Vector3&, const Vector3&, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Quaternion::FromRotationMatrix(const Matrix3& matrix)", "void FromRotationMatrix(const Matrix3&in)", AS_METHODPR(Quaternion, FromRotationMatrix, (const Matrix3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Quaternion::FromLookRotation(const Vector3& direction, const Vector3& up=Vector3::UP)", "bool FromLookRotation(const Vector3&in, const Vector3&in = Vector3::UP)", AS_METHODPR(Quaternion, FromLookRotation, (const Vector3&, const Vector3&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Quaternion::Normalize()", "void Normalize()", AS_METHODPR(Quaternion, Normalize, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Quaternion::Normalized() const", "Quaternion Normalized() const", AS_METHODPR(Quaternion, Normalized, () const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Quaternion::Inverse() const", "Quaternion Inverse() const", AS_METHODPR(Quaternion, Inverse, () const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Quaternion::LengthSquared() const", "float LengthSquared() const", AS_METHODPR(Quaternion, LengthSquared, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Quaternion::DotProduct(const Quaternion& rhs) const", "float DotProduct(const Quaternion&in) const", AS_METHODPR(Quaternion, DotProduct, (const Quaternion&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Quaternion::Equals(const Quaternion& rhs) const", "bool Equals(const Quaternion&in) const", AS_METHODPR(Quaternion, Equals, (const Quaternion&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Quaternion::IsNaN() const", "bool IsNaN() const", AS_METHODPR(Quaternion, IsNaN, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Quaternion::IsInf() const", "bool IsInf() const", AS_METHODPR(Quaternion, IsInf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Quaternion::Conjugate() const", "Quaternion Conjugate() const", AS_METHODPR(Quaternion, Conjugate, () const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Quaternion::EulerAngles() const", "Vector3 EulerAngles() const", AS_METHODPR(Quaternion, EulerAngles, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Quaternion::EulerAngles() const", "Vector3 get_eulerAngles() const", AS_METHODPR(Quaternion, EulerAngles, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Quaternion::YawAngle() const", "float YawAngle() const", AS_METHODPR(Quaternion, YawAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Quaternion::YawAngle() const", "float get_yaw() const", AS_METHODPR(Quaternion, YawAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Quaternion::PitchAngle() const", "float PitchAngle() const", AS_METHODPR(Quaternion, PitchAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Quaternion::PitchAngle() const", "float get_pitch() const", AS_METHODPR(Quaternion, PitchAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Quaternion::RollAngle() const", "float RollAngle() const", AS_METHODPR(Quaternion, RollAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Quaternion::RollAngle() const", "float get_roll() const", AS_METHODPR(Quaternion, RollAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Quaternion::Axis() const", "Vector3 Axis() const", AS_METHODPR(Quaternion, Axis, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Quaternion::Axis() const", "Vector3 get_axis() const", AS_METHODPR(Quaternion, Axis, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Quaternion::Angle() const", "float Angle() const", AS_METHODPR(Quaternion, Angle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Quaternion::Angle() const", "float get_angle() const", AS_METHODPR(Quaternion, Angle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Quaternion::RotationMatrix() const", "Matrix3 RotationMatrix() const", AS_METHODPR(Quaternion, RotationMatrix, () const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Matrix3 Quaternion::RotationMatrix() const", "Matrix3 get_rotationMatrix() const", AS_METHODPR(Quaternion, RotationMatrix, () const, Matrix3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Quaternion::Slerp(const Quaternion& rhs, float t) const", "Quaternion Slerp(const Quaternion&in, float) const", AS_METHODPR(Quaternion, Slerp, (const Quaternion&, float) const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Quaternion Quaternion::Nlerp(const Quaternion& rhs, float t, bool shortestPath=false) const", "Quaternion Nlerp(const Quaternion&in, float, bool = false) const", AS_METHODPR(Quaternion, Nlerp, (const Quaternion&, float, bool) const, Quaternion), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Quaternion::ToString() const", "String ToString() const", AS_METHODPR(Quaternion, ToString, () const, String), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("float Quaternion::w_", "float w", offsetof(Quaternion, w_)));
    fields.Push(RegisterObjectPropertyArgs("float Quaternion::x_", "float x", offsetof(Quaternion, x_)));
    fields.Push(RegisterObjectPropertyArgs("float Quaternion::y_", "float y", offsetof(Quaternion, y_)));
    fields.Push(RegisterObjectPropertyArgs("float Quaternion::z_", "float z", offsetof(Quaternion, z_)));
}

// class Ray | File: ../Math/Ray.h
void CollectMembers_Ray(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // float Ray::HitDistance(const Vector3& v0, const Vector3& v1, const Vector3& v2, Vector3* outNormal=nullptr, Vector3* outBary=nullptr) const
    // Error: type "Vector3*" can not automatically bind
    // float Ray::HitDistance(const void* vertexData, unsigned vertexStride, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount, Vector3* outNormal=nullptr, Vector2* outUV=nullptr, unsigned uvOffset=0) const
    // Error: type "const void*" can not automatically bind
    // float Ray::HitDistance(const void* vertexData, unsigned vertexStride, unsigned vertexStart, unsigned vertexCount, Vector3* outNormal=nullptr, Vector2* outUV=nullptr, unsigned uvOffset=0) const
    // Error: type "const void*" can not automatically bind
    // bool Ray::InsideGeometry(const void* vertexData, unsigned vertexSize, const void* indexData, unsigned indexSize, unsigned indexStart, unsigned indexCount) const
    // Error: type "const void*" can not automatically bind
    // bool Ray::InsideGeometry(const void* vertexData, unsigned vertexSize, unsigned vertexStart, unsigned vertexCount) const
    // Error: type "const void*" can not automatically bind
    // bool Ray::operator!=(const Ray& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Ray& Ray::operator=(const Ray& rhs) noexcept=default", "Ray& opAssign(const Ray&in)", AS_METHODPR(Ray, operator=, (const Ray&), Ray&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Ray::operator==(const Ray& rhs) const", "bool opEquals(const Ray&in) const", AS_METHODPR(Ray, operator==, (const Ray&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Ray::Define(const Vector3& origin, const Vector3& direction)", "void Define(const Vector3&in, const Vector3&in)", AS_METHODPR(Ray, Define, (const Vector3&, const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Ray::Project(const Vector3& point) const", "Vector3 Project(const Vector3&in) const", AS_METHODPR(Ray, Project, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Ray::Distance(const Vector3& point) const", "float Distance(const Vector3&in) const", AS_METHODPR(Ray, Distance, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Ray::ClosestPoint(const Ray& ray) const", "Vector3 ClosestPoint(const Ray&in) const", AS_METHODPR(Ray, ClosestPoint, (const Ray&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Ray::HitDistance(const Plane& plane) const", "float HitDistance(const Plane&in) const", AS_METHODPR(Ray, HitDistance, (const Plane&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Ray::HitDistance(const BoundingBox& box) const", "float HitDistance(const BoundingBox&in) const", AS_METHODPR(Ray, HitDistance, (const BoundingBox&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Ray::HitDistance(const Frustum& frustum, bool solidInside=true) const", "float HitDistance(const Frustum&in, bool = true) const", AS_METHODPR(Ray, HitDistance, (const Frustum&, bool) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Ray::HitDistance(const Sphere& sphere) const", "float HitDistance(const Sphere&in) const", AS_METHODPR(Ray, HitDistance, (const Sphere&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Ray Ray::Transformed(const Matrix3x4& transform) const", "Ray Transformed(const Matrix3x4&in) const", AS_METHODPR(Ray, Transformed, (const Matrix3x4&) const, Ray), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("Vector3 Ray::origin_", "Vector3 origin", offsetof(Ray, origin_)));
    fields.Push(RegisterObjectPropertyArgs("Vector3 Ray::direction_", "Vector3 direction", offsetof(Ray, direction_)));
}

// class Rect | File: ../Math/Rect.h
void CollectMembers_Rect(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const float* Rect::Data() const
    // Error: type "const float*" can not automatically bind
    // bool Rect::operator!=(const Rect& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Rect& Rect::operator=(const Rect& rhs) noexcept=default", "Rect& opAssign(const Rect&in)", AS_METHODPR(Rect, operator=, (const Rect&), Rect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Rect::operator==(const Rect& rhs) const", "bool opEquals(const Rect&in) const", AS_METHODPR(Rect, operator==, (const Rect&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect& Rect::operator+=(const Rect& rhs)", "Rect& opAddAssign(const Rect&in)", AS_METHODPR(Rect, operator+=, (const Rect&), Rect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect& Rect::operator-=(const Rect& rhs)", "Rect& opSubAssign(const Rect&in)", AS_METHODPR(Rect, operator-=, (const Rect&), Rect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect& Rect::operator/=(float value)", "Rect& opDivAssign(float)", AS_METHODPR(Rect, operator/=, (float), Rect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect& Rect::operator*=(float value)", "Rect& opMulAssign(float)", AS_METHODPR(Rect, operator*=, (float), Rect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect Rect::operator/(float value) const", "Rect opDiv(float) const", AS_METHODPR(Rect, operator/, (float) const, Rect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect Rect::operator*(float value) const", "Rect opMul(float) const", AS_METHODPR(Rect, operator*, (float) const, Rect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect Rect::operator+(const Rect& rhs) const", "Rect opAdd(const Rect&in) const", AS_METHODPR(Rect, operator+, (const Rect&) const, Rect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Rect Rect::operator-(const Rect& rhs) const", "Rect opSub(const Rect&in) const", AS_METHODPR(Rect, operator-, (const Rect&) const, Rect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Rect::Define(const Rect& rect)", "void Define(const Rect&in)", AS_METHODPR(Rect, Define, (const Rect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Rect::Define(const Vector2& min, const Vector2& max)", "void Define(const Vector2&in, const Vector2&in)", AS_METHODPR(Rect, Define, (const Vector2&, const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Rect::Define(const Vector2& point)", "void Define(const Vector2&in)", AS_METHODPR(Rect, Define, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Rect::Merge(const Vector2& point)", "void Merge(const Vector2&in)", AS_METHODPR(Rect, Merge, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Rect::Merge(const Rect& rect)", "void Merge(const Rect&in)", AS_METHODPR(Rect, Merge, (const Rect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Rect::Clear()", "void Clear()", AS_METHODPR(Rect, Clear, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Rect::Clip(const Rect& rect)", "void Clip(const Rect&in)", AS_METHODPR(Rect, Clip, (const Rect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Rect::Defined() const", "bool Defined() const", AS_METHODPR(Rect, Defined, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Rect::Center() const", "Vector2 Center() const", AS_METHODPR(Rect, Center, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Rect::Center() const", "Vector2 get_center() const", AS_METHODPR(Rect, Center, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Rect::Size() const", "Vector2 Size() const", AS_METHODPR(Rect, Size, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Rect::Size() const", "Vector2 get_size() const", AS_METHODPR(Rect, Size, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Rect::HalfSize() const", "Vector2 HalfSize() const", AS_METHODPR(Rect, HalfSize, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Rect::HalfSize() const", "Vector2 get_halfSize() const", AS_METHODPR(Rect, HalfSize, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Rect::Equals(const Rect& rhs) const", "bool Equals(const Rect&in) const", AS_METHODPR(Rect, Equals, (const Rect&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Rect::IsInside(const Vector2& point) const", "Intersection IsInside(const Vector2&in) const", AS_METHODPR(Rect, IsInside, (const Vector2&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Rect::IsInside(const Rect& rect) const", "Intersection IsInside(const Rect&in) const", AS_METHODPR(Rect, IsInside, (const Rect&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Rect::ToVector4() const", "Vector4 ToVector4() const", AS_METHODPR(Rect, ToVector4, () const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Rect::ToString() const", "String ToString() const", AS_METHODPR(Rect, ToString, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Rect::Min() const", "Vector2 Min() const", AS_METHODPR(Rect, Min, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Rect::Max() const", "Vector2 Max() const", AS_METHODPR(Rect, Max, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Rect::Left() const", "float Left() const", AS_METHODPR(Rect, Left, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Rect::Left() const", "float get_left() const", AS_METHODPR(Rect, Left, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Rect::Top() const", "float Top() const", AS_METHODPR(Rect, Top, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Rect::Top() const", "float get_top() const", AS_METHODPR(Rect, Top, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Rect::Right() const", "float Right() const", AS_METHODPR(Rect, Right, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Rect::Right() const", "float get_right() const", AS_METHODPR(Rect, Right, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Rect::Bottom() const", "float Bottom() const", AS_METHODPR(Rect, Bottom, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Rect::Bottom() const", "float get_bottom() const", AS_METHODPR(Rect, Bottom, () const, float), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("Vector2 Rect::min_", "Vector2 min", offsetof(Rect, min_)));
    fields.Push(RegisterObjectPropertyArgs("Vector2 Rect::max_", "Vector2 max", offsetof(Rect, max_)));
}

// class Sphere | File: ../Math/Sphere.h
void CollectMembers_Sphere(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // void Sphere::Define(const Vector3* vertices, unsigned count)
    // Error: type "const Vector3*" can not automatically bind
    // void Sphere::Merge(const Vector3* vertices, unsigned count)
    // Error: type "const Vector3*" can not automatically bind
    // bool Sphere::operator!=(const Sphere& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Sphere& Sphere::operator=(const Sphere& rhs) noexcept=default", "Sphere& opAssign(const Sphere&in)", AS_METHODPR(Sphere, operator=, (const Sphere&), Sphere&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sphere::operator==(const Sphere& rhs) const", "bool opEquals(const Sphere&in) const", AS_METHODPR(Sphere, operator==, (const Sphere&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Define(const Sphere& sphere)", "void Define(const Sphere&in)", AS_METHODPR(Sphere, Define, (const Sphere&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Define(const Vector3& center, float radius)", "void Define(const Vector3&in, float)", AS_METHODPR(Sphere, Define, (const Vector3&, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Define(const BoundingBox& box)", "void Define(const BoundingBox&in)", AS_METHODPR(Sphere, Define, (const BoundingBox&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Define(const Frustum& frustum)", "void Define(const Frustum&in)", AS_METHODPR(Sphere, Define, (const Frustum&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Define(const Polyhedron& poly)", "void Define(const Polyhedron&in)", AS_METHODPR(Sphere, Define, (const Polyhedron&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Merge(const Vector3& point)", "void Merge(const Vector3&in)", AS_METHODPR(Sphere, Merge, (const Vector3&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Merge(const BoundingBox& box)", "void Merge(const BoundingBox&in)", AS_METHODPR(Sphere, Merge, (const BoundingBox&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Merge(const Frustum& frustum)", "void Merge(const Frustum&in)", AS_METHODPR(Sphere, Merge, (const Frustum&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Merge(const Polyhedron& poly)", "void Merge(const Polyhedron&in)", AS_METHODPR(Sphere, Merge, (const Polyhedron&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Merge(const Sphere& sphere)", "void Merge(const Sphere&in)", AS_METHODPR(Sphere, Merge, (const Sphere&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sphere::Clear()", "void Clear()", AS_METHODPR(Sphere, Clear, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sphere::Defined() const", "bool Defined() const", AS_METHODPR(Sphere, Defined, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Sphere::IsInside(const Vector3& point) const", "Intersection IsInside(const Vector3&in) const", AS_METHODPR(Sphere, IsInside, (const Vector3&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Sphere::IsInside(const Sphere& sphere) const", "Intersection IsInside(const Sphere&in) const", AS_METHODPR(Sphere, IsInside, (const Sphere&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Sphere::IsInsideFast(const Sphere& sphere) const", "Intersection IsInsideFast(const Sphere&in) const", AS_METHODPR(Sphere, IsInsideFast, (const Sphere&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Sphere::IsInside(const BoundingBox& box) const", "Intersection IsInside(const BoundingBox&in) const", AS_METHODPR(Sphere, IsInside, (const BoundingBox&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Intersection Sphere::IsInsideFast(const BoundingBox& box) const", "Intersection IsInsideFast(const BoundingBox&in) const", AS_METHODPR(Sphere, IsInsideFast, (const BoundingBox&) const, Intersection), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Sphere::Distance(const Vector3& point) const", "float Distance(const Vector3&in) const", AS_METHODPR(Sphere, Distance, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Sphere::GetLocalPoint(float theta, float phi) const", "Vector3 GetLocalPoint(float, float) const", AS_METHODPR(Sphere, GetLocalPoint, (float, float) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Sphere::GetPoint(float theta, float phi) const", "Vector3 GetPoint(float, float) const", AS_METHODPR(Sphere, GetPoint, (float, float) const, Vector3), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("Vector3 Sphere::center_", "Vector3 center", offsetof(Sphere, center_)));
    fields.Push(RegisterObjectPropertyArgs("float Sphere::radius_", "float radius", offsetof(Sphere, radius_)));
}

// class StringHash | File: ../Math/StringHash.h
void CollectMembers_StringHash(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // bool StringHash::operator!=(const StringHash& rhs) const
    // Only operator== is needed
    // bool StringHash::operator<(const StringHash& rhs) const
    // Registerd as opCmp separately
    // bool StringHash::operator>(const StringHash& rhs) const
    // Registerd as opCmp separately

    methods.Push(RegisterObjectMethodArgs("StringHash& StringHash::operator=(const StringHash& rhs) noexcept=default", "StringHash& opAssign(const StringHash&in)", AS_METHODPR(StringHash, operator=, (const StringHash&), StringHash&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("StringHash StringHash::operator+(const StringHash& rhs) const", "StringHash opAdd(const StringHash&in) const", AS_METHODPR(StringHash, operator+, (const StringHash&) const, StringHash), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("StringHash& StringHash::operator+=(const StringHash& rhs)", "StringHash& opAddAssign(const StringHash&in)", AS_METHODPR(StringHash, operator+=, (const StringHash&), StringHash&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StringHash::operator==(const StringHash& rhs) const", "bool opEquals(const StringHash&in) const", AS_METHODPR(StringHash, operator==, (const StringHash&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("explicit StringHash::operator bool() const", "bool opConv() const", AS_METHODPR(StringHash, operator bool, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned StringHash::Value() const", "uint Value() const", AS_METHODPR(StringHash, Value, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned StringHash::Value() const", "uint get_value() const", AS_METHODPR(StringHash, Value, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String StringHash::ToString() const", "String ToString() const", AS_METHODPR(StringHash, ToString, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String StringHash::Reverse() const", "String Reverse() const", AS_METHODPR(StringHash, Reverse, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned StringHash::ToHash() const", "uint ToHash() const", AS_METHODPR(StringHash, ToHash, () const, unsigned), AS_CALL_THISCALL));
}

// class Vector2 | File: ../Math/Vector2.h
void CollectMembers_Vector2(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const float* Vector2::Data() const
    // Error: type "const float*" can not automatically bind
    // bool Vector2::operator!=(const Vector2& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Vector2& Vector2::operator=(const Vector2& rhs) noexcept=default", "Vector2& opAssign(const Vector2&in)", AS_METHODPR(Vector2, operator=, (const Vector2&), Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector2::operator==(const Vector2& rhs) const", "bool opEquals(const Vector2&in) const", AS_METHODPR(Vector2, operator==, (const Vector2&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::operator+(const Vector2& rhs) const", "Vector2 opAdd(const Vector2&in) const", AS_METHODPR(Vector2, operator+, (const Vector2&) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::operator-() const", "Vector2 opNeg() const", AS_METHODPR(Vector2, operator-, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::operator-(const Vector2& rhs) const", "Vector2 opSub(const Vector2&in) const", AS_METHODPR(Vector2, operator-, (const Vector2&) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::operator*(float rhs) const", "Vector2 opMul(float) const", AS_METHODPR(Vector2, operator*, (float) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::operator*(const Vector2& rhs) const", "Vector2 opMul(const Vector2&in) const", AS_METHODPR(Vector2, operator*, (const Vector2&) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::operator/(float rhs) const", "Vector2 opDiv(float) const", AS_METHODPR(Vector2, operator/, (float) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::operator/(const Vector2& rhs) const", "Vector2 opDiv(const Vector2&in) const", AS_METHODPR(Vector2, operator/, (const Vector2&) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2& Vector2::operator+=(const Vector2& rhs)", "Vector2& opAddAssign(const Vector2&in)", AS_METHODPR(Vector2, operator+=, (const Vector2&), Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2& Vector2::operator-=(const Vector2& rhs)", "Vector2& opSubAssign(const Vector2&in)", AS_METHODPR(Vector2, operator-=, (const Vector2&), Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2& Vector2::operator*=(float rhs)", "Vector2& opMulAssign(float)", AS_METHODPR(Vector2, operator*=, (float), Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2& Vector2::operator*=(const Vector2& rhs)", "Vector2& opMulAssign(const Vector2&in)", AS_METHODPR(Vector2, operator*=, (const Vector2&), Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2& Vector2::operator/=(float rhs)", "Vector2& opDivAssign(float)", AS_METHODPR(Vector2, operator/=, (float), Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2& Vector2::operator/=(const Vector2& rhs)", "Vector2& opDivAssign(const Vector2&in)", AS_METHODPR(Vector2, operator/=, (const Vector2&), Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Vector2::Normalize()", "void Normalize()", AS_METHODPR(Vector2, Normalize, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector2::Length() const", "float Length() const", AS_METHODPR(Vector2, Length, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector2::Length() const", "float get_length() const", AS_METHODPR(Vector2, Length, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector2::LengthSquared() const", "float LengthSquared() const", AS_METHODPR(Vector2, LengthSquared, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector2::LengthSquared() const", "float get_lengthSquared() const", AS_METHODPR(Vector2, LengthSquared, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector2::DotProduct(const Vector2& rhs) const", "float DotProduct(const Vector2&in) const", AS_METHODPR(Vector2, DotProduct, (const Vector2&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector2::AbsDotProduct(const Vector2& rhs) const", "float AbsDotProduct(const Vector2&in) const", AS_METHODPR(Vector2, AbsDotProduct, (const Vector2&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector2::ProjectOntoAxis(const Vector2& axis) const", "float ProjectOntoAxis(const Vector2&in) const", AS_METHODPR(Vector2, ProjectOntoAxis, (const Vector2&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector2::Angle(const Vector2& rhs) const", "float Angle(const Vector2&in) const", AS_METHODPR(Vector2, Angle, (const Vector2&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::Abs() const", "Vector2 Abs() const", AS_METHODPR(Vector2, Abs, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::Lerp(const Vector2& rhs, float t) const", "Vector2 Lerp(const Vector2&in, float) const", AS_METHODPR(Vector2, Lerp, (const Vector2&, float) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector2::Equals(const Vector2& rhs) const", "bool Equals(const Vector2&in) const", AS_METHODPR(Vector2, Equals, (const Vector2&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector2::IsNaN() const", "bool IsNaN() const", AS_METHODPR(Vector2, IsNaN, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector2::IsInf() const", "bool IsInf() const", AS_METHODPR(Vector2, IsInf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::Normalized() const", "Vector2 Normalized() const", AS_METHODPR(Vector2, Normalized, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::NormalizedOrDefault(const Vector2& defaultValue=Vector2::ZERO, float eps=M_LARGE_EPSILON) const", "Vector2 NormalizedOrDefault(const Vector2&in = Vector2::ZERO, float = M_LARGE_EPSILON) const", AS_METHODPR(Vector2, NormalizedOrDefault, (const Vector2&, float) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Vector2::ReNormalized(float minLength, float maxLength, const Vector2& defaultValue=Vector2::ZERO, float eps=M_LARGE_EPSILON) const", "Vector2 ReNormalized(float, float, const Vector2&in = Vector2::ZERO, float = M_LARGE_EPSILON) const", AS_METHODPR(Vector2, ReNormalized, (float, float, const Vector2&, float) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Vector2::ToString() const", "String ToString() const", AS_METHODPR(Vector2, ToString, () const, String), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("float Vector2::x_", "float x", offsetof(Vector2, x_)));
    fields.Push(RegisterObjectPropertyArgs("float Vector2::y_", "float y", offsetof(Vector2, y_)));
}

// class Vector3 | File: ../Math/Vector3.h
void CollectMembers_Vector3(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const float* Vector3::Data() const
    // Error: type "const float*" can not automatically bind
    // bool Vector3::operator!=(const Vector3& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Vector3& Vector3::operator=(const Vector3& rhs) noexcept=default", "Vector3& opAssign(const Vector3&in)", AS_METHODPR(Vector3, operator=, (const Vector3&), Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector3::operator==(const Vector3& rhs) const", "bool opEquals(const Vector3&in) const", AS_METHODPR(Vector3, operator==, (const Vector3&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::operator+(const Vector3& rhs) const", "Vector3 opAdd(const Vector3&in) const", AS_METHODPR(Vector3, operator+, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::operator-() const", "Vector3 opNeg() const", AS_METHODPR(Vector3, operator-, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::operator-(const Vector3& rhs) const", "Vector3 opSub(const Vector3&in) const", AS_METHODPR(Vector3, operator-, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::operator*(float rhs) const", "Vector3 opMul(float) const", AS_METHODPR(Vector3, operator*, (float) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::operator*(const Vector3& rhs) const", "Vector3 opMul(const Vector3&in) const", AS_METHODPR(Vector3, operator*, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::operator/(float rhs) const", "Vector3 opDiv(float) const", AS_METHODPR(Vector3, operator/, (float) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::operator/(const Vector3& rhs) const", "Vector3 opDiv(const Vector3&in) const", AS_METHODPR(Vector3, operator/, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3& Vector3::operator+=(const Vector3& rhs)", "Vector3& opAddAssign(const Vector3&in)", AS_METHODPR(Vector3, operator+=, (const Vector3&), Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3& Vector3::operator-=(const Vector3& rhs)", "Vector3& opSubAssign(const Vector3&in)", AS_METHODPR(Vector3, operator-=, (const Vector3&), Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3& Vector3::operator*=(float rhs)", "Vector3& opMulAssign(float)", AS_METHODPR(Vector3, operator*=, (float), Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3& Vector3::operator*=(const Vector3& rhs)", "Vector3& opMulAssign(const Vector3&in)", AS_METHODPR(Vector3, operator*=, (const Vector3&), Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3& Vector3::operator/=(float rhs)", "Vector3& opDivAssign(float)", AS_METHODPR(Vector3, operator/=, (float), Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3& Vector3::operator/=(const Vector3& rhs)", "Vector3& opDivAssign(const Vector3&in)", AS_METHODPR(Vector3, operator/=, (const Vector3&), Vector3&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Vector3::Normalize()", "void Normalize()", AS_METHODPR(Vector3, Normalize, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector3::Length() const", "float Length() const", AS_METHODPR(Vector3, Length, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector3::Length() const", "float get_length() const", AS_METHODPR(Vector3, Length, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector3::LengthSquared() const", "float LengthSquared() const", AS_METHODPR(Vector3, LengthSquared, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector3::LengthSquared() const", "float get_lengthSquared() const", AS_METHODPR(Vector3, LengthSquared, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector3::DotProduct(const Vector3& rhs) const", "float DotProduct(const Vector3&in) const", AS_METHODPR(Vector3, DotProduct, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector3::AbsDotProduct(const Vector3& rhs) const", "float AbsDotProduct(const Vector3&in) const", AS_METHODPR(Vector3, AbsDotProduct, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector3::ProjectOntoAxis(const Vector3& axis) const", "float ProjectOntoAxis(const Vector3&in) const", AS_METHODPR(Vector3, ProjectOntoAxis, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::ProjectOntoPlane(const Vector3& origin, const Vector3& normal) const", "Vector3 ProjectOntoPlane(const Vector3&in, const Vector3&in) const", AS_METHODPR(Vector3, ProjectOntoPlane, (const Vector3&, const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::ProjectOntoLine(const Vector3& from, const Vector3& to, bool clamped=false) const", "Vector3 ProjectOntoLine(const Vector3&in, const Vector3&in, bool = false) const", AS_METHODPR(Vector3, ProjectOntoLine, (const Vector3&, const Vector3&, bool) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector3::DistanceToPoint(const Vector3& point) const", "float DistanceToPoint(const Vector3&in) const", AS_METHODPR(Vector3, DistanceToPoint, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector3::DistanceToPlane(const Vector3& origin, const Vector3& normal) const", "float DistanceToPlane(const Vector3&in, const Vector3&in) const", AS_METHODPR(Vector3, DistanceToPlane, (const Vector3&, const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::Orthogonalize(const Vector3& axis) const", "Vector3 Orthogonalize(const Vector3&in) const", AS_METHODPR(Vector3, Orthogonalize, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::CrossProduct(const Vector3& rhs) const", "Vector3 CrossProduct(const Vector3&in) const", AS_METHODPR(Vector3, CrossProduct, (const Vector3&) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::Abs() const", "Vector3 Abs() const", AS_METHODPR(Vector3, Abs, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::Lerp(const Vector3& rhs, float t) const", "Vector3 Lerp(const Vector3&in, float) const", AS_METHODPR(Vector3, Lerp, (const Vector3&, float) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector3::Equals(const Vector3& rhs) const", "bool Equals(const Vector3&in) const", AS_METHODPR(Vector3, Equals, (const Vector3&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector3::Angle(const Vector3& rhs) const", "float Angle(const Vector3&in) const", AS_METHODPR(Vector3, Angle, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector3::IsNaN() const", "bool IsNaN() const", AS_METHODPR(Vector3, IsNaN, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector3::IsInf() const", "bool IsInf() const", AS_METHODPR(Vector3, IsInf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::Normalized() const", "Vector3 Normalized() const", AS_METHODPR(Vector3, Normalized, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::NormalizedOrDefault(const Vector3& defaultValue=Vector3::ZERO, float eps=M_LARGE_EPSILON) const", "Vector3 NormalizedOrDefault(const Vector3&in = Vector3::ZERO, float = M_LARGE_EPSILON) const", AS_METHODPR(Vector3, NormalizedOrDefault, (const Vector3&, float) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector3 Vector3::ReNormalized(float minLength, float maxLength, const Vector3& defaultValue=Vector3::ZERO, float eps=M_LARGE_EPSILON) const", "Vector3 ReNormalized(float, float, const Vector3&in = Vector3::ZERO, float = M_LARGE_EPSILON) const", AS_METHODPR(Vector3, ReNormalized, (float, float, const Vector3&, float) const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Vector3::ToString() const", "String ToString() const", AS_METHODPR(Vector3, ToString, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Vector3::ToHash() const", "uint ToHash() const", AS_METHODPR(Vector3, ToHash, () const, unsigned), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("float Vector3::x_", "float x", offsetof(Vector3, x_)));
    fields.Push(RegisterObjectPropertyArgs("float Vector3::y_", "float y", offsetof(Vector3, y_)));
    fields.Push(RegisterObjectPropertyArgs("float Vector3::z_", "float z", offsetof(Vector3, z_)));
}

// class Vector4 | File: ../Math/Vector4.h
void CollectMembers_Vector4(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields)
{
    // const float* Vector4::Data() const
    // Error: type "const float*" can not automatically bind
    // bool Vector4::operator!=(const Vector4& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("Vector4& Vector4::operator=(const Vector4& rhs) noexcept=default", "Vector4& opAssign(const Vector4&in)", AS_METHODPR(Vector4, operator=, (const Vector4&), Vector4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector4::operator==(const Vector4& rhs) const", "bool opEquals(const Vector4&in) const", AS_METHODPR(Vector4, operator==, (const Vector4&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Vector4::operator+(const Vector4& rhs) const", "Vector4 opAdd(const Vector4&in) const", AS_METHODPR(Vector4, operator+, (const Vector4&) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Vector4::operator-() const", "Vector4 opNeg() const", AS_METHODPR(Vector4, operator-, () const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Vector4::operator-(const Vector4& rhs) const", "Vector4 opSub(const Vector4&in) const", AS_METHODPR(Vector4, operator-, (const Vector4&) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Vector4::operator*(float rhs) const", "Vector4 opMul(float) const", AS_METHODPR(Vector4, operator*, (float) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Vector4::operator*(const Vector4& rhs) const", "Vector4 opMul(const Vector4&in) const", AS_METHODPR(Vector4, operator*, (const Vector4&) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Vector4::operator/(float rhs) const", "Vector4 opDiv(float) const", AS_METHODPR(Vector4, operator/, (float) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Vector4::operator/(const Vector4& rhs) const", "Vector4 opDiv(const Vector4&in) const", AS_METHODPR(Vector4, operator/, (const Vector4&) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4& Vector4::operator+=(const Vector4& rhs)", "Vector4& opAddAssign(const Vector4&in)", AS_METHODPR(Vector4, operator+=, (const Vector4&), Vector4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4& Vector4::operator-=(const Vector4& rhs)", "Vector4& opSubAssign(const Vector4&in)", AS_METHODPR(Vector4, operator-=, (const Vector4&), Vector4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4& Vector4::operator*=(float rhs)", "Vector4& opMulAssign(float)", AS_METHODPR(Vector4, operator*=, (float), Vector4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4& Vector4::operator*=(const Vector4& rhs)", "Vector4& opMulAssign(const Vector4&in)", AS_METHODPR(Vector4, operator*=, (const Vector4&), Vector4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4& Vector4::operator/=(float rhs)", "Vector4& opDivAssign(float)", AS_METHODPR(Vector4, operator/=, (float), Vector4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4& Vector4::operator/=(const Vector4& rhs)", "Vector4& opDivAssign(const Vector4&in)", AS_METHODPR(Vector4, operator/=, (const Vector4&), Vector4&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector4::operator[](unsigned index) const", "float opIndex(uint) const", AS_METHODPR(Vector4, operator[], (unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float& Vector4::operator[](unsigned index)", "float& opIndex(uint)", AS_METHODPR(Vector4, operator[], (unsigned), float&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector4::DotProduct(const Vector4& rhs) const", "float DotProduct(const Vector4&in) const", AS_METHODPR(Vector4, DotProduct, (const Vector4&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector4::AbsDotProduct(const Vector4& rhs) const", "float AbsDotProduct(const Vector4&in) const", AS_METHODPR(Vector4, AbsDotProduct, (const Vector4&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Vector4::ProjectOntoAxis(const Vector3& axis) const", "float ProjectOntoAxis(const Vector3&in) const", AS_METHODPR(Vector4, ProjectOntoAxis, (const Vector3&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Vector4::Abs() const", "Vector4 Abs() const", AS_METHODPR(Vector4, Abs, () const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector4 Vector4::Lerp(const Vector4& rhs, float t) const", "Vector4 Lerp(const Vector4&in, float) const", AS_METHODPR(Vector4, Lerp, (const Vector4&, float) const, Vector4), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector4::Equals(const Vector4& rhs) const", "bool Equals(const Vector4&in) const", AS_METHODPR(Vector4, Equals, (const Vector4&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector4::IsNaN() const", "bool IsNaN() const", AS_METHODPR(Vector4, IsNaN, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Vector4::IsInf() const", "bool IsInf() const", AS_METHODPR(Vector4, IsInf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("explicit Vector4::operator Vector2() const", "Vector2 opConv() const", AS_METHODPR(Vector4, operator Vector2, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("explicit Vector4::operator Vector3() const", "Vector3 opConv() const", AS_METHODPR(Vector4, operator Vector3, () const, Vector3), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Vector4::ToString() const", "String ToString() const", AS_METHODPR(Vector4, ToString, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Vector4::ToHash() const", "uint ToHash() const", AS_METHODPR(Vector4, ToHash, () const, unsigned), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("float Vector4::x_", "float x", offsetof(Vector4, x_)));
    fields.Push(RegisterObjectPropertyArgs("float Vector4::y_", "float y", offsetof(Vector4, y_)));
    fields.Push(RegisterObjectPropertyArgs("float Vector4::z_", "float z", offsetof(Vector4, z_)));
    fields.Push(RegisterObjectPropertyArgs("float Vector4::w_", "float w", offsetof(Vector4, w_)));
}

} // namespace Urho3D
