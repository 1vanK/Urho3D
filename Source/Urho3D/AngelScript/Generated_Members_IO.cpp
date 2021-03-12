// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// class AbstractFile | File: ../IO/AbstractFile.h
void CollectMembers_AbstractFile(MemberCollection& members)
{
    CollectMembers_Deserializer(members);
    CollectMembers_Serializer(members);

    Remove(members.methods_, "virtual const String& Deserializer::GetName() const");

    members.methods_.Push(RegisterObjectMethodArgs("virtual void AbstractFile::SetName(const String& name)", "void SetName(const String&in)", AS_METHODPR(AbstractFile, SetName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual void AbstractFile::SetName(const String& name)", "void set_name(const String&in)", AS_METHODPR(AbstractFile, SetName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& AbstractFile::GetName() const override", "const String& GetName() const", AS_METHODPR(AbstractFile, GetName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& AbstractFile::GetName() const override", "const String& get_name() const", AS_METHODPR(AbstractFile, GetName, () const, const String&), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_AbstractFile
        REGISTER_MEMBERS_MANUAL_PART_AbstractFile();
    #endif
}

// StringVector Deserializer::ReadStringVector()
// StringVector Deserializer::ReadStringVector() | File: ../IO/Deserializer.h
static CScriptArray* Deserializer_ReadStringVector_void(Deserializer* ptr)
{
    StringVector result = ptr->ReadStringVector();
    return VectorToArray<String>(result, "Array<String>");
}


// class Deserializer | File: ../IO/Deserializer.h
void CollectMembers_Deserializer(MemberCollection& members)
{
    // virtual unsigned Deserializer::Read(void* dest, unsigned size) = 0
    // Error: type "void*" can not automatically bind
    // PODVector<unsigned char> Deserializer::ReadBuffer()
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // VariantVector Deserializer::ReadVariantVector()
    // Error: type "VariantVector" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("virtual unsigned Deserializer::Seek(unsigned position) = 0", "uint Seek(uint)", AS_METHODPR(Deserializer, Seek, (unsigned), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual const String& Deserializer::GetName() const", "const String& GetName() const", AS_METHODPR(Deserializer, GetName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual const String& Deserializer::GetName() const", "const String& get_name() const", AS_METHODPR(Deserializer, GetName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual unsigned Deserializer::GetChecksum()", "uint GetChecksum()", AS_METHODPR(Deserializer, GetChecksum, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual unsigned Deserializer::GetChecksum()", "uint get_checksum()", AS_METHODPR(Deserializer, GetChecksum, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual bool Deserializer::IsEof() const", "bool IsEof() const", AS_METHODPR(Deserializer, IsEof, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("virtual bool Deserializer::IsEof() const", "bool get_eof() const", AS_METHODPR(Deserializer, IsEof, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Deserializer::SeekRelative(int delta)", "uint SeekRelative(int)", AS_METHODPR(Deserializer, SeekRelative, (int), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Deserializer::GetPosition() const", "uint GetPosition() const", AS_METHODPR(Deserializer, GetPosition, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Deserializer::GetPosition() const", "uint get_position() const", AS_METHODPR(Deserializer, GetPosition, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Deserializer::Tell() const", "uint Tell() const", AS_METHODPR(Deserializer, Tell, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Deserializer::GetSize() const", "uint GetSize() const", AS_METHODPR(Deserializer, GetSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Deserializer::GetSize() const", "uint get_size() const", AS_METHODPR(Deserializer, GetSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("long long Deserializer::ReadInt64()", "int64 ReadInt64()", AS_METHODPR(Deserializer, ReadInt64, (), long long), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Deserializer::ReadInt()", "int ReadInt()", AS_METHODPR(Deserializer, ReadInt, (), int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("short Deserializer::ReadShort()", "int16 ReadShort()", AS_METHODPR(Deserializer, ReadShort, (), short), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("signed char Deserializer::ReadByte()", "int8 ReadByte()", AS_METHODPR(Deserializer, ReadByte, (), signed char), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned long long Deserializer::ReadUInt64()", "uint64 ReadUInt64()", AS_METHODPR(Deserializer, ReadUInt64, (), unsigned long long), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Deserializer::ReadUInt()", "uint ReadUInt()", AS_METHODPR(Deserializer, ReadUInt, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned short Deserializer::ReadUShort()", "uint16 ReadUShort()", AS_METHODPR(Deserializer, ReadUShort, (), unsigned short), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned char Deserializer::ReadUByte()", "uint8 ReadUByte()", AS_METHODPR(Deserializer, ReadUByte, (), unsigned char), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Deserializer::ReadBool()", "bool ReadBool()", AS_METHODPR(Deserializer, ReadBool, (), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Deserializer::ReadFloat()", "float ReadFloat()", AS_METHODPR(Deserializer, ReadFloat, (), float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("double Deserializer::ReadDouble()", "double ReadDouble()", AS_METHODPR(Deserializer, ReadDouble, (), double), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntRect Deserializer::ReadIntRect()", "IntRect ReadIntRect()", AS_METHODPR(Deserializer, ReadIntRect, (), IntRect), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector2 Deserializer::ReadIntVector2()", "IntVector2 ReadIntVector2()", AS_METHODPR(Deserializer, ReadIntVector2, (), IntVector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("IntVector3 Deserializer::ReadIntVector3()", "IntVector3 ReadIntVector3()", AS_METHODPR(Deserializer, ReadIntVector3, (), IntVector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Rect Deserializer::ReadRect()", "Rect ReadRect()", AS_METHODPR(Deserializer, ReadRect, (), Rect), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector2 Deserializer::ReadVector2()", "Vector2 ReadVector2()", AS_METHODPR(Deserializer, ReadVector2, (), Vector2), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 Deserializer::ReadVector3()", "Vector3 ReadVector3()", AS_METHODPR(Deserializer, ReadVector3, (), Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector3 Deserializer::ReadPackedVector3(float maxAbsCoord)", "Vector3 ReadPackedVector3(float)", AS_METHODPR(Deserializer, ReadPackedVector3, (float), Vector3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Vector4 Deserializer::ReadVector4()", "Vector4 ReadVector4()", AS_METHODPR(Deserializer, ReadVector4, (), Vector4), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Quaternion Deserializer::ReadQuaternion()", "Quaternion ReadQuaternion()", AS_METHODPR(Deserializer, ReadQuaternion, (), Quaternion), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Quaternion Deserializer::ReadPackedQuaternion()", "Quaternion ReadPackedQuaternion()", AS_METHODPR(Deserializer, ReadPackedQuaternion, (), Quaternion), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Matrix3 Deserializer::ReadMatrix3()", "Matrix3 ReadMatrix3()", AS_METHODPR(Deserializer, ReadMatrix3, (), Matrix3), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Matrix3x4 Deserializer::ReadMatrix3x4()", "Matrix3x4 ReadMatrix3x4()", AS_METHODPR(Deserializer, ReadMatrix3x4, (), Matrix3x4), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Matrix4 Deserializer::ReadMatrix4()", "Matrix4 ReadMatrix4()", AS_METHODPR(Deserializer, ReadMatrix4, (), Matrix4), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Color Deserializer::ReadColor()", "Color ReadColor()", AS_METHODPR(Deserializer, ReadColor, (), Color), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("BoundingBox Deserializer::ReadBoundingBox()", "BoundingBox ReadBoundingBox()", AS_METHODPR(Deserializer, ReadBoundingBox, (), BoundingBox), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Deserializer::ReadString()", "String ReadString()", AS_METHODPR(Deserializer, ReadString, (), String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Deserializer::ReadFileID()", "String ReadFileID()", AS_METHODPR(Deserializer, ReadFileID, (), String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("StringHash Deserializer::ReadStringHash()", "StringHash ReadStringHash()", AS_METHODPR(Deserializer, ReadStringHash, (), StringHash), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRef Deserializer::ReadResourceRef()", "ResourceRef ReadResourceRef()", AS_METHODPR(Deserializer, ReadResourceRef, (), ResourceRef), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("ResourceRefList Deserializer::ReadResourceRefList()", "ResourceRefList ReadResourceRefList()", AS_METHODPR(Deserializer, ReadResourceRefList, (), ResourceRefList), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant Deserializer::ReadVariant()", "Variant ReadVariant()", AS_METHODPR(Deserializer, ReadVariant, (), Variant), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Variant Deserializer::ReadVariant(VariantType type)", "Variant ReadVariant(VariantType)", AS_METHODPR(Deserializer, ReadVariant, (VariantType), Variant), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("StringVector Deserializer::ReadStringVector()", "Array<String>@ ReadStringVector()", AS_FUNCTION_OBJFIRST(Deserializer_ReadStringVector_void), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("VariantMap Deserializer::ReadVariantMap()", "VariantMap ReadVariantMap()", AS_METHODPR(Deserializer, ReadVariantMap, (), VariantMap), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Deserializer::ReadVLE()", "uint ReadVLE()", AS_METHODPR(Deserializer, ReadVLE, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Deserializer::ReadNetID()", "uint ReadNetID()", AS_METHODPR(Deserializer, ReadNetID, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Deserializer::ReadLine()", "String ReadLine()", AS_METHODPR(Deserializer, ReadLine, (), String), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Deserializer
        REGISTER_MEMBERS_MANUAL_PART_Deserializer();
    #endif
}

// class File | File: ../IO/File.h
void CollectMembers_File(MemberCollection& members)
{
    CollectMembers_Object(members);
    CollectMembers_AbstractFile(members);

    Remove(members.methods_, "virtual unsigned Deserializer::GetChecksum()");
    Remove(members.methods_, "virtual unsigned Deserializer::Read(void* dest, unsigned size) = 0");
    Remove(members.methods_, "virtual unsigned Deserializer::Seek(unsigned position) = 0");
    Remove(members.methods_, "virtual unsigned Serializer::Write(const void* data, unsigned size) = 0");

    // void* File::GetHandle() const
    // Error: type "void*" can not automatically bind
    // unsigned File::Read(void* dest, unsigned size) override
    // Error: type "void*" can not automatically bind
    // unsigned File::Write(const void* data, unsigned size) override
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("unsigned File::Seek(unsigned position) override", "uint Seek(uint)", AS_METHODPR(File, Seek, (unsigned), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned File::GetChecksum() override", "uint GetChecksum()", AS_METHODPR(File, GetChecksum, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned File::GetChecksum() override", "uint get_checksum()", AS_METHODPR(File, GetChecksum, (), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool File::Open(const String& fileName, FileMode mode = FILE_READ)", "bool Open(const String&in, FileMode = FILE_READ)", AS_METHODPR(File, Open, (const String&, FileMode), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool File::Open(PackageFile* package, const String& fileName)", "bool Open(PackageFile@+, const String&in)", AS_METHODPR(File, Open, (PackageFile*, const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void File::Close()", "void Close()", AS_METHODPR(File, Close, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void File::Flush()", "void Flush()", AS_METHODPR(File, Flush, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FileMode File::GetMode() const", "FileMode GetMode() const", AS_METHODPR(File, GetMode, () const, FileMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("FileMode File::GetMode() const", "FileMode get_mode() const", AS_METHODPR(File, GetMode, () const, FileMode), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool File::IsOpen() const", "bool IsOpen() const", AS_METHODPR(File, IsOpen, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool File::IsOpen() const", "bool get_open() const", AS_METHODPR(File, IsOpen, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool File::IsPackaged() const", "bool IsPackaged() const", AS_METHODPR(File, IsPackaged, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool File::IsPackaged() const", "bool get_packaged() const", AS_METHODPR(File, IsPackaged, () const, bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_File
        REGISTER_MEMBERS_MANUAL_PART_File();
    #endif
}

// int FileSystem::SystemRun(const String& fileName, const Vector<String>& arguments)
// int FileSystem::SystemRun(const String& fileName, const Vector<String>& arguments) | File: ../IO/FileSystem.h
static int FileSystem_SystemRun_String_VectorString(FileSystem* ptr, const String& fileName, CScriptArray* arguments_conv)
{
    Vector<String> arguments = ArrayToVector<String>(arguments_conv);
    int result = ptr->SystemRun(fileName, arguments);
    return result;
}


// unsigned FileSystem::SystemRunAsync(const String& fileName, const Vector<String>& arguments)
// unsigned FileSystem::SystemRunAsync(const String& fileName, const Vector<String>& arguments) | File: ../IO/FileSystem.h
static unsigned FileSystem_SystemRunAsync_String_VectorString(FileSystem* ptr, const String& fileName, CScriptArray* arguments_conv)
{
    Vector<String> arguments = ArrayToVector<String>(arguments_conv);
    unsigned result = ptr->SystemRunAsync(fileName, arguments);
    return result;
}


// class FileSystem | File: ../IO/FileSystem.h
void CollectMembers_FileSystem(MemberCollection& members)
{
    CollectMembers_Object(members);

    // void FileSystem::ScanDir(Vector<String>& result, const String& pathName, const String& filter, unsigned flags, bool recursive) const
    // Error: type "Vector<String>&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::SetCurrentDir(const String& pathName)", "bool SetCurrentDir(const String&in)", AS_METHODPR(FileSystem, SetCurrentDir, (const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::SetCurrentDir(const String& pathName)", "bool set_currentDir(const String&in)", AS_METHODPR(FileSystem, SetCurrentDir, (const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::CreateDir(const String& pathName)", "bool CreateDir(const String&in)", AS_METHODPR(FileSystem, CreateDir, (const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void FileSystem::SetExecuteConsoleCommands(bool enable)", "void SetExecuteConsoleCommands(bool)", AS_METHODPR(FileSystem, SetExecuteConsoleCommands, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void FileSystem::SetExecuteConsoleCommands(bool enable)", "void set_executeConsoleCommands(bool)", AS_METHODPR(FileSystem, SetExecuteConsoleCommands, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int FileSystem::SystemCommand(const String& commandLine, bool redirectStdOutToLog = false)", "int SystemCommand(const String&in, bool = false)", AS_METHODPR(FileSystem, SystemCommand, (const String&, bool), int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int FileSystem::SystemRun(const String& fileName, const Vector<String>& arguments)", "int SystemRun(const String&in, Array<String>@+)", AS_FUNCTION_OBJFIRST(FileSystem_SystemRun_String_VectorString), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned FileSystem::SystemCommandAsync(const String& commandLine)", "uint SystemCommandAsync(const String&in)", AS_METHODPR(FileSystem, SystemCommandAsync, (const String&), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned FileSystem::SystemRunAsync(const String& fileName, const Vector<String>& arguments)", "uint SystemRunAsync(const String&in, Array<String>@+)", AS_FUNCTION_OBJFIRST(FileSystem_SystemRunAsync_String_VectorString), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::SystemOpen(const String& fileName, const String& mode = String::EMPTY)", "bool SystemOpen(const String&in, const String&in = String::EMPTY)", AS_METHODPR(FileSystem, SystemOpen, (const String&, const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::Copy(const String& srcFileName, const String& destFileName)", "bool Copy(const String&in, const String&in)", AS_METHODPR(FileSystem, Copy, (const String&, const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::Rename(const String& srcFileName, const String& destFileName)", "bool Rename(const String&in, const String&in)", AS_METHODPR(FileSystem, Rename, (const String&, const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::Delete(const String& fileName)", "bool Delete(const String&in)", AS_METHODPR(FileSystem, Delete, (const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void FileSystem::RegisterPath(const String& pathName)", "void RegisterPath(const String&in)", AS_METHODPR(FileSystem, RegisterPath, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::SetLastModifiedTime(const String& fileName, unsigned newTime)", "bool SetLastModifiedTime(const String&in, uint)", AS_METHODPR(FileSystem, SetLastModifiedTime, (const String&, unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String FileSystem::GetCurrentDir() const", "String GetCurrentDir() const", AS_METHODPR(FileSystem, GetCurrentDir, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String FileSystem::GetCurrentDir() const", "String get_currentDir() const", AS_METHODPR(FileSystem, GetCurrentDir, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::GetExecuteConsoleCommands() const", "bool GetExecuteConsoleCommands() const", AS_METHODPR(FileSystem, GetExecuteConsoleCommands, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::GetExecuteConsoleCommands() const", "bool get_executeConsoleCommands() const", AS_METHODPR(FileSystem, GetExecuteConsoleCommands, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::HasRegisteredPaths() const", "bool HasRegisteredPaths() const", AS_METHODPR(FileSystem, HasRegisteredPaths, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::CheckAccess(const String& pathName) const", "bool CheckAccess(const String&in) const", AS_METHODPR(FileSystem, CheckAccess, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned FileSystem::GetLastModifiedTime(const String& fileName) const", "uint GetLastModifiedTime(const String&in) const", AS_METHODPR(FileSystem, GetLastModifiedTime, (const String&) const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::FileExists(const String& fileName) const", "bool FileExists(const String&in) const", AS_METHODPR(FileSystem, FileExists, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileSystem::DirExists(const String& pathName) const", "bool DirExists(const String&in) const", AS_METHODPR(FileSystem, DirExists, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String FileSystem::GetProgramDir() const", "String GetProgramDir() const", AS_METHODPR(FileSystem, GetProgramDir, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String FileSystem::GetProgramDir() const", "String get_programDir() const", AS_METHODPR(FileSystem, GetProgramDir, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String FileSystem::GetUserDocumentsDir() const", "String GetUserDocumentsDir() const", AS_METHODPR(FileSystem, GetUserDocumentsDir, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String FileSystem::GetUserDocumentsDir() const", "String get_userDocumentsDir() const", AS_METHODPR(FileSystem, GetUserDocumentsDir, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String FileSystem::GetAppPreferencesDir(const String& org, const String& app) const", "String GetAppPreferencesDir(const String&in, const String&in) const", AS_METHODPR(FileSystem, GetAppPreferencesDir, (const String&, const String&) const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String FileSystem::GetTemporaryDir() const", "String GetTemporaryDir() const", AS_METHODPR(FileSystem, GetTemporaryDir, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String FileSystem::GetTemporaryDir() const", "String get_temporaryDir() const", AS_METHODPR(FileSystem, GetTemporaryDir, () const, String), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_FileSystem
        REGISTER_MEMBERS_MANUAL_PART_FileSystem();
    #endif
}

// class FileWatcher | File: ../IO/FileWatcher.h
void CollectMembers_FileWatcher(MemberCollection& members)
{
    CollectMembers_Object(members);
    CollectMembers_Thread(members);

    Remove(members.methods_, "virtual void Thread::ThreadFunction() = 0");

    members.methods_.Push(RegisterObjectMethodArgs("void FileWatcher::ThreadFunction() override", "void ThreadFunction()", AS_METHODPR(FileWatcher, ThreadFunction, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileWatcher::StartWatching(const String& pathName, bool watchSubDirs)", "bool StartWatching(const String&in, bool)", AS_METHODPR(FileWatcher, StartWatching, (const String&, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void FileWatcher::StopWatching()", "void StopWatching()", AS_METHODPR(FileWatcher, StopWatching, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void FileWatcher::SetDelay(float interval)", "void SetDelay(float)", AS_METHODPR(FileWatcher, SetDelay, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void FileWatcher::AddChange(const String& fileName)", "void AddChange(const String&in)", AS_METHODPR(FileWatcher, AddChange, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool FileWatcher::GetNextChange(String& dest)", "bool GetNextChange(String&)", AS_METHODPR(FileWatcher, GetNextChange, (String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& FileWatcher::GetPath() const", "const String& GetPath() const", AS_METHODPR(FileWatcher, GetPath, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float FileWatcher::GetDelay() const", "float GetDelay() const", AS_METHODPR(FileWatcher, GetDelay, () const, float), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_FileWatcher
        REGISTER_MEMBERS_MANUAL_PART_FileWatcher();
    #endif
}

// class Log | File: ../IO/Log.h
void CollectMembers_Log(MemberCollection& members)
{
    CollectMembers_Object(members);

    members.methods_.Push(RegisterObjectMethodArgs("void Log::Open(const String& fileName)", "void Open(const String&in)", AS_METHODPR(Log, Open, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Log::Close()", "void Close()", AS_METHODPR(Log, Close, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Log::SetLevel(int level)", "void SetLevel(int)", AS_METHODPR(Log, SetLevel, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Log::SetLevel(int level)", "void set_level(int)", AS_METHODPR(Log, SetLevel, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Log::SetTimeStamp(bool enable)", "void SetTimeStamp(bool)", AS_METHODPR(Log, SetTimeStamp, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Log::SetTimeStamp(bool enable)", "void set_timeStamp(bool)", AS_METHODPR(Log, SetTimeStamp, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Log::SetQuiet(bool quiet)", "void SetQuiet(bool)", AS_METHODPR(Log, SetQuiet, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Log::SetQuiet(bool quiet)", "void set_quiet(bool)", AS_METHODPR(Log, SetQuiet, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Log::GetLevel() const", "int GetLevel() const", AS_METHODPR(Log, GetLevel, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Log::GetLevel() const", "int get_level() const", AS_METHODPR(Log, GetLevel, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Log::GetTimeStamp() const", "bool GetTimeStamp() const", AS_METHODPR(Log, GetTimeStamp, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Log::GetTimeStamp() const", "bool get_timeStamp() const", AS_METHODPR(Log, GetTimeStamp, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Log::GetLastMessage() const", "String GetLastMessage() const", AS_METHODPR(Log, GetLastMessage, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("String Log::GetLastMessage() const", "String get_lastMessage() const", AS_METHODPR(Log, GetLastMessage, () const, String), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Log::IsQuiet() const", "bool IsQuiet() const", AS_METHODPR(Log, IsQuiet, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Log::IsQuiet() const", "bool get_quiet() const", AS_METHODPR(Log, IsQuiet, () const, bool), AS_CALL_THISCALL));

    // static void Log::Write(int level, const String& message)
    // Not registered because have @nobind mark
    // static void Log::WriteFormat(int level, const char* format,...)
    // Error: type "const char*" can not automatically bind

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static void Log::WriteRaw(const String& message, bool error = false)", "void WriteRaw(const String&in, bool = false)", AS_FUNCTIONPR(Log::WriteRaw, (const String&, bool), void), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Log
        REGISTER_MEMBERS_MANUAL_PART_Log();
    #endif
}

// class MemoryBuffer | File: ../IO/MemoryBuffer.h
void CollectMembers_MemoryBuffer(MemberCollection& members)
{
    // unsigned char* MemoryBuffer::GetData()
    // Error: type "unsigned char*" can not automatically bind
    // unsigned MemoryBuffer::Read(void* dest, unsigned size) override
    // Error: type "void*" can not automatically bind
    // unsigned MemoryBuffer::Write(const void* data, unsigned size) override
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("unsigned MemoryBuffer::Seek(unsigned position) override", "uint Seek(uint)", AS_METHODPR(MemoryBuffer, Seek, (unsigned), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool MemoryBuffer::IsReadOnly()", "bool IsReadOnly()", AS_METHODPR(MemoryBuffer, IsReadOnly, (), bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_MemoryBuffer
        REGISTER_MEMBERS_MANUAL_PART_MemoryBuffer();
    #endif
}

// class NamedPipe | File: ../IO/NamedPipe.h
void CollectMembers_NamedPipe(MemberCollection& members)
{
    CollectMembers_Object(members);
    CollectMembers_AbstractFile(members);

    Remove(members.methods_, "virtual bool Deserializer::IsEof() const");
    Remove(members.methods_, "virtual unsigned Deserializer::Read(void* dest, unsigned size) = 0");
    Remove(members.methods_, "virtual unsigned Deserializer::Seek(unsigned position) = 0");
    Remove(members.methods_, "virtual unsigned Serializer::Write(const void* data, unsigned size) = 0");
    Remove(members.methods_, "virtual void AbstractFile::SetName(const String& name)");

    // unsigned NamedPipe::Read(void* dest, unsigned size) override
    // Error: type "void*" can not automatically bind
    // unsigned NamedPipe::Write(const void* data, unsigned size) override
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("unsigned NamedPipe::Seek(unsigned position) override", "uint Seek(uint)", AS_METHODPR(NamedPipe, Seek, (unsigned), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool NamedPipe::IsEof() const override", "bool IsEof() const", AS_METHODPR(NamedPipe, IsEof, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool NamedPipe::IsEof() const override", "bool get_eof() const", AS_METHODPR(NamedPipe, IsEof, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void NamedPipe::SetName(const String& name) override", "void SetName(const String&in)", AS_METHODPR(NamedPipe, SetName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void NamedPipe::SetName(const String& name) override", "void set_name(const String&in)", AS_METHODPR(NamedPipe, SetName, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool NamedPipe::Open(const String& name, bool isServer)", "bool Open(const String&in, bool)", AS_METHODPR(NamedPipe, Open, (const String&, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void NamedPipe::Close()", "void Close()", AS_METHODPR(NamedPipe, Close, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool NamedPipe::IsOpen() const", "bool IsOpen() const", AS_METHODPR(NamedPipe, IsOpen, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool NamedPipe::IsOpen() const", "bool get_open() const", AS_METHODPR(NamedPipe, IsOpen, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool NamedPipe::IsServer() const", "bool IsServer() const", AS_METHODPR(NamedPipe, IsServer, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool NamedPipe::IsServer() const", "bool get_server() const", AS_METHODPR(NamedPipe, IsServer, () const, bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_NamedPipe
        REGISTER_MEMBERS_MANUAL_PART_NamedPipe();
    #endif
}

// struct PackageEntry | File: ../IO/PackageFile.h
void CollectMembers_PackageEntry(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned PackageEntry::offset_", "uint offset", offsetof(PackageEntry, offset_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned PackageEntry::size_", "uint size", offsetof(PackageEntry, size_)));
    members.fields_.Push(RegisterObjectPropertyArgs("unsigned PackageEntry::checksum_", "uint checksum", offsetof(PackageEntry, checksum_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_PackageEntry
        REGISTER_MEMBERS_MANUAL_PART_PackageEntry();
    #endif
}

// const Vector<String> PackageFile::GetEntryNames() const
// const Vector<String> PackageFile::GetEntryNames() const | File: ../IO/PackageFile.h
static CScriptArray* PackageFile_GetEntryNames_void(PackageFile* ptr)
{
    const Vector<String> result = ptr->GetEntryNames();
    return VectorToArray<String>(result, "Array<String>");
}


// class PackageFile | File: ../IO/PackageFile.h
void CollectMembers_PackageFile(MemberCollection& members)
{
    CollectMembers_Object(members);

    // const HashMap<String, PackageEntry>& PackageFile::GetEntries() const
    // Error: type "const HashMap<String, PackageEntry>&" can not automatically bind
    // const PackageEntry* PackageFile::GetEntry(const String& fileName) const
    // Error: type "const PackageEntry*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool PackageFile::Open(const String& fileName, unsigned startOffset = 0)", "bool Open(const String&in, uint = 0)", AS_METHODPR(PackageFile, Open, (const String&, unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PackageFile::Exists(const String& fileName) const", "bool Exists(const String&in) const", AS_METHODPR(PackageFile, Exists, (const String&) const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& PackageFile::GetName() const", "const String& GetName() const", AS_METHODPR(PackageFile, GetName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& PackageFile::GetName() const", "const String& get_name() const", AS_METHODPR(PackageFile, GetName, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("StringHash PackageFile::GetNameHash() const", "StringHash GetNameHash() const", AS_METHODPR(PackageFile, GetNameHash, () const, StringHash), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned PackageFile::GetNumFiles() const", "uint GetNumFiles() const", AS_METHODPR(PackageFile, GetNumFiles, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned PackageFile::GetNumFiles() const", "uint get_numFiles() const", AS_METHODPR(PackageFile, GetNumFiles, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned PackageFile::GetTotalSize() const", "uint GetTotalSize() const", AS_METHODPR(PackageFile, GetTotalSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned PackageFile::GetTotalSize() const", "uint get_totalSize() const", AS_METHODPR(PackageFile, GetTotalSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned PackageFile::GetTotalDataSize() const", "uint GetTotalDataSize() const", AS_METHODPR(PackageFile, GetTotalDataSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned PackageFile::GetTotalDataSize() const", "uint get_totalDataSize() const", AS_METHODPR(PackageFile, GetTotalDataSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned PackageFile::GetChecksum() const", "uint GetChecksum() const", AS_METHODPR(PackageFile, GetChecksum, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned PackageFile::GetChecksum() const", "uint get_checksum() const", AS_METHODPR(PackageFile, GetChecksum, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PackageFile::IsCompressed() const", "bool IsCompressed() const", AS_METHODPR(PackageFile, IsCompressed, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool PackageFile::IsCompressed() const", "bool get_compressed() const", AS_METHODPR(PackageFile, IsCompressed, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<String> PackageFile::GetEntryNames() const", "Array<String>@ GetEntryNames() const", AS_FUNCTION_OBJFIRST(PackageFile_GetEntryNames_void), AS_CALL_CDECL_OBJFIRST));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_PackageFile
        REGISTER_MEMBERS_MANUAL_PART_PackageFile();
    #endif
}

// bool Serializer::WriteStringVector(const StringVector& value)
// bool Serializer::WriteStringVector(const StringVector& value) | File: ../IO/Serializer.h
static bool Serializer_WriteStringVector_StringVector(Serializer* ptr, CScriptArray* value_conv)
{
    StringVector value = ArrayToVector<String>(value_conv);
    bool result = ptr->WriteStringVector(value);
    return result;
}


// class Serializer | File: ../IO/Serializer.h
void CollectMembers_Serializer(MemberCollection& members)
{
    // virtual unsigned Serializer::Write(const void* data, unsigned size) = 0
    // Error: type "const void*" can not automatically bind
    // bool Serializer::WriteBuffer(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // bool Serializer::WriteVariantVector(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteInt64(long long value)", "bool WriteInt64(int64)", AS_METHODPR(Serializer, WriteInt64, (long long), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteInt(int value)", "bool WriteInt(int)", AS_METHODPR(Serializer, WriteInt, (int), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteShort(short value)", "bool WriteShort(int16)", AS_METHODPR(Serializer, WriteShort, (short), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteByte(signed char value)", "bool WriteByte(int8)", AS_METHODPR(Serializer, WriteByte, (signed char), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteUInt64(unsigned long long value)", "bool WriteUInt64(uint64)", AS_METHODPR(Serializer, WriteUInt64, (unsigned long long), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteUInt(unsigned value)", "bool WriteUInt(uint)", AS_METHODPR(Serializer, WriteUInt, (unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteUShort(unsigned short value)", "bool WriteUShort(uint16)", AS_METHODPR(Serializer, WriteUShort, (unsigned short), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteUByte(unsigned char value)", "bool WriteUByte(uint8)", AS_METHODPR(Serializer, WriteUByte, (unsigned char), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteBool(bool value)", "bool WriteBool(bool)", AS_METHODPR(Serializer, WriteBool, (bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteFloat(float value)", "bool WriteFloat(float)", AS_METHODPR(Serializer, WriteFloat, (float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteDouble(double value)", "bool WriteDouble(double)", AS_METHODPR(Serializer, WriteDouble, (double), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteIntRect(const IntRect& value)", "bool WriteIntRect(const IntRect&in)", AS_METHODPR(Serializer, WriteIntRect, (const IntRect&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteIntVector2(const IntVector2& value)", "bool WriteIntVector2(const IntVector2&in)", AS_METHODPR(Serializer, WriteIntVector2, (const IntVector2&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteIntVector3(const IntVector3& value)", "bool WriteIntVector3(const IntVector3&in)", AS_METHODPR(Serializer, WriteIntVector3, (const IntVector3&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteRect(const Rect& value)", "bool WriteRect(const Rect&in)", AS_METHODPR(Serializer, WriteRect, (const Rect&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteVector2(const Vector2& value)", "bool WriteVector2(const Vector2&in)", AS_METHODPR(Serializer, WriteVector2, (const Vector2&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteVector3(const Vector3& value)", "bool WriteVector3(const Vector3&in)", AS_METHODPR(Serializer, WriteVector3, (const Vector3&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WritePackedVector3(const Vector3& value, float maxAbsCoord)", "bool WritePackedVector3(const Vector3&in, float)", AS_METHODPR(Serializer, WritePackedVector3, (const Vector3&, float), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteVector4(const Vector4& value)", "bool WriteVector4(const Vector4&in)", AS_METHODPR(Serializer, WriteVector4, (const Vector4&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteQuaternion(const Quaternion& value)", "bool WriteQuaternion(const Quaternion&in)", AS_METHODPR(Serializer, WriteQuaternion, (const Quaternion&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WritePackedQuaternion(const Quaternion& value)", "bool WritePackedQuaternion(const Quaternion&in)", AS_METHODPR(Serializer, WritePackedQuaternion, (const Quaternion&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteMatrix3(const Matrix3& value)", "bool WriteMatrix3(const Matrix3&in)", AS_METHODPR(Serializer, WriteMatrix3, (const Matrix3&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteMatrix3x4(const Matrix3x4& value)", "bool WriteMatrix3x4(const Matrix3x4&in)", AS_METHODPR(Serializer, WriteMatrix3x4, (const Matrix3x4&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteMatrix4(const Matrix4& value)", "bool WriteMatrix4(const Matrix4&in)", AS_METHODPR(Serializer, WriteMatrix4, (const Matrix4&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteColor(const Color& value)", "bool WriteColor(const Color&in)", AS_METHODPR(Serializer, WriteColor, (const Color&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteBoundingBox(const BoundingBox& value)", "bool WriteBoundingBox(const BoundingBox&in)", AS_METHODPR(Serializer, WriteBoundingBox, (const BoundingBox&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteString(const String& value)", "bool WriteString(const String&in)", AS_METHODPR(Serializer, WriteString, (const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteFileID(const String& value)", "bool WriteFileID(const String&in)", AS_METHODPR(Serializer, WriteFileID, (const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteStringHash(const StringHash& value)", "bool WriteStringHash(const StringHash&in)", AS_METHODPR(Serializer, WriteStringHash, (const StringHash&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteResourceRef(const ResourceRef& value)", "bool WriteResourceRef(const ResourceRef&in)", AS_METHODPR(Serializer, WriteResourceRef, (const ResourceRef&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteResourceRefList(const ResourceRefList& value)", "bool WriteResourceRefList(const ResourceRefList&in)", AS_METHODPR(Serializer, WriteResourceRefList, (const ResourceRefList&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteVariant(const Variant& value)", "bool WriteVariant(const Variant&in)", AS_METHODPR(Serializer, WriteVariant, (const Variant&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteVariantData(const Variant& value)", "bool WriteVariantData(const Variant&in)", AS_METHODPR(Serializer, WriteVariantData, (const Variant&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteStringVector(const StringVector& value)", "bool WriteStringVector(Array<String>@+)", AS_FUNCTION_OBJFIRST(Serializer_WriteStringVector_StringVector), AS_CALL_CDECL_OBJFIRST));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteVariantMap(const VariantMap& value)", "bool WriteVariantMap(const VariantMap&in)", AS_METHODPR(Serializer, WriteVariantMap, (const VariantMap&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteVLE(unsigned value)", "bool WriteVLE(uint)", AS_METHODPR(Serializer, WriteVLE, (unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteNetID(unsigned value)", "bool WriteNetID(uint)", AS_METHODPR(Serializer, WriteNetID, (unsigned), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Serializer::WriteLine(const String& value)", "bool WriteLine(const String&in)", AS_METHODPR(Serializer, WriteLine, (const String&), bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Serializer
        REGISTER_MEMBERS_MANUAL_PART_Serializer();
    #endif
}

// struct StoredLogMessage | File: ../IO/Log.h
void CollectMembers_StoredLogMessage(MemberCollection& members)
{
    members.fields_.Push(RegisterObjectPropertyArgs("String StoredLogMessage::message_", "String message", offsetof(StoredLogMessage, message_)));
    members.fields_.Push(RegisterObjectPropertyArgs("int StoredLogMessage::level_", "int level", offsetof(StoredLogMessage, level_)));
    members.fields_.Push(RegisterObjectPropertyArgs("bool StoredLogMessage::error_", "bool error", offsetof(StoredLogMessage, error_)));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_StoredLogMessage
        REGISTER_MEMBERS_MANUAL_PART_StoredLogMessage();
    #endif
}

// class VectorBuffer | File: ../IO/VectorBuffer.h
void CollectMembers_VectorBuffer(MemberCollection& members)
{
    CollectMembers_AbstractFile(members);

    Remove(members.methods_, "virtual unsigned Deserializer::Read(void* dest, unsigned size) = 0");
    Remove(members.methods_, "virtual unsigned Deserializer::Seek(unsigned position) = 0");
    Remove(members.methods_, "virtual unsigned Serializer::Write(const void* data, unsigned size) = 0");

    // const PODVector<unsigned char>& VectorBuffer::GetBuffer() const
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // const unsigned char* VectorBuffer::GetData() const
    // Error: type "const unsigned char*" can not automatically bind
    // unsigned char* VectorBuffer::GetModifiableData()
    // Error: type "unsigned char*" can not automatically bind
    // unsigned VectorBuffer::Read(void* dest, unsigned size) override
    // Error: type "void*" can not automatically bind
    // void VectorBuffer::SetData(const PODVector<unsigned char>& data)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind
    // void VectorBuffer::SetData(const void* data, unsigned size)
    // Error: type "const void*" can not automatically bind
    // unsigned VectorBuffer::Write(const void* data, unsigned size) override
    // Error: type "const void*" can not automatically bind

    members.methods_.Push(RegisterObjectMethodArgs("unsigned VectorBuffer::Seek(unsigned position) override", "uint Seek(uint)", AS_METHODPR(VectorBuffer, Seek, (unsigned), unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void VectorBuffer::SetData(Deserializer& source, unsigned size)", "void SetData(Deserializer&, uint)", AS_METHODPR(VectorBuffer, SetData, (Deserializer&, unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void VectorBuffer::Clear()", "void Clear()", AS_METHODPR(VectorBuffer, Clear, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void VectorBuffer::Resize(unsigned size)", "void Resize(uint)", AS_METHODPR(VectorBuffer, Resize, (unsigned), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_VectorBuffer
        REGISTER_MEMBERS_MANUAL_PART_VectorBuffer();
    #endif
}

} // namespace Urho3D
