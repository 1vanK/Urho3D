// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_X(asIScriptEngine* engine)
{
#ifdef REGISTER_MANUAL_PART_XMLElement
    REGISTER_MANUAL_PART_XMLElement(XMLElement, "XMLElement")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void XMLFile::RegisterObject(Context* context) | File: ../Resource/XMLFile.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(XMLFile, "XMLFile")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(XMLFile, "XMLFile")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(XMLFile, "XMLFile")
#endif
#ifdef REGISTER_MANUAL_PART_XMLFile
    REGISTER_MANUAL_PART_XMLFile(XMLFile, "XMLFile")
#endif
    RegisterSubclass<Resource, XMLFile>(engine, "Resource", "XMLFile");
    RegisterSubclass<Object, XMLFile>(engine, "Object", "XMLFile");
    RegisterSubclass<RefCounted, XMLFile>(engine, "RefCounted", "XMLFile");

    // XPathQuery& XPathQuery::operator=(const XPathQuery&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<XPathQuery>(engine, "XPathQuery");
#ifdef REGISTER_MANUAL_PART_XPathQuery
    REGISTER_MANUAL_PART_XPathQuery(XPathQuery, "XPathQuery")
#endif

#ifdef REGISTER_MANUAL_PART_XPathResultSet
    REGISTER_MANUAL_PART_XPathResultSet(XPathResultSet, "XPathResultSet")
#endif

}

}
