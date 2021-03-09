// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_F(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(File, "File")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(File, "File")
#endif
#ifdef REGISTER_MANUAL_PART_AbstractFile
    REGISTER_MANUAL_PART_AbstractFile(File, "File")
#endif
#ifdef REGISTER_MANUAL_PART_Deserializer
    REGISTER_MANUAL_PART_Deserializer(File, "File")
#endif
#ifdef REGISTER_MANUAL_PART_Serializer
    REGISTER_MANUAL_PART_Serializer(File, "File")
#endif
#ifdef REGISTER_MANUAL_PART_File
    REGISTER_MANUAL_PART_File(File, "File")
#endif
    RegisterSubclass<Object, File>(engine, "Object", "File");
    RegisterSubclass<RefCounted, File>(engine, "RefCounted", "File");
    RegisterSubclass<AbstractFile, File>(engine, "AbstractFile", "File");
    RegisterSubclass<Deserializer, File>(engine, "Deserializer", "File");
    RegisterSubclass<Serializer, File>(engine, "Serializer", "File");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void FileSelector::RegisterObject(Context* context) | File: ../UI/FileSelector.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(FileSelector, "FileSelector")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(FileSelector, "FileSelector")
#endif
#ifdef REGISTER_MANUAL_PART_FileSelector
    REGISTER_MANUAL_PART_FileSelector(FileSelector, "FileSelector")
#endif
    RegisterSubclass<Object, FileSelector>(engine, "Object", "FileSelector");
    RegisterSubclass<RefCounted, FileSelector>(engine, "RefCounted", "FileSelector");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(FileSystem, "FileSystem")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(FileSystem, "FileSystem")
#endif
#ifdef REGISTER_MANUAL_PART_FileSystem
    REGISTER_MANUAL_PART_FileSystem(FileSystem, "FileSystem")
#endif
    RegisterSubclass<Object, FileSystem>(engine, "Object", "FileSystem");
    RegisterSubclass<RefCounted, FileSystem>(engine, "RefCounted", "FileSystem");

    // static ThreadID Thread::GetCurrentThreadID() | File: ../Core/Thread.h
    // Not registered because have @nobind mark
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static bool Thread::IsMainThread() | File: ../Core/Thread.h
    engine->SetDefaultNamespace("FileWatcher");
    engine->RegisterGlobalFunction("bool IsMainThread()", AS_FUNCTIONPR(FileWatcher::IsMainThread, (), bool), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static void Thread::SetMainThread() | File: ../Core/Thread.h
    engine->SetDefaultNamespace("FileWatcher");
    engine->RegisterGlobalFunction("void SetMainThread()", AS_FUNCTIONPR(FileWatcher::SetMainThread, (), void), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(FileWatcher, "FileWatcher")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(FileWatcher, "FileWatcher")
#endif
#ifdef REGISTER_MANUAL_PART_Thread
    REGISTER_MANUAL_PART_Thread(FileWatcher, "FileWatcher")
#endif
#ifdef REGISTER_MANUAL_PART_FileWatcher
    REGISTER_MANUAL_PART_FileWatcher(FileWatcher, "FileWatcher")
#endif
    RegisterSubclass<Object, FileWatcher>(engine, "Object", "FileWatcher");
    RegisterSubclass<RefCounted, FileWatcher>(engine, "RefCounted", "FileWatcher");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Font::RegisterObject(Context* context) | File: ../UI/Font.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Font, "Font")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Font, "Font")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Font, "Font")
#endif
#ifdef REGISTER_MANUAL_PART_Font
    REGISTER_MANUAL_PART_Font(Font, "Font")
#endif
    RegisterSubclass<Resource, Font>(engine, "Resource", "Font");
    RegisterSubclass<Object, Font>(engine, "Object", "Font");
    RegisterSubclass<RefCounted, Font>(engine, "RefCounted", "Font");

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(FontFace, "FontFace")
#endif
#ifdef REGISTER_MANUAL_PART_FontFace
    REGISTER_MANUAL_PART_FontFace(FontFace, "FontFace")
#endif
    RegisterSubclass<RefCounted, FontFace>(engine, "RefCounted", "FontFace");

#ifdef REGISTER_MANUAL_PART_FontFace
    REGISTER_MANUAL_PART_FontFace(FontFaceBitmap, "FontFaceBitmap")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(FontFaceBitmap, "FontFaceBitmap")
#endif
#ifdef REGISTER_MANUAL_PART_FontFaceBitmap
    REGISTER_MANUAL_PART_FontFaceBitmap(FontFaceBitmap, "FontFaceBitmap")
#endif
    RegisterSubclass<FontFace, FontFaceBitmap>(engine, "FontFace", "FontFaceBitmap");
    RegisterSubclass<RefCounted, FontFaceBitmap>(engine, "RefCounted", "FontFaceBitmap");

#ifdef REGISTER_MANUAL_PART_FontFace
    REGISTER_MANUAL_PART_FontFace(FontFaceFreeType, "FontFaceFreeType")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(FontFaceFreeType, "FontFaceFreeType")
#endif
#ifdef REGISTER_MANUAL_PART_FontFaceFreeType
    REGISTER_MANUAL_PART_FontFaceFreeType(FontFaceFreeType, "FontFaceFreeType")
#endif
    RegisterSubclass<FontFace, FontFaceFreeType>(engine, "FontFace", "FontFaceFreeType");
    RegisterSubclass<RefCounted, FontFaceFreeType>(engine, "RefCounted", "FontFaceFreeType");

#ifdef REGISTER_MANUAL_PART_Frustum
    REGISTER_MANUAL_PART_Frustum(Frustum, "Frustum")
#endif

    // FileSelectorEntry& FileSelectorEntry::operator=(const FileSelectorEntry&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<FileSelectorEntry>(engine, "FileSelectorEntry");
#ifdef REGISTER_MANUAL_PART_FileSelectorEntry
    REGISTER_MANUAL_PART_FileSelectorEntry(FileSelectorEntry, "FileSelectorEntry")
#endif

    // FocusParameters& FocusParameters::operator=(const FocusParameters&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<FocusParameters>(engine, "FocusParameters");
#ifdef REGISTER_MANUAL_PART_FocusParameters
    REGISTER_MANUAL_PART_FocusParameters(FocusParameters, "FocusParameters")
#endif

    // FontGlyph& FontGlyph::operator=(const FontGlyph&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<FontGlyph>(engine, "FontGlyph");
#ifdef REGISTER_MANUAL_PART_FontGlyph
    REGISTER_MANUAL_PART_FontGlyph(FontGlyph, "FontGlyph")
#endif

    // FrameInfo& FrameInfo::operator=(const FrameInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<FrameInfo>(engine, "FrameInfo");
#ifdef REGISTER_MANUAL_PART_FrameInfo
    REGISTER_MANUAL_PART_FrameInfo(FrameInfo, "FrameInfo")
#endif

}

}
