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
#ifndef  GOOGLE_YOUTUBE_API_ACCESS_POLICY_H_
#define  GOOGLE_YOUTUBE_API_ACCESS_POLICY_H_

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
 * Rights management policy for YouTube resources.
 *
 * @ingroup DataObject
 */
class AccessPolicy : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static AccessPolicy* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit AccessPolicy(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit AccessPolicy(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~AccessPolicy();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::AccessPolicy</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::AccessPolicy");
  }

  /**
   * Determine if the '<code>allowed</code>' attribute was set.
   *
   * @return true if the '<code>allowed</code>' attribute was set.
   */
  bool has_allowed() const {
    return Storage().isMember("allowed");
  }

  /**
   * Clears the '<code>allowed</code>' attribute.
   */
  void clear_allowed() {
    MutableStorage()->removeMember("allowed");
  }


  /**
   * Get the value of the '<code>allowed</code>' attribute.
   */
  bool get_allowed() const {
    const Json::Value& storage = Storage("allowed");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>allowed</code>' attribute.
   *
   * The value of allowed indicates whether the access to the policy is allowed
   * or denied by default.
   *
   * @param[in] value The new value.
   */
  void set_allowed(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("allowed"));
  }

  /**
   * Determine if the '<code>exception</code>' attribute was set.
   *
   * @return true if the '<code>exception</code>' attribute was set.
   */
  bool has_exception() const {
    return Storage().isMember("exception");
  }

  /**
   * Clears the '<code>exception</code>' attribute.
   */
  void clear_exception() {
    MutableStorage()->removeMember("exception");
  }


  /**
   * Get a reference to the value of the '<code>exception</code>' attribute.
   */
  const client::JsonCppArray<string > get_exception() const {
     const Json::Value& storage = Storage("exception");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>exception</code>'
   * property.
   *
   * A list of region codes that identify countries where the default policy do
   * not apply.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_exception() {
    Json::Value* storage = MutableStorage("exception");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

 private:
  void operator=(const AccessPolicy&);
};  // AccessPolicy
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_ACCESS_POLICY_H_
