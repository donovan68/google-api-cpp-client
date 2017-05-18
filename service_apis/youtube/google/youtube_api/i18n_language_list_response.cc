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
//   YouTube Data API (youtube/v3)
// Description:
//   Supports core YouTube features, such as uploading videos, creating and managing playlists, searching for content, and much more.
// Classes:
//   I18nLanguageListResponse
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/i18n_language_list_response.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/i18n_language.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
I18nLanguageListResponse* I18nLanguageListResponse::New() {
  return new client::JsonCppCapsule<I18nLanguageListResponse>;
}

// Standard immutable constructor.
I18nLanguageListResponse::I18nLanguageListResponse(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
I18nLanguageListResponse::I18nLanguageListResponse(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
I18nLanguageListResponse::~I18nLanguageListResponse() {
}

// Properties.

const client::JsonCppArray<I18nLanguage > I18nLanguageListResponse::get_items() const {
   const Json::Value& storage = Storage("items");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<I18nLanguage > >(storage);
}

client::JsonCppArray<I18nLanguage > I18nLanguageListResponse::mutable_items() {
  Json::Value* storage = MutableStorage("items");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<I18nLanguage > >(storage);
}
}  // namespace google_youtube_api
