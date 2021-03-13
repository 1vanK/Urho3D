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

#include "../Input/Input.h"

namespace Urho3D
{

// bool Input::SaveGestures(Serializer& dest) | File: ../Input/Input.h
bool Input_SaveGestures_File(File* file, Input* ptr);
bool Input_SaveGestures_VectorBuffer(VectorBuffer& buffer, Input* ptr);

// bool Input::SaveGesture(Serializer& dest, unsigned gestureID) | File: ../Input/Input.h
bool Input_SaveGesture_File(File* file, unsigned gestureID, Input* ptr);
bool Input_SaveGesture_VectorBuffer(VectorBuffer& buffer, unsigned gestureID, Input* ptr);

// unsigned Input::LoadGestures(Deserializer& source) | File: ../Input/Input.h
unsigned Input_LoadGestures_File(File* file, Input* ptr);
unsigned Input_LoadGestures_VectorBuffer(VectorBuffer& buffer, Input* ptr);

// void Input::SetMouseGrabbed(bool grab, bool suppressEvent = false) | File: ../Input/Input.h
void Input_SetMouseGrabbed(bool enable, Input* ptr);

// void Input::SetMouseMode(MouseMode mode, bool suppressEvent = false) | File: ../Input/Input.h
void Input_SetMouseMode(MouseMode mode, Input* ptr);

// void Input::SetMouseVisible(bool enable, bool suppressEvent = false) | File: ../Input/Input.h
void Input_SetMouseVisible(bool enable, Input* ptr);

#define REGISTER_MEMBERS_MANUAL_PART_Input() \
    members.methods_.Push(RegisterObjectMethodArgs("bool Input::SaveGestures(Serializer& dest)", "bool SaveGestures(File@+)", AS_FUNCTION_OBJLAST(Input_SaveGestures_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Input::SaveGestures(Serializer& dest)", "bool SaveGestures(VectorBuffer&)", AS_FUNCTION_OBJLAST(Input_SaveGestures_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Input::SaveGesture(Serializer& dest, unsigned gestureID)", "bool SaveGesture(File@+, uint)", AS_FUNCTION_OBJLAST(Input_SaveGesture_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("bool Input::SaveGesture(Serializer& dest, unsigned gestureID)", "bool SaveGesture(VectorBuffer&, uint)", AS_FUNCTION_OBJLAST(Input_SaveGesture_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Input::LoadGestures(Deserializer& source)", "uint LoadGestures(File@+)", AS_FUNCTION_OBJLAST(Input_LoadGestures_File), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Input::LoadGestures(Deserializer& source)", "uint LoadGestures(VectorBuffer&)", AS_FUNCTION_OBJLAST(Input_LoadGestures_VectorBuffer), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Input::SetMouseGrabbed(bool grab, bool suppressEvent = false)", "void set_mouseGrabbed(bool)", AS_FUNCTION_OBJLAST(Input_SetMouseGrabbed), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Input::SetMouseMode(MouseMode mode, bool suppressEvent = false)", "void set_mouseMode(MouseMode)", AS_FUNCTION_OBJLAST(Input_SetMouseMode), AS_CALL_CDECL_OBJLAST)); \
    members.methods_.Push(RegisterObjectMethodArgs("void Input::SetMouseVisible(bool enable, bool suppressEvent = false)", "void set_mouseVisible(bool)", AS_FUNCTION_OBJLAST(Input_SetMouseVisible), AS_CALL_CDECL_OBJLAST));

}
