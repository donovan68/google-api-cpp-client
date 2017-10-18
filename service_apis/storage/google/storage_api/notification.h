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
//   Cloud Storage JSON API (storage/v1)
// Generated from:
//   Version: v1
//   Revision: 20171004
// Generated by:
//    Tool: google-apis-code-generator 1.5.1
//     C++: 0.1.5
#ifndef  GOOGLE_STORAGE_API_NOTIFICATION_H_
#define  GOOGLE_STORAGE_API_NOTIFICATION_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_storage_api {
using namespace googleapis;

/**
 * A subscription to receive Google PubSub notifications.
 *
 * @ingroup DataObject
 */
class Notification : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Notification* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Notification(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Notification(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Notification();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_storage_api::Notification</code>
   */
  const char* GetTypeName() const {
    return "google_storage_api::Notification";
  }

  /**
   * Determine if the '<code>custom_attributes</code>' attribute was set.
   *
   * @return true if the '<code>custom_attributes</code>' attribute was set.
   */
  bool has_custom_attributes() const {
    return Storage().isMember("custom_attributes");
  }

  /**
   * Clears the '<code>custom_attributes</code>' attribute.
   */
  void clear_custom_attributes() {
    MutableStorage()->removeMember("custom_attributes");
  }


  /**
   * Get a reference to the value of the '<code>custom_attributes</code>'
   * attribute.
   */
  const client::JsonCppAssociativeArray<string > get_custom_attributes() const {
     const Json::Value& storage = Storage("custom_attributes");
    return client::JsonValueToCppValueHelper<client::JsonCppAssociativeArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>custom_attributes</code>'
   * property.
   *
   * An optional list of additional attributes to attach to each Cloud PubSub
   * message published for this notification subscription.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<string > mutable_custom_attributes() {
    Json::Value* storage = MutableStorage("custom_attributes");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppAssociativeArray<string > >(storage);
  }

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * HTTP 1.1 Entity tag for this subscription notification.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
  }

  /**
   * Determine if the '<code>event_types</code>' attribute was set.
   *
   * @return true if the '<code>event_types</code>' attribute was set.
   */
  bool has_event_types() const {
    return Storage().isMember("event_types");
  }

  /**
   * Clears the '<code>event_types</code>' attribute.
   */
  void clear_event_types() {
    MutableStorage()->removeMember("event_types");
  }


  /**
   * Get a reference to the value of the '<code>event_types</code>' attribute.
   */
  const client::JsonCppArray<string > get_event_types() const {
     const Json::Value& storage = Storage("event_types");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>event_types</code>'
   * property.
   *
   * If present, only send notifications about listed event types. If empty,
   * sent notifications for all event types.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_event_types() {
    Json::Value* storage = MutableStorage("event_types");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * The ID of the notification.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * The kind of item this is. For notifications, this is always
   * storage#notification.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>object_name_prefix</code>' attribute was set.
   *
   * @return true if the '<code>object_name_prefix</code>' attribute was set.
   */
  bool has_object_name_prefix() const {
    return Storage().isMember("object_name_prefix");
  }

  /**
   * Clears the '<code>object_name_prefix</code>' attribute.
   */
  void clear_object_name_prefix() {
    MutableStorage()->removeMember("object_name_prefix");
  }


  /**
   * Get the value of the '<code>object_name_prefix</code>' attribute.
   */
  const StringPiece get_object_name_prefix() const {
    const Json::Value& v = Storage("object_name_prefix");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>object_name_prefix</code>' attribute.
   *
   * If present, only apply this notification configuration to object names that
   * begin with this prefix.
   *
   * @param[in] value The new value.
   */
  void set_object_name_prefix(const StringPiece& value) {
    *MutableStorage("object_name_prefix") = value.data();
  }

  /**
   * Determine if the '<code>payload_format</code>' attribute was set.
   *
   * @return true if the '<code>payload_format</code>' attribute was set.
   */
  bool has_payload_format() const {
    return Storage().isMember("payload_format");
  }

  /**
   * Clears the '<code>payload_format</code>' attribute.
   */
  void clear_payload_format() {
    MutableStorage()->removeMember("payload_format");
  }


  /**
   * Get the value of the '<code>payload_format</code>' attribute.
   */
  const StringPiece get_payload_format() const {
    const Json::Value& v = Storage("payload_format");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>payload_format</code>' attribute.
   *
   * The desired content of the Payload.
   *
   * @param[in] value The new value.
   */
  void set_payload_format(const StringPiece& value) {
    *MutableStorage("payload_format") = value.data();
  }

  /**
   * Determine if the '<code>selfLink</code>' attribute was set.
   *
   * @return true if the '<code>selfLink</code>' attribute was set.
   */
  bool has_self_link() const {
    return Storage().isMember("selfLink");
  }

  /**
   * Clears the '<code>selfLink</code>' attribute.
   */
  void clear_self_link() {
    MutableStorage()->removeMember("selfLink");
  }


  /**
   * Get the value of the '<code>selfLink</code>' attribute.
   */
  const StringPiece get_self_link() const {
    const Json::Value& v = Storage("selfLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>selfLink</code>' attribute.
   *
   * The canonical URL of this notification.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

  /**
   * Determine if the '<code>topic</code>' attribute was set.
   *
   * @return true if the '<code>topic</code>' attribute was set.
   */
  bool has_topic() const {
    return Storage().isMember("topic");
  }

  /**
   * Clears the '<code>topic</code>' attribute.
   */
  void clear_topic() {
    MutableStorage()->removeMember("topic");
  }


  /**
   * Get the value of the '<code>topic</code>' attribute.
   */
  const StringPiece get_topic() const {
    const Json::Value& v = Storage("topic");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>topic</code>' attribute.
   *
   * The Cloud PubSub topic to which this subscription publishes. Formatted as:
   * '//pubsub.googleapis.com/projects/{project-identifier}/topics/{my-topic}'.
   *
   * @param[in] value The new value.
   */
  void set_topic(const StringPiece& value) {
    *MutableStorage("topic") = value.data();
  }

 private:
  void operator=(const Notification&);
};  // Notification
}  // namespace google_storage_api
#endif  // GOOGLE_STORAGE_API_NOTIFICATION_H_
