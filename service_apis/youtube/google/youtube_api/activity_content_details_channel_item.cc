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
//   ActivityContentDetailsChannelItem
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/activity_content_details_channel_item.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/resource_id.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
ActivityContentDetailsChannelItem* ActivityContentDetailsChannelItem::New() {
  return new client::JsonCppCapsule<ActivityContentDetailsChannelItem>;
}

// Standard immutable constructor.
ActivityContentDetailsChannelItem::ActivityContentDetailsChannelItem(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
ActivityContentDetailsChannelItem::ActivityContentDetailsChannelItem(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
ActivityContentDetailsChannelItem::~ActivityContentDetailsChannelItem() {
}

// Properties.

const ResourceId ActivityContentDetailsChannelItem::get_resource_id() const {
   const Json::Value& storage = Storage("resourceId");
   return client::JsonValueToCppValueHelper<ResourceId >(storage);
}

ResourceId ActivityContentDetailsChannelItem::mutable_resourceId() {
  Json::Value* storage = MutableStorage("resourceId");
  return client::JsonValueToMutableCppValueHelper<ResourceId >(storage);
}
}  // namespace google_youtube_api
