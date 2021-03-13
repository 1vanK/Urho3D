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

#include "../Core/Spline.h"
#include "../Core/Variant.h"

namespace Urho3D
{

// const char** AttributeInfo::enumNames_ | File: ../Core/Attribute.h
CScriptArray* AttributeInfo_GetEnumNames(AttributeInfo* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_AttributeInfo() \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("const char** AttributeInfo::enumNames_", "Array<String>@ get_enumNames() const", AS_FUNCTION_OBJLAST(AttributeInfo_GetEnumNames), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// StringVector ResourceRefList::names_ | File: ../Core/Variant.h
void ResourceRefList_Resize(unsigned size, ResourceRefList* ptr);
unsigned ResourceRefList_GetSize(ResourceRefList* ptr);
bool ResourceRefList_IsEmpty(ResourceRefList* ptr);
void ResourceRefList_SetName(unsigned index, const String& name, ResourceRefList* ptr);
const String& ResourceRefList_GetName(unsigned index, ResourceRefList* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_ResourceRefList() \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("StringVector ResourceRefList::names_", "void Resize(uint)", AS_FUNCTION_OBJLAST(ResourceRefList_Resize), AS_CALL_CDECL_OBJLAST)); \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("StringVector ResourceRefList::names_", "uint get_length() const", AS_FUNCTION_OBJLAST(ResourceRefList_GetSize), AS_CALL_CDECL_OBJLAST)); \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("StringVector ResourceRefList::names_", "bool get_empty() const", AS_FUNCTION_OBJLAST(ResourceRefList_IsEmpty), AS_CALL_CDECL_OBJLAST)); \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("StringVector ResourceRefList::names_", "void set_names(uint, const String&in) const", AS_FUNCTION_OBJLAST(ResourceRefList_SetName), AS_CALL_CDECL_OBJLAST)); \
    members.wrappedFields_.Push(RegisterObjectMethodArgs("StringVector ResourceRefList::names_", "const String& get_names(uint) const", AS_FUNCTION_OBJLAST(ResourceRefList_GetName), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// explicit Spline::Spline(const Vector<Variant>& knots, InterpolationMode mode = BEZIER_CURVE) | File: ../Core/Spline.h
void Spline_Spline(CScriptArray* arr, InterpolationMode mode, Spline* ptr);

#define REGISTER_CLASS_MANUAL_PART_Spline() \
    engine->RegisterObjectBehaviour("Spline", asBEHAVE_CONSTRUCT, "void f(Array<Variant>@+, InterpolationMode = BEZIER_CURVE)", AS_FUNCTIONPR(Spline_Spline, (CScriptArray*, InterpolationMode, Spline*), void), AS_CALL_CDECL_OBJLAST);

// const VariantVector& Spline::GetKnots() const | File: ../Core/Spline.h
CScriptArray* Spline_GetKnots(Spline* ptr);

// void Spline::SetKnots(const Vector<Variant>& knots) | File: ../Core/Spline.h
void Spline_SetKnots(CScriptArray* arr, Spline* ptr);

// void Spline::SetKnot(const Variant& knot, unsigned index) | File: ../Core/Spline.h
void Spline_SetKnot(unsigned index, const Variant& in, Spline* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Spline() \
    members.methods_.Push(RegisterObjectMethodArgs("const VariantVector& Spline::GetKnots() const", "Array<Variant>@ get_knots() const", AS_FUNCTION_OBJLAST(Spline_GetKnots), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Spline::SetKnots(const Vector<Variant>& knots)", "void set_knots(Array<Variant>@+)", AS_FUNCTION_OBJLAST(Spline_SetKnots), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Spline::SetKnot(const Variant& knot, unsigned index)", "void set_knot(uint, const Variant&in)", AS_FUNCTION_OBJLAST(Spline_SetKnot), AS_CALL_CDECL_OBJLAST));

}
