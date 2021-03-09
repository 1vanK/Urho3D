// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// class BorderImage | File: ../UI/BorderImage.h
void CollectMembers_BorderImage(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_UIElement(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual void UIElement::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)");

    Remove(staticMethods, "static void UIElement::RegisterObject(Context* context)");

    // void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetTexture(Texture* texture)", "void SetTexture(Texture@+)", AS_METHODPR(BorderImage, SetTexture, (Texture*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetTexture(Texture* texture)", "void set_texture(Texture@+)", AS_METHODPR(BorderImage, SetTexture, (Texture*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetImageRect(const IntRect& rect)", "void SetImageRect(const IntRect&in)", AS_METHODPR(BorderImage, SetImageRect, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetImageRect(const IntRect& rect)", "void set_imageRect(const IntRect&in)", AS_METHODPR(BorderImage, SetImageRect, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetFullImageRect()", "void SetFullImageRect()", AS_METHODPR(BorderImage, SetFullImageRect, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetBorder(const IntRect& rect)", "void SetBorder(const IntRect&in)", AS_METHODPR(BorderImage, SetBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetBorder(const IntRect& rect)", "void set_border(const IntRect&in)", AS_METHODPR(BorderImage, SetBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetImageBorder(const IntRect& rect)", "void SetImageBorder(const IntRect&in)", AS_METHODPR(BorderImage, SetImageBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetImageBorder(const IntRect& rect)", "void set_imageBorder(const IntRect&in)", AS_METHODPR(BorderImage, SetImageBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetHoverOffset(const IntVector2& offset)", "void SetHoverOffset(const IntVector2&in)", AS_METHODPR(BorderImage, SetHoverOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetHoverOffset(const IntVector2& offset)", "void set_hoverOffset(const IntVector2&in)", AS_METHODPR(BorderImage, SetHoverOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetHoverOffset(int x, int y)", "void SetHoverOffset(int, int)", AS_METHODPR(BorderImage, SetHoverOffset, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetDisabledOffset(const IntVector2& offset)", "void SetDisabledOffset(const IntVector2&in)", AS_METHODPR(BorderImage, SetDisabledOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetDisabledOffset(const IntVector2& offset)", "void set_disabledOffset(const IntVector2&in)", AS_METHODPR(BorderImage, SetDisabledOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetDisabledOffset(int x, int y)", "void SetDisabledOffset(int, int)", AS_METHODPR(BorderImage, SetDisabledOffset, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetBlendMode(BlendMode mode)", "void SetBlendMode(BlendMode)", AS_METHODPR(BorderImage, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetBlendMode(BlendMode mode)", "void set_blendMode(BlendMode)", AS_METHODPR(BorderImage, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetTiled(bool enable)", "void SetTiled(bool)", AS_METHODPR(BorderImage, SetTiled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetTiled(bool enable)", "void set_tiled(bool)", AS_METHODPR(BorderImage, SetTiled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetMaterial(Material* material)", "void SetMaterial(Material@+)", AS_METHODPR(BorderImage, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetMaterial(Material* material)", "void set_material(Material@+)", AS_METHODPR(BorderImage, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture* BorderImage::GetTexture() const", "Texture@+ GetTexture() const", AS_METHODPR(BorderImage, GetTexture, () const, Texture*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture* BorderImage::GetTexture() const", "Texture@+ get_texture() const", AS_METHODPR(BorderImage, GetTexture, () const, Texture*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& BorderImage::GetImageRect() const", "const IntRect& GetImageRect() const", AS_METHODPR(BorderImage, GetImageRect, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& BorderImage::GetImageRect() const", "const IntRect& get_imageRect() const", AS_METHODPR(BorderImage, GetImageRect, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& BorderImage::GetBorder() const", "const IntRect& GetBorder() const", AS_METHODPR(BorderImage, GetBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& BorderImage::GetBorder() const", "const IntRect& get_border() const", AS_METHODPR(BorderImage, GetBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& BorderImage::GetImageBorder() const", "const IntRect& GetImageBorder() const", AS_METHODPR(BorderImage, GetImageBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& BorderImage::GetImageBorder() const", "const IntRect& get_imageBorder() const", AS_METHODPR(BorderImage, GetImageBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& BorderImage::GetHoverOffset() const", "const IntVector2& GetHoverOffset() const", AS_METHODPR(BorderImage, GetHoverOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& BorderImage::GetHoverOffset() const", "const IntVector2& get_hoverOffset() const", AS_METHODPR(BorderImage, GetHoverOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& BorderImage::GetDisabledOffset() const", "const IntVector2& GetDisabledOffset() const", AS_METHODPR(BorderImage, GetDisabledOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& BorderImage::GetDisabledOffset() const", "const IntVector2& get_disabledOffset() const", AS_METHODPR(BorderImage, GetDisabledOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BlendMode BorderImage::GetBlendMode() const", "BlendMode GetBlendMode() const", AS_METHODPR(BorderImage, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BlendMode BorderImage::GetBlendMode() const", "BlendMode get_blendMode() const", AS_METHODPR(BorderImage, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool BorderImage::IsTiled() const", "bool IsTiled() const", AS_METHODPR(BorderImage, IsTiled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool BorderImage::IsTiled() const", "bool get_tiled() const", AS_METHODPR(BorderImage, IsTiled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Material* BorderImage::GetMaterial() const", "Material@+ GetMaterial() const", AS_METHODPR(BorderImage, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Material* BorderImage::GetMaterial() const", "Material@+ get_material() const", AS_METHODPR(BorderImage, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetTextureAttr(const ResourceRef& value)", "void SetTextureAttr(const ResourceRef&in)", AS_METHODPR(BorderImage, SetTextureAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef BorderImage::GetTextureAttr() const", "ResourceRef GetTextureAttr() const", AS_METHODPR(BorderImage, GetTextureAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void BorderImage::SetMaterialAttr(const ResourceRef& value)", "void SetMaterialAttr(const ResourceRef&in)", AS_METHODPR(BorderImage, SetMaterialAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef BorderImage::GetMaterialAttr() const", "ResourceRef GetMaterialAttr() const", AS_METHODPR(BorderImage, GetMaterialAttr, () const, ResourceRef), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void BorderImage::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(BorderImage_RegisterObject_Context), AS_CALL_CDECL));
}

// class Button | File: ../UI/Button.h
void CollectMembers_Button(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_BorderImage(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual void UIElement::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnClickEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor, UIElement* beginElement)");
    Remove(methods, "virtual void UIElement::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)");
    Remove(methods, "virtual void UIElement::Update(float timeStep)");
    Remove(methods, "void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override");

    Remove(staticMethods, "static void BorderImage::RegisterObject(Context* context)");

    // void Button::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void Button::Update(float timeStep) override", "void Update(float)", AS_METHODPR(Button, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnClickBegin(const IntVector2&in, const IntVector2&in, MouseButton, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(Button, OnClickBegin, (const IntVector2&, const IntVector2&, MouseButton, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::OnClickEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor, UIElement* beginElement) override", "void OnClickEnd(const IntVector2&in, const IntVector2&in, MouseButton, MouseButtonFlags, QualifierFlags, Cursor@+, UIElement@+)", AS_METHODPR(Button, OnClickEnd, (const IntVector2&, const IntVector2&, MouseButton, MouseButtonFlags, QualifierFlags, Cursor*, UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnDragMove(const IntVector2&in, const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(Button, OnDragMove, (const IntVector2&, const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override", "void OnKey(Key, MouseButtonFlags, QualifierFlags)", AS_METHODPR(Button, OnKey, (Key, MouseButtonFlags, QualifierFlags), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetPressedOffset(const IntVector2& offset)", "void SetPressedOffset(const IntVector2&in)", AS_METHODPR(Button, SetPressedOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetPressedOffset(const IntVector2& offset)", "void set_pressedOffset(const IntVector2&in)", AS_METHODPR(Button, SetPressedOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetPressedOffset(int x, int y)", "void SetPressedOffset(int, int)", AS_METHODPR(Button, SetPressedOffset, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetPressedChildOffset(const IntVector2& offset)", "void SetPressedChildOffset(const IntVector2&in)", AS_METHODPR(Button, SetPressedChildOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetPressedChildOffset(const IntVector2& offset)", "void set_pressedChildOffset(const IntVector2&in)", AS_METHODPR(Button, SetPressedChildOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetPressedChildOffset(int x, int y)", "void SetPressedChildOffset(int, int)", AS_METHODPR(Button, SetPressedChildOffset, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetRepeat(float delay, float rate)", "void SetRepeat(float, float)", AS_METHODPR(Button, SetRepeat, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetRepeatDelay(float delay)", "void SetRepeatDelay(float)", AS_METHODPR(Button, SetRepeatDelay, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetRepeatDelay(float delay)", "void set_repeatDelay(float)", AS_METHODPR(Button, SetRepeatDelay, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetRepeatRate(float rate)", "void SetRepeatRate(float)", AS_METHODPR(Button, SetRepeatRate, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Button::SetRepeatRate(float rate)", "void set_repeatRate(float)", AS_METHODPR(Button, SetRepeatRate, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Button::GetPressedOffset() const", "const IntVector2& GetPressedOffset() const", AS_METHODPR(Button, GetPressedOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Button::GetPressedOffset() const", "const IntVector2& get_pressedOffset() const", AS_METHODPR(Button, GetPressedOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Button::GetPressedChildOffset() const", "const IntVector2& GetPressedChildOffset() const", AS_METHODPR(Button, GetPressedChildOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Button::GetPressedChildOffset() const", "const IntVector2& get_pressedChildOffset() const", AS_METHODPR(Button, GetPressedChildOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Button::GetRepeatDelay() const", "float GetRepeatDelay() const", AS_METHODPR(Button, GetRepeatDelay, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Button::GetRepeatDelay() const", "float get_repeatDelay() const", AS_METHODPR(Button, GetRepeatDelay, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Button::GetRepeatRate() const", "float GetRepeatRate() const", AS_METHODPR(Button, GetRepeatRate, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Button::GetRepeatRate() const", "float get_repeatRate() const", AS_METHODPR(Button, GetRepeatRate, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Button::IsPressed() const", "bool IsPressed() const", AS_METHODPR(Button, IsPressed, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Button::IsPressed() const", "bool get_pressed() const", AS_METHODPR(Button, IsPressed, () const, bool), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void Button::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(Button_RegisterObject_Context), AS_CALL_CDECL));
}

// struct CharLocation | File: ../UI/Text.h
void CollectMembers_CharLocation(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    fields.Push(RegisterObjectPropertyArgs("Vector2 CharLocation::position_", "Vector2 position", offsetof(CharLocation, position_)));
    fields.Push(RegisterObjectPropertyArgs("Vector2 CharLocation::size_", "Vector2 size", offsetof(CharLocation, size_)));
}

// class CheckBox | File: ../UI/CheckBox.h
void CollectMembers_CheckBox(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_BorderImage(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual void UIElement::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)");
    Remove(methods, "void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override");

    Remove(staticMethods, "static void BorderImage::RegisterObject(Context* context)");

    // void CheckBox::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void CheckBox::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnClickBegin(const IntVector2&in, const IntVector2&in, MouseButton, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(CheckBox, OnClickBegin, (const IntVector2&, const IntVector2&, MouseButton, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CheckBox::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override", "void OnKey(Key, MouseButtonFlags, QualifierFlags)", AS_METHODPR(CheckBox, OnKey, (Key, MouseButtonFlags, QualifierFlags), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CheckBox::SetChecked(bool enable)", "void SetChecked(bool)", AS_METHODPR(CheckBox, SetChecked, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CheckBox::SetChecked(bool enable)", "void set_checked(bool)", AS_METHODPR(CheckBox, SetChecked, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CheckBox::SetCheckedOffset(const IntVector2& offset)", "void SetCheckedOffset(const IntVector2&in)", AS_METHODPR(CheckBox, SetCheckedOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CheckBox::SetCheckedOffset(const IntVector2& offset)", "void set_checkedOffset(const IntVector2&in)", AS_METHODPR(CheckBox, SetCheckedOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CheckBox::SetCheckedOffset(int x, int y)", "void SetCheckedOffset(int, int)", AS_METHODPR(CheckBox, SetCheckedOffset, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CheckBox::IsChecked() const", "bool IsChecked() const", AS_METHODPR(CheckBox, IsChecked, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CheckBox::IsChecked() const", "bool get_checked() const", AS_METHODPR(CheckBox, IsChecked, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& CheckBox::GetCheckedOffset() const", "const IntVector2& GetCheckedOffset() const", AS_METHODPR(CheckBox, GetCheckedOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& CheckBox::GetCheckedOffset() const", "const IntVector2& get_checkedOffset() const", AS_METHODPR(CheckBox, GetCheckedOffset, () const, const IntVector2&), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void CheckBox::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(CheckBox_RegisterObject_Context), AS_CALL_CDECL));
}

// class Cursor | File: ../UI/Cursor.h
void CollectMembers_Cursor(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_BorderImage(methods, staticMethods, fields, staticFields);

    Remove(methods, "void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override");

    Remove(staticMethods, "static void BorderImage::RegisterObject(Context* context)");

    // void Cursor::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind
    // VariantVector Cursor::GetShapesAttr() const
    // Error: type "VariantVector" can not automatically bind
    // void Cursor::SetShapesAttr(const VariantVector& value)
    // Error: type "const VariantVector&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void Cursor::DefineShape(const String& shape, Image* image, const IntRect& imageRect, const IntVector2& hotSpot)", "void DefineShape(const String&in, Image@+, const IntRect&in, const IntVector2&in)", AS_METHODPR(Cursor, DefineShape, (const String&, Image*, const IntRect&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Cursor::DefineShape(CursorShape shape, Image* image, const IntRect& imageRect, const IntVector2& hotSpot)", "void DefineShape(CursorShape, Image@+, const IntRect&in, const IntVector2&in)", AS_METHODPR(Cursor, DefineShape, (CursorShape, Image*, const IntRect&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Cursor::SetShape(const String& shape)", "void SetShape(const String&in)", AS_METHODPR(Cursor, SetShape, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Cursor::SetShape(const String& shape)", "void set_shape(const String&in)", AS_METHODPR(Cursor, SetShape, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Cursor::SetShape(CursorShape shape)", "void SetShape(CursorShape)", AS_METHODPR(Cursor, SetShape, (CursorShape), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Cursor::SetUseSystemShapes(bool enable)", "void SetUseSystemShapes(bool)", AS_METHODPR(Cursor, SetUseSystemShapes, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Cursor::SetUseSystemShapes(bool enable)", "void set_useSystemShapes(bool)", AS_METHODPR(Cursor, SetUseSystemShapes, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Cursor::GetShape() const", "const String& GetShape() const", AS_METHODPR(Cursor, GetShape, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Cursor::GetShape() const", "const String& get_shape() const", AS_METHODPR(Cursor, GetShape, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Cursor::GetUseSystemShapes() const", "bool GetUseSystemShapes() const", AS_METHODPR(Cursor, GetUseSystemShapes, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Cursor::GetUseSystemShapes() const", "bool get_useSystemShapes() const", AS_METHODPR(Cursor, GetUseSystemShapes, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Cursor::ApplyOSCursorShape()", "void ApplyOSCursorShape()", AS_METHODPR(Cursor, ApplyOSCursorShape, (), void), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void Cursor::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(Cursor_RegisterObject_Context), AS_CALL_CDECL));
}

// struct CursorShapeInfo | File: ../UI/Cursor.h
void CollectMembers_CursorShapeInfo(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // SharedPtr<Image> CursorShapeInfo::image_
    // Error: type "SharedPtr<Image>" can not automatically bind
    // SharedPtr<Texture> CursorShapeInfo::texture_
    // Error: type "SharedPtr<Texture>" can not automatically bind
    // SDL_Cursor* CursorShapeInfo::osCursor_
    // Not registered because pointer

    fields.Push(RegisterObjectPropertyArgs("IntRect CursorShapeInfo::imageRect_", "IntRect imageRect", offsetof(CursorShapeInfo, imageRect_)));
    fields.Push(RegisterObjectPropertyArgs("IntVector2 CursorShapeInfo::hotSpot_", "IntVector2 hotSpot", offsetof(CursorShapeInfo, hotSpot_)));
    fields.Push(RegisterObjectPropertyArgs("bool CursorShapeInfo::systemDefined_", "bool systemDefined", offsetof(CursorShapeInfo, systemDefined_)));
    fields.Push(RegisterObjectPropertyArgs("int CursorShapeInfo::systemCursor_", "int systemCursor", offsetof(CursorShapeInfo, systemCursor_)));
}

// PODVector<UIElement*> DropDownList::GetItems() const
// PODVector<UIElement*> DropDownList::GetItems() const | File: ../UI/DropDownList.h
static CScriptArray* DropDownList_GetItems_void(DropDownList* ptr)
{
    PODVector<UIElement*> result = ptr->GetItems();
    return VectorToHandleArray(result, "Array<UIElement@>");
}


