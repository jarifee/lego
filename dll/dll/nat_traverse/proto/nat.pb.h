// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nat.proto

#ifndef PROTOBUF_INCLUDED_nat_2eproto
#define PROTOBUF_INCLUDED_nat_2eproto

#define PROTOBUF_USE_DLLS

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_nat_2eproto 

namespace protobuf_nat_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_nat_2eproto
namespace lego {
namespace nat {
namespace protobuf {
class DetectionRequest;
class DetectionRequestDefaultTypeInternal;
extern DetectionRequestDefaultTypeInternal _DetectionRequest_default_instance_;
class NatMessage;
class NatMessageDefaultTypeInternal;
extern NatMessageDefaultTypeInternal _NatMessage_default_instance_;
}  // namespace protobuf
}  // namespace nat
}  // namespace lego
namespace google {
namespace protobuf {
template<> ::lego::nat::protobuf::DetectionRequest* Arena::CreateMaybeMessage<::lego::nat::protobuf::DetectionRequest>(Arena*);
template<> ::lego::nat::protobuf::NatMessage* Arena::CreateMaybeMessage<::lego::nat::protobuf::NatMessage>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace lego {
namespace nat {
namespace protobuf {

// ===================================================================

class DetectionRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.nat.protobuf.DetectionRequest) */ {
 public:
  DetectionRequest();
  virtual ~DetectionRequest();

  DetectionRequest(const DetectionRequest& from);

  inline DetectionRequest& operator=(const DetectionRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DetectionRequest(DetectionRequest&& from) noexcept
    : DetectionRequest() {
    *this = ::std::move(from);
  }

  inline DetectionRequest& operator=(DetectionRequest&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DetectionRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DetectionRequest* internal_default_instance() {
    return reinterpret_cast<const DetectionRequest*>(
               &_DetectionRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DetectionRequest* other);
  friend void swap(DetectionRequest& a, DetectionRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DetectionRequest* New() const final {
    return CreateMaybeMessage<DetectionRequest>(NULL);
  }

  DetectionRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DetectionRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DetectionRequest& from);
  void MergeFrom(const DetectionRequest& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DetectionRequest* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes public_ip = 1;
  bool has_public_ip() const;
  void clear_public_ip();
  static const int kPublicIpFieldNumber = 1;
  const ::std::string& public_ip() const;
  void set_public_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_public_ip(::std::string&& value);
  #endif
  void set_public_ip(const char* value);
  void set_public_ip(const void* value, size_t size);
  ::std::string* mutable_public_ip();
  ::std::string* release_public_ip();
  void set_allocated_public_ip(::std::string* public_ip);

  // optional bytes local_ip = 3;
  bool has_local_ip() const;
  void clear_local_ip();
  static const int kLocalIpFieldNumber = 3;
  const ::std::string& local_ip() const;
  void set_local_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_local_ip(::std::string&& value);
  #endif
  void set_local_ip(const char* value);
  void set_local_ip(const void* value, size_t size);
  ::std::string* mutable_local_ip();
  ::std::string* release_local_ip();
  void set_allocated_local_ip(::std::string* local_ip);

  // optional bytes id = 5;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 5;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const void* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional bytes dht_key = 7;
  bool has_dht_key() const;
  void clear_dht_key();
  static const int kDhtKeyFieldNumber = 7;
  const ::std::string& dht_key() const;
  void set_dht_key(const ::std::string& value);
  #if LANG_CXX11
  void set_dht_key(::std::string&& value);
  #endif
  void set_dht_key(const char* value);
  void set_dht_key(const void* value, size_t size);
  ::std::string* mutable_dht_key();
  ::std::string* release_dht_key();
  void set_allocated_dht_key(::std::string* dht_key);

  // optional int32 public_port = 2;
  bool has_public_port() const;
  void clear_public_port();
  static const int kPublicPortFieldNumber = 2;
  ::google::protobuf::int32 public_port() const;
  void set_public_port(::google::protobuf::int32 value);

  // optional int32 local_port = 4;
  bool has_local_port() const;
  void clear_local_port();
  static const int kLocalPortFieldNumber = 4;
  ::google::protobuf::int32 local_port() const;
  void set_local_port(::google::protobuf::int32 value);

  // optional int32 nat_type = 6;
  bool has_nat_type() const;
  void clear_nat_type();
  static const int kNatTypeFieldNumber = 6;
  ::google::protobuf::int32 nat_type() const;
  void set_nat_type(::google::protobuf::int32 value);

  // optional bool client = 8;
  bool has_client() const;
  void clear_client();
  static const int kClientFieldNumber = 8;
  bool client() const;
  void set_client(bool value);

  // @@protoc_insertion_point(class_scope:lego.nat.protobuf.DetectionRequest)
 private:
  void set_has_public_ip();
  void clear_has_public_ip();
  void set_has_public_port();
  void clear_has_public_port();
  void set_has_local_ip();
  void clear_has_local_ip();
  void set_has_local_port();
  void clear_has_local_port();
  void set_has_id();
  void clear_has_id();
  void set_has_nat_type();
  void clear_has_nat_type();
  void set_has_dht_key();
  void clear_has_dht_key();
  void set_has_client();
  void clear_has_client();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr public_ip_;
  ::google::protobuf::internal::ArenaStringPtr local_ip_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr dht_key_;
  ::google::protobuf::int32 public_port_;
  ::google::protobuf::int32 local_port_;
  ::google::protobuf::int32 nat_type_;
  bool client_;
  friend struct ::protobuf_nat_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class NatMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.nat.protobuf.NatMessage) */ {
 public:
  NatMessage();
  virtual ~NatMessage();

  NatMessage(const NatMessage& from);

  inline NatMessage& operator=(const NatMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  NatMessage(NatMessage&& from) noexcept
    : NatMessage() {
    *this = ::std::move(from);
  }

  inline NatMessage& operator=(NatMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NatMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const NatMessage* internal_default_instance() {
    return reinterpret_cast<const NatMessage*>(
               &_NatMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(NatMessage* other);
  friend void swap(NatMessage& a, NatMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline NatMessage* New() const final {
    return CreateMaybeMessage<NatMessage>(NULL);
  }

  NatMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<NatMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const NatMessage& from);
  void MergeFrom(const NatMessage& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NatMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .lego.nat.protobuf.DetectionRequest detection_req = 1;
  bool has_detection_req() const;
  void clear_detection_req();
  static const int kDetectionReqFieldNumber = 1;
  private:
  const ::lego::nat::protobuf::DetectionRequest& _internal_detection_req() const;
  public:
  const ::lego::nat::protobuf::DetectionRequest& detection_req() const;
  ::lego::nat::protobuf::DetectionRequest* release_detection_req();
  ::lego::nat::protobuf::DetectionRequest* mutable_detection_req();
  void set_allocated_detection_req(::lego::nat::protobuf::DetectionRequest* detection_req);

  // @@protoc_insertion_point(class_scope:lego.nat.protobuf.NatMessage)
 private:
  void set_has_detection_req();
  void clear_has_detection_req();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::lego::nat::protobuf::DetectionRequest* detection_req_;
  friend struct ::protobuf_nat_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DetectionRequest

// optional bytes public_ip = 1;
inline bool DetectionRequest::has_public_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DetectionRequest::set_has_public_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DetectionRequest::clear_has_public_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DetectionRequest::clear_public_ip() {
  public_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_public_ip();
}
inline const ::std::string& DetectionRequest::public_ip() const {
  // @@protoc_insertion_point(field_get:lego.nat.protobuf.DetectionRequest.public_ip)
  return public_ip_.GetNoArena();
}
inline void DetectionRequest::set_public_ip(const ::std::string& value) {
  set_has_public_ip();
  public_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.nat.protobuf.DetectionRequest.public_ip)
}
#if LANG_CXX11
inline void DetectionRequest::set_public_ip(::std::string&& value) {
  set_has_public_ip();
  public_ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.nat.protobuf.DetectionRequest.public_ip)
}
#endif
inline void DetectionRequest::set_public_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_public_ip();
  public_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.nat.protobuf.DetectionRequest.public_ip)
}
inline void DetectionRequest::set_public_ip(const void* value, size_t size) {
  set_has_public_ip();
  public_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.nat.protobuf.DetectionRequest.public_ip)
}
inline ::std::string* DetectionRequest::mutable_public_ip() {
  set_has_public_ip();
  // @@protoc_insertion_point(field_mutable:lego.nat.protobuf.DetectionRequest.public_ip)
  return public_ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DetectionRequest::release_public_ip() {
  // @@protoc_insertion_point(field_release:lego.nat.protobuf.DetectionRequest.public_ip)
  if (!has_public_ip()) {
    return NULL;
  }
  clear_has_public_ip();
  return public_ip_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DetectionRequest::set_allocated_public_ip(::std::string* public_ip) {
  if (public_ip != NULL) {
    set_has_public_ip();
  } else {
    clear_has_public_ip();
  }
  public_ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), public_ip);
  // @@protoc_insertion_point(field_set_allocated:lego.nat.protobuf.DetectionRequest.public_ip)
}

// optional int32 public_port = 2;
inline bool DetectionRequest::has_public_port() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void DetectionRequest::set_has_public_port() {
  _has_bits_[0] |= 0x00000010u;
}
inline void DetectionRequest::clear_has_public_port() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void DetectionRequest::clear_public_port() {
  public_port_ = 0;
  clear_has_public_port();
}
inline ::google::protobuf::int32 DetectionRequest::public_port() const {
  // @@protoc_insertion_point(field_get:lego.nat.protobuf.DetectionRequest.public_port)
  return public_port_;
}
inline void DetectionRequest::set_public_port(::google::protobuf::int32 value) {
  set_has_public_port();
  public_port_ = value;
  // @@protoc_insertion_point(field_set:lego.nat.protobuf.DetectionRequest.public_port)
}

// optional bytes local_ip = 3;
inline bool DetectionRequest::has_local_ip() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DetectionRequest::set_has_local_ip() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DetectionRequest::clear_has_local_ip() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DetectionRequest::clear_local_ip() {
  local_ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_local_ip();
}
inline const ::std::string& DetectionRequest::local_ip() const {
  // @@protoc_insertion_point(field_get:lego.nat.protobuf.DetectionRequest.local_ip)
  return local_ip_.GetNoArena();
}
inline void DetectionRequest::set_local_ip(const ::std::string& value) {
  set_has_local_ip();
  local_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.nat.protobuf.DetectionRequest.local_ip)
}
#if LANG_CXX11
inline void DetectionRequest::set_local_ip(::std::string&& value) {
  set_has_local_ip();
  local_ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.nat.protobuf.DetectionRequest.local_ip)
}
#endif
inline void DetectionRequest::set_local_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_local_ip();
  local_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.nat.protobuf.DetectionRequest.local_ip)
}
inline void DetectionRequest::set_local_ip(const void* value, size_t size) {
  set_has_local_ip();
  local_ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.nat.protobuf.DetectionRequest.local_ip)
}
inline ::std::string* DetectionRequest::mutable_local_ip() {
  set_has_local_ip();
  // @@protoc_insertion_point(field_mutable:lego.nat.protobuf.DetectionRequest.local_ip)
  return local_ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DetectionRequest::release_local_ip() {
  // @@protoc_insertion_point(field_release:lego.nat.protobuf.DetectionRequest.local_ip)
  if (!has_local_ip()) {
    return NULL;
  }
  clear_has_local_ip();
  return local_ip_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DetectionRequest::set_allocated_local_ip(::std::string* local_ip) {
  if (local_ip != NULL) {
    set_has_local_ip();
  } else {
    clear_has_local_ip();
  }
  local_ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), local_ip);
  // @@protoc_insertion_point(field_set_allocated:lego.nat.protobuf.DetectionRequest.local_ip)
}

// optional int32 local_port = 4;
inline bool DetectionRequest::has_local_port() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void DetectionRequest::set_has_local_port() {
  _has_bits_[0] |= 0x00000020u;
}
inline void DetectionRequest::clear_has_local_port() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void DetectionRequest::clear_local_port() {
  local_port_ = 0;
  clear_has_local_port();
}
inline ::google::protobuf::int32 DetectionRequest::local_port() const {
  // @@protoc_insertion_point(field_get:lego.nat.protobuf.DetectionRequest.local_port)
  return local_port_;
}
inline void DetectionRequest::set_local_port(::google::protobuf::int32 value) {
  set_has_local_port();
  local_port_ = value;
  // @@protoc_insertion_point(field_set:lego.nat.protobuf.DetectionRequest.local_port)
}

// optional bytes id = 5;
inline bool DetectionRequest::has_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DetectionRequest::set_has_id() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DetectionRequest::clear_has_id() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DetectionRequest::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& DetectionRequest::id() const {
  // @@protoc_insertion_point(field_get:lego.nat.protobuf.DetectionRequest.id)
  return id_.GetNoArena();
}
inline void DetectionRequest::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.nat.protobuf.DetectionRequest.id)
}
#if LANG_CXX11
inline void DetectionRequest::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.nat.protobuf.DetectionRequest.id)
}
#endif
inline void DetectionRequest::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.nat.protobuf.DetectionRequest.id)
}
inline void DetectionRequest::set_id(const void* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.nat.protobuf.DetectionRequest.id)
}
inline ::std::string* DetectionRequest::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:lego.nat.protobuf.DetectionRequest.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DetectionRequest::release_id() {
  // @@protoc_insertion_point(field_release:lego.nat.protobuf.DetectionRequest.id)
  if (!has_id()) {
    return NULL;
  }
  clear_has_id();
  return id_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DetectionRequest::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:lego.nat.protobuf.DetectionRequest.id)
}

