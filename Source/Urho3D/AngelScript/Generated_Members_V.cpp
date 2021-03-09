// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

// static unsigned VertexBuffer::GetElementOffset(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) | File: ../Graphics/VertexBuffer.h
static unsigned VertexBuffer_GetElementOffset_PODVectorVertexElement_VertexElementType_VertexElementSemantic_unsignedchar(CScriptArray* elements_conv, VertexElementType type, VertexElementSemantic semantic, unsigned char index)
{
    PODVector<VertexElement> elements = ArrayToPODVector<VertexElement>(elements_conv);
    unsigned result = VertexBuffer::GetElementOffset(elements, type, semantic, index);
    return result;
}

// static PODVector<VertexElement> VertexBuffer::GetElements(unsigned elementMask) | File: ../Graphics/VertexBuffer.h
static CScriptArray* VertexBuffer_GetElements_unsigned(unsigned elementMask)
{
    PODVector<VertexElement> result = VertexBuffer::GetElements(elementMask);
    return VectorToArray(result, "Array<VertexElement>");
}

// static unsigned VertexBuffer::GetVertexSize(const PODVector<VertexElement>& elements) | File: ../Graphics/VertexBuffer.h
static unsigned VertexBuffer_GetVertexSize_PODVectorVertexElement(CScriptArray* elements_conv)
{
    PODVector<VertexElement> elements = ArrayToPODVector<VertexElement>(elements_conv);
    unsigned result = VertexBuffer::GetVertexSize(elements);
    return result;
}

// static bool VertexBuffer::HasElement(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) | File: ../Graphics/VertexBuffer.h
static bool VertexBuffer_HasElement_PODVectorVertexElement_VertexElementType_VertexElementSemantic_unsignedchar(CScriptArray* elements_conv, VertexElementType type, VertexElementSemantic semantic, unsigned char index)
{
    PODVector<VertexElement> elements = ArrayToPODVector<VertexElement>(elements_conv);
    bool result = VertexBuffer::HasElement(elements, type, semantic, index);
    return result;
}

void ASRegisterGenerated_Members_V(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ValueAnimation::RegisterObject(Context* context) | File: ../Scene/ValueAnimation.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(ValueAnimation, "ValueAnimation")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ValueAnimation, "ValueAnimation")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ValueAnimation, "ValueAnimation")
#endif
#ifdef REGISTER_MANUAL_PART_ValueAnimation
    REGISTER_MANUAL_PART_ValueAnimation(ValueAnimation, "ValueAnimation")
#endif
    RegisterSubclass<Resource, ValueAnimation>(engine, "Resource", "ValueAnimation");
    RegisterSubclass<Object, ValueAnimation>(engine, "Object", "ValueAnimation");
    RegisterSubclass<RefCounted, ValueAnimation>(engine, "RefCounted", "ValueAnimation");

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ValueAnimationInfo, "ValueAnimationInfo")
#endif
#ifdef REGISTER_MANUAL_PART_ValueAnimationInfo
    REGISTER_MANUAL_PART_ValueAnimationInfo(ValueAnimationInfo, "ValueAnimationInfo")
