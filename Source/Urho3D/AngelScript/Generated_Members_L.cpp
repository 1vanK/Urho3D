// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

void FakeAddRef(void* ptr);
void FakeReleaseRef(void* ptr);

void ASRegisterGenerated_Members_L(asIScriptEngine* engine)
{
    // static Matrix3x4 Light::GetFullscreenQuadTransform(Camera* camera) | File: ../Graphics/Light.h
    engine->SetDefaultNamespace("Light");
    engine->RegisterGlobalFunction("Matrix3x4 GetFullscreenQuadTransform(Camera@+)", AS_FUNCTIONPR(Light::GetFullscreenQuadTransform, (Camera*), Matrix3x4), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Light::RegisterObject(Context* context) | File: ../Graphics/Light.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Drawable
    REGISTER_MANUAL_PART_Drawable(Light, "Light")
#endif
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(Light, "Light")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(Light, "Light")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(Light, "Light")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Light, "Light")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Light, "Light")
#endif
#ifdef REGISTER_MANUAL_PART_Light
    REGISTER_MANUAL_PART_Light(Light, "Light")
#endif
    RegisterSubclass<Drawable, Light>(engine, "Drawable", "Light");
    RegisterSubclass<Component, Light>(engine, "Component", "Light");
    RegisterSubclass<Animatable, Light>(engine, "Animatable", "Light");
    RegisterSubclass<Serializable, Light>(engine, "Serializable", "Light");
    RegisterSubclass<Object, Light>(engine, "Object", "Light");
    RegisterSubclass<RefCounted, Light>(engine, "RefCounted", "Light");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void LineEdit::RegisterObject(Context* context) | File: ../UI/LineEdit.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_BorderImage
    REGISTER_MANUAL_PART_BorderImage(LineEdit, "LineEdit")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(LineEdit, "LineEdit")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(LineEdit, "LineEdit")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(LineEdit, "LineEdit")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(LineEdit, "LineEdit")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(LineEdit, "LineEdit")
#endif
#ifdef REGISTER_MANUAL_PART_LineEdit
    REGISTER_MANUAL_PART_LineEdit(LineEdit, "LineEdit")
#endif
    RegisterSubclass<BorderImage, LineEdit>(engine, "BorderImage", "LineEdit");
    RegisterSubclass<UIElement, LineEdit>(engine, "UIElement", "LineEdit");
    RegisterSubclass<Animatable, LineEdit>(engine, "Animatable", "LineEdit");
    RegisterSubclass<Serializable, LineEdit>(engine, "Serializable", "LineEdit");
    RegisterSubclass<Object, LineEdit>(engine, "Object", "LineEdit");
    RegisterSubclass<RefCounted, LineEdit>(engine, "RefCounted", "LineEdit");

    // ListBase& ListBase::operator=(const ListBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ListBase>(engine, "ListBase");
#ifdef REGISTER_MANUAL_PART_ListBase
    REGISTER_MANUAL_PART_ListBase(ListBase, "ListBase")
#endif

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void ListView::RegisterObject(Context* context) | File: ../UI/ListView.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_ScrollView
    REGISTER_MANUAL_PART_ScrollView(ListView, "ListView")
#endif
#ifdef REGISTER_MANUAL_PART_UIElement
    REGISTER_MANUAL_PART_UIElement(ListView, "ListView")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(ListView, "ListView")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(ListView, "ListView")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(ListView, "ListView")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(ListView, "ListView")
#endif
#ifdef REGISTER_MANUAL_PART_ListView
    REGISTER_MANUAL_PART_ListView(ListView, "ListView")
#endif
    RegisterSubclass<ScrollView, ListView>(engine, "ScrollView", "ListView");
    RegisterSubclass<UIElement, ListView>(engine, "UIElement", "ListView");
    RegisterSubclass<Animatable, ListView>(engine, "Animatable", "ListView");
    RegisterSubclass<Serializable, ListView>(engine, "Serializable", "ListView");
    RegisterSubclass<Object, ListView>(engine, "Object", "ListView");
    RegisterSubclass<RefCounted, ListView>(engine, "RefCounted", "ListView");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Localization, "Localization")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Localization, "Localization")
