// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

// const PODVector<SoundSource*>& Audio::GetSoundSources() const
// const PODVector<SoundSource*>& Audio::GetSoundSources() const | File: ../Audio/Audio.h
static CScriptArray* Audio_GetSoundSources_void(Audio* ptr)
{
    const PODVector<SoundSource*>& result = ptr->GetSoundSources();
    return VectorToHandleArray(result, "Array<SoundSource@>");
}


// class Audio | File: ../Audio/Audio.h
void CollectMembers_Audio(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Object(methods, fields, staticFields);

    // void Audio::MixOutput(void* dest, unsigned samples)
    // Error: type "void*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool Audio::SetMode(int bufferLengthMSec, int mixRate, bool stereo, bool interpolation=true)", "bool SetMode(int, int, bool, bool = true)", AS_METHODPR(Audio, SetMode, (int, int, bool, bool), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::Update(float timeStep)", "void Update(float)", AS_METHODPR(Audio, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Audio::Play()", "bool Play()", AS_METHODPR(Audio, Play, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::Stop()", "void Stop()", AS_METHODPR(Audio, Stop, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::SetMasterGain(const String& type, float gain)", "void SetMasterGain(const String&in, float)", AS_METHODPR(Audio, SetMasterGain, (const String&, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::SetMasterGain(const String& type, float gain)", "void set_masterGain(const String&in, float)", AS_METHODPR(Audio, SetMasterGain, (const String&, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::PauseSoundType(const String& type)", "void PauseSoundType(const String&in)", AS_METHODPR(Audio, PauseSoundType, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::ResumeSoundType(const String& type)", "void ResumeSoundType(const String&in)", AS_METHODPR(Audio, ResumeSoundType, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::ResumeAll()", "void ResumeAll()", AS_METHODPR(Audio, ResumeAll, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::SetListener(SoundListener* listener)", "void SetListener(SoundListener@+)", AS_METHODPR(Audio, SetListener, (SoundListener*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::SetListener(SoundListener* listener)", "void set_listener(SoundListener@+)", AS_METHODPR(Audio, SetListener, (SoundListener*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::StopSound(Sound* sound)", "void StopSound(Sound@+)", AS_METHODPR(Audio, StopSound, (Sound*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Audio::GetSampleSize() const", "uint GetSampleSize() const", AS_METHODPR(Audio, GetSampleSize, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Audio::GetSampleSize() const", "uint get_sampleSize() const", AS_METHODPR(Audio, GetSampleSize, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Audio::GetMixRate() const", "int GetMixRate() const", AS_METHODPR(Audio, GetMixRate, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Audio::GetMixRate() const", "int get_mixRate() const", AS_METHODPR(Audio, GetMixRate, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Audio::GetInterpolation() const", "bool GetInterpolation() const", AS_METHODPR(Audio, GetInterpolation, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Audio::GetInterpolation() const", "bool get_interpolation() const", AS_METHODPR(Audio, GetInterpolation, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Audio::IsStereo() const", "bool IsStereo() const", AS_METHODPR(Audio, IsStereo, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Audio::IsStereo() const", "bool get_stereo() const", AS_METHODPR(Audio, IsStereo, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Audio::IsPlaying() const", "bool IsPlaying() const", AS_METHODPR(Audio, IsPlaying, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Audio::IsPlaying() const", "bool get_playing() const", AS_METHODPR(Audio, IsPlaying, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Audio::IsInitialized() const", "bool IsInitialized() const", AS_METHODPR(Audio, IsInitialized, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Audio::IsInitialized() const", "bool get_initialized() const", AS_METHODPR(Audio, IsInitialized, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Audio::GetMasterGain(const String& type) const", "float GetMasterGain(const String&in) const", AS_METHODPR(Audio, GetMasterGain, (const String&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Audio::GetMasterGain(const String& type) const", "float get_masterGain(const String&in) const", AS_METHODPR(Audio, GetMasterGain, (const String&) const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Audio::IsSoundTypePaused(const String& type) const", "bool IsSoundTypePaused(const String&in) const", AS_METHODPR(Audio, IsSoundTypePaused, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SoundListener* Audio::GetListener() const", "SoundListener@+ GetListener() const", AS_METHODPR(Audio, GetListener, () const, SoundListener*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SoundListener* Audio::GetListener() const", "SoundListener@+ get_listener() const", AS_METHODPR(Audio, GetListener, () const, SoundListener*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const PODVector<SoundSource*>& Audio::GetSoundSources() const", "Array<SoundSource@>@ GetSoundSources() const", AS_FUNCTION_OBJFIRST(Audio_GetSoundSources_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool Audio::HasMasterGain(const String& type) const", "bool HasMasterGain(const String&in) const", AS_METHODPR(Audio, HasMasterGain, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::AddSoundSource(SoundSource* soundSource)", "void AddSoundSource(SoundSource@+)", AS_METHODPR(Audio, AddSoundSource, (SoundSource*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Audio::RemoveSoundSource(SoundSource* soundSource)", "void RemoveSoundSource(SoundSource@+)", AS_METHODPR(Audio, RemoveSoundSource, (SoundSource*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Mutex& Audio::GetMutex()", "Mutex& GetMutex()", AS_METHODPR(Audio, GetMutex, (), Mutex&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Audio::GetSoundSourceMasterGain(StringHash typeHash) const", "float GetSoundSourceMasterGain(StringHash) const", AS_METHODPR(Audio, GetSoundSourceMasterGain, (StringHash) const, float), AS_CALL_THISCALL));
}

