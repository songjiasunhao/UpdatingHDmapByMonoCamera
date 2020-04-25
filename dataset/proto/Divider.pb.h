// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Divider.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Divider_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Divider_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Divider_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Divider_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Divider_2eproto;
namespace hdmap {
class Divider;
class DividerDefaultTypeInternal;
extern DividerDefaultTypeInternal _Divider_default_instance_;
class DividerPerCapture;
class DividerPerCaptureDefaultTypeInternal;
extern DividerPerCaptureDefaultTypeInternal _DividerPerCapture_default_instance_;
class DividerPerFrame;
class DividerPerFrameDefaultTypeInternal;
extern DividerPerFrameDefaultTypeInternal _DividerPerFrame_default_instance_;
}  // namespace hdmap
PROTOBUF_NAMESPACE_OPEN
template<> ::hdmap::Divider* Arena::CreateMaybeMessage<::hdmap::Divider>(Arena*);
template<> ::hdmap::DividerPerCapture* Arena::CreateMaybeMessage<::hdmap::DividerPerCapture>(Arena*);
template<> ::hdmap::DividerPerFrame* Arena::CreateMaybeMessage<::hdmap::DividerPerFrame>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace hdmap {

// ===================================================================

class Divider :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:hdmap.Divider) */ {
 public:
  Divider();
  virtual ~Divider();

  Divider(const Divider& from);
  Divider(Divider&& from) noexcept
    : Divider() {
    *this = ::std::move(from);
  }

