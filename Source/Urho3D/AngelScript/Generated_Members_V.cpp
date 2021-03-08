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

    // const Variant Variant::EMPTY | File: ../Core/Variant.h
    engine->SetDefaultNamespace("Variant");
    engine->RegisterGlobalProperty("const Variant EMPTY", (void*)&Variant::EMPTY);
    engine->SetDefaultNamespace("");
    // const PODVector<unsigned char> Variant::emptyBuffer | File: ../Core/Variant.h
    // Error: type "const PODVector<unsigned char>" can not automatically bind
    // const ResourceRef Variant::emptyResourceRef | File: ../Core/Variant.h
    engine->SetDefaultNamespace("Variant");
    engine->RegisterGlobalProperty("const ResourceRef emptyResourceRef", (void*)&Variant::emptyResourceRef);
    engine->SetDefaultNamespace("");
    // const ResourceRefList Variant::emptyResourceRefList | File: ../Core/Variant.h
    engine->SetDefaultNamespace("Variant");
    engine->RegisterGlobalProperty("const ResourceRefList emptyResourceRefList", (void*)&Variant::emptyResourceRefList);
    engine->SetDefaultNamespace("");
    // const StringVector Variant::emptyStringVector | File: ../Core/Variant.h
    // Error: type "const StringVector" can not automatically bind
    // const VariantMap Variant::emptyVariantMap | File: ../Core/Variant.h
    engine->SetDefaultNamespace("Variant");
    engine->RegisterGlobalProperty("const VariantMap emptyVariantMap", (void*)&Variant::emptyVariantMap);
    engine->SetDefaultNamespace("");
    // const VariantVector Variant::emptyVariantVector | File: ../Core/Variant.h
    // Error: type "const VariantVector" can not automatically bind
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

    // const Vector2 Vector2::DOWN | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("Vector2");
    engine->RegisterGlobalProperty("const Vector2 DOWN", (void*)&Vector2::DOWN);
    engine->SetDefaultNamespace("");
    // const Vector2 Vector2::LEFT | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("Vector2");
    engine->RegisterGlobalProperty("const Vector2 LEFT", (void*)&Vector2::LEFT);
    engine->SetDefaultNamespace("");
    // const Vector2 Vector2::ONE | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("Vector2");
    engine->RegisterGlobalProperty("const Vector2 ONE", (void*)&Vector2::ONE);
    engine->SetDefaultNamespace("");
    // const Vector2 Vector2::RIGHT | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("Vector2");
    engine->RegisterGlobalProperty("const Vector2 RIGHT", (void*)&Vector2::RIGHT);
    engine->SetDefaultNamespace("");
    // const Vector2 Vector2::UP | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("Vector2");
    engine->RegisterGlobalProperty("const Vector2 UP", (void*)&Vector2::UP);
    engine->SetDefaultNamespace("");
    // float Vector2::x_ | File: ../Math/Vector2.h
    engine->RegisterObjectProperty("Vector2", "float x", offsetof(Vector2, x_));
    // float Vector2::y_ | File: ../Math/Vector2.h
    engine->RegisterObjectProperty("Vector2", "float y", offsetof(Vector2, y_));
    // const Vector2 Vector2::ZERO | File: ../Math/Vector2.h
    engine->SetDefaultNamespace("Vector2");
    engine->RegisterGlobalProperty("const Vector2 ZERO", (void*)&Vector2::ZERO);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Vector2
    REGISTER_MANUAL_PART_Vector2(Vector2, "Vector2")