// class BufferedSoundStream | File: ../Audio/BufferedSoundStream.h
void CollectMembers_BufferedSoundStream(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_SoundStream(methods, fields, staticFields);

    Remove(methods, "virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0");
    Remove(fields, "virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0");
    Remove(staticFields, "virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0");

    // void BufferedSoundStream::AddData(const SharedArrayPtr<signed char>& data, unsigned numBytes)
    // Error: type "const SharedArrayPtr<signed char>&" can not automatically bind
    // void BufferedSoundStream::AddData(const SharedArrayPtr<signed short>& data, unsigned numBytes)
    // Error: type "const SharedArrayPtr<signed short>&" can not automatically bind
    // void BufferedSoundStream::AddData(void* data, unsigned numBytes)
    // Error: type "void*" can not automatically bind
    // unsigned BufferedSoundStream::GetData(signed char* dest, unsigned numBytes) override
    // Error: type "signed char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void BufferedSoundStream::Clear()", "void Clear()", AS_METHODPR(BufferedSoundStream, Clear, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned BufferedSoundStream::GetBufferNumBytes() const", "uint GetBufferNumBytes() const", AS_METHODPR(BufferedSoundStream, GetBufferNumBytes, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float BufferedSoundStream::GetBufferLength() const", "float GetBufferLength() const", AS_METHODPR(BufferedSoundStream, GetBufferLength, () const, float), AS_CALL_THISCALL));
}

// class OggVorbisSoundStream | File: ../Audio/OggVorbisSoundStream.h
void CollectMembers_OggVorbisSoundStream(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_SoundStream(methods, fields, staticFields);

    Remove(methods, "virtual bool SoundStream::Seek(unsigned sample_number)");
    Remove(fields, "virtual bool SoundStream::Seek(unsigned sample_number)");
    Remove(staticFields, "virtual bool SoundStream::Seek(unsigned sample_number)");
    Remove(methods, "virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0");
    Remove(fields, "virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0");
    Remove(staticFields, "virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0");

    // unsigned OggVorbisSoundStream::GetData(signed char* dest, unsigned numBytes) override
    // Error: type "signed char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool OggVorbisSoundStream::Seek(unsigned sample_number) override", "bool Seek(uint)", AS_METHODPR(OggVorbisSoundStream, Seek, (unsigned), bool), AS_CALL_THISCALL));
}

// SharedPtr<SoundStream> Sound::GetDecoderStream() const
// SharedPtr<SoundStream> Sound::GetDecoderStream() const | File: ../Audio/Sound.h
static SoundStream* Sound_GetDecoderStream_void(Sound* ptr)
{
    SharedPtr<SoundStream> result = ptr->GetDecoderStream();
    return result.Detach();
}


