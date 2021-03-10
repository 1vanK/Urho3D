// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// class Controls | File: ../Input/Controls.h
void CollectMembers_Controls(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("void Controls::Reset()", "void Reset()", AS_METHODPR(Controls, Reset, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Controls::Set(unsigned buttons, bool down=true)", "void Set(uint, bool = true)", AS_METHODPR(Controls, Set, (unsigned, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Controls::IsDown(unsigned button) const", "bool IsDown(uint) const", AS_METHODPR(Controls, IsDown, (unsigned) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Controls::IsPressed(unsigned button, const Controls& previousControls) const", "bool IsPressed(uint, const Controls&in) const", AS_METHODPR(Controls, IsPressed, (unsigned, const Controls&) const, bool), AS_CALL_THISCALL));

    fields.Push(RegisterObjectPropertyArgs("unsigned Controls::buttons_", "uint buttons", offsetof(Controls, buttons_)));
    fields.Push(RegisterObjectPropertyArgs("float Controls::yaw_", "float yaw", offsetof(Controls, yaw_)));
    fields.Push(RegisterObjectPropertyArgs("float Controls::pitch_", "float pitch", offsetof(Controls, pitch_)));
    fields.Push(RegisterObjectPropertyArgs("VariantMap Controls::extraData_", "VariantMap extraData", offsetof(Controls, extraData_)));

    #ifdef REGISTER_MEMBER_MANUAL_PART_Controls
        REGISTER_MEMBER_MANUAL_PART_Controls();
    #endif
}

// class Input | File: ../Input/Input.h
void CollectMembers_Input(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Object(methods, staticMethods, fields, wrappedFields, staticFields);

    methods.Push(RegisterObjectMethodArgs("void Input::Update()", "void Update()", AS_METHODPR(Input, Update, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetToggleFullscreen(bool enable)", "void SetToggleFullscreen(bool)", AS_METHODPR(Input, SetToggleFullscreen, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetToggleFullscreen(bool enable)", "void set_toggleFullscreen(bool)", AS_METHODPR(Input, SetToggleFullscreen, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetMouseVisible(bool enable, bool suppressEvent=false)", "void SetMouseVisible(bool, bool = false)", AS_METHODPR(Input, SetMouseVisible, (bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::ResetMouseVisible()", "void ResetMouseVisible()", AS_METHODPR(Input, ResetMouseVisible, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetMouseGrabbed(bool grab, bool suppressEvent=false)", "void SetMouseGrabbed(bool, bool = false)", AS_METHODPR(Input, SetMouseGrabbed, (bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::ResetMouseGrabbed()", "void ResetMouseGrabbed()", AS_METHODPR(Input, ResetMouseGrabbed, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetMouseMode(MouseMode mode, bool suppressEvent=false)", "void SetMouseMode(MouseMode, bool = false)", AS_METHODPR(Input, SetMouseMode, (MouseMode, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::ResetMouseMode()", "void ResetMouseMode()", AS_METHODPR(Input, ResetMouseMode, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SDL_JoystickID Input::AddScreenJoystick(XMLFile* layoutFile=nullptr, XMLFile* styleFile=nullptr)", "SDL_JoystickID AddScreenJoystick(XMLFile@+ = null, XMLFile@+ = null)", AS_METHODPR(Input, AddScreenJoystick, (XMLFile*, XMLFile*), SDL_JoystickID), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::RemoveScreenJoystick(SDL_JoystickID id)", "bool RemoveScreenJoystick(SDL_JoystickID)", AS_METHODPR(Input, RemoveScreenJoystick, (SDL_JoystickID), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetScreenJoystickVisible(SDL_JoystickID id, bool enable)", "void SetScreenJoystickVisible(SDL_JoystickID, bool)", AS_METHODPR(Input, SetScreenJoystickVisible, (SDL_JoystickID, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetScreenJoystickVisible(SDL_JoystickID id, bool enable)", "void set_screenJoystickVisible(SDL_JoystickID, bool)", AS_METHODPR(Input, SetScreenJoystickVisible, (SDL_JoystickID, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetScreenKeyboardVisible(bool enable)", "void SetScreenKeyboardVisible(bool)", AS_METHODPR(Input, SetScreenKeyboardVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetScreenKeyboardVisible(bool enable)", "void set_screenKeyboardVisible(bool)", AS_METHODPR(Input, SetScreenKeyboardVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetTouchEmulation(bool enable)", "void SetTouchEmulation(bool)", AS_METHODPR(Input, SetTouchEmulation, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetTouchEmulation(bool enable)", "void set_touchEmulation(bool)", AS_METHODPR(Input, SetTouchEmulation, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::RecordGesture()", "bool RecordGesture()", AS_METHODPR(Input, RecordGesture, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::SaveGestures(Serializer& dest)", "bool SaveGestures(Serializer&)", AS_METHODPR(Input, SaveGestures, (Serializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::SaveGesture(Serializer& dest, unsigned gestureID)", "bool SaveGesture(Serializer&, uint)", AS_METHODPR(Input, SaveGesture, (Serializer&, unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Input::LoadGestures(Deserializer& source)", "uint LoadGestures(Deserializer&)", AS_METHODPR(Input, LoadGestures, (Deserializer&), unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::RemoveGesture(unsigned gestureID)", "bool RemoveGesture(uint)", AS_METHODPR(Input, RemoveGesture, (unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::RemoveAllGestures()", "void RemoveAllGestures()", AS_METHODPR(Input, RemoveAllGestures, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetMousePosition(const IntVector2& position)", "void SetMousePosition(const IntVector2&in)", AS_METHODPR(Input, SetMousePosition, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::SetMousePosition(const IntVector2& position)", "void set_mousePosition(const IntVector2&in)", AS_METHODPR(Input, SetMousePosition, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Input::CenterMousePosition()", "void CenterMousePosition()", AS_METHODPR(Input, CenterMousePosition, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Key Input::GetKeyFromName(const String& name) const", "Key GetKeyFromName(const String&in) const", AS_METHODPR(Input, GetKeyFromName, (const String&) const, Key), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Key Input::GetKeyFromScancode(Scancode scancode) const", "Key GetKeyFromScancode(Scancode) const", AS_METHODPR(Input, GetKeyFromScancode, (Scancode) const, Key), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Input::GetKeyName(Key key) const", "String GetKeyName(Key) const", AS_METHODPR(Input, GetKeyName, (Key) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Scancode Input::GetScancodeFromKey(Key key) const", "Scancode GetScancodeFromKey(Key) const", AS_METHODPR(Input, GetScancodeFromKey, (Key) const, Scancode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Scancode Input::GetScancodeFromName(const String& name) const", "Scancode GetScancodeFromName(const String&in) const", AS_METHODPR(Input, GetScancodeFromName, (const String&) const, Scancode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String Input::GetScancodeName(Scancode scancode) const", "String GetScancodeName(Scancode) const", AS_METHODPR(Input, GetScancodeName, (Scancode) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetKeyDown(Key key) const", "bool GetKeyDown(Key) const", AS_METHODPR(Input, GetKeyDown, (Key) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetKeyDown(Key key) const", "bool get_keyDown(Key) const", AS_METHODPR(Input, GetKeyDown, (Key) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetKeyPress(Key key) const", "bool GetKeyPress(Key) const", AS_METHODPR(Input, GetKeyPress, (Key) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetKeyPress(Key key) const", "bool get_keyPress(Key) const", AS_METHODPR(Input, GetKeyPress, (Key) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetScancodeDown(Scancode scancode) const", "bool GetScancodeDown(Scancode) const", AS_METHODPR(Input, GetScancodeDown, (Scancode) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetScancodeDown(Scancode scancode) const", "bool get_scancodeDown(Scancode) const", AS_METHODPR(Input, GetScancodeDown, (Scancode) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetScancodePress(Scancode scancode) const", "bool GetScancodePress(Scancode) const", AS_METHODPR(Input, GetScancodePress, (Scancode) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetScancodePress(Scancode scancode) const", "bool get_scancodePress(Scancode) const", AS_METHODPR(Input, GetScancodePress, (Scancode) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetMouseButtonDown(MouseButtonFlags button) const", "bool GetMouseButtonDown(MouseButtonFlags) const", AS_METHODPR(Input, GetMouseButtonDown, (MouseButtonFlags) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetMouseButtonDown(MouseButtonFlags button) const", "bool get_mouseButtonDown(MouseButtonFlags) const", AS_METHODPR(Input, GetMouseButtonDown, (MouseButtonFlags) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetMouseButtonPress(MouseButtonFlags button) const", "bool GetMouseButtonPress(MouseButtonFlags) const", AS_METHODPR(Input, GetMouseButtonPress, (MouseButtonFlags) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetMouseButtonPress(MouseButtonFlags button) const", "bool get_mouseButtonPress(MouseButtonFlags) const", AS_METHODPR(Input, GetMouseButtonPress, (MouseButtonFlags) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetQualifierDown(Qualifier qualifier) const", "bool GetQualifierDown(Qualifier) const", AS_METHODPR(Input, GetQualifierDown, (Qualifier) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetQualifierDown(Qualifier qualifier) const", "bool get_qualifierDown(Qualifier) const", AS_METHODPR(Input, GetQualifierDown, (Qualifier) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetQualifierPress(Qualifier qualifier) const", "bool GetQualifierPress(Qualifier) const", AS_METHODPR(Input, GetQualifierPress, (Qualifier) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetQualifierPress(Qualifier qualifier) const", "bool get_qualifierPress(Qualifier) const", AS_METHODPR(Input, GetQualifierPress, (Qualifier) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("QualifierFlags Input::GetQualifiers() const", "QualifierFlags GetQualifiers() const", AS_METHODPR(Input, GetQualifiers, () const, QualifierFlags), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("QualifierFlags Input::GetQualifiers() const", "QualifierFlags get_qualifiers() const", AS_METHODPR(Input, GetQualifiers, () const, QualifierFlags), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 Input::GetMousePosition() const", "IntVector2 GetMousePosition() const", AS_METHODPR(Input, GetMousePosition, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 Input::GetMousePosition() const", "IntVector2 get_mousePosition() const", AS_METHODPR(Input, GetMousePosition, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 Input::GetMouseMove() const", "IntVector2 GetMouseMove() const", AS_METHODPR(Input, GetMouseMove, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("IntVector2 Input::GetMouseMove() const", "IntVector2 get_mouseMove() const", AS_METHODPR(Input, GetMouseMove, () const, IntVector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Input::GetMouseMoveX() const", "int GetMouseMoveX() const", AS_METHODPR(Input, GetMouseMoveX, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Input::GetMouseMoveX() const", "int get_mouseMoveX() const", AS_METHODPR(Input, GetMouseMoveX, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Input::GetMouseMoveY() const", "int GetMouseMoveY() const", AS_METHODPR(Input, GetMouseMoveY, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Input::GetMouseMoveY() const", "int get_mouseMoveY() const", AS_METHODPR(Input, GetMouseMoveY, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Input::GetMouseMoveWheel() const", "int GetMouseMoveWheel() const", AS_METHODPR(Input, GetMouseMoveWheel, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Input::GetMouseMoveWheel() const", "int get_mouseMoveWheel() const", AS_METHODPR(Input, GetMouseMoveWheel, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Input::GetInputScale() const", "Vector2 GetInputScale() const", AS_METHODPR(Input, GetInputScale, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 Input::GetInputScale() const", "Vector2 get_inputScale() const", AS_METHODPR(Input, GetInputScale, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Input::GetNumTouches() const", "uint GetNumTouches() const", AS_METHODPR(Input, GetNumTouches, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Input::GetNumTouches() const", "uint get_numTouches() const", AS_METHODPR(Input, GetNumTouches, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TouchState* Input::GetTouch(unsigned index) const", "TouchState@+ GetTouch(uint) const", AS_METHODPR(Input, GetTouch, (unsigned) const, TouchState*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TouchState* Input::GetTouch(unsigned index) const", "TouchState@+ get_touches(uint) const", AS_METHODPR(Input, GetTouch, (unsigned) const, TouchState*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Input::GetNumJoysticks() const", "uint GetNumJoysticks() const", AS_METHODPR(Input, GetNumJoysticks, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Input::GetNumJoysticks() const", "uint get_numJoysticks() const", AS_METHODPR(Input, GetNumJoysticks, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JoystickState* Input::GetJoystick(SDL_JoystickID id)", "JoystickState@+ GetJoystick(SDL_JoystickID)", AS_METHODPR(Input, GetJoystick, (SDL_JoystickID), JoystickState*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JoystickState* Input::GetJoystick(SDL_JoystickID id)", "JoystickState@+ get_joysticks(SDL_JoystickID)", AS_METHODPR(Input, GetJoystick, (SDL_JoystickID), JoystickState*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JoystickState* Input::GetJoystickByIndex(unsigned index)", "JoystickState@+ GetJoystickByIndex(uint)", AS_METHODPR(Input, GetJoystickByIndex, (unsigned), JoystickState*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JoystickState* Input::GetJoystickByIndex(unsigned index)", "JoystickState@+ get_joysticksByIndex(uint)", AS_METHODPR(Input, GetJoystickByIndex, (unsigned), JoystickState*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JoystickState* Input::GetJoystickByName(const String& name)", "JoystickState@+ GetJoystickByName(const String&in)", AS_METHODPR(Input, GetJoystickByName, (const String&), JoystickState*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("JoystickState* Input::GetJoystickByName(const String& name)", "JoystickState@+ get_joysticksByName(const String&in)", AS_METHODPR(Input, GetJoystickByName, (const String&), JoystickState*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetToggleFullscreen() const", "bool GetToggleFullscreen() const", AS_METHODPR(Input, GetToggleFullscreen, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetToggleFullscreen() const", "bool get_toggleFullscreen() const", AS_METHODPR(Input, GetToggleFullscreen, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsScreenJoystickVisible(SDL_JoystickID id) const", "bool IsScreenJoystickVisible(SDL_JoystickID) const", AS_METHODPR(Input, IsScreenJoystickVisible, (SDL_JoystickID) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsScreenJoystickVisible(SDL_JoystickID id) const", "bool get_screenJoystickVisible(SDL_JoystickID) const", AS_METHODPR(Input, IsScreenJoystickVisible, (SDL_JoystickID) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetScreenKeyboardSupport() const", "bool GetScreenKeyboardSupport() const", AS_METHODPR(Input, GetScreenKeyboardSupport, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetScreenKeyboardSupport() const", "bool get_screenKeyboardSupport() const", AS_METHODPR(Input, GetScreenKeyboardSupport, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsScreenKeyboardVisible() const", "bool IsScreenKeyboardVisible() const", AS_METHODPR(Input, IsScreenKeyboardVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsScreenKeyboardVisible() const", "bool get_screenKeyboardVisible() const", AS_METHODPR(Input, IsScreenKeyboardVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetTouchEmulation() const", "bool GetTouchEmulation() const", AS_METHODPR(Input, GetTouchEmulation, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::GetTouchEmulation() const", "bool get_touchEmulation() const", AS_METHODPR(Input, GetTouchEmulation, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsMouseVisible() const", "bool IsMouseVisible() const", AS_METHODPR(Input, IsMouseVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsMouseVisible() const", "bool get_mouseVisible() const", AS_METHODPR(Input, IsMouseVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsMouseGrabbed() const", "bool IsMouseGrabbed() const", AS_METHODPR(Input, IsMouseGrabbed, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsMouseGrabbed() const", "bool get_mouseGrabbed() const", AS_METHODPR(Input, IsMouseGrabbed, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsMouseLocked() const", "bool IsMouseLocked() const", AS_METHODPR(Input, IsMouseLocked, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsMouseLocked() const", "bool get_mouseLocked() const", AS_METHODPR(Input, IsMouseLocked, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("MouseMode Input::GetMouseMode() const", "MouseMode GetMouseMode() const", AS_METHODPR(Input, GetMouseMode, () const, MouseMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("MouseMode Input::GetMouseMode() const", "MouseMode get_mouseMode() const", AS_METHODPR(Input, GetMouseMode, () const, MouseMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::HasFocus()", "bool HasFocus()", AS_METHODPR(Input, HasFocus, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::HasFocus()", "bool get_focus()", AS_METHODPR(Input, HasFocus, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsMinimized() const", "bool IsMinimized() const", AS_METHODPR(Input, IsMinimized, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Input::IsMinimized() const", "bool get_minimized() const", AS_METHODPR(Input, IsMinimized, () const, bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBER_MANUAL_PART_Input
        REGISTER_MEMBER_MANUAL_PART_Input();
    #endif
}

// struct JoystickState | File: ../Input/Input.h
void CollectMembers_JoystickState(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("void JoystickState::Initialize(unsigned numButtons, unsigned numAxes, unsigned numHats)", "void Initialize(uint, uint, uint)", AS_METHODPR(JoystickState, Initialize, (unsigned, unsigned, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void JoystickState::Reset()", "void Reset()", AS_METHODPR(JoystickState, Reset, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JoystickState::IsController() const", "bool IsController() const", AS_METHODPR(JoystickState, IsController, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JoystickState::IsController() const", "bool get_controller() const", AS_METHODPR(JoystickState, IsController, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned JoystickState::GetNumButtons() const", "uint GetNumButtons() const", AS_METHODPR(JoystickState, GetNumButtons, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned JoystickState::GetNumButtons() const", "uint get_numButtons() const", AS_METHODPR(JoystickState, GetNumButtons, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned JoystickState::GetNumAxes() const", "uint GetNumAxes() const", AS_METHODPR(JoystickState, GetNumAxes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned JoystickState::GetNumAxes() const", "uint get_numAxes() const", AS_METHODPR(JoystickState, GetNumAxes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned JoystickState::GetNumHats() const", "uint GetNumHats() const", AS_METHODPR(JoystickState, GetNumHats, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned JoystickState::GetNumHats() const", "uint get_numHats() const", AS_METHODPR(JoystickState, GetNumHats, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JoystickState::GetButtonDown(unsigned index) const", "bool GetButtonDown(uint) const", AS_METHODPR(JoystickState, GetButtonDown, (unsigned) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JoystickState::GetButtonDown(unsigned index) const", "bool get_buttonDown(uint) const", AS_METHODPR(JoystickState, GetButtonDown, (unsigned) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JoystickState::GetButtonPress(unsigned index) const", "bool GetButtonPress(uint) const", AS_METHODPR(JoystickState, GetButtonPress, (unsigned) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool JoystickState::GetButtonPress(unsigned index) const", "bool get_buttonPress(uint) const", AS_METHODPR(JoystickState, GetButtonPress, (unsigned) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float JoystickState::GetAxisPosition(unsigned index) const", "float GetAxisPosition(uint) const", AS_METHODPR(JoystickState, GetAxisPosition, (unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float JoystickState::GetAxisPosition(unsigned index) const", "float get_axisPosition(uint) const", AS_METHODPR(JoystickState, GetAxisPosition, (unsigned) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int JoystickState::GetHatPosition(unsigned index) const", "int GetHatPosition(uint) const", AS_METHODPR(JoystickState, GetHatPosition, (unsigned) const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int JoystickState::GetHatPosition(unsigned index) const", "int get_hatPosition(uint) const", AS_METHODPR(JoystickState, GetHatPosition, (unsigned) const, int), AS_CALL_THISCALL));

    // SDL_Joystick* JoystickState::joystick_
    // Not registered because pointer
    // SDL_GameController* JoystickState::controller_
    // Not registered because pointer
    // UIElement* JoystickState::screenJoystick_
    // Not registered because pointer
    // PODVector<bool> JoystickState::buttons_
    // Error: type "PODVector<bool>" can not automatically bind
    // PODVector<bool> JoystickState::buttonPress_
    // Error: type "PODVector<bool>" can not automatically bind
    // PODVector<float> JoystickState::axes_
    // Error: type "PODVector<float>" can not automatically bind
    // PODVector<int> JoystickState::hats_
    // Error: type "PODVector<int>" can not automatically bind

    fields.Push(RegisterObjectPropertyArgs("SDL_JoystickID JoystickState::joystickID_", "SDL_JoystickID joystickID", offsetof(JoystickState, joystickID_)));
    fields.Push(RegisterObjectPropertyArgs("String JoystickState::name_", "String name", offsetof(JoystickState, name_)));

    #ifdef REGISTER_MEMBER_MANUAL_PART_JoystickState
        REGISTER_MEMBER_MANUAL_PART_JoystickState();
    #endif
}

// struct TouchState | File: ../Input/Input.h
void CollectMembers_TouchState(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterGlobalFunctionArgs>& staticMethods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterObjectMethodArgs>& wrappedFields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    methods.Push(RegisterObjectMethodArgs("UIElement* TouchState::GetTouchedElement()", "UIElement@+ GetTouchedElement()", AS_METHODPR(TouchState, GetTouchedElement, (), UIElement*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UIElement* TouchState::GetTouchedElement()", "UIElement@+ get_touchedElement()", AS_METHODPR(TouchState, GetTouchedElement, (), UIElement*), AS_CALL_THISCALL));

    // WeakPtr<UIElement> TouchState::touchedElement_
    // Error: type "WeakPtr<UIElement>" can not automatically bind

    fields.Push(RegisterObjectPropertyArgs("int TouchState::touchID_", "int touchID", offsetof(TouchState, touchID_)));
    fields.Push(RegisterObjectPropertyArgs("IntVector2 TouchState::position_", "IntVector2 position", offsetof(TouchState, position_)));
    fields.Push(RegisterObjectPropertyArgs("IntVector2 TouchState::lastPosition_", "IntVector2 lastPosition", offsetof(TouchState, lastPosition_)));
    fields.Push(RegisterObjectPropertyArgs("IntVector2 TouchState::delta_", "IntVector2 delta", offsetof(TouchState, delta_)));
    fields.Push(RegisterObjectPropertyArgs("float TouchState::pressure_", "float pressure", offsetof(TouchState, pressure_)));

    #ifdef REGISTER_MEMBER_MANUAL_PART_TouchState
        REGISTER_MEMBER_MANUAL_PART_TouchState();
    #endif
}

} // namespace Urho3D
