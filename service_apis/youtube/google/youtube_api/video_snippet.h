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
#ifndef  GOOGLE_YOUTUBE_API_VIDEO_SNIPPET_H_
#define  GOOGLE_YOUTUBE_API_VIDEO_SNIPPET_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
#include "googleapis/strings/stringpiece.h"

#include "google/youtube_api/thumbnail_details.h"
#include "google/youtube_api/video_localization.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_youtube_api {
using namespace googleapis;

/**
 * Basic details about a video, including title, description, uploader,
 * thumbnails and category.
 *
 * @ingroup DataObject
 */
class VideoSnippet : public client::JsonCppData {
 public:
  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static VideoSnippet* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoSnippet(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit VideoSnippet(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~VideoSnippet();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_youtube_api::VideoSnippet</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_youtube_api::VideoSnippet");
  }

  /**
   * Determine if the '<code>categoryId</code>' attribute was set.
   *
   * @return true if the '<code>categoryId</code>' attribute was set.
   */
  bool has_category_id() const {
    return Storage().isMember("categoryId");
  }

  /**
   * Clears the '<code>categoryId</code>' attribute.
   */
  void clear_category_id() {
    MutableStorage()->removeMember("categoryId");
  }


  /**
   * Get the value of the '<code>categoryId</code>' attribute.
   */
  const StringPiece get_category_id() const {
    const Json::Value& v = Storage("categoryId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>categoryId</code>' attribute.
   *
   * The YouTube video category associated with the video.
   *
   * @param[in] value The new value.
   */
  void set_category_id(const StringPiece& value) {
    *MutableStorage("categoryId") = value.data();
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
   * The ID that YouTube uses to uniquely identify the channel that the video
   * was uploaded to.
   *
   * @param[in] value The new value.
   */
  void set_channel_id(const StringPiece& value) {
    *MutableStorage("channelId") = value.data();
  }

  /**
   * Determine if the '<code>channelTitle</code>' attribute was set.
   *
   * @return true if the '<code>channelTitle</code>' attribute was set.
   */
  bool has_channel_title() const {
    return Storage().isMember("channelTitle");
  }

  /**
   * Clears the '<code>channelTitle</code>' attribute.
   */
  void clear_channel_title() {
    MutableStorage()->removeMember("channelTitle");
  }


  /**
   * Get the value of the '<code>channelTitle</code>' attribute.
   */
  const StringPiece get_channel_title() const {
    const Json::Value& v = Storage("channelTitle");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>channelTitle</code>' attribute.
   *
   * Channel title for the channel that the video belongs to.
   *
   * @param[in] value The new value.
   */
  void set_channel_title(const StringPiece& value) {
    *MutableStorage("channelTitle") = value.data();
  }

  /**
   * Determine if the '<code>defaultAudioLanguage</code>' attribute was set.
   *
   * @return true if the '<code>defaultAudioLanguage</code>' attribute was set.
   */
  bool has_default_audio_language() const {
    return Storage().isMember("defaultAudioLanguage");
  }

  /**
   * Clears the '<code>defaultAudioLanguage</code>' attribute.
   */
  void clear_default_audio_language() {
    MutableStorage()->removeMember("defaultAudioLanguage");
  }


  /**
   * Get the value of the '<code>defaultAudioLanguage</code>' attribute.
   */
  const StringPiece get_default_audio_language() const {
    const Json::Value& v = Storage("defaultAudioLanguage");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>defaultAudioLanguage</code>' attribute.
   *
   * The default_audio_language property specifies the language spoken in the
   * video's default audio track.
   *
   * @param[in] value The new value.
   */
  void set_default_audio_language(const StringPiece& value) {
    *MutableStorage("defaultAudioLanguage") = value.data();
  }

  /**
   * Determine if the '<code>defaultLanguage</code>' attribute was set.
   *
   * @return true if the '<code>defaultLanguage</code>' attribute was set.
   */
  bool has_default_language() const {
    return Storage().isMember("defaultLanguage");
  }

  /**
   * Clears the '<code>defaultLanguage</code>' attribute.
   */
  void clear_default_language() {
    MutableStorage()->removeMember("defaultLanguage");
  }


  /**
   * Get the value of the '<code>defaultLanguage</code>' attribute.
   */
  const StringPiece get_default_language() const {
    const Json::Value& v = Storage("defaultLanguage");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>defaultLanguage</code>' attribute.
   *
   * The language of the videos's default snippet.
   *
   * @param[in] value The new value.
   */
  void set_default_language(const StringPiece& value) {
    *MutableStorage("defaultLanguage") = value.data();
  }

  /**
   * Determine if the '<code>description</code>' attribute was set.
   *
   * @return true if the '<code>description</code>' attribute was set.
   */
  bool has_description() const {
    return Storage().isMember("description");
  }

  /**
   * Clears the '<code>description</code>' attribute.
   */
  void clear_description() {
    MutableStorage()->removeMember("description");
  }


  /**
   * Get the value of the '<code>description</code>' attribute.
   */
  const StringPiece get_description() const {
    const Json::Value& v = Storage("description");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>description</code>' attribute.
   *
   * The video's description.
   *
   * @param[in] value The new value.
   */
  void set_description(const StringPiece& value) {
    *MutableStorage("description") = value.data();
  }

  /**
   * Determine if the '<code>liveBroadcastContent</code>' attribute was set.
   *
   * @return true if the '<code>liveBroadcastContent</code>' attribute was set.
   */
  bool has_live_broadcast_content() const {
    return Storage().isMember("liveBroadcastContent");
  }

  /**
   * Clears the '<code>liveBroadcastContent</code>' attribute.
   */
  void clear_live_broadcast_content() {
    MutableStorage()->removeMember("liveBroadcastContent");
  }


  /**
   * Get the value of the '<code>liveBroadcastContent</code>' attribute.
   */
  const StringPiece get_live_broadcast_content() const {
    const Json::Value& v = Storage("liveBroadcastContent");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>liveBroadcastContent</code>' attribute.
   *
   * Indicates if the video is an upcoming/active live broadcast. Or it's "none"
   * if the video is not an upcoming/active live broadcast.
   *
   * @param[in] value The new value.
   */
  void set_live_broadcast_content(const StringPiece& value) {
    *MutableStorage("liveBroadcastContent") = value.data();
  }

  /**
   * Determine if the '<code>localized</code>' attribute was set.
   *
   * @return true if the '<code>localized</code>' attribute was set.
   */
  bool has_localized() const {
    return Storage().isMember("localized");
  }

  /**
   * Clears the '<code>localized</code>' attribute.
   */
  void clear_localized() {
    MutableStorage()->removeMember("localized");
  }


  /**
   * Get a reference to the value of the '<code>localized</code>' attribute.
   */
  const VideoLocalization get_localized() const;

  /**
   * Gets a reference to a mutable value of the '<code>localized</code>'
   * property.
   *
   * Localized snippet selected with the hl parameter. If no such localization
   * exists, this field is populated with the default snippet. (Read-only).
   *
   * @return The result can be modified to change the attribute value.
   */
  VideoLocalization mutable_localized();

  /**
   * Determine if the '<code>publishedAt</code>' attribute was set.
   *
   * @return true if the '<code>publishedAt</code>' attribute was set.
   */
  bool has_published_at() const {
    return Storage().isMember("publishedAt");
  }

  /**
   * Clears the '<code>publishedAt</code>' attribute.
   */
  void clear_published_at() {
    MutableStorage()->removeMember("publishedAt");
  }


  /**
   * Get the value of the '<code>publishedAt</code>' attribute.
   */
  client::DateTime get_published_at() const {
    const Json::Value& storage = Storage("publishedAt");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>publishedAt</code>' attribute.
   *
   * The date and time that the video was uploaded. The value is specified in
   * ISO 8601 (YYYY-MM-DDThh:mm:ss.sZ) format.
   *
   * @param[in] value The new value.
   */
  void set_published_at(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("publishedAt"));
  }

  /**
   * Determine if the '<code>tags</code>' attribute was set.
   *
   * @return true if the '<code>tags</code>' attribute was set.
   */
  bool has_tags() const {
    return Storage().isMember("tags");
  }

  /**
   * Clears the '<code>tags</code>' attribute.
   */
  void clear_tags() {
    MutableStorage()->removeMember("tags");
  }


  /**
   * Get a reference to the value of the '<code>tags</code>' attribute.
   */
  const client::JsonCppArray<string > get_tags() const {
     const Json::Value& storage = Storage("tags");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>tags</code>' property.
   *
   * A list of keyword tags associated with the video. Tags may contain spaces.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<string > mutable_tags() {
    Json::Value* storage = MutableStorage("tags");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<string > >(storage);
  }

  /**
   * Determine if the '<code>thumbnails</code>' attribute was set.
   *
   * @return true if the '<code>thumbnails</code>' attribute was set.
   */
  bool has_thumbnails() const {
    return Storage().isMember("thumbnails");
  }

  /**
   * Clears the '<code>thumbnails</code>' attribute.
   */
  void clear_thumbnails() {
    MutableStorage()->removeMember("thumbnails");
  }


  /**
   * Get a reference to the value of the '<code>thumbnails</code>' attribute.
   */
  const ThumbnailDetails get_thumbnails() const;

  /**
   * Gets a reference to a mutable value of the '<code>thumbnails</code>'
   * property.
   *
   * A map of thumbnail images associated with the video. For each object in the
   * map, the key is the name of the thumbnail image, and the value is an object
   * that contains other information about the thumbnail.
   *
   * @return The result can be modified to change the attribute value.
   */
  ThumbnailDetails mutable_thumbnails();

  /**
   * Determine if the '<code>title</code>' attribute was set.
   *
   * @return true if the '<code>title</code>' attribute was set.
   */
  bool has_title() const {
    return Storage().isMember("title");
  }

  /**
   * Clears the '<code>title</code>' attribute.
   */
  void clear_title() {
    MutableStorage()->removeMember("title");
  }


  /**
   * Get the value of the '<code>title</code>' attribute.
   */
  const StringPiece get_title() const {
    const Json::Value& v = Storage("title");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>title</code>' attribute.
   *
   * The video's title.
   *
   * @param[in] value The new value.
   */
  void set_title(const StringPiece& value) {
    *MutableStorage("title") = value.data();
  }

 private:
  void operator=(const VideoSnippet&);
};  // VideoSnippet
}  // namespace google_youtube_api
#endif  // GOOGLE_YOUTUBE_API_VIDEO_SNIPPET_H_
