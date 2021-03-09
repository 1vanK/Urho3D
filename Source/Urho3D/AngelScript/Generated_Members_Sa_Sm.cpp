// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_Sa_Sm(asIScriptEngine* engine)
{
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static bool Scene::IsReplicatedID(unsigned id) | File: ../Scene/Scene.h
    engine->SetDefaultNamespace("Scene");
    engine->RegisterGlobalFunction("bool IsReplicatedID(uint)", AS_FUNCTIONPR(Scene::IsReplicatedID, (unsigned), bool), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static void Scene::RegisterObject(Context* context) | File: ../Scene/Scene.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Node
    REGISTER_MANUAL_PART_Node(Scene, "Scene")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Scene, "Scene")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Scene, "Scene")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Scene, "Scene")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Scene, "Scene")
#endif
#ifdef REGISTER_MANUAL_PART_Scene
    REGISTER_MANUAL_PART_Scene(Scene, "Scene")
#endif
    RegisterSubclass<Node, Scene>(engine, "Node", "Scene");
    RegisterSubclass<Animatable, Scene>(engine, "Animatable", "Scene");
    RegisterSubclass<Serializable, Scene>(engine, "Serializable", "Scene");
    RegisterSubclass<Object, Scene>(engine, "Object", "Scene");
    RegisterSubclass<RefCounted, Scene>(engine, "RefCounted", "Scene");

    // SceneResolver& SceneResolver::operator=(const SceneResolver&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<SceneResolver>(engine, "SceneResolver");
#ifdef REGISTER_MANUAL_PART_SceneResolver
    REGISTER_MANUAL_PART_SceneResolver(SceneResolver, "SceneResolver")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ScrollBar::RegisterObject(Context* context) | File: ../UI/ScrollBar.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_BorderImage
    REGISTER_MANUAL_PART_BorderImage(ScrollBar, "ScrollBar")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(ScrollBar, "ScrollBar")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ScrollBar, "ScrollBar")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ScrollBar, "ScrollBar")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ScrollBar, "ScrollBar")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ScrollBar, "ScrollBar")
#endif
#ifdef REGISTER_MANUAL_PART_ScrollBar
    REGISTER_MANUAL_PART_ScrollBar(ScrollBar, "ScrollBar")
#endif
    RegisterSubclass<BorderImage, ScrollBar>(engine, "BorderImage", "ScrollBar");
    RegisterSubclass<UIElement, ScrollBar>(engine, "UIElement", "ScrollBar");
    RegisterSubclass<Animatable, ScrollBar>(engine, "Animatable", "ScrollBar");
    RegisterSubclass<Serializable, ScrollBar>(engine, "Serializable", "ScrollBar");
    RegisterSubclass<Object, ScrollBar>(engine, "Object", "ScrollBar");
    RegisterSubclass<RefCounted, ScrollBar>(engine, "RefCounted", "ScrollBar");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ScrollView::RegisterObject(Context* context) | File: ../UI/ScrollView.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(ScrollView, "ScrollView")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ScrollView, "ScrollView")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ScrollView, "ScrollView")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ScrollView, "ScrollView")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ScrollView, "ScrollView")
#endif
#ifdef REGISTER_MANUAL_PART_ScrollView
    REGISTER_MANUAL_PART_ScrollView(ScrollView, "ScrollView")
#endif
    RegisterSubclass<UIElement, ScrollView>(engine, "UIElement", "ScrollView");
    RegisterSubclass<Animatable, ScrollView>(engine, "Animatable", "ScrollView");
    RegisterSubclass<Serializable, ScrollView>(engine, "Serializable", "ScrollView");
    RegisterSubclass<Object, ScrollView>(engine, "Object", "ScrollView");
    RegisterSubclass<RefCounted, ScrollView>(engine, "RefCounted", "ScrollView");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Serializable, "Serializable")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Serializable, "Serializable")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Serializable, "Serializable")
#endif
    RegisterSubclass<Object, Serializable>(engine, "Object", "Serializable");
    RegisterSubclass<RefCounted, Serializable>(engine, "RefCounted", "Serializable");

    // Serializer& Serializer::operator=(const Serializer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Serializer>(engine, "Serializer");
    engine->RegisterObjectBehaviour("Serializer", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("Serializer", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_Serializer
    REGISTER_MANUAL_PART_Serializer(Serializer, "Serializer")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Shader::RegisterObject(Context* context) | File: ../Graphics/Shader.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Resource
    REGISTER_MANUAL_PART_Resource(Shader, "Shader")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Shader, "Shader")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Shader, "Shader")
#endif
#ifdef REGISTER_MANUAL_PART_Shader
    REGISTER_MANUAL_PART_Shader(Shader, "Shader")