// optional int32 nat_type = 6;
inline bool DetectionRequest::has_nat_type() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void DetectionRequest::set_has_nat_type() {
  _has_bits_[0] |= 0x00000040u;
}
inline void DetectionRequest::clear_has_nat_type() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void DetectionRequest::clear_nat_type() {
  nat_type_ = 0;
  clear_has_nat_type();
}
inline ::google::protobuf::int32 DetectionRequest::nat_type() const {
  // @@protoc_insertion_point(field_get:lego.nat.protobuf.DetectionRequest.nat_type)
  return nat_type_;
}
inline void DetectionRequest::set_nat_type(::google::protobuf::int32 value) {
  set_has_nat_type();
  nat_type_ = value;
  // @@protoc_insertion_point(field_set:lego.nat.protobuf.DetectionRequest.nat_type)
}

// optional bytes dht_key = 7;
inline bool DetectionRequest::has_dht_key() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DetectionRequest::set_has_dht_key() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DetectionRequest::clear_has_dht_key() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DetectionRequest::clear_dht_key() {
  dht_key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_dht_key();
}
inline const ::std::string& DetectionRequest::dht_key() const {
  // @@protoc_insertion_point(field_get:lego.nat.protobuf.DetectionRequest.dht_key)
  return dht_key_.GetNoArena();
}
inline void DetectionRequest::set_dht_key(const ::std::string& value) {
  set_has_dht_key();
  dht_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.nat.protobuf.DetectionRequest.dht_key)
}
#if LANG_CXX11
inline void DetectionRequest::set_dht_key(::std::string&& value) {
  set_has_dht_key();
  dht_key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.nat.protobuf.DetectionRequest.dht_key)
}
#endif
inline void DetectionRequest::set_dht_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_dht_key();
  dht_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.nat.protobuf.DetectionRequest.dht_key)
}
inline void DetectionRequest::set_dht_key(const void* value, size_t size) {
  set_has_dht_key();
  dht_key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.nat.protobuf.DetectionRequest.dht_key)
}
inline ::std::string* DetectionRequest::mutable_dht_key() {
  set_has_dht_key();
  // @@protoc_insertion_point(field_mutable:lego.nat.protobuf.DetectionRequest.dht_key)
  return dht_key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DetectionRequest::release_dht_key() {
  // @@protoc_insertion_point(field_release:lego.nat.protobuf.DetectionRequest.dht_key)
  if (!has_dht_key()) {
    return NULL;
  }
  clear_has_dht_key();
  return dht_key_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DetectionRequest::set_allocated_dht_key(::std::string* dht_key) {
  if (dht_key != NULL) {
    set_has_dht_key();
  } else {
    clear_has_dht_key();
  }
  dht_key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), dht_key);
  // @@protoc_insertion_point(field_set_allocated:lego.nat.protobuf.DetectionRequest.dht_key)
}

