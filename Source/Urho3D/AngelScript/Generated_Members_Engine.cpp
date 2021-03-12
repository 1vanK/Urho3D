// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// class Console | File: ../Engine/Console.h
void CollectMembers_Console(MemberCollection& members)
{
    CollectMembers_Object(members);

    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetDefaultStyle(XMLFile* style)", "void SetDefaultStyle(XMLFile@+)", AS_METHODPR(Console, SetDefaultStyle, (XMLFile*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetDefaultStyle(XMLFile* style)", "void set_defaultStyle(XMLFile@+)", AS_METHODPR(Console, SetDefaultStyle, (XMLFile*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetVisible(bool enable)", "void SetVisible(bool)", AS_METHODPR(Console, SetVisible, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetVisible(bool enable)", "void set_visible(bool)", AS_METHODPR(Console, SetVisible, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::Toggle()", "void Toggle()", AS_METHODPR(Console, Toggle, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetAutoVisibleOnError(bool enable)", "void SetAutoVisibleOnError(bool)", AS_METHODPR(Console, SetAutoVisibleOnError, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetAutoVisibleOnError(bool enable)", "void set_autoVisibleOnError(bool)", AS_METHODPR(Console, SetAutoVisibleOnError, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetCommandInterpreter(const String& interpreter)", "void SetCommandInterpreter(const String&in)", AS_METHODPR(Console, SetCommandInterpreter, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetCommandInterpreter(const String& interpreter)", "void set_commandInterpreter(const String&in)", AS_METHODPR(Console, SetCommandInterpreter, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetNumBufferedRows(unsigned rows)", "void SetNumBufferedRows(uint)", AS_METHODPR(Console, SetNumBufferedRows, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetNumBufferedRows(unsigned rows)", "void set_numBufferedRows(uint)", AS_METHODPR(Console, SetNumBufferedRows, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetNumRows(unsigned rows)", "void SetNumRows(uint)", AS_METHODPR(Console, SetNumRows, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetNumRows(unsigned rows)", "void set_numRows(uint)", AS_METHODPR(Console, SetNumRows, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetNumHistoryRows(unsigned rows)", "void SetNumHistoryRows(uint)", AS_METHODPR(Console, SetNumHistoryRows, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetNumHistoryRows(unsigned rows)", "void set_numHistoryRows(uint)", AS_METHODPR(Console, SetNumHistoryRows, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetFocusOnShow(bool enable)", "void SetFocusOnShow(bool)", AS_METHODPR(Console, SetFocusOnShow, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::SetFocusOnShow(bool enable)", "void set_focusOnShow(bool)", AS_METHODPR(Console, SetFocusOnShow, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::AddAutoComplete(const String& option)", "void AddAutoComplete(const String&in)", AS_METHODPR(Console, AddAutoComplete, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::RemoveAutoComplete(const String& option)", "void RemoveAutoComplete(const String&in)", AS_METHODPR(Console, RemoveAutoComplete, (const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::UpdateElements()", "void UpdateElements()", AS_METHODPR(Console, UpdateElements, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("XMLFile* Console::GetDefaultStyle() const", "XMLFile@+ GetDefaultStyle() const", AS_METHODPR(Console, GetDefaultStyle, () const, XMLFile*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("XMLFile* Console::GetDefaultStyle() const", "XMLFile@+ get_defaultStyle() const", AS_METHODPR(Console, GetDefaultStyle, () const, XMLFile*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("BorderImage* Console::GetBackground() const", "BorderImage@+ GetBackground() const", AS_METHODPR(Console, GetBackground, () const, BorderImage*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("BorderImage* Console::GetBackground() const", "BorderImage@+ get_background() const", AS_METHODPR(Console, GetBackground, () const, BorderImage*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("LineEdit* Console::GetLineEdit() const", "LineEdit@+ GetLineEdit() const", AS_METHODPR(Console, GetLineEdit, () const, LineEdit*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("LineEdit* Console::GetLineEdit() const", "LineEdit@+ get_lineEdit() const", AS_METHODPR(Console, GetLineEdit, () const, LineEdit*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Button* Console::GetCloseButton() const", "Button@+ GetCloseButton() const", AS_METHODPR(Console, GetCloseButton, () const, Button*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Button* Console::GetCloseButton() const", "Button@+ get_closeButton() const", AS_METHODPR(Console, GetCloseButton, () const, Button*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Console::IsVisible() const", "bool IsVisible() const", AS_METHODPR(Console, IsVisible, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Console::IsVisible() const", "bool get_visible() const", AS_METHODPR(Console, IsVisible, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Console::IsAutoVisibleOnError() const", "bool IsAutoVisibleOnError() const", AS_METHODPR(Console, IsAutoVisibleOnError, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Console::IsAutoVisibleOnError() const", "bool get_autoVisibleOnError() const", AS_METHODPR(Console, IsAutoVisibleOnError, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Console::GetCommandInterpreter() const", "const String& GetCommandInterpreter() const", AS_METHODPR(Console, GetCommandInterpreter, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Console::GetCommandInterpreter() const", "const String& get_commandInterpreter() const", AS_METHODPR(Console, GetCommandInterpreter, () const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Console::GetNumBufferedRows() const", "uint GetNumBufferedRows() const", AS_METHODPR(Console, GetNumBufferedRows, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Console::GetNumBufferedRows() const", "uint get_numBufferedRows() const", AS_METHODPR(Console, GetNumBufferedRows, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Console::GetNumRows() const", "uint GetNumRows() const", AS_METHODPR(Console, GetNumRows, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Console::GetNumRows() const", "uint get_numRows() const", AS_METHODPR(Console, GetNumRows, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Console::CopySelectedRows() const", "void CopySelectedRows() const", AS_METHODPR(Console, CopySelectedRows, () const, void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Console::GetNumHistoryRows() const", "uint GetNumHistoryRows() const", AS_METHODPR(Console, GetNumHistoryRows, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Console::GetNumHistoryRows() const", "uint get_numHistoryRows() const", AS_METHODPR(Console, GetNumHistoryRows, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Console::GetHistoryPosition() const", "uint GetHistoryPosition() const", AS_METHODPR(Console, GetHistoryPosition, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Console::GetHistoryPosition() const", "uint get_historyPosition() const", AS_METHODPR(Console, GetHistoryPosition, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Console::GetHistoryRow(unsigned index) const", "const String& GetHistoryRow(uint) const", AS_METHODPR(Console, GetHistoryRow, (unsigned) const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("const String& Console::GetHistoryRow(unsigned index) const", "const String& get_historyRow(uint) const", AS_METHODPR(Console, GetHistoryRow, (unsigned) const, const String&), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Console::GetFocusOnShow() const", "bool GetFocusOnShow() const", AS_METHODPR(Console, GetFocusOnShow, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Console::GetFocusOnShow() const", "bool get_focusOnShow() const", AS_METHODPR(Console, GetFocusOnShow, () const, bool), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Console
        REGISTER_MEMBERS_MANUAL_PART_Console();
    #endif
}

// class DebugHud | File: ../Engine/DebugHud.h
void CollectMembers_DebugHud(MemberCollection& members)
{
    CollectMembers_Object(members);

    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::Update()", "void Update()", AS_METHODPR(DebugHud, Update, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetDefaultStyle(XMLFile* style)", "void SetDefaultStyle(XMLFile@+)", AS_METHODPR(DebugHud, SetDefaultStyle, (XMLFile*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetDefaultStyle(XMLFile* style)", "void set_defaultStyle(XMLFile@+)", AS_METHODPR(DebugHud, SetDefaultStyle, (XMLFile*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetMode(unsigned mode)", "void SetMode(uint)", AS_METHODPR(DebugHud, SetMode, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetMode(unsigned mode)", "void set_mode(uint)", AS_METHODPR(DebugHud, SetMode, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetProfilerMaxDepth(unsigned depth)", "void SetProfilerMaxDepth(uint)", AS_METHODPR(DebugHud, SetProfilerMaxDepth, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetProfilerMaxDepth(unsigned depth)", "void set_profilerMaxDepth(uint)", AS_METHODPR(DebugHud, SetProfilerMaxDepth, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetProfilerInterval(float interval)", "void SetProfilerInterval(float)", AS_METHODPR(DebugHud, SetProfilerInterval, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetProfilerInterval(float interval)", "void set_profilerInterval(float)", AS_METHODPR(DebugHud, SetProfilerInterval, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetUseRendererStats(bool enable)", "void SetUseRendererStats(bool)", AS_METHODPR(DebugHud, SetUseRendererStats, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetUseRendererStats(bool enable)", "void set_useRendererStats(bool)", AS_METHODPR(DebugHud, SetUseRendererStats, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::Toggle(unsigned mode)", "void Toggle(uint)", AS_METHODPR(DebugHud, Toggle, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::ToggleAll()", "void ToggleAll()", AS_METHODPR(DebugHud, ToggleAll, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("XMLFile* DebugHud::GetDefaultStyle() const", "XMLFile@+ GetDefaultStyle() const", AS_METHODPR(DebugHud, GetDefaultStyle, () const, XMLFile*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("XMLFile* DebugHud::GetDefaultStyle() const", "XMLFile@+ get_defaultStyle() const", AS_METHODPR(DebugHud, GetDefaultStyle, () const, XMLFile*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Text* DebugHud::GetStatsText() const", "Text@+ GetStatsText() const", AS_METHODPR(DebugHud, GetStatsText, () const, Text*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Text* DebugHud::GetStatsText() const", "Text@+ get_statsText() const", AS_METHODPR(DebugHud, GetStatsText, () const, Text*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Text* DebugHud::GetModeText() const", "Text@+ GetModeText() const", AS_METHODPR(DebugHud, GetModeText, () const, Text*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Text* DebugHud::GetModeText() const", "Text@+ get_modeText() const", AS_METHODPR(DebugHud, GetModeText, () const, Text*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Text* DebugHud::GetProfilerText() const", "Text@+ GetProfilerText() const", AS_METHODPR(DebugHud, GetProfilerText, () const, Text*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Text* DebugHud::GetProfilerText() const", "Text@+ get_profilerText() const", AS_METHODPR(DebugHud, GetProfilerText, () const, Text*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Text* DebugHud::GetMemoryText() const", "Text@+ GetMemoryText() const", AS_METHODPR(DebugHud, GetMemoryText, () const, Text*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Text* DebugHud::GetMemoryText() const", "Text@+ get_memoryText() const", AS_METHODPR(DebugHud, GetMemoryText, () const, Text*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DebugHud::GetMode() const", "uint GetMode() const", AS_METHODPR(DebugHud, GetMode, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DebugHud::GetMode() const", "uint get_mode() const", AS_METHODPR(DebugHud, GetMode, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DebugHud::GetProfilerMaxDepth() const", "uint GetProfilerMaxDepth() const", AS_METHODPR(DebugHud, GetProfilerMaxDepth, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned DebugHud::GetProfilerMaxDepth() const", "uint get_profilerMaxDepth() const", AS_METHODPR(DebugHud, GetProfilerMaxDepth, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float DebugHud::GetProfilerInterval() const", "float GetProfilerInterval() const", AS_METHODPR(DebugHud, GetProfilerInterval, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float DebugHud::GetProfilerInterval() const", "float get_profilerInterval() const", AS_METHODPR(DebugHud, GetProfilerInterval, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool DebugHud::GetUseRendererStats() const", "bool GetUseRendererStats() const", AS_METHODPR(DebugHud, GetUseRendererStats, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool DebugHud::GetUseRendererStats() const", "bool get_useRendererStats() const", AS_METHODPR(DebugHud, GetUseRendererStats, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetAppStats(const String& label, const Variant& stats)", "void SetAppStats(const String&in, const Variant&in)", AS_METHODPR(DebugHud, SetAppStats, (const String&, const Variant&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::SetAppStats(const String& label, const String& stats)", "void SetAppStats(const String&in, const String&in)", AS_METHODPR(DebugHud, SetAppStats, (const String&, const String&), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool DebugHud::ResetAppStats(const String& label)", "bool ResetAppStats(const String&in)", AS_METHODPR(DebugHud, ResetAppStats, (const String&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void DebugHud::ClearAppStats()", "void ClearAppStats()", AS_METHODPR(DebugHud, ClearAppStats, (), void), AS_CALL_THISCALL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_DebugHud
        REGISTER_MEMBERS_MANUAL_PART_DebugHud();
    #endif
}

// static VariantMap Engine::ParseParameters(const Vector<String>& arguments)
// static VariantMap Engine::ParseParameters(const Vector<String>& arguments) | File: ../Engine/Engine.h
static VariantMap Engine_ParseParameters_VectorString(CScriptArray* arguments_conv)
{
    Vector<String> arguments = ArrayToVector<String>(arguments_conv);
    VariantMap result = Engine::ParseParameters(arguments);
    return result;
}


// class Engine | File: ../Engine/Engine.h
void CollectMembers_Engine(MemberCollection& members)
{
    CollectMembers_Object(members);

    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::Initialize(const VariantMap& parameters)", "bool Initialize(const VariantMap&in)", AS_METHODPR(Engine, Initialize, (const VariantMap&), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::InitializeResourceCache(const VariantMap& parameters, bool removeOld = true)", "bool InitializeResourceCache(const VariantMap&in, bool = true)", AS_METHODPR(Engine, InitializeResourceCache, (const VariantMap&, bool), bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::RunFrame()", "void RunFrame()", AS_METHODPR(Engine, RunFrame, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("Console* Engine::CreateConsole()", "Console@+ CreateConsole()", AS_METHODPR(Engine, CreateConsole, (), Console*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("DebugHud* Engine::CreateDebugHud()", "DebugHud@+ CreateDebugHud()", AS_METHODPR(Engine, CreateDebugHud, (), DebugHud*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetMinFps(int fps)", "void SetMinFps(int)", AS_METHODPR(Engine, SetMinFps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetMinFps(int fps)", "void set_minFps(int)", AS_METHODPR(Engine, SetMinFps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetMaxFps(int fps)", "void SetMaxFps(int)", AS_METHODPR(Engine, SetMaxFps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetMaxFps(int fps)", "void set_maxFps(int)", AS_METHODPR(Engine, SetMaxFps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetMaxInactiveFps(int fps)", "void SetMaxInactiveFps(int)", AS_METHODPR(Engine, SetMaxInactiveFps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetMaxInactiveFps(int fps)", "void set_maxInactiveFps(int)", AS_METHODPR(Engine, SetMaxInactiveFps, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetTimeStepSmoothing(int frames)", "void SetTimeStepSmoothing(int)", AS_METHODPR(Engine, SetTimeStepSmoothing, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetTimeStepSmoothing(int frames)", "void set_timeStepSmoothing(int)", AS_METHODPR(Engine, SetTimeStepSmoothing, (int), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetPauseMinimized(bool enable)", "void SetPauseMinimized(bool)", AS_METHODPR(Engine, SetPauseMinimized, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetPauseMinimized(bool enable)", "void set_pauseMinimized(bool)", AS_METHODPR(Engine, SetPauseMinimized, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetAutoExit(bool enable)", "void SetAutoExit(bool)", AS_METHODPR(Engine, SetAutoExit, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetAutoExit(bool enable)", "void set_autoExit(bool)", AS_METHODPR(Engine, SetAutoExit, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::SetNextTimeStep(float seconds)", "void SetNextTimeStep(float)", AS_METHODPR(Engine, SetNextTimeStep, (float), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::Exit()", "void Exit()", AS_METHODPR(Engine, Exit, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::DumpProfiler()", "void DumpProfiler()", AS_METHODPR(Engine, DumpProfiler, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::DumpResources(bool dumpFileName = false)", "void DumpResources(bool = false)", AS_METHODPR(Engine, DumpResources, (bool), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::DumpMemory()", "void DumpMemory()", AS_METHODPR(Engine, DumpMemory, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("float Engine::GetNextTimeStep() const", "float GetNextTimeStep() const", AS_METHODPR(Engine, GetNextTimeStep, () const, float), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Engine::GetMinFps() const", "int GetMinFps() const", AS_METHODPR(Engine, GetMinFps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Engine::GetMinFps() const", "int get_minFps() const", AS_METHODPR(Engine, GetMinFps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Engine::GetMaxFps() const", "int GetMaxFps() const", AS_METHODPR(Engine, GetMaxFps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Engine::GetMaxFps() const", "int get_maxFps() const", AS_METHODPR(Engine, GetMaxFps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Engine::GetMaxInactiveFps() const", "int GetMaxInactiveFps() const", AS_METHODPR(Engine, GetMaxInactiveFps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Engine::GetMaxInactiveFps() const", "int get_maxInactiveFps() const", AS_METHODPR(Engine, GetMaxInactiveFps, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Engine::GetTimeStepSmoothing() const", "int GetTimeStepSmoothing() const", AS_METHODPR(Engine, GetTimeStepSmoothing, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("int Engine::GetTimeStepSmoothing() const", "int get_timeStepSmoothing() const", AS_METHODPR(Engine, GetTimeStepSmoothing, () const, int), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::GetPauseMinimized() const", "bool GetPauseMinimized() const", AS_METHODPR(Engine, GetPauseMinimized, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::GetPauseMinimized() const", "bool get_pauseMinimized() const", AS_METHODPR(Engine, GetPauseMinimized, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::GetAutoExit() const", "bool GetAutoExit() const", AS_METHODPR(Engine, GetAutoExit, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::GetAutoExit() const", "bool get_autoExit() const", AS_METHODPR(Engine, GetAutoExit, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::IsInitialized() const", "bool IsInitialized() const", AS_METHODPR(Engine, IsInitialized, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::IsInitialized() const", "bool get_initialized() const", AS_METHODPR(Engine, IsInitialized, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::IsExiting() const", "bool IsExiting() const", AS_METHODPR(Engine, IsExiting, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::IsExiting() const", "bool get_exiting() const", AS_METHODPR(Engine, IsExiting, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::IsHeadless() const", "bool IsHeadless() const", AS_METHODPR(Engine, IsHeadless, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Engine::IsHeadless() const", "bool get_headless() const", AS_METHODPR(Engine, IsHeadless, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::Update()", "void Update()", AS_METHODPR(Engine, Update, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::Render()", "void Render()", AS_METHODPR(Engine, Render, (), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Engine::ApplyFrameLimit()", "void ApplyFrameLimit()", AS_METHODPR(Engine, ApplyFrameLimit, (), void), AS_CALL_THISCALL));

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static VariantMap Engine::ParseParameters(const Vector<String>& arguments)", "VariantMap ParseParameters(Array<String>@+)", AS_FUNCTION(Engine_ParseParameters_VectorString), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static bool Engine::HasParameter(const VariantMap& parameters, const String& parameter)", "bool HasParameter(const VariantMap&in, const String&in)", AS_FUNCTIONPR(Engine::HasParameter, (const VariantMap&, const String&), bool), AS_CALL_CDECL));
    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static const Variant& Engine::GetParameter(const VariantMap& parameters, const String& parameter, const Variant& defaultValue = Variant::EMPTY)", "const Variant& GetParameter(const VariantMap&in, const String&in, const Variant&in = Variant::EMPTY)", AS_FUNCTIONPR(Engine::GetParameter, (const VariantMap&, const String&, const Variant&), const Variant&), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBERS_MANUAL_PART_Engine
        REGISTER_MEMBERS_MANUAL_PART_Engine();
    #endif
}

} // namespace Urho3D