#endif
    RegisterSubclass<Resource, Shader>(engine, "Resource", "Shader");
    RegisterSubclass<Object, Shader>(engine, "Object", "Shader");
    RegisterSubclass<RefCounted, Shader>(engine, "RefCounted", "Shader");

#ifdef REGISTER_MANUAL_PART_ValueAnimationInfo
    REGISTER_MANUAL_PART_ValueAnimationInfo(ShaderParameterAnimationInfo, "ShaderParameterAnimationInfo")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ShaderParameterAnimationInfo, "ShaderParameterAnimationInfo")
#endif
#ifdef REGISTER_MANUAL_PART_ShaderParameterAnimationInfo
    REGISTER_MANUAL_PART_ShaderParameterAnimationInfo(ShaderParameterAnimationInfo, "ShaderParameterAnimationInfo")
#endif
    RegisterSubclass<ValueAnimationInfo, ShaderParameterAnimationInfo>(engine, "ValueAnimationInfo", "ShaderParameterAnimationInfo");
    RegisterSubclass<RefCounted, ShaderParameterAnimationInfo>(engine, "RefCounted", "ShaderParameterAnimationInfo");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ShaderPrecache::LoadShaders(Graphics* graphics, Deserializer& source) | File: ../Graphics/ShaderPrecache.h
    engine->SetDefaultNamespace("ShaderPrecache");
    engine->RegisterGlobalFunction("void LoadShaders(Graphics@+, Deserializer&)", AS_FUNCTIONPR(ShaderPrecache::LoadShaders, (Graphics*, Deserializer&), void), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ShaderPrecache, "ShaderPrecache")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ShaderPrecache, "ShaderPrecache")
#endif
#ifdef REGISTER_MANUAL_PART_ShaderPrecache
    REGISTER_MANUAL_PART_ShaderPrecache(ShaderPrecache, "ShaderPrecache")
#endif
    RegisterSubclass<Object, ShaderPrecache>(engine, "Object", "ShaderPrecache");
    RegisterSubclass<RefCounted, ShaderPrecache>(engine, "RefCounted", "ShaderPrecache");

#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ShaderVariation, "ShaderVariation")
#endif
#ifdef REGISTER_MANUAL_PART_GPUObject
    REGISTER_MANUAL_PART_GPUObject(ShaderVariation, "ShaderVariation")
#endif
#ifdef REGISTER_MANUAL_PART_ShaderVariation
    REGISTER_MANUAL_PART_ShaderVariation(ShaderVariation, "ShaderVariation")
#endif
    RegisterSubclass<RefCounted, ShaderVariation>(engine, "RefCounted", "ShaderVariation");

    // Skeleton& Skeleton::operator=(const Skeleton&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<Skeleton>(engine, "Skeleton");
    engine->RegisterObjectBehaviour("Skeleton", asBEHAVE_ADDREF, "void f()", AS_FUNCTION_OBJLAST(FakeAddRef), AS_CALL_CDECL_OBJLAST);
    engine->RegisterObjectBehaviour("Skeleton", asBEHAVE_RELEASE, "void f()", AS_FUNCTION_OBJLAST(FakeReleaseRef), AS_CALL_CDECL_OBJLAST);
#ifdef REGISTER_MANUAL_PART_Skeleton
    REGISTER_MANUAL_PART_Skeleton(Skeleton, "Skeleton")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Skybox::RegisterObject(Context* context) | File: ../Graphics/Skybox.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_StaticModel
    REGISTER_MANUAL_PART_StaticModel(Skybox, "Skybox")
#endif
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(Skybox, "Skybox")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Skybox, "Skybox")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Skybox, "Skybox")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Skybox, "Skybox")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Skybox, "Skybox")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Skybox, "Skybox")
#endif
#ifdef REGISTER_MANUAL_PART_Skybox
    REGISTER_MANUAL_PART_Skybox(Skybox, "Skybox")
#endif
    RegisterSubclass<StaticModel, Skybox>(engine, "StaticModel", "Skybox");
    RegisterSubclass<Drawable, Skybox>(engine, "Drawable", "Skybox");
    RegisterSubclass<Component, Skybox>(engine, "Component", "Skybox");
    RegisterSubclass<Animatable, Skybox>(engine, "Animatable", "Skybox");
    RegisterSubclass<Serializable, Skybox>(engine, "Serializable", "Skybox");
    RegisterSubclass<Object, Skybox>(engine, "Object", "Skybox");
    RegisterSubclass<RefCounted, Skybox>(engine, "RefCounted", "Skybox");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Slider::RegisterObject(Context* context) | File: ../UI/Slider.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_BorderImage
    REGISTER_MANUAL_PART_BorderImage(Slider, "Slider")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(Slider, "Slider")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Slider, "Slider")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Slider, "Slider")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Slider, "Slider")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Slider, "Slider")
