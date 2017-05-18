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
//   VideoAbuseReportReasonListResponse
// Documentation:
//   https://developers.google.com/youtube/v3

#include "google/youtube_api/video_abuse_report_reason_list_response.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/video_abuse_report_reason.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_youtube_api {
using namespace googleapis;


// Object factory method (static).
VideoAbuseReportReasonListResponse* VideoAbuseReportReasonListResponse::New() {
  return new client::JsonCppCapsule<VideoAbuseReportReasonListResponse>;
}

// Standard immutable constructor.
VideoAbuseReportReasonListResponse::VideoAbuseReportReasonListResponse(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
VideoAbuseReportReasonListResponse::VideoAbuseReportReasonListResponse(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
VideoAbuseReportReasonListResponse::~VideoAbuseReportReasonListResponse() {
}

// Properties.

const client::JsonCppArray<VideoAbuseReportReason > VideoAbuseReportReasonListResponse::get_items() const {
   const Json::Value& storage = Storage("items");
   return client::JsonValueToCppValueHelper<client::JsonCppArray<VideoAbuseReportReason > >(storage);
}

client::JsonCppArray<VideoAbuseReportReason > VideoAbuseReportReasonListResponse::mutable_items() {
  Json::Value* storage = MutableStorage("items");
  return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<VideoAbuseReportReason > >(storage);
}
}  // namespace google_youtube_api
