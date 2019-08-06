// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: client.proto

#ifndef PROTOBUF_INCLUDED_client_2eproto
#define PROTOBUF_INCLUDED_client_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_client_2eproto 

namespace protobuf_client_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[3];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_client_2eproto
namespace lego {
namespace client {
namespace protobuf {
class GetVpnInfoRequest;
class GetVpnInfoRequestDefaultTypeInternal;
extern GetVpnInfoRequestDefaultTypeInternal _GetVpnInfoRequest_default_instance_;
class GetVpnInfoResponse;
class GetVpnInfoResponseDefaultTypeInternal;
extern GetVpnInfoResponseDefaultTypeInternal _GetVpnInfoResponse_default_instance_;
class ServiceMessage;
class ServiceMessageDefaultTypeInternal;
extern ServiceMessageDefaultTypeInternal _ServiceMessage_default_instance_;
}  // namespace protobuf
}  // namespace client
}  // namespace lego
namespace google {
namespace protobuf {
template<> ::lego::client::protobuf::GetVpnInfoRequest* Arena::CreateMaybeMessage<::lego::client::protobuf::GetVpnInfoRequest>(Arena*);
template<> ::lego::client::protobuf::GetVpnInfoResponse* Arena::CreateMaybeMessage<::lego::client::protobuf::GetVpnInfoResponse>(Arena*);
template<> ::lego::client::protobuf::ServiceMessage* Arena::CreateMaybeMessage<::lego::client::protobuf::ServiceMessage>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace lego {
namespace client {
namespace protobuf {

// ===================================================================

class GetVpnInfoRequest : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.client.protobuf.GetVpnInfoRequest) */ {
 public:
  GetVpnInfoRequest();
  virtual ~GetVpnInfoRequest();

  GetVpnInfoRequest(const GetVpnInfoRequest& from);

  inline GetVpnInfoRequest& operator=(const GetVpnInfoRequest& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetVpnInfoRequest(GetVpnInfoRequest&& from) noexcept
    : GetVpnInfoRequest() {
    *this = ::std::move(from);
  }

  inline GetVpnInfoRequest& operator=(GetVpnInfoRequest&& from) noexcept {
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
  static const GetVpnInfoRequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetVpnInfoRequest* internal_default_instance() {
    return reinterpret_cast<const GetVpnInfoRequest*>(
               &_GetVpnInfoRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(GetVpnInfoRequest* other);
  friend void swap(GetVpnInfoRequest& a, GetVpnInfoRequest& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetVpnInfoRequest* New() const final {
    return CreateMaybeMessage<GetVpnInfoRequest>(NULL);
  }

  GetVpnInfoRequest* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetVpnInfoRequest>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetVpnInfoRequest& from);
  void MergeFrom(const GetVpnInfoRequest& from);
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
  void InternalSwap(GetVpnInfoRequest* other);
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

  // optional bytes pubkey = 1;
  bool has_pubkey() const;
  void clear_pubkey();
  static const int kPubkeyFieldNumber = 1;
  const ::std::string& pubkey() const;
  void set_pubkey(const ::std::string& value);
  #if LANG_CXX11
  void set_pubkey(::std::string&& value);
  #endif
  void set_pubkey(const char* value);
  void set_pubkey(const void* value, size_t size);
  ::std::string* mutable_pubkey();
  ::std::string* release_pubkey();
  void set_allocated_pubkey(::std::string* pubkey);

  // @@protoc_insertion_point(class_scope:lego.client.protobuf.GetVpnInfoRequest)
 private:
  void set_has_pubkey();
  void clear_has_pubkey();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr pubkey_;
  friend struct ::protobuf_client_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class GetVpnInfoResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.client.protobuf.GetVpnInfoResponse) */ {
 public:
  GetVpnInfoResponse();
  virtual ~GetVpnInfoResponse();

  GetVpnInfoResponse(const GetVpnInfoResponse& from);

  inline GetVpnInfoResponse& operator=(const GetVpnInfoResponse& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  GetVpnInfoResponse(GetVpnInfoResponse&& from) noexcept
    : GetVpnInfoResponse() {
    *this = ::std::move(from);
  }

  inline GetVpnInfoResponse& operator=(GetVpnInfoResponse&& from) noexcept {
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
  static const GetVpnInfoResponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GetVpnInfoResponse* internal_default_instance() {
    return reinterpret_cast<const GetVpnInfoResponse*>(
               &_GetVpnInfoResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(GetVpnInfoResponse* other);
  friend void swap(GetVpnInfoResponse& a, GetVpnInfoResponse& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline GetVpnInfoResponse* New() const final {
    return CreateMaybeMessage<GetVpnInfoResponse>(NULL);
  }

  GetVpnInfoResponse* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<GetVpnInfoResponse>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const GetVpnInfoResponse& from);
  void MergeFrom(const GetVpnInfoResponse& from);
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
  void InternalSwap(GetVpnInfoResponse* other);
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

  // optional bytes ip = 1;
  bool has_ip() const;
  void clear_ip();
  static const int kIpFieldNumber = 1;
  const ::std::string& ip() const;
  void set_ip(const ::std::string& value);
  #if LANG_CXX11
  void set_ip(::std::string&& value);
  #endif
  void set_ip(const char* value);
  void set_ip(const void* value, size_t size);
  ::std::string* mutable_ip();
  ::std::string* release_ip();
  void set_allocated_ip(::std::string* ip);

  // optional bytes encrypt_type = 3;
  bool has_encrypt_type() const;
  void clear_encrypt_type();
  static const int kEncryptTypeFieldNumber = 3;
  const ::std::string& encrypt_type() const;
  void set_encrypt_type(const ::std::string& value);
  #if LANG_CXX11
  void set_encrypt_type(::std::string&& value);
  #endif
  void set_encrypt_type(const char* value);
  void set_encrypt_type(const void* value, size_t size);
  ::std::string* mutable_encrypt_type();
  ::std::string* release_encrypt_type();
  void set_allocated_encrypt_type(::std::string* encrypt_type);

  // optional bytes passwd = 4;
  bool has_passwd() const;
  void clear_passwd();
  static const int kPasswdFieldNumber = 4;
  const ::std::string& passwd() const;
  void set_passwd(const ::std::string& value);
  #if LANG_CXX11
  void set_passwd(::std::string&& value);
  #endif
  void set_passwd(const char* value);
  void set_passwd(const void* value, size_t size);
  ::std::string* mutable_passwd();
  ::std::string* release_passwd();
  void set_allocated_passwd(::std::string* passwd);

  // optional uint32 port = 2;
  bool has_port() const;
  void clear_port();
  static const int kPortFieldNumber = 2;
  ::google::protobuf::uint32 port() const;
  void set_port(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:lego.client.protobuf.GetVpnInfoResponse)
 private:
  void set_has_ip();
  void clear_has_ip();
  void set_has_port();
  void clear_has_port();
  void set_has_encrypt_type();
  void clear_has_encrypt_type();
  void set_has_passwd();
  void clear_has_passwd();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr ip_;
  ::google::protobuf::internal::ArenaStringPtr encrypt_type_;
  ::google::protobuf::internal::ArenaStringPtr passwd_;
  ::google::protobuf::uint32 port_;
  friend struct ::protobuf_client_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ServiceMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.client.protobuf.ServiceMessage) */ {
 public:
  ServiceMessage();
  virtual ~ServiceMessage();

  ServiceMessage(const ServiceMessage& from);

  inline ServiceMessage& operator=(const ServiceMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ServiceMessage(ServiceMessage&& from) noexcept
    : ServiceMessage() {
    *this = ::std::move(from);
  }

  inline ServiceMessage& operator=(ServiceMessage&& from) noexcept {
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
  static const ServiceMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ServiceMessage* internal_default_instance() {
    return reinterpret_cast<const ServiceMessage*>(
               &_ServiceMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ServiceMessage* other);
  friend void swap(ServiceMessage& a, ServiceMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ServiceMessage* New() const final {
    return CreateMaybeMessage<ServiceMessage>(NULL);
  }

  ServiceMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ServiceMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ServiceMessage& from);
  void MergeFrom(const ServiceMessage& from);
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
  void InternalSwap(ServiceMessage* other);
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

  // optional .lego.client.protobuf.GetVpnInfoRequest vpn_req = 1;
  bool has_vpn_req() const;
  void clear_vpn_req();
  static const int kVpnReqFieldNumber = 1;
  private:
  const ::lego::client::protobuf::GetVpnInfoRequest& _internal_vpn_req() const;
  public:
  const ::lego::client::protobuf::GetVpnInfoRequest& vpn_req() const;
  ::lego::client::protobuf::GetVpnInfoRequest* release_vpn_req();
  ::lego::client::protobuf::GetVpnInfoRequest* mutable_vpn_req();
  void set_allocated_vpn_req(::lego::client::protobuf::GetVpnInfoRequest* vpn_req);

  // optional .lego.client.protobuf.GetVpnInfoResponse vpn_res = 2;
  bool has_vpn_res() const;
  void clear_vpn_res();
  static const int kVpnResFieldNumber = 2;
  private:
  const ::lego::client::protobuf::GetVpnInfoResponse& _internal_vpn_res() const;
  public:
  const ::lego::client::protobuf::GetVpnInfoResponse& vpn_res() const;
  ::lego::client::protobuf::GetVpnInfoResponse* release_vpn_res();
  ::lego::client::protobuf::GetVpnInfoResponse* mutable_vpn_res();
  void set_allocated_vpn_res(::lego::client::protobuf::GetVpnInfoResponse* vpn_res);

  // @@protoc_insertion_point(class_scope:lego.client.protobuf.ServiceMessage)
 private:
  void set_has_vpn_req();
  void clear_has_vpn_req();
  void set_has_vpn_res();
  void clear_has_vpn_res();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::lego::client::protobuf::GetVpnInfoRequest* vpn_req_;
  ::lego::client::protobuf::GetVpnInfoResponse* vpn_res_;
  friend struct ::protobuf_client_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetVpnInfoRequest

// optional bytes pubkey = 1;
inline bool GetVpnInfoRequest::has_pubkey() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetVpnInfoRequest::set_has_pubkey() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetVpnInfoRequest::clear_has_pubkey() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetVpnInfoRequest::clear_pubkey() {
  pubkey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_pubkey();
}
inline const ::std::string& GetVpnInfoRequest::pubkey() const {
  // @@protoc_insertion_point(field_get:lego.client.protobuf.GetVpnInfoRequest.pubkey)
  return pubkey_.GetNoArena();
}
inline void GetVpnInfoRequest::set_pubkey(const ::std::string& value) {
  set_has_pubkey();
  pubkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.client.protobuf.GetVpnInfoRequest.pubkey)
}
#if LANG_CXX11
inline void GetVpnInfoRequest::set_pubkey(::std::string&& value) {
  set_has_pubkey();
  pubkey_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.client.protobuf.GetVpnInfoRequest.pubkey)
}
#endif
inline void GetVpnInfoRequest::set_pubkey(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_pubkey();
  pubkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.client.protobuf.GetVpnInfoRequest.pubkey)
}
inline void GetVpnInfoRequest::set_pubkey(const void* value, size_t size) {
  set_has_pubkey();
  pubkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.client.protobuf.GetVpnInfoRequest.pubkey)
}
inline ::std::string* GetVpnInfoRequest::mutable_pubkey() {
  set_has_pubkey();
  // @@protoc_insertion_point(field_mutable:lego.client.protobuf.GetVpnInfoRequest.pubkey)
  return pubkey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetVpnInfoRequest::release_pubkey() {
  // @@protoc_insertion_point(field_release:lego.client.protobuf.GetVpnInfoRequest.pubkey)
  if (!has_pubkey()) {
    return NULL;
  }
  clear_has_pubkey();
  return pubkey_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetVpnInfoRequest::set_allocated_pubkey(::std::string* pubkey) {
  if (pubkey != NULL) {
    set_has_pubkey();
  } else {
    clear_has_pubkey();
  }
  pubkey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pubkey);
  // @@protoc_insertion_point(field_set_allocated:lego.client.protobuf.GetVpnInfoRequest.pubkey)
}

// -------------------------------------------------------------------

// GetVpnInfoResponse

// optional bytes ip = 1;
inline bool GetVpnInfoResponse::has_ip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GetVpnInfoResponse::set_has_ip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void GetVpnInfoResponse::clear_has_ip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void GetVpnInfoResponse::clear_ip() {
  ip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_ip();
}
inline const ::std::string& GetVpnInfoResponse::ip() const {
  // @@protoc_insertion_point(field_get:lego.client.protobuf.GetVpnInfoResponse.ip)
  return ip_.GetNoArena();
}
inline void GetVpnInfoResponse::set_ip(const ::std::string& value) {
  set_has_ip();
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.client.protobuf.GetVpnInfoResponse.ip)
}
#if LANG_CXX11
inline void GetVpnInfoResponse::set_ip(::std::string&& value) {
  set_has_ip();
  ip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.client.protobuf.GetVpnInfoResponse.ip)
}
#endif
inline void GetVpnInfoResponse::set_ip(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_ip();
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.client.protobuf.GetVpnInfoResponse.ip)
}
inline void GetVpnInfoResponse::set_ip(const void* value, size_t size) {
  set_has_ip();
  ip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.client.protobuf.GetVpnInfoResponse.ip)
}
inline ::std::string* GetVpnInfoResponse::mutable_ip() {
  set_has_ip();
  // @@protoc_insertion_point(field_mutable:lego.client.protobuf.GetVpnInfoResponse.ip)
  return ip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetVpnInfoResponse::release_ip() {
  // @@protoc_insertion_point(field_release:lego.client.protobuf.GetVpnInfoResponse.ip)
  if (!has_ip()) {
    return NULL;
  }
  clear_has_ip();
  return ip_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetVpnInfoResponse::set_allocated_ip(::std::string* ip) {
  if (ip != NULL) {
    set_has_ip();
  } else {
    clear_has_ip();
  }
  ip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ip);
  // @@protoc_insertion_point(field_set_allocated:lego.client.protobuf.GetVpnInfoResponse.ip)
}

// optional uint32 port = 2;
inline bool GetVpnInfoResponse::has_port() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void GetVpnInfoResponse::set_has_port() {
  _has_bits_[0] |= 0x00000008u;
}
inline void GetVpnInfoResponse::clear_has_port() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void GetVpnInfoResponse::clear_port() {
  port_ = 0u;
  clear_has_port();
}
inline ::google::protobuf::uint32 GetVpnInfoResponse::port() const {
  // @@protoc_insertion_point(field_get:lego.client.protobuf.GetVpnInfoResponse.port)
  return port_;
}
inline void GetVpnInfoResponse::set_port(::google::protobuf::uint32 value) {
  set_has_port();
  port_ = value;
  // @@protoc_insertion_point(field_set:lego.client.protobuf.GetVpnInfoResponse.port)
}

// optional bytes encrypt_type = 3;
inline bool GetVpnInfoResponse::has_encrypt_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GetVpnInfoResponse::set_has_encrypt_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void GetVpnInfoResponse::clear_has_encrypt_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void GetVpnInfoResponse::clear_encrypt_type() {
  encrypt_type_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_encrypt_type();
}
inline const ::std::string& GetVpnInfoResponse::encrypt_type() const {
  // @@protoc_insertion_point(field_get:lego.client.protobuf.GetVpnInfoResponse.encrypt_type)
  return encrypt_type_.GetNoArena();
}
inline void GetVpnInfoResponse::set_encrypt_type(const ::std::string& value) {
  set_has_encrypt_type();
  encrypt_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.client.protobuf.GetVpnInfoResponse.encrypt_type)
}
#if LANG_CXX11
inline void GetVpnInfoResponse::set_encrypt_type(::std::string&& value) {
  set_has_encrypt_type();
  encrypt_type_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.client.protobuf.GetVpnInfoResponse.encrypt_type)
}
#endif
inline void GetVpnInfoResponse::set_encrypt_type(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_encrypt_type();
  encrypt_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.client.protobuf.GetVpnInfoResponse.encrypt_type)
}
inline void GetVpnInfoResponse::set_encrypt_type(const void* value, size_t size) {
  set_has_encrypt_type();
  encrypt_type_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.client.protobuf.GetVpnInfoResponse.encrypt_type)
}
inline ::std::string* GetVpnInfoResponse::mutable_encrypt_type() {
  set_has_encrypt_type();
  // @@protoc_insertion_point(field_mutable:lego.client.protobuf.GetVpnInfoResponse.encrypt_type)
  return encrypt_type_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetVpnInfoResponse::release_encrypt_type() {
  // @@protoc_insertion_point(field_release:lego.client.protobuf.GetVpnInfoResponse.encrypt_type)
  if (!has_encrypt_type()) {
    return NULL;
  }
  clear_has_encrypt_type();
  return encrypt_type_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetVpnInfoResponse::set_allocated_encrypt_type(::std::string* encrypt_type) {
  if (encrypt_type != NULL) {
    set_has_encrypt_type();
  } else {
    clear_has_encrypt_type();
  }
  encrypt_type_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encrypt_type);
  // @@protoc_insertion_point(field_set_allocated:lego.client.protobuf.GetVpnInfoResponse.encrypt_type)
}

// optional bytes passwd = 4;
inline bool GetVpnInfoResponse::has_passwd() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GetVpnInfoResponse::set_has_passwd() {
  _has_bits_[0] |= 0x00000004u;
}
inline void GetVpnInfoResponse::clear_has_passwd() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void GetVpnInfoResponse::clear_passwd() {
  passwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_passwd();
}
inline const ::std::string& GetVpnInfoResponse::passwd() const {
  // @@protoc_insertion_point(field_get:lego.client.protobuf.GetVpnInfoResponse.passwd)
  return passwd_.GetNoArena();
}
inline void GetVpnInfoResponse::set_passwd(const ::std::string& value) {
  set_has_passwd();
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.client.protobuf.GetVpnInfoResponse.passwd)
}
#if LANG_CXX11
inline void GetVpnInfoResponse::set_passwd(::std::string&& value) {
  set_has_passwd();
  passwd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.client.protobuf.GetVpnInfoResponse.passwd)
}
#endif
inline void GetVpnInfoResponse::set_passwd(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_passwd();
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.client.protobuf.GetVpnInfoResponse.passwd)
}
inline void GetVpnInfoResponse::set_passwd(const void* value, size_t size) {
  set_has_passwd();
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.client.protobuf.GetVpnInfoResponse.passwd)
}
inline ::std::string* GetVpnInfoResponse::mutable_passwd() {
  set_has_passwd();
  // @@protoc_insertion_point(field_mutable:lego.client.protobuf.GetVpnInfoResponse.passwd)
  return passwd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* GetVpnInfoResponse::release_passwd() {
  // @@protoc_insertion_point(field_release:lego.client.protobuf.GetVpnInfoResponse.passwd)
  if (!has_passwd()) {
    return NULL;
  }
  clear_has_passwd();
  return passwd_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void GetVpnInfoResponse::set_allocated_passwd(::std::string* passwd) {
  if (passwd != NULL) {
    set_has_passwd();
  } else {
    clear_has_passwd();
  }
  passwd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), passwd);
  // @@protoc_insertion_point(field_set_allocated:lego.client.protobuf.GetVpnInfoResponse.passwd)
}

// -------------------------------------------------------------------

// ServiceMessage

// optional .lego.client.protobuf.GetVpnInfoRequest vpn_req = 1;
inline bool ServiceMessage::has_vpn_req() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ServiceMessage::set_has_vpn_req() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ServiceMessage::clear_has_vpn_req() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ServiceMessage::clear_vpn_req() {
  if (vpn_req_ != NULL) vpn_req_->Clear();
  clear_has_vpn_req();
}
inline const ::lego::client::protobuf::GetVpnInfoRequest& ServiceMessage::_internal_vpn_req() const {
  return *vpn_req_;
}
inline const ::lego::client::protobuf::GetVpnInfoRequest& ServiceMessage::vpn_req() const {
  const ::lego::client::protobuf::GetVpnInfoRequest* p = vpn_req_;
  // @@protoc_insertion_point(field_get:lego.client.protobuf.ServiceMessage.vpn_req)
  return p != NULL ? *p : *reinterpret_cast<const ::lego::client::protobuf::GetVpnInfoRequest*>(
      &::lego::client::protobuf::_GetVpnInfoRequest_default_instance_);
}
inline ::lego::client::protobuf::GetVpnInfoRequest* ServiceMessage::release_vpn_req() {
  // @@protoc_insertion_point(field_release:lego.client.protobuf.ServiceMessage.vpn_req)
  clear_has_vpn_req();
  ::lego::client::protobuf::GetVpnInfoRequest* temp = vpn_req_;
  vpn_req_ = NULL;
  return temp;
}
inline ::lego::client::protobuf::GetVpnInfoRequest* ServiceMessage::mutable_vpn_req() {
  set_has_vpn_req();
  if (vpn_req_ == NULL) {
    auto* p = CreateMaybeMessage<::lego::client::protobuf::GetVpnInfoRequest>(GetArenaNoVirtual());
    vpn_req_ = p;
  }
  // @@protoc_insertion_point(field_mutable:lego.client.protobuf.ServiceMessage.vpn_req)
  return vpn_req_;
}
inline void ServiceMessage::set_allocated_vpn_req(::lego::client::protobuf::GetVpnInfoRequest* vpn_req) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete vpn_req_;
  }
  if (vpn_req) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      vpn_req = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, vpn_req, submessage_arena);
    }
    set_has_vpn_req();
  } else {
    clear_has_vpn_req();
  }
  vpn_req_ = vpn_req;
  // @@protoc_insertion_point(field_set_allocated:lego.client.protobuf.ServiceMessage.vpn_req)
}