  inline Divider& operator=(const Divider& from) {
    CopyFrom(from);
    return *this;
  }
  inline Divider& operator=(Divider&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Divider& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Divider* internal_default_instance() {
    return reinterpret_cast<const Divider*>(
               &_Divider_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Divider& a, Divider& b) {
    a.Swap(&b);
  }
  inline void Swap(Divider* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Divider* New() const final {
    return CreateMaybeMessage<Divider>(nullptr);
  }

  Divider* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Divider>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Divider& from);
  void MergeFrom(const Divider& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Divider* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "hdmap.Divider";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Divider_2eproto);
    return ::descriptor_table_Divider_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGeometryFieldNumber = 2,
    kIdFieldNumber = 1,
    kColorFieldNumber = 3,
    kTypeFieldNumber = 4,
    kOcclusionFieldNumber = 5,
  };
  // string geometry = 2;
  void clear_geometry();
  const std::string& geometry() const;
  void set_geometry(const std::string& value);
  void set_geometry(std::string&& value);
  void set_geometry(const char* value);
  void set_geometry(const char* value, size_t size);
  std::string* mutable_geometry();
  std::string* release_geometry();
  void set_allocated_geometry(std::string* geometry);
  private:
  const std::string& _internal_geometry() const;
  void _internal_set_geometry(const std::string& value);
  std::string* _internal_mutable_geometry();
  public:

  // int32 id = 1;
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::int32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 color = 3;
  void clear_color();
  ::PROTOBUF_NAMESPACE_ID::int32 color() const;
  void set_color(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_color() const;
  void _internal_set_color(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 type = 4;
  void clear_type();
  ::PROTOBUF_NAMESPACE_ID::int32 type() const;
  void set_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_type() const;
  void _internal_set_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // int32 occlusion = 5;
  void clear_occlusion();
  ::PROTOBUF_NAMESPACE_ID::int32 occlusion() const;
  void set_occlusion(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_occlusion() const;
  void _internal_set_occlusion(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:hdmap.Divider)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr geometry_;
  ::PROTOBUF_NAMESPACE_ID::int32 id_;
  ::PROTOBUF_NAMESPACE_ID::int32 color_;
  ::PROTOBUF_NAMESPACE_ID::int32 type_;
  ::PROTOBUF_NAMESPACE_ID::int32 occlusion_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Divider_2eproto;
};
// -------------------------------------------------------------------

class DividerPerFrame :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:hdmap.DividerPerFrame) */ {
 public:
  DividerPerFrame();
  virtual ~DividerPerFrame();

  DividerPerFrame(const DividerPerFrame& from);
  DividerPerFrame(DividerPerFrame&& from) noexcept
    : DividerPerFrame() {
    *this = ::std::move(from);
  }

  inline DividerPerFrame& operator=(const DividerPerFrame& from) {
    CopyFrom(from);
    return *this;
  }
  inline DividerPerFrame& operator=(DividerPerFrame&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const DividerPerFrame& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DividerPerFrame* internal_default_instance() {
    return reinterpret_cast<const DividerPerFrame*>(
               &_DividerPerFrame_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(DividerPerFrame& a, DividerPerFrame& b) {
    a.Swap(&b);
  }
  inline void Swap(DividerPerFrame* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DividerPerFrame* New() const final {
    return CreateMaybeMessage<DividerPerFrame>(nullptr);
  }

  DividerPerFrame* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DividerPerFrame>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DividerPerFrame& from);
  void MergeFrom(const DividerPerFrame& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DividerPerFrame* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "hdmap.DividerPerFrame";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Divider_2eproto);
    return ::descriptor_table_Divider_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDividersFieldNumber = 2,
    kFrameIdFieldNumber = 1,
  };
  // repeated .hdmap.Divider dividers = 2;
  int dividers_size() const;
  private:
  int _internal_dividers_size() const;
  public:
  void clear_dividers();
  ::hdmap::Divider* mutable_dividers(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::hdmap::Divider >*
      mutable_dividers();
  private:
  const ::hdmap::Divider& _internal_dividers(int index) const;
  ::hdmap::Divider* _internal_add_dividers();
  public:
  const ::hdmap::Divider& dividers(int index) const;
  ::hdmap::Divider* add_dividers();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::hdmap::Divider >&
      dividers() const;

  // int32 frame_id = 1;
  void clear_frame_id();
  ::PROTOBUF_NAMESPACE_ID::int32 frame_id() const;
  void set_frame_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_frame_id() const;
  void _internal_set_frame_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:hdmap.DividerPerFrame)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::hdmap::Divider > dividers_;
  ::PROTOBUF_NAMESPACE_ID::int32 frame_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Divider_2eproto;
};
// -------------------------------------------------------------------

class DividerPerCapture :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:hdmap.DividerPerCapture) */ {
 public:
  DividerPerCapture();
  virtual ~DividerPerCapture();

  DividerPerCapture(const DividerPerCapture& from);
  DividerPerCapture(DividerPerCapture&& from) noexcept
    : DividerPerCapture() {
    *this = ::std::move(from);
  }

  inline DividerPerCapture& operator=(const DividerPerCapture& from) {
    CopyFrom(from);
    return *this;
  }
  inline DividerPerCapture& operator=(DividerPerCapture&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const DividerPerCapture& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DividerPerCapture* internal_default_instance() {
    return reinterpret_cast<const DividerPerCapture*>(
               &_DividerPerCapture_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(DividerPerCapture& a, DividerPerCapture& b) {
    a.Swap(&b);
  }
  inline void Swap(DividerPerCapture* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DividerPerCapture* New() const final {
    return CreateMaybeMessage<DividerPerCapture>(nullptr);
  }

  DividerPerCapture* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DividerPerCapture>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DividerPerCapture& from);
  void MergeFrom(const DividerPerCapture& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DividerPerCapture* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "hdmap.DividerPerCapture";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_Divider_2eproto);
    return ::descriptor_table_Divider_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDividerFramesFieldNumber = 2,
    kSceneIdFieldNumber = 1,
  };
  // repeated .hdmap.DividerPerFrame divider_frames = 2;
  int divider_frames_size() const;
  private:
  int _internal_divider_frames_size() const;
  public:
  void clear_divider_frames();
  ::hdmap::DividerPerFrame* mutable_divider_frames(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::hdmap::DividerPerFrame >*
      mutable_divider_frames();
  private:
  const ::hdmap::DividerPerFrame& _internal_divider_frames(int index) const;
  ::hdmap::DividerPerFrame* _internal_add_divider_frames();
  public:
  const ::hdmap::DividerPerFrame& divider_frames(int index) const;
  ::hdmap::DividerPerFrame* add_divider_frames();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::hdmap::DividerPerFrame >&
      divider_frames() const;

  // string scene_id = 1;
  void clear_scene_id();
  const std::string& scene_id() const;
  void set_scene_id(const std::string& value);
  void set_scene_id(std::string&& value);
  void set_scene_id(const char* value);
  void set_scene_id(const char* value, size_t size);
  std::string* mutable_scene_id();
  std::string* release_scene_id();
  void set_allocated_scene_id(std::string* scene_id);
  private:
  const std::string& _internal_scene_id() const;
  void _internal_set_scene_id(const std::string& value);
  std::string* _internal_mutable_scene_id();
  public:

  // @@protoc_insertion_point(class_scope:hdmap.DividerPerCapture)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::hdmap::DividerPerFrame > divider_frames_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr scene_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Divider_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Divider

// int32 id = 1;
inline void Divider::clear_id() {
  id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Divider::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Divider::id() const {
  // @@protoc_insertion_point(field_get:hdmap.Divider.id)
  return _internal_id();
}
inline void Divider::_internal_set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  id_ = value;
}
inline void Divider::set_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:hdmap.Divider.id)
}

// string geometry = 2;
inline void Divider::clear_geometry() {
  geometry_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Divider::geometry() const {
  // @@protoc_insertion_point(field_get:hdmap.Divider.geometry)
  return _internal_geometry();
}
inline void Divider::set_geometry(const std::string& value) {
  _internal_set_geometry(value);
  // @@protoc_insertion_point(field_set:hdmap.Divider.geometry)
}
inline std::string* Divider::mutable_geometry() {
  // @@protoc_insertion_point(field_mutable:hdmap.Divider.geometry)
  return _internal_mutable_geometry();
}
inline const std::string& Divider::_internal_geometry() const {
  return geometry_.GetNoArena();
}
inline void Divider::_internal_set_geometry(const std::string& value) {
  
  geometry_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Divider::set_geometry(std::string&& value) {
  
  geometry_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hdmap.Divider.geometry)
}
inline void Divider::set_geometry(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  geometry_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hdmap.Divider.geometry)
}
inline void Divider::set_geometry(const char* value, size_t size) {
  
  geometry_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hdmap.Divider.geometry)
}
inline std::string* Divider::_internal_mutable_geometry() {
  
  return geometry_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Divider::release_geometry() {
  // @@protoc_insertion_point(field_release:hdmap.Divider.geometry)
  
  return geometry_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Divider::set_allocated_geometry(std::string* geometry) {
  if (geometry != nullptr) {
    
  } else {
    
  }
  geometry_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), geometry);
  // @@protoc_insertion_point(field_set_allocated:hdmap.Divider.geometry)
}

// int32 color = 3;
inline void Divider::clear_color() {
  color_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Divider::_internal_color() const {
  return color_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Divider::color() const {
  // @@protoc_insertion_point(field_get:hdmap.Divider.color)
  return _internal_color();
}
inline void Divider::_internal_set_color(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  color_ = value;
}
inline void Divider::set_color(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_color(value);
  // @@protoc_insertion_point(field_set:hdmap.Divider.color)
}

// int32 type = 4;
inline void Divider::clear_type() {
  type_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Divider::_internal_type() const {
  return type_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Divider::type() const {
  // @@protoc_insertion_point(field_get:hdmap.Divider.type)
  return _internal_type();
}
inline void Divider::_internal_set_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  type_ = value;
}
inline void Divider::set_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:hdmap.Divider.type)
}

// int32 occlusion = 5;
inline void Divider::clear_occlusion() {
  occlusion_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Divider::_internal_occlusion() const {
  return occlusion_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Divider::occlusion() const {
  // @@protoc_insertion_point(field_get:hdmap.Divider.occlusion)
  return _internal_occlusion();
}
inline void Divider::_internal_set_occlusion(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  occlusion_ = value;
}
inline void Divider::set_occlusion(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_occlusion(value);
  // @@protoc_insertion_point(field_set:hdmap.Divider.occlusion)
}

// -------------------------------------------------------------------

// DividerPerFrame

// int32 frame_id = 1;
inline void DividerPerFrame::clear_frame_id() {
  frame_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DividerPerFrame::_internal_frame_id() const {
  return frame_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 DividerPerFrame::frame_id() const {
  // @@protoc_insertion_point(field_get:hdmap.DividerPerFrame.frame_id)
  return _internal_frame_id();
}
inline void DividerPerFrame::_internal_set_frame_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  frame_id_ = value;
}
inline void DividerPerFrame::set_frame_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_frame_id(value);
  // @@protoc_insertion_point(field_set:hdmap.DividerPerFrame.frame_id)
}

// repeated .hdmap.Divider dividers = 2;
inline int DividerPerFrame::_internal_dividers_size() const {
  return dividers_.size();
}
inline int DividerPerFrame::dividers_size() const {
  return _internal_dividers_size();
}
inline void DividerPerFrame::clear_dividers() {
  dividers_.Clear();
}
inline ::hdmap::Divider* DividerPerFrame::mutable_dividers(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap.DividerPerFrame.dividers)
  return dividers_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::hdmap::Divider >*
DividerPerFrame::mutable_dividers() {
  // @@protoc_insertion_point(field_mutable_list:hdmap.DividerPerFrame.dividers)
  return &dividers_;
}
inline const ::hdmap::Divider& DividerPerFrame::_internal_dividers(int index) const {
  return dividers_.Get(index);
}
inline const ::hdmap::Divider& DividerPerFrame::dividers(int index) const {
  // @@protoc_insertion_point(field_get:hdmap.DividerPerFrame.dividers)
  return _internal_dividers(index);
}
inline ::hdmap::Divider* DividerPerFrame::_internal_add_dividers() {
  return dividers_.Add();
}
inline ::hdmap::Divider* DividerPerFrame::add_dividers() {
  // @@protoc_insertion_point(field_add:hdmap.DividerPerFrame.dividers)
  return _internal_add_dividers();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::hdmap::Divider >&
DividerPerFrame::dividers() const {
  // @@protoc_insertion_point(field_list:hdmap.DividerPerFrame.dividers)
  return dividers_;
}

// -------------------------------------------------------------------

// DividerPerCapture

// string scene_id = 1;
inline void DividerPerCapture::clear_scene_id() {
  scene_id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& DividerPerCapture::scene_id() const {
  // @@protoc_insertion_point(field_get:hdmap.DividerPerCapture.scene_id)
  return _internal_scene_id();
}
inline void DividerPerCapture::set_scene_id(const std::string& value) {
  _internal_set_scene_id(value);
  // @@protoc_insertion_point(field_set:hdmap.DividerPerCapture.scene_id)
}
inline std::string* DividerPerCapture::mutable_scene_id() {
  // @@protoc_insertion_point(field_mutable:hdmap.DividerPerCapture.scene_id)
  return _internal_mutable_scene_id();
}
inline const std::string& DividerPerCapture::_internal_scene_id() const {
  return scene_id_.GetNoArena();
}
inline void DividerPerCapture::_internal_set_scene_id(const std::string& value) {
  
  scene_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void DividerPerCapture::set_scene_id(std::string&& value) {
  
  scene_id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:hdmap.DividerPerCapture.scene_id)
}
inline void DividerPerCapture::set_scene_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  scene_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:hdmap.DividerPerCapture.scene_id)
}
inline void DividerPerCapture::set_scene_id(const char* value, size_t size) {
  
  scene_id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:hdmap.DividerPerCapture.scene_id)
}
inline std::string* DividerPerCapture::_internal_mutable_scene_id() {
  
  return scene_id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* DividerPerCapture::release_scene_id() {
  // @@protoc_insertion_point(field_release:hdmap.DividerPerCapture.scene_id)
  
  return scene_id_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void DividerPerCapture::set_allocated_scene_id(std::string* scene_id) {
  if (scene_id != nullptr) {
    
  } else {
    
  }
  scene_id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), scene_id);
  // @@protoc_insertion_point(field_set_allocated:hdmap.DividerPerCapture.scene_id)
}

// repeated .hdmap.DividerPerFrame divider_frames = 2;
inline int DividerPerCapture::_internal_divider_frames_size() const {
  return divider_frames_.size();
}
inline int DividerPerCapture::divider_frames_size() const {
  return _internal_divider_frames_size();
}
inline void DividerPerCapture::clear_divider_frames() {
  divider_frames_.Clear();
}
inline ::hdmap::DividerPerFrame* DividerPerCapture::mutable_divider_frames(int index) {
  // @@protoc_insertion_point(field_mutable:hdmap.DividerPerCapture.divider_frames)
  return divider_frames_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::hdmap::DividerPerFrame >*
DividerPerCapture::mutable_divider_frames() {
  // @@protoc_insertion_point(field_mutable_list:hdmap.DividerPerCapture.divider_frames)
  return &divider_frames_;
}
inline const ::hdmap::DividerPerFrame& DividerPerCapture::_internal_divider_frames(int index) const {
  return divider_frames_.Get(index);
}
inline const ::hdmap::DividerPerFrame& DividerPerCapture::divider_frames(int index) const {
  // @@protoc_insertion_point(field_get:hdmap.DividerPerCapture.divider_frames)
  return _internal_divider_frames(index);
}
inline ::hdmap::DividerPerFrame* DividerPerCapture::_internal_add_divider_frames() {
  return divider_frames_.Add();
}
inline ::hdmap::DividerPerFrame* DividerPerCapture::add_divider_frames() {
  // @@protoc_insertion_point(field_add:hdmap.DividerPerCapture.divider_frames)
  return _internal_add_divider_frames();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::hdmap::DividerPerFrame >&
DividerPerCapture::divider_frames() const {
  // @@protoc_insertion_point(field_list:hdmap.DividerPerCapture.divider_frames)
  return divider_frames_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Divider_2eproto