#endif
    RegisterSubclass<RefCounted, ValueAnimationInfo>(engine, "RefCounted", "ValueAnimationInfo");

    // static VariantType Variant::GetTypeFromName(const String& typeName) | File: ../Core/Variant.h
    engine->SetDefaultNamespace("Variant");
    engine->RegisterGlobalFunction("VariantType GetTypeFromName(const String&in)", AS_FUNCTIONPR(Variant::GetTypeFromName, (const String&), VariantType), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static VariantType Variant::GetTypeFromName(const char* typeName) | File: ../Core/Variant.h
    // Error: type "const char*" can not automatically bind
    // static String Variant::GetTypeName(VariantType type) | File: ../Core/Variant.h
    engine->SetDefaultNamespace("Variant");
    engine->RegisterGlobalFunction("String GetTypeName(VariantType)", AS_FUNCTIONPR(Variant::GetTypeName, (VariantType), String), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Variant
    REGISTER_MANUAL_PART_Variant(Variant, "Variant")
#endif

#ifdef REGISTER_MANUAL_PART_Vector2
    REGISTER_MANUAL_PART_Vector2(Vector2, "Vector2")
#endif

#ifdef REGISTER_MANUAL_PART_Vector3
    REGISTER_MANUAL_PART_Vector3(Vector3, "Vector3")
#endif

#ifdef REGISTER_MANUAL_PART_Vector4
    REGISTER_MANUAL_PART_Vector4(Vector4, "Vector4")
#endif

    // VectorBase& VectorBase::operator=(const VectorBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VectorBase>(engine, "VectorBase");
#ifdef REGISTER_MANUAL_PART_VectorBase
    REGISTER_MANUAL_PART_VectorBase(VectorBase, "VectorBase")
#endif

    // VectorBuffer& VectorBuffer::operator=(const VectorBuffer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VectorBuffer>(engine, "VectorBuffer");
#ifdef REGISTER_MANUAL_PART_AbstractFile
    REGISTER_MANUAL_PART_AbstractFile(VectorBuffer, "VectorBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_Deserializer
    REGISTER_MANUAL_PART_Deserializer(VectorBuffer, "VectorBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_Serializer
    REGISTER_MANUAL_PART_Serializer(VectorBuffer, "VectorBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_VectorBuffer
    REGISTER_MANUAL_PART_VectorBuffer(VectorBuffer, "VectorBuffer")
#endif

    // static const VertexElement* VertexBuffer::GetElement(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) | File: ../Graphics/VertexBuffer.h
    // Error: type "const VertexElement*" can not automatically bind
    // static unsigned VertexBuffer::GetElementOffset(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) | File: ../Graphics/VertexBuffer.h
    engine->SetDefaultNamespace("VertexBuffer");
    engine->RegisterGlobalFunction("uint GetElementOffset(Array<VertexElement>@+, VertexElementType, VertexElementSemantic, uint8 = 0)", AS_FUNCTION(VertexBuffer_GetElementOffset_PODVectorVertexElement_VertexElementType_VertexElementSemantic_unsignedchar), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static PODVector<VertexElement> VertexBuffer::GetElements(unsigned elementMask) | File: ../Graphics/VertexBuffer.h
    engine->SetDefaultNamespace("VertexBuffer");
    engine->RegisterGlobalFunction("Array<VertexElement>@ GetElements(uint)", AS_FUNCTION(VertexBuffer_GetElements_unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static unsigned VertexBuffer::GetVertexSize(const PODVector<VertexElement>& elements) | File: ../Graphics/VertexBuffer.h
    engine->SetDefaultNamespace("VertexBuffer");
    engine->RegisterGlobalFunction("uint GetVertexSize(Array<VertexElement>@+)", AS_FUNCTION(VertexBuffer_GetVertexSize_PODVectorVertexElement), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned VertexBuffer::GetVertexSize(unsigned elementMask) | File: ../Graphics/VertexBuffer.h
    engine->SetDefaultNamespace("VertexBuffer");
    engine->RegisterGlobalFunction("uint GetVertexSize(uint)", AS_FUNCTIONPR(VertexBuffer::GetVertexSize, (unsigned), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static bool VertexBuffer::HasElement(const PODVector<VertexElement>& elements, VertexElementType type, VertexElementSemantic semantic, unsigned char index=0) | File: ../Graphics/VertexBuffer.h
    engine->SetDefaultNamespace("VertexBuffer");
    engine->RegisterGlobalFunction("bool HasElement(Array<VertexElement>@+, VertexElementType, VertexElementSemantic, uint8 = 0)", AS_FUNCTION(VertexBuffer_HasElement_PODVectorVertexElement_VertexElementType_VertexElementSemantic_unsignedchar), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static void VertexBuffer::UpdateOffsets(PODVector<VertexElement>& elements) | File: ../Graphics/VertexBuffer.h
    // Error: type "PODVector<VertexElement>&" can not automatically bind
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(VertexBuffer, "VertexBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(VertexBuffer, "VertexBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_GPUObject
    REGISTER_MANUAL_PART_GPUObject(VertexBuffer, "VertexBuffer")
#endif
#ifdef REGISTER_MANUAL_PART_VertexBuffer
    REGISTER_MANUAL_PART_VertexBuffer(VertexBuffer, "VertexBuffer")
#endif
    RegisterSubclass<Object, VertexBuffer>(engine, "Object", "VertexBuffer");
    RegisterSubclass<RefCounted, VertexBuffer>(engine, "RefCounted", "VertexBuffer");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(View, "View")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(View, "View")
#endif
#ifdef REGISTER_MANUAL_PART_View
    REGISTER_MANUAL_PART_View(View, "View")
#endif
    RegisterSubclass<Object, View>(engine, "Object", "View");
    RegisterSubclass<RefCounted, View>(engine, "RefCounted", "View");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void View3D::RegisterObject(Context* context) | File: ../UI/View3D.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Window
    REGISTER_MANUAL_PART_Window(View3D, "View3D")
#endif
#ifdef REGISTER_MANUAL_PART_BorderImage
    REGISTER_MANUAL_PART_BorderImage(View3D, "View3D")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(View3D, "View3D")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(View3D, "View3D")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(View3D, "View3D")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(View3D, "View3D")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(View3D, "View3D")
#endif
#ifdef REGISTER_MANUAL_PART_View3D
    REGISTER_MANUAL_PART_View3D(View3D, "View3D")
#endif
    RegisterSubclass<Window, View3D>(engine, "Window", "View3D");
    RegisterSubclass<BorderImage, View3D>(engine, "BorderImage", "View3D");
    RegisterSubclass<UIElement, View3D>(engine, "UIElement", "View3D");
    RegisterSubclass<Animatable, View3D>(engine, "Animatable", "View3D");
    RegisterSubclass<Serializable, View3D>(engine, "Serializable", "View3D");
    RegisterSubclass<Object, View3D>(engine, "Object", "View3D");
    RegisterSubclass<RefCounted, View3D>(engine, "RefCounted", "View3D");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Viewport, "Viewport")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Viewport, "Viewport")
#endif
#ifdef REGISTER_MANUAL_PART_Viewport
    REGISTER_MANUAL_PART_Viewport(Viewport, "Viewport")
#endif
    RegisterSubclass<Object, Viewport>(engine, "Object", "Viewport");
    RegisterSubclass<RefCounted, Viewport>(engine, "RefCounted", "Viewport");

    // VAnimEventFrame& VAnimEventFrame::operator=(const VAnimEventFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VAnimEventFrame>(engine, "VAnimEventFrame");
#ifdef REGISTER_MANUAL_PART_VAnimEventFrame
    REGISTER_MANUAL_PART_VAnimEventFrame(VAnimEventFrame, "VAnimEventFrame")
#endif

    // VAnimKeyFrame& VAnimKeyFrame::operator=(const VAnimKeyFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VAnimKeyFrame>(engine, "VAnimKeyFrame");
#ifdef REGISTER_MANUAL_PART_VAnimKeyFrame
    REGISTER_MANUAL_PART_VAnimKeyFrame(VAnimKeyFrame, "VAnimKeyFrame")
#endif

#ifdef URHO3D_URHO2D
    // Vertex2D& Vertex2D::operator=(const Vertex2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Vertex2D>(engine, "Vertex2D");
#ifdef REGISTER_MANUAL_PART_Vertex2D
    REGISTER_MANUAL_PART_Vertex2D(Vertex2D, "Vertex2D")
#endif
#endif

    // VertexBufferDesc& VertexBufferDesc::operator=(const VertexBufferDesc&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VertexBufferDesc>(engine, "VertexBufferDesc");
#ifdef REGISTER_MANUAL_PART_VertexBufferDesc
    REGISTER_MANUAL_PART_VertexBufferDesc(VertexBufferDesc, "VertexBufferDesc")
#endif

    // VertexBufferMorph& VertexBufferMorph::operator=(const VertexBufferMorph&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VertexBufferMorph>(engine, "VertexBufferMorph");
#ifdef REGISTER_MANUAL_PART_VertexBufferMorph
    REGISTER_MANUAL_PART_VertexBufferMorph(VertexBufferMorph, "VertexBufferMorph")
#endif

    // VertexElement& VertexElement::operator=(const VertexElement&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VertexElement>(engine, "VertexElement");
#ifdef REGISTER_MANUAL_PART_VertexElement
    REGISTER_MANUAL_PART_VertexElement(VertexElement, "VertexElement")
#endif

}

}
