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
// Generated from:
//   Version: v3
//   Revision: 20170130
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.4
#ifndef  GOOGLE_YOUTUBE_API_CHANNEL_PROFILE_DETAILS_H_
#define  GOOGLE_YOUTUBE_API_CHANNEL_PROFILE_DETAILS_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class ChannelProfileDetails : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ChannelProfileDetails* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelProfileDetails(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelProfileDetails(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ChannelProfileDetails();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ChannelProfileDetails</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ChannelProfileDetails");
  }

  /**
   * Determine if the '<code>channelId</code>' attribute was set.
   *
   * @return true if the '<code>channelId</code>' attribute was set.
   */
  bool has_channel_id() const {
    return Storage().isMember("channelId");
  }

  /**
   * Clears the '<code>channelId</code>' attribute.
   */
  void clear_channel_id() {
    MutableStorage()->removeMember("channelId");
  }


  /**
   * Get the value of the '<code>channelId</code>' attribute.
   */
  const StringPiece get_channel_id() const {
    const Json::Value& v = Storage("channelId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>channelId</code>' attribute.
   *
   * The YouTube channel ID.
   *
   * @param[in] value The new value.
   */
  void set_channel_id(const StringPiece& value) {
    *MutableStorage("channelId") = value.data();
  }

  /**
   * Determine if the '<code>channelUrl</code>' attribute was set.
   *
   * @return true if the '<code>channelUrl</code>' attribute was set.
   */
  bool has_channel_url() const {
    return Storage().isMember("channelUrl");
  }

  /**
   * Clears the '<code>channelUrl</code>' attribute.
   */
  void clear_channel_url() {
    MutableStorage()->removeMember("channelUrl");
  }


  /**
   * Get the value of the '<code>channelUrl</code>' attribute.
   */
  const StringPiece get_channel_url() const {
    const Json::Value& v = Storage("channelUrl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>channelUrl</code>' attribute.
   *
   * The channel's URL.
   *
   * @param[in] value The new value.
   */
  void set_channel_url(const StringPiece& value) {
    *MutableStorage("channelUrl") = value.data();
  }

  /**
   * Determine if the '<code>displayName</code>' attribute was set.
   *
   * @return true if the '<code>displayName</code>' attribute was set.
   */
  bool has_display_name() const {
    return Storage().isMember("displayName");
  }

  /**
   * Clears the '<code>displayName</code>' attribute.
   */
  void clear_display_name() {
    MutableStorage()->removeMember("displayName");
  }


  /**
   * Get the value of the '<code>displayName</code>' attribute.
   */
  const StringPiece get_display_name() const {
    const Json::Value& v = Storage("displayName");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>displayName</code>' attribute.
   *
   * The channel's display name.
   *
   * @param[in] value The new value.
   */
  void set_display_name(const StringPiece& value) {
    *MutableStorage("displayName") = value.data();
  }

  /**
   * Determine if the '<code>profileImageUrl</code>' attribute was set.
   *
   * @return true if the '<code>profileImageUrl</code>' attribute was set.
   */
  bool has_profile_image_url() const {
    return Storage().isMember("profileImageUrl");
  }

  /**
   * Clears the '<code>profileImageUrl</code>' attribute.
   */
  void clear_profile_image_url() {
    MutableStorage()->removeMember("profileImageUrl");
  }


  /**
   * Get the value of the '<code>profileImageUrl</code>' attribute.
   */
  const StringPiece get_profile_image_url() const {
    const Json::Value& v = Storage("profileImageUrl");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>profileImageUrl</code>' attribute.
   *
   * The channels's avatar URL.
   *
   * @param[in] value The new value.
   */
  void set_profile_image_url(const StringPiece& value) {
    *MutableStorage("profileImageUrl") = value.data();
  }

 private:
  void operator=(const ChannelProfileDetails&);
};  // ChannelProfileDetails
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CHANNEL_PROFILE_DETAILS_H_
