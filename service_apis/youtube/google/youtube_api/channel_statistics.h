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
#ifndef  GOOGLE_YOUTUBE_API_CHANNEL_STATISTICS_H_
#define  GOOGLE_YOUTUBE_API_CHANNEL_STATISTICS_H_

#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Statistics about a channel: number of subscribers, number of videos in the
 * channel, etc.
 *
 * @ingroup DataObject
 */
class ChannelStatistics : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static ChannelStatistics* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelStatistics(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit ChannelStatistics(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~ChannelStatistics();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::ChannelStatistics</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::ChannelStatistics");
  }

  /**
   * Determine if the '<code>commentCount</code>' attribute was set.
   *
   * @return true if the '<code>commentCount</code>' attribute was set.
   */
  bool has_comment_count() const {
    return Storage().isMember("commentCount");
  }

  /**
   * Clears the '<code>commentCount</code>' attribute.
   */
  void clear_comment_count() {
    MutableStorage()->removeMember("commentCount");
  }


  /**
   * Get the value of the '<code>commentCount</code>' attribute.
   */
  uint64 get_comment_count() const {
    const Json::Value& storage = Storage("commentCount");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>commentCount</code>' attribute.
   *
   * The number of comments for the channel.
   *
   * @param[in] value The new value.
   */
  void set_comment_count(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("commentCount"));
  }

  /**
   * Determine if the '<code>hiddenSubscriberCount</code>' attribute was set.
   *
   * @return true if the '<code>hiddenSubscriberCount</code>' attribute was set.
   */
  bool has_hidden_subscriber_count() const {
    return Storage().isMember("hiddenSubscriberCount");
  }

  /**
   * Clears the '<code>hiddenSubscriberCount</code>' attribute.
   */
  void clear_hidden_subscriber_count() {
    MutableStorage()->removeMember("hiddenSubscriberCount");
  }


  /**
   * Get the value of the '<code>hiddenSubscriberCount</code>' attribute.
   */
  bool get_hidden_subscriber_count() const {
    const Json::Value& storage = Storage("hiddenSubscriberCount");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>hiddenSubscriberCount</code>' attribute.
   *
   * Whether or not the number of subscribers is shown for this user.
   *
   * @param[in] value The new value.
   */
  void set_hidden_subscriber_count(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("hiddenSubscriberCount"));
  }

  /**
   * Determine if the '<code>subscriberCount</code>' attribute was set.
   *
   * @return true if the '<code>subscriberCount</code>' attribute was set.
   */
  bool has_subscriber_count() const {
    return Storage().isMember("subscriberCount");
  }

  /**
   * Clears the '<code>subscriberCount</code>' attribute.
   */
  void clear_subscriber_count() {
    MutableStorage()->removeMember("subscriberCount");
  }


  /**
   * Get the value of the '<code>subscriberCount</code>' attribute.
   */
  uint64 get_subscriber_count() const {
    const Json::Value& storage = Storage("subscriberCount");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>subscriberCount</code>' attribute.
   *
   * The number of subscribers that the channel has.
   *
   * @param[in] value The new value.
   */
  void set_subscriber_count(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("subscriberCount"));
  }

  /**
   * Determine if the '<code>videoCount</code>' attribute was set.
   *
   * @return true if the '<code>videoCount</code>' attribute was set.
   */
  bool has_video_count() const {
    return Storage().isMember("videoCount");
  }

  /**
   * Clears the '<code>videoCount</code>' attribute.
   */
  void clear_video_count() {
    MutableStorage()->removeMember("videoCount");
  }


  /**
   * Get the value of the '<code>videoCount</code>' attribute.
   */
  uint64 get_video_count() const {
    const Json::Value& storage = Storage("videoCount");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>videoCount</code>' attribute.
   *
   * The number of videos uploaded to the channel.
   *
   * @param[in] value The new value.
   */
  void set_video_count(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("videoCount"));
  }

  /**
   * Determine if the '<code>viewCount</code>' attribute was set.
   *
   * @return true if the '<code>viewCount</code>' attribute was set.
   */
  bool has_view_count() const {
    return Storage().isMember("viewCount");
  }

  /**
   * Clears the '<code>viewCount</code>' attribute.
   */
  void clear_view_count() {
    MutableStorage()->removeMember("viewCount");
  }


  /**
   * Get the value of the '<code>viewCount</code>' attribute.
   */
  uint64 get_view_count() const {
    const Json::Value& storage = Storage("viewCount");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>viewCount</code>' attribute.
   *
   * The number of times the channel has been viewed.
   *
   * @param[in] value The new value.
   */
  void set_view_count(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("viewCount"));
  }

 private:
  void operator=(const ChannelStatistics&);
};  // ChannelStatistics
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_CHANNEL_STATISTICS_H_
