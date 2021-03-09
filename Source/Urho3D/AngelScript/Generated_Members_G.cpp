// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_G(asIScriptEngine* engine)
{
    // GPUObject& GPUObject::operator=(const GPUObject&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<GPUObject>(engine, "GPUObject");
#ifdef REGISTER_MANUAL_PART_GPUObject
    REGISTER_MANUAL_PART_GPUObject(GPUObject, "GPUObject")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Geometry, "Geometry")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Geometry, "Geometry")
#endif
#ifdef REGISTER_MANUAL_PART_Geometry
    REGISTER_MANUAL_PART_Geometry(Geometry, "Geometry")
#endif
    RegisterSubclass<Object, Geometry>(engine, "Object", "Geometry");
    RegisterSubclass<RefCounted, Geometry>(engine, "RefCounted", "Geometry");

    // static unsigned Graphics::GetAlphaFormat() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetAlphaFormat()", AS_FUNCTIONPR(Graphics::GetAlphaFormat, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetDepthStencilFormat() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetDepthStencilFormat()", AS_FUNCTIONPR(Graphics::GetDepthStencilFormat, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetFloat16Format() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetFloat16Format()", AS_FUNCTIONPR(Graphics::GetFloat16Format, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetFloat32Format() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetFloat32Format()", AS_FUNCTIONPR(Graphics::GetFloat32Format, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetFormat(const String& formatName) | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetFormat(const String&in)", AS_FUNCTIONPR(Graphics::GetFormat, (const String&), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static bool Graphics::GetGL3Support() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("bool GetGL3Support()", AS_FUNCTIONPR(Graphics::GetGL3Support, (), bool), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetLinearDepthFormat() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetLinearDepthFormat()", AS_FUNCTIONPR(Graphics::GetLinearDepthFormat, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetLuminanceAlphaFormat() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetLuminanceAlphaFormat()", AS_FUNCTIONPR(Graphics::GetLuminanceAlphaFormat, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetLuminanceFormat() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetLuminanceFormat()", AS_FUNCTIONPR(Graphics::GetLuminanceFormat, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetMaxBones() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetMaxBones()", AS_FUNCTIONPR(Graphics::GetMaxBones, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static const Vector2& Graphics::GetPixelUVOffset() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("const Vector2& GetPixelUVOffset()", AS_FUNCTIONPR(Graphics::GetPixelUVOffset, (), const Vector2&), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetReadableDepthFormat() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetReadableDepthFormat()", AS_FUNCTIONPR(Graphics::GetReadableDepthFormat, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetRG16Format() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetRG16Format()", AS_FUNCTIONPR(Graphics::GetRG16Format, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetRGBA16Format() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetRGBA16Format()", AS_FUNCTIONPR(Graphics::GetRGBA16Format, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetRGBAFloat16Format() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetRGBAFloat16Format()", AS_FUNCTIONPR(Graphics::GetRGBAFloat16Format, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetRGBAFloat32Format() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetRGBAFloat32Format()", AS_FUNCTIONPR(Graphics::GetRGBAFloat32Format, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetRGBAFormat() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetRGBAFormat()", AS_FUNCTIONPR(Graphics::GetRGBAFormat, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetRGBFormat() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetRGBFormat()", AS_FUNCTIONPR(Graphics::GetRGBFormat, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetRGFloat16Format() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetRGFloat16Format()", AS_FUNCTIONPR(Graphics::GetRGFloat16Format, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static unsigned Graphics::GetRGFloat32Format() | File: ../Graphics/Graphics.h
    engine->SetDefaultNamespace("Graphics");
    engine->RegisterGlobalFunction("uint GetRGFloat32Format()", AS_FUNCTIONPR(Graphics::GetRGFloat32Format, (), unsigned), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Graphics, "Graphics")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Graphics, "Graphics")
#endif
#ifdef REGISTER_MANUAL_PART_Graphics
    REGISTER_MANUAL_PART_Graphics(Graphics, "Graphics")
#endif
    RegisterSubclass<Object, Graphics>(engine, "Object", "Graphics");
    RegisterSubclass<RefCounted, Graphics>(engine, "RefCounted", "Graphics");

#ifdef URHO3D_PHYSICS
#ifdef REGISTER_MANUAL_PART_CollisionGeometryData
    REGISTER_MANUAL_PART_CollisionGeometryData(GImpactMeshData, "GImpactMeshData")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(GImpactMeshData, "GImpactMeshData")
#endif
#ifdef REGISTER_MANUAL_PART_GImpactMeshData
    REGISTER_MANUAL_PART_GImpactMeshData(GImpactMeshData, "GImpactMeshData")
#endif
    RegisterSubclass<CollisionGeometryData, GImpactMeshData>(engine, "CollisionGeometryData", "GImpactMeshData");
    RegisterSubclass<RefCounted, GImpactMeshData>(engine, "RefCounted", "GImpactMeshData");
#endif

    // GeometryDesc& GeometryDesc::operator=(const GeometryDesc&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<GeometryDesc>(engine, "GeometryDesc");
#ifdef REGISTER_MANUAL_PART_GeometryDesc
    REGISTER_MANUAL_PART_GeometryDesc(GeometryDesc, "GeometryDesc")
#endif

}

}