// class Sound | File: ../Audio/Sound.h
void CollectMembers_Sound(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_ResourceWithMetadata(methods, fields, staticFields);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(fields, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(staticFields, "virtual bool Resource::BeginLoad(Deserializer& source)");

    // SharedArrayPtr<signed char> Sound::GetData() const
    // Error: type "SharedArrayPtr<signed char>" can not automatically bind
    // signed char* Sound::GetEnd() const
    // Error: type "signed char*" can not automatically bind
    // signed char* Sound::GetRepeat() const
    // Error: type "signed char*" can not automatically bind
    // signed char* Sound::GetStart() const
    // Error: type "signed char*" can not automatically bind
    // void Sound::SetData(const void* data, unsigned dataSize)
    // Error: type "const void*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool Sound::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Sound, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::LoadRaw(Deserializer& source)", "bool LoadRaw(Deserializer&)", AS_METHODPR(Sound, LoadRaw, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::LoadWav(Deserializer& source)", "bool LoadWav(Deserializer&)", AS_METHODPR(Sound, LoadWav, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::LoadOggVorbis(Deserializer& source)", "bool LoadOggVorbis(Deserializer&)", AS_METHODPR(Sound, LoadOggVorbis, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sound::SetSize(unsigned dataSize)", "void SetSize(uint)", AS_METHODPR(Sound, SetSize, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sound::SetFormat(unsigned frequency, bool sixteenBit, bool stereo)", "void SetFormat(uint, bool, bool)", AS_METHODPR(Sound, SetFormat, (unsigned, bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sound::SetLooped(bool enable)", "void SetLooped(bool)", AS_METHODPR(Sound, SetLooped, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sound::SetLooped(bool enable)", "void set_looped(bool)", AS_METHODPR(Sound, SetLooped, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sound::SetLoop(unsigned repeatOffset, unsigned endOffset)", "void SetLoop(uint, uint)", AS_METHODPR(Sound, SetLoop, (unsigned, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SharedPtr<SoundStream> Sound::GetDecoderStream() const", "SoundStream@+ GetDecoderStream() const", AS_FUNCTION_OBJFIRST(Sound_GetDecoderStream_void), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("float Sound::GetLength() const", "float GetLength() const", AS_METHODPR(Sound, GetLength, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Sound::GetLength() const", "float get_length() const", AS_METHODPR(Sound, GetLength, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Sound::GetDataSize() const", "uint GetDataSize() const", AS_METHODPR(Sound, GetDataSize, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Sound::GetSampleSize() const", "uint GetSampleSize() const", AS_METHODPR(Sound, GetSampleSize, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Sound::GetSampleSize() const", "uint get_sampleSize() const", AS_METHODPR(Sound, GetSampleSize, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Sound::GetFrequency() const", "float GetFrequency() const", AS_METHODPR(Sound, GetFrequency, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Sound::GetFrequency() const", "float get_frequency() const", AS_METHODPR(Sound, GetFrequency, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Sound::GetIntFrequency() const", "uint GetIntFrequency() const", AS_METHODPR(Sound, GetIntFrequency, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::IsLooped() const", "bool IsLooped() const", AS_METHODPR(Sound, IsLooped, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::IsLooped() const", "bool get_looped() const", AS_METHODPR(Sound, IsLooped, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::IsSixteenBit() const", "bool IsSixteenBit() const", AS_METHODPR(Sound, IsSixteenBit, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::IsSixteenBit() const", "bool get_sixteenBit() const", AS_METHODPR(Sound, IsSixteenBit, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::IsStereo() const", "bool IsStereo() const", AS_METHODPR(Sound, IsStereo, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::IsStereo() const", "bool get_stereo() const", AS_METHODPR(Sound, IsStereo, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::IsCompressed() const", "bool IsCompressed() const", AS_METHODPR(Sound, IsCompressed, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sound::IsCompressed() const", "bool get_compressed() const", AS_METHODPR(Sound, IsCompressed, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sound::FixInterpolation()", "void FixInterpolation()", AS_METHODPR(Sound, FixInterpolation, (), void), AS_CALL_THISCALL));
}

// class SoundListener | File: ../Audio/SoundListener.h
void CollectMembers_SoundListener(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, fields, staticFields);
}

