// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LaneMarking.proto

#ifndef PROTOBUF_LaneMarking_2eproto__INCLUDED
#define PROTOBUF_LaneMarking_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
namespace hdmap {
class LaneMarking;
class LaneMarkingDefaultTypeInternal;
extern LaneMarkingDefaultTypeInternal _LaneMarking_default_instance_;
class LaneMarkingPerCapture;
class LaneMarkingPerCaptureDefaultTypeInternal;
extern LaneMarkingPerCaptureDefaultTypeInternal _LaneMarkingPerCapture_default_instance_;
class LaneMarkingPerFrame;
class LaneMarkingPerFrameDefaultTypeInternal;
extern LaneMarkingPerFrameDefaultTypeInternal _LaneMarkingPerFrame_default_instance_;
}  // namespace hdmap

namespace hdmap {

namespace protobuf_LaneMarking_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_LaneMarking_2eproto

// ===================================================================

class LaneMarking : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hdmap.LaneMarking) */ {
 public:
  LaneMarking();
  virtual ~LaneMarking();

  LaneMarking(const LaneMarking& from);

  inline LaneMarking& operator=(const LaneMarking& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LaneMarking(LaneMarking&& from) noexcept
    : LaneMarking() {
    *this = ::std::move(from);
  }

  inline LaneMarking& operator=(LaneMarking&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LaneMarking& default_instance();

  static inline const LaneMarking* internal_default_instance() {
    return reinterpret_cast<const LaneMarking*>(
               &_LaneMarking_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(LaneMarking* other);
  friend void swap(LaneMarking& a, LaneMarking& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LaneMarking* New() const PROTOBUF_FINAL { return New(NULL); }

  LaneMarking* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LaneMarking& from);
  void MergeFrom(const LaneMarking& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LaneMarking* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string geometry = 2;
  void clear_geometry();
  static const int kGeometryFieldNumber = 2;
  const ::std::string& geometry() const;
  void set_geometry(const ::std::string& value);
  #if LANG_CXX11
  void set_geometry(::std::string&& value);
  #endif
  void set_geometry(const char* value);
  void set_geometry(const char* value, size_t size);
  ::std::string* mutable_geometry();
  ::std::string* release_geometry();
  void set_allocated_geometry(::std::string* geometry);

  // int32 id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // int32 type = 3;
  void clear_type();
  static const int kTypeFieldNumber = 3;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:hdmap.LaneMarking)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr geometry_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 type_;
  mutable int _cached_size_;
  friend struct protobuf_LaneMarking_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class LaneMarkingPerFrame : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hdmap.LaneMarkingPerFrame) */ {
 public:
  LaneMarkingPerFrame();
  virtual ~LaneMarkingPerFrame();

  LaneMarkingPerFrame(const LaneMarkingPerFrame& from);

  inline LaneMarkingPerFrame& operator=(const LaneMarkingPerFrame& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LaneMarkingPerFrame(LaneMarkingPerFrame&& from) noexcept
    : LaneMarkingPerFrame() {
    *this = ::std::move(from);
  }

  inline LaneMarkingPerFrame& operator=(LaneMarkingPerFrame&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LaneMarkingPerFrame& default_instance();

  static inline const LaneMarkingPerFrame* internal_default_instance() {
    return reinterpret_cast<const LaneMarkingPerFrame*>(
               &_LaneMarkingPerFrame_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(LaneMarkingPerFrame* other);
  friend void swap(LaneMarkingPerFrame& a, LaneMarkingPerFrame& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LaneMarkingPerFrame* New() const PROTOBUF_FINAL { return New(NULL); }

  LaneMarkingPerFrame* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LaneMarkingPerFrame& from);
  void MergeFrom(const LaneMarkingPerFrame& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LaneMarkingPerFrame* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .hdmap.LaneMarking lane_markings = 2;
  int lane_markings_size() const;
  void clear_lane_markings();
  static const int kLaneMarkingsFieldNumber = 2;
  const ::hdmap::LaneMarking& lane_markings(int index) const;
  ::hdmap::LaneMarking* mutable_lane_markings(int index);
  ::hdmap::LaneMarking* add_lane_markings();
  ::google::protobuf::RepeatedPtrField< ::hdmap::LaneMarking >*
      mutable_lane_markings();
  const ::google::protobuf::RepeatedPtrField< ::hdmap::LaneMarking >&
      lane_markings() const;

  // int32 frame_id = 1;
  void clear_frame_id();
  static const int kFrameIdFieldNumber = 1;
  ::google::protobuf::int32 frame_id() const;
  void set_frame_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:hdmap.LaneMarkingPerFrame)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::hdmap::LaneMarking > lane_markings_;
  ::google::protobuf::int32 frame_id_;
  mutable int _cached_size_;
  friend struct protobuf_LaneMarking_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class LaneMarkingPerCapture : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:hdmap.LaneMarkingPerCapture) */ {
 public:
  LaneMarkingPerCapture();
  virtual ~LaneMarkingPerCapture();

  LaneMarkingPerCapture(const LaneMarkingPerCapture& from);

  inline LaneMarkingPerCapture& operator=(const LaneMarkingPerCapture& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LaneMarkingPerCapture(LaneMarkingPerCapture&& from) noexcept
    : LaneMarkingPerCapture() {
    *this = ::std::move(from);
  }

  inline LaneMarkingPerCapture& operator=(LaneMarkingPerCapture&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LaneMarkingPerCapture& default_instance();

  static inline const LaneMarkingPerCapture* internal_default_instance() {
    return reinterpret_cast<const LaneMarkingPerCapture*>(
               &_LaneMarkingPerCapture_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    2;

  void Swap(LaneMarkingPerCapture* other);
  friend void swap(LaneMarkingPerCapture& a, LaneMarkingPerCapture& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LaneMarkingPerCapture* New() const PROTOBUF_FINAL { return New(NULL); }

  LaneMarkingPerCapture* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const LaneMarkingPerCapture& from);
  void MergeFrom(const LaneMarkingPerCapture& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(LaneMarkingPerCapture* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .hdmap.LaneMarkingPerFrame lane_marking_frames = 2;
  int lane_marking_frames_size() const;
  void clear_lane_marking_frames();
  static const int kLaneMarkingFramesFieldNumber = 2;
  const ::hdmap::LaneMarkingPerFrame& lane_marking_frames(int index) const;
  ::hdmap::LaneMarkingPerFrame* mutable_lane_marking_frames(int index);
  ::hdmap::LaneMarkingPerFrame* add_lane_marking_frames();
  ::google::protobuf::RepeatedPtrField< ::hdmap::LaneMarkingPerFrame >*
      mutable_lane_marking_frames();
  const ::google::protobuf::RepeatedPtrField< ::hdmap::LaneMarkingPerFrame >&
      lane_marking_frames() const;

  // string scene_id = 1;
  void clear_scene_id();
  static const int kSceneIdFieldNumber = 1;
  const ::std::string& scene_id() const;
  void set_scene_id(const ::std::string& value);
  #if LANG_CXX11
  void set_scene_id(::std::string&& value);
  #endif
  void set_scene_id(const char* value);
  void set_scene_id(const char* value, size_t size);
  ::std::string* mutable_scene_id();
  ::std::string* release_scene_id();
  void set_allocated_scene_id(::std::string* scene_id);

  // @@protoc_insertion_point(class_scope:hdmap.LaneMarkingPerCapture)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::hdmap::LaneMarkingPerFrame > lane_marking_frames_;
  ::google::protobuf::internal::ArenaStringPtr scene_id_;
  mutable int _cached_size_;
  friend struct protobuf_LaneMarking_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LaneMarking

// int32 id = 1;
inline void LaneMarking::clear_id() {
  id_ = 0;
}
inline ::google::protobuf::int32 LaneMarking::id() const {
  // @@protoc_insertion_point(field_get:hdmap.LaneMarking.id)
  return id_;
}
inline void LaneMarking::set_id(::google::protobuf::int32 value) {
  
  id_ = value;
  // @@protoc_insertion_point(field_set:hdmap.LaneMarking.id)
}

// string geometry = 2;
inline void LaneMarking::clear_geometry() {
  geometry_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LaneMarking::geometry() const {
  // @@protoc_insertion_point(field_get:hdmap.LaneMarking.geometry)
  return geometry_.GetNoArena();
}
inline void LaneMarking::set_geometry(const ::std::string& value) {
  
  geometry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hdmap.LaneMarking.geometry)
}
#if LANG_CXX11
inline void LaneMarking::set_geometry(::std::string&& value) {
  
  geometry_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hdmap.LaneMarking.geometry)
}
#endif
inline void LaneMarking::set_geometry(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  geometry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hdmap.LaneMarking.geometry)
}
inline void LaneMarking::set_geometry(const char* value, size_t size) {
  
  geometry_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hdmap.LaneMarking.geometry)
}
inline ::std::string* LaneMarking::mutable_geometry() {
  
  // @@protoc_insertion_point(field_mutable:hdmap.LaneMarking.geometry)
  return geometry_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LaneMarking::release_geometry() {
  // @@protoc_insertion_point(field_release:hdmap.LaneMarking.geometry)
  
  return geometry_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LaneMarking::set_allocated_geometry(::std::string* geometry) {
  if (geometry != NULL) {
    
  } else {
    
  }
  geometry_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), geometry);
  // @@protoc_insertion_point(field_set_allocated:hdmap.LaneMarking.geometry)
}

// int32 type = 3;
inline void LaneMarking::clear_type() {
  type_ = 0;
}
inline ::google::protobuf::int32 LaneMarking::type() const {
  // @@protoc_insertion_point(field_get:hdmap.LaneMarking.type)
  return type_;
}
inline void LaneMarking::set_type(::google::protobuf::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:hdmap.LaneMarking.type)
}

// -------------------------------------------------------------------

// LaneMarkingPerFrame

// int32 frame_id = 1;
inline void LaneMarkingPerFrame::clear_frame_id() {
  frame_id_ = 0;
}
inline ::google::protobuf::int32 LaneMarkingPerFrame::frame_id() const {
  // @@protoc_insertion_point(field_get:hdmap.LaneMarkingPerFrame.frame_id)
  return frame_id_;
}
inline void LaneMarkingPerFrame::set_frame_id(::google::protobuf::int32 value) {
  
  frame_id_ = value;
  // @@protoc_insertion_point(field_set:hdmap.LaneMarkingPerFrame.frame_id)
}

// repeated .hdmap.LaneMarking lane_markings = 2;
inline int LaneMarkingPerFrame::lane_markings_size() const {
  return lane_markings_.size();
}
inline void LaneMarkingPerFrame::clear_lane_markings() {
  lane_markings_.Clear();
}
inline const ::hdmap::LaneMarking& LaneMarkingPerFrame::lane_markings(int index) const {
  // @@protoc_insertion_point(field_get:hdmap.LaneMarkingPerFrame.lane_markings)
  return lane_markings_.Get(index);
}
inline ::hdmap::LaneMarking* LaneMarkingPerFrame::mutable_lane_markings(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap.LaneMarkingPerFrame.lane_markings)
  return lane_markings_.Mutable(index);
}
inline ::hdmap::LaneMarking* LaneMarkingPerFrame::add_lane_markings() {
  // @@protoc_insertion_point(field_add:hdmap.LaneMarkingPerFrame.lane_markings)
  return lane_markings_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap::LaneMarking >*
LaneMarkingPerFrame::mutable_lane_markings() {
  // @@protoc_insertion_point(field_mutable_list:hdmap.LaneMarkingPerFrame.lane_markings)
  return &lane_markings_;
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap::LaneMarking >&
LaneMarkingPerFrame::lane_markings() const {
  // @@protoc_insertion_point(field_list:hdmap.LaneMarkingPerFrame.lane_markings)
  return lane_markings_;
}

// -------------------------------------------------------------------

// LaneMarkingPerCapture

// string scene_id = 1;
inline void LaneMarkingPerCapture::clear_scene_id() {
  scene_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LaneMarkingPerCapture::scene_id() const {
  // @@protoc_insertion_point(field_get:hdmap.LaneMarkingPerCapture.scene_id)
  return scene_id_.GetNoArena();
}
inline void LaneMarkingPerCapture::set_scene_id(const ::std::string& value) {
  
  scene_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:hdmap.LaneMarkingPerCapture.scene_id)
}
#if LANG_CXX11
inline void LaneMarkingPerCapture::set_scene_id(::std::string&& value) {
  
  scene_id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hdmap.LaneMarkingPerCapture.scene_id)
}
#endif
inline void LaneMarkingPerCapture::set_scene_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  scene_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hdmap.LaneMarkingPerCapture.scene_id)
}
inline void LaneMarkingPerCapture::set_scene_id(const char* value, size_t size) {
  
  scene_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hdmap.LaneMarkingPerCapture.scene_id)
}
inline ::std::string* LaneMarkingPerCapture::mutable_scene_id() {
  
  // @@protoc_insertion_point(field_mutable:hdmap.LaneMarkingPerCapture.scene_id)
  return scene_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LaneMarkingPerCapture::release_scene_id() {
  // @@protoc_insertion_point(field_release:hdmap.LaneMarkingPerCapture.scene_id)
  
  return scene_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LaneMarkingPerCapture::set_allocated_scene_id(::std::string* scene_id) {
  if (scene_id != NULL) {
    
  } else {
    
  }
  scene_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), scene_id);
  // @@protoc_insertion_point(field_set_allocated:hdmap.LaneMarkingPerCapture.scene_id)
}

// repeated .hdmap.LaneMarkingPerFrame lane_marking_frames = 2;
inline int LaneMarkingPerCapture::lane_marking_frames_size() const {
  return lane_marking_frames_.size();
}
inline void LaneMarkingPerCapture::clear_lane_marking_frames() {
  lane_marking_frames_.Clear();
}
inline const ::hdmap::LaneMarkingPerFrame& LaneMarkingPerCapture::lane_marking_frames(int index) const {
  // @@protoc_insertion_point(field_get:hdmap.LaneMarkingPerCapture.lane_marking_frames)
  return lane_marking_frames_.Get(index);
}
inline ::hdmap::LaneMarkingPerFrame* LaneMarkingPerCapture::mutable_lane_marking_frames(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap.LaneMarkingPerCapture.lane_marking_frames)
  return lane_marking_frames_.Mutable(index);
}
inline ::hdmap::LaneMarkingPerFrame* LaneMarkingPerCapture::add_lane_marking_frames() {
  // @@protoc_insertion_point(field_add:hdmap.LaneMarkingPerCapture.lane_marking_frames)
  return lane_marking_frames_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::hdmap::LaneMarkingPerFrame >*
LaneMarkingPerCapture::mutable_lane_marking_frames() {
  // @@protoc_insertion_point(field_mutable_list:hdmap.LaneMarkingPerCapture.lane_marking_frames)
  return &lane_marking_frames_;
}
inline const ::google::protobuf::RepeatedPtrField< ::hdmap::LaneMarkingPerFrame >&
LaneMarkingPerCapture::lane_marking_frames() const {
  // @@protoc_insertion_point(field_list:hdmap.LaneMarkingPerCapture.lane_marking_frames)
  return lane_marking_frames_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace hdmap

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_LaneMarking_2eproto__INCLUDED