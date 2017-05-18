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

// This code was generated by google-apis-code-generator 1.5.1

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Description:
//   Manages files in Drive including uploading, downloading, searching, detecting changes, and updating sharing permissions.
// Classes:
//   AppList
// Documentation:
//   https://developers.google.com/drive/

#include "google/drive_api/app_list.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/drive_api/app.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_drive_api {
using namespace googleapis;


// Object factory method (static).
AppList* AppList::New() {
  return new client::JsonCppCapsule<AppList>;
}

// Standard immutable constructor.
AppList::AppList(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
AppList::AppList(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
AppList::~AppList() {
}

// Properties.

const client::JsonCppArray<App > AppList::get_items() const {
   const Json::Value& storage = Storage("items");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<App > >(storage);
}

client::JsonCppArray<App > AppList::mutable_items() {
  Json::Value* storage = MutableStorage("items");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<App > >(storage);
}
}  // namespace google_drive_api