// class SoundSource | File: ../Audio/SoundSource.h
void CollectMembers_SoundSource(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_Component(methods, fields, staticFields);

    // volatile signed char* SoundSource::GetPlayPosition() const
    // Error: type "signed char*" can not automatically bind
    // void SoundSource::Mix(int* dest, unsigned samples, int mixRate, bool stereo, bool interpolation)
    // Error: type "int*" can not automatically bind
    // void SoundSource::SetPlayPosition(signed char* pos)
    // Error: type "signed char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void SoundSource::Seek(float seekTime)", "void Seek(float)", AS_METHODPR(SoundSource, Seek, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::Play(Sound* sound)", "void Play(Sound@+)", AS_METHODPR(SoundSource, Play, (Sound*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::Play(Sound* sound, float frequency)", "void Play(Sound@+, float)", AS_METHODPR(SoundSource, Play, (Sound*, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::Play(Sound* sound, float frequency, float gain)", "void Play(Sound@+, float, float)", AS_METHODPR(SoundSource, Play, (Sound*, float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::Play(Sound* sound, float frequency, float gain, float panning)", "void Play(Sound@+, float, float, float)", AS_METHODPR(SoundSource, Play, (Sound*, float, float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::Play(SoundStream* stream)", "void Play(SoundStream@+)", AS_METHODPR(SoundSource, Play, (SoundStream*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::Stop()", "void Stop()", AS_METHODPR(SoundSource, Stop, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetSoundType(const String& type)", "void SetSoundType(const String&in)", AS_METHODPR(SoundSource, SetSoundType, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetSoundType(const String& type)", "void set_soundType(const String&in)", AS_METHODPR(SoundSource, SetSoundType, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetFrequency(float frequency)", "void SetFrequency(float)", AS_METHODPR(SoundSource, SetFrequency, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetFrequency(float frequency)", "void set_frequency(float)", AS_METHODPR(SoundSource, SetFrequency, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetGain(float gain)", "void SetGain(float)", AS_METHODPR(SoundSource, SetGain, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetGain(float gain)", "void set_gain(float)", AS_METHODPR(SoundSource, SetGain, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetAttenuation(float attenuation)", "void SetAttenuation(float)", AS_METHODPR(SoundSource, SetAttenuation, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetPanning(float panning)", "void SetPanning(float)", AS_METHODPR(SoundSource, SetPanning, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetPanning(float panning)", "void set_panning(float)", AS_METHODPR(SoundSource, SetPanning, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetAutoRemoveMode(AutoRemoveMode mode)", "void SetAutoRemoveMode(AutoRemoveMode)", AS_METHODPR(SoundSource, SetAutoRemoveMode, (AutoRemoveMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetAutoRemoveMode(AutoRemoveMode mode)", "void set_autoRemoveMode(AutoRemoveMode)", AS_METHODPR(SoundSource, SetAutoRemoveMode, (AutoRemoveMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sound* SoundSource::GetSound() const", "Sound@+ GetSound() const", AS_METHODPR(SoundSource, GetSound, () const, Sound*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sound* SoundSource::GetSound() const", "Sound@+ get_sound() const", AS_METHODPR(SoundSource, GetSound, () const, Sound*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String SoundSource::GetSoundType() const", "String GetSoundType() const", AS_METHODPR(SoundSource, GetSoundType, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String SoundSource::GetSoundType() const", "String get_soundType() const", AS_METHODPR(SoundSource, GetSoundType, () const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource::GetTimePosition() const", "float GetTimePosition() const", AS_METHODPR(SoundSource, GetTimePosition, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource::GetTimePosition() const", "float get_timePosition() const", AS_METHODPR(SoundSource, GetTimePosition, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource::GetFrequency() const", "float GetFrequency() const", AS_METHODPR(SoundSource, GetFrequency, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource::GetFrequency() const", "float get_frequency() const", AS_METHODPR(SoundSource, GetFrequency, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource::GetGain() const", "float GetGain() const", AS_METHODPR(SoundSource, GetGain, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource::GetGain() const", "float get_gain() const", AS_METHODPR(SoundSource, GetGain, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource::GetAttenuation() const", "float GetAttenuation() const", AS_METHODPR(SoundSource, GetAttenuation, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource::GetAttenuation() const", "float get_attenuation() const", AS_METHODPR(SoundSource, GetAttenuation, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource::GetPanning() const", "float GetPanning() const", AS_METHODPR(SoundSource, GetPanning, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource::GetPanning() const", "float get_panning() const", AS_METHODPR(SoundSource, GetPanning, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("AutoRemoveMode SoundSource::GetAutoRemoveMode() const", "AutoRemoveMode GetAutoRemoveMode() const", AS_METHODPR(SoundSource, GetAutoRemoveMode, () const, AutoRemoveMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("AutoRemoveMode SoundSource::GetAutoRemoveMode() const", "AutoRemoveMode get_autoRemoveMode() const", AS_METHODPR(SoundSource, GetAutoRemoveMode, () const, AutoRemoveMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool SoundSource::IsPlaying() const", "bool IsPlaying() const", AS_METHODPR(SoundSource, IsPlaying, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool SoundSource::IsPlaying() const", "bool get_playing() const", AS_METHODPR(SoundSource, IsPlaying, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("virtual void SoundSource::Update(float timeStep)", "void Update(float)", AS_METHODPR(SoundSource, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::UpdateMasterGain()", "void UpdateMasterGain()", AS_METHODPR(SoundSource, UpdateMasterGain, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetSoundAttr(const ResourceRef& value)", "void SetSoundAttr(const ResourceRef&in)", AS_METHODPR(SoundSource, SetSoundAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetPositionAttr(int value)", "void SetPositionAttr(int)", AS_METHODPR(SoundSource, SetPositionAttr, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef SoundSource::GetSoundAttr() const", "ResourceRef GetSoundAttr() const", AS_METHODPR(SoundSource, GetSoundAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource::SetPlayingAttr(bool value)", "void SetPlayingAttr(bool)", AS_METHODPR(SoundSource, SetPlayingAttr, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int SoundSource::GetPositionAttr() const", "int GetPositionAttr() const", AS_METHODPR(SoundSource, GetPositionAttr, () const, int), AS_CALL_THISCALL));
}

