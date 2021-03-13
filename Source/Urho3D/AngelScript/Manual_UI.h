//
// Copyright (c) 2008-2020 the Urho3D project.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//

#pragma once

#include "../UI/Font.h"
#include "../UI/ListView.h"
#include "../UI/DropDownList.h"
#include "../UI/FileSelector.h"
#include "../UI/UI.h"

namespace Urho3D
{

// bool Font::SaveXML(Serializer& dest, int pointSize, bool usedGlyphs = false, const String& indentation = "\t") | File: ../UI/Font.h
bool Font_SaveXML_File(File* file, int pointSize, bool usedGlyphs, const String& indentation, Font* ptr);
bool Font_SaveXML_VectorBuffer(VectorBuffer& buffer, int pointSize, bool usedGlyphs, const String& indentation, Font* ptr);
bool Font_SaveXML_FileName(const String& fileName, int pointSize, bool usedGlyphs, const String& indentation, Font* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Font() \
    members.methods_.Push(RegisterObjectMethodArgs("bool Font::SaveXML(Serializer& dest, int pointSize, bool usedGlyphs = false, const String& indentation = \"\t\")", "bool SaveXML(File@+, int, bool usedGlyphs = false, const String&in indentation = \"\t\")", AS_FUNCTION_OBJLAST(Font_SaveXML_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Font::SaveXML(Serializer& dest, int pointSize, bool usedGlyphs = false, const String& indentation = \"\t\")", "bool SaveXML(VectorBuffer&, int, bool usedGlyphs = false, const String&in indentation = \"\t\")", AS_FUNCTION_OBJLAST(Font_SaveXML_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Font::SaveXML(Serializer& dest, int pointSize, bool usedGlyphs = false, const String& indentation = \"\t\")", "bool SaveXML(const String&in, int, bool usedGlyphs = false, const String&in indentation = \"\t\")", AS_FUNCTION_OBJLAST(Font_SaveXML_FileName), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

#define REGISTER_CLASS_MANUAL_PART_UIElement() \
    RegisterNamedObjectConstructor<UIElement>(engine, "UIElement");

// bool UIElement::LoadXML(Deserializer& source) | File: ../UI/UIElement.h
bool UIElement_LoadXML_File(File* file, UIElement* ptr);
bool UIElement_LoadXML_VectorBuffer(VectorBuffer& buffer, UIElement* ptr);

// bool UIElement::LoadXML(const XMLElement& source) override | File: ../UI/UIElement.h
bool UIElement_LoadXML_XMLFile(XMLFile* file, XMLFile* styleFile, UIElement* ptr);

// virtual UIElement* UIElement::LoadChildXML(const XMLElement& childElem, XMLFile* styleFile) | File: ../UI/UIElement.h
UIElement* UIElement_LoadChildXML(XMLFile* file, XMLFile* styleFile, UIElement* ptr);

// bool UIElement::SaveXML(Serializer& dest, const String& indentation = "\t") const | File: ../UI/UIElement.h
bool UIElement_SaveXML_File(File* file, const String& indentation, UIElement* ptr);
bool UIElement_SaveXML_VectorBuffer(VectorBuffer& buffer, const String& indentation, UIElement* ptr);

// void UIElement::RemoveChildAtIndex(unsigned index) | File: ../UI/UIElement.h
void UIElement_RemoveChild(unsigned index, UIElement* ptr);

// bool UIElement::SetStyle(const String& styleName, XMLFile* file = nullptr) | File: ../UI/UIElement.h
void UIElement_SetStyle(const String& styleName, UIElement* ptr);

// unsigned UIElement::GetNumChildren(bool recursive = false) const | File: ../UI/UIElement.h
unsigned UIElement_GetNumChildren_NonRecursive(UIElement* ptr);
unsigned UIElement_GetNumChildren_Recursive(UIElement* ptr);

// void UIElement::SetParent(UIElement* parent, unsigned index = M_MAX_UNSIGNED) | File: ../UI/UIElement.h
void UIElement_SetParent(UIElement* parent, UIElement* ptr);

// XMLFile* UIElement::GetDefaultStyle(bool recursiveUp = true) const | File: ../UI/UIElement.h
XMLFile* UIElement_GetDefaultStyle(UIElement* ptr);

// const VariantMap& UIElement::GetVars() const | File: ../UI/UIElement.h
VariantMap& UIElement_GetVars(UIElement* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_UIElement() \
    members.methods_.Push(RegisterObjectMethodArgs("bool UIElement::LoadXML(Deserializer& source)", "bool LoadXML(File@+)", AS_FUNCTION_OBJLAST(UIElement_LoadXML_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool UIElement::LoadXML(Deserializer& source)", "bool LoadXML(VectorBuffer&)", AS_FUNCTION_OBJLAST(UIElement_LoadXML_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool UIElement::LoadXML(const XMLElement& source) override", "bool LoadXML(XMLFile@+, XMLFile@+)", AS_FUNCTION_OBJLAST(UIElement_LoadXML_XMLFile), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("virtual UIElement* UIElement::LoadChildXML(const XMLElement& childElem, XMLFile* styleFile)", "UIElement@+ LoadChildXML(XMLFile@+, XMLFile@+)", AS_FUNCTION_OBJLAST(UIElement_LoadChildXML), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool UIElement::SaveXML(Serializer& dest, const String& indentation = \"\t\") const", "bool SaveXML(File@+, const String&in indentation = \"\t\")", AS_FUNCTION_OBJLAST(UIElement_SaveXML_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool UIElement::SaveXML(Serializer& dest, const String& indentation = \"\t\") const", "bool SaveXML(VectorBuffer&, const String&in indentation = \"\t\")", AS_FUNCTION_OBJLAST(UIElement_SaveXML_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void UIElement::RemoveChildAtIndex(unsigned index)", "void RemoveChild(uint)", AS_FUNCTION_OBJLAST(UIElement_RemoveChild), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool UIElement::SetStyle(const String& styleName, XMLFile* file = nullptr)", "void set_style(const String&in)", AS_FUNCTION_OBJLAST(UIElement_SetStyle), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("unsigned UIElement::GetNumChildren(bool recursive = false) const", "uint get_numChildren() const", AS_FUNCTION_OBJLAST(UIElement_GetNumChildren_NonRecursive), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("unsigned UIElement::GetNumChildren(bool recursive = false) const", "uint get_numAllChildren() const", AS_FUNCTION_OBJLAST(UIElement_GetNumChildren_Recursive), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void UIElement::SetParent(UIElement* parent, unsigned index = M_MAX_UNSIGNED)", "void set_parent(UIElement@+)", AS_FUNCTION_OBJLAST(UIElement_SetParent), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("XMLFile* UIElement::GetDefaultStyle(bool recursiveUp = true) const", "XMLFile@+ get_defaultStyle() const", AS_FUNCTION_OBJLAST(UIElement_GetDefaultStyle), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("const VariantMap& UIElement::GetVars() const", "VariantMap& get_vars()", AS_FUNCTION_OBJLAST(UIElement_GetVars), AS_CALL_CDECL_OBJLAST));

// ========================================================================================

// SharedPtr<UIElement> UI::LoadLayout(Deserializer& source, XMLFile* styleFile = nullptr) | File: ../UI/UI.h
UIElement* UI_LoadLayout_File(File* file, UI* ptr);
UIElement* UI_LoadLayout_VectorBuffer(VectorBuffer& buffer, UI* ptr);
UIElement* UI_LoadLayout_File_Style(File* file, XMLFile* styleFile, UI* ptr);
UIElement* UI_LoadLayout_VectorBuffer_Style(VectorBuffer& buffer, XMLFile* styleFile, UI* ptr);

// bool UI::SaveLayout(Serializer& dest, UIElement* element) | File: ../UI/UI.h
bool UI_SaveLayout_File(File* file, UIElement* element, UI* ptr);
bool UI_SaveLayout_VectorBuffer(VectorBuffer& buffer, UIElement* element, UI* ptr);

// const Vector<UIElement*> UI::GetDragElements() | File: ../UI/UI.h
CScriptArray* UI_GetDragElements(UI* ptr);

// void UI::SetFocusElement(UIElement* element, bool byKey = false) | File: ../UI/UI.h
void UI_SetFocusElement(UIElement* element, UI* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_UI() \
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<UIElement> UI::LoadLayout(Deserializer& source, XMLFile* styleFile = nullptr)", "UIElement@ LoadLayout(File@+)", AS_FUNCTION_OBJLAST(UI_LoadLayout_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<UIElement> UI::LoadLayout(Deserializer& source, XMLFile* styleFile = nullptr)", "UIElement@ LoadLayout(File@+, XMLFile@+)", AS_FUNCTION_OBJLAST(UI_LoadLayout_File_Style), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<UIElement> UI::LoadLayout(Deserializer& source, XMLFile* styleFile = nullptr)", "UIElement@ LoadLayout(VectorBuffer&)", AS_FUNCTION_OBJLAST(UI_LoadLayout_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("SharedPtr<UIElement> UI::LoadLayout(Deserializer& source, XMLFile* styleFile = nullptr)", "UIElement@ LoadLayout(VectorBuffer&, XMLFile@+)", AS_FUNCTION_OBJLAST(UI_LoadLayout_VectorBuffer_Style), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool UI::SaveLayout(Serializer& dest, UIElement* element)", "bool SaveLayout(File@+, UIElement@+)", AS_FUNCTION_OBJLAST(UI_SaveLayout_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool UI::SaveLayout(Serializer& dest, UIElement* element)", "bool SaveLayout(VectorBuffer&, UIElement@+)", AS_FUNCTION_OBJLAST(UI_SaveLayout_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("const Vector<UIElement*> UI::GetDragElements()", "const Array<UIElement@>@ GetDragElements()", AS_FUNCTION_OBJLAST(UI_GetDragElements), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void UI::SetFocusElement(UIElement* element, bool byKey = false)", "void set_focusElement(UIElement@+)", AS_FUNCTION_OBJLAST(UI_SetFocusElement), AS_CALL_CDECL_OBJLAST));

}