#endif
#ifdef REGISTER_MANUAL_PART_Localization
    REGISTER_MANUAL_PART_Localization(Localization, "Localization")
#endif
    RegisterSubclass<Object, Localization>(engine, "Object", "Localization");
    RegisterSubclass<RefCounted, Localization>(engine, "RefCounted", "Localization");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Log::Write(int level, const String& message) | File: ../IO/Log.h
    // Not registered because have @nobind mark
    // static void Log::WriteFormat(int level, const char* format,...) | File: ../IO/Log.h
    // Error: type "const char*" can not automatically bind
    // static void Log::WriteRaw(const String& message, bool error=false) | File: ../IO/Log.h
    engine->SetDefaultNamespace("Log");
    engine->RegisterGlobalFunction("void WriteRaw(const String&in, bool = false)", AS_FUNCTIONPR(Log::WriteRaw, (const String&, bool), void), AS_CALL_CDECL);
    engine->SetDefaultNamespace("");
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(Log, "Log")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(Log, "Log")
#endif
#ifdef REGISTER_MANUAL_PART_Log
    REGISTER_MANUAL_PART_Log(Log, "Log")
#endif
    RegisterSubclass<Object, Log>(engine, "Object", "Log");
    RegisterSubclass<RefCounted, Log>(engine, "RefCounted", "Log");

    // static const TypeInfo* Object::GetTypeInfoStatic() | File: ../Core/Object.h
    // Error: type "TypeInfo" can not automatically bind bacause have @nobind mark
    // static void Animatable::RegisterObject(Context* context) | File: ../Scene/Animatable.h
    // Not registered because have @nobind mark
#ifdef REGISTER_MANUAL_PART_Component
    REGISTER_MANUAL_PART_Component(LogicComponent, "LogicComponent")
#endif
#ifdef REGISTER_MANUAL_PART_Animatable
    REGISTER_MANUAL_PART_Animatable(LogicComponent, "LogicComponent")
#endif
#ifdef REGISTER_MANUAL_PART_Serializable
    REGISTER_MANUAL_PART_Serializable(LogicComponent, "LogicComponent")
#endif
#ifdef REGISTER_MANUAL_PART_Object
    REGISTER_MANUAL_PART_Object(LogicComponent, "LogicComponent")
#endif
#ifdef REGISTER_MANUAL_PART_RefCounted
    REGISTER_MANUAL_PART_RefCounted(LogicComponent, "LogicComponent")
#endif
#ifdef REGISTER_MANUAL_PART_LogicComponent
    REGISTER_MANUAL_PART_LogicComponent(LogicComponent, "LogicComponent")
#endif
    RegisterSubclass<Component, LogicComponent>(engine, "Component", "LogicComponent");
    RegisterSubclass<Animatable, LogicComponent>(engine, "Animatable", "LogicComponent");
    RegisterSubclass<Serializable, LogicComponent>(engine, "Serializable", "LogicComponent");
    RegisterSubclass<Object, LogicComponent>(engine, "Object", "LogicComponent");
    RegisterSubclass<RefCounted, LogicComponent>(engine, "RefCounted", "LogicComponent");

    // Light* LightBatchQueue::light_ | File: ../Graphics/Batch.h
    // Light* can not be registered
    // BatchQueue LightBatchQueue::litBaseBatches_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("LightBatchQueue", "BatchQueue litBaseBatches", offsetof(LightBatchQueue, litBaseBatches_));
    // BatchQueue LightBatchQueue::litBatches_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("LightBatchQueue", "BatchQueue litBatches", offsetof(LightBatchQueue, litBatches_));
    // bool LightBatchQueue::negative_ | File: ../Graphics/Batch.h
    engine->RegisterObjectProperty("LightBatchQueue", "bool negative", offsetof(LightBatchQueue, negative_));
    // Texture2D* LightBatchQueue::shadowMap_ | File: ../Graphics/Batch.h
    // Texture2D* can not be registered
    // Vector<ShadowBatchQueue> LightBatchQueue::shadowSplits_ | File: ../Graphics/Batch.h
    // Error: type "Vector<ShadowBatchQueue>" can not automatically bind
    // PODVector<Light*> LightBatchQueue::vertexLights_ | File: ../Graphics/Batch.h
    // Error: type "PODVector<Light*>" can not automatically bind
    // PODVector<Batch> LightBatchQueue::volumeBatches_ | File: ../Graphics/Batch.h
    // Error: type "PODVector<Batch>" can not automatically bind
    // LightBatchQueue& LightBatchQueue::operator=(const LightBatchQueue&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<LightBatchQueue>(engine, "LightBatchQueue");
