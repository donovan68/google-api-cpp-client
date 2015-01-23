// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.0
//   Build date: 2014-11-17 18:43:33 UTC
//   on: 2015-01-22, 21:42:31 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Description:
//   The API to interact with Drive.
// Classes:
//   CommentReply
// Documentation:
//   https://developers.google.com/drive/

#include "google/drive_api/comment_reply.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/drive_api/user.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_drive_api {
using namespace googleapis;


// Object factory method (static).
CommentReply* CommentReply::New() {
  return new client::JsonCppCapsule<CommentReply>;
}

// Standard immutable constructor.
CommentReply::CommentReply(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
CommentReply::CommentReply(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
CommentReply::~CommentReply() {
}
}  // namespace google_drive_api