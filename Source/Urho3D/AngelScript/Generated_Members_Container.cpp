// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// struct AllocatorBlock | File: ../Container/Allocator.h
void CollectMembers_AllocatorBlock(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // AllocatorNode* AllocatorBlock::free_
    // Not registered because pointer
    // AllocatorBlock* AllocatorBlock::next_
    // Not registered because pointer

    fields.Push(RegisterObjectPropertyArgs("unsigned AllocatorBlock::nodeSize_", "uint nodeSize", offsetof(AllocatorBlock, nodeSize_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned AllocatorBlock::capacity_", "uint capacity", offsetof(AllocatorBlock, capacity_)));

    #ifdef REGISTER_MEMBER_MANUAL_PART_AllocatorBlock
        REGISTER_MEMBER_MANUAL_PART_AllocatorBlock();
    #endif
}

// struct AllocatorNode | File: ../Container/Allocator.h
void CollectMembers_AllocatorNode(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // AllocatorNode* AllocatorNode::next_
    // Not registered because pointer

    #ifdef REGISTER_MEMBER_MANUAL_PART_AllocatorNode
        REGISTER_MEMBER_MANUAL_PART_AllocatorNode();
    #endif
}

// class HashBase | File: ../Container/HashBase.h
void CollectMembers_HashBase(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("void HashBase::Swap(HashBase& rhs)", "void Swap(HashBase&)", AS_METHODPR(HashBase, Swap, (HashBase&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned HashBase::Size() const", "uint Size() const", AS_METHODPR(HashBase, Size, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned HashBase::NumBuckets() const", "uint NumBuckets() const", AS_METHODPR(HashBase, NumBuckets, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool HashBase::Empty() const", "bool Empty() const", AS_METHODPR(HashBase, Empty, () const, bool), AS_CALL_THISCALL));

    staticFields.Push(RegisterGlobalPropertyArgs("static const unsigned HashBase::MIN_BUCKETS", "const uint MIN_BUCKETS", (void*)&HashBase::MIN_BUCKETS));
    staticFields.Push(RegisterGlobalPropertyArgs("static const unsigned HashBase::MAX_LOAD_FACTOR", "const uint MAX_LOAD_FACTOR", (void*)&HashBase::MAX_LOAD_FACTOR));

    #ifdef REGISTER_MEMBER_MANUAL_PART_HashBase
        REGISTER_MEMBER_MANUAL_PART_HashBase();
    #endif
}

// struct HashIteratorBase | File: ../Container/HashBase.h
void CollectMembers_HashIteratorBase(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // bool HashIteratorBase::operator!=(const HashIteratorBase& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("bool HashIteratorBase::operator==(const HashIteratorBase& rhs) const", "bool opEquals(const HashIteratorBase&in) const", AS_METHODPR(HashIteratorBase, operator==, (const HashIteratorBase&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void HashIteratorBase::GotoNext()", "void GotoNext()", AS_METHODPR(HashIteratorBase, GotoNext, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void HashIteratorBase::GotoPrev()", "void GotoPrev()", AS_METHODPR(HashIteratorBase, GotoPrev, (), void), AS_CALL_THISCALL));

    // HashNodeBase* HashIteratorBase::ptr_
    // Not registered because pointer

    #ifdef REGISTER_MEMBER_MANUAL_PART_HashIteratorBase
        REGISTER_MEMBER_MANUAL_PART_HashIteratorBase();
    #endif
}

// struct HashNodeBase | File: ../Container/HashBase.h
void CollectMembers_HashNodeBase(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // HashNodeBase* HashNodeBase::down_
    // Not registered because pointer
    // HashNodeBase* HashNodeBase::prev_
    // Not registered because pointer
    // HashNodeBase* HashNodeBase::next_
    // Not registered because pointer

    #ifdef REGISTER_MEMBER_MANUAL_PART_HashNodeBase
        REGISTER_MEMBER_MANUAL_PART_HashNodeBase();
    #endif
}

// struct LinkedListNode | File: ../Container/LinkedList.h
void CollectMembers_LinkedListNode(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // LinkedListNode* LinkedListNode::next_
    // Not registered because pointer

    #ifdef REGISTER_MEMBER_MANUAL_PART_LinkedListNode
        REGISTER_MEMBER_MANUAL_PART_LinkedListNode();
    #endif
}

// class ListBase | File: ../Container/ListBase.h
void CollectMembers_ListBase(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("void ListBase::Swap(ListBase& rhs)", "void Swap(ListBase&)", AS_METHODPR(ListBase, Swap, (ListBase&), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBER_MANUAL_PART_ListBase
        REGISTER_MEMBER_MANUAL_PART_ListBase();
    #endif
}

// struct ListIteratorBase | File: ../Container/ListBase.h
void CollectMembers_ListIteratorBase(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // bool ListIteratorBase::operator!=(const ListIteratorBase& rhs) const
    // Only operator== is needed

    methods.Push(RegisterObjectMethodArgs("bool ListIteratorBase::operator==(const ListIteratorBase& rhs) const", "bool opEquals(const ListIteratorBase&in) const", AS_METHODPR(ListIteratorBase, operator==, (const ListIteratorBase&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListIteratorBase::GotoNext()", "void GotoNext()", AS_METHODPR(ListIteratorBase, GotoNext, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListIteratorBase::GotoPrev()", "void GotoPrev()", AS_METHODPR(ListIteratorBase, GotoPrev, (), void), AS_CALL_THISCALL));

    // ListNodeBase* ListIteratorBase::ptr_
    // Not registered because pointer

    #ifdef REGISTER_MEMBER_MANUAL_PART_ListIteratorBase
        REGISTER_MEMBER_MANUAL_PART_ListIteratorBase();
    #endif
}

// struct ListNodeBase | File: ../Container/ListBase.h
void CollectMembers_ListNodeBase(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // ListNodeBase* ListNodeBase::prev_
    // Not registered because pointer
    // ListNodeBase* ListNodeBase::next_
    // Not registered because pointer

    #ifdef REGISTER_MEMBER_MANUAL_PART_ListNodeBase
        REGISTER_MEMBER_MANUAL_PART_ListNodeBase();
    #endif
}

// struct RefCount | File: ../Container/RefCounted.h
void CollectMembers_RefCount(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    fields.Push(RegisterObjectPropertyArgs("int RefCount::refs_", "int refs", offsetof(RefCount, refs_)));
    fields.Push(RegisterObjectPropertyArgs("int RefCount::weakRefs_", "int weakRefs", offsetof(RefCount, weakRefs_)));

    #ifdef REGISTER_MEMBER_MANUAL_PART_RefCount
        REGISTER_MEMBER_MANUAL_PART_RefCount();
    #endif
}

// class RefCounted | File: ../Container/RefCounted.h
void CollectMembers_RefCounted(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // RefCount* RefCounted::RefCountPtr()
    // Error: type "RefCount*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void RefCounted::AddRef()", "void AddRef()", AS_METHODPR(RefCounted, AddRef, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RefCounted::ReleaseRef()", "void ReleaseRef()", AS_METHODPR(RefCounted, ReleaseRef, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int RefCounted::Refs() const", "int Refs() const", AS_METHODPR(RefCounted, Refs, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int RefCounted::Refs() const", "int get_refs() const", AS_METHODPR(RefCounted, Refs, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int RefCounted::WeakRefs() const", "int WeakRefs() const", AS_METHODPR(RefCounted, WeakRefs, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int RefCounted::WeakRefs() const", "int get_weakRefs() const", AS_METHODPR(RefCounted, WeakRefs, () const, int), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBER_MANUAL_PART_RefCounted
        REGISTER_MEMBER_MANUAL_PART_RefCounted();
    #endif
}

// Vector<String> String::Split(char separator, bool keepEmptyStrings=false) const
// Vector<String> String::Split(char separator, bool keepEmptyStrings=false) const | File: ../Container/Str.h
static CScriptArray* String_Split_char_bool(String* ptr, char separator, bool keepEmptyStrings)
{
    Vector<String> result = ptr->Split(separator, keepEmptyStrings);
    return VectorToArray<String>(result, "Array<String>");
}


// void String::Join(const Vector<String>& subStrings, const String& glue)
// void String::Join(const Vector<String>& subStrings, const String& glue) | File: ../Container/Str.h
static void String_Join_VectorString_String(String* ptr, CScriptArray* subStrings_conv, const String& glue)
{
    Vector<String> subStrings = ArrayToVector<String>(subStrings_conv);
    ptr->Join(subStrings, glue);
}


// class String | File: ../Container/Str.h
void CollectMembers_String(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // String& String::Append(const char* str)
    // Error: type "const char*" can not automatically bind
    // String& String::Append(const char* str, unsigned length)
    // Error: type "const char*" can not automatically bind
    // String& String::AppendWithFormat(const char* formatString,...)
    // Error: type "const char*" can not automatically bind
    // String& String::AppendWithFormatArgs(const char* formatString, va_list args)
    // Error: type "const char*" can not automatically bind
    // ConstIterator String::Begin() const
    // Error: type "ConstIterator" can not automatically bind
    // Iterator String::Begin()
    // Error: type "Iterator" can not automatically bind
    // const char* String::CString() const
    // Error: type "const char*" can not automatically bind
    // int String::Compare(const char* str, bool caseSensitive=true) const
    // Error: type "const char*" can not automatically bind
    // ConstIterator String::End() const
    // Error: type "ConstIterator" can not automatically bind
    // Iterator String::End()
    // Error: type "Iterator" can not automatically bind
    // Iterator String::Erase(const Iterator& it)
    // Error: type "const Iterator&" can not automatically bind
    // Iterator String::Erase(const Iterator& start, const Iterator& end)
    // Error: type "const Iterator&" can not automatically bind
    // Iterator String::Insert(const Iterator& dest, char c)
    // Error: type "const Iterator&" can not automatically bind
    // Iterator String::Insert(const Iterator& dest, const Iterator& start, const Iterator& end)
    // Error: type "const Iterator&" can not automatically bind
    // Iterator String::Insert(const Iterator& dest, const String& str)
    // Error: type "const Iterator&" can not automatically bind
    // Iterator String::Replace(const Iterator& start, const Iterator& end, const String& replaceWith)
    // Error: type "const Iterator&" can not automatically bind
    // void String::Replace(unsigned pos, unsigned length, const char* replaceWith)
    // Error: type "const char*" can not automatically bind
    // void String::SetUTF8FromLatin1(const char* str)
    // Error: type "const char*" can not automatically bind
    // void String::SetUTF8FromWChar(const wchar_t* str)
    // Error: type "const wchar_t*" can not automatically bind
    // bool String::operator!=(const String& rhs) const
    // Only operator== is needed
    // bool String::operator!=(const char* rhs) const
    // Error: type "const char*" can not automatically bind
    // String String::operator+(const char* rhs) const
    // Error: type "const char*" can not automatically bind
    // String& String::operator+=(const char* rhs)
    // Error: type "const char*" can not automatically bind
    // String& String::operator+=(long rhs)
    // Not registered because have @nobind mark
    // String& String::operator+=(unsigned long rhs)
    // Not registered because have @nobind mark
    // bool String::operator<(const String& rhs) const
    // Registerd as opCmp separately
    // bool String::operator<(const char* rhs) const
    // Error: type "const char*" can not automatically bind
    // String& String::operator=(String&& rhs) noexcept
    // Error: type "String&&" can not automatically bind
    // String& String::operator=(const char* rhs)
    // Error: type "const char*" can not automatically bind
    // bool String::operator==(const char* rhs) const
    // Error: type "const char*" can not automatically bind
    // bool String::operator>(const String& rhs) const
    // Registerd as opCmp separately
    // bool String::operator>(const char* rhs) const
    // Error: type "const char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("String& String::operator=(const String& rhs)", "String& opAssign(const String&in)", AS_METHODPR(String, operator=, (const String&), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::operator+=(const String& rhs)", "String& opAddAssign(const String&in)", AS_METHODPR(String, operator+=, (const String&), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::operator+=(char rhs)", "String& opAddAssign(int8)", AS_METHODPR(String, operator+=, (char), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::operator+=(int rhs)", "String& opAddAssign(int)", AS_METHODPR(String, operator+=, (int), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::operator+=(short rhs)", "String& opAddAssign(int16)", AS_METHODPR(String, operator+=, (short), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::operator+=(long long rhs)", "String& opAddAssign(int64)", AS_METHODPR(String, operator+=, (long long), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::operator+=(unsigned rhs)", "String& opAddAssign(uint)", AS_METHODPR(String, operator+=, (unsigned), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::operator+=(unsigned short rhs)", "String& opAddAssign(uint16)", AS_METHODPR(String, operator+=, (unsigned short), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::operator+=(unsigned long long rhs)", "String& opAddAssign(uint64)", AS_METHODPR(String, operator+=, (unsigned long long), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::operator+=(float rhs)", "String& opAddAssign(float)", AS_METHODPR(String, operator+=, (float), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::operator+=(bool rhs)", "String& opAddAssign(bool)", AS_METHODPR(String, operator+=, (bool), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String String::operator+(const String& rhs) const", "String opAdd(const String&in) const", AS_METHODPR(String, operator+, (const String&) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool String::operator==(const String& rhs) const", "bool opEquals(const String&in) const", AS_METHODPR(String, operator==, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("char& String::operator[](unsigned index)", "int8& opIndex(uint)", AS_METHODPR(String, operator[], (unsigned), char&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const char& String::operator[](unsigned index) const", "const int8& opIndex(uint) const", AS_METHODPR(String, operator[], (unsigned) const, const char&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("char& String::At(unsigned index)", "int8& At(uint)", AS_METHODPR(String, At, (unsigned), char&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const char& String::At(unsigned index) const", "const int8& At(uint) const", AS_METHODPR(String, At, (unsigned) const, const char&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Replace(char replaceThis, char replaceWith, bool caseSensitive=true)", "void Replace(int8, int8, bool = true)", AS_METHODPR(String, Replace, (char, char, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Replace(const String& replaceThis, const String& replaceWith, bool caseSensitive=true)", "void Replace(const String&in, const String&in, bool = true)", AS_METHODPR(String, Replace, (const String&, const String&, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Replace(unsigned pos, unsigned length, const String& replaceWith)", "void Replace(uint, uint, const String&in)", AS_METHODPR(String, Replace, (unsigned, unsigned, const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String String::Replaced(char replaceThis, char replaceWith, bool caseSensitive=true) const", "String Replaced(int8, int8, bool = true) const", AS_METHODPR(String, Replaced, (char, char, bool) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String String::Replaced(const String& replaceThis, const String& replaceWith, bool caseSensitive=true) const", "String Replaced(const String&in, const String&in, bool = true) const", AS_METHODPR(String, Replaced, (const String&, const String&, bool) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::Append(const String& str)", "String& Append(const String&in)", AS_METHODPR(String, Append, (const String&), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::Append(char c)", "String& Append(int8)", AS_METHODPR(String, Append, (char), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Insert(unsigned pos, const String& str)", "void Insert(uint, const String&in)", AS_METHODPR(String, Insert, (unsigned, const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Insert(unsigned pos, char c)", "void Insert(uint, int8)", AS_METHODPR(String, Insert, (unsigned, char), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Erase(unsigned pos, unsigned length=1)", "void Erase(uint, uint = 1)", AS_METHODPR(String, Erase, (unsigned, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Resize(unsigned newLength)", "void Resize(uint)", AS_METHODPR(String, Resize, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Reserve(unsigned newCapacity)", "void Reserve(uint)", AS_METHODPR(String, Reserve, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Compact()", "void Compact()", AS_METHODPR(String, Compact, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Clear()", "void Clear()", AS_METHODPR(String, Clear, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::Swap(String& str)", "void Swap(String&)", AS_METHODPR(String, Swap, (String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("char String::Front() const", "int8 Front() const", AS_METHODPR(String, Front, () const, char), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("char String::Back() const", "int8 Back() const", AS_METHODPR(String, Back, () const, char), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String String::Substring(unsigned pos) const", "String Substring(uint) const", AS_METHODPR(String, Substring, (unsigned) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String String::Substring(unsigned pos, unsigned length) const", "String Substring(uint, uint) const", AS_METHODPR(String, Substring, (unsigned, unsigned) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String String::Trimmed() const", "String Trimmed() const", AS_METHODPR(String, Trimmed, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String String::ToUpper() const", "String ToUpper() const", AS_METHODPR(String, ToUpper, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String String::ToLower() const", "String ToLower() const", AS_METHODPR(String, ToLower, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector<String> String::Split(char separator, bool keepEmptyStrings=false) const", "Array<String>@ Split(int8, bool = false) const", AS_FUNCTION_OBJFIRST(String_Split_char_bool), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("void String::Join(const Vector<String>& subStrings, const String& glue)", "void Join(Array<String>@+, const String&in)", AS_FUNCTION_OBJFIRST(String_Join_VectorString_String), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("unsigned String::Find(const String& str, unsigned startPos=0, bool caseSensitive=true) const", "uint Find(const String&in, uint = 0, bool = true) const", AS_METHODPR(String, Find, (const String&, unsigned, bool) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::Find(char c, unsigned startPos=0, bool caseSensitive=true) const", "uint Find(int8, uint = 0, bool = true) const", AS_METHODPR(String, Find, (char, unsigned, bool) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::FindLast(const String& str, unsigned startPos=NPOS, bool caseSensitive=true) const", "uint FindLast(const String&in, uint = String::NPOS, bool = true) const", AS_METHODPR(String, FindLast, (const String&, unsigned, bool) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::FindLast(char c, unsigned startPos=NPOS, bool caseSensitive=true) const", "uint FindLast(int8, uint = String::NPOS, bool = true) const", AS_METHODPR(String, FindLast, (char, unsigned, bool) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool String::StartsWith(const String& str, bool caseSensitive=true) const", "bool StartsWith(const String&in, bool = true) const", AS_METHODPR(String, StartsWith, (const String&, bool) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool String::EndsWith(const String& str, bool caseSensitive=true) const", "bool EndsWith(const String&in, bool = true) const", AS_METHODPR(String, EndsWith, (const String&, bool) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::Length() const", "uint Length() const", AS_METHODPR(String, Length, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::Length() const", "uint get_length() const", AS_METHODPR(String, Length, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::Capacity() const", "uint Capacity() const", AS_METHODPR(String, Capacity, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool String::Empty() const", "bool Empty() const", AS_METHODPR(String, Empty, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool String::Empty() const", "bool get_empty() const", AS_METHODPR(String, Empty, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int String::Compare(const String& str, bool caseSensitive=true) const", "int Compare(const String&in, bool = true) const", AS_METHODPR(String, Compare, (const String&, bool) const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool String::Contains(const String& str, bool caseSensitive=true) const", "bool Contains(const String&in, bool = true) const", AS_METHODPR(String, Contains, (const String&, bool) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool String::Contains(char c, bool caseSensitive=true) const", "bool Contains(int8, bool = true) const", AS_METHODPR(String, Contains, (char, bool) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::LengthUTF8() const", "uint LengthUTF8() const", AS_METHODPR(String, LengthUTF8, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::LengthUTF8() const", "uint get_utf8Length() const", AS_METHODPR(String, LengthUTF8, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::ByteOffsetUTF8(unsigned index) const", "uint ByteOffsetUTF8(uint) const", AS_METHODPR(String, ByteOffsetUTF8, (unsigned) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::NextUTF8Char(unsigned& byteOffset) const", "uint NextUTF8Char(uint&) const", AS_METHODPR(String, NextUTF8Char, (unsigned&) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::AtUTF8(unsigned index) const", "uint AtUTF8(uint) const", AS_METHODPR(String, AtUTF8, (unsigned) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void String::ReplaceUTF8(unsigned index, unsigned unicodeChar)", "void ReplaceUTF8(uint, uint)", AS_METHODPR(String, ReplaceUTF8, (unsigned, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String& String::AppendUTF8(unsigned unicodeChar)", "String& AppendUTF8(uint)", AS_METHODPR(String, AppendUTF8, (unsigned), String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String String::SubstringUTF8(unsigned pos) const", "String SubstringUTF8(uint) const", AS_METHODPR(String, SubstringUTF8, (unsigned) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String String::SubstringUTF8(unsigned pos, unsigned length) const", "String SubstringUTF8(uint, uint) const", AS_METHODPR(String, SubstringUTF8, (unsigned, unsigned) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned String::ToHash() const", "uint ToHash() const", AS_METHODPR(String, ToHash, () const, unsigned), AS_CALL_THISCALL));

    // static Vector<String> String::Split(const char* str, char separator, bool keepEmptyStrings=false)
    // Error: type "const char*" can not automatically bind
    // static String String::Joined(const Vector<String>& subStrings, const String& glue)
    // Not registered because have @manualbind mark
    // static void String::EncodeUTF8(char*& dest, unsigned unicodeChar)
    // Error: type "char*&" can not automatically bind
    // static unsigned String::DecodeUTF8(const char*& src)
    // Error: type "const char*&" can not automatically bind
    // static unsigned String::CStringLength(const char* str)
    // Error: type "const char*" can not automatically bind
    // static int String::Compare(const char* lhs, const char* rhs, bool caseSensitive)
    // Error: type "const char*" can not automatically bind

    staticFields.Push(RegisterGlobalPropertyArgs("static const unsigned String::NPOS", "const uint NPOS", (void*)&String::NPOS));
    staticFields.Push(RegisterGlobalPropertyArgs("static const unsigned String::MIN_CAPACITY", "const uint MIN_CAPACITY", (void*)&String::MIN_CAPACITY));
    staticFields.Push(RegisterGlobalPropertyArgs("static const String String::EMPTY", "const String EMPTY", (void*)&String::EMPTY));

    #ifdef REGISTER_MEMBER_MANUAL_PART_String
        REGISTER_MEMBER_MANUAL_PART_String();
    #endif
}

// class VectorBase | File: ../Container/VectorBase.h
void CollectMembers_VectorBase(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("void VectorBase::Swap(VectorBase& rhs)", "void Swap(VectorBase&)", AS_METHODPR(VectorBase, Swap, (VectorBase&), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBER_MANUAL_PART_VectorBase
        REGISTER_MEMBER_MANUAL_PART_VectorBase();
    #endif
}

// class WString | File: ../Container/Str.h
void CollectMembers_WString(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // const wchar_t& WString::At(unsigned index) const
    // Error: type "const wchar_t&" can not automatically bind
    // wchar_t& WString::At(unsigned index)
    // Error: type "wchar_t&" can not automatically bind
    // const wchar_t* WString::CString() const
    // Error: type "const wchar_t*" can not automatically bind
    // const wchar_t& WString::operator[](unsigned index) const
    // Error: type "const wchar_t&" can not automatically bind
    // wchar_t& WString::operator[](unsigned index)
    // Error: type "wchar_t&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void WString::Resize(unsigned newLength)", "void Resize(uint)", AS_METHODPR(WString, Resize, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool WString::Empty() const", "bool Empty() const", AS_METHODPR(WString, Empty, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned WString::Length() const", "uint Length() const", AS_METHODPR(WString, Length, () const, unsigned), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBER_MANUAL_PART_WString
        REGISTER_MEMBER_MANUAL_PART_WString();
    #endif
}

} // namespace Urho3D
