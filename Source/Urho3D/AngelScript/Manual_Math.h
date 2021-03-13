//
// Copyright (c) 2008-2020 the Urho3D project.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#pragma once

#include "../Math/Polyhedron.h"
#include "../Math/Ray.h"

namespace Urho3D
{

// explicit IntVector2::IntVector2(const int* data) noexcept | File: ../Math/Vector2.h
void IntVector2_IntVector2_Data(CScriptArray* data, IntVector2* ptr);

#define REGISTER_CLASS_MANUAL_PART_IntVector2() \
    engine->RegisterObjectBehaviour("IntVector2", asBEHAVE_CONSTRUCT, "void f(int[]&)", AS_FUNCTION_OBJLAST(IntVector2_IntVector2_Data), AS_CALL_CDECL_OBJLAST);

// const int* IntVector2::Data() const | File: ../Math/Vector2.h
CScriptArray* IntVector2_Data(IntVector2* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_IntVector2() \
    members.methods_.Push(RegisterObjectMethodArgs("const int* IntVector2::Data() const", "int[]& get_data() const", AS_FUNCTION_OBJLAST(IntVector2_Data), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// explicit Vector2::Vector2(const float* data) noexcept | File: ../Math/Vector2.h
void Vector2_Vector2_Data(CScriptArray* data, Vector2* ptr);

#define REGISTER_CLASS_MANUAL_PART_Vector2() \
    engine->RegisterObjectBehaviour("Vector2", asBEHAVE_CONSTRUCT, "void f(float[]&)", AS_FUNCTION_OBJLAST(Vector2_Vector2_Data), AS_CALL_CDECL_OBJLAST);

// const float* Vector2::Data() const | File: ../Math/Vector2.h
CScriptArray* Vector2_Data(Vector2* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Vector2() \
    members.methods_.Push(RegisterObjectMethodArgs("const float* Vector2::Data() const", "float[]& get_data() const", AS_FUNCTION_OBJLAST(Vector2_Data), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// explicit IntVector3::IntVector3(const int* data) noexcept | File: ../Math/Vector3.h
void IntVector3_IntVector3_Data(CScriptArray* data, IntVector3* ptr);

#define REGISTER_CLASS_MANUAL_PART_IntVector3() \
    engine->RegisterObjectBehaviour("IntVector3", asBEHAVE_CONSTRUCT, "void f(int[]&)", AS_FUNCTION_OBJLAST(IntVector3_IntVector3_Data), AS_CALL_CDECL_OBJLAST);

// const int* IntVector3::Data() const | File: ../Math/Vector3.h
CScriptArray* IntVector3_Data(IntVector3* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_IntVector3() \
    members.methods_.Push(RegisterObjectMethodArgs("const int* IntVector3::Data() const", "int[]& get_data() const", AS_FUNCTION_OBJLAST(IntVector3_Data), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// explicit Vector3::Vector3(const float* data) noexcept | File: ../Math/Vector3.h
void Vector3_Vector3_Data(CScriptArray* data, Vector3* ptr);

#define REGISTER_CLASS_MANUAL_PART_Vector3() \
    engine->RegisterObjectBehaviour("Vector3", asBEHAVE_CONSTRUCT, "void f(float[]&)", AS_FUNCTION_OBJLAST(Vector3_Vector3_Data), AS_CALL_CDECL_OBJLAST);

// const float* Vector3::Data() const | File: ../Math/Vector3.h
CScriptArray* Vector3_Data(Vector3* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Vector3() \
    members.methods_.Push(RegisterObjectMethodArgs("const float* Vector3::Data() const", "float[]& get_data() const", AS_FUNCTION_OBJLAST(Vector3_Data), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// explicit Vector4::Vector4(const float* data) noexcept | File: ../Math/Vector4.h
void Vector4_Vector4_Data(CScriptArray* data, Vector4* ptr);

#define REGISTER_CLASS_MANUAL_PART_Vector4() \
    engine->RegisterObjectBehaviour("Vector4", asBEHAVE_CONSTRUCT, "void f(float[]&)", AS_FUNCTION_OBJLAST(Vector4_Vector4_Data), AS_CALL_CDECL_OBJLAST);

// const float* Vector4::Data() const | File: ../Math/Vector4.h
CScriptArray* Vector4_Data(Vector4* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Vector4() \
    members.methods_.Push(RegisterObjectMethodArgs("const float* Vector4::Data() const", "float[]& get_data() const", AS_FUNCTION_OBJLAST(Vector4_Data), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// explicit IntRect::IntRect(const int* data) noexcept | File: ../Math/Rect.h
void IntRect_IntRect_Data(CScriptArray* data, IntRect* ptr);

#define REGISTER_CLASS_MANUAL_PART_IntRect() \
    engine->RegisterObjectBehaviour("IntRect", asBEHAVE_CONSTRUCT, "void f(int[]&)", AS_FUNCTION_OBJLAST(IntRect_IntRect_Data), AS_CALL_CDECL_OBJLAST);

// const int* IntRect::Data() const | File: ../Math/Rect.h
CScriptArray* IntRect_Data(IntRect* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_IntRect() \
    members.methods_.Push(RegisterObjectMethodArgs("const int* IntRect::Data()", "int[]& get_data() const", AS_FUNCTION_OBJLAST(IntRect_Data), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// explicit Color::Color(const float* data) noexcept | File: ../Math/Color.h
void Color_Color_Data(CScriptArray* data, Color* ptr);

#define REGISTER_CLASS_MANUAL_PART_Color() \
    engine->RegisterObjectBehaviour("Color", asBEHAVE_CONSTRUCT, "void f(float[]&)", AS_FUNCTION_OBJLAST(Color_Color_Data), AS_CALL_CDECL_OBJLAST);

// const float* Color::Data() const | File: ../Math/Color.h
CScriptArray* Color_Data(Color* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Color() \
    members.methods_.Push(RegisterObjectMethodArgs("const float* Color::Data() const", "float[]& get_data() const", AS_FUNCTION_OBJLAST(Color_Data), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// float Ray::HitDistance(const Vector3& v0, const Vector3& v1, const Vector3& v2, Vector3* outNormal = nullptr, Vector3* outBary = nullptr) const | File: ../Math/Ray.h
float Ray_HitDistance(const Vector3& v0, const Vector3& v1, const Vector3& v2, Ray* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Ray() \
    members.methods_.Push(RegisterObjectMethodArgs("float Ray::HitDistance(const Vector3& v0, const Vector3& v1, const Vector3& v2, Vector3* outNormal = nullptr, Vector3* outBary = nullptr) const", "float HitDistance(const Vector3&in, const Vector3&in, const Vector3&in) const", AS_FUNCTION_OBJLAST(Ray_HitDistance), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// Vector3 Frustum::vertices_[NUM_FRUSTUM_VERTICES] | File: ../Math/Frustum.h
Vector3 Frustum_GetVertex(unsigned index, Frustum* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Frustum() \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("Vector3 Frustum::vertices_[NUM_FRUSTUM_VERTICES]", "Vector3 get_vertices(uint) const", AS_FUNCTION_OBJLAST(Frustum_GetVertex), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// Vector<PODVector<Vector3>> Polyhedron::faces_ | File: ../Math/Polyhedron.h
unsigned Polyhedron_GetNumFaces(Polyhedron* ptr);
CScriptArray* Polyhedron_GetFace(unsigned index, Polyhedron* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Polyhedron() \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("Vector<PODVector<Vector3>> Polyhedron::faces_", "uint get_numFaces() const", AS_FUNCTION_OBJLAST(Polyhedron_GetNumFaces), AS_CALL_CDECL_OBJLAST)); \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("Vector<PODVector<Vector3>> Polyhedron::faces_", "Array<Vector3>@ get_face(uint) const", AS_FUNCTION_OBJLAST(Polyhedron_GetFace), AS_CALL_CDECL_OBJLAST));

}