#ifdef REGISTER_MANUAL_PART_LightBatchQueue
    REGISTER_MANUAL_PART_LightBatchQueue(LightBatchQueue, "LightBatchQueue")
#endif

    // Light* LightQueryResult::light_ | File: ../Graphics/View.h
    // Light* can not be registered
    // PODVector<Drawable*> LightQueryResult::litGeometries_ | File: ../Graphics/View.h
    // Error: type "PODVector<Drawable*>" can not automatically bind
    // unsigned LightQueryResult::numSplits_ | File: ../Graphics/View.h
    engine->RegisterObjectProperty("LightQueryResult", "uint numSplits", offsetof(LightQueryResult, numSplits_));
    // Camera* LightQueryResult::shadowCameras_[MAX_LIGHT_SPLITS] | File: ../Graphics/View.h
    // Not registered because array
    // unsigned LightQueryResult::shadowCasterBegin_[MAX_LIGHT_SPLITS] | File: ../Graphics/View.h
    // Not registered because array
    // BoundingBox LightQueryResult::shadowCasterBox_[MAX_LIGHT_SPLITS] | File: ../Graphics/View.h
    // Not registered because array
    // unsigned LightQueryResult::shadowCasterEnd_[MAX_LIGHT_SPLITS] | File: ../Graphics/View.h
    // Not registered because array
    // PODVector<Drawable*> LightQueryResult::shadowCasters_ | File: ../Graphics/View.h
    // Error: type "PODVector<Drawable*>" can not automatically bind
    // float LightQueryResult::shadowFarSplits_[MAX_LIGHT_SPLITS] | File: ../Graphics/View.h
    // Not registered because array
    // float LightQueryResult::shadowNearSplits_[MAX_LIGHT_SPLITS] | File: ../Graphics/View.h
    // Not registered because array
    // LightQueryResult& LightQueryResult::operator=(const LightQueryResult&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<LightQueryResult>(engine, "LightQueryResult");
#ifdef REGISTER_MANUAL_PART_LightQueryResult
    REGISTER_MANUAL_PART_LightQueryResult(LightQueryResult, "LightQueryResult")
#endif

    // LinkedListNode* LinkedListNode::next_ | File: ../Container/LinkedList.h
    // LinkedListNode* can not be registered
    // LinkedListNode& LinkedListNode::operator=(const LinkedListNode&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<LinkedListNode>(engine, "LinkedListNode");
#ifdef REGISTER_MANUAL_PART_LinkedListNode
    REGISTER_MANUAL_PART_LinkedListNode(LinkedListNode, "LinkedListNode")
#endif

    // ListNodeBase* ListIteratorBase::ptr_ | File: ../Container/ListBase.h
    // ListNodeBase* can not be registered
    // ListIteratorBase& ListIteratorBase::operator=(const ListIteratorBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ListIteratorBase>(engine, "ListIteratorBase");
#ifdef REGISTER_MANUAL_PART_ListIteratorBase
    REGISTER_MANUAL_PART_ListIteratorBase(ListIteratorBase, "ListIteratorBase")
#endif

    // ListNodeBase* ListNodeBase::next_ | File: ../Container/ListBase.h
    // ListNodeBase* can not be registered
    // ListNodeBase* ListNodeBase::prev_ | File: ../Container/ListBase.h
    // ListNodeBase* can not be registered
    // ListNodeBase& ListNodeBase::operator=(const ListNodeBase&) | Possible implicitly-declared
    RegisterImplicitlyDeclaredAssignOperatorIfPossible<ListNodeBase>(engine, "ListNodeBase");
#ifdef REGISTER_MANUAL_PART_ListNodeBase
    REGISTER_MANUAL_PART_ListNodeBase(ListNodeBase, "ListNodeBase")
#endif

}

}