#endif

    // const Vector3 Vector3::BACK | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("Vector3");
    engine->RegisterGlobalProperty("const Vector3 BACK", (void*)&Vector3::BACK);
    engine->SetDefaultNamespace("");
    // const Vector3 Vector3::DOWN | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("Vector3");
    engine->RegisterGlobalProperty("const Vector3 DOWN", (void*)&Vector3::DOWN);
    engine->SetDefaultNamespace("");
    // const Vector3 Vector3::FORWARD | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("Vector3");
    engine->RegisterGlobalProperty("const Vector3 FORWARD", (void*)&Vector3::FORWARD);
    engine->SetDefaultNamespace("");
    // const Vector3 Vector3::LEFT | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("Vector3");
    engine->RegisterGlobalProperty("const Vector3 LEFT", (void*)&Vector3::LEFT);
    engine->SetDefaultNamespace("");
    // const Vector3 Vector3::ONE | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("Vector3");
    engine->RegisterGlobalProperty("const Vector3 ONE", (void*)&Vector3::ONE);
    engine->SetDefaultNamespace("");
    // const Vector3 Vector3::RIGHT | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("Vector3");
    engine->RegisterGlobalProperty("const Vector3 RIGHT", (void*)&Vector3::RIGHT);
    engine->SetDefaultNamespace("");
    // const Vector3 Vector3::UP | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("Vector3");
    engine->RegisterGlobalProperty("const Vector3 UP", (void*)&Vector3::UP);
    engine->SetDefaultNamespace("");
    // float Vector3::x_ | File: ../Math/Vector3.h
    engine->RegisterObjectProperty("Vector3", "float x", offsetof(Vector3, x_));
    // float Vector3::y_ | File: ../Math/Vector3.h
    engine->RegisterObjectProperty("Vector3", "float y", offsetof(Vector3, y_));
    // float Vector3::z_ | File: ../Math/Vector3.h
    engine->RegisterObjectProperty("Vector3", "float z", offsetof(Vector3, z_));
    // const Vector3 Vector3::ZERO | File: ../Math/Vector3.h
    engine->SetDefaultNamespace("Vector3");
    engine->RegisterGlobalProperty("const Vector3 ZERO", (void*)&Vector3::ZERO);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Vector3
    REGISTER_MANUAL_PART_Vector3(Vector3, "Vector3")
#endif

    // const Vector4 Vector4::ONE | File: ../Math/Vector4.h
    engine->SetDefaultNamespace("Vector4");
    engine->RegisterGlobalProperty("const Vector4 ONE", (void*)&Vector4::ONE);
    engine->SetDefaultNamespace("");
    // float Vector4::w_ | File: ../Math/Vector4.h
    engine->RegisterObjectProperty("Vector4", "float w", offsetof(Vector4, w_));
    // float Vector4::x_ | File: ../Math/Vector4.h
    engine->RegisterObjectProperty("Vector4", "float x", offsetof(Vector4, x_));
    // float Vector4::y_ | File: ../Math/Vector4.h
    engine->RegisterObjectProperty("Vector4", "float y", offsetof(Vector4, y_));
    // float Vector4::z_ | File: ../Math/Vector4.h
    engine->RegisterObjectProperty("Vector4", "float z", offsetof(Vector4, z_));
    // const Vector4 Vector4::ZERO | File: ../Math/Vector4.h
    engine->SetDefaultNamespace("Vector4");
    engine->RegisterGlobalProperty("const Vector4 ZERO", (void*)&Vector4::ZERO);
    engine->SetDefaultNamespace("");
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

    // VariantMap VAnimEventFrame::eventData_ | File: ../Scene/ValueAnimation.h
    engine->RegisterObjectProperty("VAnimEventFrame", "VariantMap eventData", offsetof(VAnimEventFrame, eventData_));
    // StringHash VAnimEventFrame::eventType_ | File: ../Scene/ValueAnimation.h
    engine->RegisterObjectProperty("VAnimEventFrame", "StringHash eventType", offsetof(VAnimEventFrame, eventType_));
    // float VAnimEventFrame::time_ | File: ../Scene/ValueAnimation.h
    engine->RegisterObjectProperty("VAnimEventFrame", "float time", offsetof(VAnimEventFrame, time_));
    // VAnimEventFrame& VAnimEventFrame::operator=(const VAnimEventFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VAnimEventFrame>(engine, "VAnimEventFrame");
#ifdef REGISTER_MANUAL_PART_VAnimEventFrame
    REGISTER_MANUAL_PART_VAnimEventFrame(VAnimEventFrame, "VAnimEventFrame")
#endif

    // float VAnimKeyFrame::time_ | File: ../Scene/ValueAnimation.h
    engine->RegisterObjectProperty("VAnimKeyFrame", "float time", offsetof(VAnimKeyFrame, time_));
    // Variant VAnimKeyFrame::value_ | File: ../Scene/ValueAnimation.h
    engine->RegisterObjectProperty("VAnimKeyFrame", "Variant value", offsetof(VAnimKeyFrame, value_));
    // VAnimKeyFrame& VAnimKeyFrame::operator=(const VAnimKeyFrame&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VAnimKeyFrame>(engine, "VAnimKeyFrame");
#ifdef REGISTER_MANUAL_PART_VAnimKeyFrame
    REGISTER_MANUAL_PART_VAnimKeyFrame(VAnimKeyFrame, "VAnimKeyFrame")
#endif

