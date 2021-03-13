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

#ifdef URHO3D_NETWORK

#include "../Network/Network.h"
#include "../Network/HttpRequest.h"

namespace Urho3D
{

// Workaround crash in 43_HttpRequestDemo.as ( may be thread related)
#define REGISTER_MEMBERS_MANUAL_PART_HttpRequest() \
    Remove(members.methods_, "String Deserializer::ReadLine()"); \
    members.methods_.Push(RegisterObjectMethodArgs("String Deserializer::ReadLine()", "String ReadLine()", AS_METHODPR(HttpRequest, ReadLine, (), String), AS_CALL_THISCALL));

}

#endif // def URHO3D_NETWORK