// optional bool client = 8;
inline bool DetectionRequest::has_client() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void DetectionRequest::set_has_client() {
  _has_bits_[0] |= 0x00000080u;
}
inline void DetectionRequest::clear_has_client() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void DetectionRequest::clear_client() {
  client_ = false;
  clear_has_client();
}
inline bool DetectionRequest::client() const {
  // @@protoc_insertion_point(field_get:lego.nat.protobuf.DetectionRequest.client)
  return client_;
}
inline void DetectionRequest::set_client(bool value) {
  set_has_client();
  client_ = value;
  // @@protoc_insertion_point(field_set:lego.nat.protobuf.DetectionRequest.client)
}

// -------------------------------------------------------------------

// NatMessage

// optional .lego.nat.protobuf.DetectionRequest detection_req = 1;
inline bool NatMessage::has_detection_req() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NatMessage::set_has_detection_req() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NatMessage::clear_has_detection_req() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NatMessage::clear_detection_req() {
  if (detection_req_ != NULL) detection_req_->Clear();
  clear_has_detection_req();
}
inline const ::lego::nat::protobuf::DetectionRequest& NatMessage::_internal_detection_req() const {
  return *detection_req_;
}
inline const ::lego::nat::protobuf::DetectionRequest& NatMessage::detection_req() const {
  const ::lego::nat::protobuf::DetectionRequest* p = detection_req_;
  // @@protoc_insertion_point(field_get:lego.nat.protobuf.NatMessage.detection_req)
  return p != NULL ? *p : *reinterpret_cast<const ::lego::nat::protobuf::DetectionRequest*>(
      &::lego::nat::protobuf::_DetectionRequest_default_instance_);
}
inline ::lego::nat::protobuf::DetectionRequest* NatMessage::release_detection_req() {
  // @@protoc_insertion_point(field_release:lego.nat.protobuf.NatMessage.detection_req)
  clear_has_detection_req();
  ::lego::nat::protobuf::DetectionRequest* temp = detection_req_;
  detection_req_ = NULL;
  return temp;
}
inline ::lego::nat::protobuf::DetectionRequest* NatMessage::mutable_detection_req() {
  set_has_detection_req();
  if (detection_req_ == NULL) {
    auto* p = CreateMaybeMessage<::lego::nat::protobuf::DetectionRequest>(GetArenaNoVirtual());
    detection_req_ = p;
  }
  // @@protoc_insertion_point(field_mutable:lego.nat.protobuf.NatMessage.detection_req)
  return detection_req_;
}
inline void NatMessage::set_allocated_detection_req(::lego::nat::protobuf::DetectionRequest* detection_req) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete detection_req_;
  }
  if (detection_req) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      detection_req = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, detection_req, submessage_arena);
    }
    set_has_detection_req();
  } else {
    clear_has_detection_req();
  }
  detection_req_ = detection_req;
  // @@protoc_insertion_point(field_set_allocated:lego.nat.protobuf.NatMessage.detection_req)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace nat
}  // namespace lego

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_nat_2eproto
