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
//   FanFundingEventSnippet
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/fan_funding_event_snippet.h"
#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/channel_profile_details.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
FanFundingEventSnippet* FanFundingEventSnippet::New() {
  return new client::JsonCppCapsule<FanFundingEventSnippet>;
}

// Standard immutable constructor.
FanFundingEventSnippet::FanFundingEventSnippet(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
FanFundingEventSnippet::FanFundingEventSnippet(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
FanFundingEventSnippet::~FanFundingEventSnippet() {
}

// Properties.

const ChannelProfileDetails FanFundingEventSnippet::get_supporter_details() const {
   const Json::Value& storage = Storage("supporterDetails");
   return client::JsonValueToCppValueHelper<ChannelProfileDetails >(storage);
}

ChannelProfileDetails FanFundingEventSnippet::mutable_supporterDetails() {
  Json::Value* storage = MutableStorage("supporterDetails");
  return client::JsonValueToMutableCppValueHelper<ChannelProfileDetails >(storage);
}
}  // namespace google_youtube_api
