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

#include "../Resource/ResourceCache.h"
#include "../IO/PackageFile.h"

namespace Urho3D
{

// bool Resource::Load(Deserializer& source) | File: ../Resource/Resource.h
bool Resource_Load_File(File* file, Resource* ptr);
bool Resource_Load_VectorBuffer(VectorBuffer& buffer, Resource* ptr);

// virtual bool Resource::Save(Serializer& dest) const | File: ../Resource/Resource.h
bool Resource_Save_File(File* file, Resource* ptr);
bool Resource_Save_VectorBuffer(VectorBuffer& buffer, Resource* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Resource() \
    members.methods_.Push(RegisterObjectMethodArgs("bool Resource::Load(Deserializer& source)", "bool Load(File@+)", AS_FUNCTION_OBJLAST(Resource_Load_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Resource::Load(Deserializer& source)", "bool Load(VectorBuffer&)", AS_FUNCTION_OBJLAST(Resource_Load_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("virtual bool Resource::Save(Serializer& dest) const", "bool Save(File@+) const", AS_FUNCTION_OBJLAST(Resource_Save_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("virtual bool Resource::Save(Serializer& dest) const", "bool Save(VectorBuffer&) const", AS_FUNCTION_OBJLAST(Resource_Save_VectorBuffer), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// bool XPathQuery::SetQuery(const String& queryString, const String& variableString = String::EMPTY, bool bind = true) | File: ../Resource/XMLElement.h
bool XPathQuery_SetQuery(const String& queryString, XPathQuery* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_XPathQuery() \
    members.methods_.Push(RegisterObjectMethodArgs("bool XPathQuery::SetQuery(const String& queryString, const String& variableString = String::EMPTY, bool bind = true)", "void set_query(const String&)", AS_FUNCTION_OBJLAST(XPathQuery_SetQuery), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// XMLElement XMLFile::GetRoot(const String& name = String::EMPTY) | File: ../Resource/XMLFile.h
XMLElement XMLFile_GetRoot_Default(XMLFile* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_XMLFile() \
    members.methods_.Push(RegisterObjectMethodArgs("XMLElement XMLFile::GetRoot(const String& name = String::EMPTY)", "XMLElement get_root()", AS_FUNCTION_OBJLAST(XMLFile_GetRoot_Default), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// XMLElement XMLElement::SelectSingle(const String& query, pugi::xpath_variable_set* variables = nullptr) const | File: ../Resource/XMLElement.h
XMLElement XMLElement_SelectSingle(const String& query, XMLElement* ptr);

// XPathResultSet XMLElement::Select(const String& query, pugi::xpath_variable_set* variables = nullptr) const | File: ../Resource/XMLElement.h
XPathResultSet XMLElement_Select(const String& query, XMLElement* ptr);

// bool XMLElement::SetVariantVector(const VariantVector& value) | File: ../Resource/XMLElement.h
bool XMLElement_SetVariantVector(CScriptArray* value, XMLElement* ptr);

// VariantVector XMLElement::GetVariantVector() const | File: ../Resource/XMLElement.h
CScriptArray* XMLElement_GetVariantVector(XMLElement* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_XMLElement() \
    members.methods_.Push(RegisterObjectMethodArgs("XMLElement XMLElement::SelectSingle(const String& query, pugi::xpath_variable_set* variables = nullptr) const", "XMLElement SelectSingle(const String&in)", AS_FUNCTION_OBJLAST(XMLElement_SelectSingle), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("XPathResultSet XMLElement::Select(const String& query, pugi::xpath_variable_set* variables = nullptr) const", "XPathResultSet Select(const String&in)", AS_FUNCTION_OBJLAST(XMLElement_Select), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool XMLElement::SetVariantVector(const VariantVector& value)", "bool SetVariantVector(Array<Variant>@+)", AS_FUNCTION_OBJLAST(XMLElement_SetVariantVector), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("VariantVector XMLElement::GetVariantVector() const", "Array<Variant>@ GetVariantVector() const", AS_FUNCTION_OBJLAST(XMLElement_GetVariantVector), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// void ResourceCache::GetResources(PODVector<Resource*>& result, StringHash type) const | File: ../Resource/ResourceCache.h
CScriptArray* ResourceCache_GetResources(StringHash type, ResourceCache* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_ResourceCache() \
    members.methods_.Push(RegisterObjectMethodArgs("void ResourceCache::GetResources(PODVector<Resource*>& result, StringHash type) const", "Array<Resource@>@ GetResources(StringHash)", AS_FUNCTION_OBJLAST(ResourceCache_GetResources), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

CScriptArray* JSONValue_GetKeys(const JSONValue& jsonValue);
CScriptArray* JSONValue_GetValues(const JSONValue& jsonValue);

#define REGISTER_MEMBERS_MANUAL_PART_JSONValue() \
    members.methods_.Push(RegisterObjectMethodArgs("6dd7e766-5c49-4c08-98a9-e99f21cd4438", "Array<String>@ get_keys() const", AS_FUNCTION_OBJLAST(JSONValue_GetKeys), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("fbb52004-c70f-4db2-8e67-c6071305e609", "Array<JSONValue>@ get_values() const", AS_FUNCTION_OBJLAST(JSONValue_GetValues), AS_CALL_CDECL_OBJLAST));

}