// class DropDownList | File: ../UI/DropDownList.h
void CollectMembers_DropDownList(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Menu(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual void Menu::OnHidePopup()");
    Remove(methods, "virtual void Menu::OnShowPopup()");
    Remove(methods, "virtual void UIElement::OnSetEditable()");
    Remove(methods, "void Button::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override");
    Remove(methods, "void UIElement::ApplyAttributes() override");

    Remove(staticMethods, "static void Menu::RegisterObject(Context* context)");

    // void DropDownList::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void DropDownList::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(DropDownList, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::OnShowPopup() override", "void OnShowPopup()", AS_METHODPR(DropDownList, OnShowPopup, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::OnHidePopup() override", "void OnHidePopup()", AS_METHODPR(DropDownList, OnHidePopup, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::OnSetEditable() override", "void OnSetEditable()", AS_METHODPR(DropDownList, OnSetEditable, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::AddItem(UIElement* item)", "void AddItem(UIElement@+)", AS_METHODPR(DropDownList, AddItem, (UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::InsertItem(unsigned index, UIElement* item)", "void InsertItem(uint, UIElement@+)", AS_METHODPR(DropDownList, InsertItem, (unsigned, UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::RemoveItem(UIElement* item)", "void RemoveItem(UIElement@+)", AS_METHODPR(DropDownList, RemoveItem, (UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::RemoveItem(unsigned index)", "void RemoveItem(uint)", AS_METHODPR(DropDownList, RemoveItem, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::RemoveAllItems()", "void RemoveAllItems()", AS_METHODPR(DropDownList, RemoveAllItems, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::SetSelection(unsigned index)", "void SetSelection(uint)", AS_METHODPR(DropDownList, SetSelection, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::SetSelection(unsigned index)", "void set_selection(uint)", AS_METHODPR(DropDownList, SetSelection, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::SetPlaceholderText(const String& text)", "void SetPlaceholderText(const String&in)", AS_METHODPR(DropDownList, SetPlaceholderText, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::SetPlaceholderText(const String& text)", "void set_placeholderText(const String&in)", AS_METHODPR(DropDownList, SetPlaceholderText, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::SetResizePopup(bool enable)", "void SetResizePopup(bool)", AS_METHODPR(DropDownList, SetResizePopup, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::SetResizePopup(bool enable)", "void set_resizePopup(bool)", AS_METHODPR(DropDownList, SetResizePopup, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned DropDownList::GetNumItems() const", "uint GetNumItems() const", AS_METHODPR(DropDownList, GetNumItems, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned DropDownList::GetNumItems() const", "uint get_numItems() const", AS_METHODPR(DropDownList, GetNumItems, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* DropDownList::GetItem(unsigned index) const", "UIElement@+ GetItem(uint) const", AS_METHODPR(DropDownList, GetItem, (unsigned) const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* DropDownList::GetItem(unsigned index) const", "UIElement@+ get_items(uint) const", AS_METHODPR(DropDownList, GetItem, (unsigned) const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("PODVector<UIElement*> DropDownList::GetItems() const", "Array<UIElement@>@ GetItems() const", AS_FUNCTION_OBJFIRST(DropDownList_GetItems_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("unsigned DropDownList::GetSelection() const", "uint GetSelection() const", AS_METHODPR(DropDownList, GetSelection, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned DropDownList::GetSelection() const", "uint get_selection() const", AS_METHODPR(DropDownList, GetSelection, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* DropDownList::GetSelectedItem() const", "UIElement@+ GetSelectedItem() const", AS_METHODPR(DropDownList, GetSelectedItem, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* DropDownList::GetSelectedItem() const", "UIElement@+ get_selectedItem() const", AS_METHODPR(DropDownList, GetSelectedItem, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ListView* DropDownList::GetListView() const", "ListView@+ GetListView() const", AS_METHODPR(DropDownList, GetListView, () const, ListView*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ListView* DropDownList::GetListView() const", "ListView@+ get_listView() const", AS_METHODPR(DropDownList, GetListView, () const, ListView*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* DropDownList::GetPlaceholder() const", "UIElement@+ GetPlaceholder() const", AS_METHODPR(DropDownList, GetPlaceholder, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* DropDownList::GetPlaceholder() const", "UIElement@+ get_placeholder() const", AS_METHODPR(DropDownList, GetPlaceholder, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& DropDownList::GetPlaceholderText() const", "const String& GetPlaceholderText() const", AS_METHODPR(DropDownList, GetPlaceholderText, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& DropDownList::GetPlaceholderText() const", "const String& get_placeholderText() const", AS_METHODPR(DropDownList, GetPlaceholderText, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool DropDownList::GetResizePopup() const", "bool GetResizePopup() const", AS_METHODPR(DropDownList, GetResizePopup, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool DropDownList::GetResizePopup() const", "bool get_resizePopup() const", AS_METHODPR(DropDownList, GetResizePopup, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void DropDownList::SetSelectionAttr(unsigned index)", "void SetSelectionAttr(uint)", AS_METHODPR(DropDownList, SetSelectionAttr, (unsigned), void), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void DropDownList::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(DropDownList_RegisterObject_Context), AS_CALL_CDECL));
}

// void FileSelector::SetFilters(const Vector<String>& filters, unsigned defaultIndex)
// void FileSelector::SetFilters(const Vector<String>& filters, unsigned defaultIndex) | File: ../UI/FileSelector.h
static void FileSelector_SetFilters_VectorString_unsigned(FileSelector* ptr, CScriptArray* filters_conv, unsigned defaultIndex)
{
    Vector<String> filters = ArrayToVector<String>(filters_conv);
    ptr->SetFilters(filters, defaultIndex);
}


// class FileSelector | File: ../UI/FileSelector.h
void CollectMembers_FileSelector(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Object(methods, staticMethods, fields, staticFields);

    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetDefaultStyle(XMLFile* style)", "void SetDefaultStyle(XMLFile@+)", AS_METHODPR(FileSelector, SetDefaultStyle, (XMLFile*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetDefaultStyle(XMLFile* style)", "void set_defaultStyle(XMLFile@+)", AS_METHODPR(FileSelector, SetDefaultStyle, (XMLFile*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetTitle(const String& text)", "void SetTitle(const String&in)", AS_METHODPR(FileSelector, SetTitle, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetTitle(const String& text)", "void set_title(const String&in)", AS_METHODPR(FileSelector, SetTitle, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetButtonTexts(const String& okText, const String& cancelText)", "void SetButtonTexts(const String&in, const String&in)", AS_METHODPR(FileSelector, SetButtonTexts, (const String&, const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetPath(const String& path)", "void SetPath(const String&in)", AS_METHODPR(FileSelector, SetPath, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetPath(const String& path)", "void set_path(const String&in)", AS_METHODPR(FileSelector, SetPath, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetFileName(const String& fileName)", "void SetFileName(const String&in)", AS_METHODPR(FileSelector, SetFileName, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetFileName(const String& fileName)", "void set_fileName(const String&in)", AS_METHODPR(FileSelector, SetFileName, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetFilters(const Vector<String>& filters, unsigned defaultIndex)", "void SetFilters(Array<String>@+, uint)", AS_FUNCTION_OBJFIRST(FileSelector_SetFilters_VectorString_unsigned), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetDirectoryMode(bool enable)", "void SetDirectoryMode(bool)", AS_METHODPR(FileSelector, SetDirectoryMode, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::SetDirectoryMode(bool enable)", "void set_directoryMode(bool)", AS_METHODPR(FileSelector, SetDirectoryMode, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void FileSelector::UpdateElements()", "void UpdateElements()", AS_METHODPR(FileSelector, UpdateElements, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLFile* FileSelector::GetDefaultStyle() const", "XMLFile@+ GetDefaultStyle() const", AS_METHODPR(FileSelector, GetDefaultStyle, () const, XMLFile*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLFile* FileSelector::GetDefaultStyle() const", "XMLFile@+ get_defaultStyle() const", AS_METHODPR(FileSelector, GetDefaultStyle, () const, XMLFile*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Window* FileSelector::GetWindow() const", "Window@+ GetWindow() const", AS_METHODPR(FileSelector, GetWindow, () const, Window*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Window* FileSelector::GetWindow() const", "Window@+ get_window() const", AS_METHODPR(FileSelector, GetWindow, () const, Window*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Text* FileSelector::GetTitleText() const", "Text@+ GetTitleText() const", AS_METHODPR(FileSelector, GetTitleText, () const, Text*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Text* FileSelector::GetTitleText() const", "Text@+ get_titleText() const", AS_METHODPR(FileSelector, GetTitleText, () const, Text*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ListView* FileSelector::GetFileList() const", "ListView@+ GetFileList() const", AS_METHODPR(FileSelector, GetFileList, () const, ListView*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ListView* FileSelector::GetFileList() const", "ListView@+ get_fileList() const", AS_METHODPR(FileSelector, GetFileList, () const, ListView*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("LineEdit* FileSelector::GetPathEdit() const", "LineEdit@+ GetPathEdit() const", AS_METHODPR(FileSelector, GetPathEdit, () const, LineEdit*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("LineEdit* FileSelector::GetPathEdit() const", "LineEdit@+ get_pathEdit() const", AS_METHODPR(FileSelector, GetPathEdit, () const, LineEdit*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("LineEdit* FileSelector::GetFileNameEdit() const", "LineEdit@+ GetFileNameEdit() const", AS_METHODPR(FileSelector, GetFileNameEdit, () const, LineEdit*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("LineEdit* FileSelector::GetFileNameEdit() const", "LineEdit@+ get_fileNameEdit() const", AS_METHODPR(FileSelector, GetFileNameEdit, () const, LineEdit*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("DropDownList* FileSelector::GetFilterList() const", "DropDownList@+ GetFilterList() const", AS_METHODPR(FileSelector, GetFilterList, () const, DropDownList*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("DropDownList* FileSelector::GetFilterList() const", "DropDownList@+ get_filterList() const", AS_METHODPR(FileSelector, GetFilterList, () const, DropDownList*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Button* FileSelector::GetOKButton() const", "Button@+ GetOKButton() const", AS_METHODPR(FileSelector, GetOKButton, () const, Button*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Button* FileSelector::GetOKButton() const", "Button@+ get_okButton() const", AS_METHODPR(FileSelector, GetOKButton, () const, Button*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Button* FileSelector::GetCancelButton() const", "Button@+ GetCancelButton() const", AS_METHODPR(FileSelector, GetCancelButton, () const, Button*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Button* FileSelector::GetCancelButton() const", "Button@+ get_cancelButton() const", AS_METHODPR(FileSelector, GetCancelButton, () const, Button*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Button* FileSelector::GetCloseButton() const", "Button@+ GetCloseButton() const", AS_METHODPR(FileSelector, GetCloseButton, () const, Button*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& FileSelector::GetTitle() const", "const String& GetTitle() const", AS_METHODPR(FileSelector, GetTitle, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& FileSelector::GetTitle() const", "const String& get_title() const", AS_METHODPR(FileSelector, GetTitle, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& FileSelector::GetPath() const", "const String& GetPath() const", AS_METHODPR(FileSelector, GetPath, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& FileSelector::GetPath() const", "const String& get_path() const", AS_METHODPR(FileSelector, GetPath, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& FileSelector::GetFileName() const", "const String& GetFileName() const", AS_METHODPR(FileSelector, GetFileName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& FileSelector::GetFileName() const", "const String& get_fileName() const", AS_METHODPR(FileSelector, GetFileName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& FileSelector::GetFilter() const", "const String& GetFilter() const", AS_METHODPR(FileSelector, GetFilter, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& FileSelector::GetFilter() const", "const String& get_filter() const", AS_METHODPR(FileSelector, GetFilter, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned FileSelector::GetFilterIndex() const", "uint GetFilterIndex() const", AS_METHODPR(FileSelector, GetFilterIndex, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned FileSelector::GetFilterIndex() const", "uint get_filterIndex() const", AS_METHODPR(FileSelector, GetFilterIndex, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool FileSelector::GetDirectoryMode() const", "bool GetDirectoryMode() const", AS_METHODPR(FileSelector, GetDirectoryMode, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool FileSelector::GetDirectoryMode() const", "bool get_directoryMode() const", AS_METHODPR(FileSelector, GetDirectoryMode, () const, bool), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void FileSelector::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(FileSelector_RegisterObject_Context), AS_CALL_CDECL));
}

// struct FileSelectorEntry | File: ../UI/FileSelector.h
void CollectMembers_FileSelectorEntry(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    fields.Push(RegisterObjectPropertyArgs("String FileSelectorEntry::name_", "String name", offsetof(FileSelectorEntry, name_)));
    fields.Push(RegisterObjectPropertyArgs("bool FileSelectorEntry::directory_", "bool directory", offsetof(FileSelectorEntry, directory_)));
}

// class Font | File: ../UI/Font.h
void CollectMembers_Font(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Resource(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");

    methods.Push(RegisterObjectMethodArgs("bool Font::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Font, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Font::SaveXML(Serializer& dest, int pointSize, bool usedGlyphs=false, const String& indentation=\"\t\")", "bool SaveXML(Serializer&, int, bool = false, const String&in = \"\t\")", AS_METHODPR(Font, SaveXML, (Serializer&, int, bool, const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Font::SetAbsoluteGlyphOffset(const IntVector2& offset)", "void SetAbsoluteGlyphOffset(const IntVector2&in)", AS_METHODPR(Font, SetAbsoluteGlyphOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Font::SetAbsoluteGlyphOffset(const IntVector2& offset)", "void set_absoluteGlyphOffset(const IntVector2&in)", AS_METHODPR(Font, SetAbsoluteGlyphOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Font::SetScaledGlyphOffset(const Vector2& offset)", "void SetScaledGlyphOffset(const Vector2&in)", AS_METHODPR(Font, SetScaledGlyphOffset, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Font::SetScaledGlyphOffset(const Vector2& offset)", "void set_scaledGlyphOffset(const Vector2&in)", AS_METHODPR(Font, SetScaledGlyphOffset, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("FontFace* Font::GetFace(float pointSize)", "FontFace@+ GetFace(float)", AS_METHODPR(Font, GetFace, (float), FontFace*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("FontType Font::GetFontType() const", "FontType GetFontType() const", AS_METHODPR(Font, GetFontType, () const, FontType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("FontType Font::GetFontType() const", "FontType get_fontType() const", AS_METHODPR(Font, GetFontType, () const, FontType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Font::IsSDFFont() const", "bool IsSDFFont() const", AS_METHODPR(Font, IsSDFFont, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Font::GetAbsoluteGlyphOffset() const", "const IntVector2& GetAbsoluteGlyphOffset() const", AS_METHODPR(Font, GetAbsoluteGlyphOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Font::GetAbsoluteGlyphOffset() const", "const IntVector2& get_absoluteGlyphOffset() const", AS_METHODPR(Font, GetAbsoluteGlyphOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& Font::GetScaledGlyphOffset() const", "const Vector2& GetScaledGlyphOffset() const", AS_METHODPR(Font, GetScaledGlyphOffset, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& Font::GetScaledGlyphOffset() const", "const Vector2& get_scaledGlyphOffset() const", AS_METHODPR(Font, GetScaledGlyphOffset, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 Font::GetTotalGlyphOffset(float pointSize) const", "IntVector2 GetTotalGlyphOffset(float) const", AS_METHODPR(Font, GetTotalGlyphOffset, (float) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Font::ReleaseFaces()", "void ReleaseFaces()", AS_METHODPR(Font, ReleaseFaces, (), void), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void Font::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(Font_RegisterObject_Context), AS_CALL_CDECL));
}

// const Vector<SharedPtr<Texture2D>>& FontFace::GetTextures() const
// const Vector<SharedPtr<Texture2D>>& FontFace::GetTextures() const | File: ../UI/FontFace.h
static CScriptArray* FontFace_GetTextures_void(FontFace* ptr)
{
    const Vector<SharedPtr<Texture2D>>& result = ptr->GetTextures();
    return VectorToHandleArray(result, "Array<Texture2D@>");
}


// class FontFace | File: ../UI/FontFace.h
void CollectMembers_FontFace(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_RefCounted(methods, staticMethods, fields, staticFields);

    // virtual const FontGlyph* FontFace::GetGlyph(unsigned c)
    // Error: type "const FontGlyph*" can not automatically bind
    // virtual bool FontFace::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize)=0
    // Error: type "const unsigned char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("virtual bool FontFace::HasMutableGlyphs() const", "bool HasMutableGlyphs() const", AS_METHODPR(FontFace, HasMutableGlyphs, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float FontFace::GetKerning(unsigned c, unsigned d) const", "float GetKerning(uint, uint) const", AS_METHODPR(FontFace, GetKerning, (unsigned, unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool FontFace::IsDataLost() const", "bool IsDataLost() const", AS_METHODPR(FontFace, IsDataLost, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float FontFace::GetPointSize() const", "float GetPointSize() const", AS_METHODPR(FontFace, GetPointSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float FontFace::GetRowHeight() const", "float GetRowHeight() const", AS_METHODPR(FontFace, GetRowHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<Texture2D>>& FontFace::GetTextures() const", "Array<Texture2D@>@ GetTextures() const", AS_FUNCTION_OBJFIRST(FontFace_GetTextures_void), AS_CALL_CDECL_OBJFIRST));
}

// class FontFaceBitmap | File: ../UI/FontFaceBitmap.h
void CollectMembers_FontFaceBitmap(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_FontFace(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual bool FontFace::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize)=0");

    // bool FontFaceBitmap::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize) override
    // Error: type "const unsigned char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool FontFaceBitmap::Load(FontFace* fontFace, bool usedGlyphs)", "bool Load(FontFace@+, bool)", AS_METHODPR(FontFaceBitmap, Load, (FontFace*, bool), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool FontFaceBitmap::Save(Serializer& dest, int pointSize, const String& indentation=\"\t\")", "bool Save(Serializer&, int, const String&in = \"\t\")", AS_METHODPR(FontFaceBitmap, Save, (Serializer&, int, const String&), bool), AS_CALL_THISCALL));
}

// class FontFaceFreeType | File: ../UI/FontFaceFreeType.h
void CollectMembers_FontFaceFreeType(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_FontFace(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual bool FontFace::HasMutableGlyphs() const");
    Remove(methods, "virtual bool FontFace::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize)=0");
    Remove(methods, "virtual const FontGlyph* FontFace::GetGlyph(unsigned c)");

    // const FontGlyph* FontFaceFreeType::GetGlyph(unsigned c) override
    // Error: type "const FontGlyph*" can not automatically bind
    // bool FontFaceFreeType::Load(const unsigned char* fontData, unsigned fontDataSize, float pointSize) override
    // Error: type "const unsigned char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool FontFaceFreeType::HasMutableGlyphs() const override", "bool HasMutableGlyphs() const", AS_METHODPR(FontFaceFreeType, HasMutableGlyphs, () const, bool), AS_CALL_THISCALL));
}

// struct FontGlyph | File: ../UI/FontFace.h
void CollectMembers_FontGlyph(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    fields.Push(RegisterObjectPropertyArgs("short FontGlyph::x_", "int16 x", offsetof(FontGlyph, x_)));
    fields.Push(RegisterObjectPropertyArgs("short FontGlyph::y_", "int16 y", offsetof(FontGlyph, y_)));
    fields.Push(RegisterObjectPropertyArgs("short FontGlyph::texWidth_", "int16 texWidth", offsetof(FontGlyph, texWidth_)));
    fields.Push(RegisterObjectPropertyArgs("short FontGlyph::texHeight_", "int16 texHeight", offsetof(FontGlyph, texHeight_)));
    fields.Push(RegisterObjectPropertyArgs("float FontGlyph::width_", "float width", offsetof(FontGlyph, width_)));
    fields.Push(RegisterObjectPropertyArgs("float FontGlyph::height_", "float height", offsetof(FontGlyph, height_)));
    fields.Push(RegisterObjectPropertyArgs("float FontGlyph::offsetX_", "float offsetX", offsetof(FontGlyph, offsetX_)));
    fields.Push(RegisterObjectPropertyArgs("float FontGlyph::offsetY_", "float offsetY", offsetof(FontGlyph, offsetY_)));
    fields.Push(RegisterObjectPropertyArgs("float FontGlyph::advanceX_", "float advanceX", offsetof(FontGlyph, advanceX_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned FontGlyph::page_", "uint page", offsetof(FontGlyph, page_)));
    fields.Push(RegisterObjectPropertyArgs("bool FontGlyph::used_", "bool used", offsetof(FontGlyph, used_)));
}

// struct GlyphLocation | File: ../UI/Text.h
void CollectMembers_GlyphLocation(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    // const FontGlyph* GlyphLocation::glyph_
    // Not registered because pointer

    fields.Push(RegisterObjectPropertyArgs("float GlyphLocation::x_", "float x", offsetof(GlyphLocation, x_)));
    fields.Push(RegisterObjectPropertyArgs("float GlyphLocation::y_", "float y", offsetof(GlyphLocation, y_)));
}

// class LineEdit | File: ../UI/LineEdit.h
void CollectMembers_LineEdit(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_BorderImage(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual bool UIElement::OnDragDropFinish(UIElement* source)");
    Remove(methods, "virtual bool UIElement::OnDragDropTest(UIElement* source)");
    Remove(methods, "virtual void UIElement::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnDoubleClick(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)");
    Remove(methods, "virtual void UIElement::OnTextInput(const String& text)");
    Remove(methods, "virtual void UIElement::Update(float timeStep)");
    Remove(methods, "void UIElement::ApplyAttributes() override");

    Remove(staticMethods, "static void BorderImage::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void LineEdit::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(LineEdit, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::Update(float timeStep) override", "void Update(float)", AS_METHODPR(LineEdit, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnClickBegin(const IntVector2&in, const IntVector2&in, MouseButton, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(LineEdit, OnClickBegin, (const IntVector2&, const IntVector2&, MouseButton, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::OnDoubleClick(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnDoubleClick(const IntVector2&in, const IntVector2&in, MouseButton, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(LineEdit, OnDoubleClick, (const IntVector2&, const IntVector2&, MouseButton, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnDragBegin(const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(LineEdit, OnDragBegin, (const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnDragMove(const IntVector2&in, const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(LineEdit, OnDragMove, (const IntVector2&, const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool LineEdit::OnDragDropTest(UIElement* source) override", "bool OnDragDropTest(UIElement@+)", AS_METHODPR(LineEdit, OnDragDropTest, (UIElement*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool LineEdit::OnDragDropFinish(UIElement* source) override", "bool OnDragDropFinish(UIElement@+)", AS_METHODPR(LineEdit, OnDragDropFinish, (UIElement*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override", "void OnKey(Key, MouseButtonFlags, QualifierFlags)", AS_METHODPR(LineEdit, OnKey, (Key, MouseButtonFlags, QualifierFlags), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::OnTextInput(const String& text) override", "void OnTextInput(const String&in)", AS_METHODPR(LineEdit, OnTextInput, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetText(const String& text)", "void SetText(const String&in)", AS_METHODPR(LineEdit, SetText, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetText(const String& text)", "void set_text(const String&in)", AS_METHODPR(LineEdit, SetText, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetCursorPosition(unsigned position)", "void SetCursorPosition(uint)", AS_METHODPR(LineEdit, SetCursorPosition, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetCursorPosition(unsigned position)", "void set_cursorPosition(uint)", AS_METHODPR(LineEdit, SetCursorPosition, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetCursorBlinkRate(float rate)", "void SetCursorBlinkRate(float)", AS_METHODPR(LineEdit, SetCursorBlinkRate, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetCursorBlinkRate(float rate)", "void set_cursorBlinkRate(float)", AS_METHODPR(LineEdit, SetCursorBlinkRate, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetMaxLength(unsigned length)", "void SetMaxLength(uint)", AS_METHODPR(LineEdit, SetMaxLength, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetMaxLength(unsigned length)", "void set_maxLength(uint)", AS_METHODPR(LineEdit, SetMaxLength, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetEchoCharacter(unsigned c)", "void SetEchoCharacter(uint)", AS_METHODPR(LineEdit, SetEchoCharacter, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetEchoCharacter(unsigned c)", "void set_echoCharacter(uint)", AS_METHODPR(LineEdit, SetEchoCharacter, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetCursorMovable(bool enable)", "void SetCursorMovable(bool)", AS_METHODPR(LineEdit, SetCursorMovable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetCursorMovable(bool enable)", "void set_cursorMovable(bool)", AS_METHODPR(LineEdit, SetCursorMovable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetTextSelectable(bool enable)", "void SetTextSelectable(bool)", AS_METHODPR(LineEdit, SetTextSelectable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetTextSelectable(bool enable)", "void set_textSelectable(bool)", AS_METHODPR(LineEdit, SetTextSelectable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetTextCopyable(bool enable)", "void SetTextCopyable(bool)", AS_METHODPR(LineEdit, SetTextCopyable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void LineEdit::SetTextCopyable(bool enable)", "void set_textCopyable(bool)", AS_METHODPR(LineEdit, SetTextCopyable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& LineEdit::GetText() const", "const String& GetText() const", AS_METHODPR(LineEdit, GetText, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& LineEdit::GetText() const", "const String& get_text() const", AS_METHODPR(LineEdit, GetText, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned LineEdit::GetCursorPosition() const", "uint GetCursorPosition() const", AS_METHODPR(LineEdit, GetCursorPosition, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned LineEdit::GetCursorPosition() const", "uint get_cursorPosition() const", AS_METHODPR(LineEdit, GetCursorPosition, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float LineEdit::GetCursorBlinkRate() const", "float GetCursorBlinkRate() const", AS_METHODPR(LineEdit, GetCursorBlinkRate, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float LineEdit::GetCursorBlinkRate() const", "float get_cursorBlinkRate() const", AS_METHODPR(LineEdit, GetCursorBlinkRate, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned LineEdit::GetMaxLength() const", "uint GetMaxLength() const", AS_METHODPR(LineEdit, GetMaxLength, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned LineEdit::GetMaxLength() const", "uint get_maxLength() const", AS_METHODPR(LineEdit, GetMaxLength, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned LineEdit::GetEchoCharacter() const", "uint GetEchoCharacter() const", AS_METHODPR(LineEdit, GetEchoCharacter, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned LineEdit::GetEchoCharacter() const", "uint get_echoCharacter() const", AS_METHODPR(LineEdit, GetEchoCharacter, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool LineEdit::IsCursorMovable() const", "bool IsCursorMovable() const", AS_METHODPR(LineEdit, IsCursorMovable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool LineEdit::IsCursorMovable() const", "bool get_cursorMovable() const", AS_METHODPR(LineEdit, IsCursorMovable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool LineEdit::IsTextSelectable() const", "bool IsTextSelectable() const", AS_METHODPR(LineEdit, IsTextSelectable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool LineEdit::IsTextSelectable() const", "bool get_textSelectable() const", AS_METHODPR(LineEdit, IsTextSelectable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool LineEdit::IsTextCopyable() const", "bool IsTextCopyable() const", AS_METHODPR(LineEdit, IsTextCopyable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool LineEdit::IsTextCopyable() const", "bool get_textCopyable() const", AS_METHODPR(LineEdit, IsTextCopyable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Text* LineEdit::GetTextElement() const", "Text@+ GetTextElement() const", AS_METHODPR(LineEdit, GetTextElement, () const, Text*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Text* LineEdit::GetTextElement() const", "Text@+ get_textElement() const", AS_METHODPR(LineEdit, GetTextElement, () const, Text*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BorderImage* LineEdit::GetCursor() const", "BorderImage@+ GetCursor() const", AS_METHODPR(LineEdit, GetCursor, () const, BorderImage*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BorderImage* LineEdit::GetCursor() const", "BorderImage@+ get_cursor() const", AS_METHODPR(LineEdit, GetCursor, () const, BorderImage*), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void LineEdit::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(LineEdit_RegisterObject_Context), AS_CALL_CDECL));
}

// void ListView::SetSelections(const PODVector<unsigned>& indices)
// void ListView::SetSelections(const PODVector<unsigned>& indices) | File: ../UI/ListView.h
static void ListView_SetSelections_PODVectorunsigned(ListView* ptr, CScriptArray* indices_conv)
{
    PODVector<unsigned> indices = ArrayToPODVector<unsigned>(indices_conv);
    ptr->SetSelections(indices);
}


// PODVector<UIElement*> ListView::GetItems() const
// PODVector<UIElement*> ListView::GetItems() const | File: ../UI/ListView.h
static CScriptArray* ListView_GetItems_void(ListView* ptr)
{
    PODVector<UIElement*> result = ptr->GetItems();
    return VectorToHandleArray(result, "Array<UIElement@>");
}


// const PODVector<unsigned>& ListView::GetSelections() const
// const PODVector<unsigned>& ListView::GetSelections() const | File: ../UI/ListView.h
static CScriptArray* ListView_GetSelections_void(ListView* ptr)
{
    const PODVector<unsigned>& result = ptr->GetSelections();
    return VectorToArray(result, "Array<uint>");
}


// PODVector<UIElement*> ListView::GetSelectedItems() const
// PODVector<UIElement*> ListView::GetSelectedItems() const | File: ../UI/ListView.h
static CScriptArray* ListView_GetSelectedItems_void(ListView* ptr)
{
    PODVector<UIElement*> result = ptr->GetSelectedItems();
    return VectorToHandleArray(result, "Array<UIElement@>");
}


// class ListView | File: ../UI/ListView.h
void CollectMembers_ListView(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_ScrollView(methods, staticMethods, fields, staticFields);

    Remove(methods, "bool UIElement::IsSelected() const");
    Remove(methods, "void ScrollView::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override");
    Remove(methods, "void ScrollView::OnResize(const IntVector2& newSize, const IntVector2& delta) override");

    Remove(staticMethods, "static void ScrollView::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ListView::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override", "void OnKey(Key, MouseButtonFlags, QualifierFlags)", AS_METHODPR(ListView, OnKey, (Key, MouseButtonFlags, QualifierFlags), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::OnResize(const IntVector2& newSize, const IntVector2& delta) override", "void OnResize(const IntVector2&in, const IntVector2&in)", AS_METHODPR(ListView, OnResize, (const IntVector2&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::UpdateInternalLayout()", "void UpdateInternalLayout()", AS_METHODPR(ListView, UpdateInternalLayout, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::DisableInternalLayoutUpdate()", "void DisableInternalLayoutUpdate()", AS_METHODPR(ListView, DisableInternalLayoutUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::EnableInternalLayoutUpdate()", "void EnableInternalLayoutUpdate()", AS_METHODPR(ListView, EnableInternalLayoutUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::AddItem(UIElement* item)", "void AddItem(UIElement@+)", AS_METHODPR(ListView, AddItem, (UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::InsertItem(unsigned index, UIElement* item, UIElement* parentItem=nullptr)", "void InsertItem(uint, UIElement@+, UIElement@+ = null)", AS_METHODPR(ListView, InsertItem, (unsigned, UIElement*, UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::RemoveItem(UIElement* item, unsigned index=0)", "void RemoveItem(UIElement@+, uint = 0)", AS_METHODPR(ListView, RemoveItem, (UIElement*, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::RemoveItem(unsigned index)", "void RemoveItem(uint)", AS_METHODPR(ListView, RemoveItem, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::RemoveAllItems()", "void RemoveAllItems()", AS_METHODPR(ListView, RemoveAllItems, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetSelection(unsigned index)", "void SetSelection(uint)", AS_METHODPR(ListView, SetSelection, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetSelection(unsigned index)", "void set_selection(uint)", AS_METHODPR(ListView, SetSelection, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetSelections(const PODVector<unsigned>& indices)", "void SetSelections(Array<uint>@+)", AS_FUNCTION_OBJFIRST(ListView_SetSelections_PODVectorunsigned), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("void ListView::AddSelection(unsigned index)", "void AddSelection(uint)", AS_METHODPR(ListView, AddSelection, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::RemoveSelection(unsigned index)", "void RemoveSelection(uint)", AS_METHODPR(ListView, RemoveSelection, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::ToggleSelection(unsigned index)", "void ToggleSelection(uint)", AS_METHODPR(ListView, ToggleSelection, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::ChangeSelection(int delta, bool additive=false)", "void ChangeSelection(int, bool = false)", AS_METHODPR(ListView, ChangeSelection, (int, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::ClearSelection()", "void ClearSelection()", AS_METHODPR(ListView, ClearSelection, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetHighlightMode(HighlightMode mode)", "void SetHighlightMode(HighlightMode)", AS_METHODPR(ListView, SetHighlightMode, (HighlightMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetHighlightMode(HighlightMode mode)", "void set_highlightMode(HighlightMode)", AS_METHODPR(ListView, SetHighlightMode, (HighlightMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetMultiselect(bool enable)", "void SetMultiselect(bool)", AS_METHODPR(ListView, SetMultiselect, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetMultiselect(bool enable)", "void set_multiselect(bool)", AS_METHODPR(ListView, SetMultiselect, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetHierarchyMode(bool enable)", "void SetHierarchyMode(bool)", AS_METHODPR(ListView, SetHierarchyMode, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetHierarchyMode(bool enable)", "void set_hierarchyMode(bool)", AS_METHODPR(ListView, SetHierarchyMode, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetBaseIndent(int baseIndent)", "void SetBaseIndent(int)", AS_METHODPR(ListView, SetBaseIndent, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetBaseIndent(int baseIndent)", "void set_baseIndent(int)", AS_METHODPR(ListView, SetBaseIndent, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetClearSelectionOnDefocus(bool enable)", "void SetClearSelectionOnDefocus(bool)", AS_METHODPR(ListView, SetClearSelectionOnDefocus, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetClearSelectionOnDefocus(bool enable)", "void set_clearSelectionOnDefocus(bool)", AS_METHODPR(ListView, SetClearSelectionOnDefocus, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetSelectOnClickEnd(bool enable)", "void SetSelectOnClickEnd(bool)", AS_METHODPR(ListView, SetSelectOnClickEnd, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::SetSelectOnClickEnd(bool enable)", "void set_selectOnClickEnd(bool)", AS_METHODPR(ListView, SetSelectOnClickEnd, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::Expand(unsigned index, bool enable, bool recursive=false)", "void Expand(uint, bool, bool = false)", AS_METHODPR(ListView, Expand, (unsigned, bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::ToggleExpand(unsigned index, bool recursive=false)", "void ToggleExpand(uint, bool = false)", AS_METHODPR(ListView, ToggleExpand, (unsigned, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned ListView::GetNumItems() const", "uint GetNumItems() const", AS_METHODPR(ListView, GetNumItems, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned ListView::GetNumItems() const", "uint get_numItems() const", AS_METHODPR(ListView, GetNumItems, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* ListView::GetItem(unsigned index) const", "UIElement@+ GetItem(uint) const", AS_METHODPR(ListView, GetItem, (unsigned) const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* ListView::GetItem(unsigned index) const", "UIElement@+ get_items(uint) const", AS_METHODPR(ListView, GetItem, (unsigned) const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("PODVector<UIElement*> ListView::GetItems() const", "Array<UIElement@>@ GetItems() const", AS_FUNCTION_OBJFIRST(ListView_GetItems_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("unsigned ListView::FindItem(UIElement* item) const", "uint FindItem(UIElement@+) const", AS_METHODPR(ListView, FindItem, (UIElement*) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned ListView::GetSelection() const", "uint GetSelection() const", AS_METHODPR(ListView, GetSelection, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned ListView::GetSelection() const", "uint get_selection() const", AS_METHODPR(ListView, GetSelection, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const PODVector<unsigned>& ListView::GetSelections() const", "Array<uint>@ GetSelections() const", AS_FUNCTION_OBJFIRST(ListView_GetSelections_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("const PODVector<unsigned>& ListView::GetSelections() const", "Array<uint>@ get_selections() const", AS_FUNCTION_OBJFIRST(ListView_GetSelections_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("void ListView::CopySelectedItemsToClipboard() const", "void CopySelectedItemsToClipboard() const", AS_METHODPR(ListView, CopySelectedItemsToClipboard, () const, void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* ListView::GetSelectedItem() const", "UIElement@+ GetSelectedItem() const", AS_METHODPR(ListView, GetSelectedItem, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* ListView::GetSelectedItem() const", "UIElement@+ get_selectedItem() const", AS_METHODPR(ListView, GetSelectedItem, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("PODVector<UIElement*> ListView::GetSelectedItems() const", "Array<UIElement@>@ GetSelectedItems() const", AS_FUNCTION_OBJFIRST(ListView_GetSelectedItems_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("PODVector<UIElement*> ListView::GetSelectedItems() const", "Array<UIElement@>@ get_selectedItems() const", AS_FUNCTION_OBJFIRST(ListView_GetSelectedItems_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool ListView::IsSelected(unsigned index) const", "bool IsSelected(uint) const", AS_METHODPR(ListView, IsSelected, (unsigned) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ListView::IsExpanded(unsigned index) const", "bool IsExpanded(uint) const", AS_METHODPR(ListView, IsExpanded, (unsigned) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("HighlightMode ListView::GetHighlightMode() const", "HighlightMode GetHighlightMode() const", AS_METHODPR(ListView, GetHighlightMode, () const, HighlightMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("HighlightMode ListView::GetHighlightMode() const", "HighlightMode get_highlightMode() const", AS_METHODPR(ListView, GetHighlightMode, () const, HighlightMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ListView::GetMultiselect() const", "bool GetMultiselect() const", AS_METHODPR(ListView, GetMultiselect, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ListView::GetMultiselect() const", "bool get_multiselect() const", AS_METHODPR(ListView, GetMultiselect, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ListView::GetClearSelectionOnDefocus() const", "bool GetClearSelectionOnDefocus() const", AS_METHODPR(ListView, GetClearSelectionOnDefocus, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ListView::GetClearSelectionOnDefocus() const", "bool get_clearSelectionOnDefocus() const", AS_METHODPR(ListView, GetClearSelectionOnDefocus, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ListView::GetSelectOnClickEnd() const", "bool GetSelectOnClickEnd() const", AS_METHODPR(ListView, GetSelectOnClickEnd, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ListView::GetSelectOnClickEnd() const", "bool get_selectOnClickEnd() const", AS_METHODPR(ListView, GetSelectOnClickEnd, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ListView::GetHierarchyMode() const", "bool GetHierarchyMode() const", AS_METHODPR(ListView, GetHierarchyMode, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ListView::GetHierarchyMode() const", "bool get_hierarchyMode() const", AS_METHODPR(ListView, GetHierarchyMode, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int ListView::GetBaseIndent() const", "int GetBaseIndent() const", AS_METHODPR(ListView, GetBaseIndent, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int ListView::GetBaseIndent() const", "int get_baseIndent() const", AS_METHODPR(ListView, GetBaseIndent, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::EnsureItemVisibility(unsigned index)", "void EnsureItemVisibility(uint)", AS_METHODPR(ListView, EnsureItemVisibility, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ListView::EnsureItemVisibility(UIElement* item)", "void EnsureItemVisibility(UIElement@+)", AS_METHODPR(ListView, EnsureItemVisibility, (UIElement*), void), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void ListView::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(ListView_RegisterObject_Context), AS_CALL_CDECL));
}

// class Menu | File: ../UI/Menu.h
void CollectMembers_Menu(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Button(methods, staticMethods, fields, staticFields);

    Remove(methods, "bool UIElement::LoadXML(Deserializer& source)");
    Remove(methods, "bool UIElement::LoadXML(const XMLElement& source) override");
    Remove(methods, "bool UIElement::SaveXML(Serializer& dest, const String& indentation=\"\t\") const");
    Remove(methods, "bool UIElement::SaveXML(XMLElement& dest) const override");
    Remove(methods, "virtual bool UIElement::LoadXML(const XMLElement& source, XMLFile* styleFile)");
    Remove(methods, "virtual void UIElement::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "void Button::Update(float timeStep) override");

    Remove(staticMethods, "static void Button::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("bool Menu::LoadXML(const XMLElement& source, XMLFile* styleFile) override", "bool LoadXML(const XMLElement&in, XMLFile@+)", AS_METHODPR(Menu, LoadXML, (const XMLElement&, XMLFile*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Menu::SaveXML(XMLElement& dest) const override", "bool SaveXML(XMLElement&) const", AS_METHODPR(Menu, SaveXML, (XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Menu::Update(float timeStep) override", "void Update(float)", AS_METHODPR(Menu, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Menu::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnHover(const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(Menu, OnHover, (const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void Menu::OnShowPopup()", "void OnShowPopup()", AS_METHODPR(Menu, OnShowPopup, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void Menu::OnHidePopup()", "void OnHidePopup()", AS_METHODPR(Menu, OnHidePopup, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Menu::SetPopup(UIElement* popup)", "void SetPopup(UIElement@+)", AS_METHODPR(Menu, SetPopup, (UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Menu::SetPopup(UIElement* popup)", "void set_popup(UIElement@+)", AS_METHODPR(Menu, SetPopup, (UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Menu::SetPopupOffset(const IntVector2& offset)", "void SetPopupOffset(const IntVector2&in)", AS_METHODPR(Menu, SetPopupOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Menu::SetPopupOffset(const IntVector2& offset)", "void set_popupOffset(const IntVector2&in)", AS_METHODPR(Menu, SetPopupOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Menu::SetPopupOffset(int x, int y)", "void SetPopupOffset(int, int)", AS_METHODPR(Menu, SetPopupOffset, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Menu::ShowPopup(bool enable)", "void ShowPopup(bool)", AS_METHODPR(Menu, ShowPopup, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Menu::ShowPopup(bool enable)", "void set_showPopup(bool)", AS_METHODPR(Menu, ShowPopup, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Menu::SetAccelerator(int key, int qualifiers)", "void SetAccelerator(int, int)", AS_METHODPR(Menu, SetAccelerator, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* Menu::GetPopup() const", "UIElement@+ GetPopup() const", AS_METHODPR(Menu, GetPopup, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* Menu::GetPopup() const", "UIElement@+ get_popup() const", AS_METHODPR(Menu, GetPopup, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Menu::GetPopupOffset() const", "const IntVector2& GetPopupOffset() const", AS_METHODPR(Menu, GetPopupOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Menu::GetPopupOffset() const", "const IntVector2& get_popupOffset() const", AS_METHODPR(Menu, GetPopupOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Menu::GetShowPopup() const", "bool GetShowPopup() const", AS_METHODPR(Menu, GetShowPopup, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Menu::GetShowPopup() const", "bool get_showPopup() const", AS_METHODPR(Menu, GetShowPopup, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Menu::GetAcceleratorKey() const", "int GetAcceleratorKey() const", AS_METHODPR(Menu, GetAcceleratorKey, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Menu::GetAcceleratorKey() const", "int get_acceleratorKey() const", AS_METHODPR(Menu, GetAcceleratorKey, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Menu::GetAcceleratorQualifiers() const", "int GetAcceleratorQualifiers() const", AS_METHODPR(Menu, GetAcceleratorQualifiers, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Menu::GetAcceleratorQualifiers() const", "int get_acceleratorQualifiers() const", AS_METHODPR(Menu, GetAcceleratorQualifiers, () const, int), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void Menu::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(Menu_RegisterObject_Context), AS_CALL_CDECL));
}

// class MessageBox | File: ../UI/MessageBox.h
void CollectMembers_MessageBox(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Object(methods, staticMethods, fields, staticFields);

    methods.Push(RegisterObjectMethodArgs("void MessageBox::SetTitle(const String& text)", "void SetTitle(const String&in)", AS_METHODPR(MessageBox, SetTitle, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void MessageBox::SetTitle(const String& text)", "void set_title(const String&in)", AS_METHODPR(MessageBox, SetTitle, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void MessageBox::SetMessage(const String& text)", "void SetMessage(const String&in)", AS_METHODPR(MessageBox, SetMessage, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void MessageBox::SetMessage(const String& text)", "void set_message(const String&in)", AS_METHODPR(MessageBox, SetMessage, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& MessageBox::GetTitle() const", "const String& GetTitle() const", AS_METHODPR(MessageBox, GetTitle, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& MessageBox::GetTitle() const", "const String& get_title() const", AS_METHODPR(MessageBox, GetTitle, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& MessageBox::GetMessage() const", "const String& GetMessage() const", AS_METHODPR(MessageBox, GetMessage, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& MessageBox::GetMessage() const", "const String& get_message() const", AS_METHODPR(MessageBox, GetMessage, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* MessageBox::GetWindow() const", "UIElement@+ GetWindow() const", AS_METHODPR(MessageBox, GetWindow, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* MessageBox::GetWindow() const", "UIElement@+ get_window() const", AS_METHODPR(MessageBox, GetWindow, () const, UIElement*), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void MessageBox::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(MessageBox_RegisterObject_Context), AS_CALL_CDECL));
}

// class ProgressBar | File: ../UI/ProgressBar.h
void CollectMembers_ProgressBar(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_BorderImage(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)");

    Remove(staticMethods, "static void BorderImage::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ProgressBar::OnResize(const IntVector2& newSize, const IntVector2& delta) override", "void OnResize(const IntVector2&in, const IntVector2&in)", AS_METHODPR(ProgressBar, OnResize, (const IntVector2&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ProgressBar::SetOrientation(Orientation orientation)", "void SetOrientation(Orientation)", AS_METHODPR(ProgressBar, SetOrientation, (Orientation), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ProgressBar::SetOrientation(Orientation orientation)", "void set_orientation(Orientation)", AS_METHODPR(ProgressBar, SetOrientation, (Orientation), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ProgressBar::SetRange(float range)", "void SetRange(float)", AS_METHODPR(ProgressBar, SetRange, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ProgressBar::SetRange(float range)", "void set_range(float)", AS_METHODPR(ProgressBar, SetRange, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ProgressBar::SetValue(float value)", "void SetValue(float)", AS_METHODPR(ProgressBar, SetValue, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ProgressBar::SetValue(float value)", "void set_value(float)", AS_METHODPR(ProgressBar, SetValue, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ProgressBar::ChangeValue(float delta)", "void ChangeValue(float)", AS_METHODPR(ProgressBar, ChangeValue, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Orientation ProgressBar::GetOrientation() const", "Orientation GetOrientation() const", AS_METHODPR(ProgressBar, GetOrientation, () const, Orientation), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Orientation ProgressBar::GetOrientation() const", "Orientation get_orientation() const", AS_METHODPR(ProgressBar, GetOrientation, () const, Orientation), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ProgressBar::GetRange() const", "float GetRange() const", AS_METHODPR(ProgressBar, GetRange, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ProgressBar::GetRange() const", "float get_range() const", AS_METHODPR(ProgressBar, GetRange, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ProgressBar::GetValue() const", "float GetValue() const", AS_METHODPR(ProgressBar, GetValue, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ProgressBar::GetValue() const", "float get_value() const", AS_METHODPR(ProgressBar, GetValue, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BorderImage* ProgressBar::GetKnob() const", "BorderImage@+ GetKnob() const", AS_METHODPR(ProgressBar, GetKnob, () const, BorderImage*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BorderImage* ProgressBar::GetKnob() const", "BorderImage@+ get_knob() const", AS_METHODPR(ProgressBar, GetKnob, () const, BorderImage*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ProgressBar::SetLoadingPercentStyle(const String& style)", "void SetLoadingPercentStyle(const String&in)", AS_METHODPR(ProgressBar, SetLoadingPercentStyle, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& ProgressBar::GetLoadingPercentStyle() const", "const String& GetLoadingPercentStyle() const", AS_METHODPR(ProgressBar, GetLoadingPercentStyle, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ProgressBar::SetShowPercentText(bool enable)", "void SetShowPercentText(bool)", AS_METHODPR(ProgressBar, SetShowPercentText, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ProgressBar::SetShowPercentText(bool enable)", "void set_showPercentText(bool)", AS_METHODPR(ProgressBar, SetShowPercentText, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ProgressBar::GetShowPercentText() const", "bool GetShowPercentText() const", AS_METHODPR(ProgressBar, GetShowPercentText, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ProgressBar::GetShowPercentText() const", "bool get_showPercentText() const", AS_METHODPR(ProgressBar, GetShowPercentText, () const, bool), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void ProgressBar::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(ProgressBar_RegisterObject_Context), AS_CALL_CDECL));
}

// class ScrollBar | File: ../UI/ScrollBar.h
void CollectMembers_ScrollBar(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_BorderImage(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)");
    Remove(methods, "virtual void UIElement::OnSetEditable()");
    Remove(methods, "void UIElement::ApplyAttributes() override");

    Remove(staticMethods, "static void BorderImage::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ScrollBar::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(ScrollBar, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::OnResize(const IntVector2& newSize, const IntVector2& delta) override", "void OnResize(const IntVector2&in, const IntVector2&in)", AS_METHODPR(ScrollBar, OnResize, (const IntVector2&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::OnSetEditable() override", "void OnSetEditable()", AS_METHODPR(ScrollBar, OnSetEditable, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::SetOrientation(Orientation orientation)", "void SetOrientation(Orientation)", AS_METHODPR(ScrollBar, SetOrientation, (Orientation), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::SetOrientation(Orientation orientation)", "void set_orientation(Orientation)", AS_METHODPR(ScrollBar, SetOrientation, (Orientation), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::SetRange(float range)", "void SetRange(float)", AS_METHODPR(ScrollBar, SetRange, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::SetRange(float range)", "void set_range(float)", AS_METHODPR(ScrollBar, SetRange, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::SetValue(float value)", "void SetValue(float)", AS_METHODPR(ScrollBar, SetValue, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::SetValue(float value)", "void set_value(float)", AS_METHODPR(ScrollBar, SetValue, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::ChangeValue(float delta)", "void ChangeValue(float)", AS_METHODPR(ScrollBar, ChangeValue, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::SetScrollStep(float step)", "void SetScrollStep(float)", AS_METHODPR(ScrollBar, SetScrollStep, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::SetScrollStep(float step)", "void set_scrollStep(float)", AS_METHODPR(ScrollBar, SetScrollStep, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::SetStepFactor(float factor)", "void SetStepFactor(float)", AS_METHODPR(ScrollBar, SetStepFactor, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::SetStepFactor(float factor)", "void set_stepFactor(float)", AS_METHODPR(ScrollBar, SetStepFactor, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::StepBack()", "void StepBack()", AS_METHODPR(ScrollBar, StepBack, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollBar::StepForward()", "void StepForward()", AS_METHODPR(ScrollBar, StepForward, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Orientation ScrollBar::GetOrientation() const", "Orientation GetOrientation() const", AS_METHODPR(ScrollBar, GetOrientation, () const, Orientation), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Orientation ScrollBar::GetOrientation() const", "Orientation get_orientation() const", AS_METHODPR(ScrollBar, GetOrientation, () const, Orientation), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollBar::GetRange() const", "float GetRange() const", AS_METHODPR(ScrollBar, GetRange, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollBar::GetRange() const", "float get_range() const", AS_METHODPR(ScrollBar, GetRange, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollBar::GetValue() const", "float GetValue() const", AS_METHODPR(ScrollBar, GetValue, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollBar::GetValue() const", "float get_value() const", AS_METHODPR(ScrollBar, GetValue, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollBar::GetScrollStep() const", "float GetScrollStep() const", AS_METHODPR(ScrollBar, GetScrollStep, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollBar::GetScrollStep() const", "float get_scrollStep() const", AS_METHODPR(ScrollBar, GetScrollStep, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollBar::GetStepFactor() const", "float GetStepFactor() const", AS_METHODPR(ScrollBar, GetStepFactor, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollBar::GetStepFactor() const", "float get_stepFactor() const", AS_METHODPR(ScrollBar, GetStepFactor, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollBar::GetEffectiveScrollStep() const", "float GetEffectiveScrollStep() const", AS_METHODPR(ScrollBar, GetEffectiveScrollStep, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollBar::GetEffectiveScrollStep() const", "float get_effectiveScrollStep() const", AS_METHODPR(ScrollBar, GetEffectiveScrollStep, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Button* ScrollBar::GetBackButton() const", "Button@+ GetBackButton() const", AS_METHODPR(ScrollBar, GetBackButton, () const, Button*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Button* ScrollBar::GetBackButton() const", "Button@+ get_backButton() const", AS_METHODPR(ScrollBar, GetBackButton, () const, Button*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Button* ScrollBar::GetForwardButton() const", "Button@+ GetForwardButton() const", AS_METHODPR(ScrollBar, GetForwardButton, () const, Button*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Button* ScrollBar::GetForwardButton() const", "Button@+ get_forwardButton() const", AS_METHODPR(ScrollBar, GetForwardButton, () const, Button*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Slider* ScrollBar::GetSlider() const", "Slider@+ GetSlider() const", AS_METHODPR(ScrollBar, GetSlider, () const, Slider*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Slider* ScrollBar::GetSlider() const", "Slider@+ get_slider() const", AS_METHODPR(ScrollBar, GetSlider, () const, Slider*), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void ScrollBar::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(ScrollBar_RegisterObject_Context), AS_CALL_CDECL));
}

// class ScrollView | File: ../UI/ScrollView.h
void CollectMembers_ScrollView(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_UIElement(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual bool UIElement::IsWheelHandler() const");
    Remove(methods, "virtual void UIElement::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)");
    Remove(methods, "virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)");
    Remove(methods, "virtual void UIElement::OnWheel(int delta, MouseButtonFlags buttons, QualifierFlags qualifiers)");
    Remove(methods, "virtual void UIElement::Update(float timeStep)");
    Remove(methods, "void UIElement::ApplyAttributes() override");

    Remove(staticMethods, "static void UIElement::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ScrollView::Update(float timeStep) override", "void Update(float)", AS_METHODPR(ScrollView, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(ScrollView, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::OnWheel(int delta, MouseButtonFlags buttons, QualifierFlags qualifiers) override", "void OnWheel(int, MouseButtonFlags, QualifierFlags)", AS_METHODPR(ScrollView, OnWheel, (int, MouseButtonFlags, QualifierFlags), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers) override", "void OnKey(Key, MouseButtonFlags, QualifierFlags)", AS_METHODPR(ScrollView, OnKey, (Key, MouseButtonFlags, QualifierFlags), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::OnResize(const IntVector2& newSize, const IntVector2& delta) override", "void OnResize(const IntVector2&in, const IntVector2&in)", AS_METHODPR(ScrollView, OnResize, (const IntVector2&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ScrollView::IsWheelHandler() const override", "bool IsWheelHandler() const", AS_METHODPR(ScrollView, IsWheelHandler, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetContentElement(UIElement* element)", "void SetContentElement(UIElement@+)", AS_METHODPR(ScrollView, SetContentElement, (UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetContentElement(UIElement* element)", "void set_contentElement(UIElement@+)", AS_METHODPR(ScrollView, SetContentElement, (UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetViewPosition(const IntVector2& position)", "void SetViewPosition(const IntVector2&in)", AS_METHODPR(ScrollView, SetViewPosition, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetViewPosition(const IntVector2& position)", "void set_viewPosition(const IntVector2&in)", AS_METHODPR(ScrollView, SetViewPosition, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetViewPosition(int x, int y)", "void SetViewPosition(int, int)", AS_METHODPR(ScrollView, SetViewPosition, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetScrollBarsVisible(bool horizontal, bool vertical)", "void SetScrollBarsVisible(bool, bool)", AS_METHODPR(ScrollView, SetScrollBarsVisible, (bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetHorizontalScrollBarVisible(bool visible)", "void SetHorizontalScrollBarVisible(bool)", AS_METHODPR(ScrollView, SetHorizontalScrollBarVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetHorizontalScrollBarVisible(bool visible)", "void set_horizontalScrollBarVisible(bool)", AS_METHODPR(ScrollView, SetHorizontalScrollBarVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetVerticalScrollBarVisible(bool visible)", "void SetVerticalScrollBarVisible(bool)", AS_METHODPR(ScrollView, SetVerticalScrollBarVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetVerticalScrollBarVisible(bool visible)", "void set_verticalScrollBarVisible(bool)", AS_METHODPR(ScrollView, SetVerticalScrollBarVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetScrollBarsAutoVisible(bool enable)", "void SetScrollBarsAutoVisible(bool)", AS_METHODPR(ScrollView, SetScrollBarsAutoVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetScrollBarsAutoVisible(bool enable)", "void set_scrollBarsAutoVisible(bool)", AS_METHODPR(ScrollView, SetScrollBarsAutoVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetScrollStep(float step)", "void SetScrollStep(float)", AS_METHODPR(ScrollView, SetScrollStep, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetScrollStep(float step)", "void set_scrollStep(float)", AS_METHODPR(ScrollView, SetScrollStep, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetPageStep(float step)", "void SetPageStep(float)", AS_METHODPR(ScrollView, SetPageStep, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetPageStep(float step)", "void set_pageStep(float)", AS_METHODPR(ScrollView, SetPageStep, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetScrollDeceleration(float deceleration)", "void SetScrollDeceleration(float)", AS_METHODPR(ScrollView, SetScrollDeceleration, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetScrollDeceleration(float deceleration)", "void set_scrollDeceleration(float)", AS_METHODPR(ScrollView, SetScrollDeceleration, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetScrollSnapEpsilon(float snap)", "void SetScrollSnapEpsilon(float)", AS_METHODPR(ScrollView, SetScrollSnapEpsilon, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetScrollSnapEpsilon(float snap)", "void set_scrollSnapEpsilon(float)", AS_METHODPR(ScrollView, SetScrollSnapEpsilon, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetAutoDisableChildren(bool disable)", "void SetAutoDisableChildren(bool)", AS_METHODPR(ScrollView, SetAutoDisableChildren, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetAutoDisableChildren(bool disable)", "void set_autoDisableChildren(bool)", AS_METHODPR(ScrollView, SetAutoDisableChildren, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetAutoDisableThreshold(float amount)", "void SetAutoDisableThreshold(float)", AS_METHODPR(ScrollView, SetAutoDisableThreshold, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetAutoDisableThreshold(float amount)", "void set_autoDisableThreshold(float)", AS_METHODPR(ScrollView, SetAutoDisableThreshold, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& ScrollView::GetViewPosition() const", "const IntVector2& GetViewPosition() const", AS_METHODPR(ScrollView, GetViewPosition, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& ScrollView::GetViewPosition() const", "const IntVector2& get_viewPosition() const", AS_METHODPR(ScrollView, GetViewPosition, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* ScrollView::GetContentElement() const", "UIElement@+ GetContentElement() const", AS_METHODPR(ScrollView, GetContentElement, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* ScrollView::GetContentElement() const", "UIElement@+ get_contentElement() const", AS_METHODPR(ScrollView, GetContentElement, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ScrollBar* ScrollView::GetHorizontalScrollBar() const", "ScrollBar@+ GetHorizontalScrollBar() const", AS_METHODPR(ScrollView, GetHorizontalScrollBar, () const, ScrollBar*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ScrollBar* ScrollView::GetHorizontalScrollBar() const", "ScrollBar@+ get_horizontalScrollBar() const", AS_METHODPR(ScrollView, GetHorizontalScrollBar, () const, ScrollBar*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ScrollBar* ScrollView::GetVerticalScrollBar() const", "ScrollBar@+ GetVerticalScrollBar() const", AS_METHODPR(ScrollView, GetVerticalScrollBar, () const, ScrollBar*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ScrollBar* ScrollView::GetVerticalScrollBar() const", "ScrollBar@+ get_verticalScrollBar() const", AS_METHODPR(ScrollView, GetVerticalScrollBar, () const, ScrollBar*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BorderImage* ScrollView::GetScrollPanel() const", "BorderImage@+ GetScrollPanel() const", AS_METHODPR(ScrollView, GetScrollPanel, () const, BorderImage*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BorderImage* ScrollView::GetScrollPanel() const", "BorderImage@+ get_scrollPanel() const", AS_METHODPR(ScrollView, GetScrollPanel, () const, BorderImage*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ScrollView::GetScrollBarsAutoVisible() const", "bool GetScrollBarsAutoVisible() const", AS_METHODPR(ScrollView, GetScrollBarsAutoVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ScrollView::GetScrollBarsAutoVisible() const", "bool get_scrollBarsAutoVisible() const", AS_METHODPR(ScrollView, GetScrollBarsAutoVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ScrollView::GetHorizontalScrollBarVisible() const", "bool GetHorizontalScrollBarVisible() const", AS_METHODPR(ScrollView, GetHorizontalScrollBarVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ScrollView::GetHorizontalScrollBarVisible() const", "bool get_horizontalScrollBarVisible() const", AS_METHODPR(ScrollView, GetHorizontalScrollBarVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ScrollView::GetVerticalScrollBarVisible() const", "bool GetVerticalScrollBarVisible() const", AS_METHODPR(ScrollView, GetVerticalScrollBarVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ScrollView::GetVerticalScrollBarVisible() const", "bool get_verticalScrollBarVisible() const", AS_METHODPR(ScrollView, GetVerticalScrollBarVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollView::GetScrollStep() const", "float GetScrollStep() const", AS_METHODPR(ScrollView, GetScrollStep, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollView::GetScrollStep() const", "float get_scrollStep() const", AS_METHODPR(ScrollView, GetScrollStep, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollView::GetPageStep() const", "float GetPageStep() const", AS_METHODPR(ScrollView, GetPageStep, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollView::GetPageStep() const", "float get_pageStep() const", AS_METHODPR(ScrollView, GetPageStep, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollView::GetScrollDeceleration() const", "float GetScrollDeceleration() const", AS_METHODPR(ScrollView, GetScrollDeceleration, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollView::GetScrollDeceleration() const", "float get_scrollDeceleration() const", AS_METHODPR(ScrollView, GetScrollDeceleration, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollView::GetScrollSnapEpsilon() const", "float GetScrollSnapEpsilon() const", AS_METHODPR(ScrollView, GetScrollSnapEpsilon, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollView::GetScrollSnapEpsilon() const", "float get_scrollSnapEpsilon() const", AS_METHODPR(ScrollView, GetScrollSnapEpsilon, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ScrollView::GetAutoDisableChildren() const", "bool GetAutoDisableChildren() const", AS_METHODPR(ScrollView, GetAutoDisableChildren, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ScrollView::GetAutoDisableChildren() const", "bool get_autoDisableChildren() const", AS_METHODPR(ScrollView, GetAutoDisableChildren, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollView::GetAutoDisableThreshold() const", "float GetAutoDisableThreshold() const", AS_METHODPR(ScrollView, GetAutoDisableThreshold, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ScrollView::GetAutoDisableThreshold() const", "float get_autoDisableThreshold() const", AS_METHODPR(ScrollView, GetAutoDisableThreshold, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ScrollView::SetViewPositionAttr(const IntVector2& value)", "void SetViewPositionAttr(const IntVector2&in)", AS_METHODPR(ScrollView, SetViewPositionAttr, (const IntVector2&), void), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void ScrollView::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(ScrollView_RegisterObject_Context), AS_CALL_CDECL));
}

// class Slider | File: ../UI/Slider.h
void CollectMembers_Slider(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_BorderImage(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual void UIElement::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnClickEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor, UIElement* beginElement)");
    Remove(methods, "virtual void UIElement::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnDragEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)");
    Remove(methods, "virtual void UIElement::Update(float timeStep)");

    Remove(staticMethods, "static void BorderImage::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void Slider::Update(float timeStep) override", "void Update(float)", AS_METHODPR(Slider, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnHover(const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(Slider, OnHover, (const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnClickBegin(const IntVector2&in, const IntVector2&in, MouseButton, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(Slider, OnClickBegin, (const IntVector2&, const IntVector2&, MouseButton, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::OnClickEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor, UIElement* beginElement) override", "void OnClickEnd(const IntVector2&in, const IntVector2&in, MouseButton, MouseButtonFlags, QualifierFlags, Cursor@+, UIElement@+)", AS_METHODPR(Slider, OnClickEnd, (const IntVector2&, const IntVector2&, MouseButton, MouseButtonFlags, QualifierFlags, Cursor*, UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnDragBegin(const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(Slider, OnDragBegin, (const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnDragMove(const IntVector2&in, const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(Slider, OnDragMove, (const IntVector2&, const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::OnDragEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor* cursor) override", "void OnDragEnd(const IntVector2&in, const IntVector2&in, MouseButtonFlags, MouseButtonFlags, Cursor@+)", AS_METHODPR(Slider, OnDragEnd, (const IntVector2&, const IntVector2&, MouseButtonFlags, MouseButtonFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::OnResize(const IntVector2& newSize, const IntVector2& delta) override", "void OnResize(const IntVector2&in, const IntVector2&in)", AS_METHODPR(Slider, OnResize, (const IntVector2&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::SetOrientation(Orientation orientation)", "void SetOrientation(Orientation)", AS_METHODPR(Slider, SetOrientation, (Orientation), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::SetOrientation(Orientation orientation)", "void set_orientation(Orientation)", AS_METHODPR(Slider, SetOrientation, (Orientation), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::SetRange(float range)", "void SetRange(float)", AS_METHODPR(Slider, SetRange, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::SetRange(float range)", "void set_range(float)", AS_METHODPR(Slider, SetRange, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::SetValue(float value)", "void SetValue(float)", AS_METHODPR(Slider, SetValue, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::SetValue(float value)", "void set_value(float)", AS_METHODPR(Slider, SetValue, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::ChangeValue(float delta)", "void ChangeValue(float)", AS_METHODPR(Slider, ChangeValue, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::SetRepeatRate(float rate)", "void SetRepeatRate(float)", AS_METHODPR(Slider, SetRepeatRate, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Slider::SetRepeatRate(float rate)", "void set_repeatRate(float)", AS_METHODPR(Slider, SetRepeatRate, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Orientation Slider::GetOrientation() const", "Orientation GetOrientation() const", AS_METHODPR(Slider, GetOrientation, () const, Orientation), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Orientation Slider::GetOrientation() const", "Orientation get_orientation() const", AS_METHODPR(Slider, GetOrientation, () const, Orientation), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Slider::GetRange() const", "float GetRange() const", AS_METHODPR(Slider, GetRange, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Slider::GetRange() const", "float get_range() const", AS_METHODPR(Slider, GetRange, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Slider::GetValue() const", "float GetValue() const", AS_METHODPR(Slider, GetValue, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Slider::GetValue() const", "float get_value() const", AS_METHODPR(Slider, GetValue, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BorderImage* Slider::GetKnob() const", "BorderImage@+ GetKnob() const", AS_METHODPR(Slider, GetKnob, () const, BorderImage*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BorderImage* Slider::GetKnob() const", "BorderImage@+ get_knob() const", AS_METHODPR(Slider, GetKnob, () const, BorderImage*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Slider::GetRepeatRate() const", "float GetRepeatRate() const", AS_METHODPR(Slider, GetRepeatRate, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Slider::GetRepeatRate() const", "float get_repeatRate() const", AS_METHODPR(Slider, GetRepeatRate, () const, float), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void Slider::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(Slider_RegisterObject_Context), AS_CALL_CDECL));
}

// class Sprite | File: ../UI/Sprite.h
void CollectMembers_Sprite(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_UIElement(methods, staticMethods, fields, staticFields);

    Remove(methods, "const IntVector2& UIElement::GetPosition() const");
    Remove(methods, "virtual IntVector2 UIElement::ElementToScreen(const IntVector2& position)");
    Remove(methods, "virtual IntVector2 UIElement::ScreenToElement(const IntVector2& screenPosition)");
    Remove(methods, "virtual bool UIElement::IsWithinScissor(const IntRect& currentScissor)");
    Remove(methods, "virtual const IntVector2& UIElement::GetScreenPosition() const");
    Remove(methods, "virtual void UIElement::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)");
    Remove(methods, "virtual void UIElement::OnPositionSet(const IntVector2& newPosition)");
    Remove(methods, "void UIElement::SetPosition(const IntVector2& position)");
    Remove(methods, "void UIElement::SetPosition(int x, int y)");

    Remove(staticMethods, "static void UIElement::RegisterObject(Context* context)");

    // void Sprite::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool Sprite::IsWithinScissor(const IntRect& currentScissor) override", "bool IsWithinScissor(const IntRect&in)", AS_METHODPR(Sprite, IsWithinScissor, (const IntRect&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Sprite::GetScreenPosition() const override", "const IntVector2& GetScreenPosition() const", AS_METHODPR(Sprite, GetScreenPosition, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Sprite::GetScreenPosition() const override", "const IntVector2& get_screenPosition() const", AS_METHODPR(Sprite, GetScreenPosition, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::OnPositionSet(const IntVector2& newPosition) override", "void OnPositionSet(const IntVector2&in)", AS_METHODPR(Sprite, OnPositionSet, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 Sprite::ScreenToElement(const IntVector2& screenPosition) override", "IntVector2 ScreenToElement(const IntVector2&in)", AS_METHODPR(Sprite, ScreenToElement, (const IntVector2&), IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 Sprite::ElementToScreen(const IntVector2& position) override", "IntVector2 ElementToScreen(const IntVector2&in)", AS_METHODPR(Sprite, ElementToScreen, (const IntVector2&), IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetPosition(const Vector2& position)", "void SetPosition(const Vector2&in)", AS_METHODPR(Sprite, SetPosition, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetPosition(const Vector2& position)", "void set_position(const Vector2&in)", AS_METHODPR(Sprite, SetPosition, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetPosition(float x, float y)", "void SetPosition(float, float)", AS_METHODPR(Sprite, SetPosition, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetHotSpot(const IntVector2& hotSpot)", "void SetHotSpot(const IntVector2&in)", AS_METHODPR(Sprite, SetHotSpot, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetHotSpot(const IntVector2& hotSpot)", "void set_hotSpot(const IntVector2&in)", AS_METHODPR(Sprite, SetHotSpot, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetHotSpot(int x, int y)", "void SetHotSpot(int, int)", AS_METHODPR(Sprite, SetHotSpot, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetScale(const Vector2& scale)", "void SetScale(const Vector2&in)", AS_METHODPR(Sprite, SetScale, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetScale(const Vector2& scale)", "void set_scale(const Vector2&in)", AS_METHODPR(Sprite, SetScale, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetScale(float x, float y)", "void SetScale(float, float)", AS_METHODPR(Sprite, SetScale, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetScale(float scale)", "void SetScale(float)", AS_METHODPR(Sprite, SetScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetRotation(float angle)", "void SetRotation(float)", AS_METHODPR(Sprite, SetRotation, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetRotation(float angle)", "void set_rotation(float)", AS_METHODPR(Sprite, SetRotation, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetTexture(Texture* texture)", "void SetTexture(Texture@+)", AS_METHODPR(Sprite, SetTexture, (Texture*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetTexture(Texture* texture)", "void set_texture(Texture@+)", AS_METHODPR(Sprite, SetTexture, (Texture*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetImageRect(const IntRect& rect)", "void SetImageRect(const IntRect&in)", AS_METHODPR(Sprite, SetImageRect, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetImageRect(const IntRect& rect)", "void set_imageRect(const IntRect&in)", AS_METHODPR(Sprite, SetImageRect, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetFullImageRect()", "void SetFullImageRect()", AS_METHODPR(Sprite, SetFullImageRect, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetBlendMode(BlendMode mode)", "void SetBlendMode(BlendMode)", AS_METHODPR(Sprite, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetBlendMode(BlendMode mode)", "void set_blendMode(BlendMode)", AS_METHODPR(Sprite, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& Sprite::GetPosition() const", "const Vector2& GetPosition() const", AS_METHODPR(Sprite, GetPosition, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& Sprite::GetPosition() const", "const Vector2& get_position() const", AS_METHODPR(Sprite, GetPosition, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Sprite::GetHotSpot() const", "const IntVector2& GetHotSpot() const", AS_METHODPR(Sprite, GetHotSpot, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Sprite::GetHotSpot() const", "const IntVector2& get_hotSpot() const", AS_METHODPR(Sprite, GetHotSpot, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& Sprite::GetScale() const", "const Vector2& GetScale() const", AS_METHODPR(Sprite, GetScale, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& Sprite::GetScale() const", "const Vector2& get_scale() const", AS_METHODPR(Sprite, GetScale, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Sprite::GetRotation() const", "float GetRotation() const", AS_METHODPR(Sprite, GetRotation, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Sprite::GetRotation() const", "float get_rotation() const", AS_METHODPR(Sprite, GetRotation, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture* Sprite::GetTexture() const", "Texture@+ GetTexture() const", AS_METHODPR(Sprite, GetTexture, () const, Texture*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture* Sprite::GetTexture() const", "Texture@+ get_texture() const", AS_METHODPR(Sprite, GetTexture, () const, Texture*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& Sprite::GetImageRect() const", "const IntRect& GetImageRect() const", AS_METHODPR(Sprite, GetImageRect, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& Sprite::GetImageRect() const", "const IntRect& get_imageRect() const", AS_METHODPR(Sprite, GetImageRect, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BlendMode Sprite::GetBlendMode() const", "BlendMode GetBlendMode() const", AS_METHODPR(Sprite, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BlendMode Sprite::GetBlendMode() const", "BlendMode get_blendMode() const", AS_METHODPR(Sprite, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite::SetTextureAttr(const ResourceRef& value)", "void SetTextureAttr(const ResourceRef&in)", AS_METHODPR(Sprite, SetTextureAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef Sprite::GetTextureAttr() const", "ResourceRef GetTextureAttr() const", AS_METHODPR(Sprite, GetTextureAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Matrix3x4& Sprite::GetTransform() const", "const Matrix3x4& GetTransform() const", AS_METHODPR(Sprite, GetTransform, () const, const Matrix3x4&), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void Sprite::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(Sprite_RegisterObject_Context), AS_CALL_CDECL));
}

// class Text | File: ../UI/Text.h
void CollectMembers_Text(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_UISelectable(methods, staticMethods, fields, staticFields);

    Remove(methods, "UISelectable::URHO3D_OBJECT(UISelectable, UIElement)");
    Remove(methods, "virtual void UIElement::OnIndentSet()");
    Remove(methods, "virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)");
    Remove(methods, "void UIElement::ApplyAttributes() override");
    Remove(methods, "void UISelectable::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override");

    Remove(staticMethods, "static void UISelectable::RegisterObject(Context* context)");

    // void Text::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void Text::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(Text, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::OnResize(const IntVector2& newSize, const IntVector2& delta) override", "void OnResize(const IntVector2&in, const IntVector2&in)", AS_METHODPR(Text, OnResize, (const IntVector2&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::OnIndentSet() override", "void OnIndentSet()", AS_METHODPR(Text, OnIndentSet, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text::SetFont(const String& fontName, float size=DEFAULT_FONT_SIZE)", "bool SetFont(const String&in, float = DEFAULT_FONT_SIZE)", AS_METHODPR(Text, SetFont, (const String&, float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text::SetFont(Font* font, float size=DEFAULT_FONT_SIZE)", "bool SetFont(Font@+, float = DEFAULT_FONT_SIZE)", AS_METHODPR(Text, SetFont, (Font*, float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text::SetFontSize(float size)", "bool SetFontSize(float)", AS_METHODPR(Text, SetFontSize, (float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text::SetFontSize(float size)", "bool set_fontSize(float)", AS_METHODPR(Text, SetFontSize, (float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetText(const String& text)", "void SetText(const String&in)", AS_METHODPR(Text, SetText, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetText(const String& text)", "void set_text(const String&in)", AS_METHODPR(Text, SetText, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetTextAlignment(HorizontalAlignment align)", "void SetTextAlignment(HorizontalAlignment)", AS_METHODPR(Text, SetTextAlignment, (HorizontalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetTextAlignment(HorizontalAlignment align)", "void set_textAlignment(HorizontalAlignment)", AS_METHODPR(Text, SetTextAlignment, (HorizontalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetRowSpacing(float spacing)", "void SetRowSpacing(float)", AS_METHODPR(Text, SetRowSpacing, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetRowSpacing(float spacing)", "void set_rowSpacing(float)", AS_METHODPR(Text, SetRowSpacing, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetWordwrap(bool enable)", "void SetWordwrap(bool)", AS_METHODPR(Text, SetWordwrap, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetWordwrap(bool enable)", "void set_wordwrap(bool)", AS_METHODPR(Text, SetWordwrap, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetAutoLocalizable(bool enable)", "void SetAutoLocalizable(bool)", AS_METHODPR(Text, SetAutoLocalizable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetAutoLocalizable(bool enable)", "void set_autoLocalizable(bool)", AS_METHODPR(Text, SetAutoLocalizable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetSelection(unsigned start, unsigned length=M_MAX_UNSIGNED)", "void SetSelection(uint, uint = M_MAX_UNSIGNED)", AS_METHODPR(Text, SetSelection, (unsigned, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::ClearSelection()", "void ClearSelection()", AS_METHODPR(Text, ClearSelection, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetTextEffect(TextEffect textEffect)", "void SetTextEffect(TextEffect)", AS_METHODPR(Text, SetTextEffect, (TextEffect), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetTextEffect(TextEffect textEffect)", "void set_textEffect(TextEffect)", AS_METHODPR(Text, SetTextEffect, (TextEffect), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetEffectShadowOffset(const IntVector2& offset)", "void SetEffectShadowOffset(const IntVector2&in)", AS_METHODPR(Text, SetEffectShadowOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetEffectShadowOffset(const IntVector2& offset)", "void set_effectShadowOffset(const IntVector2&in)", AS_METHODPR(Text, SetEffectShadowOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetEffectStrokeThickness(int thickness)", "void SetEffectStrokeThickness(int)", AS_METHODPR(Text, SetEffectStrokeThickness, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetEffectStrokeThickness(int thickness)", "void set_effectStrokeThickness(int)", AS_METHODPR(Text, SetEffectStrokeThickness, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetEffectRoundStroke(bool roundStroke)", "void SetEffectRoundStroke(bool)", AS_METHODPR(Text, SetEffectRoundStroke, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetEffectRoundStroke(bool roundStroke)", "void set_effectRoundStroke(bool)", AS_METHODPR(Text, SetEffectRoundStroke, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetEffectColor(const Color& effectColor)", "void SetEffectColor(const Color&in)", AS_METHODPR(Text, SetEffectColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetEffectColor(const Color& effectColor)", "void set_effectColor(const Color&in)", AS_METHODPR(Text, SetEffectColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Font* Text::GetFont() const", "Font@+ GetFont() const", AS_METHODPR(Text, GetFont, () const, Font*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Font* Text::GetFont() const", "Font@+ get_font() const", AS_METHODPR(Text, GetFont, () const, Font*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text::GetFontSize() const", "float GetFontSize() const", AS_METHODPR(Text, GetFontSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text::GetFontSize() const", "float get_fontSize() const", AS_METHODPR(Text, GetFontSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Text::GetText() const", "const String& GetText() const", AS_METHODPR(Text, GetText, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Text::GetText() const", "const String& get_text() const", AS_METHODPR(Text, GetText, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("HorizontalAlignment Text::GetTextAlignment() const", "HorizontalAlignment GetTextAlignment() const", AS_METHODPR(Text, GetTextAlignment, () const, HorizontalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("HorizontalAlignment Text::GetTextAlignment() const", "HorizontalAlignment get_textAlignment() const", AS_METHODPR(Text, GetTextAlignment, () const, HorizontalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text::GetRowSpacing() const", "float GetRowSpacing() const", AS_METHODPR(Text, GetRowSpacing, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text::GetRowSpacing() const", "float get_rowSpacing() const", AS_METHODPR(Text, GetRowSpacing, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text::GetWordwrap() const", "bool GetWordwrap() const", AS_METHODPR(Text, GetWordwrap, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text::GetWordwrap() const", "bool get_wordwrap() const", AS_METHODPR(Text, GetWordwrap, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text::GetAutoLocalizable() const", "bool GetAutoLocalizable() const", AS_METHODPR(Text, GetAutoLocalizable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text::GetAutoLocalizable() const", "bool get_autoLocalizable() const", AS_METHODPR(Text, GetAutoLocalizable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text::GetSelectionStart() const", "uint GetSelectionStart() const", AS_METHODPR(Text, GetSelectionStart, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text::GetSelectionStart() const", "uint get_selectionStart() const", AS_METHODPR(Text, GetSelectionStart, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text::GetSelectionLength() const", "uint GetSelectionLength() const", AS_METHODPR(Text, GetSelectionLength, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text::GetSelectionLength() const", "uint get_selectionLength() const", AS_METHODPR(Text, GetSelectionLength, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TextEffect Text::GetTextEffect() const", "TextEffect GetTextEffect() const", AS_METHODPR(Text, GetTextEffect, () const, TextEffect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TextEffect Text::GetTextEffect() const", "TextEffect get_textEffect() const", AS_METHODPR(Text, GetTextEffect, () const, TextEffect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Text::GetEffectShadowOffset() const", "const IntVector2& GetEffectShadowOffset() const", AS_METHODPR(Text, GetEffectShadowOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Text::GetEffectShadowOffset() const", "const IntVector2& get_effectShadowOffset() const", AS_METHODPR(Text, GetEffectShadowOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text::GetEffectStrokeThickness() const", "int GetEffectStrokeThickness() const", AS_METHODPR(Text, GetEffectStrokeThickness, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text::GetEffectStrokeThickness() const", "int get_effectStrokeThickness() const", AS_METHODPR(Text, GetEffectStrokeThickness, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text::GetEffectRoundStroke() const", "bool GetEffectRoundStroke() const", AS_METHODPR(Text, GetEffectRoundStroke, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text::GetEffectRoundStroke() const", "bool get_effectRoundStroke() const", AS_METHODPR(Text, GetEffectRoundStroke, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Text::GetEffectColor() const", "const Color& GetEffectColor() const", AS_METHODPR(Text, GetEffectColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Text::GetEffectColor() const", "const Color& get_effectColor() const", AS_METHODPR(Text, GetEffectColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text::GetRowHeight() const", "float GetRowHeight() const", AS_METHODPR(Text, GetRowHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text::GetRowHeight() const", "float get_rowHeight() const", AS_METHODPR(Text, GetRowHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text::GetNumRows() const", "uint GetNumRows() const", AS_METHODPR(Text, GetNumRows, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text::GetNumRows() const", "uint get_numRows() const", AS_METHODPR(Text, GetNumRows, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text::GetNumChars() const", "uint GetNumChars() const", AS_METHODPR(Text, GetNumChars, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text::GetNumChars() const", "uint get_numChars() const", AS_METHODPR(Text, GetNumChars, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text::GetRowWidth(unsigned index) const", "float GetRowWidth(uint) const", AS_METHODPR(Text, GetRowWidth, (unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text::GetRowWidth(unsigned index) const", "float get_rowWidths(uint) const", AS_METHODPR(Text, GetRowWidth, (unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Text::GetCharPosition(unsigned index)", "Vector2 GetCharPosition(uint)", AS_METHODPR(Text, GetCharPosition, (unsigned), Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Text::GetCharPosition(unsigned index)", "Vector2 get_charPositions(uint)", AS_METHODPR(Text, GetCharPosition, (unsigned), Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Text::GetCharSize(unsigned index)", "Vector2 GetCharSize(uint)", AS_METHODPR(Text, GetCharSize, (unsigned), Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Text::GetCharSize(unsigned index)", "Vector2 get_charSizes(uint)", AS_METHODPR(Text, GetCharSize, (unsigned), Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetEffectDepthBias(float bias)", "void SetEffectDepthBias(float)", AS_METHODPR(Text, SetEffectDepthBias, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text::GetEffectDepthBias() const", "float GetEffectDepthBias() const", AS_METHODPR(Text, GetEffectDepthBias, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetFontAttr(const ResourceRef& value)", "void SetFontAttr(const ResourceRef&in)", AS_METHODPR(Text, SetFontAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef Text::GetFontAttr() const", "ResourceRef GetFontAttr() const", AS_METHODPR(Text, GetFontAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text::SetTextAttr(const String& value)", "void SetTextAttr(const String&in)", AS_METHODPR(Text, SetTextAttr, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Text::GetTextAttr() const", "String GetTextAttr() const", AS_METHODPR(Text, GetTextAttr, () const, String), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void Text::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(Text_RegisterObject_Context), AS_CALL_CDECL));
}

// class Text3D | File: ../UI/Text3D.h
void CollectMembers_Text3D(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Drawable(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual UpdateGeometryType Drawable::GetUpdateGeometryType()");
    Remove(methods, "virtual void Drawable::UpdateBatches(const FrameInfo& frame)");
    Remove(methods, "virtual void Drawable::UpdateGeometry(const FrameInfo& frame)");
    Remove(methods, "virtual void Serializable::ApplyAttributes()");

    Remove(staticMethods, "static void Drawable::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void Text3D::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(Text3D, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(Text3D, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::UpdateGeometry(const FrameInfo& frame) override", "void UpdateGeometry(const FrameInfo&in)", AS_METHODPR(Text3D, UpdateGeometry, (const FrameInfo&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UpdateGeometryType Text3D::GetUpdateGeometryType() override", "UpdateGeometryType GetUpdateGeometryType()", AS_METHODPR(Text3D, GetUpdateGeometryType, (), UpdateGeometryType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text3D::SetFont(const String& fontName, float size=DEFAULT_FONT_SIZE)", "bool SetFont(const String&in, float = DEFAULT_FONT_SIZE)", AS_METHODPR(Text3D, SetFont, (const String&, float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text3D::SetFont(Font* font, float size=DEFAULT_FONT_SIZE)", "bool SetFont(Font@+, float = DEFAULT_FONT_SIZE)", AS_METHODPR(Text3D, SetFont, (Font*, float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text3D::SetFontSize(float size)", "bool SetFontSize(float)", AS_METHODPR(Text3D, SetFontSize, (float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text3D::SetFontSize(float size)", "bool set_fontSize(float)", AS_METHODPR(Text3D, SetFontSize, (float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetMaterial(Material* material)", "void SetMaterial(Material@+)", AS_METHODPR(Text3D, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetMaterial(Material* material)", "void set_material(Material@+)", AS_METHODPR(Text3D, SetMaterial, (Material*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetText(const String& text)", "void SetText(const String&in)", AS_METHODPR(Text3D, SetText, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetText(const String& text)", "void set_text(const String&in)", AS_METHODPR(Text3D, SetText, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetAlignment(HorizontalAlignment hAlign, VerticalAlignment vAlign)", "void SetAlignment(HorizontalAlignment, VerticalAlignment)", AS_METHODPR(Text3D, SetAlignment, (HorizontalAlignment, VerticalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetHorizontalAlignment(HorizontalAlignment align)", "void SetHorizontalAlignment(HorizontalAlignment)", AS_METHODPR(Text3D, SetHorizontalAlignment, (HorizontalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetHorizontalAlignment(HorizontalAlignment align)", "void set_horizontalAlignment(HorizontalAlignment)", AS_METHODPR(Text3D, SetHorizontalAlignment, (HorizontalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetVerticalAlignment(VerticalAlignment align)", "void SetVerticalAlignment(VerticalAlignment)", AS_METHODPR(Text3D, SetVerticalAlignment, (VerticalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetVerticalAlignment(VerticalAlignment align)", "void set_verticalAlignment(VerticalAlignment)", AS_METHODPR(Text3D, SetVerticalAlignment, (VerticalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetTextAlignment(HorizontalAlignment align)", "void SetTextAlignment(HorizontalAlignment)", AS_METHODPR(Text3D, SetTextAlignment, (HorizontalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetTextAlignment(HorizontalAlignment align)", "void set_textAlignment(HorizontalAlignment)", AS_METHODPR(Text3D, SetTextAlignment, (HorizontalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetRowSpacing(float spacing)", "void SetRowSpacing(float)", AS_METHODPR(Text3D, SetRowSpacing, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetRowSpacing(float spacing)", "void set_rowSpacing(float)", AS_METHODPR(Text3D, SetRowSpacing, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetWordwrap(bool enable)", "void SetWordwrap(bool)", AS_METHODPR(Text3D, SetWordwrap, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetWordwrap(bool enable)", "void set_wordwrap(bool)", AS_METHODPR(Text3D, SetWordwrap, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetTextEffect(TextEffect textEffect)", "void SetTextEffect(TextEffect)", AS_METHODPR(Text3D, SetTextEffect, (TextEffect), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetTextEffect(TextEffect textEffect)", "void set_textEffect(TextEffect)", AS_METHODPR(Text3D, SetTextEffect, (TextEffect), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetEffectShadowOffset(const IntVector2& offset)", "void SetEffectShadowOffset(const IntVector2&in)", AS_METHODPR(Text3D, SetEffectShadowOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetEffectShadowOffset(const IntVector2& offset)", "void set_effectShadowOffset(const IntVector2&in)", AS_METHODPR(Text3D, SetEffectShadowOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetEffectStrokeThickness(int thickness)", "void SetEffectStrokeThickness(int)", AS_METHODPR(Text3D, SetEffectStrokeThickness, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetEffectStrokeThickness(int thickness)", "void set_effectStrokeThickness(int)", AS_METHODPR(Text3D, SetEffectStrokeThickness, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetEffectRoundStroke(bool roundStroke)", "void SetEffectRoundStroke(bool)", AS_METHODPR(Text3D, SetEffectRoundStroke, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetEffectRoundStroke(bool roundStroke)", "void set_effectRoundStroke(bool)", AS_METHODPR(Text3D, SetEffectRoundStroke, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetEffectColor(const Color& effectColor)", "void SetEffectColor(const Color&in)", AS_METHODPR(Text3D, SetEffectColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetEffectColor(const Color& effectColor)", "void set_effectColor(const Color&in)", AS_METHODPR(Text3D, SetEffectColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetEffectDepthBias(float bias)", "void SetEffectDepthBias(float)", AS_METHODPR(Text3D, SetEffectDepthBias, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetEffectDepthBias(float bias)", "void set_effectDepthBias(float)", AS_METHODPR(Text3D, SetEffectDepthBias, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetWidth(int width)", "void SetWidth(int)", AS_METHODPR(Text3D, SetWidth, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetWidth(int width)", "void set_width(int)", AS_METHODPR(Text3D, SetWidth, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetColor(const Color& color)", "void SetColor(const Color&in)", AS_METHODPR(Text3D, SetColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetColor(const Color& color)", "void set_color(const Color&in)", AS_METHODPR(Text3D, SetColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetColor(Corner corner, const Color& color)", "void SetColor(Corner, const Color&in)", AS_METHODPR(Text3D, SetColor, (Corner, const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetColor(Corner corner, const Color& color)", "void set_colors(Corner, const Color&in)", AS_METHODPR(Text3D, SetColor, (Corner, const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetOpacity(float opacity)", "void SetOpacity(float)", AS_METHODPR(Text3D, SetOpacity, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetOpacity(float opacity)", "void set_opacity(float)", AS_METHODPR(Text3D, SetOpacity, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetFixedScreenSize(bool enable)", "void SetFixedScreenSize(bool)", AS_METHODPR(Text3D, SetFixedScreenSize, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetFixedScreenSize(bool enable)", "void set_fixedScreenSize(bool)", AS_METHODPR(Text3D, SetFixedScreenSize, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetFaceCameraMode(FaceCameraMode mode)", "void SetFaceCameraMode(FaceCameraMode)", AS_METHODPR(Text3D, SetFaceCameraMode, (FaceCameraMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetFaceCameraMode(FaceCameraMode mode)", "void set_faceCameraMode(FaceCameraMode)", AS_METHODPR(Text3D, SetFaceCameraMode, (FaceCameraMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Font* Text3D::GetFont() const", "Font@+ GetFont() const", AS_METHODPR(Text3D, GetFont, () const, Font*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Font* Text3D::GetFont() const", "Font@+ get_font() const", AS_METHODPR(Text3D, GetFont, () const, Font*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text3D::GetFontSize() const", "float GetFontSize() const", AS_METHODPR(Text3D, GetFontSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text3D::GetFontSize() const", "float get_fontSize() const", AS_METHODPR(Text3D, GetFontSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Material* Text3D::GetMaterial() const", "Material@+ GetMaterial() const", AS_METHODPR(Text3D, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Material* Text3D::GetMaterial() const", "Material@+ get_material() const", AS_METHODPR(Text3D, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Text3D::GetText() const", "const String& GetText() const", AS_METHODPR(Text3D, GetText, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Text3D::GetText() const", "const String& get_text() const", AS_METHODPR(Text3D, GetText, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("HorizontalAlignment Text3D::GetTextAlignment() const", "HorizontalAlignment GetTextAlignment() const", AS_METHODPR(Text3D, GetTextAlignment, () const, HorizontalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("HorizontalAlignment Text3D::GetTextAlignment() const", "HorizontalAlignment get_textAlignment() const", AS_METHODPR(Text3D, GetTextAlignment, () const, HorizontalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("HorizontalAlignment Text3D::GetHorizontalAlignment() const", "HorizontalAlignment GetHorizontalAlignment() const", AS_METHODPR(Text3D, GetHorizontalAlignment, () const, HorizontalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("HorizontalAlignment Text3D::GetHorizontalAlignment() const", "HorizontalAlignment get_horizontalAlignment() const", AS_METHODPR(Text3D, GetHorizontalAlignment, () const, HorizontalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("VerticalAlignment Text3D::GetVerticalAlignment() const", "VerticalAlignment GetVerticalAlignment() const", AS_METHODPR(Text3D, GetVerticalAlignment, () const, VerticalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("VerticalAlignment Text3D::GetVerticalAlignment() const", "VerticalAlignment get_verticalAlignment() const", AS_METHODPR(Text3D, GetVerticalAlignment, () const, VerticalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text3D::GetRowSpacing() const", "float GetRowSpacing() const", AS_METHODPR(Text3D, GetRowSpacing, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text3D::GetRowSpacing() const", "float get_rowSpacing() const", AS_METHODPR(Text3D, GetRowSpacing, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text3D::GetWordwrap() const", "bool GetWordwrap() const", AS_METHODPR(Text3D, GetWordwrap, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text3D::GetWordwrap() const", "bool get_wordwrap() const", AS_METHODPR(Text3D, GetWordwrap, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TextEffect Text3D::GetTextEffect() const", "TextEffect GetTextEffect() const", AS_METHODPR(Text3D, GetTextEffect, () const, TextEffect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TextEffect Text3D::GetTextEffect() const", "TextEffect get_textEffect() const", AS_METHODPR(Text3D, GetTextEffect, () const, TextEffect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Text3D::GetEffectShadowOffset() const", "const IntVector2& GetEffectShadowOffset() const", AS_METHODPR(Text3D, GetEffectShadowOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Text3D::GetEffectShadowOffset() const", "const IntVector2& get_effectShadowOffset() const", AS_METHODPR(Text3D, GetEffectShadowOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text3D::GetEffectStrokeThickness() const", "int GetEffectStrokeThickness() const", AS_METHODPR(Text3D, GetEffectStrokeThickness, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text3D::GetEffectStrokeThickness() const", "int get_effectStrokeThickness() const", AS_METHODPR(Text3D, GetEffectStrokeThickness, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text3D::GetEffectRoundStroke() const", "bool GetEffectRoundStroke() const", AS_METHODPR(Text3D, GetEffectRoundStroke, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text3D::GetEffectRoundStroke() const", "bool get_effectRoundStroke() const", AS_METHODPR(Text3D, GetEffectRoundStroke, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Text3D::GetEffectColor() const", "const Color& GetEffectColor() const", AS_METHODPR(Text3D, GetEffectColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Text3D::GetEffectColor() const", "const Color& get_effectColor() const", AS_METHODPR(Text3D, GetEffectColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text3D::GetEffectDepthBias() const", "float GetEffectDepthBias() const", AS_METHODPR(Text3D, GetEffectDepthBias, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text3D::GetEffectDepthBias() const", "float get_effectDepthBias() const", AS_METHODPR(Text3D, GetEffectDepthBias, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text3D::GetWidth() const", "int GetWidth() const", AS_METHODPR(Text3D, GetWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text3D::GetWidth() const", "int get_width() const", AS_METHODPR(Text3D, GetWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text3D::GetHeight() const", "int GetHeight() const", AS_METHODPR(Text3D, GetHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text3D::GetHeight() const", "int get_height() const", AS_METHODPR(Text3D, GetHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text3D::GetRowHeight() const", "int GetRowHeight() const", AS_METHODPR(Text3D, GetRowHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text3D::GetRowHeight() const", "int get_rowHeight() const", AS_METHODPR(Text3D, GetRowHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text3D::GetNumRows() const", "uint GetNumRows() const", AS_METHODPR(Text3D, GetNumRows, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text3D::GetNumRows() const", "uint get_numRows() const", AS_METHODPR(Text3D, GetNumRows, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text3D::GetNumChars() const", "uint GetNumChars() const", AS_METHODPR(Text3D, GetNumChars, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Text3D::GetNumChars() const", "uint get_numChars() const", AS_METHODPR(Text3D, GetNumChars, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text3D::GetRowWidth(unsigned index) const", "int GetRowWidth(uint) const", AS_METHODPR(Text3D, GetRowWidth, (unsigned) const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Text3D::GetRowWidth(unsigned index) const", "int get_rowWidths(uint) const", AS_METHODPR(Text3D, GetRowWidth, (unsigned) const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Text3D::GetCharPosition(unsigned index)", "Vector2 GetCharPosition(uint)", AS_METHODPR(Text3D, GetCharPosition, (unsigned), Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Text3D::GetCharPosition(unsigned index)", "Vector2 get_charPositions(uint)", AS_METHODPR(Text3D, GetCharPosition, (unsigned), Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Text3D::GetCharSize(unsigned index)", "Vector2 GetCharSize(uint)", AS_METHODPR(Text3D, GetCharSize, (unsigned), Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Text3D::GetCharSize(unsigned index)", "Vector2 get_charSizes(uint)", AS_METHODPR(Text3D, GetCharSize, (unsigned), Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Text3D::GetColor(Corner corner) const", "const Color& GetColor(Corner) const", AS_METHODPR(Text3D, GetColor, (Corner) const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Text3D::GetColor(Corner corner) const", "const Color& get_colors(Corner) const", AS_METHODPR(Text3D, GetColor, (Corner) const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text3D::GetOpacity() const", "float GetOpacity() const", AS_METHODPR(Text3D, GetOpacity, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Text3D::GetOpacity() const", "float get_opacity() const", AS_METHODPR(Text3D, GetOpacity, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text3D::IsFixedScreenSize() const", "bool IsFixedScreenSize() const", AS_METHODPR(Text3D, IsFixedScreenSize, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Text3D::IsFixedScreenSize() const", "bool get_fixedScreenSize() const", AS_METHODPR(Text3D, IsFixedScreenSize, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("FaceCameraMode Text3D::GetFaceCameraMode() const", "FaceCameraMode GetFaceCameraMode() const", AS_METHODPR(Text3D, GetFaceCameraMode, () const, FaceCameraMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("FaceCameraMode Text3D::GetFaceCameraMode() const", "FaceCameraMode get_faceCameraMode() const", AS_METHODPR(Text3D, GetFaceCameraMode, () const, FaceCameraMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetFontAttr(const ResourceRef& value)", "void SetFontAttr(const ResourceRef&in)", AS_METHODPR(Text3D, SetFontAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef Text3D::GetFontAttr() const", "ResourceRef GetFontAttr() const", AS_METHODPR(Text3D, GetFontAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetMaterialAttr(const ResourceRef& value)", "void SetMaterialAttr(const ResourceRef&in)", AS_METHODPR(Text3D, SetMaterialAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef Text3D::GetMaterialAttr() const", "ResourceRef GetMaterialAttr() const", AS_METHODPR(Text3D, GetMaterialAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Text3D::SetTextAttr(const String& value)", "void SetTextAttr(const String&in)", AS_METHODPR(Text3D, SetTextAttr, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Text3D::GetTextAttr() const", "String GetTextAttr() const", AS_METHODPR(Text3D, GetTextAttr, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Text3D::GetColorAttr() const", "const Color& GetColorAttr() const", AS_METHODPR(Text3D, GetColorAttr, () const, const Color&), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void Text3D::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(Text3D_RegisterObject_Context), AS_CALL_CDECL));
}

// class ToolTip | File: ../UI/ToolTip.h
void CollectMembers_ToolTip(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_UIElement(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual void UIElement::Update(float timeStep)");

    Remove(staticMethods, "static void UIElement::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ToolTip::Update(float timeStep) override", "void Update(float)", AS_METHODPR(ToolTip, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ToolTip::Reset()", "void Reset()", AS_METHODPR(ToolTip, Reset, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ToolTip::AddAltTarget(UIElement* target)", "void AddAltTarget(UIElement@+)", AS_METHODPR(ToolTip, AddAltTarget, (UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ToolTip::SetDelay(float delay)", "void SetDelay(float)", AS_METHODPR(ToolTip, SetDelay, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ToolTip::SetDelay(float delay)", "void set_delay(float)", AS_METHODPR(ToolTip, SetDelay, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ToolTip::GetDelay() const", "float GetDelay() const", AS_METHODPR(ToolTip, GetDelay, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ToolTip::GetDelay() const", "float get_delay() const", AS_METHODPR(ToolTip, GetDelay, () const, float), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void ToolTip::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(ToolTip_RegisterObject_Context), AS_CALL_CDECL));
}

// SharedPtr<UIElement> UI::LoadLayout(Deserializer& source, XMLFile* styleFile=nullptr)
// SharedPtr<UIElement> UI::LoadLayout(Deserializer& source, XMLFile* styleFile=nullptr) | File: ../UI/UI.h
static UIElement* UI_LoadLayout_Deserializer_XMLFile(UI* ptr, Deserializer& source, XMLFile* styleFile)
{
    SharedPtr<UIElement> result = ptr->LoadLayout(source, styleFile);
    return result.Detach();
}


// SharedPtr<UIElement> UI::LoadLayout(XMLFile* file, XMLFile* styleFile=nullptr)
// SharedPtr<UIElement> UI::LoadLayout(XMLFile* file, XMLFile* styleFile=nullptr) | File: ../UI/UI.h
static UIElement* UI_LoadLayout_XMLFile_XMLFile(UI* ptr, XMLFile* file, XMLFile* styleFile)
{
    SharedPtr<UIElement> result = ptr->LoadLayout(file, styleFile);
    return result.Detach();
}


// class UI | File: ../UI/UI.h
void CollectMembers_UI(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Object(methods, staticMethods, fields, staticFields);

    // const Vector<UIElement*> UI::GetDragElements()
    // Error: type "const Vector<UIElement*>" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void UI::SetCursor(Cursor* cursor)", "void SetCursor(Cursor@+)", AS_METHODPR(UI, SetCursor, (Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetCursor(Cursor* cursor)", "void set_cursor(Cursor@+)", AS_METHODPR(UI, SetCursor, (Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetFocusElement(UIElement* element, bool byKey=false)", "void SetFocusElement(UIElement@+, bool = false)", AS_METHODPR(UI, SetFocusElement, (UIElement*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::SetModalElement(UIElement* modalElement, bool enable)", "bool SetModalElement(UIElement@+, bool)", AS_METHODPR(UI, SetModalElement, (UIElement*, bool), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::Clear()", "void Clear()", AS_METHODPR(UI, Clear, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::Update(float timeStep)", "void Update(float)", AS_METHODPR(UI, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::RenderUpdate()", "void RenderUpdate()", AS_METHODPR(UI, RenderUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::Render(bool renderUICommand=false)", "void Render(bool = false)", AS_METHODPR(UI, Render, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::DebugDraw(UIElement* element)", "void DebugDraw(UIElement@+)", AS_METHODPR(UI, DebugDraw, (UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SharedPtr<UIElement> UI::LoadLayout(Deserializer& source, XMLFile* styleFile=nullptr)", "UIElement@+ LoadLayout(Deserializer&, XMLFile@+ = null)", AS_FUNCTION_OBJFIRST(UI_LoadLayout_Deserializer_XMLFile), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("SharedPtr<UIElement> UI::LoadLayout(XMLFile* file, XMLFile* styleFile=nullptr)", "UIElement@+ LoadLayout(XMLFile@+, XMLFile@+ = null)", AS_FUNCTION_OBJFIRST(UI_LoadLayout_XMLFile_XMLFile), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool UI::SaveLayout(Serializer& dest, UIElement* element)", "bool SaveLayout(Serializer&, UIElement@+)", AS_METHODPR(UI, SaveLayout, (Serializer&, UIElement*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetClipboardText(const String& text)", "void SetClipboardText(const String&in)", AS_METHODPR(UI, SetClipboardText, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetClipboardText(const String& text)", "void set_clipboardText(const String&in)", AS_METHODPR(UI, SetClipboardText, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetDoubleClickInterval(float interval)", "void SetDoubleClickInterval(float)", AS_METHODPR(UI, SetDoubleClickInterval, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetDoubleClickInterval(float interval)", "void set_doubleClickInterval(float)", AS_METHODPR(UI, SetDoubleClickInterval, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetMaxDoubleClickDistance(float distPixels)", "void SetMaxDoubleClickDistance(float)", AS_METHODPR(UI, SetMaxDoubleClickDistance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetMaxDoubleClickDistance(float distPixels)", "void set_maxDoubleClickDistance(float)", AS_METHODPR(UI, SetMaxDoubleClickDistance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetDragBeginInterval(float interval)", "void SetDragBeginInterval(float)", AS_METHODPR(UI, SetDragBeginInterval, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetDragBeginInterval(float interval)", "void set_dragBeginInterval(float)", AS_METHODPR(UI, SetDragBeginInterval, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetDragBeginDistance(int pixels)", "void SetDragBeginDistance(int)", AS_METHODPR(UI, SetDragBeginDistance, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetDragBeginDistance(int pixels)", "void set_dragBeginDistance(int)", AS_METHODPR(UI, SetDragBeginDistance, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetDefaultToolTipDelay(float delay)", "void SetDefaultToolTipDelay(float)", AS_METHODPR(UI, SetDefaultToolTipDelay, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetDefaultToolTipDelay(float delay)", "void set_defaultToolTipDelay(float)", AS_METHODPR(UI, SetDefaultToolTipDelay, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetMaxFontTextureSize(int size)", "void SetMaxFontTextureSize(int)", AS_METHODPR(UI, SetMaxFontTextureSize, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetMaxFontTextureSize(int size)", "void set_maxFontTextureSize(int)", AS_METHODPR(UI, SetMaxFontTextureSize, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetNonFocusedMouseWheel(bool nonFocusedMouseWheel)", "void SetNonFocusedMouseWheel(bool)", AS_METHODPR(UI, SetNonFocusedMouseWheel, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetNonFocusedMouseWheel(bool nonFocusedMouseWheel)", "void set_nonFocusedMouseWheel(bool)", AS_METHODPR(UI, SetNonFocusedMouseWheel, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetUseSystemClipboard(bool enable)", "void SetUseSystemClipboard(bool)", AS_METHODPR(UI, SetUseSystemClipboard, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetUseSystemClipboard(bool enable)", "void set_useSystemClipboard(bool)", AS_METHODPR(UI, SetUseSystemClipboard, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetUseScreenKeyboard(bool enable)", "void SetUseScreenKeyboard(bool)", AS_METHODPR(UI, SetUseScreenKeyboard, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetUseScreenKeyboard(bool enable)", "void set_useScreenKeyboard(bool)", AS_METHODPR(UI, SetUseScreenKeyboard, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetUseMutableGlyphs(bool enable)", "void SetUseMutableGlyphs(bool)", AS_METHODPR(UI, SetUseMutableGlyphs, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetUseMutableGlyphs(bool enable)", "void set_useMutableGlyphs(bool)", AS_METHODPR(UI, SetUseMutableGlyphs, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetForceAutoHint(bool enable)", "void SetForceAutoHint(bool)", AS_METHODPR(UI, SetForceAutoHint, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetForceAutoHint(bool enable)", "void set_forceAutoHint(bool)", AS_METHODPR(UI, SetForceAutoHint, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetFontHintLevel(FontHintLevel level)", "void SetFontHintLevel(FontHintLevel)", AS_METHODPR(UI, SetFontHintLevel, (FontHintLevel), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetFontHintLevel(FontHintLevel level)", "void set_fontHintLevel(FontHintLevel)", AS_METHODPR(UI, SetFontHintLevel, (FontHintLevel), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetFontSubpixelThreshold(float threshold)", "void SetFontSubpixelThreshold(float)", AS_METHODPR(UI, SetFontSubpixelThreshold, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetFontSubpixelThreshold(float threshold)", "void set_fontSubpixelThreshold(float)", AS_METHODPR(UI, SetFontSubpixelThreshold, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetFontOversampling(int oversampling)", "void SetFontOversampling(int)", AS_METHODPR(UI, SetFontOversampling, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetFontOversampling(int oversampling)", "void set_fontOversampling(int)", AS_METHODPR(UI, SetFontOversampling, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetScale(float scale)", "void SetScale(float)", AS_METHODPR(UI, SetScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetScale(float scale)", "void set_scale(float)", AS_METHODPR(UI, SetScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetWidth(float width)", "void SetWidth(float)", AS_METHODPR(UI, SetWidth, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetHeight(float height)", "void SetHeight(float)", AS_METHODPR(UI, SetHeight, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetCustomSize(const IntVector2& size)", "void SetCustomSize(const IntVector2&in)", AS_METHODPR(UI, SetCustomSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetCustomSize(const IntVector2& size)", "void set_customSize(const IntVector2&in)", AS_METHODPR(UI, SetCustomSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetCustomSize(int width, int height)", "void SetCustomSize(int, int)", AS_METHODPR(UI, SetCustomSize, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetRoot() const", "UIElement@+ GetRoot() const", AS_METHODPR(UI, GetRoot, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetRoot() const", "UIElement@+ get_root() const", AS_METHODPR(UI, GetRoot, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetRootModalElement() const", "UIElement@+ GetRootModalElement() const", AS_METHODPR(UI, GetRootModalElement, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetRootModalElement() const", "UIElement@+ get_modalRoot() const", AS_METHODPR(UI, GetRootModalElement, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Cursor* UI::GetCursor() const", "Cursor@+ GetCursor() const", AS_METHODPR(UI, GetCursor, () const, Cursor*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Cursor* UI::GetCursor() const", "Cursor@+ get_cursor() const", AS_METHODPR(UI, GetCursor, () const, Cursor*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 UI::GetCursorPosition() const", "IntVector2 GetCursorPosition() const", AS_METHODPR(UI, GetCursorPosition, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 UI::GetCursorPosition() const", "IntVector2 get_cursorPosition() const", AS_METHODPR(UI, GetCursorPosition, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetElementAt(const IntVector2& position, bool enabledOnly=true)", "UIElement@+ GetElementAt(const IntVector2&in, bool = true)", AS_METHODPR(UI, GetElementAt, (const IntVector2&, bool), UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetElementAt(int x, int y, bool enabledOnly=true)", "UIElement@+ GetElementAt(int, int, bool = true)", AS_METHODPR(UI, GetElementAt, (int, int, bool), UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetElementAt(UIElement* root, const IntVector2& position, bool enabledOnly=true)", "UIElement@+ GetElementAt(UIElement@+, const IntVector2&in, bool = true)", AS_METHODPR(UI, GetElementAt, (UIElement*, const IntVector2&, bool), UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 UI::ConvertSystemToUI(const IntVector2& systemPos) const", "IntVector2 ConvertSystemToUI(const IntVector2&in) const", AS_METHODPR(UI, ConvertSystemToUI, (const IntVector2&) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 UI::ConvertUIToSystem(const IntVector2& uiPos) const", "IntVector2 ConvertUIToSystem(const IntVector2&in) const", AS_METHODPR(UI, ConvertUIToSystem, (const IntVector2&) const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetFocusElement() const", "UIElement@+ GetFocusElement() const", AS_METHODPR(UI, GetFocusElement, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetFocusElement() const", "UIElement@+ get_focusElement() const", AS_METHODPR(UI, GetFocusElement, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetFrontElement() const", "UIElement@+ GetFrontElement() const", AS_METHODPR(UI, GetFrontElement, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetFrontElement() const", "UIElement@+ get_frontElement() const", AS_METHODPR(UI, GetFrontElement, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned UI::GetNumDragElements() const", "uint GetNumDragElements() const", AS_METHODPR(UI, GetNumDragElements, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UI::GetDragElement(unsigned index)", "UIElement@+ GetDragElement(uint)", AS_METHODPR(UI, GetDragElement, (unsigned), UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& UI::GetClipboardText() const", "const String& GetClipboardText() const", AS_METHODPR(UI, GetClipboardText, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& UI::GetClipboardText() const", "const String& get_clipboardText() const", AS_METHODPR(UI, GetClipboardText, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetDoubleClickInterval() const", "float GetDoubleClickInterval() const", AS_METHODPR(UI, GetDoubleClickInterval, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetDoubleClickInterval() const", "float get_doubleClickInterval() const", AS_METHODPR(UI, GetDoubleClickInterval, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetMaxDoubleClickDistance() const", "float GetMaxDoubleClickDistance() const", AS_METHODPR(UI, GetMaxDoubleClickDistance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetMaxDoubleClickDistance() const", "float get_maxDoubleClickDistance() const", AS_METHODPR(UI, GetMaxDoubleClickDistance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetDragBeginInterval() const", "float GetDragBeginInterval() const", AS_METHODPR(UI, GetDragBeginInterval, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetDragBeginInterval() const", "float get_dragBeginInterval() const", AS_METHODPR(UI, GetDragBeginInterval, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UI::GetDragBeginDistance() const", "int GetDragBeginDistance() const", AS_METHODPR(UI, GetDragBeginDistance, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UI::GetDragBeginDistance() const", "int get_dragBeginDistance() const", AS_METHODPR(UI, GetDragBeginDistance, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetDefaultToolTipDelay() const", "float GetDefaultToolTipDelay() const", AS_METHODPR(UI, GetDefaultToolTipDelay, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetDefaultToolTipDelay() const", "float get_defaultToolTipDelay() const", AS_METHODPR(UI, GetDefaultToolTipDelay, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UI::GetMaxFontTextureSize() const", "int GetMaxFontTextureSize() const", AS_METHODPR(UI, GetMaxFontTextureSize, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UI::GetMaxFontTextureSize() const", "int get_maxFontTextureSize() const", AS_METHODPR(UI, GetMaxFontTextureSize, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::IsNonFocusedMouseWheel() const", "bool IsNonFocusedMouseWheel() const", AS_METHODPR(UI, IsNonFocusedMouseWheel, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::IsNonFocusedMouseWheel() const", "bool get_nonFocusedMouseWheel() const", AS_METHODPR(UI, IsNonFocusedMouseWheel, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::GetUseSystemClipboard() const", "bool GetUseSystemClipboard() const", AS_METHODPR(UI, GetUseSystemClipboard, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::GetUseSystemClipboard() const", "bool get_useSystemClipboard() const", AS_METHODPR(UI, GetUseSystemClipboard, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::GetUseScreenKeyboard() const", "bool GetUseScreenKeyboard() const", AS_METHODPR(UI, GetUseScreenKeyboard, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::GetUseScreenKeyboard() const", "bool get_useScreenKeyboard() const", AS_METHODPR(UI, GetUseScreenKeyboard, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::GetUseMutableGlyphs() const", "bool GetUseMutableGlyphs() const", AS_METHODPR(UI, GetUseMutableGlyphs, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::GetUseMutableGlyphs() const", "bool get_useMutableGlyphs() const", AS_METHODPR(UI, GetUseMutableGlyphs, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::GetForceAutoHint() const", "bool GetForceAutoHint() const", AS_METHODPR(UI, GetForceAutoHint, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::GetForceAutoHint() const", "bool get_forceAutoHint() const", AS_METHODPR(UI, GetForceAutoHint, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("FontHintLevel UI::GetFontHintLevel() const", "FontHintLevel GetFontHintLevel() const", AS_METHODPR(UI, GetFontHintLevel, () const, FontHintLevel), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("FontHintLevel UI::GetFontHintLevel() const", "FontHintLevel get_fontHintLevel() const", AS_METHODPR(UI, GetFontHintLevel, () const, FontHintLevel), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetFontSubpixelThreshold() const", "float GetFontSubpixelThreshold() const", AS_METHODPR(UI, GetFontSubpixelThreshold, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetFontSubpixelThreshold() const", "float get_fontSubpixelThreshold() const", AS_METHODPR(UI, GetFontSubpixelThreshold, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UI::GetFontOversampling() const", "int GetFontOversampling() const", AS_METHODPR(UI, GetFontOversampling, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UI::GetFontOversampling() const", "int get_fontOversampling() const", AS_METHODPR(UI, GetFontOversampling, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::HasModalElement() const", "bool HasModalElement() const", AS_METHODPR(UI, HasModalElement, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UI::IsDragging() const", "bool IsDragging() const", AS_METHODPR(UI, IsDragging, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetScale() const", "float GetScale() const", AS_METHODPR(UI, GetScale, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UI::GetScale() const", "float get_scale() const", AS_METHODPR(UI, GetScale, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UI::GetCustomSize() const", "const IntVector2& GetCustomSize() const", AS_METHODPR(UI, GetCustomSize, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UI::GetCustomSize() const", "const IntVector2& get_customSize() const", AS_METHODPR(UI, GetCustomSize, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UI::SetElementRenderTexture(UIElement* element, Texture2D* texture)", "void SetElementRenderTexture(UIElement@+, Texture2D@+)", AS_METHODPR(UI, SetElementRenderTexture, (UIElement*, Texture2D*), void), AS_CALL_THISCALL));
}

// class UIBatch | File: ../UI/UIBatch.h
void CollectMembers_UIBatch(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("void UIBatch::SetColor(const Color& color, bool overrideAlpha=false)", "void SetColor(const Color&in, bool = false)", AS_METHODPR(UIBatch, SetColor, (const Color&, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIBatch::SetDefaultColor()", "void SetDefaultColor()", AS_METHODPR(UIBatch, SetDefaultColor, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIBatch::AddQuad(float x, float y, float width, float height, int texOffsetX, int texOffsetY, int texWidth=0, int texHeight=0)", "void AddQuad(float, float, float, float, int, int, int = 0, int = 0)", AS_METHODPR(UIBatch, AddQuad, (float, float, float, float, int, int, int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIBatch::AddQuad(const Matrix3x4& transform, int x, int y, int width, int height, int texOffsetX, int texOffsetY, int texWidth=0, int texHeight=0)", "void AddQuad(const Matrix3x4&in, int, int, int, int, int, int, int = 0, int = 0)", AS_METHODPR(UIBatch, AddQuad, (const Matrix3x4&, int, int, int, int, int, int, int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIBatch::AddQuad(int x, int y, int width, int height, int texOffsetX, int texOffsetY, int texWidth, int texHeight, bool tiled)", "void AddQuad(int, int, int, int, int, int, int, int, bool)", AS_METHODPR(UIBatch, AddQuad, (int, int, int, int, int, int, int, int, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIBatch::AddQuad(const Matrix3x4& transform, const IntVector2& a, const IntVector2& b, const IntVector2& c, const IntVector2& d, const IntVector2& texA, const IntVector2& texB, const IntVector2& texC, const IntVector2& texD)", "void AddQuad(const Matrix3x4&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const IntVector2&in)", AS_METHODPR(UIBatch, AddQuad, (const Matrix3x4&, const IntVector2&, const IntVector2&, const IntVector2&, const IntVector2&, const IntVector2&, const IntVector2&, const IntVector2&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIBatch::AddQuad(const Matrix3x4& transform, const IntVector2& a, const IntVector2& b, const IntVector2& c, const IntVector2& d, const IntVector2& texA, const IntVector2& texB, const IntVector2& texC, const IntVector2& texD, const Color& colA, const Color& colB, const Color& colC, const Color& colD)", "void AddQuad(const Matrix3x4&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const IntVector2&in, const Color&in, const Color&in, const Color&in, const Color&in)", AS_METHODPR(UIBatch, AddQuad, (const Matrix3x4&, const IntVector2&, const IntVector2&, const IntVector2&, const IntVector2&, const IntVector2&, const IntVector2&, const IntVector2&, const IntVector2&, const Color&, const Color&, const Color&, const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIBatch::Merge(const UIBatch& batch)", "bool Merge(const UIBatch&in)", AS_METHODPR(UIBatch, Merge, (const UIBatch&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned UIBatch::GetInterpolatedColor(float x, float y)", "uint GetInterpolatedColor(float, float)", AS_METHODPR(UIBatch, GetInterpolatedColor, (float, float), unsigned), AS_CALL_THISCALL));

    // static void UIBatch::AddOrMerge(const UIBatch& batch, PODVector<UIBatch>& batches)
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    // UIElement* UIBatch::element_
    // Not registered because pointer
    // Texture* UIBatch::texture_
    // Not registered because pointer
    // PODVector<float>* UIBatch::vertexData_
    // Not registered because pointer
    // Material* UIBatch::customMaterial_
    // Not registered because pointer

    fields.Push(RegisterObjectPropertyArgs("BlendMode UIBatch::blendMode_", "BlendMode blendMode", offsetof(UIBatch, blendMode_)));
    fields.Push(RegisterObjectPropertyArgs("IntRect UIBatch::scissor_", "IntRect scissor", offsetof(UIBatch, scissor_)));
    fields.Push(RegisterObjectPropertyArgs("Vector2 UIBatch::invTextureSize_", "Vector2 invTextureSize", offsetof(UIBatch, invTextureSize_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned UIBatch::vertexStart_", "uint vertexStart", offsetof(UIBatch, vertexStart_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned UIBatch::vertexEnd_", "uint vertexEnd", offsetof(UIBatch, vertexEnd_)));
    fields.Push(RegisterObjectPropertyArgs("unsigned UIBatch::color_", "uint color", offsetof(UIBatch, color_)));
    fields.Push(RegisterObjectPropertyArgs("bool UIBatch::useGradient_", "bool useGradient", offsetof(UIBatch, useGradient_)));

    staticFields.Push(RegisterGlobalPropertyArgs("static Vector3 UIBatch::posAdjust", "Vector3 posAdjust", (void*)&UIBatch::posAdjust));
}

// class UIComponent | File: ../UI/UIComponent.h
void CollectMembers_UIComponent(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, staticMethods, fields, staticFields);

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("UIElement* UIComponent::GetRoot() const", "UIElement@+ GetRoot() const", AS_METHODPR(UIComponent, GetRoot, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIComponent::GetRoot() const", "UIElement@+ get_root() const", AS_METHODPR(UIComponent, GetRoot, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Material* UIComponent::GetMaterial() const", "Material@+ GetMaterial() const", AS_METHODPR(UIComponent, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Material* UIComponent::GetMaterial() const", "Material@+ get_material() const", AS_METHODPR(UIComponent, GetMaterial, () const, Material*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture2D* UIComponent::GetTexture() const", "Texture2D@+ GetTexture() const", AS_METHODPR(UIComponent, GetTexture, () const, Texture2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture2D* UIComponent::GetTexture() const", "Texture2D@+ get_texture() const", AS_METHODPR(UIComponent, GetTexture, () const, Texture2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIComponent::SetViewportIndex(unsigned index)", "void SetViewportIndex(uint)", AS_METHODPR(UIComponent, SetViewportIndex, (unsigned), void), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void UIComponent::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(UIComponent_RegisterObject_Context), AS_CALL_CDECL));
}

// void UIElement::SetTags(const StringVector& tags)
// void UIElement::SetTags(const StringVector& tags) | File: ../UI/UIElement.h
static void UIElement_SetTags_StringVector(UIElement* ptr, CScriptArray* tags_conv)
{
    StringVector tags = ArrayToVector<String>(tags_conv);
    ptr->SetTags(tags);
}


// void UIElement::AddTags(const StringVector& tags)
// void UIElement::AddTags(const StringVector& tags) | File: ../UI/UIElement.h
static void UIElement_AddTags_StringVector(UIElement* ptr, CScriptArray* tags_conv)
{
    StringVector tags = ArrayToVector<String>(tags_conv);
    ptr->AddTags(tags);
}


// const Vector<SharedPtr<UIElement>>& UIElement::GetChildren() const
// const Vector<SharedPtr<UIElement>>& UIElement::GetChildren() const | File: ../UI/UIElement.h
static CScriptArray* UIElement_GetChildren_void(UIElement* ptr)
{
    const Vector<SharedPtr<UIElement>>& result = ptr->GetChildren();
    return VectorToHandleArray(result, "Array<UIElement@>");
}


// PODVector<UIElement*> UIElement::GetChildren(bool recursive) const
// PODVector<UIElement*> UIElement::GetChildren(bool recursive) const | File: ../UI/UIElement.h
static CScriptArray* UIElement_GetChildren_bool(UIElement* ptr, bool recursive)
{
    PODVector<UIElement*> result = ptr->GetChildren(recursive);
    return VectorToHandleArray(result, "Array<UIElement@>");
}


// const StringVector& UIElement::GetTags() const
// const StringVector& UIElement::GetTags() const | File: ../UI/UIElement.h
static CScriptArray* UIElement_GetTags_void(UIElement* ptr)
{
    const StringVector& result = ptr->GetTags();
    return VectorToArray<String>(result, "Array<String>");
}


// PODVector<UIElement*> UIElement::GetChildrenWithTag(const String& tag, bool recursive=false) const
// PODVector<UIElement*> UIElement::GetChildrenWithTag(const String& tag, bool recursive=false) const | File: ../UI/UIElement.h
static CScriptArray* UIElement_GetChildrenWithTag_String_bool(UIElement* ptr, const String& tag, bool recursive)
{
    PODVector<UIElement*> result = ptr->GetChildrenWithTag(tag, recursive);
    return VectorToHandleArray(result, "Array<UIElement@>");
}


// class UIElement | File: ../UI/UIElement.h
void CollectMembers_UIElement(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Animatable(methods, staticMethods, fields, staticFields);

    Remove(methods, "bool Animatable::LoadXML(const XMLElement& source) override");
    Remove(methods, "bool Animatable::SaveXML(XMLElement& dest) const override");
    Remove(methods, "virtual void Serializable::ApplyAttributes()");

    Remove(staticMethods, "static void Animatable::RegisterObject(Context* context)");

    // virtual void UIElement::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)
    // Error: type "PODVector<UIBatch>&" can not automatically bind
    // void UIElement::GetBatchesWithOffset(IntVector2& offset, PODVector<UIBatch>& batches, PODVector<float>& vertexData, IntRect currentScissor)
    // Error: type "PODVector<UIBatch>&" can not automatically bind
    // void UIElement::GetChildren(PODVector<UIElement*>& dest, bool recursive=false) const
    // Error: type "PODVector<UIElement*>&" can not automatically bind
    // void UIElement::GetChildrenWithTag(PODVector<UIElement*>& dest, const String& tag, bool recursive=false) const
    // Error: type "PODVector<UIElement*>&" can not automatically bind
    // virtual void UIElement::GetDebugDrawBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void UIElement::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(UIElement, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::LoadXML(const XMLElement& source) override", "bool LoadXML(const XMLElement&in)", AS_METHODPR(UIElement, LoadXML, (const XMLElement&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool UIElement::LoadXML(const XMLElement& source, XMLFile* styleFile)", "bool LoadXML(const XMLElement&in, XMLFile@+)", AS_METHODPR(UIElement, LoadXML, (const XMLElement&, XMLFile*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual UIElement* UIElement::LoadChildXML(const XMLElement& childElem, XMLFile* styleFile)", "UIElement@+ LoadChildXML(const XMLElement&in, XMLFile@+)", AS_METHODPR(UIElement, LoadChildXML, (const XMLElement&, XMLFile*), UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::SaveXML(XMLElement& dest) const override", "bool SaveXML(XMLElement&) const", AS_METHODPR(UIElement, SaveXML, (XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::Update(float timeStep)", "void Update(float)", AS_METHODPR(UIElement, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool UIElement::IsWithinScissor(const IntRect& currentScissor)", "bool IsWithinScissor(const IntRect&in)", AS_METHODPR(UIElement, IsWithinScissor, (const IntRect&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual const IntVector2& UIElement::GetScreenPosition() const", "const IntVector2& GetScreenPosition() const", AS_METHODPR(UIElement, GetScreenPosition, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual const IntVector2& UIElement::GetScreenPosition() const", "const IntVector2& get_screenPosition() const", AS_METHODPR(UIElement, GetScreenPosition, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)", "void OnHover(const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(UIElement, OnHover, (const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnClickBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)", "void OnClickBegin(const IntVector2&in, const IntVector2&in, MouseButton, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(UIElement, OnClickBegin, (const IntVector2&, const IntVector2&, MouseButton, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnClickEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor, UIElement* beginElement)", "void OnClickEnd(const IntVector2&in, const IntVector2&in, MouseButton, MouseButtonFlags, QualifierFlags, Cursor@+, UIElement@+)", AS_METHODPR(UIElement, OnClickEnd, (const IntVector2&, const IntVector2&, MouseButton, MouseButtonFlags, QualifierFlags, Cursor*, UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnDoubleClick(const IntVector2& position, const IntVector2& screenPosition, MouseButton button, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)", "void OnDoubleClick(const IntVector2&in, const IntVector2&in, MouseButton, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(UIElement, OnDoubleClick, (const IntVector2&, const IntVector2&, MouseButton, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)", "void OnDragBegin(const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(UIElement, OnDragBegin, (const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)", "void OnDragMove(const IntVector2&in, const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(UIElement, OnDragMove, (const IntVector2&, const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnDragEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor* cursor)", "void OnDragEnd(const IntVector2&in, const IntVector2&in, MouseButtonFlags, MouseButtonFlags, Cursor@+)", AS_METHODPR(UIElement, OnDragEnd, (const IntVector2&, const IntVector2&, MouseButtonFlags, MouseButtonFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnDragCancel(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags cancelButtons, Cursor* cursor)", "void OnDragCancel(const IntVector2&in, const IntVector2&in, MouseButtonFlags, MouseButtonFlags, Cursor@+)", AS_METHODPR(UIElement, OnDragCancel, (const IntVector2&, const IntVector2&, MouseButtonFlags, MouseButtonFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool UIElement::OnDragDropTest(UIElement* source)", "bool OnDragDropTest(UIElement@+)", AS_METHODPR(UIElement, OnDragDropTest, (UIElement*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool UIElement::OnDragDropFinish(UIElement* source)", "bool OnDragDropFinish(UIElement@+)", AS_METHODPR(UIElement, OnDragDropFinish, (UIElement*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnWheel(int delta, MouseButtonFlags buttons, QualifierFlags qualifiers)", "void OnWheel(int, MouseButtonFlags, QualifierFlags)", AS_METHODPR(UIElement, OnWheel, (int, MouseButtonFlags, QualifierFlags), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnKey(Key key, MouseButtonFlags buttons, QualifierFlags qualifiers)", "void OnKey(Key, MouseButtonFlags, QualifierFlags)", AS_METHODPR(UIElement, OnKey, (Key, MouseButtonFlags, QualifierFlags), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnTextInput(const String& text)", "void OnTextInput(const String&in)", AS_METHODPR(UIElement, OnTextInput, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)", "void OnResize(const IntVector2&in, const IntVector2&in)", AS_METHODPR(UIElement, OnResize, (const IntVector2&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnPositionSet(const IntVector2& newPosition)", "void OnPositionSet(const IntVector2&in)", AS_METHODPR(UIElement, OnPositionSet, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnSetEditable()", "void OnSetEditable()", AS_METHODPR(UIElement, OnSetEditable, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void UIElement::OnIndentSet()", "void OnIndentSet()", AS_METHODPR(UIElement, OnIndentSet, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual IntVector2 UIElement::ScreenToElement(const IntVector2& screenPosition)", "IntVector2 ScreenToElement(const IntVector2&in)", AS_METHODPR(UIElement, ScreenToElement, (const IntVector2&), IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual IntVector2 UIElement::ElementToScreen(const IntVector2& position)", "IntVector2 ElementToScreen(const IntVector2&in)", AS_METHODPR(UIElement, ElementToScreen, (const IntVector2&), IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual bool UIElement::IsWheelHandler() const", "bool IsWheelHandler() const", AS_METHODPR(UIElement, IsWheelHandler, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::LoadXML(Deserializer& source)", "bool LoadXML(Deserializer&)", AS_METHODPR(UIElement, LoadXML, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::SaveXML(Serializer& dest, const String& indentation=\"\t\") const", "bool SaveXML(Serializer&, const String&in = \"\t\") const", AS_METHODPR(UIElement, SaveXML, (Serializer&, const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::FilterAttributes(XMLElement& dest) const", "bool FilterAttributes(XMLElement&) const", AS_METHODPR(UIElement, FilterAttributes, (XMLElement&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetName(const String& name)", "void SetName(const String&in)", AS_METHODPR(UIElement, SetName, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetName(const String& name)", "void set_name(const String&in)", AS_METHODPR(UIElement, SetName, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetPosition(const IntVector2& position)", "void SetPosition(const IntVector2&in)", AS_METHODPR(UIElement, SetPosition, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetPosition(const IntVector2& position)", "void set_position(const IntVector2&in)", AS_METHODPR(UIElement, SetPosition, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetPosition(int x, int y)", "void SetPosition(int, int)", AS_METHODPR(UIElement, SetPosition, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetSize(const IntVector2& size)", "void SetSize(const IntVector2&in)", AS_METHODPR(UIElement, SetSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetSize(const IntVector2& size)", "void set_size(const IntVector2&in)", AS_METHODPR(UIElement, SetSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetSize(int width, int height)", "void SetSize(int, int)", AS_METHODPR(UIElement, SetSize, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetWidth(int width)", "void SetWidth(int)", AS_METHODPR(UIElement, SetWidth, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetWidth(int width)", "void set_width(int)", AS_METHODPR(UIElement, SetWidth, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetHeight(int height)", "void SetHeight(int)", AS_METHODPR(UIElement, SetHeight, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetHeight(int height)", "void set_height(int)", AS_METHODPR(UIElement, SetHeight, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinSize(const IntVector2& minSize)", "void SetMinSize(const IntVector2&in)", AS_METHODPR(UIElement, SetMinSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinSize(const IntVector2& minSize)", "void set_minSize(const IntVector2&in)", AS_METHODPR(UIElement, SetMinSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinSize(int width, int height)", "void SetMinSize(int, int)", AS_METHODPR(UIElement, SetMinSize, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinWidth(int width)", "void SetMinWidth(int)", AS_METHODPR(UIElement, SetMinWidth, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinWidth(int width)", "void set_minWidth(int)", AS_METHODPR(UIElement, SetMinWidth, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinHeight(int height)", "void SetMinHeight(int)", AS_METHODPR(UIElement, SetMinHeight, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinHeight(int height)", "void set_minHeight(int)", AS_METHODPR(UIElement, SetMinHeight, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxSize(const IntVector2& maxSize)", "void SetMaxSize(const IntVector2&in)", AS_METHODPR(UIElement, SetMaxSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxSize(const IntVector2& maxSize)", "void set_maxSize(const IntVector2&in)", AS_METHODPR(UIElement, SetMaxSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxSize(int width, int height)", "void SetMaxSize(int, int)", AS_METHODPR(UIElement, SetMaxSize, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxWidth(int width)", "void SetMaxWidth(int)", AS_METHODPR(UIElement, SetMaxWidth, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxWidth(int width)", "void set_maxWidth(int)", AS_METHODPR(UIElement, SetMaxWidth, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxHeight(int height)", "void SetMaxHeight(int)", AS_METHODPR(UIElement, SetMaxHeight, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxHeight(int height)", "void set_maxHeight(int)", AS_METHODPR(UIElement, SetMaxHeight, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetFixedSize(const IntVector2& size)", "void SetFixedSize(const IntVector2&in)", AS_METHODPR(UIElement, SetFixedSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetFixedSize(int width, int height)", "void SetFixedSize(int, int)", AS_METHODPR(UIElement, SetFixedSize, (int, int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetFixedWidth(int width)", "void SetFixedWidth(int)", AS_METHODPR(UIElement, SetFixedWidth, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetFixedHeight(int height)", "void SetFixedHeight(int)", AS_METHODPR(UIElement, SetFixedHeight, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetAlignment(HorizontalAlignment hAlign, VerticalAlignment vAlign)", "void SetAlignment(HorizontalAlignment, VerticalAlignment)", AS_METHODPR(UIElement, SetAlignment, (HorizontalAlignment, VerticalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetHorizontalAlignment(HorizontalAlignment align)", "void SetHorizontalAlignment(HorizontalAlignment)", AS_METHODPR(UIElement, SetHorizontalAlignment, (HorizontalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetHorizontalAlignment(HorizontalAlignment align)", "void set_horizontalAlignment(HorizontalAlignment)", AS_METHODPR(UIElement, SetHorizontalAlignment, (HorizontalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetVerticalAlignment(VerticalAlignment align)", "void SetVerticalAlignment(VerticalAlignment)", AS_METHODPR(UIElement, SetVerticalAlignment, (VerticalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetVerticalAlignment(VerticalAlignment align)", "void set_verticalAlignment(VerticalAlignment)", AS_METHODPR(UIElement, SetVerticalAlignment, (VerticalAlignment), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetEnableAnchor(bool enable)", "void SetEnableAnchor(bool)", AS_METHODPR(UIElement, SetEnableAnchor, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetEnableAnchor(bool enable)", "void set_enableAnchor(bool)", AS_METHODPR(UIElement, SetEnableAnchor, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinAnchor(const Vector2& anchor)", "void SetMinAnchor(const Vector2&in)", AS_METHODPR(UIElement, SetMinAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinAnchor(const Vector2& anchor)", "void set_minAnchor(const Vector2&in)", AS_METHODPR(UIElement, SetMinAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinAnchor(float x, float y)", "void SetMinAnchor(float, float)", AS_METHODPR(UIElement, SetMinAnchor, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxAnchor(const Vector2& anchor)", "void SetMaxAnchor(const Vector2&in)", AS_METHODPR(UIElement, SetMaxAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxAnchor(const Vector2& anchor)", "void set_maxAnchor(const Vector2&in)", AS_METHODPR(UIElement, SetMaxAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxAnchor(float x, float y)", "void SetMaxAnchor(float, float)", AS_METHODPR(UIElement, SetMaxAnchor, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinOffset(const IntVector2& offset)", "void SetMinOffset(const IntVector2&in)", AS_METHODPR(UIElement, SetMinOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMinOffset(const IntVector2& offset)", "void set_minOffset(const IntVector2&in)", AS_METHODPR(UIElement, SetMinOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxOffset(const IntVector2& offset)", "void SetMaxOffset(const IntVector2&in)", AS_METHODPR(UIElement, SetMaxOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetMaxOffset(const IntVector2& offset)", "void set_maxOffset(const IntVector2&in)", AS_METHODPR(UIElement, SetMaxOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetPivot(const Vector2& pivot)", "void SetPivot(const Vector2&in)", AS_METHODPR(UIElement, SetPivot, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetPivot(const Vector2& pivot)", "void set_pivot(const Vector2&in)", AS_METHODPR(UIElement, SetPivot, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetPivot(float x, float y)", "void SetPivot(float, float)", AS_METHODPR(UIElement, SetPivot, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetClipBorder(const IntRect& rect)", "void SetClipBorder(const IntRect&in)", AS_METHODPR(UIElement, SetClipBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetClipBorder(const IntRect& rect)", "void set_clipBorder(const IntRect&in)", AS_METHODPR(UIElement, SetClipBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetColor(const Color& color)", "void SetColor(const Color&in)", AS_METHODPR(UIElement, SetColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetColor(const Color& color)", "void set_color(const Color&in)", AS_METHODPR(UIElement, SetColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetColor(Corner corner, const Color& color)", "void SetColor(Corner, const Color&in)", AS_METHODPR(UIElement, SetColor, (Corner, const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetColor(Corner corner, const Color& color)", "void set_colors(Corner, const Color&in)", AS_METHODPR(UIElement, SetColor, (Corner, const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetPriority(int priority)", "void SetPriority(int)", AS_METHODPR(UIElement, SetPriority, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetPriority(int priority)", "void set_priority(int)", AS_METHODPR(UIElement, SetPriority, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetOpacity(float opacity)", "void SetOpacity(float)", AS_METHODPR(UIElement, SetOpacity, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetOpacity(float opacity)", "void set_opacity(float)", AS_METHODPR(UIElement, SetOpacity, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetBringToFront(bool enable)", "void SetBringToFront(bool)", AS_METHODPR(UIElement, SetBringToFront, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetBringToFront(bool enable)", "void set_bringToFront(bool)", AS_METHODPR(UIElement, SetBringToFront, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetBringToBack(bool enable)", "void SetBringToBack(bool)", AS_METHODPR(UIElement, SetBringToBack, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetBringToBack(bool enable)", "void set_bringToBack(bool)", AS_METHODPR(UIElement, SetBringToBack, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetClipChildren(bool enable)", "void SetClipChildren(bool)", AS_METHODPR(UIElement, SetClipChildren, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetClipChildren(bool enable)", "void set_clipChildren(bool)", AS_METHODPR(UIElement, SetClipChildren, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetSortChildren(bool enable)", "void SetSortChildren(bool)", AS_METHODPR(UIElement, SetSortChildren, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetSortChildren(bool enable)", "void set_sortChildren(bool)", AS_METHODPR(UIElement, SetSortChildren, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetUseDerivedOpacity(bool enable)", "void SetUseDerivedOpacity(bool)", AS_METHODPR(UIElement, SetUseDerivedOpacity, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetUseDerivedOpacity(bool enable)", "void set_useDerivedOpacity(bool)", AS_METHODPR(UIElement, SetUseDerivedOpacity, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetEnabled(bool enable)", "void SetEnabled(bool)", AS_METHODPR(UIElement, SetEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetEnabled(bool enable)", "void set_enabled(bool)", AS_METHODPR(UIElement, SetEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetDeepEnabled(bool enable)", "void SetDeepEnabled(bool)", AS_METHODPR(UIElement, SetDeepEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::ResetDeepEnabled()", "void ResetDeepEnabled()", AS_METHODPR(UIElement, ResetDeepEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetEnabledRecursive(bool enable)", "void SetEnabledRecursive(bool)", AS_METHODPR(UIElement, SetEnabledRecursive, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetEditable(bool enable)", "void SetEditable(bool)", AS_METHODPR(UIElement, SetEditable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetEditable(bool enable)", "void set_editable(bool)", AS_METHODPR(UIElement, SetEditable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetFocus(bool enable)", "void SetFocus(bool)", AS_METHODPR(UIElement, SetFocus, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetFocus(bool enable)", "void set_focus(bool)", AS_METHODPR(UIElement, SetFocus, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetSelected(bool enable)", "void SetSelected(bool)", AS_METHODPR(UIElement, SetSelected, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetSelected(bool enable)", "void set_selected(bool)", AS_METHODPR(UIElement, SetSelected, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetVisible(bool enable)", "void SetVisible(bool)", AS_METHODPR(UIElement, SetVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetVisible(bool enable)", "void set_visible(bool)", AS_METHODPR(UIElement, SetVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetFocusMode(FocusMode mode)", "void SetFocusMode(FocusMode)", AS_METHODPR(UIElement, SetFocusMode, (FocusMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetFocusMode(FocusMode mode)", "void set_focusMode(FocusMode)", AS_METHODPR(UIElement, SetFocusMode, (FocusMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetDragDropMode(DragAndDropModeFlags mode)", "void SetDragDropMode(DragAndDropModeFlags)", AS_METHODPR(UIElement, SetDragDropMode, (DragAndDropModeFlags), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetDragDropMode(DragAndDropModeFlags mode)", "void set_dragDropMode(DragAndDropModeFlags)", AS_METHODPR(UIElement, SetDragDropMode, (DragAndDropModeFlags), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::SetStyle(const String& styleName, XMLFile* file=nullptr)", "bool SetStyle(const String&in, XMLFile@+ = null)", AS_METHODPR(UIElement, SetStyle, (const String&, XMLFile*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::SetStyle(const XMLElement& element)", "bool SetStyle(const XMLElement&in)", AS_METHODPR(UIElement, SetStyle, (const XMLElement&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::SetStyleAuto(XMLFile* file=nullptr)", "bool SetStyleAuto(XMLFile@+ = null)", AS_METHODPR(UIElement, SetStyleAuto, (XMLFile*), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetDefaultStyle(XMLFile* style)", "void SetDefaultStyle(XMLFile@+)", AS_METHODPR(UIElement, SetDefaultStyle, (XMLFile*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetDefaultStyle(XMLFile* style)", "void set_defaultStyle(XMLFile@+)", AS_METHODPR(UIElement, SetDefaultStyle, (XMLFile*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetLayout(LayoutMode mode, int spacing=0, const IntRect& border=IntRect::ZERO)", "void SetLayout(LayoutMode, int = 0, const IntRect&in = IntRect::ZERO)", AS_METHODPR(UIElement, SetLayout, (LayoutMode, int, const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetLayoutMode(LayoutMode mode)", "void SetLayoutMode(LayoutMode)", AS_METHODPR(UIElement, SetLayoutMode, (LayoutMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetLayoutMode(LayoutMode mode)", "void set_layoutMode(LayoutMode)", AS_METHODPR(UIElement, SetLayoutMode, (LayoutMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetLayoutSpacing(int spacing)", "void SetLayoutSpacing(int)", AS_METHODPR(UIElement, SetLayoutSpacing, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetLayoutSpacing(int spacing)", "void set_layoutSpacing(int)", AS_METHODPR(UIElement, SetLayoutSpacing, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetLayoutBorder(const IntRect& border)", "void SetLayoutBorder(const IntRect&in)", AS_METHODPR(UIElement, SetLayoutBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetLayoutBorder(const IntRect& border)", "void set_layoutBorder(const IntRect&in)", AS_METHODPR(UIElement, SetLayoutBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetLayoutFlexScale(const Vector2& scale)", "void SetLayoutFlexScale(const Vector2&in)", AS_METHODPR(UIElement, SetLayoutFlexScale, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetLayoutFlexScale(const Vector2& scale)", "void set_layoutFlexScale(const Vector2&in)", AS_METHODPR(UIElement, SetLayoutFlexScale, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetIndent(int indent)", "void SetIndent(int)", AS_METHODPR(UIElement, SetIndent, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetIndent(int indent)", "void set_indent(int)", AS_METHODPR(UIElement, SetIndent, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetIndentSpacing(int indentSpacing)", "void SetIndentSpacing(int)", AS_METHODPR(UIElement, SetIndentSpacing, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetIndentSpacing(int indentSpacing)", "void set_indentSpacing(int)", AS_METHODPR(UIElement, SetIndentSpacing, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::UpdateLayout()", "void UpdateLayout()", AS_METHODPR(UIElement, UpdateLayout, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::DisableLayoutUpdate()", "void DisableLayoutUpdate()", AS_METHODPR(UIElement, DisableLayoutUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::EnableLayoutUpdate()", "void EnableLayoutUpdate()", AS_METHODPR(UIElement, EnableLayoutUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::BringToFront()", "void BringToFront()", AS_METHODPR(UIElement, BringToFront, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIElement::CreateChild(StringHash type, const String& name=String::EMPTY, unsigned index=M_MAX_UNSIGNED)", "UIElement@+ CreateChild(StringHash, const String&in = String::EMPTY, uint = M_MAX_UNSIGNED)", AS_METHODPR(UIElement, CreateChild, (StringHash, const String&, unsigned), UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::AddChild(UIElement* element)", "void AddChild(UIElement@+)", AS_METHODPR(UIElement, AddChild, (UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::InsertChild(unsigned index, UIElement* element)", "void InsertChild(uint, UIElement@+)", AS_METHODPR(UIElement, InsertChild, (unsigned, UIElement*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::RemoveChild(UIElement* element, unsigned index=0)", "void RemoveChild(UIElement@+, uint = 0)", AS_METHODPR(UIElement, RemoveChild, (UIElement*, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::RemoveChildAtIndex(unsigned index)", "void RemoveChildAtIndex(uint)", AS_METHODPR(UIElement, RemoveChildAtIndex, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::RemoveAllChildren()", "void RemoveAllChildren()", AS_METHODPR(UIElement, RemoveAllChildren, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::Remove()", "void Remove()", AS_METHODPR(UIElement, Remove, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned UIElement::FindChild(UIElement* element) const", "uint FindChild(UIElement@+) const", AS_METHODPR(UIElement, FindChild, (UIElement*) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetParent(UIElement* parent, unsigned index=M_MAX_UNSIGNED)", "void SetParent(UIElement@+, uint = M_MAX_UNSIGNED)", AS_METHODPR(UIElement, SetParent, (UIElement*, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetVar(StringHash key, const Variant& value)", "void SetVar(StringHash, const Variant&in)", AS_METHODPR(UIElement, SetVar, (StringHash, const Variant&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetInternal(bool enable)", "void SetInternal(bool)", AS_METHODPR(UIElement, SetInternal, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetInternal(bool enable)", "void set_internal(bool)", AS_METHODPR(UIElement, SetInternal, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetTraversalMode(TraversalMode traversalMode)", "void SetTraversalMode(TraversalMode)", AS_METHODPR(UIElement, SetTraversalMode, (TraversalMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetTraversalMode(TraversalMode traversalMode)", "void set_traversalMode(TraversalMode)", AS_METHODPR(UIElement, SetTraversalMode, (TraversalMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetElementEventSender(bool flag)", "void SetElementEventSender(bool)", AS_METHODPR(UIElement, SetElementEventSender, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetElementEventSender(bool flag)", "void set_elementEventSender(bool)", AS_METHODPR(UIElement, SetElementEventSender, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetTags(const StringVector& tags)", "void SetTags(Array<String>@+)", AS_FUNCTION_OBJFIRST(UIElement_SetTags_StringVector), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("void UIElement::AddTag(const String& tag)", "void AddTag(const String&in)", AS_METHODPR(UIElement, AddTag, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::AddTags(const String& tags, char separator=';')", "void AddTags(const String&in, int8 = ';')", AS_METHODPR(UIElement, AddTags, (const String&, char), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::AddTags(const StringVector& tags)", "void AddTags(Array<String>@+)", AS_FUNCTION_OBJFIRST(UIElement_AddTags_StringVector), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::RemoveTag(const String& tag)", "bool RemoveTag(const String&in)", AS_METHODPR(UIElement, RemoveTag, (const String&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::RemoveAllTags()", "void RemoveAllTags()", AS_METHODPR(UIElement, RemoveAllTags, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& UIElement::GetName() const", "const String& GetName() const", AS_METHODPR(UIElement, GetName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& UIElement::GetName() const", "const String& get_name() const", AS_METHODPR(UIElement, GetName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetPosition() const", "const IntVector2& GetPosition() const", AS_METHODPR(UIElement, GetPosition, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetPosition() const", "const IntVector2& get_position() const", AS_METHODPR(UIElement, GetPosition, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetSize() const", "const IntVector2& GetSize() const", AS_METHODPR(UIElement, GetSize, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetSize() const", "const IntVector2& get_size() const", AS_METHODPR(UIElement, GetSize, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetWidth() const", "int GetWidth() const", AS_METHODPR(UIElement, GetWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetWidth() const", "int get_width() const", AS_METHODPR(UIElement, GetWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetHeight() const", "int GetHeight() const", AS_METHODPR(UIElement, GetHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetHeight() const", "int get_height() const", AS_METHODPR(UIElement, GetHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetMinSize() const", "const IntVector2& GetMinSize() const", AS_METHODPR(UIElement, GetMinSize, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetMinSize() const", "const IntVector2& get_minSize() const", AS_METHODPR(UIElement, GetMinSize, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetMinWidth() const", "int GetMinWidth() const", AS_METHODPR(UIElement, GetMinWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetMinWidth() const", "int get_minWidth() const", AS_METHODPR(UIElement, GetMinWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetMinHeight() const", "int GetMinHeight() const", AS_METHODPR(UIElement, GetMinHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetMinHeight() const", "int get_minHeight() const", AS_METHODPR(UIElement, GetMinHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetMaxSize() const", "const IntVector2& GetMaxSize() const", AS_METHODPR(UIElement, GetMaxSize, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetMaxSize() const", "const IntVector2& get_maxSize() const", AS_METHODPR(UIElement, GetMaxSize, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetMaxWidth() const", "int GetMaxWidth() const", AS_METHODPR(UIElement, GetMaxWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetMaxWidth() const", "int get_maxWidth() const", AS_METHODPR(UIElement, GetMaxWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetMaxHeight() const", "int GetMaxHeight() const", AS_METHODPR(UIElement, GetMaxHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetMaxHeight() const", "int get_maxHeight() const", AS_METHODPR(UIElement, GetMaxHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsFixedSize() const", "bool IsFixedSize() const", AS_METHODPR(UIElement, IsFixedSize, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsFixedSize() const", "bool get_fixedSize() const", AS_METHODPR(UIElement, IsFixedSize, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsFixedWidth() const", "bool IsFixedWidth() const", AS_METHODPR(UIElement, IsFixedWidth, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsFixedWidth() const", "bool get_fixedWidth() const", AS_METHODPR(UIElement, IsFixedWidth, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsFixedHeight() const", "bool IsFixedHeight() const", AS_METHODPR(UIElement, IsFixedHeight, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsFixedHeight() const", "bool get_fixedHeight() const", AS_METHODPR(UIElement, IsFixedHeight, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetChildOffset() const", "const IntVector2& GetChildOffset() const", AS_METHODPR(UIElement, GetChildOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetChildOffset() const", "const IntVector2& get_childOffset() const", AS_METHODPR(UIElement, GetChildOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("HorizontalAlignment UIElement::GetHorizontalAlignment() const", "HorizontalAlignment GetHorizontalAlignment() const", AS_METHODPR(UIElement, GetHorizontalAlignment, () const, HorizontalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("HorizontalAlignment UIElement::GetHorizontalAlignment() const", "HorizontalAlignment get_horizontalAlignment() const", AS_METHODPR(UIElement, GetHorizontalAlignment, () const, HorizontalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("VerticalAlignment UIElement::GetVerticalAlignment() const", "VerticalAlignment GetVerticalAlignment() const", AS_METHODPR(UIElement, GetVerticalAlignment, () const, VerticalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("VerticalAlignment UIElement::GetVerticalAlignment() const", "VerticalAlignment get_verticalAlignment() const", AS_METHODPR(UIElement, GetVerticalAlignment, () const, VerticalAlignment), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetEnableAnchor() const", "bool GetEnableAnchor() const", AS_METHODPR(UIElement, GetEnableAnchor, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetEnableAnchor() const", "bool get_enableAnchor() const", AS_METHODPR(UIElement, GetEnableAnchor, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& UIElement::GetMinAnchor() const", "const Vector2& GetMinAnchor() const", AS_METHODPR(UIElement, GetMinAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& UIElement::GetMinAnchor() const", "const Vector2& get_minAnchor() const", AS_METHODPR(UIElement, GetMinAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& UIElement::GetMaxAnchor() const", "const Vector2& GetMaxAnchor() const", AS_METHODPR(UIElement, GetMaxAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& UIElement::GetMaxAnchor() const", "const Vector2& get_maxAnchor() const", AS_METHODPR(UIElement, GetMaxAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetMinOffset() const", "const IntVector2& GetMinOffset() const", AS_METHODPR(UIElement, GetMinOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetMinOffset() const", "const IntVector2& get_minOffset() const", AS_METHODPR(UIElement, GetMinOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetMaxOffset() const", "const IntVector2& GetMaxOffset() const", AS_METHODPR(UIElement, GetMaxOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& UIElement::GetMaxOffset() const", "const IntVector2& get_maxOffset() const", AS_METHODPR(UIElement, GetMaxOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& UIElement::GetPivot() const", "const Vector2& GetPivot() const", AS_METHODPR(UIElement, GetPivot, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& UIElement::GetPivot() const", "const Vector2& get_pivot() const", AS_METHODPR(UIElement, GetPivot, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& UIElement::GetClipBorder() const", "const IntRect& GetClipBorder() const", AS_METHODPR(UIElement, GetClipBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& UIElement::GetClipBorder() const", "const IntRect& get_clipBorder() const", AS_METHODPR(UIElement, GetClipBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& UIElement::GetColor(Corner corner) const", "const Color& GetColor(Corner) const", AS_METHODPR(UIElement, GetColor, (Corner) const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& UIElement::GetColor(Corner corner) const", "const Color& get_colors(Corner) const", AS_METHODPR(UIElement, GetColor, (Corner) const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetPriority() const", "int GetPriority() const", AS_METHODPR(UIElement, GetPriority, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetPriority() const", "int get_priority() const", AS_METHODPR(UIElement, GetPriority, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UIElement::GetOpacity() const", "float GetOpacity() const", AS_METHODPR(UIElement, GetOpacity, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UIElement::GetOpacity() const", "float get_opacity() const", AS_METHODPR(UIElement, GetOpacity, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UIElement::GetDerivedOpacity() const", "float GetDerivedOpacity() const", AS_METHODPR(UIElement, GetDerivedOpacity, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float UIElement::GetDerivedOpacity() const", "float get_derivedOpacity() const", AS_METHODPR(UIElement, GetDerivedOpacity, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetBringToFront() const", "bool GetBringToFront() const", AS_METHODPR(UIElement, GetBringToFront, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetBringToFront() const", "bool get_bringToFront() const", AS_METHODPR(UIElement, GetBringToFront, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetBringToBack() const", "bool GetBringToBack() const", AS_METHODPR(UIElement, GetBringToBack, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetBringToBack() const", "bool get_bringToBack() const", AS_METHODPR(UIElement, GetBringToBack, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetClipChildren() const", "bool GetClipChildren() const", AS_METHODPR(UIElement, GetClipChildren, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetClipChildren() const", "bool get_clipChildren() const", AS_METHODPR(UIElement, GetClipChildren, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetSortChildren() const", "bool GetSortChildren() const", AS_METHODPR(UIElement, GetSortChildren, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetSortChildren() const", "bool get_sortChildren() const", AS_METHODPR(UIElement, GetSortChildren, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetUseDerivedOpacity() const", "bool GetUseDerivedOpacity() const", AS_METHODPR(UIElement, GetUseDerivedOpacity, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::GetUseDerivedOpacity() const", "bool get_useDerivedOpacity() const", AS_METHODPR(UIElement, GetUseDerivedOpacity, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::HasFocus() const", "bool HasFocus() const", AS_METHODPR(UIElement, HasFocus, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::HasFocus() const", "bool get_focus() const", AS_METHODPR(UIElement, HasFocus, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsChildOf(UIElement* element) const", "bool IsChildOf(UIElement@+) const", AS_METHODPR(UIElement, IsChildOf, (UIElement*) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsEnabled() const", "bool IsEnabled() const", AS_METHODPR(UIElement, IsEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsEnabled() const", "bool get_enabled() const", AS_METHODPR(UIElement, IsEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsEnabledSelf() const", "bool IsEnabledSelf() const", AS_METHODPR(UIElement, IsEnabledSelf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsEnabledSelf() const", "bool get_enabledSelf() const", AS_METHODPR(UIElement, IsEnabledSelf, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsEditable() const", "bool IsEditable() const", AS_METHODPR(UIElement, IsEditable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsEditable() const", "bool get_editable() const", AS_METHODPR(UIElement, IsEditable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsSelected() const", "bool IsSelected() const", AS_METHODPR(UIElement, IsSelected, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsSelected() const", "bool get_selected() const", AS_METHODPR(UIElement, IsSelected, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsVisible() const", "bool IsVisible() const", AS_METHODPR(UIElement, IsVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsVisible() const", "bool get_visible() const", AS_METHODPR(UIElement, IsVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsVisibleEffective() const", "bool IsVisibleEffective() const", AS_METHODPR(UIElement, IsVisibleEffective, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsVisibleEffective() const", "bool get_visibleEffective() const", AS_METHODPR(UIElement, IsVisibleEffective, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsHovering() const", "bool IsHovering() const", AS_METHODPR(UIElement, IsHovering, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsHovering() const", "bool get_hovering() const", AS_METHODPR(UIElement, IsHovering, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsInternal() const", "bool IsInternal() const", AS_METHODPR(UIElement, IsInternal, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsInternal() const", "bool get_internal() const", AS_METHODPR(UIElement, IsInternal, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::HasColorGradient() const", "bool HasColorGradient() const", AS_METHODPR(UIElement, HasColorGradient, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::HasColorGradient() const", "bool get_colorGradient() const", AS_METHODPR(UIElement, HasColorGradient, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("FocusMode UIElement::GetFocusMode() const", "FocusMode GetFocusMode() const", AS_METHODPR(UIElement, GetFocusMode, () const, FocusMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("FocusMode UIElement::GetFocusMode() const", "FocusMode get_focusMode() const", AS_METHODPR(UIElement, GetFocusMode, () const, FocusMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("DragAndDropModeFlags UIElement::GetDragDropMode() const", "DragAndDropModeFlags GetDragDropMode() const", AS_METHODPR(UIElement, GetDragDropMode, () const, DragAndDropModeFlags), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("DragAndDropModeFlags UIElement::GetDragDropMode() const", "DragAndDropModeFlags get_dragDropMode() const", AS_METHODPR(UIElement, GetDragDropMode, () const, DragAndDropModeFlags), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& UIElement::GetAppliedStyle() const", "const String& GetAppliedStyle() const", AS_METHODPR(UIElement, GetAppliedStyle, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& UIElement::GetAppliedStyle() const", "const String& get_style() const", AS_METHODPR(UIElement, GetAppliedStyle, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("XMLFile* UIElement::GetDefaultStyle(bool recursiveUp=true) const", "XMLFile@+ GetDefaultStyle(bool = true) const", AS_METHODPR(UIElement, GetDefaultStyle, (bool) const, XMLFile*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("LayoutMode UIElement::GetLayoutMode() const", "LayoutMode GetLayoutMode() const", AS_METHODPR(UIElement, GetLayoutMode, () const, LayoutMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("LayoutMode UIElement::GetLayoutMode() const", "LayoutMode get_layoutMode() const", AS_METHODPR(UIElement, GetLayoutMode, () const, LayoutMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetLayoutSpacing() const", "int GetLayoutSpacing() const", AS_METHODPR(UIElement, GetLayoutSpacing, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetLayoutSpacing() const", "int get_layoutSpacing() const", AS_METHODPR(UIElement, GetLayoutSpacing, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& UIElement::GetLayoutBorder() const", "const IntRect& GetLayoutBorder() const", AS_METHODPR(UIElement, GetLayoutBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& UIElement::GetLayoutBorder() const", "const IntRect& get_layoutBorder() const", AS_METHODPR(UIElement, GetLayoutBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& UIElement::GetLayoutFlexScale() const", "const Vector2& GetLayoutFlexScale() const", AS_METHODPR(UIElement, GetLayoutFlexScale, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& UIElement::GetLayoutFlexScale() const", "const Vector2& get_layoutFlexScale() const", AS_METHODPR(UIElement, GetLayoutFlexScale, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned UIElement::GetNumChildren(bool recursive=false) const", "uint GetNumChildren(bool = false) const", AS_METHODPR(UIElement, GetNumChildren, (bool) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned UIElement::GetNumChildren(bool recursive=false) const", "uint get_numChildren(bool = false) const", AS_METHODPR(UIElement, GetNumChildren, (bool) const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIElement::GetChild(unsigned index) const", "UIElement@+ GetChild(uint) const", AS_METHODPR(UIElement, GetChild, (unsigned) const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIElement::GetChild(unsigned index) const", "UIElement@+ get_children(uint) const", AS_METHODPR(UIElement, GetChild, (unsigned) const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIElement::GetChild(const String& name, bool recursive=false) const", "UIElement@+ GetChild(const String&in, bool = false) const", AS_METHODPR(UIElement, GetChild, (const String&, bool) const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIElement::GetChild(const StringHash& key, const Variant& value=Variant::EMPTY, bool recursive=false) const", "UIElement@+ GetChild(const StringHash&in, const Variant&in = Variant::EMPTY, bool = false) const", AS_METHODPR(UIElement, GetChild, (const StringHash&, const Variant&, bool) const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector<SharedPtr<UIElement>>& UIElement::GetChildren() const", "Array<UIElement@>@ GetChildren() const", AS_FUNCTION_OBJFIRST(UIElement_GetChildren_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("PODVector<UIElement*> UIElement::GetChildren(bool recursive) const", "Array<UIElement@>@ GetChildren(bool) const", AS_FUNCTION_OBJFIRST(UIElement_GetChildren_bool), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIElement::GetParent() const", "UIElement@+ GetParent() const", AS_METHODPR(UIElement, GetParent, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIElement::GetParent() const", "UIElement@+ get_parent() const", AS_METHODPR(UIElement, GetParent, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIElement::GetRoot() const", "UIElement@+ GetRoot() const", AS_METHODPR(UIElement, GetRoot, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIElement::GetRoot() const", "UIElement@+ get_root() const", AS_METHODPR(UIElement, GetRoot, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& UIElement::GetDerivedColor() const", "const Color& GetDerivedColor() const", AS_METHODPR(UIElement, GetDerivedColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Variant& UIElement::GetVar(const StringHash& key) const", "const Variant& GetVar(const StringHash&in) const", AS_METHODPR(UIElement, GetVar, (const StringHash&) const, const Variant&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const VariantMap& UIElement::GetVars() const", "const VariantMap& GetVars() const", AS_METHODPR(UIElement, GetVars, () const, const VariantMap&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::HasTag(const String& tag) const", "bool HasTag(const String&in) const", AS_METHODPR(UIElement, HasTag, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const StringVector& UIElement::GetTags() const", "Array<String>@ GetTags() const", AS_FUNCTION_OBJFIRST(UIElement_GetTags_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("const StringVector& UIElement::GetTags() const", "Array<String>@ get_tags() const", AS_FUNCTION_OBJFIRST(UIElement_GetTags_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("PODVector<UIElement*> UIElement::GetChildrenWithTag(const String& tag, bool recursive=false) const", "Array<UIElement@>@ GetChildrenWithTag(const String&in, bool = false) const", AS_FUNCTION_OBJFIRST(UIElement_GetChildrenWithTag_String_bool), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("MouseButtonFlags UIElement::GetDragButtonCombo() const", "MouseButtonFlags GetDragButtonCombo() const", AS_METHODPR(UIElement, GetDragButtonCombo, () const, MouseButtonFlags), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("MouseButtonFlags UIElement::GetDragButtonCombo() const", "MouseButtonFlags get_dragButtonCombo() const", AS_METHODPR(UIElement, GetDragButtonCombo, () const, MouseButtonFlags), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned UIElement::GetDragButtonCount() const", "uint GetDragButtonCount() const", AS_METHODPR(UIElement, GetDragButtonCount, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned UIElement::GetDragButtonCount() const", "uint get_dragButtonCount() const", AS_METHODPR(UIElement, GetDragButtonCount, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsInside(IntVector2 position, bool isScreen)", "bool IsInside(IntVector2, bool)", AS_METHODPR(UIElement, IsInside, (IntVector2, bool), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsInsideCombined(IntVector2 position, bool isScreen)", "bool IsInsideCombined(IntVector2, bool)", AS_METHODPR(UIElement, IsInsideCombined, (IntVector2, bool), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect UIElement::GetCombinedScreenRect()", "IntRect GetCombinedScreenRect()", AS_METHODPR(UIElement, GetCombinedScreenRect, (), IntRect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntRect UIElement::GetCombinedScreenRect()", "IntRect get_combinedScreenRect()", AS_METHODPR(UIElement, GetCombinedScreenRect, (), IntRect), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SortChildren()", "void SortChildren()", AS_METHODPR(UIElement, SortChildren, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetLayoutElementMaxSize() const", "int GetLayoutElementMaxSize() const", AS_METHODPR(UIElement, GetLayoutElementMaxSize, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetIndent() const", "int GetIndent() const", AS_METHODPR(UIElement, GetIndent, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetIndent() const", "int get_indent() const", AS_METHODPR(UIElement, GetIndent, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetIndentSpacing() const", "int GetIndentSpacing() const", AS_METHODPR(UIElement, GetIndentSpacing, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetIndentSpacing() const", "int get_indentSpacing() const", AS_METHODPR(UIElement, GetIndentSpacing, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetIndentWidth() const", "int GetIndentWidth() const", AS_METHODPR(UIElement, GetIndentWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int UIElement::GetIndentWidth() const", "int get_indentWidth() const", AS_METHODPR(UIElement, GetIndentWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetChildOffset(const IntVector2& offset)", "void SetChildOffset(const IntVector2&in)", AS_METHODPR(UIElement, SetChildOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetHovering(bool enable)", "void SetHovering(bool)", AS_METHODPR(UIElement, SetHovering, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::AdjustScissor(IntRect& currentScissor)", "void AdjustScissor(IntRect&)", AS_METHODPR(UIElement, AdjustScissor, (IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& UIElement::GetColorAttr() const", "const Color& GetColorAttr() const", AS_METHODPR(UIElement, GetColorAttr, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TraversalMode UIElement::GetTraversalMode() const", "TraversalMode GetTraversalMode() const", AS_METHODPR(UIElement, GetTraversalMode, () const, TraversalMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TraversalMode UIElement::GetTraversalMode() const", "TraversalMode get_traversalMode() const", AS_METHODPR(UIElement, GetTraversalMode, () const, TraversalMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsElementEventSender() const", "bool IsElementEventSender() const", AS_METHODPR(UIElement, IsElementEventSender, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool UIElement::IsElementEventSender() const", "bool get_elementEventSender() const", AS_METHODPR(UIElement, IsElementEventSender, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* UIElement::GetElementEventSender() const", "UIElement@+ GetElementEventSender() const", AS_METHODPR(UIElement, GetElementEventSender, () const, UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 UIElement::GetEffectiveMinSize() const", "IntVector2 GetEffectiveMinSize() const", AS_METHODPR(UIElement, GetEffectiveMinSize, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UIElement::SetRenderTexture(Texture2D* texture)", "void SetRenderTexture(Texture2D@+)", AS_METHODPR(UIElement, SetRenderTexture, (Texture2D*), void), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void UIElement::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(UIElement_RegisterObject_Context), AS_CALL_CDECL));
}

// class UISelectable | File: ../UI/UISelectable.h
void CollectMembers_UISelectable(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_UIElement(methods, staticMethods, fields, staticFields);

    Remove(methods, "explicit UIElement::UIElement(Context* context)");
    Remove(methods, "virtual void UIElement::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor)");

    Remove(staticMethods, "static void UIElement::RegisterObject(Context* context)");

    // void UISelectable::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind
    // UISelectable::URHO3D_OBJECT(UISelectable, UIElement)
    // Error: type "" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void UISelectable::SetSelectionColor(const Color& color)", "void SetSelectionColor(const Color&in)", AS_METHODPR(UISelectable, SetSelectionColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UISelectable::SetSelectionColor(const Color& color)", "void set_selectionColor(const Color&in)", AS_METHODPR(UISelectable, SetSelectionColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UISelectable::SetHoverColor(const Color& color)", "void SetHoverColor(const Color&in)", AS_METHODPR(UISelectable, SetHoverColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void UISelectable::SetHoverColor(const Color& color)", "void set_hoverColor(const Color&in)", AS_METHODPR(UISelectable, SetHoverColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& UISelectable::GetSelectionColor() const", "const Color& GetSelectionColor() const", AS_METHODPR(UISelectable, GetSelectionColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& UISelectable::GetSelectionColor() const", "const Color& get_selectionColor() const", AS_METHODPR(UISelectable, GetSelectionColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& UISelectable::GetHoverColor() const", "const Color& GetHoverColor() const", AS_METHODPR(UISelectable, GetHoverColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& UISelectable::GetHoverColor() const", "const Color& get_hoverColor() const", AS_METHODPR(UISelectable, GetHoverColor, () const, const Color&), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void UISelectable::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(UISelectable_RegisterObject_Context), AS_CALL_CDECL));
}

// class View3D | File: ../UI/View3D.h
void CollectMembers_View3D(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Window(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual void UIElement::OnResize(const IntVector2& newSize, const IntVector2& delta)");

    Remove(staticMethods, "static void Window::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void View3D::OnResize(const IntVector2& newSize, const IntVector2& delta) override", "void OnResize(const IntVector2&in, const IntVector2&in)", AS_METHODPR(View3D, OnResize, (const IntVector2&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void View3D::SetView(Scene* scene, Camera* camera, bool ownScene=true)", "void SetView(Scene@+, Camera@+, bool = true)", AS_METHODPR(View3D, SetView, (Scene*, Camera*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void View3D::SetFormat(unsigned format)", "void SetFormat(uint)", AS_METHODPR(View3D, SetFormat, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void View3D::SetFormat(unsigned format)", "void set_format(uint)", AS_METHODPR(View3D, SetFormat, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void View3D::SetAutoUpdate(bool enable)", "void SetAutoUpdate(bool)", AS_METHODPR(View3D, SetAutoUpdate, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void View3D::SetAutoUpdate(bool enable)", "void set_autoUpdate(bool)", AS_METHODPR(View3D, SetAutoUpdate, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void View3D::QueueUpdate()", "void QueueUpdate()", AS_METHODPR(View3D, QueueUpdate, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned View3D::GetFormat() const", "uint GetFormat() const", AS_METHODPR(View3D, GetFormat, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned View3D::GetFormat() const", "uint get_format() const", AS_METHODPR(View3D, GetFormat, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool View3D::GetAutoUpdate() const", "bool GetAutoUpdate() const", AS_METHODPR(View3D, GetAutoUpdate, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool View3D::GetAutoUpdate() const", "bool get_autoUpdate() const", AS_METHODPR(View3D, GetAutoUpdate, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Scene* View3D::GetScene() const", "Scene@+ GetScene() const", AS_METHODPR(View3D, GetScene, () const, Scene*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Scene* View3D::GetScene() const", "Scene@+ get_scene() const", AS_METHODPR(View3D, GetScene, () const, Scene*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* View3D::GetCameraNode() const", "Node@+ GetCameraNode() const", AS_METHODPR(View3D, GetCameraNode, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* View3D::GetCameraNode() const", "Node@+ get_cameraNode() const", AS_METHODPR(View3D, GetCameraNode, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture2D* View3D::GetRenderTexture() const", "Texture2D@+ GetRenderTexture() const", AS_METHODPR(View3D, GetRenderTexture, () const, Texture2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture2D* View3D::GetRenderTexture() const", "Texture2D@+ get_renderTexture() const", AS_METHODPR(View3D, GetRenderTexture, () const, Texture2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture2D* View3D::GetDepthTexture() const", "Texture2D@+ GetDepthTexture() const", AS_METHODPR(View3D, GetDepthTexture, () const, Texture2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture2D* View3D::GetDepthTexture() const", "Texture2D@+ get_depthTexture() const", AS_METHODPR(View3D, GetDepthTexture, () const, Texture2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Viewport* View3D::GetViewport() const", "Viewport@+ GetViewport() const", AS_METHODPR(View3D, GetViewport, () const, Viewport*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Viewport* View3D::GetViewport() const", "Viewport@+ get_viewport() const", AS_METHODPR(View3D, GetViewport, () const, Viewport*), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void View3D::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(View3D_RegisterObject_Context), AS_CALL_CDECL));
}

// class Window | File: ../UI/Window.h
void CollectMembers_Window(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_BorderImage(methods, staticMethods, fields, staticFields);

    Remove(methods, "virtual void UIElement::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnDragCancel(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags cancelButtons, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnDragEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "virtual void UIElement::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor)");
    Remove(methods, "void BorderImage::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override");

    Remove(staticMethods, "static void BorderImage::RegisterObject(Context* context)");

    // void Window::GetBatches(PODVector<UIBatch>& batches, PODVector<float>& vertexData, const IntRect& currentScissor) override
    // Error: type "PODVector<UIBatch>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void Window::OnHover(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnHover(const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(Window, OnHover, (const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::OnDragBegin(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnDragBegin(const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(Window, OnDragBegin, (const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::OnDragMove(const IntVector2& position, const IntVector2& screenPosition, const IntVector2& deltaPos, MouseButtonFlags buttons, QualifierFlags qualifiers, Cursor* cursor) override", "void OnDragMove(const IntVector2&in, const IntVector2&in, const IntVector2&in, MouseButtonFlags, QualifierFlags, Cursor@+)", AS_METHODPR(Window, OnDragMove, (const IntVector2&, const IntVector2&, const IntVector2&, MouseButtonFlags, QualifierFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::OnDragEnd(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags releaseButtons, Cursor* cursor) override", "void OnDragEnd(const IntVector2&in, const IntVector2&in, MouseButtonFlags, MouseButtonFlags, Cursor@+)", AS_METHODPR(Window, OnDragEnd, (const IntVector2&, const IntVector2&, MouseButtonFlags, MouseButtonFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::OnDragCancel(const IntVector2& position, const IntVector2& screenPosition, MouseButtonFlags dragButtons, MouseButtonFlags cancelButtons, Cursor* cursor) override", "void OnDragCancel(const IntVector2&in, const IntVector2&in, MouseButtonFlags, MouseButtonFlags, Cursor@+)", AS_METHODPR(Window, OnDragCancel, (const IntVector2&, const IntVector2&, MouseButtonFlags, MouseButtonFlags, Cursor*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetMovable(bool enable)", "void SetMovable(bool)", AS_METHODPR(Window, SetMovable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetMovable(bool enable)", "void set_movable(bool)", AS_METHODPR(Window, SetMovable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetResizable(bool enable)", "void SetResizable(bool)", AS_METHODPR(Window, SetResizable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetResizable(bool enable)", "void set_resizable(bool)", AS_METHODPR(Window, SetResizable, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetFixedWidthResizing(bool enable)", "void SetFixedWidthResizing(bool)", AS_METHODPR(Window, SetFixedWidthResizing, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetFixedWidthResizing(bool enable)", "void set_fixedWidthResizing(bool)", AS_METHODPR(Window, SetFixedWidthResizing, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetFixedHeightResizing(bool enable)", "void SetFixedHeightResizing(bool)", AS_METHODPR(Window, SetFixedHeightResizing, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetFixedHeightResizing(bool enable)", "void set_fixedHeightResizing(bool)", AS_METHODPR(Window, SetFixedHeightResizing, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetResizeBorder(const IntRect& rect)", "void SetResizeBorder(const IntRect&in)", AS_METHODPR(Window, SetResizeBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetResizeBorder(const IntRect& rect)", "void set_resizeBorder(const IntRect&in)", AS_METHODPR(Window, SetResizeBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetModal(bool modal)", "void SetModal(bool)", AS_METHODPR(Window, SetModal, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetModal(bool modal)", "void set_modal(bool)", AS_METHODPR(Window, SetModal, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetModalShadeColor(const Color& color)", "void SetModalShadeColor(const Color&in)", AS_METHODPR(Window, SetModalShadeColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetModalShadeColor(const Color& color)", "void set_modalShadeColor(const Color&in)", AS_METHODPR(Window, SetModalShadeColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetModalFrameColor(const Color& color)", "void SetModalFrameColor(const Color&in)", AS_METHODPR(Window, SetModalFrameColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetModalFrameColor(const Color& color)", "void set_modalFrameColor(const Color&in)", AS_METHODPR(Window, SetModalFrameColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetModalFrameSize(const IntVector2& size)", "void SetModalFrameSize(const IntVector2&in)", AS_METHODPR(Window, SetModalFrameSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetModalFrameSize(const IntVector2& size)", "void set_modalFrameSize(const IntVector2&in)", AS_METHODPR(Window, SetModalFrameSize, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetModalAutoDismiss(bool enable)", "void SetModalAutoDismiss(bool)", AS_METHODPR(Window, SetModalAutoDismiss, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Window::SetModalAutoDismiss(bool enable)", "void set_modalAutoDismiss(bool)", AS_METHODPR(Window, SetModalAutoDismiss, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::IsMovable() const", "bool IsMovable() const", AS_METHODPR(Window, IsMovable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::IsMovable() const", "bool get_movable() const", AS_METHODPR(Window, IsMovable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::IsResizable() const", "bool IsResizable() const", AS_METHODPR(Window, IsResizable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::IsResizable() const", "bool get_resizable() const", AS_METHODPR(Window, IsResizable, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::GetFixedWidthResizing() const", "bool GetFixedWidthResizing() const", AS_METHODPR(Window, GetFixedWidthResizing, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::GetFixedWidthResizing() const", "bool get_fixedWidthResizing() const", AS_METHODPR(Window, GetFixedWidthResizing, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::GetFixedHeightResizing() const", "bool GetFixedHeightResizing() const", AS_METHODPR(Window, GetFixedHeightResizing, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::GetFixedHeightResizing() const", "bool get_fixedHeightResizing() const", AS_METHODPR(Window, GetFixedHeightResizing, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& Window::GetResizeBorder() const", "const IntRect& GetResizeBorder() const", AS_METHODPR(Window, GetResizeBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& Window::GetResizeBorder() const", "const IntRect& get_resizeBorder() const", AS_METHODPR(Window, GetResizeBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::IsModal() const", "bool IsModal() const", AS_METHODPR(Window, IsModal, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::IsModal() const", "bool get_modal() const", AS_METHODPR(Window, IsModal, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Window::GetModalShadeColor() const", "const Color& GetModalShadeColor() const", AS_METHODPR(Window, GetModalShadeColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Window::GetModalShadeColor() const", "const Color& get_modalShadeColor() const", AS_METHODPR(Window, GetModalShadeColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Window::GetModalFrameColor() const", "const Color& GetModalFrameColor() const", AS_METHODPR(Window, GetModalFrameColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& Window::GetModalFrameColor() const", "const Color& get_modalFrameColor() const", AS_METHODPR(Window, GetModalFrameColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Window::GetModalFrameSize() const", "const IntVector2& GetModalFrameSize() const", AS_METHODPR(Window, GetModalFrameSize, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Window::GetModalFrameSize() const", "const IntVector2& get_modalFrameSize() const", AS_METHODPR(Window, GetModalFrameSize, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::GetModalAutoDismiss() const", "bool GetModalAutoDismiss() const", AS_METHODPR(Window, GetModalAutoDismiss, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Window::GetModalAutoDismiss() const", "bool get_modalAutoDismiss() const", AS_METHODPR(Window, GetModalAutoDismiss, () const, bool), AS_CALL_THISCALL));

    methods.Push(RegisterGlobalFunctionArgs("static void Window::RegisterObject(Context* context)", "void RegisterObject()", AS_FUNCTION(Window_RegisterObject_Context), AS_CALL_CDECL));
}

} // namespace Urho3D
