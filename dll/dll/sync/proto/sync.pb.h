// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sync.proto

#ifndef PROTOBUF_INCLUDED_sync_2eproto
#define PROTOBUF_INCLUDED_sync_2eproto
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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_sync_2eproto 

namespace protobuf_sync_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[4];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_sync_2eproto
namespace lego {
namespace sync {
namespace protobuf {
class SyncMessage;
class SyncMessageDefaultTypeInternal;
extern SyncMessageDefaultTypeInternal _SyncMessage_default_instance_;
class SyncResItem;
class SyncResItemDefaultTypeInternal;
extern SyncResItemDefaultTypeInternal _SyncResItem_default_instance_;
class SyncValueRequest;
class SyncValueRequestDefaultTypeInternal;
extern SyncValueRequestDefaultTypeInternal _SyncValueRequest_default_instance_;
class SyncValueResponse;
class SyncValueResponseDefaultTypeInternal;
extern SyncValueResponseDefaultTypeInternal _SyncValueResponse_default_instance_;
}  // namespace protobuf
}  // namespace sync
}  // namespace lego
namespace google {
namespace protobuf {
template<> ::lego::sync::protobuf::SyncMessage* Arena::CreateMaybeMessage<::lego::sync::protobuf::SyncMessage>(Arena*);
template<> ::lego::sync::protobuf::SyncResItem* Arena::CreateMaybeMessage<::lego::sync::protobuf::SyncResItem>(Arena*);
template<> ::lego::sync::protobuf::SyncValueRequest* Arena::CreateMaybeMessage<::lego::sync::protobuf::SyncValueRequest>(Arena*);
template<> ::lego::sync::protobuf::SyncValueResponse* Arena::CreateMaybeMessage<::lego::sync::protobuf::SyncValueResponse>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace lego {
namespace sync {
namespace protobuf {

// ===================================================================

class SyncValueRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.sync.protobuf.SyncValueRequest) */ {
 public:
  SyncValueRequest();
  virtual ~SyncValueRequest();

  SyncValueRequest(const SyncValueRequest& from);

  inline SyncValueRequest& operator=(const SyncValueRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SyncValueRequest(SyncValueRequest&& from) noexcept
    : SyncValueRequest() {
    *this = ::std::move(from);
  }

  inline SyncValueRequest& operator=(SyncValueRequest&& from) noexcept {
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
  static const SyncValueRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SyncValueRequest* internal_default_instance() {
    return reinterpret_cast<const SyncValueRequest*>(
               &_SyncValueRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(SyncValueRequest* other);
  friend void swap(SyncValueRequest& a, SyncValueRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SyncValueRequest* New() const final {
    return CreateMaybeMessage<SyncValueRequest>(NULL);
  }

  SyncValueRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SyncValueRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SyncValueRequest& from);
  void MergeFrom(const SyncValueRequest& from);
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
  void InternalSwap(SyncValueRequest* other);
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

  // repeated bytes keys = 2;
  int keys_size() const;
  void clear_keys();
  static const int kKeysFieldNumber = 2;
  const ::std::string& keys(int index) const;
  ::std::string* mutable_keys(int index);
  void set_keys(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_keys(int index, ::std::string&& value);
  #endif
  void set_keys(int index, const char* value);
  void set_keys(int index, const void* value, size_t size);
  ::std::string* add_keys();
  void add_keys(const ::std::string& value);
  #if LANG_CXX11
  void add_keys(::std::string&& value);
  #endif
  void add_keys(const char* value);
  void add_keys(const void* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& keys() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_keys();

  // optional uint32 network_id = 1;
  bool has_network_id() const;
  void clear_network_id();
  static const int kNetworkIdFieldNumber = 1;
  ::google::protobuf::uint32 network_id() const;
  void set_network_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:lego.sync.protobuf.SyncValueRequest)
 private:
  void set_has_network_id();
  void clear_has_network_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> keys_;
  ::google::protobuf::uint32 network_id_;
  friend struct ::protobuf_sync_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SyncResItem : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.sync.protobuf.SyncResItem) */ {
 public:
  SyncResItem();
  virtual ~SyncResItem();

  SyncResItem(const SyncResItem& from);

  inline SyncResItem& operator=(const SyncResItem& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SyncResItem(SyncResItem&& from) noexcept
    : SyncResItem() {
    *this = ::std::move(from);
  }

  inline SyncResItem& operator=(SyncResItem&& from) noexcept {
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
  static const SyncResItem& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SyncResItem* internal_default_instance() {
    return reinterpret_cast<const SyncResItem*>(
               &_SyncResItem_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SyncResItem* other);
  friend void swap(SyncResItem& a, SyncResItem& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SyncResItem* New() const final {
    return CreateMaybeMessage<SyncResItem>(NULL);
  }

  SyncResItem* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SyncResItem>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SyncResItem& from);
  void MergeFrom(const SyncResItem& from);
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
  void InternalSwap(SyncResItem* other);
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

  // optional bytes key = 1;
  bool has_key() const;
  void clear_key();
  static const int kKeyFieldNumber = 1;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  #if LANG_CXX11
  void set_key(::std::string&& value);
  #endif
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // optional bytes value = 2;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const ::std::string& value() const;
  void set_value(const ::std::string& value);
  #if LANG_CXX11
  void set_value(::std::string&& value);
  #endif
  void set_value(const char* value);
  void set_value(const void* value, size_t size);
  ::std::string* mutable_value();
  ::std::string* release_value();
  void set_allocated_value(::std::string* value);

  // @@protoc_insertion_point(class_scope:lego.sync.protobuf.SyncResItem)
 private:
  void set_has_key();
  void clear_has_key();
  void set_has_value();
  void clear_has_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  friend struct ::protobuf_sync_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SyncValueResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.sync.protobuf.SyncValueResponse) */ {
 public:
  SyncValueResponse();
  virtual ~SyncValueResponse();

  SyncValueResponse(const SyncValueResponse& from);

  inline SyncValueResponse& operator=(const SyncValueResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SyncValueResponse(SyncValueResponse&& from) noexcept
    : SyncValueResponse() {
    *this = ::std::move(from);
  }

  inline SyncValueResponse& operator=(SyncValueResponse&& from) noexcept {
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
  static const SyncValueResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SyncValueResponse* internal_default_instance() {
    return reinterpret_cast<const SyncValueResponse*>(
               &_SyncValueResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(SyncValueResponse* other);
  friend void swap(SyncValueResponse& a, SyncValueResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SyncValueResponse* New() const final {
    return CreateMaybeMessage<SyncValueResponse>(NULL);
  }

  SyncValueResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SyncValueResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SyncValueResponse& from);
  void MergeFrom(const SyncValueResponse& from);
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
  void InternalSwap(SyncValueResponse* other);
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

  // repeated .lego.sync.protobuf.SyncResItem res = 2;
  int res_size() const;
  void clear_res();
  static const int kResFieldNumber = 2;
  ::lego::sync::protobuf::SyncResItem* mutable_res(int index);
  ::google::protobuf::RepeatedPtrField< ::lego::sync::protobuf::SyncResItem >*
      mutable_res();
  const ::lego::sync::protobuf::SyncResItem& res(int index) const;
  ::lego::sync::protobuf::SyncResItem* add_res();
  const ::google::protobuf::RepeatedPtrField< ::lego::sync::protobuf::SyncResItem >&
      res() const;

  // optional uint32 network_id = 1;
  bool has_network_id() const;
  void clear_network_id();
  static const int kNetworkIdFieldNumber = 1;
  ::google::protobuf::uint32 network_id() const;
  void set_network_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:lego.sync.protobuf.SyncValueResponse)
 private:
  void set_has_network_id();
  void clear_has_network_id();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::lego::sync::protobuf::SyncResItem > res_;
  ::google::protobuf::uint32 network_id_;
  friend struct ::protobuf_sync_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SyncMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.sync.protobuf.SyncMessage) */ {
 public:
  SyncMessage();
  virtual ~SyncMessage();

  SyncMessage(const SyncMessage& from);

  inline SyncMessage& operator=(const SyncMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SyncMessage(SyncMessage&& from) noexcept
    : SyncMessage() {
    *this = ::std::move(from);
  }

  inline SyncMessage& operator=(SyncMessage&& from) noexcept {
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
  static const SyncMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SyncMessage* internal_default_instance() {
    return reinterpret_cast<const SyncMessage*>(
               &_SyncMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  void Swap(SyncMessage* other);
  friend void swap(SyncMessage& a, SyncMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SyncMessage* New() const final {
    return CreateMaybeMessage<SyncMessage>(NULL);
  }

  SyncMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SyncMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SyncMessage& from);
  void MergeFrom(const SyncMessage& from);
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
  void InternalSwap(SyncMessage* other);
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

  // optional .lego.sync.protobuf.SyncValueRequest sync_value_req = 1;
  bool has_sync_value_req() const;
  void clear_sync_value_req();
  static const int kSyncValueReqFieldNumber = 1;
  private:
  const ::lego::sync::protobuf::SyncValueRequest& _internal_sync_value_req() const;
  public:
  const ::lego::sync::protobuf::SyncValueRequest& sync_value_req() const;
  ::lego::sync::protobuf::SyncValueRequest* release_sync_value_req();
  ::lego::sync::protobuf::SyncValueRequest* mutable_sync_value_req();
  void set_allocated_sync_value_req(::lego::sync::protobuf::SyncValueRequest* sync_value_req);

  // optional .lego.sync.protobuf.SyncValueResponse sync_value_res = 2;
  bool has_sync_value_res() const;
  void clear_sync_value_res();
  static const int kSyncValueResFieldNumber = 2;
  private:
  const ::lego::sync::protobuf::SyncValueResponse& _internal_sync_value_res() const;
  public:
  const ::lego::sync::protobuf::SyncValueResponse& sync_value_res() const;
  ::lego::sync::protobuf::SyncValueResponse* release_sync_value_res();
  ::lego::sync::protobuf::SyncValueResponse* mutable_sync_value_res();
  void set_allocated_sync_value_res(::lego::sync::protobuf::SyncValueResponse* sync_value_res);

  // @@protoc_insertion_point(class_scope:lego.sync.protobuf.SyncMessage)
 private:
  void set_has_sync_value_req();
  void clear_has_sync_value_req();
  void set_has_sync_value_res();
  void clear_has_sync_value_res();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::lego::sync::protobuf::SyncValueRequest* sync_value_req_;
  ::lego::sync::protobuf::SyncValueResponse* sync_value_res_;
  friend struct ::protobuf_sync_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SyncValueRequest

// optional uint32 network_id = 1;
inline bool SyncValueRequest::has_network_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SyncValueRequest::set_has_network_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SyncValueRequest::clear_has_network_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SyncValueRequest::clear_network_id() {
  network_id_ = 0u;
  clear_has_network_id();
}
inline ::google::protobuf::uint32 SyncValueRequest::network_id() const {
  // @@protoc_insertion_point(field_get:lego.sync.protobuf.SyncValueRequest.network_id)
  return network_id_;
}
inline void SyncValueRequest::set_network_id(::google::protobuf::uint32 value) {
  set_has_network_id();
  network_id_ = value;
  // @@protoc_insertion_point(field_set:lego.sync.protobuf.SyncValueRequest.network_id)
}

// repeated bytes keys = 2;
inline int SyncValueRequest::keys_size() const {
  return keys_.size();
}
inline void SyncValueRequest::clear_keys() {
  keys_.Clear();
}
inline const ::std::string& SyncValueRequest::keys(int index) const {
  // @@protoc_insertion_point(field_get:lego.sync.protobuf.SyncValueRequest.keys)
  return keys_.Get(index);
}
inline ::std::string* SyncValueRequest::mutable_keys(int index) {
  // @@protoc_insertion_point(field_mutable:lego.sync.protobuf.SyncValueRequest.keys)
  return keys_.Mutable(index);
}
inline void SyncValueRequest::set_keys(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:lego.sync.protobuf.SyncValueRequest.keys)
  keys_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void SyncValueRequest::set_keys(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:lego.sync.protobuf.SyncValueRequest.keys)
  keys_.Mutable(index)->assign(std::move(value));
}
#endif
inline void SyncValueRequest::set_keys(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  keys_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:lego.sync.protobuf.SyncValueRequest.keys)
}
inline void SyncValueRequest::set_keys(int index, const void* value, size_t size) {
  keys_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:lego.sync.protobuf.SyncValueRequest.keys)
}
inline ::std::string* SyncValueRequest::add_keys() {
  // @@protoc_insertion_point(field_add_mutable:lego.sync.protobuf.SyncValueRequest.keys)
  return keys_.Add();
}
inline void SyncValueRequest::add_keys(const ::std::string& value) {
  keys_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:lego.sync.protobuf.SyncValueRequest.keys)
}
#if LANG_CXX11
inline void SyncValueRequest::add_keys(::std::string&& value) {
  keys_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:lego.sync.protobuf.SyncValueRequest.keys)
}
#endif
inline void SyncValueRequest::add_keys(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  keys_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:lego.sync.protobuf.SyncValueRequest.keys)
}
inline void SyncValueRequest::add_keys(const void* value, size_t size) {
  keys_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:lego.sync.protobuf.SyncValueRequest.keys)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
SyncValueRequest::keys() const {
  // @@protoc_insertion_point(field_list:lego.sync.protobuf.SyncValueRequest.keys)
  return keys_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
SyncValueRequest::mutable_keys() {
  // @@protoc_insertion_point(field_mutable_list:lego.sync.protobuf.SyncValueRequest.keys)
  return &keys_;
}

// -------------------------------------------------------------------

// SyncResItem

// optional bytes key = 1;
inline bool SyncResItem::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SyncResItem::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SyncResItem::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SyncResItem::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
inline const ::std::string& SyncResItem::key() const {
  // @@protoc_insertion_point(field_get:lego.sync.protobuf.SyncResItem.key)
  return key_.GetNoArena();
}
inline void SyncResItem::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.sync.protobuf.SyncResItem.key)
}
#if LANG_CXX11
inline void SyncResItem::set_key(::std::string&& value) {
  set_has_key();
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.sync.protobuf.SyncResItem.key)
}
#endif
inline void SyncResItem::set_key(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.sync.protobuf.SyncResItem.key)
}
inline void SyncResItem::set_key(const void* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.sync.protobuf.SyncResItem.key)
}
inline ::std::string* SyncResItem::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:lego.sync.protobuf.SyncResItem.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SyncResItem::release_key() {
  // @@protoc_insertion_point(field_release:lego.sync.protobuf.SyncResItem.key)
  if (!has_key()) {
    return NULL;
  }
  clear_has_key();
  return key_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SyncResItem::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:lego.sync.protobuf.SyncResItem.key)
}

// optional bytes value = 2;
inline bool SyncResItem::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SyncResItem::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SyncResItem::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SyncResItem::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
inline const ::std::string& SyncResItem::value() const {
  // @@protoc_insertion_point(field_get:lego.sync.protobuf.SyncResItem.value)
  return value_.GetNoArena();
}
inline void SyncResItem::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.sync.protobuf.SyncResItem.value)
}
#if LANG_CXX11
inline void SyncResItem::set_value(::std::string&& value) {
  set_has_value();
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.sync.protobuf.SyncResItem.value)
}
#endif
inline void SyncResItem::set_value(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.sync.protobuf.SyncResItem.value)
}
inline void SyncResItem::set_value(const void* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.sync.protobuf.SyncResItem.value)
}
inline ::std::string* SyncResItem::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:lego.sync.protobuf.SyncResItem.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* SyncResItem::release_value() {
  // @@protoc_insertion_point(field_release:lego.sync.protobuf.SyncResItem.value)
  if (!has_value()) {
    return NULL;
  }
  clear_has_value();
  return value_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void SyncResItem::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:lego.sync.protobuf.SyncResItem.value)
}

// -------------------------------------------------------------------

// SyncValueResponse

// optional uint32 network_id = 1;
inline bool SyncValueResponse::has_network_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SyncValueResponse::set_has_network_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SyncValueResponse::clear_has_network_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SyncValueResponse::clear_network_id() {
  network_id_ = 0u;
  clear_has_network_id();
}
inline ::google::protobuf::uint32 SyncValueResponse::network_id() const {
  // @@protoc_insertion_point(field_get:lego.sync.protobuf.SyncValueResponse.network_id)
  return network_id_;
}
inline void SyncValueResponse::set_network_id(::google::protobuf::uint32 value) {
  set_has_network_id();
  network_id_ = value;
  // @@protoc_insertion_point(field_set:lego.sync.protobuf.SyncValueResponse.network_id)
}

// repeated .lego.sync.protobuf.SyncResItem res = 2;
inline int SyncValueResponse::res_size() const {
  return res_.size();
}
inline void SyncValueResponse::clear_res() {
  res_.Clear();
}
inline ::lego::sync::protobuf::SyncResItem* SyncValueResponse::mutable_res(int index) {
  // @@protoc_insertion_point(field_mutable:lego.sync.protobuf.SyncValueResponse.res)
  return res_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::lego::sync::protobuf::SyncResItem >*
SyncValueResponse::mutable_res() {
  // @@protoc_insertion_point(field_mutable_list:lego.sync.protobuf.SyncValueResponse.res)
  return &res_;
}
inline const ::lego::sync::protobuf::SyncResItem& SyncValueResponse::res(int index) const {
  // @@protoc_insertion_point(field_get:lego.sync.protobuf.SyncValueResponse.res)
  return res_.Get(index);
}
inline ::lego::sync::protobuf::SyncResItem* SyncValueResponse::add_res() {
  // @@protoc_insertion_point(field_add:lego.sync.protobuf.SyncValueResponse.res)
  return res_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::lego::sync::protobuf::SyncResItem >&
SyncValueResponse::res() const {
  // @@protoc_insertion_point(field_list:lego.sync.protobuf.SyncValueResponse.res)
  return res_;
}

// -------------------------------------------------------------------

// SyncMessage

// optional .lego.sync.protobuf.SyncValueRequest sync_value_req = 1;
inline bool SyncMessage::has_sync_value_req() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SyncMessage::set_has_sync_value_req() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SyncMessage::clear_has_sync_value_req() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SyncMessage::clear_sync_value_req() {
  if (sync_value_req_ != NULL) sync_value_req_->Clear();
  clear_has_sync_value_req();
}
inline const ::lego::sync::protobuf::SyncValueRequest& SyncMessage::_internal_sync_value_req() const {
  return *sync_value_req_;
}
inline const ::lego::sync::protobuf::SyncValueRequest& SyncMessage::sync_value_req() const {
  const ::lego::sync::protobuf::SyncValueRequest* p = sync_value_req_;
  // @@protoc_insertion_point(field_get:lego.sync.protobuf.SyncMessage.sync_value_req)
  return p != NULL ? *p : *reinterpret_cast<const ::lego::sync::protobuf::SyncValueRequest*>(
      &::lego::sync::protobuf::_SyncValueRequest_default_instance_);
}
inline ::lego::sync::protobuf::SyncValueRequest* SyncMessage::release_sync_value_req() {
  // @@protoc_insertion_point(field_release:lego.sync.protobuf.SyncMessage.sync_value_req)
  clear_has_sync_value_req();
  ::lego::sync::protobuf::SyncValueRequest* temp = sync_value_req_;
  sync_value_req_ = NULL;
  return temp;
}
inline ::lego::sync::protobuf::SyncValueRequest* SyncMessage::mutable_sync_value_req() {
  set_has_sync_value_req();
  if (sync_value_req_ == NULL) {
    auto* p = CreateMaybeMessage<::lego::sync::protobuf::SyncValueRequest>(GetArenaNoVirtual());
    sync_value_req_ = p;
  }
  // @@protoc_insertion_point(field_mutable:lego.sync.protobuf.SyncMessage.sync_value_req)
  return sync_value_req_;
}
inline void SyncMessage::set_allocated_sync_value_req(::lego::sync::protobuf::SyncValueRequest* sync_value_req) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete sync_value_req_;
  }
  if (sync_value_req) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      sync_value_req = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, sync_value_req, submessage_arena);
    }
    set_has_sync_value_req();
  } else {
    clear_has_sync_value_req();
  }
  sync_value_req_ = sync_value_req;
  // @@protoc_insertion_point(field_set_allocated:lego.sync.protobuf.SyncMessage.sync_value_req)
}

