// DO NOT EDIT. This file is generated

#include "../Precompiled.h"
#include "../AngelScript/APITemplates.h"

#include "../AngelScript/GeneratedIncludes.h"
#include "../AngelScript/GeneratedClassMembers.h"
#include "../AngelScript/Manual.h"

namespace Urho3D
{

#ifdef URHO3D_DATABASE

// class Database | File: ../Database/Database.h
void CollectMembers_Database(MemberCollection& members)
{
    CollectMembers_Object(members);

    members.methods_.Push(RegisterObjectMethodArgs("DbConnection* Database::Connect(const String& connectionString)", "DbConnection@+ Connect(const String&in)", AS_METHODPR(Database, Connect, (const String&), DbConnection*), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Database::Disconnect(DbConnection* connection)", "void Disconnect(DbConnection@+)", AS_METHODPR(Database, Disconnect, (DbConnection*), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Database::IsPooling() const", "bool IsPooling() const", AS_METHODPR(Database, IsPooling, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("bool Database::IsPooling() const", "bool get_pooling() const", AS_METHODPR(Database, IsPooling, () const, bool), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Database::GetPoolSize() const", "uint GetPoolSize() const", AS_METHODPR(Database, GetPoolSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("unsigned Database::GetPoolSize() const", "uint get_poolSize() const", AS_METHODPR(Database, GetPoolSize, () const, unsigned), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Database::SetPoolSize(unsigned poolSize)", "void SetPoolSize(uint)", AS_METHODPR(Database, SetPoolSize, (unsigned), void), AS_CALL_THISCALL));
    members.methods_.Push(RegisterObjectMethodArgs("void Database::SetPoolSize(unsigned poolSize)", "void set_poolSize(uint)", AS_METHODPR(Database, SetPoolSize, (unsigned), void), AS_CALL_THISCALL));

    members.staticMethods_.Push(RegisterGlobalFunctionArgs("static DBAPI Database::GetAPI()", "DBAPI GetAPI()", AS_FUNCTIONPR(Database::GetAPI, (), DBAPI), AS_CALL_CDECL));

    #ifdef REGISTER_MEMBER_MANUAL_PART_Database
        REGISTER_MEMBER_MANUAL_PART_Database();
    #endif
}

#endif // def URHO3D_DATABASE

} // namespace Urho3D
