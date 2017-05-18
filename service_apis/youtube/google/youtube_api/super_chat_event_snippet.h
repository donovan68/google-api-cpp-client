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
#ifndef  GOOGLE_YOUTUBE_API_SUPER_CHAT_EVENT_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_SUPER_CHAT_EVENT_SNIPPET_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/channel_profile_details.h"

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
class SuperChatEventSnippet : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static SuperChatEventSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SuperChatEventSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit SuperChatEventSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~SuperChatEventSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::SuperChatEventSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::SuperChatEventSnippet");
  }

  /**
   * Determine if the '<code>amountMicros</code>' attribute was set.
   *
   * @return true if the '<code>amountMicros</code>' attribute was set.
   */
  bool has_amount_micros() const {
    return Storage().isMember("amountMicros");
  }

  /**
   * Clears the '<code>amountMicros</code>' attribute.
   */
  void clear_amount_micros() {
    MutableStorage()->removeMember("amountMicros");
  }


  /**
   * Get the value of the '<code>amountMicros</code>' attribute.
   */
  uint64 get_amount_micros() const {
    const Json::Value& storage = Storage("amountMicros");
    return client::JsonValueToCppValueHelper<uint64 >(storage);
  }

  /**
   * Change the '<code>amountMicros</code>' attribute.
   *
   * The purchase amount, in micros of the purchase currency. e.g., 1 is
   * represented as 1000000.
   *
   * @param[in] value The new value.
   */
  void set_amount_micros(uint64 value) {
    client::SetJsonValueFromCppValueHelper<uint64 >(
      value, MutableStorage("amountMicros"));
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
   * Channel id where the event occurred.
   *
   * @param[in] value The new value.
   */
  void set_channel_id(const StringPiece& value) {
    *MutableStorage("channelId") = value.data();
  }

  /**
   * Determine if the '<code>commentText</code>' attribute was set.
   *
   * @return true if the '<code>commentText</code>' attribute was set.
   */
  bool has_comment_text() const {
    return Storage().isMember("commentText");
  }

  /**
   * Clears the '<code>commentText</code>' attribute.
   */
  void clear_comment_text() {
    MutableStorage()->removeMember("commentText");
  }


  /**
   * Get the value of the '<code>commentText</code>' attribute.
   */
  const StringPiece get_comment_text() const {
    const Json::Value& v = Storage("commentText");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>commentText</code>' attribute.
   *
   * The text contents of the comment left by the user.
   *
   * @param[in] value The new value.
   */
  void set_comment_text(const StringPiece& value) {
    *MutableStorage("commentText") = value.data();
  }

  /**
   * Determine if the '<code>createdAt</code>' attribute was set.
   *
   * @return true if the '<code>createdAt</code>' attribute was set.
   */
  bool has_created_at() const {
    return Storage().isMember("createdAt");
  }

  /**
   * Clears the '<code>createdAt</code>' attribute.
   */
  void clear_created_at() {
    MutableStorage()->removeMember("createdAt");
  }


  /**
   * Get the value of the '<code>createdAt</code>' attribute.
   */
  client::DateTime get_created_at() const {
    const Json::Value& storage = Storage("createdAt");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>createdAt</code>' attribute.
   *
   * The date and time when the event occurred. The value is specified in ISO
   * 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_created_at(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("createdAt"));
  }

  /**
   * Determine if the '<code>currency</code>' attribute was set.
   *
   * @return true if the '<code>currency</code>' attribute was set.
   */
  bool has_currency() const {
    return Storage().isMember("currency");
  }

  /**
   * Clears the '<code>currency</code>' attribute.
   */
  void clear_currency() {
    MutableStorage()->removeMember("currency");
  }


  /**
   * Get the value of the '<code>currency</code>' attribute.
   */
  const StringPiece get_currency() const {
    const Json::Value& v = Storage("currency");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>currency</code>' attribute.
   *
   * The currency in which the purchase was made. ISO 4217.
   *
   * @param[in] value The new value.
   */
  void set_currency(const StringPiece& value) {
    *MutableStorage("currency") = value.data();
  }

  /**
   * Determine if the '<code>displayString</code>' attribute was set.
   *
   * @return true if the '<code>displayString</code>' attribute was set.
   */
  bool has_display_string() const {
    return Storage().isMember("displayString");
  }

  /**
   * Clears the '<code>displayString</code>' attribute.
   */
  void clear_display_string() {
    MutableStorage()->removeMember("displayString");
  }


  /**
   * Get the value of the '<code>displayString</code>' attribute.
   */
  const StringPiece get_display_string() const {
    const Json::Value& v = Storage("displayString");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>displayString</code>' attribute.
   *
   * A rendered string that displays the purchase amount and currency (e.g.,
   * "$1.00"). The string is rendered for the given language.
   *
   * @param[in] value The new value.
   */
  void set_display_string(const StringPiece& value) {
    *MutableStorage("displayString") = value.data();
  }

  /**
   * Determine if the '<code>messageType</code>' attribute was set.
   *
   * @return true if the '<code>messageType</code>' attribute was set.
   */
  bool has_message_type() const {
    return Storage().isMember("messageType");
  }

  /**
   * Clears the '<code>messageType</code>' attribute.
   */
  void clear_message_type() {
    MutableStorage()->removeMember("messageType");
  }


  /**
   * Get the value of the '<code>messageType</code>' attribute.
   */
  uint32 get_message_type() const {
    const Json::Value& storage = Storage("messageType");
    return client::JsonValueToCppValueHelper<uint32 >(storage);
  }

  /**
   * Change the '<code>messageType</code>' attribute.
   *
   * The tier for the paid message, which is based on the amount of money spent
   * to purchase the message.
   *
   * @param[in] value The new value.
   */
  void set_message_type(uint32 value) {
    client::SetJsonValueFromCppValueHelper<uint32 >(
      value, MutableStorage("messageType"));
  }

  /**
   * Determine if the '<code>supporterDetails</code>' attribute was set.
   *
   * @return true if the '<code>supporterDetails</code>' attribute was set.
   */
  bool has_supporter_details() const {
    return Storage().isMember("supporterDetails");
  }

  /**
   * Clears the '<code>supporterDetails</code>' attribute.
   */
  void clear_supporter_details() {
    MutableStorage()->removeMember("supporterDetails");
  }


  /**
   * Get a reference to the value of the '<code>supporterDetails</code>'
   * attribute.
   */
  const ChannelProfileDetails get_supporter_details() const;

  /**
   * Gets a reference to a mutable value of the '<code>supporterDetails</code>'
   * property.
   *
   * Details about the supporter.
   *
   * @return The result can be modified to change the attribute value.
   */
  ChannelProfileDetails mutable_supporterDetails();

 private:
  void operator=(const SuperChatEventSnippet&);
};  // SuperChatEventSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_SUPER_CHAT_EVENT_SNIPPET_H_
