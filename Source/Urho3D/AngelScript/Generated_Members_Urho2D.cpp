// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

#ifdef URHO3D_URHO2D

// class AnimatedSprite2D | File: ../Urho2D/AnimatedSprite2D.h
void CollectMembers_AnimatedSprite2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_StaticSprite2D(methods);

    Remove(methods, "static void StaticSprite2D::RegisterObject(Context* context)");
    Remove(methods, "void Drawable2D::OnSetEnabled() override");

    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(AnimatedSprite2D, OnSetEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetAnimationSet(AnimationSet2D* animationSet)", "void SetAnimationSet(AnimationSet2D@+)", AS_METHODPR(AnimatedSprite2D, SetAnimationSet, (AnimationSet2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetAnimationSet(AnimationSet2D* animationSet)", "void set_animationSet(AnimationSet2D@+)", AS_METHODPR(AnimatedSprite2D, SetAnimationSet, (AnimationSet2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetEntity(const String& entity)", "void SetEntity(const String&in)", AS_METHODPR(AnimatedSprite2D, SetEntity, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetEntity(const String& entity)", "void set_entity(const String&in)", AS_METHODPR(AnimatedSprite2D, SetEntity, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetAnimation(const String& name, LoopMode2D loopMode=LM_DEFAULT)", "void SetAnimation(const String&in, LoopMode2D = LM_DEFAULT)", AS_METHODPR(AnimatedSprite2D, SetAnimation, (const String&, LoopMode2D), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetLoopMode(LoopMode2D loopMode)", "void SetLoopMode(LoopMode2D)", AS_METHODPR(AnimatedSprite2D, SetLoopMode, (LoopMode2D), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetLoopMode(LoopMode2D loopMode)", "void set_loopMode(LoopMode2D)", AS_METHODPR(AnimatedSprite2D, SetLoopMode, (LoopMode2D), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetSpeed(float speed)", "void SetSpeed(float)", AS_METHODPR(AnimatedSprite2D, SetSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetSpeed(float speed)", "void set_speed(float)", AS_METHODPR(AnimatedSprite2D, SetSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("AnimationSet2D* AnimatedSprite2D::GetAnimationSet() const", "AnimationSet2D@+ GetAnimationSet() const", AS_METHODPR(AnimatedSprite2D, GetAnimationSet, () const, AnimationSet2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("AnimationSet2D* AnimatedSprite2D::GetAnimationSet() const", "AnimationSet2D@+ get_animationSet() const", AS_METHODPR(AnimatedSprite2D, GetAnimationSet, () const, AnimationSet2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& AnimatedSprite2D::GetEntity() const", "const String& GetEntity() const", AS_METHODPR(AnimatedSprite2D, GetEntity, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& AnimatedSprite2D::GetEntity() const", "const String& get_entity() const", AS_METHODPR(AnimatedSprite2D, GetEntity, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& AnimatedSprite2D::GetAnimation() const", "const String& GetAnimation() const", AS_METHODPR(AnimatedSprite2D, GetAnimation, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& AnimatedSprite2D::GetAnimation() const", "const String& get_animation() const", AS_METHODPR(AnimatedSprite2D, GetAnimation, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("LoopMode2D AnimatedSprite2D::GetLoopMode() const", "LoopMode2D GetLoopMode() const", AS_METHODPR(AnimatedSprite2D, GetLoopMode, () const, LoopMode2D), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("LoopMode2D AnimatedSprite2D::GetLoopMode() const", "LoopMode2D get_loopMode() const", AS_METHODPR(AnimatedSprite2D, GetLoopMode, () const, LoopMode2D), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float AnimatedSprite2D::GetSpeed() const", "float GetSpeed() const", AS_METHODPR(AnimatedSprite2D, GetSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float AnimatedSprite2D::GetSpeed() const", "float get_speed() const", AS_METHODPR(AnimatedSprite2D, GetSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetAnimationSetAttr(const ResourceRef& value)", "void SetAnimationSetAttr(const ResourceRef&in)", AS_METHODPR(AnimatedSprite2D, SetAnimationSetAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef AnimatedSprite2D::GetAnimationSetAttr() const", "ResourceRef GetAnimationSetAttr() const", AS_METHODPR(AnimatedSprite2D, GetAnimationSetAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetAnimationAttr(const String& name)", "void SetAnimationAttr(const String&in)", AS_METHODPR(AnimatedSprite2D, SetAnimationAttr, (const String&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void AnimatedSprite2D::SetAnimationAttr(const String& name)", "void set_animation(const String&in)", AS_METHODPR(AnimatedSprite2D, SetAnimationAttr, (const String&), void), AS_CALL_THISCALL));
}

// class AnimationSet2D | File: ../Urho2D/AnimationSet2D.h
void CollectMembers_AnimationSet2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(methods, "virtual bool Resource::EndLoad()");

    // Spriter::SpriterData* AnimationSet2D::GetSpriterData() const
    // Error: type "Spriter::SpriterData*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool AnimationSet2D::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(AnimationSet2D, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool AnimationSet2D::EndLoad() override", "bool EndLoad()", AS_METHODPR(AnimationSet2D, EndLoad, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned AnimationSet2D::GetNumAnimations() const", "uint GetNumAnimations() const", AS_METHODPR(AnimationSet2D, GetNumAnimations, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned AnimationSet2D::GetNumAnimations() const", "uint get_numAnimations() const", AS_METHODPR(AnimationSet2D, GetNumAnimations, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("String AnimationSet2D::GetAnimation(unsigned index) const", "String GetAnimation(uint) const", AS_METHODPR(AnimationSet2D, GetAnimation, (unsigned) const, String), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool AnimationSet2D::HasAnimation(const String& animationName) const", "bool HasAnimation(const String&in) const", AS_METHODPR(AnimationSet2D, HasAnimation, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* AnimationSet2D::GetSprite() const", "Sprite2D@+ GetSprite() const", AS_METHODPR(AnimationSet2D, GetSprite, () const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* AnimationSet2D::GetSpriterFileSprite(int folderId, int fileId) const", "Sprite2D@+ GetSpriterFileSprite(int, int) const", AS_METHODPR(AnimationSet2D, GetSpriterFileSprite, (int, int) const, Sprite2D*), AS_CALL_THISCALL));
}

// class CollisionBox2D | File: ../Urho2D/CollisionBox2D.h
void CollectMembers_CollisionBox2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    Remove(methods, "static void CollisionShape2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void CollisionBox2D::SetSize(const Vector2& size)", "void SetSize(const Vector2&in)", AS_METHODPR(CollisionBox2D, SetSize, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionBox2D::SetSize(const Vector2& size)", "void set_size(const Vector2&in)", AS_METHODPR(CollisionBox2D, SetSize, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionBox2D::SetSize(float width, float height)", "void SetSize(float, float)", AS_METHODPR(CollisionBox2D, SetSize, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionBox2D::SetCenter(const Vector2& center)", "void SetCenter(const Vector2&in)", AS_METHODPR(CollisionBox2D, SetCenter, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionBox2D::SetCenter(const Vector2& center)", "void set_center(const Vector2&in)", AS_METHODPR(CollisionBox2D, SetCenter, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionBox2D::SetCenter(float x, float y)", "void SetCenter(float, float)", AS_METHODPR(CollisionBox2D, SetCenter, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionBox2D::SetAngle(float angle)", "void SetAngle(float)", AS_METHODPR(CollisionBox2D, SetAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionBox2D::SetAngle(float angle)", "void set_angle(float)", AS_METHODPR(CollisionBox2D, SetAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionBox2D::GetSize() const", "const Vector2& GetSize() const", AS_METHODPR(CollisionBox2D, GetSize, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionBox2D::GetSize() const", "const Vector2& get_size() const", AS_METHODPR(CollisionBox2D, GetSize, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionBox2D::GetCenter() const", "const Vector2& GetCenter() const", AS_METHODPR(CollisionBox2D, GetCenter, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionBox2D::GetCenter() const", "const Vector2& get_center() const", AS_METHODPR(CollisionBox2D, GetCenter, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionBox2D::GetAngle() const", "float GetAngle() const", AS_METHODPR(CollisionBox2D, GetAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionBox2D::GetAngle() const", "float get_angle() const", AS_METHODPR(CollisionBox2D, GetAngle, () const, float), AS_CALL_THISCALL));
}

// void CollisionChain2D::SetVertices(const PODVector<Vector2>& vertices)
#ifdef URHO3D_URHO2D
// void CollisionChain2D::SetVertices(const PODVector<Vector2>& vertices) | File: ../Urho2D/CollisionChain2D.h
static void CollisionChain2D_SetVertices_PODVectorVector2(CollisionChain2D* ptr, CScriptArray* vertices_conv)
{
    PODVector<Vector2> vertices = ArrayToPODVector<Vector2>(vertices_conv);
    ptr->SetVertices(vertices);
}
#endif


// const PODVector<Vector2>& CollisionChain2D::GetVertices() const
#ifdef URHO3D_URHO2D
// const PODVector<Vector2>& CollisionChain2D::GetVertices() const | File: ../Urho2D/CollisionChain2D.h
static CScriptArray* CollisionChain2D_GetVertices_void(CollisionChain2D* ptr)
{
    const PODVector<Vector2>& result = ptr->GetVertices();
    return VectorToArray(result, "Array<Vector2>");
}
#endif


// class CollisionChain2D | File: ../Urho2D/CollisionChain2D.h
void CollectMembers_CollisionChain2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    Remove(methods, "static void CollisionShape2D::RegisterObject(Context* context)");

    // PODVector<unsigned char> CollisionChain2D::GetVerticesAttr() const
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // void CollisionChain2D::SetVerticesAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void CollisionChain2D::SetLoop(bool loop)", "void SetLoop(bool)", AS_METHODPR(CollisionChain2D, SetLoop, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionChain2D::SetLoop(bool loop)", "void set_loop(bool)", AS_METHODPR(CollisionChain2D, SetLoop, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionChain2D::SetVertexCount(unsigned count)", "void SetVertexCount(uint)", AS_METHODPR(CollisionChain2D, SetVertexCount, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionChain2D::SetVertexCount(unsigned count)", "void set_vertexCount(uint)", AS_METHODPR(CollisionChain2D, SetVertexCount, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionChain2D::SetVertex(unsigned index, const Vector2& vertex)", "void SetVertex(uint, const Vector2&in)", AS_METHODPR(CollisionChain2D, SetVertex, (unsigned, const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionChain2D::SetVertices(const PODVector<Vector2>& vertices)", "void SetVertices(Array<Vector2>@+)", AS_FUNCTION_OBJFIRST(CollisionChain2D_SetVertices_PODVectorVector2), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("bool CollisionChain2D::GetLoop() const", "bool GetLoop() const", AS_METHODPR(CollisionChain2D, GetLoop, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CollisionChain2D::GetLoop() const", "bool get_loop() const", AS_METHODPR(CollisionChain2D, GetLoop, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CollisionChain2D::GetVertexCount() const", "uint GetVertexCount() const", AS_METHODPR(CollisionChain2D, GetVertexCount, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CollisionChain2D::GetVertexCount() const", "uint get_vertexCount() const", AS_METHODPR(CollisionChain2D, GetVertexCount, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionChain2D::GetVertex(unsigned index) const", "const Vector2& GetVertex(uint) const", AS_METHODPR(CollisionChain2D, GetVertex, (unsigned) const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const PODVector<Vector2>& CollisionChain2D::GetVertices() const", "Array<Vector2>@ GetVertices() const", AS_FUNCTION_OBJFIRST(CollisionChain2D_GetVertices_void), AS_CALL_CDECL_OBJFIRST));
}

// class CollisionCircle2D | File: ../Urho2D/CollisionCircle2D.h
void CollectMembers_CollisionCircle2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    Remove(methods, "static void CollisionShape2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void CollisionCircle2D::SetRadius(float radius)", "void SetRadius(float)", AS_METHODPR(CollisionCircle2D, SetRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionCircle2D::SetRadius(float radius)", "void set_radius(float)", AS_METHODPR(CollisionCircle2D, SetRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionCircle2D::SetCenter(const Vector2& center)", "void SetCenter(const Vector2&in)", AS_METHODPR(CollisionCircle2D, SetCenter, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionCircle2D::SetCenter(const Vector2& center)", "void set_center(const Vector2&in)", AS_METHODPR(CollisionCircle2D, SetCenter, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionCircle2D::SetCenter(float x, float y)", "void SetCenter(float, float)", AS_METHODPR(CollisionCircle2D, SetCenter, (float, float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionCircle2D::GetRadius() const", "float GetRadius() const", AS_METHODPR(CollisionCircle2D, GetRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionCircle2D::GetRadius() const", "float get_radius() const", AS_METHODPR(CollisionCircle2D, GetRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionCircle2D::GetCenter() const", "const Vector2& GetCenter() const", AS_METHODPR(CollisionCircle2D, GetCenter, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionCircle2D::GetCenter() const", "const Vector2& get_center() const", AS_METHODPR(CollisionCircle2D, GetCenter, () const, const Vector2&), AS_CALL_THISCALL));
}

// class CollisionEdge2D | File: ../Urho2D/CollisionEdge2D.h
void CollectMembers_CollisionEdge2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    Remove(methods, "static void CollisionShape2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void CollisionEdge2D::SetVertex1(const Vector2& vertex)", "void SetVertex1(const Vector2&in)", AS_METHODPR(CollisionEdge2D, SetVertex1, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionEdge2D::SetVertex1(const Vector2& vertex)", "void set_vertex1(const Vector2&in)", AS_METHODPR(CollisionEdge2D, SetVertex1, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionEdge2D::SetVertex2(const Vector2& vertex)", "void SetVertex2(const Vector2&in)", AS_METHODPR(CollisionEdge2D, SetVertex2, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionEdge2D::SetVertex2(const Vector2& vertex)", "void set_vertex2(const Vector2&in)", AS_METHODPR(CollisionEdge2D, SetVertex2, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionEdge2D::SetVertices(const Vector2& vertex1, const Vector2& vertex2)", "void SetVertices(const Vector2&in, const Vector2&in)", AS_METHODPR(CollisionEdge2D, SetVertices, (const Vector2&, const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionEdge2D::GetVertex1() const", "const Vector2& GetVertex1() const", AS_METHODPR(CollisionEdge2D, GetVertex1, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionEdge2D::GetVertex1() const", "const Vector2& get_vertex1() const", AS_METHODPR(CollisionEdge2D, GetVertex1, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionEdge2D::GetVertex2() const", "const Vector2& GetVertex2() const", AS_METHODPR(CollisionEdge2D, GetVertex2, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionEdge2D::GetVertex2() const", "const Vector2& get_vertex2() const", AS_METHODPR(CollisionEdge2D, GetVertex2, () const, const Vector2&), AS_CALL_THISCALL));
}

// void CollisionPolygon2D::SetVertices(const PODVector<Vector2>& vertices)
#ifdef URHO3D_URHO2D
// void CollisionPolygon2D::SetVertices(const PODVector<Vector2>& vertices) | File: ../Urho2D/CollisionPolygon2D.h
static void CollisionPolygon2D_SetVertices_PODVectorVector2(CollisionPolygon2D* ptr, CScriptArray* vertices_conv)
{
    PODVector<Vector2> vertices = ArrayToPODVector<Vector2>(vertices_conv);
    ptr->SetVertices(vertices);
}
#endif


// const PODVector<Vector2>& CollisionPolygon2D::GetVertices() const
#ifdef URHO3D_URHO2D
// const PODVector<Vector2>& CollisionPolygon2D::GetVertices() const | File: ../Urho2D/CollisionPolygon2D.h
static CScriptArray* CollisionPolygon2D_GetVertices_void(CollisionPolygon2D* ptr)
{
    const PODVector<Vector2>& result = ptr->GetVertices();
    return VectorToArray(result, "Array<Vector2>");
}
#endif


// class CollisionPolygon2D | File: ../Urho2D/CollisionPolygon2D.h
void CollectMembers_CollisionPolygon2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_CollisionShape2D(methods);

    Remove(methods, "static void CollisionShape2D::RegisterObject(Context* context)");

    // PODVector<unsigned char> CollisionPolygon2D::GetVerticesAttr() const
    // Error: type "PODVector<unsigned char>" can not automatically bind
    // void CollisionPolygon2D::SetVerticesAttr(const PODVector<unsigned char>& value)
    // Error: type "const PODVector<unsigned char>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void CollisionPolygon2D::SetVertexCount(unsigned count)", "void SetVertexCount(uint)", AS_METHODPR(CollisionPolygon2D, SetVertexCount, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionPolygon2D::SetVertexCount(unsigned count)", "void set_vertexCount(uint)", AS_METHODPR(CollisionPolygon2D, SetVertexCount, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionPolygon2D::SetVertex(unsigned index, const Vector2& vertex)", "void SetVertex(uint, const Vector2&in)", AS_METHODPR(CollisionPolygon2D, SetVertex, (unsigned, const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionPolygon2D::SetVertices(const PODVector<Vector2>& vertices)", "void SetVertices(Array<Vector2>@+)", AS_FUNCTION_OBJFIRST(CollisionPolygon2D_SetVertices_PODVectorVector2), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("unsigned CollisionPolygon2D::GetVertexCount() const", "uint GetVertexCount() const", AS_METHODPR(CollisionPolygon2D, GetVertexCount, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned CollisionPolygon2D::GetVertexCount() const", "uint get_vertexCount() const", AS_METHODPR(CollisionPolygon2D, GetVertexCount, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& CollisionPolygon2D::GetVertex(unsigned index) const", "const Vector2& GetVertex(uint) const", AS_METHODPR(CollisionPolygon2D, GetVertex, (unsigned) const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const PODVector<Vector2>& CollisionPolygon2D::GetVertices() const", "Array<Vector2>@ GetVertices() const", AS_FUNCTION_OBJFIRST(CollisionPolygon2D_GetVertices_void), AS_CALL_CDECL_OBJFIRST));
}

// class CollisionShape2D | File: ../Urho2D/CollisionShape2D.h
void CollectMembers_CollisionShape2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    Remove(methods, "static void Animatable::RegisterObject(Context* context)");
    Remove(methods, "virtual void Component::OnSetEnabled()");

    // b2Fixture* CollisionShape2D::GetFixture() const
    // Error: type "b2Fixture*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(CollisionShape2D, OnSetEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetTrigger(bool trigger)", "void SetTrigger(bool)", AS_METHODPR(CollisionShape2D, SetTrigger, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetTrigger(bool trigger)", "void set_trigger(bool)", AS_METHODPR(CollisionShape2D, SetTrigger, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetCategoryBits(int categoryBits)", "void SetCategoryBits(int)", AS_METHODPR(CollisionShape2D, SetCategoryBits, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetCategoryBits(int categoryBits)", "void set_categoryBits(int)", AS_METHODPR(CollisionShape2D, SetCategoryBits, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetMaskBits(int maskBits)", "void SetMaskBits(int)", AS_METHODPR(CollisionShape2D, SetMaskBits, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetMaskBits(int maskBits)", "void set_maskBits(int)", AS_METHODPR(CollisionShape2D, SetMaskBits, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetGroupIndex(int groupIndex)", "void SetGroupIndex(int)", AS_METHODPR(CollisionShape2D, SetGroupIndex, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetGroupIndex(int groupIndex)", "void set_groupIndex(int)", AS_METHODPR(CollisionShape2D, SetGroupIndex, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetDensity(float density)", "void SetDensity(float)", AS_METHODPR(CollisionShape2D, SetDensity, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetDensity(float density)", "void set_density(float)", AS_METHODPR(CollisionShape2D, SetDensity, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetFriction(float friction)", "void SetFriction(float)", AS_METHODPR(CollisionShape2D, SetFriction, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetFriction(float friction)", "void set_friction(float)", AS_METHODPR(CollisionShape2D, SetFriction, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetRestitution(float restitution)", "void SetRestitution(float)", AS_METHODPR(CollisionShape2D, SetRestitution, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::SetRestitution(float restitution)", "void set_restitution(float)", AS_METHODPR(CollisionShape2D, SetRestitution, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::CreateFixture()", "void CreateFixture()", AS_METHODPR(CollisionShape2D, CreateFixture, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void CollisionShape2D::ReleaseFixture()", "void ReleaseFixture()", AS_METHODPR(CollisionShape2D, ReleaseFixture, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CollisionShape2D::IsTrigger() const", "bool IsTrigger() const", AS_METHODPR(CollisionShape2D, IsTrigger, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool CollisionShape2D::IsTrigger() const", "bool get_trigger() const", AS_METHODPR(CollisionShape2D, IsTrigger, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int CollisionShape2D::GetCategoryBits() const", "int GetCategoryBits() const", AS_METHODPR(CollisionShape2D, GetCategoryBits, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int CollisionShape2D::GetCategoryBits() const", "int get_categoryBits() const", AS_METHODPR(CollisionShape2D, GetCategoryBits, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int CollisionShape2D::GetMaskBits() const", "int GetMaskBits() const", AS_METHODPR(CollisionShape2D, GetMaskBits, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int CollisionShape2D::GetMaskBits() const", "int get_maskBits() const", AS_METHODPR(CollisionShape2D, GetMaskBits, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int CollisionShape2D::GetGroupIndex() const", "int GetGroupIndex() const", AS_METHODPR(CollisionShape2D, GetGroupIndex, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int CollisionShape2D::GetGroupIndex() const", "int get_groupIndex() const", AS_METHODPR(CollisionShape2D, GetGroupIndex, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionShape2D::GetDensity() const", "float GetDensity() const", AS_METHODPR(CollisionShape2D, GetDensity, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionShape2D::GetDensity() const", "float get_density() const", AS_METHODPR(CollisionShape2D, GetDensity, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionShape2D::GetFriction() const", "float GetFriction() const", AS_METHODPR(CollisionShape2D, GetFriction, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionShape2D::GetFriction() const", "float get_friction() const", AS_METHODPR(CollisionShape2D, GetFriction, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionShape2D::GetRestitution() const", "float GetRestitution() const", AS_METHODPR(CollisionShape2D, GetRestitution, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionShape2D::GetRestitution() const", "float get_restitution() const", AS_METHODPR(CollisionShape2D, GetRestitution, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionShape2D::GetMass() const", "float GetMass() const", AS_METHODPR(CollisionShape2D, GetMass, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionShape2D::GetMass() const", "float get_mass() const", AS_METHODPR(CollisionShape2D, GetMass, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionShape2D::GetInertia() const", "float GetInertia() const", AS_METHODPR(CollisionShape2D, GetInertia, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float CollisionShape2D::GetInertia() const", "float get_inertia() const", AS_METHODPR(CollisionShape2D, GetInertia, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 CollisionShape2D::GetMassCenter() const", "Vector2 GetMassCenter() const", AS_METHODPR(CollisionShape2D, GetMassCenter, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 CollisionShape2D::GetMassCenter() const", "Vector2 get_massCenter() const", AS_METHODPR(CollisionShape2D, GetMassCenter, () const, Vector2), AS_CALL_THISCALL));
}

// class Constraint2D | File: ../Urho2D/Constraint2D.h
void CollectMembers_Constraint2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    Remove(methods, "static void Animatable::RegisterObject(Context* context)");
    Remove(methods, "virtual void Component::OnSetEnabled()");
    Remove(methods, "virtual void Serializable::ApplyAttributes()");

    // b2Joint* Constraint2D::GetJoint() const
    // Error: type "b2Joint*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void Constraint2D::ApplyAttributes() override", "void ApplyAttributes()", AS_METHODPR(Constraint2D, ApplyAttributes, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Constraint2D::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(Constraint2D, OnSetEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Constraint2D::CreateJoint()", "void CreateJoint()", AS_METHODPR(Constraint2D, CreateJoint, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Constraint2D::ReleaseJoint()", "void ReleaseJoint()", AS_METHODPR(Constraint2D, ReleaseJoint, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Constraint2D::SetOtherBody(RigidBody2D* body)", "void SetOtherBody(RigidBody2D@+)", AS_METHODPR(Constraint2D, SetOtherBody, (RigidBody2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Constraint2D::SetOtherBody(RigidBody2D* body)", "void set_otherBody(RigidBody2D@+)", AS_METHODPR(Constraint2D, SetOtherBody, (RigidBody2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Constraint2D::SetCollideConnected(bool collideConnected)", "void SetCollideConnected(bool)", AS_METHODPR(Constraint2D, SetCollideConnected, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Constraint2D::SetCollideConnected(bool collideConnected)", "void set_collideConnected(bool)", AS_METHODPR(Constraint2D, SetCollideConnected, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Constraint2D::SetAttachedConstraint(Constraint2D* constraint)", "void SetAttachedConstraint(Constraint2D@+)", AS_METHODPR(Constraint2D, SetAttachedConstraint, (Constraint2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("RigidBody2D* Constraint2D::GetOwnerBody() const", "RigidBody2D@+ GetOwnerBody() const", AS_METHODPR(Constraint2D, GetOwnerBody, () const, RigidBody2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("RigidBody2D* Constraint2D::GetOwnerBody() const", "RigidBody2D@+ get_ownerBody() const", AS_METHODPR(Constraint2D, GetOwnerBody, () const, RigidBody2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("RigidBody2D* Constraint2D::GetOtherBody() const", "RigidBody2D@+ GetOtherBody() const", AS_METHODPR(Constraint2D, GetOtherBody, () const, RigidBody2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("RigidBody2D* Constraint2D::GetOtherBody() const", "RigidBody2D@+ get_otherBody() const", AS_METHODPR(Constraint2D, GetOtherBody, () const, RigidBody2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Constraint2D::GetCollideConnected() const", "bool GetCollideConnected() const", AS_METHODPR(Constraint2D, GetCollideConnected, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Constraint2D::GetCollideConnected() const", "bool get_collideConnected() const", AS_METHODPR(Constraint2D, GetCollideConnected, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Constraint2D* Constraint2D::GetAttachedConstraint() const", "Constraint2D@+ GetAttachedConstraint() const", AS_METHODPR(Constraint2D, GetAttachedConstraint, () const, Constraint2D*), AS_CALL_THISCALL));
}

// class ConstraintDistance2D | File: ../Urho2D/ConstraintDistance2D.h
void CollectMembers_ConstraintDistance2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintDistance2D::SetOwnerBodyAnchor(const Vector2& anchor)", "void SetOwnerBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintDistance2D, SetOwnerBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintDistance2D::SetOwnerBodyAnchor(const Vector2& anchor)", "void set_ownerBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintDistance2D, SetOwnerBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintDistance2D::SetOtherBodyAnchor(const Vector2& anchor)", "void SetOtherBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintDistance2D, SetOtherBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintDistance2D::SetOtherBodyAnchor(const Vector2& anchor)", "void set_otherBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintDistance2D, SetOtherBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintDistance2D::SetFrequencyHz(float frequencyHz)", "void SetFrequencyHz(float)", AS_METHODPR(ConstraintDistance2D, SetFrequencyHz, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintDistance2D::SetFrequencyHz(float frequencyHz)", "void set_frequencyHz(float)", AS_METHODPR(ConstraintDistance2D, SetFrequencyHz, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintDistance2D::SetDampingRatio(float dampingRatio)", "void SetDampingRatio(float)", AS_METHODPR(ConstraintDistance2D, SetDampingRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintDistance2D::SetDampingRatio(float dampingRatio)", "void set_dampingRatio(float)", AS_METHODPR(ConstraintDistance2D, SetDampingRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintDistance2D::SetLength(float length)", "void SetLength(float)", AS_METHODPR(ConstraintDistance2D, SetLength, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintDistance2D::SetLength(float length)", "void set_length(float)", AS_METHODPR(ConstraintDistance2D, SetLength, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintDistance2D::GetOwnerBodyAnchor() const", "const Vector2& GetOwnerBodyAnchor() const", AS_METHODPR(ConstraintDistance2D, GetOwnerBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintDistance2D::GetOwnerBodyAnchor() const", "const Vector2& get_ownerBodyAnchor() const", AS_METHODPR(ConstraintDistance2D, GetOwnerBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintDistance2D::GetOtherBodyAnchor() const", "const Vector2& GetOtherBodyAnchor() const", AS_METHODPR(ConstraintDistance2D, GetOtherBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintDistance2D::GetOtherBodyAnchor() const", "const Vector2& get_otherBodyAnchor() const", AS_METHODPR(ConstraintDistance2D, GetOtherBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintDistance2D::GetFrequencyHz() const", "float GetFrequencyHz() const", AS_METHODPR(ConstraintDistance2D, GetFrequencyHz, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintDistance2D::GetFrequencyHz() const", "float get_frequencyHz() const", AS_METHODPR(ConstraintDistance2D, GetFrequencyHz, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintDistance2D::GetDampingRatio() const", "float GetDampingRatio() const", AS_METHODPR(ConstraintDistance2D, GetDampingRatio, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintDistance2D::GetDampingRatio() const", "float get_dampingRatio() const", AS_METHODPR(ConstraintDistance2D, GetDampingRatio, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintDistance2D::GetLength() const", "float GetLength() const", AS_METHODPR(ConstraintDistance2D, GetLength, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintDistance2D::GetLength() const", "float get_length() const", AS_METHODPR(ConstraintDistance2D, GetLength, () const, float), AS_CALL_THISCALL));
}

// class ConstraintFriction2D | File: ../Urho2D/ConstraintFriction2D.h
void CollectMembers_ConstraintFriction2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintFriction2D::SetAnchor(const Vector2& anchor)", "void SetAnchor(const Vector2&in)", AS_METHODPR(ConstraintFriction2D, SetAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintFriction2D::SetAnchor(const Vector2& anchor)", "void set_anchor(const Vector2&in)", AS_METHODPR(ConstraintFriction2D, SetAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintFriction2D::SetMaxForce(float maxForce)", "void SetMaxForce(float)", AS_METHODPR(ConstraintFriction2D, SetMaxForce, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintFriction2D::SetMaxForce(float maxForce)", "void set_maxForce(float)", AS_METHODPR(ConstraintFriction2D, SetMaxForce, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintFriction2D::SetMaxTorque(float maxTorque)", "void SetMaxTorque(float)", AS_METHODPR(ConstraintFriction2D, SetMaxTorque, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintFriction2D::SetMaxTorque(float maxTorque)", "void set_maxTorque(float)", AS_METHODPR(ConstraintFriction2D, SetMaxTorque, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintFriction2D::GetAnchor() const", "const Vector2& GetAnchor() const", AS_METHODPR(ConstraintFriction2D, GetAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintFriction2D::GetAnchor() const", "const Vector2& get_anchor() const", AS_METHODPR(ConstraintFriction2D, GetAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintFriction2D::GetMaxForce() const", "float GetMaxForce() const", AS_METHODPR(ConstraintFriction2D, GetMaxForce, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintFriction2D::GetMaxForce() const", "float get_maxForce() const", AS_METHODPR(ConstraintFriction2D, GetMaxForce, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintFriction2D::GetMaxTorque() const", "float GetMaxTorque() const", AS_METHODPR(ConstraintFriction2D, GetMaxTorque, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintFriction2D::GetMaxTorque() const", "float get_maxTorque() const", AS_METHODPR(ConstraintFriction2D, GetMaxTorque, () const, float), AS_CALL_THISCALL));
}

// class ConstraintGear2D | File: ../Urho2D/ConstraintGear2D.h
void CollectMembers_ConstraintGear2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintGear2D::SetOwnerConstraint(Constraint2D* constraint)", "void SetOwnerConstraint(Constraint2D@+)", AS_METHODPR(ConstraintGear2D, SetOwnerConstraint, (Constraint2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintGear2D::SetOwnerConstraint(Constraint2D* constraint)", "void set_ownerConstraint(Constraint2D@+)", AS_METHODPR(ConstraintGear2D, SetOwnerConstraint, (Constraint2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintGear2D::SetOtherConstraint(Constraint2D* constraint)", "void SetOtherConstraint(Constraint2D@+)", AS_METHODPR(ConstraintGear2D, SetOtherConstraint, (Constraint2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintGear2D::SetOtherConstraint(Constraint2D* constraint)", "void set_otherConstraint(Constraint2D@+)", AS_METHODPR(ConstraintGear2D, SetOtherConstraint, (Constraint2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintGear2D::SetRatio(float ratio)", "void SetRatio(float)", AS_METHODPR(ConstraintGear2D, SetRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintGear2D::SetRatio(float ratio)", "void set_ratio(float)", AS_METHODPR(ConstraintGear2D, SetRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Constraint2D* ConstraintGear2D::GetOwnerConstraint() const", "Constraint2D@+ GetOwnerConstraint() const", AS_METHODPR(ConstraintGear2D, GetOwnerConstraint, () const, Constraint2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Constraint2D* ConstraintGear2D::GetOwnerConstraint() const", "Constraint2D@+ get_ownerConstraint() const", AS_METHODPR(ConstraintGear2D, GetOwnerConstraint, () const, Constraint2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Constraint2D* ConstraintGear2D::GetOtherConstraint() const", "Constraint2D@+ GetOtherConstraint() const", AS_METHODPR(ConstraintGear2D, GetOtherConstraint, () const, Constraint2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Constraint2D* ConstraintGear2D::GetOtherConstraint() const", "Constraint2D@+ get_otherConstraint() const", AS_METHODPR(ConstraintGear2D, GetOtherConstraint, () const, Constraint2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintGear2D::GetRatio() const", "float GetRatio() const", AS_METHODPR(ConstraintGear2D, GetRatio, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintGear2D::GetRatio() const", "float get_ratio() const", AS_METHODPR(ConstraintGear2D, GetRatio, () const, float), AS_CALL_THISCALL));
}

// class ConstraintMotor2D | File: ../Urho2D/ConstraintMotor2D.h
void CollectMembers_ConstraintMotor2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintMotor2D::SetLinearOffset(const Vector2& linearOffset)", "void SetLinearOffset(const Vector2&in)", AS_METHODPR(ConstraintMotor2D, SetLinearOffset, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMotor2D::SetLinearOffset(const Vector2& linearOffset)", "void set_linearOffset(const Vector2&in)", AS_METHODPR(ConstraintMotor2D, SetLinearOffset, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMotor2D::SetAngularOffset(float angularOffset)", "void SetAngularOffset(float)", AS_METHODPR(ConstraintMotor2D, SetAngularOffset, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMotor2D::SetAngularOffset(float angularOffset)", "void set_angularOffset(float)", AS_METHODPR(ConstraintMotor2D, SetAngularOffset, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMotor2D::SetMaxForce(float maxForce)", "void SetMaxForce(float)", AS_METHODPR(ConstraintMotor2D, SetMaxForce, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMotor2D::SetMaxForce(float maxForce)", "void set_maxForce(float)", AS_METHODPR(ConstraintMotor2D, SetMaxForce, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMotor2D::SetMaxTorque(float maxTorque)", "void SetMaxTorque(float)", AS_METHODPR(ConstraintMotor2D, SetMaxTorque, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMotor2D::SetMaxTorque(float maxTorque)", "void set_maxTorque(float)", AS_METHODPR(ConstraintMotor2D, SetMaxTorque, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMotor2D::SetCorrectionFactor(float correctionFactor)", "void SetCorrectionFactor(float)", AS_METHODPR(ConstraintMotor2D, SetCorrectionFactor, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMotor2D::SetCorrectionFactor(float correctionFactor)", "void set_correctionFactor(float)", AS_METHODPR(ConstraintMotor2D, SetCorrectionFactor, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintMotor2D::GetLinearOffset() const", "const Vector2& GetLinearOffset() const", AS_METHODPR(ConstraintMotor2D, GetLinearOffset, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintMotor2D::GetLinearOffset() const", "const Vector2& get_linearOffset() const", AS_METHODPR(ConstraintMotor2D, GetLinearOffset, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMotor2D::GetAngularOffset() const", "float GetAngularOffset() const", AS_METHODPR(ConstraintMotor2D, GetAngularOffset, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMotor2D::GetAngularOffset() const", "float get_angularOffset() const", AS_METHODPR(ConstraintMotor2D, GetAngularOffset, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMotor2D::GetMaxForce() const", "float GetMaxForce() const", AS_METHODPR(ConstraintMotor2D, GetMaxForce, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMotor2D::GetMaxForce() const", "float get_maxForce() const", AS_METHODPR(ConstraintMotor2D, GetMaxForce, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMotor2D::GetMaxTorque() const", "float GetMaxTorque() const", AS_METHODPR(ConstraintMotor2D, GetMaxTorque, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMotor2D::GetMaxTorque() const", "float get_maxTorque() const", AS_METHODPR(ConstraintMotor2D, GetMaxTorque, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMotor2D::GetCorrectionFactor() const", "float GetCorrectionFactor() const", AS_METHODPR(ConstraintMotor2D, GetCorrectionFactor, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMotor2D::GetCorrectionFactor() const", "float get_correctionFactor() const", AS_METHODPR(ConstraintMotor2D, GetCorrectionFactor, () const, float), AS_CALL_THISCALL));
}

// class ConstraintMouse2D | File: ../Urho2D/ConstraintMouse2D.h
void CollectMembers_ConstraintMouse2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintMouse2D::SetTarget(const Vector2& target)", "void SetTarget(const Vector2&in)", AS_METHODPR(ConstraintMouse2D, SetTarget, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMouse2D::SetTarget(const Vector2& target)", "void set_target(const Vector2&in)", AS_METHODPR(ConstraintMouse2D, SetTarget, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMouse2D::SetMaxForce(float maxForce)", "void SetMaxForce(float)", AS_METHODPR(ConstraintMouse2D, SetMaxForce, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMouse2D::SetMaxForce(float maxForce)", "void set_maxForce(float)", AS_METHODPR(ConstraintMouse2D, SetMaxForce, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMouse2D::SetFrequencyHz(float frequencyHz)", "void SetFrequencyHz(float)", AS_METHODPR(ConstraintMouse2D, SetFrequencyHz, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMouse2D::SetFrequencyHz(float frequencyHz)", "void set_frequencyHz(float)", AS_METHODPR(ConstraintMouse2D, SetFrequencyHz, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMouse2D::SetDampingRatio(float dampingRatio)", "void SetDampingRatio(float)", AS_METHODPR(ConstraintMouse2D, SetDampingRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintMouse2D::SetDampingRatio(float dampingRatio)", "void set_dampingRatio(float)", AS_METHODPR(ConstraintMouse2D, SetDampingRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintMouse2D::GetTarget() const", "const Vector2& GetTarget() const", AS_METHODPR(ConstraintMouse2D, GetTarget, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintMouse2D::GetTarget() const", "const Vector2& get_target() const", AS_METHODPR(ConstraintMouse2D, GetTarget, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMouse2D::GetMaxForce() const", "float GetMaxForce() const", AS_METHODPR(ConstraintMouse2D, GetMaxForce, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMouse2D::GetMaxForce() const", "float get_maxForce() const", AS_METHODPR(ConstraintMouse2D, GetMaxForce, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMouse2D::GetFrequencyHz() const", "float GetFrequencyHz() const", AS_METHODPR(ConstraintMouse2D, GetFrequencyHz, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMouse2D::GetFrequencyHz() const", "float get_frequencyHz() const", AS_METHODPR(ConstraintMouse2D, GetFrequencyHz, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMouse2D::GetDampingRatio() const", "float GetDampingRatio() const", AS_METHODPR(ConstraintMouse2D, GetDampingRatio, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintMouse2D::GetDampingRatio() const", "float get_dampingRatio() const", AS_METHODPR(ConstraintMouse2D, GetDampingRatio, () const, float), AS_CALL_THISCALL));
}

// class ConstraintPrismatic2D | File: ../Urho2D/ConstraintPrismatic2D.h
void CollectMembers_ConstraintPrismatic2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetAnchor(const Vector2& anchor)", "void SetAnchor(const Vector2&in)", AS_METHODPR(ConstraintPrismatic2D, SetAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetAnchor(const Vector2& anchor)", "void set_anchor(const Vector2&in)", AS_METHODPR(ConstraintPrismatic2D, SetAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetAxis(const Vector2& axis)", "void SetAxis(const Vector2&in)", AS_METHODPR(ConstraintPrismatic2D, SetAxis, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetAxis(const Vector2& axis)", "void set_axis(const Vector2&in)", AS_METHODPR(ConstraintPrismatic2D, SetAxis, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetEnableLimit(bool enableLimit)", "void SetEnableLimit(bool)", AS_METHODPR(ConstraintPrismatic2D, SetEnableLimit, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetEnableLimit(bool enableLimit)", "void set_enableLimit(bool)", AS_METHODPR(ConstraintPrismatic2D, SetEnableLimit, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetLowerTranslation(float lowerTranslation)", "void SetLowerTranslation(float)", AS_METHODPR(ConstraintPrismatic2D, SetLowerTranslation, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetLowerTranslation(float lowerTranslation)", "void set_lowerTranslation(float)", AS_METHODPR(ConstraintPrismatic2D, SetLowerTranslation, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetUpperTranslation(float upperTranslation)", "void SetUpperTranslation(float)", AS_METHODPR(ConstraintPrismatic2D, SetUpperTranslation, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetUpperTranslation(float upperTranslation)", "void set_upperTranslation(float)", AS_METHODPR(ConstraintPrismatic2D, SetUpperTranslation, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetEnableMotor(bool enableMotor)", "void SetEnableMotor(bool)", AS_METHODPR(ConstraintPrismatic2D, SetEnableMotor, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetEnableMotor(bool enableMotor)", "void set_enableMotor(bool)", AS_METHODPR(ConstraintPrismatic2D, SetEnableMotor, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetMaxMotorForce(float maxMotorForce)", "void SetMaxMotorForce(float)", AS_METHODPR(ConstraintPrismatic2D, SetMaxMotorForce, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetMaxMotorForce(float maxMotorForce)", "void set_maxMotorForce(float)", AS_METHODPR(ConstraintPrismatic2D, SetMaxMotorForce, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetMotorSpeed(float motorSpeed)", "void SetMotorSpeed(float)", AS_METHODPR(ConstraintPrismatic2D, SetMotorSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPrismatic2D::SetMotorSpeed(float motorSpeed)", "void set_motorSpeed(float)", AS_METHODPR(ConstraintPrismatic2D, SetMotorSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPrismatic2D::GetAnchor() const", "const Vector2& GetAnchor() const", AS_METHODPR(ConstraintPrismatic2D, GetAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPrismatic2D::GetAnchor() const", "const Vector2& get_anchor() const", AS_METHODPR(ConstraintPrismatic2D, GetAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPrismatic2D::GetAxis() const", "const Vector2& GetAxis() const", AS_METHODPR(ConstraintPrismatic2D, GetAxis, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPrismatic2D::GetAxis() const", "const Vector2& get_axis() const", AS_METHODPR(ConstraintPrismatic2D, GetAxis, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ConstraintPrismatic2D::GetEnableLimit() const", "bool GetEnableLimit() const", AS_METHODPR(ConstraintPrismatic2D, GetEnableLimit, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ConstraintPrismatic2D::GetEnableLimit() const", "bool get_enableLimit() const", AS_METHODPR(ConstraintPrismatic2D, GetEnableLimit, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintPrismatic2D::GetLowerTranslation() const", "float GetLowerTranslation() const", AS_METHODPR(ConstraintPrismatic2D, GetLowerTranslation, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintPrismatic2D::GetLowerTranslation() const", "float get_lowerTranslation() const", AS_METHODPR(ConstraintPrismatic2D, GetLowerTranslation, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintPrismatic2D::GetUpperTranslation() const", "float GetUpperTranslation() const", AS_METHODPR(ConstraintPrismatic2D, GetUpperTranslation, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintPrismatic2D::GetUpperTranslation() const", "float get_upperTranslation() const", AS_METHODPR(ConstraintPrismatic2D, GetUpperTranslation, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ConstraintPrismatic2D::GetEnableMotor() const", "bool GetEnableMotor() const", AS_METHODPR(ConstraintPrismatic2D, GetEnableMotor, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ConstraintPrismatic2D::GetEnableMotor() const", "bool get_enableMotor() const", AS_METHODPR(ConstraintPrismatic2D, GetEnableMotor, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintPrismatic2D::GetMaxMotorForce() const", "float GetMaxMotorForce() const", AS_METHODPR(ConstraintPrismatic2D, GetMaxMotorForce, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintPrismatic2D::GetMaxMotorForce() const", "float get_maxMotorForce() const", AS_METHODPR(ConstraintPrismatic2D, GetMaxMotorForce, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintPrismatic2D::GetMotorSpeed() const", "float GetMotorSpeed() const", AS_METHODPR(ConstraintPrismatic2D, GetMotorSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintPrismatic2D::GetMotorSpeed() const", "float get_motorSpeed() const", AS_METHODPR(ConstraintPrismatic2D, GetMotorSpeed, () const, float), AS_CALL_THISCALL));
}

// class ConstraintPulley2D | File: ../Urho2D/ConstraintPulley2D.h
void CollectMembers_ConstraintPulley2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintPulley2D::SetOwnerBodyGroundAnchor(const Vector2& groundAnchor)", "void SetOwnerBodyGroundAnchor(const Vector2&in)", AS_METHODPR(ConstraintPulley2D, SetOwnerBodyGroundAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPulley2D::SetOwnerBodyGroundAnchor(const Vector2& groundAnchor)", "void set_ownerBodyGroundAnchor(const Vector2&in)", AS_METHODPR(ConstraintPulley2D, SetOwnerBodyGroundAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPulley2D::SetOtherBodyGroundAnchor(const Vector2& groundAnchor)", "void SetOtherBodyGroundAnchor(const Vector2&in)", AS_METHODPR(ConstraintPulley2D, SetOtherBodyGroundAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPulley2D::SetOtherBodyGroundAnchor(const Vector2& groundAnchor)", "void set_otherBodyGroundAnchor(const Vector2&in)", AS_METHODPR(ConstraintPulley2D, SetOtherBodyGroundAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPulley2D::SetOwnerBodyAnchor(const Vector2& anchor)", "void SetOwnerBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintPulley2D, SetOwnerBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPulley2D::SetOwnerBodyAnchor(const Vector2& anchor)", "void set_ownerBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintPulley2D, SetOwnerBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPulley2D::SetOtherBodyAnchor(const Vector2& anchor)", "void SetOtherBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintPulley2D, SetOtherBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPulley2D::SetOtherBodyAnchor(const Vector2& anchor)", "void set_otherBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintPulley2D, SetOtherBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPulley2D::SetRatio(float ratio)", "void SetRatio(float)", AS_METHODPR(ConstraintPulley2D, SetRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintPulley2D::SetRatio(float ratio)", "void set_ratio(float)", AS_METHODPR(ConstraintPulley2D, SetRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPulley2D::GetOwnerBodyGroundAnchor() const", "const Vector2& GetOwnerBodyGroundAnchor() const", AS_METHODPR(ConstraintPulley2D, GetOwnerBodyGroundAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPulley2D::GetOwnerBodyGroundAnchor() const", "const Vector2& get_ownerBodyGroundAnchor() const", AS_METHODPR(ConstraintPulley2D, GetOwnerBodyGroundAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPulley2D::GetOtherBodyGroundAnchor() const", "const Vector2& GetOtherBodyGroundAnchor() const", AS_METHODPR(ConstraintPulley2D, GetOtherBodyGroundAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPulley2D::GetOtherBodyGroundAnchor() const", "const Vector2& get_otherBodyGroundAnchor() const", AS_METHODPR(ConstraintPulley2D, GetOtherBodyGroundAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPulley2D::GetOwnerBodyAnchor() const", "const Vector2& GetOwnerBodyAnchor() const", AS_METHODPR(ConstraintPulley2D, GetOwnerBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPulley2D::GetOwnerBodyAnchor() const", "const Vector2& get_ownerBodyAnchor() const", AS_METHODPR(ConstraintPulley2D, GetOwnerBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPulley2D::GetOtherBodyAnchor() const", "const Vector2& GetOtherBodyAnchor() const", AS_METHODPR(ConstraintPulley2D, GetOtherBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintPulley2D::GetOtherBodyAnchor() const", "const Vector2& get_otherBodyAnchor() const", AS_METHODPR(ConstraintPulley2D, GetOtherBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintPulley2D::GetRatio() const", "float GetRatio() const", AS_METHODPR(ConstraintPulley2D, GetRatio, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintPulley2D::GetRatio() const", "float get_ratio() const", AS_METHODPR(ConstraintPulley2D, GetRatio, () const, float), AS_CALL_THISCALL));
}

// class ConstraintRevolute2D | File: ../Urho2D/ConstraintRevolute2D.h
void CollectMembers_ConstraintRevolute2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetAnchor(const Vector2& anchor)", "void SetAnchor(const Vector2&in)", AS_METHODPR(ConstraintRevolute2D, SetAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetAnchor(const Vector2& anchor)", "void set_anchor(const Vector2&in)", AS_METHODPR(ConstraintRevolute2D, SetAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetEnableLimit(bool enableLimit)", "void SetEnableLimit(bool)", AS_METHODPR(ConstraintRevolute2D, SetEnableLimit, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetEnableLimit(bool enableLimit)", "void set_enableLimit(bool)", AS_METHODPR(ConstraintRevolute2D, SetEnableLimit, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetLowerAngle(float lowerAngle)", "void SetLowerAngle(float)", AS_METHODPR(ConstraintRevolute2D, SetLowerAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetLowerAngle(float lowerAngle)", "void set_lowerAngle(float)", AS_METHODPR(ConstraintRevolute2D, SetLowerAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetUpperAngle(float upperAngle)", "void SetUpperAngle(float)", AS_METHODPR(ConstraintRevolute2D, SetUpperAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetUpperAngle(float upperAngle)", "void set_upperAngle(float)", AS_METHODPR(ConstraintRevolute2D, SetUpperAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetEnableMotor(bool enableMotor)", "void SetEnableMotor(bool)", AS_METHODPR(ConstraintRevolute2D, SetEnableMotor, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetEnableMotor(bool enableMotor)", "void set_enableMotor(bool)", AS_METHODPR(ConstraintRevolute2D, SetEnableMotor, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetMotorSpeed(float motorSpeed)", "void SetMotorSpeed(float)", AS_METHODPR(ConstraintRevolute2D, SetMotorSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetMotorSpeed(float motorSpeed)", "void set_motorSpeed(float)", AS_METHODPR(ConstraintRevolute2D, SetMotorSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetMaxMotorTorque(float maxMotorTorque)", "void SetMaxMotorTorque(float)", AS_METHODPR(ConstraintRevolute2D, SetMaxMotorTorque, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRevolute2D::SetMaxMotorTorque(float maxMotorTorque)", "void set_maxMotorTorque(float)", AS_METHODPR(ConstraintRevolute2D, SetMaxMotorTorque, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintRevolute2D::GetAnchor() const", "const Vector2& GetAnchor() const", AS_METHODPR(ConstraintRevolute2D, GetAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintRevolute2D::GetAnchor() const", "const Vector2& get_anchor() const", AS_METHODPR(ConstraintRevolute2D, GetAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ConstraintRevolute2D::GetEnableLimit() const", "bool GetEnableLimit() const", AS_METHODPR(ConstraintRevolute2D, GetEnableLimit, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ConstraintRevolute2D::GetEnableLimit() const", "bool get_enableLimit() const", AS_METHODPR(ConstraintRevolute2D, GetEnableLimit, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintRevolute2D::GetLowerAngle() const", "float GetLowerAngle() const", AS_METHODPR(ConstraintRevolute2D, GetLowerAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintRevolute2D::GetLowerAngle() const", "float get_lowerAngle() const", AS_METHODPR(ConstraintRevolute2D, GetLowerAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintRevolute2D::GetUpperAngle() const", "float GetUpperAngle() const", AS_METHODPR(ConstraintRevolute2D, GetUpperAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintRevolute2D::GetUpperAngle() const", "float get_upperAngle() const", AS_METHODPR(ConstraintRevolute2D, GetUpperAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ConstraintRevolute2D::GetEnableMotor() const", "bool GetEnableMotor() const", AS_METHODPR(ConstraintRevolute2D, GetEnableMotor, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ConstraintRevolute2D::GetEnableMotor() const", "bool get_enableMotor() const", AS_METHODPR(ConstraintRevolute2D, GetEnableMotor, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintRevolute2D::GetMotorSpeed() const", "float GetMotorSpeed() const", AS_METHODPR(ConstraintRevolute2D, GetMotorSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintRevolute2D::GetMotorSpeed() const", "float get_motorSpeed() const", AS_METHODPR(ConstraintRevolute2D, GetMotorSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintRevolute2D::GetMaxMotorTorque() const", "float GetMaxMotorTorque() const", AS_METHODPR(ConstraintRevolute2D, GetMaxMotorTorque, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintRevolute2D::GetMaxMotorTorque() const", "float get_maxMotorTorque() const", AS_METHODPR(ConstraintRevolute2D, GetMaxMotorTorque, () const, float), AS_CALL_THISCALL));
}

// class ConstraintRope2D | File: ../Urho2D/ConstraintRope2D.h
void CollectMembers_ConstraintRope2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintRope2D::SetOwnerBodyAnchor(const Vector2& anchor)", "void SetOwnerBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintRope2D, SetOwnerBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRope2D::SetOwnerBodyAnchor(const Vector2& anchor)", "void set_ownerBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintRope2D, SetOwnerBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRope2D::SetOtherBodyAnchor(const Vector2& anchor)", "void SetOtherBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintRope2D, SetOtherBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRope2D::SetOtherBodyAnchor(const Vector2& anchor)", "void set_otherBodyAnchor(const Vector2&in)", AS_METHODPR(ConstraintRope2D, SetOtherBodyAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRope2D::SetMaxLength(float maxLength)", "void SetMaxLength(float)", AS_METHODPR(ConstraintRope2D, SetMaxLength, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintRope2D::SetMaxLength(float maxLength)", "void set_maxLength(float)", AS_METHODPR(ConstraintRope2D, SetMaxLength, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintRope2D::GetOwnerBodyAnchor() const", "const Vector2& GetOwnerBodyAnchor() const", AS_METHODPR(ConstraintRope2D, GetOwnerBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintRope2D::GetOwnerBodyAnchor() const", "const Vector2& get_ownerBodyAnchor() const", AS_METHODPR(ConstraintRope2D, GetOwnerBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintRope2D::GetOtherBodyAnchor() const", "const Vector2& GetOtherBodyAnchor() const", AS_METHODPR(ConstraintRope2D, GetOtherBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintRope2D::GetOtherBodyAnchor() const", "const Vector2& get_otherBodyAnchor() const", AS_METHODPR(ConstraintRope2D, GetOtherBodyAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintRope2D::GetMaxLength() const", "float GetMaxLength() const", AS_METHODPR(ConstraintRope2D, GetMaxLength, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintRope2D::GetMaxLength() const", "float get_maxLength() const", AS_METHODPR(ConstraintRope2D, GetMaxLength, () const, float), AS_CALL_THISCALL));
}

// class ConstraintWeld2D | File: ../Urho2D/ConstraintWeld2D.h
void CollectMembers_ConstraintWeld2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintWeld2D::SetAnchor(const Vector2& anchor)", "void SetAnchor(const Vector2&in)", AS_METHODPR(ConstraintWeld2D, SetAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWeld2D::SetAnchor(const Vector2& anchor)", "void set_anchor(const Vector2&in)", AS_METHODPR(ConstraintWeld2D, SetAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWeld2D::SetFrequencyHz(float frequencyHz)", "void SetFrequencyHz(float)", AS_METHODPR(ConstraintWeld2D, SetFrequencyHz, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWeld2D::SetFrequencyHz(float frequencyHz)", "void set_frequencyHz(float)", AS_METHODPR(ConstraintWeld2D, SetFrequencyHz, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWeld2D::SetDampingRatio(float dampingRatio)", "void SetDampingRatio(float)", AS_METHODPR(ConstraintWeld2D, SetDampingRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWeld2D::SetDampingRatio(float dampingRatio)", "void set_dampingRatio(float)", AS_METHODPR(ConstraintWeld2D, SetDampingRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintWeld2D::GetAnchor() const", "const Vector2& GetAnchor() const", AS_METHODPR(ConstraintWeld2D, GetAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintWeld2D::GetAnchor() const", "const Vector2& get_anchor() const", AS_METHODPR(ConstraintWeld2D, GetAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWeld2D::GetFrequencyHz() const", "float GetFrequencyHz() const", AS_METHODPR(ConstraintWeld2D, GetFrequencyHz, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWeld2D::GetFrequencyHz() const", "float get_frequencyHz() const", AS_METHODPR(ConstraintWeld2D, GetFrequencyHz, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWeld2D::GetDampingRatio() const", "float GetDampingRatio() const", AS_METHODPR(ConstraintWeld2D, GetDampingRatio, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWeld2D::GetDampingRatio() const", "float get_dampingRatio() const", AS_METHODPR(ConstraintWeld2D, GetDampingRatio, () const, float), AS_CALL_THISCALL));
}

// class ConstraintWheel2D | File: ../Urho2D/ConstraintWheel2D.h
void CollectMembers_ConstraintWheel2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Constraint2D(methods);

    Remove(methods, "static void Constraint2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetAnchor(const Vector2& anchor)", "void SetAnchor(const Vector2&in)", AS_METHODPR(ConstraintWheel2D, SetAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetAnchor(const Vector2& anchor)", "void set_anchor(const Vector2&in)", AS_METHODPR(ConstraintWheel2D, SetAnchor, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetAxis(const Vector2& axis)", "void SetAxis(const Vector2&in)", AS_METHODPR(ConstraintWheel2D, SetAxis, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetAxis(const Vector2& axis)", "void set_axis(const Vector2&in)", AS_METHODPR(ConstraintWheel2D, SetAxis, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetEnableMotor(bool enableMotor)", "void SetEnableMotor(bool)", AS_METHODPR(ConstraintWheel2D, SetEnableMotor, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetEnableMotor(bool enableMotor)", "void set_enableMotor(bool)", AS_METHODPR(ConstraintWheel2D, SetEnableMotor, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetMaxMotorTorque(float maxMotorTorque)", "void SetMaxMotorTorque(float)", AS_METHODPR(ConstraintWheel2D, SetMaxMotorTorque, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetMaxMotorTorque(float maxMotorTorque)", "void set_maxMotorTorque(float)", AS_METHODPR(ConstraintWheel2D, SetMaxMotorTorque, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetMotorSpeed(float motorSpeed)", "void SetMotorSpeed(float)", AS_METHODPR(ConstraintWheel2D, SetMotorSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetMotorSpeed(float motorSpeed)", "void set_motorSpeed(float)", AS_METHODPR(ConstraintWheel2D, SetMotorSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetFrequencyHz(float frequencyHz)", "void SetFrequencyHz(float)", AS_METHODPR(ConstraintWheel2D, SetFrequencyHz, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetFrequencyHz(float frequencyHz)", "void set_frequencyHz(float)", AS_METHODPR(ConstraintWheel2D, SetFrequencyHz, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetDampingRatio(float dampingRatio)", "void SetDampingRatio(float)", AS_METHODPR(ConstraintWheel2D, SetDampingRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ConstraintWheel2D::SetDampingRatio(float dampingRatio)", "void set_dampingRatio(float)", AS_METHODPR(ConstraintWheel2D, SetDampingRatio, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintWheel2D::GetAnchor() const", "const Vector2& GetAnchor() const", AS_METHODPR(ConstraintWheel2D, GetAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintWheel2D::GetAnchor() const", "const Vector2& get_anchor() const", AS_METHODPR(ConstraintWheel2D, GetAnchor, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintWheel2D::GetAxis() const", "const Vector2& GetAxis() const", AS_METHODPR(ConstraintWheel2D, GetAxis, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ConstraintWheel2D::GetAxis() const", "const Vector2& get_axis() const", AS_METHODPR(ConstraintWheel2D, GetAxis, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ConstraintWheel2D::GetEnableMotor() const", "bool GetEnableMotor() const", AS_METHODPR(ConstraintWheel2D, GetEnableMotor, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ConstraintWheel2D::GetEnableMotor() const", "bool get_enableMotor() const", AS_METHODPR(ConstraintWheel2D, GetEnableMotor, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWheel2D::GetMaxMotorTorque() const", "float GetMaxMotorTorque() const", AS_METHODPR(ConstraintWheel2D, GetMaxMotorTorque, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWheel2D::GetMaxMotorTorque() const", "float get_maxMotorTorque() const", AS_METHODPR(ConstraintWheel2D, GetMaxMotorTorque, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWheel2D::GetMotorSpeed() const", "float GetMotorSpeed() const", AS_METHODPR(ConstraintWheel2D, GetMotorSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWheel2D::GetMotorSpeed() const", "float get_motorSpeed() const", AS_METHODPR(ConstraintWheel2D, GetMotorSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWheel2D::GetFrequencyHz() const", "float GetFrequencyHz() const", AS_METHODPR(ConstraintWheel2D, GetFrequencyHz, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWheel2D::GetFrequencyHz() const", "float get_frequencyHz() const", AS_METHODPR(ConstraintWheel2D, GetFrequencyHz, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWheel2D::GetDampingRatio() const", "float GetDampingRatio() const", AS_METHODPR(ConstraintWheel2D, GetDampingRatio, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ConstraintWheel2D::GetDampingRatio() const", "float get_dampingRatio() const", AS_METHODPR(ConstraintWheel2D, GetDampingRatio, () const, float), AS_CALL_THISCALL));
}

// struct DelayedWorldTransform2D | File: ../Urho2D/PhysicsWorld2D.h
void CollectMembers_DelayedWorldTransform2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Drawable2D | File: ../Urho2D/Drawable2D.h
void CollectMembers_Drawable2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    Remove(methods, "static void Drawable::RegisterObject(Context* context)");
    Remove(methods, "void Drawable::OnSetEnabled() override");

    // const Vector<SourceBatch2D>& Drawable2D::GetSourceBatches()
    // Error: type "const Vector<SourceBatch2D>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void Drawable2D::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(Drawable2D, OnSetEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Drawable2D::SetLayer(int layer)", "void SetLayer(int)", AS_METHODPR(Drawable2D, SetLayer, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Drawable2D::SetLayer(int layer)", "void set_layer(int)", AS_METHODPR(Drawable2D, SetLayer, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Drawable2D::SetOrderInLayer(int orderInLayer)", "void SetOrderInLayer(int)", AS_METHODPR(Drawable2D, SetOrderInLayer, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Drawable2D::SetOrderInLayer(int orderInLayer)", "void set_orderInLayer(int)", AS_METHODPR(Drawable2D, SetOrderInLayer, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Drawable2D::GetLayer() const", "int GetLayer() const", AS_METHODPR(Drawable2D, GetLayer, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Drawable2D::GetLayer() const", "int get_layer() const", AS_METHODPR(Drawable2D, GetLayer, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Drawable2D::GetOrderInLayer() const", "int GetOrderInLayer() const", AS_METHODPR(Drawable2D, GetOrderInLayer, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int Drawable2D::GetOrderInLayer() const", "int get_orderInLayer() const", AS_METHODPR(Drawable2D, GetOrderInLayer, () const, int), AS_CALL_THISCALL));
}

// struct Particle2D | File: ../Urho2D/ParticleEmitter2D.h
void CollectMembers_Particle2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

// SharedPtr<ParticleEffect2D> ParticleEffect2D::Clone(const String& cloneName=String::EMPTY) const
#ifdef URHO3D_URHO2D
// SharedPtr<ParticleEffect2D> ParticleEffect2D::Clone(const String& cloneName=String::EMPTY) const | File: ../Urho2D/ParticleEffect2D.h
static ParticleEffect2D* ParticleEffect2D_Clone_String(ParticleEffect2D* ptr, const String& cloneName)
{
    SharedPtr<ParticleEffect2D> result = ptr->Clone(cloneName);
    return result.Detach();
}
#endif


// class ParticleEffect2D | File: ../Urho2D/ParticleEffect2D.h
void CollectMembers_ParticleEffect2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(methods, "virtual bool Resource::EndLoad()");
    Remove(methods, "virtual bool Resource::Save(Serializer& dest) const");

    methods.Push(RegisterObjectMethodArgs("bool ParticleEffect2D::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(ParticleEffect2D, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ParticleEffect2D::EndLoad() override", "bool EndLoad()", AS_METHODPR(ParticleEffect2D, EndLoad, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ParticleEffect2D::Save(Serializer& dest) const override", "bool Save(Serializer&) const", AS_METHODPR(ParticleEffect2D, Save, (Serializer&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetSprite(Sprite2D* sprite)", "void SetSprite(Sprite2D@+)", AS_METHODPR(ParticleEffect2D, SetSprite, (Sprite2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetSourcePositionVariance(const Vector2& sourcePositionVariance)", "void SetSourcePositionVariance(const Vector2&in)", AS_METHODPR(ParticleEffect2D, SetSourcePositionVariance, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetSpeed(float speed)", "void SetSpeed(float)", AS_METHODPR(ParticleEffect2D, SetSpeed, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetSpeedVariance(float speedVariance)", "void SetSpeedVariance(float)", AS_METHODPR(ParticleEffect2D, SetSpeedVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetParticleLifeSpan(float particleLifeSpan)", "void SetParticleLifeSpan(float)", AS_METHODPR(ParticleEffect2D, SetParticleLifeSpan, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetParticleLifespanVariance(float particleLifespanVariance)", "void SetParticleLifespanVariance(float)", AS_METHODPR(ParticleEffect2D, SetParticleLifespanVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetAngle(float angle)", "void SetAngle(float)", AS_METHODPR(ParticleEffect2D, SetAngle, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetAngleVariance(float angleVariance)", "void SetAngleVariance(float)", AS_METHODPR(ParticleEffect2D, SetAngleVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetGravity(const Vector2& gravity)", "void SetGravity(const Vector2&in)", AS_METHODPR(ParticleEffect2D, SetGravity, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetRadialAcceleration(float radialAcceleration)", "void SetRadialAcceleration(float)", AS_METHODPR(ParticleEffect2D, SetRadialAcceleration, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetTangentialAcceleration(float tangentialAcceleration)", "void SetTangentialAcceleration(float)", AS_METHODPR(ParticleEffect2D, SetTangentialAcceleration, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetRadialAccelVariance(float radialAccelVariance)", "void SetRadialAccelVariance(float)", AS_METHODPR(ParticleEffect2D, SetRadialAccelVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetTangentialAccelVariance(float tangentialAccelVariance)", "void SetTangentialAccelVariance(float)", AS_METHODPR(ParticleEffect2D, SetTangentialAccelVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetStartColor(const Color& startColor)", "void SetStartColor(const Color&in)", AS_METHODPR(ParticleEffect2D, SetStartColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetStartColorVariance(const Color& startColorVariance)", "void SetStartColorVariance(const Color&in)", AS_METHODPR(ParticleEffect2D, SetStartColorVariance, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetFinishColor(const Color& finishColor)", "void SetFinishColor(const Color&in)", AS_METHODPR(ParticleEffect2D, SetFinishColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetFinishColorVariance(const Color& finishColorVariance)", "void SetFinishColorVariance(const Color&in)", AS_METHODPR(ParticleEffect2D, SetFinishColorVariance, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetMaxParticles(int maxParticles)", "void SetMaxParticles(int)", AS_METHODPR(ParticleEffect2D, SetMaxParticles, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetStartParticleSize(float startParticleSize)", "void SetStartParticleSize(float)", AS_METHODPR(ParticleEffect2D, SetStartParticleSize, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetStartParticleSizeVariance(float startParticleSizeVariance)", "void SetStartParticleSizeVariance(float)", AS_METHODPR(ParticleEffect2D, SetStartParticleSizeVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetFinishParticleSize(float finishParticleSize)", "void SetFinishParticleSize(float)", AS_METHODPR(ParticleEffect2D, SetFinishParticleSize, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetFinishParticleSizeVariance(float finishParticleSizeVariance)", "void SetFinishParticleSizeVariance(float)", AS_METHODPR(ParticleEffect2D, SetFinishParticleSizeVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetDuration(float duration)", "void SetDuration(float)", AS_METHODPR(ParticleEffect2D, SetDuration, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetEmitterType(EmitterType2D emitterType)", "void SetEmitterType(EmitterType2D)", AS_METHODPR(ParticleEffect2D, SetEmitterType, (EmitterType2D), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetMaxRadius(float maxRadius)", "void SetMaxRadius(float)", AS_METHODPR(ParticleEffect2D, SetMaxRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetMaxRadiusVariance(float maxRadiusVariance)", "void SetMaxRadiusVariance(float)", AS_METHODPR(ParticleEffect2D, SetMaxRadiusVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetMinRadius(float minRadius)", "void SetMinRadius(float)", AS_METHODPR(ParticleEffect2D, SetMinRadius, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetMinRadiusVariance(float minRadiusVariance)", "void SetMinRadiusVariance(float)", AS_METHODPR(ParticleEffect2D, SetMinRadiusVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetRotatePerSecond(float rotatePerSecond)", "void SetRotatePerSecond(float)", AS_METHODPR(ParticleEffect2D, SetRotatePerSecond, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetRotatePerSecondVariance(float rotatePerSecondVariance)", "void SetRotatePerSecondVariance(float)", AS_METHODPR(ParticleEffect2D, SetRotatePerSecondVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetBlendMode(BlendMode blendMode)", "void SetBlendMode(BlendMode)", AS_METHODPR(ParticleEffect2D, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetRotationStart(float rotationStart)", "void SetRotationStart(float)", AS_METHODPR(ParticleEffect2D, SetRotationStart, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetRotationStartVariance(float rotationStartVariance)", "void SetRotationStartVariance(float)", AS_METHODPR(ParticleEffect2D, SetRotationStartVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetRotationEnd(float rotationEnd)", "void SetRotationEnd(float)", AS_METHODPR(ParticleEffect2D, SetRotationEnd, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEffect2D::SetRotationEndVariance(float rotationEndVariance)", "void SetRotationEndVariance(float)", AS_METHODPR(ParticleEffect2D, SetRotationEndVariance, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SharedPtr<ParticleEffect2D> ParticleEffect2D::Clone(const String& cloneName=String::EMPTY) const", "ParticleEffect2D@+ Clone(const String&in = String::EMPTY) const", AS_FUNCTION_OBJFIRST(ParticleEffect2D_Clone_String), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* ParticleEffect2D::GetSprite() const", "Sprite2D@+ GetSprite() const", AS_METHODPR(ParticleEffect2D, GetSprite, () const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ParticleEffect2D::GetSourcePositionVariance() const", "const Vector2& GetSourcePositionVariance() const", AS_METHODPR(ParticleEffect2D, GetSourcePositionVariance, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetSpeed() const", "float GetSpeed() const", AS_METHODPR(ParticleEffect2D, GetSpeed, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetSpeedVariance() const", "float GetSpeedVariance() const", AS_METHODPR(ParticleEffect2D, GetSpeedVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetParticleLifeSpan() const", "float GetParticleLifeSpan() const", AS_METHODPR(ParticleEffect2D, GetParticleLifeSpan, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetParticleLifespanVariance() const", "float GetParticleLifespanVariance() const", AS_METHODPR(ParticleEffect2D, GetParticleLifespanVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetAngle() const", "float GetAngle() const", AS_METHODPR(ParticleEffect2D, GetAngle, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetAngleVariance() const", "float GetAngleVariance() const", AS_METHODPR(ParticleEffect2D, GetAngleVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& ParticleEffect2D::GetGravity() const", "const Vector2& GetGravity() const", AS_METHODPR(ParticleEffect2D, GetGravity, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetRadialAcceleration() const", "float GetRadialAcceleration() const", AS_METHODPR(ParticleEffect2D, GetRadialAcceleration, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetTangentialAcceleration() const", "float GetTangentialAcceleration() const", AS_METHODPR(ParticleEffect2D, GetTangentialAcceleration, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetRadialAccelVariance() const", "float GetRadialAccelVariance() const", AS_METHODPR(ParticleEffect2D, GetRadialAccelVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetTangentialAccelVariance() const", "float GetTangentialAccelVariance() const", AS_METHODPR(ParticleEffect2D, GetTangentialAccelVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& ParticleEffect2D::GetStartColor() const", "const Color& GetStartColor() const", AS_METHODPR(ParticleEffect2D, GetStartColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& ParticleEffect2D::GetStartColorVariance() const", "const Color& GetStartColorVariance() const", AS_METHODPR(ParticleEffect2D, GetStartColorVariance, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& ParticleEffect2D::GetFinishColor() const", "const Color& GetFinishColor() const", AS_METHODPR(ParticleEffect2D, GetFinishColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& ParticleEffect2D::GetFinishColorVariance() const", "const Color& GetFinishColorVariance() const", AS_METHODPR(ParticleEffect2D, GetFinishColorVariance, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int ParticleEffect2D::GetMaxParticles() const", "int GetMaxParticles() const", AS_METHODPR(ParticleEffect2D, GetMaxParticles, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetStartParticleSize() const", "float GetStartParticleSize() const", AS_METHODPR(ParticleEffect2D, GetStartParticleSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetStartParticleSizeVariance() const", "float GetStartParticleSizeVariance() const", AS_METHODPR(ParticleEffect2D, GetStartParticleSizeVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetFinishParticleSize() const", "float GetFinishParticleSize() const", AS_METHODPR(ParticleEffect2D, GetFinishParticleSize, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetFinishParticleSizeVariance() const", "float GetFinishParticleSizeVariance() const", AS_METHODPR(ParticleEffect2D, GetFinishParticleSizeVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetDuration() const", "float GetDuration() const", AS_METHODPR(ParticleEffect2D, GetDuration, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("EmitterType2D ParticleEffect2D::GetEmitterType() const", "EmitterType2D GetEmitterType() const", AS_METHODPR(ParticleEffect2D, GetEmitterType, () const, EmitterType2D), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetMaxRadius() const", "float GetMaxRadius() const", AS_METHODPR(ParticleEffect2D, GetMaxRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetMaxRadiusVariance() const", "float GetMaxRadiusVariance() const", AS_METHODPR(ParticleEffect2D, GetMaxRadiusVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetMinRadius() const", "float GetMinRadius() const", AS_METHODPR(ParticleEffect2D, GetMinRadius, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetMinRadiusVariance() const", "float GetMinRadiusVariance() const", AS_METHODPR(ParticleEffect2D, GetMinRadiusVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetRotatePerSecond() const", "float GetRotatePerSecond() const", AS_METHODPR(ParticleEffect2D, GetRotatePerSecond, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetRotatePerSecondVariance() const", "float GetRotatePerSecondVariance() const", AS_METHODPR(ParticleEffect2D, GetRotatePerSecondVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BlendMode ParticleEffect2D::GetBlendMode() const", "BlendMode GetBlendMode() const", AS_METHODPR(ParticleEffect2D, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetRotationStart() const", "float GetRotationStart() const", AS_METHODPR(ParticleEffect2D, GetRotationStart, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetRotationStartVariance() const", "float GetRotationStartVariance() const", AS_METHODPR(ParticleEffect2D, GetRotationStartVariance, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetRotationEnd() const", "float GetRotationEnd() const", AS_METHODPR(ParticleEffect2D, GetRotationEnd, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float ParticleEffect2D::GetRotationEndVariance() const", "float GetRotationEndVariance() const", AS_METHODPR(ParticleEffect2D, GetRotationEndVariance, () const, float), AS_CALL_THISCALL));
}

// class ParticleEmitter2D | File: ../Urho2D/ParticleEmitter2D.h
void CollectMembers_ParticleEmitter2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable2D(methods);

    Remove(methods, "static void Drawable2D::RegisterObject(Context* context)");
    Remove(methods, "virtual void Drawable::Update(const FrameInfo& frame)");
    Remove(methods, "void Drawable2D::OnSetEnabled() override");

    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(ParticleEmitter2D, OnSetEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetEffect(ParticleEffect2D* effect)", "void SetEffect(ParticleEffect2D@+)", AS_METHODPR(ParticleEmitter2D, SetEffect, (ParticleEffect2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetEffect(ParticleEffect2D* effect)", "void set_effect(ParticleEffect2D@+)", AS_METHODPR(ParticleEmitter2D, SetEffect, (ParticleEffect2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetSprite(Sprite2D* sprite)", "void SetSprite(Sprite2D@+)", AS_METHODPR(ParticleEmitter2D, SetSprite, (Sprite2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetSprite(Sprite2D* sprite)", "void set_sprite(Sprite2D@+)", AS_METHODPR(ParticleEmitter2D, SetSprite, (Sprite2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetBlendMode(BlendMode blendMode)", "void SetBlendMode(BlendMode)", AS_METHODPR(ParticleEmitter2D, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetBlendMode(BlendMode blendMode)", "void set_blendMode(BlendMode)", AS_METHODPR(ParticleEmitter2D, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetMaxParticles(unsigned maxParticles)", "void SetMaxParticles(uint)", AS_METHODPR(ParticleEmitter2D, SetMaxParticles, (unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetEmitting(bool enable)", "void SetEmitting(bool)", AS_METHODPR(ParticleEmitter2D, SetEmitting, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetEmitting(bool enable)", "void set_emitting(bool)", AS_METHODPR(ParticleEmitter2D, SetEmitting, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ParticleEffect2D* ParticleEmitter2D::GetEffect() const", "ParticleEffect2D@+ GetEffect() const", AS_METHODPR(ParticleEmitter2D, GetEffect, () const, ParticleEffect2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ParticleEffect2D* ParticleEmitter2D::GetEffect() const", "ParticleEffect2D@+ get_effect() const", AS_METHODPR(ParticleEmitter2D, GetEffect, () const, ParticleEffect2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* ParticleEmitter2D::GetSprite() const", "Sprite2D@+ GetSprite() const", AS_METHODPR(ParticleEmitter2D, GetSprite, () const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* ParticleEmitter2D::GetSprite() const", "Sprite2D@+ get_sprite() const", AS_METHODPR(ParticleEmitter2D, GetSprite, () const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BlendMode ParticleEmitter2D::GetBlendMode() const", "BlendMode GetBlendMode() const", AS_METHODPR(ParticleEmitter2D, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BlendMode ParticleEmitter2D::GetBlendMode() const", "BlendMode get_blendMode() const", AS_METHODPR(ParticleEmitter2D, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned ParticleEmitter2D::GetMaxParticles() const", "uint GetMaxParticles() const", AS_METHODPR(ParticleEmitter2D, GetMaxParticles, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetParticleEffectAttr(const ResourceRef& value)", "void SetParticleEffectAttr(const ResourceRef&in)", AS_METHODPR(ParticleEmitter2D, SetParticleEffectAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef ParticleEmitter2D::GetParticleEffectAttr() const", "ResourceRef GetParticleEffectAttr() const", AS_METHODPR(ParticleEmitter2D, GetParticleEffectAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void ParticleEmitter2D::SetSpriteAttr(const ResourceRef& value)", "void SetSpriteAttr(const ResourceRef&in)", AS_METHODPR(ParticleEmitter2D, SetSpriteAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef ParticleEmitter2D::GetSpriteAttr() const", "ResourceRef GetSpriteAttr() const", AS_METHODPR(ParticleEmitter2D, GetSpriteAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ParticleEmitter2D::IsEmitting() const", "bool IsEmitting() const", AS_METHODPR(ParticleEmitter2D, IsEmitting, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool ParticleEmitter2D::IsEmitting() const", "bool get_emitting() const", AS_METHODPR(ParticleEmitter2D, IsEmitting, () const, bool), AS_CALL_THISCALL));
}

// struct PhysicsRaycastResult2D | File: ../Urho2D/PhysicsWorld2D.h
void CollectMembers_PhysicsRaycastResult2D(Vector<RegisterObjectMethodArgs>& methods)
{
    // bool PhysicsRaycastResult2D::operator!=(const PhysicsRaycastResult2D& rhs) const
    // Only operator== is needed
}

// class PhysicsWorld2D | File: ../Urho2D/PhysicsWorld2D.h
void CollectMembers_PhysicsWorld2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    Remove(methods, "static void Animatable::RegisterObject(Context* context)");
    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");

    // void PhysicsWorld2D::BeginContact(b2Contact* contact) override
    // Error: type "b2Contact*" can not automatically bind
    // void PhysicsWorld2D::DrawCircle(const b2Vec2& center, float32 radius, const b2Color& color) override
    // Error: type "const b2Vec2&" can not automatically bind
    // void PhysicsWorld2D::DrawPoint(const b2Vec2& p, float32 size, const b2Color& color) override
    // Error: type "const b2Vec2&" can not automatically bind
    // void PhysicsWorld2D::DrawPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color) override
    // Error: type "const b2Vec2*" can not automatically bind
    // void PhysicsWorld2D::DrawSegment(const b2Vec2& p1, const b2Vec2& p2, const b2Color& color) override
    // Error: type "const b2Vec2&" can not automatically bind
    // void PhysicsWorld2D::DrawSolidCircle(const b2Vec2& center, float32 radius, const b2Vec2& axis, const b2Color& color) override
    // Error: type "const b2Vec2&" can not automatically bind
    // void PhysicsWorld2D::DrawSolidPolygon(const b2Vec2* vertices, int32 vertexCount, const b2Color& color) override
    // Error: type "const b2Vec2*" can not automatically bind
    // void PhysicsWorld2D::DrawTransform(const b2Transform& xf) override
    // Error: type "const b2Transform&" can not automatically bind
    // void PhysicsWorld2D::EndContact(b2Contact* contact) override
    // Error: type "b2Contact*" can not automatically bind
    // void PhysicsWorld2D::GetRigidBodies(PODVector<RigidBody2D*>& results, const Rect& aabb, unsigned collisionMask=M_MAX_UNSIGNED)
    // Error: type "PODVector<RigidBody2D*>&" can not automatically bind
    // b2World* PhysicsWorld2D::GetWorld()
    // Error: type "b2World*" can not automatically bind
    // void PhysicsWorld2D::PreSolve(b2Contact* contact, const b2Manifold* oldManifold) override
    // Error: type "b2Contact*" can not automatically bind
    // void PhysicsWorld2D::Raycast(PODVector<PhysicsRaycastResult2D>& results, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask=M_MAX_UNSIGNED)
    // Error: type "PODVector<PhysicsRaycastResult2D>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(PhysicsWorld2D, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::Update(float timeStep)", "void Update(float)", AS_METHODPR(PhysicsWorld2D, Update, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::DrawDebugGeometry()", "void DrawDebugGeometry()", AS_METHODPR(PhysicsWorld2D, DrawDebugGeometry, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetUpdateEnabled(bool enable)", "void SetUpdateEnabled(bool)", AS_METHODPR(PhysicsWorld2D, SetUpdateEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetUpdateEnabled(bool enable)", "void set_updateEnabled(bool)", AS_METHODPR(PhysicsWorld2D, SetUpdateEnabled, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetDrawShape(bool drawShape)", "void SetDrawShape(bool)", AS_METHODPR(PhysicsWorld2D, SetDrawShape, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetDrawShape(bool drawShape)", "void set_drawShape(bool)", AS_METHODPR(PhysicsWorld2D, SetDrawShape, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetDrawJoint(bool drawJoint)", "void SetDrawJoint(bool)", AS_METHODPR(PhysicsWorld2D, SetDrawJoint, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetDrawJoint(bool drawJoint)", "void set_drawJoint(bool)", AS_METHODPR(PhysicsWorld2D, SetDrawJoint, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetDrawAabb(bool drawAabb)", "void SetDrawAabb(bool)", AS_METHODPR(PhysicsWorld2D, SetDrawAabb, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetDrawAabb(bool drawAabb)", "void set_drawAabb(bool)", AS_METHODPR(PhysicsWorld2D, SetDrawAabb, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetDrawPair(bool drawPair)", "void SetDrawPair(bool)", AS_METHODPR(PhysicsWorld2D, SetDrawPair, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetDrawPair(bool drawPair)", "void set_drawPair(bool)", AS_METHODPR(PhysicsWorld2D, SetDrawPair, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetDrawCenterOfMass(bool drawCenterOfMass)", "void SetDrawCenterOfMass(bool)", AS_METHODPR(PhysicsWorld2D, SetDrawCenterOfMass, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetDrawCenterOfMass(bool drawCenterOfMass)", "void set_drawCenterOfMass(bool)", AS_METHODPR(PhysicsWorld2D, SetDrawCenterOfMass, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetAllowSleeping(bool enable)", "void SetAllowSleeping(bool)", AS_METHODPR(PhysicsWorld2D, SetAllowSleeping, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetAllowSleeping(bool enable)", "void set_allowSleeping(bool)", AS_METHODPR(PhysicsWorld2D, SetAllowSleeping, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetWarmStarting(bool enable)", "void SetWarmStarting(bool)", AS_METHODPR(PhysicsWorld2D, SetWarmStarting, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetWarmStarting(bool enable)", "void set_warmStarting(bool)", AS_METHODPR(PhysicsWorld2D, SetWarmStarting, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetContinuousPhysics(bool enable)", "void SetContinuousPhysics(bool)", AS_METHODPR(PhysicsWorld2D, SetContinuousPhysics, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetContinuousPhysics(bool enable)", "void set_continuousPhysics(bool)", AS_METHODPR(PhysicsWorld2D, SetContinuousPhysics, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetSubStepping(bool enable)", "void SetSubStepping(bool)", AS_METHODPR(PhysicsWorld2D, SetSubStepping, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetSubStepping(bool enable)", "void set_subStepping(bool)", AS_METHODPR(PhysicsWorld2D, SetSubStepping, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetGravity(const Vector2& gravity)", "void SetGravity(const Vector2&in)", AS_METHODPR(PhysicsWorld2D, SetGravity, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetGravity(const Vector2& gravity)", "void set_gravity(const Vector2&in)", AS_METHODPR(PhysicsWorld2D, SetGravity, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetAutoClearForces(bool enable)", "void SetAutoClearForces(bool)", AS_METHODPR(PhysicsWorld2D, SetAutoClearForces, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetAutoClearForces(bool enable)", "void set_autoClearForces(bool)", AS_METHODPR(PhysicsWorld2D, SetAutoClearForces, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetVelocityIterations(int velocityIterations)", "void SetVelocityIterations(int)", AS_METHODPR(PhysicsWorld2D, SetVelocityIterations, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetVelocityIterations(int velocityIterations)", "void set_velocityIterations(int)", AS_METHODPR(PhysicsWorld2D, SetVelocityIterations, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetPositionIterations(int positionIterations)", "void SetPositionIterations(int)", AS_METHODPR(PhysicsWorld2D, SetPositionIterations, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetPositionIterations(int positionIterations)", "void set_positionIterations(int)", AS_METHODPR(PhysicsWorld2D, SetPositionIterations, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::AddRigidBody(RigidBody2D* rigidBody)", "void AddRigidBody(RigidBody2D@+)", AS_METHODPR(PhysicsWorld2D, AddRigidBody, (RigidBody2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::RemoveRigidBody(RigidBody2D* rigidBody)", "void RemoveRigidBody(RigidBody2D@+)", AS_METHODPR(PhysicsWorld2D, RemoveRigidBody, (RigidBody2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::AddDelayedWorldTransform(const DelayedWorldTransform2D& transform)", "void AddDelayedWorldTransform(const DelayedWorldTransform2D&in)", AS_METHODPR(PhysicsWorld2D, AddDelayedWorldTransform, (const DelayedWorldTransform2D&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::RaycastSingle(PhysicsRaycastResult2D& result, const Vector2& startPoint, const Vector2& endPoint, unsigned collisionMask=M_MAX_UNSIGNED)", "void RaycastSingle(PhysicsRaycastResult2D&, const Vector2&in, const Vector2&in, uint = M_MAX_UNSIGNED)", AS_METHODPR(PhysicsWorld2D, RaycastSingle, (PhysicsRaycastResult2D&, const Vector2&, const Vector2&, unsigned), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("RigidBody2D* PhysicsWorld2D::GetRigidBody(const Vector2& point, unsigned collisionMask=M_MAX_UNSIGNED)", "RigidBody2D@+ GetRigidBody(const Vector2&in, uint = M_MAX_UNSIGNED)", AS_METHODPR(PhysicsWorld2D, GetRigidBody, (const Vector2&, unsigned), RigidBody2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("RigidBody2D* PhysicsWorld2D::GetRigidBody(int screenX, int screenY, unsigned collisionMask=M_MAX_UNSIGNED)", "RigidBody2D@+ GetRigidBody(int, int, uint = M_MAX_UNSIGNED)", AS_METHODPR(PhysicsWorld2D, GetRigidBody, (int, int, unsigned), RigidBody2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::IsUpdateEnabled() const", "bool IsUpdateEnabled() const", AS_METHODPR(PhysicsWorld2D, IsUpdateEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::IsUpdateEnabled() const", "bool get_updateEnabled() const", AS_METHODPR(PhysicsWorld2D, IsUpdateEnabled, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetDrawShape() const", "bool GetDrawShape() const", AS_METHODPR(PhysicsWorld2D, GetDrawShape, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetDrawShape() const", "bool get_drawShape() const", AS_METHODPR(PhysicsWorld2D, GetDrawShape, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetDrawJoint() const", "bool GetDrawJoint() const", AS_METHODPR(PhysicsWorld2D, GetDrawJoint, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetDrawJoint() const", "bool get_drawJoint() const", AS_METHODPR(PhysicsWorld2D, GetDrawJoint, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetDrawAabb() const", "bool GetDrawAabb() const", AS_METHODPR(PhysicsWorld2D, GetDrawAabb, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetDrawAabb() const", "bool get_drawAabb() const", AS_METHODPR(PhysicsWorld2D, GetDrawAabb, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetDrawPair() const", "bool GetDrawPair() const", AS_METHODPR(PhysicsWorld2D, GetDrawPair, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetDrawPair() const", "bool get_drawPair() const", AS_METHODPR(PhysicsWorld2D, GetDrawPair, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetDrawCenterOfMass() const", "bool GetDrawCenterOfMass() const", AS_METHODPR(PhysicsWorld2D, GetDrawCenterOfMass, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetDrawCenterOfMass() const", "bool get_drawCenterOfMass() const", AS_METHODPR(PhysicsWorld2D, GetDrawCenterOfMass, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetAllowSleeping() const", "bool GetAllowSleeping() const", AS_METHODPR(PhysicsWorld2D, GetAllowSleeping, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetAllowSleeping() const", "bool get_allowSleeping() const", AS_METHODPR(PhysicsWorld2D, GetAllowSleeping, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetWarmStarting() const", "bool GetWarmStarting() const", AS_METHODPR(PhysicsWorld2D, GetWarmStarting, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetWarmStarting() const", "bool get_warmStarting() const", AS_METHODPR(PhysicsWorld2D, GetWarmStarting, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetContinuousPhysics() const", "bool GetContinuousPhysics() const", AS_METHODPR(PhysicsWorld2D, GetContinuousPhysics, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetContinuousPhysics() const", "bool get_continuousPhysics() const", AS_METHODPR(PhysicsWorld2D, GetContinuousPhysics, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetSubStepping() const", "bool GetSubStepping() const", AS_METHODPR(PhysicsWorld2D, GetSubStepping, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetSubStepping() const", "bool get_subStepping() const", AS_METHODPR(PhysicsWorld2D, GetSubStepping, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetAutoClearForces() const", "bool GetAutoClearForces() const", AS_METHODPR(PhysicsWorld2D, GetAutoClearForces, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::GetAutoClearForces() const", "bool get_autoClearForces() const", AS_METHODPR(PhysicsWorld2D, GetAutoClearForces, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& PhysicsWorld2D::GetGravity() const", "const Vector2& GetGravity() const", AS_METHODPR(PhysicsWorld2D, GetGravity, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& PhysicsWorld2D::GetGravity() const", "const Vector2& get_gravity() const", AS_METHODPR(PhysicsWorld2D, GetGravity, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int PhysicsWorld2D::GetVelocityIterations() const", "int GetVelocityIterations() const", AS_METHODPR(PhysicsWorld2D, GetVelocityIterations, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int PhysicsWorld2D::GetVelocityIterations() const", "int get_velocityIterations() const", AS_METHODPR(PhysicsWorld2D, GetVelocityIterations, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int PhysicsWorld2D::GetPositionIterations() const", "int GetPositionIterations() const", AS_METHODPR(PhysicsWorld2D, GetPositionIterations, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int PhysicsWorld2D::GetPositionIterations() const", "int get_positionIterations() const", AS_METHODPR(PhysicsWorld2D, GetPositionIterations, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void PhysicsWorld2D::SetApplyingTransforms(bool enable)", "void SetApplyingTransforms(bool)", AS_METHODPR(PhysicsWorld2D, SetApplyingTransforms, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PhysicsWorld2D::IsApplyingTransforms() const", "bool IsApplyingTransforms() const", AS_METHODPR(PhysicsWorld2D, IsApplyingTransforms, () const, bool), AS_CALL_THISCALL));
}

// class PropertySet2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_PropertySet2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    methods.Push(RegisterObjectMethodArgs("void PropertySet2D::Load(const XMLElement& element)", "void Load(const XMLElement&in)", AS_METHODPR(PropertySet2D, Load, (const XMLElement&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool PropertySet2D::HasProperty(const String& name) const", "bool HasProperty(const String&in) const", AS_METHODPR(PropertySet2D, HasProperty, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& PropertySet2D::GetProperty(const String& name) const", "const String& GetProperty(const String&in) const", AS_METHODPR(PropertySet2D, GetProperty, (const String&) const, const String&), AS_CALL_THISCALL));
}

// class Renderer2D | File: ../Urho2D/Renderer2D.h
void CollectMembers_Renderer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable(methods);

    Remove(methods, "static void Drawable::RegisterObject(Context* context)");
    Remove(methods, "virtual UpdateGeometryType Drawable::GetUpdateGeometryType()");
    Remove(methods, "virtual void Drawable::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results)");
    Remove(methods, "virtual void Drawable::UpdateBatches(const FrameInfo& frame)");
    Remove(methods, "virtual void Drawable::UpdateGeometry(const FrameInfo& frame)");

    // void Renderer2D::ProcessRayQuery(const RayOctreeQuery& query, PODVector<RayQueryResult>& results) override
    // Error: type "RayOctreeQuery" can not automatically bind bacause have @nobind mark

    methods.Push(RegisterObjectMethodArgs("void Renderer2D::UpdateBatches(const FrameInfo& frame) override", "void UpdateBatches(const FrameInfo&in)", AS_METHODPR(Renderer2D, UpdateBatches, (const FrameInfo&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Renderer2D::UpdateGeometry(const FrameInfo& frame) override", "void UpdateGeometry(const FrameInfo&in)", AS_METHODPR(Renderer2D, UpdateGeometry, (const FrameInfo&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("UpdateGeometryType Renderer2D::GetUpdateGeometryType() override", "UpdateGeometryType GetUpdateGeometryType()", AS_METHODPR(Renderer2D, GetUpdateGeometryType, (), UpdateGeometryType), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Renderer2D::AddDrawable(Drawable2D* drawable)", "void AddDrawable(Drawable2D@+)", AS_METHODPR(Renderer2D, AddDrawable, (Drawable2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Renderer2D::RemoveDrawable(Drawable2D* drawable)", "void RemoveDrawable(Drawable2D@+)", AS_METHODPR(Renderer2D, RemoveDrawable, (Drawable2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Material* Renderer2D::GetMaterial(Texture2D* texture, BlendMode blendMode)", "Material@+ GetMaterial(Texture2D@+, BlendMode)", AS_METHODPR(Renderer2D, GetMaterial, (Texture2D*, BlendMode), Material*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Renderer2D::CheckVisibility(Drawable2D* drawable) const", "bool CheckVisibility(Drawable2D@+) const", AS_METHODPR(Renderer2D, CheckVisibility, (Drawable2D*) const, bool), AS_CALL_THISCALL));
}

// class RigidBody2D | File: ../Urho2D/RigidBody2D.h
void CollectMembers_RigidBody2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    Remove(methods, "static void Animatable::RegisterObject(Context* context)");
    Remove(methods, "virtual void Component::OnSetEnabled()");

    // b2Body* RigidBody2D::GetBody() const
    // Error: type "b2Body*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::OnSetEnabled() override", "void OnSetEnabled()", AS_METHODPR(RigidBody2D, OnSetEnabled, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetBodyType(BodyType2D type)", "void SetBodyType(BodyType2D)", AS_METHODPR(RigidBody2D, SetBodyType, (BodyType2D), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetBodyType(BodyType2D type)", "void set_bodyType(BodyType2D)", AS_METHODPR(RigidBody2D, SetBodyType, (BodyType2D), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetMass(float mass)", "void SetMass(float)", AS_METHODPR(RigidBody2D, SetMass, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetMass(float mass)", "void set_mass(float)", AS_METHODPR(RigidBody2D, SetMass, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetInertia(float inertia)", "void SetInertia(float)", AS_METHODPR(RigidBody2D, SetInertia, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetInertia(float inertia)", "void set_inertia(float)", AS_METHODPR(RigidBody2D, SetInertia, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetMassCenter(const Vector2& center)", "void SetMassCenter(const Vector2&in)", AS_METHODPR(RigidBody2D, SetMassCenter, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetMassCenter(const Vector2& center)", "void set_massCenter(const Vector2&in)", AS_METHODPR(RigidBody2D, SetMassCenter, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetUseFixtureMass(bool useFixtureMass)", "void SetUseFixtureMass(bool)", AS_METHODPR(RigidBody2D, SetUseFixtureMass, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetUseFixtureMass(bool useFixtureMass)", "void set_useFixtureMass(bool)", AS_METHODPR(RigidBody2D, SetUseFixtureMass, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetLinearDamping(float linearDamping)", "void SetLinearDamping(float)", AS_METHODPR(RigidBody2D, SetLinearDamping, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetLinearDamping(float linearDamping)", "void set_linearDamping(float)", AS_METHODPR(RigidBody2D, SetLinearDamping, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetAngularDamping(float angularDamping)", "void SetAngularDamping(float)", AS_METHODPR(RigidBody2D, SetAngularDamping, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetAngularDamping(float angularDamping)", "void set_angularDamping(float)", AS_METHODPR(RigidBody2D, SetAngularDamping, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetAllowSleep(bool allowSleep)", "void SetAllowSleep(bool)", AS_METHODPR(RigidBody2D, SetAllowSleep, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetAllowSleep(bool allowSleep)", "void set_allowSleep(bool)", AS_METHODPR(RigidBody2D, SetAllowSleep, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetFixedRotation(bool fixedRotation)", "void SetFixedRotation(bool)", AS_METHODPR(RigidBody2D, SetFixedRotation, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetFixedRotation(bool fixedRotation)", "void set_fixedRotation(bool)", AS_METHODPR(RigidBody2D, SetFixedRotation, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetBullet(bool bullet)", "void SetBullet(bool)", AS_METHODPR(RigidBody2D, SetBullet, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetBullet(bool bullet)", "void set_bullet(bool)", AS_METHODPR(RigidBody2D, SetBullet, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetGravityScale(float gravityScale)", "void SetGravityScale(float)", AS_METHODPR(RigidBody2D, SetGravityScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetGravityScale(float gravityScale)", "void set_gravityScale(float)", AS_METHODPR(RigidBody2D, SetGravityScale, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetAwake(bool awake)", "void SetAwake(bool)", AS_METHODPR(RigidBody2D, SetAwake, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetAwake(bool awake)", "void set_awake(bool)", AS_METHODPR(RigidBody2D, SetAwake, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetLinearVelocity(const Vector2& linearVelocity)", "void SetLinearVelocity(const Vector2&in)", AS_METHODPR(RigidBody2D, SetLinearVelocity, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetLinearVelocity(const Vector2& linearVelocity)", "void set_linearVelocity(const Vector2&in)", AS_METHODPR(RigidBody2D, SetLinearVelocity, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::SetAngularVelocity(float angularVelocity)", "void SetAngularVelocity(float)", AS_METHODPR(RigidBody2D, SetAngularVelocity, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::ApplyForce(const Vector2& force, const Vector2& point, bool wake)", "void ApplyForce(const Vector2&in, const Vector2&in, bool)", AS_METHODPR(RigidBody2D, ApplyForce, (const Vector2&, const Vector2&, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::ApplyForceToCenter(const Vector2& force, bool wake)", "void ApplyForceToCenter(const Vector2&in, bool)", AS_METHODPR(RigidBody2D, ApplyForceToCenter, (const Vector2&, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::ApplyTorque(float torque, bool wake)", "void ApplyTorque(float, bool)", AS_METHODPR(RigidBody2D, ApplyTorque, (float, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::ApplyLinearImpulse(const Vector2& impulse, const Vector2& point, bool wake)", "void ApplyLinearImpulse(const Vector2&in, const Vector2&in, bool)", AS_METHODPR(RigidBody2D, ApplyLinearImpulse, (const Vector2&, const Vector2&, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::ApplyLinearImpulseToCenter(const Vector2& impulse, bool wake)", "void ApplyLinearImpulseToCenter(const Vector2&in, bool)", AS_METHODPR(RigidBody2D, ApplyLinearImpulseToCenter, (const Vector2&, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::ApplyAngularImpulse(float impulse, bool wake)", "void ApplyAngularImpulse(float, bool)", AS_METHODPR(RigidBody2D, ApplyAngularImpulse, (float, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::CreateBody()", "void CreateBody()", AS_METHODPR(RigidBody2D, CreateBody, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::ReleaseBody()", "void ReleaseBody()", AS_METHODPR(RigidBody2D, ReleaseBody, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::ApplyWorldTransform()", "void ApplyWorldTransform()", AS_METHODPR(RigidBody2D, ApplyWorldTransform, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::ApplyWorldTransform(const Vector3& newWorldPosition, const Quaternion& newWorldRotation)", "void ApplyWorldTransform(const Vector3&in, const Quaternion&in)", AS_METHODPR(RigidBody2D, ApplyWorldTransform, (const Vector3&, const Quaternion&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::AddCollisionShape2D(CollisionShape2D* collisionShape)", "void AddCollisionShape2D(CollisionShape2D@+)", AS_METHODPR(RigidBody2D, AddCollisionShape2D, (CollisionShape2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::RemoveCollisionShape2D(CollisionShape2D* collisionShape)", "void RemoveCollisionShape2D(CollisionShape2D@+)", AS_METHODPR(RigidBody2D, RemoveCollisionShape2D, (CollisionShape2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::AddConstraint2D(Constraint2D* constraint)", "void AddConstraint2D(Constraint2D@+)", AS_METHODPR(RigidBody2D, AddConstraint2D, (Constraint2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void RigidBody2D::RemoveConstraint2D(Constraint2D* constraint)", "void RemoveConstraint2D(Constraint2D@+)", AS_METHODPR(RigidBody2D, RemoveConstraint2D, (Constraint2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BodyType2D RigidBody2D::GetBodyType() const", "BodyType2D GetBodyType() const", AS_METHODPR(RigidBody2D, GetBodyType, () const, BodyType2D), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BodyType2D RigidBody2D::GetBodyType() const", "BodyType2D get_bodyType() const", AS_METHODPR(RigidBody2D, GetBodyType, () const, BodyType2D), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetMass() const", "float GetMass() const", AS_METHODPR(RigidBody2D, GetMass, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetMass() const", "float get_mass() const", AS_METHODPR(RigidBody2D, GetMass, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetInertia() const", "float GetInertia() const", AS_METHODPR(RigidBody2D, GetInertia, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetInertia() const", "float get_inertia() const", AS_METHODPR(RigidBody2D, GetInertia, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 RigidBody2D::GetMassCenter() const", "Vector2 GetMassCenter() const", AS_METHODPR(RigidBody2D, GetMassCenter, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 RigidBody2D::GetMassCenter() const", "Vector2 get_massCenter() const", AS_METHODPR(RigidBody2D, GetMassCenter, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool RigidBody2D::GetUseFixtureMass() const", "bool GetUseFixtureMass() const", AS_METHODPR(RigidBody2D, GetUseFixtureMass, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool RigidBody2D::GetUseFixtureMass() const", "bool get_useFixtureMass() const", AS_METHODPR(RigidBody2D, GetUseFixtureMass, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetLinearDamping() const", "float GetLinearDamping() const", AS_METHODPR(RigidBody2D, GetLinearDamping, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetLinearDamping() const", "float get_linearDamping() const", AS_METHODPR(RigidBody2D, GetLinearDamping, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetAngularDamping() const", "float GetAngularDamping() const", AS_METHODPR(RigidBody2D, GetAngularDamping, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetAngularDamping() const", "float get_angularDamping() const", AS_METHODPR(RigidBody2D, GetAngularDamping, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool RigidBody2D::IsAllowSleep() const", "bool IsAllowSleep() const", AS_METHODPR(RigidBody2D, IsAllowSleep, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool RigidBody2D::IsAllowSleep() const", "bool get_allowSleep() const", AS_METHODPR(RigidBody2D, IsAllowSleep, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool RigidBody2D::IsFixedRotation() const", "bool IsFixedRotation() const", AS_METHODPR(RigidBody2D, IsFixedRotation, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool RigidBody2D::IsFixedRotation() const", "bool get_fixedRotation() const", AS_METHODPR(RigidBody2D, IsFixedRotation, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool RigidBody2D::IsBullet() const", "bool IsBullet() const", AS_METHODPR(RigidBody2D, IsBullet, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool RigidBody2D::IsBullet() const", "bool get_bullet() const", AS_METHODPR(RigidBody2D, IsBullet, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetGravityScale() const", "float GetGravityScale() const", AS_METHODPR(RigidBody2D, GetGravityScale, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetGravityScale() const", "float get_gravityScale() const", AS_METHODPR(RigidBody2D, GetGravityScale, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool RigidBody2D::IsAwake() const", "bool IsAwake() const", AS_METHODPR(RigidBody2D, IsAwake, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool RigidBody2D::IsAwake() const", "bool get_awake() const", AS_METHODPR(RigidBody2D, IsAwake, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 RigidBody2D::GetLinearVelocity() const", "Vector2 GetLinearVelocity() const", AS_METHODPR(RigidBody2D, GetLinearVelocity, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 RigidBody2D::GetLinearVelocity() const", "Vector2 get_linearVelocity() const", AS_METHODPR(RigidBody2D, GetLinearVelocity, () const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float RigidBody2D::GetAngularVelocity() const", "float GetAngularVelocity() const", AS_METHODPR(RigidBody2D, GetAngularVelocity, () const, float), AS_CALL_THISCALL));
}

// struct SourceBatch2D | File: ../Urho2D/Drawable2D.h
void CollectMembers_SourceBatch2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

// class Sprite2D | File: ../Urho2D/Sprite2D.h
void CollectMembers_Sprite2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(methods, "virtual bool Resource::EndLoad()");

    methods.Push(RegisterObjectMethodArgs("bool Sprite2D::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(Sprite2D, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sprite2D::EndLoad() override", "bool EndLoad()", AS_METHODPR(Sprite2D, EndLoad, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetTexture(Texture2D* texture)", "void SetTexture(Texture2D@+)", AS_METHODPR(Sprite2D, SetTexture, (Texture2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetTexture(Texture2D* texture)", "void set_texture(Texture2D@+)", AS_METHODPR(Sprite2D, SetTexture, (Texture2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetRectangle(const IntRect& rectangle)", "void SetRectangle(const IntRect&in)", AS_METHODPR(Sprite2D, SetRectangle, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetRectangle(const IntRect& rectangle)", "void set_rectangle(const IntRect&in)", AS_METHODPR(Sprite2D, SetRectangle, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetHotSpot(const Vector2& hotSpot)", "void SetHotSpot(const Vector2&in)", AS_METHODPR(Sprite2D, SetHotSpot, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetHotSpot(const Vector2& hotSpot)", "void set_hotSpot(const Vector2&in)", AS_METHODPR(Sprite2D, SetHotSpot, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetOffset(const IntVector2& offset)", "void SetOffset(const IntVector2&in)", AS_METHODPR(Sprite2D, SetOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetOffset(const IntVector2& offset)", "void set_offset(const IntVector2&in)", AS_METHODPR(Sprite2D, SetOffset, (const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetTextureEdgeOffset(float offset)", "void SetTextureEdgeOffset(float)", AS_METHODPR(Sprite2D, SetTextureEdgeOffset, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetTextureEdgeOffset(float offset)", "void set_textureEdgeOffset(float)", AS_METHODPR(Sprite2D, SetTextureEdgeOffset, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void Sprite2D::SetSpriteSheet(SpriteSheet2D* spriteSheet)", "void SetSpriteSheet(SpriteSheet2D@+)", AS_METHODPR(Sprite2D, SetSpriteSheet, (SpriteSheet2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture2D* Sprite2D::GetTexture() const", "Texture2D@+ GetTexture() const", AS_METHODPR(Sprite2D, GetTexture, () const, Texture2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture2D* Sprite2D::GetTexture() const", "Texture2D@+ get_texture() const", AS_METHODPR(Sprite2D, GetTexture, () const, Texture2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& Sprite2D::GetRectangle() const", "const IntRect& GetRectangle() const", AS_METHODPR(Sprite2D, GetRectangle, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& Sprite2D::GetRectangle() const", "const IntRect& get_rectangle() const", AS_METHODPR(Sprite2D, GetRectangle, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& Sprite2D::GetHotSpot() const", "const Vector2& GetHotSpot() const", AS_METHODPR(Sprite2D, GetHotSpot, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& Sprite2D::GetHotSpot() const", "const Vector2& get_hotSpot() const", AS_METHODPR(Sprite2D, GetHotSpot, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Sprite2D::GetOffset() const", "const IntVector2& GetOffset() const", AS_METHODPR(Sprite2D, GetOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntVector2& Sprite2D::GetOffset() const", "const IntVector2& get_offset() const", AS_METHODPR(Sprite2D, GetOffset, () const, const IntVector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Sprite2D::GetTextureEdgeOffset() const", "float GetTextureEdgeOffset() const", AS_METHODPR(Sprite2D, GetTextureEdgeOffset, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float Sprite2D::GetTextureEdgeOffset() const", "float get_textureEdgeOffset() const", AS_METHODPR(Sprite2D, GetTextureEdgeOffset, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("SpriteSheet2D* Sprite2D::GetSpriteSheet() const", "SpriteSheet2D@+ GetSpriteSheet() const", AS_METHODPR(Sprite2D, GetSpriteSheet, () const, SpriteSheet2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sprite2D::GetDrawRectangle(Rect& rect, bool flipX=false, bool flipY=false) const", "bool GetDrawRectangle(Rect&, bool = false, bool = false) const", AS_METHODPR(Sprite2D, GetDrawRectangle, (Rect&, bool, bool) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sprite2D::GetDrawRectangle(Rect& rect, const Vector2& hotSpot, bool flipX=false, bool flipY=false) const", "bool GetDrawRectangle(Rect&, const Vector2&in, bool = false, bool = false) const", AS_METHODPR(Sprite2D, GetDrawRectangle, (Rect&, const Vector2&, bool, bool) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Sprite2D::GetTextureRectangle(Rect& rect, bool flipX=false, bool flipY=false) const", "bool GetTextureRectangle(Rect&, bool = false, bool = false) const", AS_METHODPR(Sprite2D, GetTextureRectangle, (Rect&, bool, bool) const, bool), AS_CALL_THISCALL));
}

// class SpriteSheet2D | File: ../Urho2D/SpriteSheet2D.h
void CollectMembers_SpriteSheet2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(methods, "virtual bool Resource::EndLoad()");

    // const HashMap<String, SharedPtr<Sprite2D>>& SpriteSheet2D::GetSpriteMapping() const
    // Error: type "const HashMap<String, SharedPtr<Sprite2D>>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool SpriteSheet2D::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(SpriteSheet2D, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool SpriteSheet2D::EndLoad() override", "bool EndLoad()", AS_METHODPR(SpriteSheet2D, EndLoad, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SpriteSheet2D::SetTexture(Texture2D* texture)", "void SetTexture(Texture2D@+)", AS_METHODPR(SpriteSheet2D, SetTexture, (Texture2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SpriteSheet2D::SetTexture(Texture2D* texture)", "void set_texture(Texture2D@+)", AS_METHODPR(SpriteSheet2D, SetTexture, (Texture2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void SpriteSheet2D::DefineSprite(const String& name, const IntRect& rectangle, const Vector2& hotSpot=Vector2(0.5f, 0.5f), const IntVector2& offset=IntVector2::ZERO)", "void DefineSprite(const String&in, const IntRect&in, const Vector2&in = Vector2(0.5f, 0.5f), const IntVector2&in = IntVector2::ZERO)", AS_METHODPR(SpriteSheet2D, DefineSprite, (const String&, const IntRect&, const Vector2&, const IntVector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture2D* SpriteSheet2D::GetTexture() const", "Texture2D@+ GetTexture() const", AS_METHODPR(SpriteSheet2D, GetTexture, () const, Texture2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Texture2D* SpriteSheet2D::GetTexture() const", "Texture2D@+ get_texture() const", AS_METHODPR(SpriteSheet2D, GetTexture, () const, Texture2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* SpriteSheet2D::GetSprite(const String& name) const", "Sprite2D@+ GetSprite(const String&in) const", AS_METHODPR(SpriteSheet2D, GetSprite, (const String&) const, Sprite2D*), AS_CALL_THISCALL));
}

// class StaticSprite2D | File: ../Urho2D/StaticSprite2D.h
void CollectMembers_StaticSprite2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Drawable2D(methods);

    Remove(methods, "static void Drawable2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetSprite(Sprite2D* sprite)", "void SetSprite(Sprite2D@+)", AS_METHODPR(StaticSprite2D, SetSprite, (Sprite2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetSprite(Sprite2D* sprite)", "void set_sprite(Sprite2D@+)", AS_METHODPR(StaticSprite2D, SetSprite, (Sprite2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetDrawRect(const Rect& rect)", "void SetDrawRect(const Rect&in)", AS_METHODPR(StaticSprite2D, SetDrawRect, (const Rect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetDrawRect(const Rect& rect)", "void set_drawRect(const Rect&in)", AS_METHODPR(StaticSprite2D, SetDrawRect, (const Rect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetTextureRect(const Rect& rect)", "void SetTextureRect(const Rect&in)", AS_METHODPR(StaticSprite2D, SetTextureRect, (const Rect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetTextureRect(const Rect& rect)", "void set_textureRect(const Rect&in)", AS_METHODPR(StaticSprite2D, SetTextureRect, (const Rect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetBlendMode(BlendMode blendMode)", "void SetBlendMode(BlendMode)", AS_METHODPR(StaticSprite2D, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetBlendMode(BlendMode blendMode)", "void set_blendMode(BlendMode)", AS_METHODPR(StaticSprite2D, SetBlendMode, (BlendMode), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetFlip(bool flipX, bool flipY, bool swapXY=false)", "void SetFlip(bool, bool, bool = false)", AS_METHODPR(StaticSprite2D, SetFlip, (bool, bool, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetFlipX(bool flipX)", "void SetFlipX(bool)", AS_METHODPR(StaticSprite2D, SetFlipX, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetFlipX(bool flipX)", "void set_flipX(bool)", AS_METHODPR(StaticSprite2D, SetFlipX, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetFlipY(bool flipY)", "void SetFlipY(bool)", AS_METHODPR(StaticSprite2D, SetFlipY, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetFlipY(bool flipY)", "void set_flipY(bool)", AS_METHODPR(StaticSprite2D, SetFlipY, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetSwapXY(bool swapXY)", "void SetSwapXY(bool)", AS_METHODPR(StaticSprite2D, SetSwapXY, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetSwapXY(bool swapXY)", "void set_swapXY(bool)", AS_METHODPR(StaticSprite2D, SetSwapXY, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetColor(const Color& color)", "void SetColor(const Color&in)", AS_METHODPR(StaticSprite2D, SetColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetColor(const Color& color)", "void set_color(const Color&in)", AS_METHODPR(StaticSprite2D, SetColor, (const Color&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetAlpha(float alpha)", "void SetAlpha(float)", AS_METHODPR(StaticSprite2D, SetAlpha, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetAlpha(float alpha)", "void set_alpha(float)", AS_METHODPR(StaticSprite2D, SetAlpha, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetUseHotSpot(bool useHotSpot)", "void SetUseHotSpot(bool)", AS_METHODPR(StaticSprite2D, SetUseHotSpot, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetUseHotSpot(bool useHotSpot)", "void set_useHotSpot(bool)", AS_METHODPR(StaticSprite2D, SetUseHotSpot, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetUseDrawRect(bool useDrawRect)", "void SetUseDrawRect(bool)", AS_METHODPR(StaticSprite2D, SetUseDrawRect, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetUseDrawRect(bool useDrawRect)", "void set_useDrawRect(bool)", AS_METHODPR(StaticSprite2D, SetUseDrawRect, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetUseTextureRect(bool useTextureRect)", "void SetUseTextureRect(bool)", AS_METHODPR(StaticSprite2D, SetUseTextureRect, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetUseTextureRect(bool useTextureRect)", "void set_useTextureRect(bool)", AS_METHODPR(StaticSprite2D, SetUseTextureRect, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetHotSpot(const Vector2& hotspot)", "void SetHotSpot(const Vector2&in)", AS_METHODPR(StaticSprite2D, SetHotSpot, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetHotSpot(const Vector2& hotspot)", "void set_hotSpot(const Vector2&in)", AS_METHODPR(StaticSprite2D, SetHotSpot, (const Vector2&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetCustomMaterial(Material* customMaterial)", "void SetCustomMaterial(Material@+)", AS_METHODPR(StaticSprite2D, SetCustomMaterial, (Material*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetCustomMaterial(Material* customMaterial)", "void set_customMaterial(Material@+)", AS_METHODPR(StaticSprite2D, SetCustomMaterial, (Material*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* StaticSprite2D::GetSprite() const", "Sprite2D@+ GetSprite() const", AS_METHODPR(StaticSprite2D, GetSprite, () const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* StaticSprite2D::GetSprite() const", "Sprite2D@+ get_sprite() const", AS_METHODPR(StaticSprite2D, GetSprite, () const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Rect& StaticSprite2D::GetDrawRect() const", "const Rect& GetDrawRect() const", AS_METHODPR(StaticSprite2D, GetDrawRect, () const, const Rect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Rect& StaticSprite2D::GetDrawRect() const", "const Rect& get_drawRect() const", AS_METHODPR(StaticSprite2D, GetDrawRect, () const, const Rect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Rect& StaticSprite2D::GetTextureRect() const", "const Rect& GetTextureRect() const", AS_METHODPR(StaticSprite2D, GetTextureRect, () const, const Rect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Rect& StaticSprite2D::GetTextureRect() const", "const Rect& get_textureRect() const", AS_METHODPR(StaticSprite2D, GetTextureRect, () const, const Rect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BlendMode StaticSprite2D::GetBlendMode() const", "BlendMode GetBlendMode() const", AS_METHODPR(StaticSprite2D, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("BlendMode StaticSprite2D::GetBlendMode() const", "BlendMode get_blendMode() const", AS_METHODPR(StaticSprite2D, GetBlendMode, () const, BlendMode), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetFlipX() const", "bool GetFlipX() const", AS_METHODPR(StaticSprite2D, GetFlipX, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetFlipX() const", "bool get_flipX() const", AS_METHODPR(StaticSprite2D, GetFlipX, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetFlipY() const", "bool GetFlipY() const", AS_METHODPR(StaticSprite2D, GetFlipY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetFlipY() const", "bool get_flipY() const", AS_METHODPR(StaticSprite2D, GetFlipY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetSwapXY() const", "bool GetSwapXY() const", AS_METHODPR(StaticSprite2D, GetSwapXY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetSwapXY() const", "bool get_swapXY() const", AS_METHODPR(StaticSprite2D, GetSwapXY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& StaticSprite2D::GetColor() const", "const Color& GetColor() const", AS_METHODPR(StaticSprite2D, GetColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Color& StaticSprite2D::GetColor() const", "const Color& get_color() const", AS_METHODPR(StaticSprite2D, GetColor, () const, const Color&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float StaticSprite2D::GetAlpha() const", "float GetAlpha() const", AS_METHODPR(StaticSprite2D, GetAlpha, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float StaticSprite2D::GetAlpha() const", "float get_alpha() const", AS_METHODPR(StaticSprite2D, GetAlpha, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetUseHotSpot() const", "bool GetUseHotSpot() const", AS_METHODPR(StaticSprite2D, GetUseHotSpot, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetUseHotSpot() const", "bool get_useHotSpot() const", AS_METHODPR(StaticSprite2D, GetUseHotSpot, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetUseDrawRect() const", "bool GetUseDrawRect() const", AS_METHODPR(StaticSprite2D, GetUseDrawRect, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetUseDrawRect() const", "bool get_useDrawRect() const", AS_METHODPR(StaticSprite2D, GetUseDrawRect, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetUseTextureRect() const", "bool GetUseTextureRect() const", AS_METHODPR(StaticSprite2D, GetUseTextureRect, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool StaticSprite2D::GetUseTextureRect() const", "bool get_useTextureRect() const", AS_METHODPR(StaticSprite2D, GetUseTextureRect, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& StaticSprite2D::GetHotSpot() const", "const Vector2& GetHotSpot() const", AS_METHODPR(StaticSprite2D, GetHotSpot, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& StaticSprite2D::GetHotSpot() const", "const Vector2& get_hotSpot() const", AS_METHODPR(StaticSprite2D, GetHotSpot, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Material* StaticSprite2D::GetCustomMaterial() const", "Material@+ GetCustomMaterial() const", AS_METHODPR(StaticSprite2D, GetCustomMaterial, () const, Material*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Material* StaticSprite2D::GetCustomMaterial() const", "Material@+ get_customMaterial() const", AS_METHODPR(StaticSprite2D, GetCustomMaterial, () const, Material*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetSpriteAttr(const ResourceRef& value)", "void SetSpriteAttr(const ResourceRef&in)", AS_METHODPR(StaticSprite2D, SetSpriteAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef StaticSprite2D::GetSpriteAttr() const", "ResourceRef GetSpriteAttr() const", AS_METHODPR(StaticSprite2D, GetSpriteAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StaticSprite2D::SetCustomMaterialAttr(const ResourceRef& value)", "void SetCustomMaterialAttr(const ResourceRef&in)", AS_METHODPR(StaticSprite2D, SetCustomMaterialAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef StaticSprite2D::GetCustomMaterialAttr() const", "ResourceRef GetCustomMaterialAttr() const", AS_METHODPR(StaticSprite2D, GetCustomMaterialAttr, () const, ResourceRef), AS_CALL_THISCALL));
}

// class StretchableSprite2D | File: ../Urho2D/StretchableSprite2D.h
void CollectMembers_StretchableSprite2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_StaticSprite2D(methods);

    Remove(methods, "static void StaticSprite2D::RegisterObject(Context* context)");

    methods.Push(RegisterObjectMethodArgs("void StretchableSprite2D::SetBorder(const IntRect& border)", "void SetBorder(const IntRect&in)", AS_METHODPR(StretchableSprite2D, SetBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void StretchableSprite2D::SetBorder(const IntRect& border)", "void set_border(const IntRect&in)", AS_METHODPR(StretchableSprite2D, SetBorder, (const IntRect&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& StretchableSprite2D::GetBorder() const", "const IntRect& GetBorder() const", AS_METHODPR(StretchableSprite2D, GetBorder, () const, const IntRect&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const IntRect& StretchableSprite2D::GetBorder() const", "const IntRect& get_border() const", AS_METHODPR(StretchableSprite2D, GetBorder, () const, const IntRect&), AS_CALL_THISCALL));
}

// class Tile2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_Tile2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    methods.Push(RegisterObjectMethodArgs("unsigned Tile2D::GetGid() const", "uint GetGid() const", AS_METHODPR(Tile2D, GetGid, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned Tile2D::GetGid() const", "uint get_gid() const", AS_METHODPR(Tile2D, GetGid, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Tile2D::GetFlipX() const", "bool GetFlipX() const", AS_METHODPR(Tile2D, GetFlipX, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Tile2D::GetFlipX() const", "bool get_flipX() const", AS_METHODPR(Tile2D, GetFlipX, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Tile2D::GetFlipY() const", "bool GetFlipY() const", AS_METHODPR(Tile2D, GetFlipY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Tile2D::GetFlipY() const", "bool get_flipY() const", AS_METHODPR(Tile2D, GetFlipY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Tile2D::GetSwapXY() const", "bool GetSwapXY() const", AS_METHODPR(Tile2D, GetSwapXY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Tile2D::GetSwapXY() const", "bool get_swapXY() const", AS_METHODPR(Tile2D, GetSwapXY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* Tile2D::GetSprite() const", "Sprite2D@+ GetSprite() const", AS_METHODPR(Tile2D, GetSprite, () const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* Tile2D::GetSprite() const", "Sprite2D@+ get_sprite() const", AS_METHODPR(Tile2D, GetSprite, () const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool Tile2D::HasProperty(const String& name) const", "bool HasProperty(const String&in) const", AS_METHODPR(Tile2D, HasProperty, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& Tile2D::GetProperty(const String& name) const", "const String& GetProperty(const String&in) const", AS_METHODPR(Tile2D, GetProperty, (const String&) const, const String&), AS_CALL_THISCALL));
}

// Vector<SharedPtr<TileMapObject2D>> TileMap2D::GetTileCollisionShapes(unsigned gid) const
#ifdef URHO3D_URHO2D
// Vector<SharedPtr<TileMapObject2D>> TileMap2D::GetTileCollisionShapes(unsigned gid) const | File: ../Urho2D/TileMap2D.h
static CScriptArray* TileMap2D_GetTileCollisionShapes_unsigned(TileMap2D* ptr, unsigned gid)
{
    Vector<SharedPtr<TileMapObject2D>> result = ptr->GetTileCollisionShapes(gid);
    return VectorToHandleArray(result, "Array<TileMapObject2D@>");
}
#endif


// class TileMap2D | File: ../Urho2D/TileMap2D.h
void CollectMembers_TileMap2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    Remove(methods, "static void Animatable::RegisterObject(Context* context)");
    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");

    methods.Push(RegisterObjectMethodArgs("void TileMap2D::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(TileMap2D, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TileMap2D::SetTmxFile(TmxFile2D* tmxFile)", "void SetTmxFile(TmxFile2D@+)", AS_METHODPR(TileMap2D, SetTmxFile, (TmxFile2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TileMap2D::SetTmxFile(TmxFile2D* tmxFile)", "void set_tmxFile(TmxFile2D@+)", AS_METHODPR(TileMap2D, SetTmxFile, (TmxFile2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TileMap2D::DrawDebugGeometry()", "void DrawDebugGeometry()", AS_METHODPR(TileMap2D, DrawDebugGeometry, (), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TmxFile2D* TileMap2D::GetTmxFile() const", "TmxFile2D@+ GetTmxFile() const", AS_METHODPR(TileMap2D, GetTmxFile, () const, TmxFile2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TmxFile2D* TileMap2D::GetTmxFile() const", "TmxFile2D@+ get_tmxFile() const", AS_METHODPR(TileMap2D, GetTmxFile, () const, TmxFile2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const TileMapInfo2D& TileMap2D::GetInfo() const", "const TileMapInfo2D& GetInfo() const", AS_METHODPR(TileMap2D, GetInfo, () const, const TileMapInfo2D&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const TileMapInfo2D& TileMap2D::GetInfo() const", "const TileMapInfo2D& get_info() const", AS_METHODPR(TileMap2D, GetInfo, () const, const TileMapInfo2D&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned TileMap2D::GetNumLayers() const", "uint GetNumLayers() const", AS_METHODPR(TileMap2D, GetNumLayers, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned TileMap2D::GetNumLayers() const", "uint get_numLayers() const", AS_METHODPR(TileMap2D, GetNumLayers, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TileMapLayer2D* TileMap2D::GetLayer(unsigned index) const", "TileMapLayer2D@+ GetLayer(uint) const", AS_METHODPR(TileMap2D, GetLayer, (unsigned) const, TileMapLayer2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 TileMap2D::TileIndexToPosition(int x, int y) const", "Vector2 TileIndexToPosition(int, int) const", AS_METHODPR(TileMap2D, TileIndexToPosition, (int, int) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMap2D::PositionToTileIndex(int& x, int& y, const Vector2& position) const", "bool PositionToTileIndex(int&, int&, const Vector2&in) const", AS_METHODPR(TileMap2D, PositionToTileIndex, (int&, int&, const Vector2&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TileMap2D::SetTmxFileAttr(const ResourceRef& value)", "void SetTmxFileAttr(const ResourceRef&in)", AS_METHODPR(TileMap2D, SetTmxFileAttr, (const ResourceRef&), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("ResourceRef TileMap2D::GetTmxFileAttr() const", "ResourceRef GetTmxFileAttr() const", AS_METHODPR(TileMap2D, GetTmxFileAttr, () const, ResourceRef), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector<SharedPtr<TileMapObject2D>> TileMap2D::GetTileCollisionShapes(unsigned gid) const", "Array<TileMapObject2D@>@ GetTileCollisionShapes(uint) const", AS_FUNCTION_OBJFIRST(TileMap2D_GetTileCollisionShapes_unsigned), AS_CALL_CDECL_OBJFIRST));
}

// struct TileMapInfo2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_TileMapInfo2D(Vector<RegisterObjectMethodArgs>& methods)
{
    methods.Push(RegisterObjectMethodArgs("float TileMapInfo2D::GetMapWidth() const", "float GetMapWidth() const", AS_METHODPR(TileMapInfo2D, GetMapWidth, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float TileMapInfo2D::GetMapWidth() const", "float get_mapWidth() const", AS_METHODPR(TileMapInfo2D, GetMapWidth, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float TileMapInfo2D::GetMapHeight() const", "float GetMapHeight() const", AS_METHODPR(TileMapInfo2D, GetMapHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float TileMapInfo2D::GetMapHeight() const", "float get_mapHeight() const", AS_METHODPR(TileMapInfo2D, GetMapHeight, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 TileMapInfo2D::ConvertPosition(const Vector2& position) const", "Vector2 ConvertPosition(const Vector2&in) const", AS_METHODPR(TileMapInfo2D, ConvertPosition, (const Vector2&) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector2 TileMapInfo2D::TileIndexToPosition(int x, int y) const", "Vector2 TileIndexToPosition(int, int) const", AS_METHODPR(TileMapInfo2D, TileIndexToPosition, (int, int) const, Vector2), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapInfo2D::PositionToTileIndex(int& x, int& y, const Vector2& position) const", "bool PositionToTileIndex(int&, int&, const Vector2&in) const", AS_METHODPR(TileMapInfo2D, PositionToTileIndex, (int&, int&, const Vector2&) const, bool), AS_CALL_THISCALL));
}

// class TileMapLayer2D | File: ../Urho2D/TileMapLayer2D.h
void CollectMembers_TileMapLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Component(methods);

    Remove(methods, "static void Animatable::RegisterObject(Context* context)");
    Remove(methods, "virtual void Component::DrawDebugGeometry(DebugRenderer* debug, bool depthTest)");

    methods.Push(RegisterObjectMethodArgs("void TileMapLayer2D::DrawDebugGeometry(DebugRenderer* debug, bool depthTest) override", "void DrawDebugGeometry(DebugRenderer@+, bool)", AS_METHODPR(TileMapLayer2D, DrawDebugGeometry, (DebugRenderer*, bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TileMapLayer2D::Initialize(TileMap2D* tileMap, const TmxLayer2D* tmxLayer)", "void Initialize(TileMap2D@+, TmxLayer2D@+)", AS_METHODPR(TileMapLayer2D, Initialize, (TileMap2D*, const TmxLayer2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TileMapLayer2D::SetDrawOrder(int drawOrder)", "void SetDrawOrder(int)", AS_METHODPR(TileMapLayer2D, SetDrawOrder, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TileMapLayer2D::SetDrawOrder(int drawOrder)", "void set_drawOrder(int)", AS_METHODPR(TileMapLayer2D, SetDrawOrder, (int), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TileMapLayer2D::SetVisible(bool visible)", "void SetVisible(bool)", AS_METHODPR(TileMapLayer2D, SetVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TileMapLayer2D::SetVisible(bool visible)", "void set_visible(bool)", AS_METHODPR(TileMapLayer2D, SetVisible, (bool), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TileMap2D* TileMapLayer2D::GetTileMap() const", "TileMap2D@+ GetTileMap() const", AS_METHODPR(TileMapLayer2D, GetTileMap, () const, TileMap2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const TmxLayer2D* TileMapLayer2D::GetTmxLayer() const", "TmxLayer2D@+ GetTmxLayer() const", AS_METHODPR(TileMapLayer2D, GetTmxLayer, () const, const TmxLayer2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int TileMapLayer2D::GetDrawOrder() const", "int GetDrawOrder() const", AS_METHODPR(TileMapLayer2D, GetDrawOrder, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int TileMapLayer2D::GetDrawOrder() const", "int get_drawOrder() const", AS_METHODPR(TileMapLayer2D, GetDrawOrder, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapLayer2D::IsVisible() const", "bool IsVisible() const", AS_METHODPR(TileMapLayer2D, IsVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapLayer2D::IsVisible() const", "bool get_visible() const", AS_METHODPR(TileMapLayer2D, IsVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapLayer2D::HasProperty(const String& name) const", "bool HasProperty(const String&in) const", AS_METHODPR(TileMapLayer2D, HasProperty, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& TileMapLayer2D::GetProperty(const String& name) const", "const String& GetProperty(const String&in) const", AS_METHODPR(TileMapLayer2D, GetProperty, (const String&) const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TileMapLayerType2D TileMapLayer2D::GetLayerType() const", "TileMapLayerType2D GetLayerType() const", AS_METHODPR(TileMapLayer2D, GetLayerType, () const, TileMapLayerType2D), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TileMapLayerType2D TileMapLayer2D::GetLayerType() const", "TileMapLayerType2D get_layerType() const", AS_METHODPR(TileMapLayer2D, GetLayerType, () const, TileMapLayerType2D), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int TileMapLayer2D::GetWidth() const", "int GetWidth() const", AS_METHODPR(TileMapLayer2D, GetWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int TileMapLayer2D::GetWidth() const", "int get_width() const", AS_METHODPR(TileMapLayer2D, GetWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int TileMapLayer2D::GetHeight() const", "int GetHeight() const", AS_METHODPR(TileMapLayer2D, GetHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int TileMapLayer2D::GetHeight() const", "int get_height() const", AS_METHODPR(TileMapLayer2D, GetHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* TileMapLayer2D::GetTileNode(int x, int y) const", "Node@+ GetTileNode(int, int) const", AS_METHODPR(TileMapLayer2D, GetTileNode, (int, int) const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Tile2D* TileMapLayer2D::GetTile(int x, int y) const", "Tile2D@+ GetTile(int, int) const", AS_METHODPR(TileMapLayer2D, GetTile, (int, int) const, Tile2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned TileMapLayer2D::GetNumObjects() const", "uint GetNumObjects() const", AS_METHODPR(TileMapLayer2D, GetNumObjects, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned TileMapLayer2D::GetNumObjects() const", "uint get_numObjects() const", AS_METHODPR(TileMapLayer2D, GetNumObjects, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TileMapObject2D* TileMapLayer2D::GetObject(unsigned index) const", "TileMapObject2D@+ GetObject(uint) const", AS_METHODPR(TileMapLayer2D, GetObject, (unsigned) const, TileMapObject2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* TileMapLayer2D::GetObjectNode(unsigned index) const", "Node@+ GetObjectNode(uint) const", AS_METHODPR(TileMapLayer2D, GetObjectNode, (unsigned) const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* TileMapLayer2D::GetImageNode() const", "Node@+ GetImageNode() const", AS_METHODPR(TileMapLayer2D, GetImageNode, () const, Node*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Node* TileMapLayer2D::GetImageNode() const", "Node@+ get_imageNode() const", AS_METHODPR(TileMapLayer2D, GetImageNode, () const, Node*), AS_CALL_THISCALL));
}

// class TileMapObject2D | File: ../Urho2D/TileMapDefs2D.h
void CollectMembers_TileMapObject2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    methods.Push(RegisterObjectMethodArgs("TileMapObjectType2D TileMapObject2D::GetObjectType() const", "TileMapObjectType2D GetObjectType() const", AS_METHODPR(TileMapObject2D, GetObjectType, () const, TileMapObjectType2D), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TileMapObjectType2D TileMapObject2D::GetObjectType() const", "TileMapObjectType2D get_objectType() const", AS_METHODPR(TileMapObject2D, GetObjectType, () const, TileMapObjectType2D), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& TileMapObject2D::GetName() const", "const String& GetName() const", AS_METHODPR(TileMapObject2D, GetName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& TileMapObject2D::GetName() const", "const String& get_name() const", AS_METHODPR(TileMapObject2D, GetName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& TileMapObject2D::GetType() const", "const String& GetType() const", AS_METHODPR(TileMapObject2D, GetType, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& TileMapObject2D::GetType() const", "const String& get_type() const", AS_METHODPR(TileMapObject2D, GetType, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& TileMapObject2D::GetPosition() const", "const Vector2& GetPosition() const", AS_METHODPR(TileMapObject2D, GetPosition, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& TileMapObject2D::GetPosition() const", "const Vector2& get_position() const", AS_METHODPR(TileMapObject2D, GetPosition, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& TileMapObject2D::GetSize() const", "const Vector2& GetSize() const", AS_METHODPR(TileMapObject2D, GetSize, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& TileMapObject2D::GetSize() const", "const Vector2& get_size() const", AS_METHODPR(TileMapObject2D, GetSize, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned TileMapObject2D::GetNumPoints() const", "uint GetNumPoints() const", AS_METHODPR(TileMapObject2D, GetNumPoints, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned TileMapObject2D::GetNumPoints() const", "uint get_numPoints() const", AS_METHODPR(TileMapObject2D, GetNumPoints, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& TileMapObject2D::GetPoint(unsigned index) const", "const Vector2& GetPoint(uint) const", AS_METHODPR(TileMapObject2D, GetPoint, (unsigned) const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned TileMapObject2D::GetTileGid() const", "uint GetTileGid() const", AS_METHODPR(TileMapObject2D, GetTileGid, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned TileMapObject2D::GetTileGid() const", "uint get_tileGid() const", AS_METHODPR(TileMapObject2D, GetTileGid, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapObject2D::GetTileFlipX() const", "bool GetTileFlipX() const", AS_METHODPR(TileMapObject2D, GetTileFlipX, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapObject2D::GetTileFlipX() const", "bool get_tileFlipX() const", AS_METHODPR(TileMapObject2D, GetTileFlipX, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapObject2D::GetTileFlipY() const", "bool GetTileFlipY() const", AS_METHODPR(TileMapObject2D, GetTileFlipY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapObject2D::GetTileFlipY() const", "bool get_tileFlipY() const", AS_METHODPR(TileMapObject2D, GetTileFlipY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapObject2D::GetTileSwapXY() const", "bool GetTileSwapXY() const", AS_METHODPR(TileMapObject2D, GetTileSwapXY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapObject2D::GetTileSwapXY() const", "bool get_tileSwapXY() const", AS_METHODPR(TileMapObject2D, GetTileSwapXY, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* TileMapObject2D::GetTileSprite() const", "Sprite2D@+ GetTileSprite() const", AS_METHODPR(TileMapObject2D, GetTileSprite, () const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* TileMapObject2D::GetTileSprite() const", "Sprite2D@+ get_tileSprite() const", AS_METHODPR(TileMapObject2D, GetTileSprite, () const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TileMapObject2D::HasProperty(const String& name) const", "bool HasProperty(const String&in) const", AS_METHODPR(TileMapObject2D, HasProperty, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& TileMapObject2D::GetProperty(const String& name) const", "const String& GetProperty(const String&in) const", AS_METHODPR(TileMapObject2D, GetProperty, (const String&) const, const String&), AS_CALL_THISCALL));
}

// Vector<SharedPtr<TileMapObject2D>> TmxFile2D::GetTileCollisionShapes(unsigned gid) const
#ifdef URHO3D_URHO2D
// Vector<SharedPtr<TileMapObject2D>> TmxFile2D::GetTileCollisionShapes(unsigned gid) const | File: ../Urho2D/TmxFile2D.h
static CScriptArray* TmxFile2D_GetTileCollisionShapes_unsigned(TmxFile2D* ptr, unsigned gid)
{
    Vector<SharedPtr<TileMapObject2D>> result = ptr->GetTileCollisionShapes(gid);
    return VectorToHandleArray(result, "Array<TileMapObject2D@>");
}
#endif


// class TmxFile2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxFile2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_Resource(methods);

    Remove(methods, "virtual bool Resource::BeginLoad(Deserializer& source)");
    Remove(methods, "virtual bool Resource::EndLoad()");

    // void TmxFile2D::AddLayer(Urho3D::TmxLayer2D* layer)
    // Error: type "Urho3D::TmxLayer2D*" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool TmxFile2D::BeginLoad(Deserializer& source) override", "bool BeginLoad(Deserializer&)", AS_METHODPR(TmxFile2D, BeginLoad, (Deserializer&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TmxFile2D::EndLoad() override", "bool EndLoad()", AS_METHODPR(TmxFile2D, EndLoad, (), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TmxFile2D::SetInfo(Orientation2D orientation, int width, int height, float tileWidth, float tileHeight)", "bool SetInfo(Orientation2D, int, int, float, float)", AS_METHODPR(TmxFile2D, SetInfo, (Orientation2D, int, int, float, float), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TmxFile2D::AddLayer(unsigned index, TmxLayer2D* layer)", "void AddLayer(uint, TmxLayer2D@+)", AS_METHODPR(TmxFile2D, AddLayer, (unsigned, TmxLayer2D*), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const TileMapInfo2D& TmxFile2D::GetInfo() const", "const TileMapInfo2D& GetInfo() const", AS_METHODPR(TmxFile2D, GetInfo, () const, const TileMapInfo2D&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* TmxFile2D::GetTileSprite(unsigned gid) const", "Sprite2D@+ GetTileSprite(uint) const", AS_METHODPR(TmxFile2D, GetTileSprite, (unsigned) const, Sprite2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Vector<SharedPtr<TileMapObject2D>> TmxFile2D::GetTileCollisionShapes(unsigned gid) const", "Array<TileMapObject2D@>@ GetTileCollisionShapes(uint) const", AS_FUNCTION_OBJFIRST(TmxFile2D_GetTileCollisionShapes_unsigned), AS_CALL_CDECL_OBJFIRST));
    methods.Push(RegisterObjectMethodArgs("PropertySet2D* TmxFile2D::GetTilePropertySet(unsigned gid) const", "PropertySet2D@+ GetTilePropertySet(uint) const", AS_METHODPR(TmxFile2D, GetTilePropertySet, (unsigned) const, PropertySet2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned TmxFile2D::GetNumLayers() const", "uint GetNumLayers() const", AS_METHODPR(TmxFile2D, GetNumLayers, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const TmxLayer2D* TmxFile2D::GetLayer(unsigned index) const", "TmxLayer2D@+ GetLayer(uint) const", AS_METHODPR(TmxFile2D, GetLayer, (unsigned) const, const TmxLayer2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TmxFile2D::SetSpriteTextureEdgeOffset(float offset)", "void SetSpriteTextureEdgeOffset(float)", AS_METHODPR(TmxFile2D, SetSpriteTextureEdgeOffset, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("void TmxFile2D::SetSpriteTextureEdgeOffset(float offset)", "void set_edgeOffset(float)", AS_METHODPR(TmxFile2D, SetSpriteTextureEdgeOffset, (float), void), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float TmxFile2D::GetSpriteTextureEdgeOffset() const", "float GetSpriteTextureEdgeOffset() const", AS_METHODPR(TmxFile2D, GetSpriteTextureEdgeOffset, () const, float), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("float TmxFile2D::GetSpriteTextureEdgeOffset() const", "float get_edgeOffset() const", AS_METHODPR(TmxFile2D, GetSpriteTextureEdgeOffset, () const, float), AS_CALL_THISCALL));
}

// class TmxImageLayer2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxImageLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_TmxLayer2D(methods);

    methods.Push(RegisterObjectMethodArgs("bool TmxImageLayer2D::Load(const XMLElement& element, const TileMapInfo2D& info)", "bool Load(const XMLElement&in, const TileMapInfo2D&in)", AS_METHODPR(TmxImageLayer2D, Load, (const XMLElement&, const TileMapInfo2D&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const Vector2& TmxImageLayer2D::GetPosition() const", "const Vector2& GetPosition() const", AS_METHODPR(TmxImageLayer2D, GetPosition, () const, const Vector2&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& TmxImageLayer2D::GetSource() const", "const String& GetSource() const", AS_METHODPR(TmxImageLayer2D, GetSource, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Sprite2D* TmxImageLayer2D::GetSprite() const", "Sprite2D@+ GetSprite() const", AS_METHODPR(TmxImageLayer2D, GetSprite, () const, Sprite2D*), AS_CALL_THISCALL));
}

// class TmxLayer2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_RefCounted(methods);

    methods.Push(RegisterObjectMethodArgs("TmxFile2D* TmxLayer2D::GetTmxFile() const", "TmxFile2D@+ GetTmxFile() const", AS_METHODPR(TmxLayer2D, GetTmxFile, () const, TmxFile2D*), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TileMapLayerType2D TmxLayer2D::GetType() const", "TileMapLayerType2D GetType() const", AS_METHODPR(TmxLayer2D, GetType, () const, TileMapLayerType2D), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& TmxLayer2D::GetName() const", "const String& GetName() const", AS_METHODPR(TmxLayer2D, GetName, () const, const String&), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int TmxLayer2D::GetWidth() const", "int GetWidth() const", AS_METHODPR(TmxLayer2D, GetWidth, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("int TmxLayer2D::GetHeight() const", "int GetHeight() const", AS_METHODPR(TmxLayer2D, GetHeight, () const, int), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TmxLayer2D::IsVisible() const", "bool IsVisible() const", AS_METHODPR(TmxLayer2D, IsVisible, () const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("bool TmxLayer2D::HasProperty(const String& name) const", "bool HasProperty(const String&in) const", AS_METHODPR(TmxLayer2D, HasProperty, (const String&) const, bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("const String& TmxLayer2D::GetProperty(const String& name) const", "const String& GetProperty(const String&in) const", AS_METHODPR(TmxLayer2D, GetProperty, (const String&) const, const String&), AS_CALL_THISCALL));
}

// class TmxObjectGroup2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxObjectGroup2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_TmxLayer2D(methods);

    // void TmxObjectGroup2D::StoreObject(const XMLElement& objectElem, const SharedPtr<TileMapObject2D>& object, const TileMapInfo2D& info, bool isTile=false)
    // Error: type "const SharedPtr<TileMapObject2D>&" can not automatically bind

    methods.Push(RegisterObjectMethodArgs("bool TmxObjectGroup2D::Load(const XMLElement& element, const TileMapInfo2D& info)", "bool Load(const XMLElement&in, const TileMapInfo2D&in)", AS_METHODPR(TmxObjectGroup2D, Load, (const XMLElement&, const TileMapInfo2D&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("unsigned TmxObjectGroup2D::GetNumObjects() const", "uint GetNumObjects() const", AS_METHODPR(TmxObjectGroup2D, GetNumObjects, () const, unsigned), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("TileMapObject2D* TmxObjectGroup2D::GetObject(unsigned index) const", "TileMapObject2D@+ GetObject(uint) const", AS_METHODPR(TmxObjectGroup2D, GetObject, (unsigned) const, TileMapObject2D*), AS_CALL_THISCALL));
}

// class TmxTileLayer2D | File: ../Urho2D/TmxFile2D.h
void CollectMembers_TmxTileLayer2D(Vector<RegisterObjectMethodArgs>& methods)
{
    CollectMembers_TmxLayer2D(methods);

    methods.Push(RegisterObjectMethodArgs("bool TmxTileLayer2D::Load(const XMLElement& element, const TileMapInfo2D& info)", "bool Load(const XMLElement&in, const TileMapInfo2D&in)", AS_METHODPR(TmxTileLayer2D, Load, (const XMLElement&, const TileMapInfo2D&), bool), AS_CALL_THISCALL));
    methods.Push(RegisterObjectMethodArgs("Tile2D* TmxTileLayer2D::GetTile(int x, int y) const", "Tile2D@+ GetTile(int, int) const", AS_METHODPR(TmxTileLayer2D, GetTile, (int, int) const, Tile2D*), AS_CALL_THISCALL));
}

// struct Vertex2D | File: ../Urho2D/Drawable2D.h
void CollectMembers_Vertex2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

// struct ViewBatchInfo2D | File: ../Urho2D/Renderer2D.h
void CollectMembers_ViewBatchInfo2D(Vector<RegisterObjectMethodArgs>& methods)
{
}

#endif // def URHO3D_URHO2D

} // namespace Urho3D