#ifdef URHO3D_URHO2D
    // unsigned Vertex2D::color_ | File: ../Urho2D/Drawable2D.h
    engine->RegisterObjectProperty("Vertex2D", "uint color", offsetof(Vertex2D, color_));
    // Vector3 Vertex2D::position_ | File: ../Urho2D/Drawable2D.h
    engine->RegisterObjectProperty("Vertex2D", "Vector3 position", offsetof(Vertex2D, position_));
    // Vector2 Vertex2D::uv_ | File: ../Urho2D/Drawable2D.h
    engine->RegisterObjectProperty("Vertex2D", "Vector2 uv", offsetof(Vertex2D, uv_));
    // Vertex2D& Vertex2D::operator=(const Vertex2D&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Vertex2D>(engine, "Vertex2D");
#ifdef REGISTER_MANUAL_PART_Vertex2D
    REGISTER_MANUAL_PART_Vertex2D(Vertex2D, "Vertex2D")
#endif
#endif

    // SharedArrayPtr<unsigned char> VertexBufferDesc::data_ | File: ../Graphics/Model.h
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind
    // unsigned VertexBufferDesc::dataSize_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("VertexBufferDesc", "uint dataSize", offsetof(VertexBufferDesc, dataSize_));
    // unsigned VertexBufferDesc::vertexCount_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("VertexBufferDesc", "uint vertexCount", offsetof(VertexBufferDesc, vertexCount_));
    // PODVector<VertexElement> VertexBufferDesc::vertexElements_ | File: ../Graphics/Model.h
    // Error: type "PODVector<VertexElement>" can not automatically bind
    // VertexBufferDesc& VertexBufferDesc::operator=(const VertexBufferDesc&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VertexBufferDesc>(engine, "VertexBufferDesc");
#ifdef REGISTER_MANUAL_PART_VertexBufferDesc
    REGISTER_MANUAL_PART_VertexBufferDesc(VertexBufferDesc, "VertexBufferDesc")
#endif

    // unsigned VertexBufferMorph::dataSize_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("VertexBufferMorph", "uint dataSize", offsetof(VertexBufferMorph, dataSize_));
    // VertexMaskFlags VertexBufferMorph::elementMask_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("VertexBufferMorph", "VertexMaskFlags elementMask", offsetof(VertexBufferMorph, elementMask_));
    // SharedArrayPtr<unsigned char> VertexBufferMorph::morphData_ | File: ../Graphics/Model.h
    // Error: type "SharedArrayPtr<unsigned char>" can not automatically bind
    // unsigned VertexBufferMorph::vertexCount_ | File: ../Graphics/Model.h
    engine->RegisterObjectProperty("VertexBufferMorph", "uint vertexCount", offsetof(VertexBufferMorph, vertexCount_));
    // VertexBufferMorph& VertexBufferMorph::operator=(const VertexBufferMorph&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VertexBufferMorph>(engine, "VertexBufferMorph");
#ifdef REGISTER_MANUAL_PART_VertexBufferMorph
    REGISTER_MANUAL_PART_VertexBufferMorph(VertexBufferMorph, "VertexBufferMorph")
#endif

    // unsigned char VertexElement::index_ | File: ../Graphics/GraphicsDefs.h
    engine->RegisterObjectProperty("VertexElement", "uint8 index", offsetof(VertexElement, index_));
    // unsigned VertexElement::offset_ | File: ../Graphics/GraphicsDefs.h
    engine->RegisterObjectProperty("VertexElement", "uint offset", offsetof(VertexElement, offset_));
    // bool VertexElement::perInstance_ | File: ../Graphics/GraphicsDefs.h
    engine->RegisterObjectProperty("VertexElement", "bool perInstance", offsetof(VertexElement, perInstance_));
    // VertexElementSemantic VertexElement::semantic_ | File: ../Graphics/GraphicsDefs.h
    engine->RegisterObjectProperty("VertexElement", "VertexElementSemantic semantic", offsetof(VertexElement, semantic_));
    // VertexElementType VertexElement::type_ | File: ../Graphics/GraphicsDefs.h
    engine->RegisterObjectProperty("VertexElement", "VertexElementType type", offsetof(VertexElement, type_));
    // VertexElement& VertexElement::operator=(const VertexElement&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<VertexElement>(engine, "VertexElement");
#ifdef REGISTER_MANUAL_PART_VertexElement
    REGISTER_MANUAL_PART_VertexElement(VertexElement, "VertexElement")
#endif

}

}