// optional .lego.client.protobuf.GetVpnInfoResponse vpn_res = 2;
inline bool ServiceMessage::has_vpn_res() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ServiceMessage::set_has_vpn_res() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ServiceMessage::clear_has_vpn_res() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ServiceMessage::clear_vpn_res() {
  if (vpn_res_ != NULL) vpn_res_->Clear();
  clear_has_vpn_res();
}
inline const ::lego::client::protobuf::GetVpnInfoResponse& ServiceMessage::_internal_vpn_res() const {
  return *vpn_res_;
}
inline const ::lego::client::protobuf::GetVpnInfoResponse& ServiceMessage::vpn_res() const {
  const ::lego::client::protobuf::GetVpnInfoResponse* p = vpn_res_;
  // @@protoc_insertion_point(field_get:lego.client.protobuf.ServiceMessage.vpn_res)
  return p != NULL ? *p : *reinterpret_cast<const ::lego::client::protobuf::GetVpnInfoResponse*>(
      &::lego::client::protobuf::_GetVpnInfoResponse_default_instance_);
}
inline ::lego::client::protobuf::GetVpnInfoResponse* ServiceMessage::release_vpn_res() {
  // @@protoc_insertion_point(field_release:lego.client.protobuf.ServiceMessage.vpn_res)
  clear_has_vpn_res();
  ::lego::client::protobuf::GetVpnInfoResponse* temp = vpn_res_;
  vpn_res_ = NULL;
  return temp;
}
inline ::lego::client::protobuf::GetVpnInfoResponse* ServiceMessage::mutable_vpn_res() {
  set_has_vpn_res();
  if (vpn_res_ == NULL) {
    auto* p = CreateMaybeMessage<::lego::client::protobuf::GetVpnInfoResponse>(GetArenaNoVirtual());
    vpn_res_ = p;
  }
  // @@protoc_insertion_point(field_mutable:lego.client.protobuf.ServiceMessage.vpn_res)
  return vpn_res_;
}
inline void ServiceMessage::set_allocated_vpn_res(::lego::client::protobuf::GetVpnInfoResponse* vpn_res) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete vpn_res_;
  }
  if (vpn_res) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      vpn_res = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, vpn_res, submessage_arena);
    }
    set_has_vpn_res();
  } else {
    clear_has_vpn_res();
  }
  vpn_res_ = vpn_res;
  // @@protoc_insertion_point(field_set_allocated:lego.client.protobuf.ServiceMessage.vpn_res)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace client
}  // namespace lego

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_client_2eproto