// optional .lego.sync.protobuf.SyncValueResponse sync_value_res = 2;
inline bool SyncMessage::has_sync_value_res() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SyncMessage::set_has_sync_value_res() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SyncMessage::clear_has_sync_value_res() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SyncMessage::clear_sync_value_res() {
  if (sync_value_res_ != NULL) sync_value_res_->Clear();
  clear_has_sync_value_res();
}
inline const ::lego::sync::protobuf::SyncValueResponse& SyncMessage::_internal_sync_value_res() const {
  return *sync_value_res_;
}
inline const ::lego::sync::protobuf::SyncValueResponse& SyncMessage::sync_value_res() const {
  const ::lego::sync::protobuf::SyncValueResponse* p = sync_value_res_;
  // @@protoc_insertion_point(field_get:lego.sync.protobuf.SyncMessage.sync_value_res)
  return p != NULL ? *p : *reinterpret_cast<const ::lego::sync::protobuf::SyncValueResponse*>(
      &::lego::sync::protobuf::_SyncValueResponse_default_instance_);
}
inline ::lego::sync::protobuf::SyncValueResponse* SyncMessage::release_sync_value_res() {
  // @@protoc_insertion_point(field_release:lego.sync.protobuf.SyncMessage.sync_value_res)
  clear_has_sync_value_res();
  ::lego::sync::protobuf::SyncValueResponse* temp = sync_value_res_;
  sync_value_res_ = NULL;
  return temp;
}
inline ::lego::sync::protobuf::SyncValueResponse* SyncMessage::mutable_sync_value_res() {
  set_has_sync_value_res();
  if (sync_value_res_ == NULL) {
    auto* p = CreateMaybeMessage<::lego::sync::protobuf::SyncValueResponse>(GetArenaNoVirtual());
    sync_value_res_ = p;
  }
  // @@protoc_insertion_point(field_mutable:lego.sync.protobuf.SyncMessage.sync_value_res)
  return sync_value_res_;
}
inline void SyncMessage::set_allocated_sync_value_res(::lego::sync::protobuf::SyncValueResponse* sync_value_res) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete sync_value_res_;
  }
  if (sync_value_res) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      sync_value_res = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, sync_value_res, submessage_arena);
    }
    set_has_sync_value_res();
  } else {
    clear_has_sync_value_res();
  }
  sync_value_res_ = sync_value_res;
  // @@protoc_insertion_point(field_set_allocated:lego.sync.protobuf.SyncMessage.sync_value_res)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace sync
}  // namespace lego

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_sync_2eproto