#endif
#ifdef REGISTER_MANUAL_PART_Slider
    REGISTER_MANUAL_PART_Slider(Slider, "Slider")
#endif
    RegisterSubclass<BorderImage, Slider>(engine, "BorderImage", "Slider");
    RegisterSubclass<UIElement, Slider>(engine, "UIElement", "Slider");
    RegisterSubclass<Animatable, Slider>(engine, "Animatable", "Slider");
    RegisterSubclass<Serializable, Slider>(engine, "Serializable", "Slider");
    RegisterSubclass<Object, Slider>(engine, "Object", "Slider");
    RegisterSubclass<RefCounted, Slider>(engine, "RefCounted", "Slider");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void SmoothedTransform::RegisterObject(Context* context) | File: ../Scene/SmoothedTransform.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(SmoothedTransform, "SmoothedTransform")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(SmoothedTransform, "SmoothedTransform")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(SmoothedTransform, "SmoothedTransform")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(SmoothedTransform, "SmoothedTransform")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(SmoothedTransform, "SmoothedTransform")
#endif
#ifdef REGISTER_MANUAL_PART_SmoothedTransform
    REGISTER_MANUAL_PART_SmoothedTransform(SmoothedTransform, "SmoothedTransform")
#endif
    RegisterSubclass<Component, SmoothedTransform>(engine, "Component", "SmoothedTransform");
    RegisterSubclass<Animatable, SmoothedTransform>(engine, "Animatable", "SmoothedTransform");
    RegisterSubclass<Serializable, SmoothedTransform>(engine, "Serializable", "SmoothedTransform");
    RegisterSubclass<Object, SmoothedTransform>(engine, "Object", "SmoothedTransform");
    RegisterSubclass<RefCounted, SmoothedTransform>(engine, "RefCounted", "SmoothedTransform");

    // ScenePassInfo& ScenePassInfo::operator=(const ScenePassInfo&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ScenePassInfo>(engine, "ScenePassInfo");
#ifdef REGISTER_MANUAL_PART_ScenePassInfo
    REGISTER_MANUAL_PART_ScenePassInfo(ScenePassInfo, "ScenePassInfo")
#endif

    // SceneReplicationState& SceneReplicationState::operator=(const SceneReplicationState&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<SceneReplicationState>(engine, "SceneReplicationState");
#ifdef REGISTER_MANUAL_PART_ReplicationState
    REGISTER_MANUAL_PART_ReplicationState(SceneReplicationState, "SceneReplicationState")
#endif
#ifdef REGISTER_MANUAL_PART_SceneReplicationState
    REGISTER_MANUAL_PART_SceneReplicationState(SceneReplicationState, "SceneReplicationState")
#endif

    // ScratchBuffer& ScratchBuffer::operator=(const ScratchBuffer&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ScratchBuffer>(engine, "ScratchBuffer");
#ifdef REGISTER_MANUAL_PART_ScratchBuffer
    REGISTER_MANUAL_PART_ScratchBuffer(ScratchBuffer, "ScratchBuffer")
#endif

    // ScreenModeParams& ScreenModeParams::operator=(const ScreenModeParams&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ScreenModeParams>(engine, "ScreenModeParams");
#ifdef REGISTER_MANUAL_PART_ScreenModeParams
    REGISTER_MANUAL_PART_ScreenModeParams(ScreenModeParams, "ScreenModeParams")
#endif

    // ShaderParameter& ShaderParameter::operator=(const ShaderParameter&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ShaderParameter>(engine, "ShaderParameter");
#ifdef REGISTER_MANUAL_PART_ShaderParameter
    REGISTER_MANUAL_PART_ShaderParameter(ShaderParameter, "ShaderParameter")
#endif

    // ShadowBatchQueue& ShadowBatchQueue::operator=(const ShadowBatchQueue&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ShadowBatchQueue>(engine, "ShadowBatchQueue");
#ifdef REGISTER_MANUAL_PART_ShadowBatchQueue
    REGISTER_MANUAL_PART_ShadowBatchQueue(ShadowBatchQueue, "ShadowBatchQueue")
#endif

#ifdef URHO3D_NAVIGATION
    // SimpleNavBuildData& SimpleNavBuildData::operator=(const SimpleNavBuildData&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<SimpleNavBuildData>(engine, "SimpleNavBuildData");
#ifdef REGISTER_MANUAL_PART_NavBuildData
    REGISTER_MANUAL_PART_NavBuildData(SimpleNavBuildData, "SimpleNavBuildData")
#endif
#ifdef REGISTER_MANUAL_PART_SimpleNavBuildData
    REGISTER_MANUAL_PART_SimpleNavBuildData(SimpleNavBuildData, "SimpleNavBuildData")
#endif
#endif

}

}