// class SoundSource3D | File: ../Audio/SoundSource3D.h
void CollectMembers_SoundSource3D(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_SoundSource(methods, fields, staticFields);

    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(fields, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(staticFields, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");
    Remove(methods, "virtual void SoundSource::Update(float timeStep)");
    Remove(fields, "virtual void SoundSource::Update(float timeStep)");
    Remove(staticFields, "virtual void SoundSource::Update(float timeStep)");

    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(SoundSource3D, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::Update(float timeStep) override", "void Update(float)", AS_METHODPR(SoundSource3D, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetDistanceAttenuation(float nearDistance, float farDistance, float rolloffFactor)", "void SetDistanceAttenuation(float, float, float)", AS_METHODPR(SoundSource3D, SetDistanceAttenuation, (float, float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetAngleAttenuation(float innerAngle, float outerAngle)", "void SetAngleAttenuation(float, float)", AS_METHODPR(SoundSource3D, SetAngleAttenuation, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetNearDistance(float distance)", "void SetNearDistance(float)", AS_METHODPR(SoundSource3D, SetNearDistance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetNearDistance(float distance)", "void set_nearDistance(float)", AS_METHODPR(SoundSource3D, SetNearDistance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetFarDistance(float distance)", "void SetFarDistance(float)", AS_METHODPR(SoundSource3D, SetFarDistance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetFarDistance(float distance)", "void set_farDistance(float)", AS_METHODPR(SoundSource3D, SetFarDistance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetInnerAngle(float angle)", "void SetInnerAngle(float)", AS_METHODPR(SoundSource3D, SetInnerAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetInnerAngle(float angle)", "void set_innerAngle(float)", AS_METHODPR(SoundSource3D, SetInnerAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetOuterAngle(float angle)", "void SetOuterAngle(float)", AS_METHODPR(SoundSource3D, SetOuterAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetOuterAngle(float angle)", "void set_outerAngle(float)", AS_METHODPR(SoundSource3D, SetOuterAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetRolloffFactor(float factor)", "void SetRolloffFactor(float)", AS_METHODPR(SoundSource3D, SetRolloffFactor, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::SetRolloffFactor(float factor)", "void set_rolloffFactor(float)", AS_METHODPR(SoundSource3D, SetRolloffFactor, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundSource3D::CalculateAttenuation()", "void CalculateAttenuation()", AS_METHODPR(SoundSource3D, CalculateAttenuation, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource3D::GetNearDistance() const", "float GetNearDistance() const", AS_METHODPR(SoundSource3D, GetNearDistance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource3D::GetNearDistance() const", "float get_nearDistance() const", AS_METHODPR(SoundSource3D, GetNearDistance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource3D::GetFarDistance() const", "float GetFarDistance() const", AS_METHODPR(SoundSource3D, GetFarDistance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource3D::GetFarDistance() const", "float get_farDistance() const", AS_METHODPR(SoundSource3D, GetFarDistance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource3D::GetInnerAngle() const", "float GetInnerAngle() const", AS_METHODPR(SoundSource3D, GetInnerAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource3D::GetInnerAngle() const", "float get_innerAngle() const", AS_METHODPR(SoundSource3D, GetInnerAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource3D::GetOuterAngle() const", "float GetOuterAngle() const", AS_METHODPR(SoundSource3D, GetOuterAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource3D::GetOuterAngle() const", "float get_outerAngle() const", AS_METHODPR(SoundSource3D, GetOuterAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource3D::RollAngleoffFactor() const", "float RollAngleoffFactor() const", AS_METHODPR(SoundSource3D, RollAngleoffFactor, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundSource3D::RollAngleoffFactor() const", "float get_rolloffFactor() const", AS_METHODPR(SoundSource3D, RollAngleoffFactor, () const, float), AS_CALL_THISCALL));
}

// class SoundStream | File: ../Audio/SoundStream.h
void CollectMembers_SoundStream(Vector<RegisterObjectMethodArgs>& methods, Vector<RegisterObjectPropertyArgs>& fields, Vector<RegisterGlobalPropertyArgs>& staticFields)
{
    CollectMembers_RefCounted(methods, fields, staticFields);

    // virtual unsigned SoundStream::GetData(signed char* dest, unsigned numBytes)=0
    // Error: type "signed char*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("virtual bool SoundStream::Seek(unsigned sample_number)", "bool Seek(uint)", AS_METHODPR(SoundStream, Seek, (unsigned), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundStream::SetFormat(unsigned frequency, bool sixteenBit, bool stereo)", "void SetFormat(uint, bool, bool)", AS_METHODPR(SoundStream, SetFormat, (unsigned, bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SoundStream::SetStopAtEnd(bool enable)", "void SetStopAtEnd(bool)", AS_METHODPR(SoundStream, SetStopAtEnd, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned SoundStream::GetSampleSize() const", "uint GetSampleSize() const", AS_METHODPR(SoundStream, GetSampleSize, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float SoundStream::GetFrequency() const", "float GetFrequency() const", AS_METHODPR(SoundStream, GetFrequency, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned SoundStream::GetIntFrequency() const", "uint GetIntFrequency() const", AS_METHODPR(SoundStream, GetIntFrequency, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool SoundStream::GetStopAtEnd() const", "bool GetStopAtEnd() const", AS_METHODPR(SoundStream, GetStopAtEnd, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool SoundStream::IsSixteenBit() const", "bool IsSixteenBit() const", AS_METHODPR(SoundStream, IsSixteenBit, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool SoundStream::IsStereo() const", "bool IsStereo() const", AS_METHODPR(SoundStream, IsStereo, () const, bool), AS_CALL_THISCALL));
}

} // namespace Urho3D
