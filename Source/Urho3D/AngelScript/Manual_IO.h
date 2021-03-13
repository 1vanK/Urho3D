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

#include "../IO/NamedPipe.h"
#include "../IO/PackageFile.h"
#include "../IO/FileSystem.h"

namespace Urho3D
{

// virtual unsigned Deserializer::Read(void* dest, unsigned size) = 0 | File: ../IO/Deserializer.h
CScriptArray* Deserializer_Read(unsigned size, Deserializer* ptr);

// VectorBuffer::VectorBuffer(Deserializer& source, unsigned size) | File: .. / IO / VectorBuffer.h
VectorBuffer Deserializer_ReadVectorBuffer(unsigned size, Deserializer* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Deserializer() \
    members.methods_.Push(RegisterObjectMethodArgs("virtual unsigned Deserializer::Read(void* dest, unsigned size) = 0", "Array<uint8>@ Read(uint)", AS_FUNCTION_OBJLAST(Deserializer_Read), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("49e339aa-bcd5-4a17-95c2-9c49e4966498", "VectorBuffer ReadVectorBuffer(uint)", AS_FUNCTION_OBJLAST(Deserializer_ReadVectorBuffer), AS_CALL_CDECL_OBJLAST));

// ================================================================================

// virtual unsigned Serializer::Write(const void* data, unsigned size) = 0 | File: ../IO/Serializer.h
unsigned Serializer_Write(CScriptArray* arr, Serializer* ptr);
bool Serializer_Write_VectorBuffer(VectorBuffer* src, Serializer* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Serializer() \
    members.methods_.Push(RegisterObjectMethodArgs("virtual unsigned Serializer::Write(const void* data, unsigned size) = 0", "uint Write(Array<uint8>@+)", AS_FUNCTION_OBJLAST(Serializer_Write), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("virtual unsigned Serializer::Write(const void* data, unsigned size) = 0", "bool WriteVectorBuffer(const VectorBuffer&in)", AS_FUNCTION_OBJLAST(Serializer_Write_VectorBuffer), AS_CALL_CDECL_OBJLAST));

// ================================================================================

// void FileSystem::ScanDir(Vector<String>& result, const String& pathName, const String& filter, unsigned flags, bool recursive) const | File: ../IO/FileSystem.h
CScriptArray* FileSystem_ScanDir(const String& pathName, const String& filter, unsigned flags, bool recursive, FileSystem* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_FileSystem() \
    members.methods_.Push(RegisterObjectMethodArgs("void FileSystem::ScanDir(Vector<String>& result, const String& pathName, const String& filter, unsigned flags, bool recursive) const", "Array<String>@ ScanDir(const String&in, const String&in, uint, bool) const", AS_FUNCTION_OBJLAST(FileSystem_ScanDir), AS_CALL_CDECL_OBJLAST));

}
