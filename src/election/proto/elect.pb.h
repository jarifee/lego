// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: elect.proto

#ifndef PROTOBUF_INCLUDED_elect_2eproto
#define PROTOBUF_INCLUDED_elect_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_elect_2eproto 

namespace protobuf_elect_2eproto {
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
}  // namespace protobuf_elect_2eproto
namespace lego {
namespace elect {
namespace protobuf {
class ElectBlock;
class ElectBlockDefaultTypeInternal;
extern ElectBlockDefaultTypeInternal _ElectBlock_default_instance_;
class ElectMessage;
class ElectMessageDefaultTypeInternal;
extern ElectMessageDefaultTypeInternal _ElectMessage_default_instance_;
class member;
class memberDefaultTypeInternal;
extern memberDefaultTypeInternal _member_default_instance_;
}  // namespace protobuf
}  // namespace elect
}  // namespace lego
namespace google {
namespace protobuf {
template<> ::lego::elect::protobuf::ElectBlock* Arena::CreateMaybeMessage<::lego::elect::protobuf::ElectBlock>(Arena*);
template<> ::lego::elect::protobuf::ElectMessage* Arena::CreateMaybeMessage<::lego::elect::protobuf::ElectMessage>(Arena*);
template<> ::lego::elect::protobuf::member* Arena::CreateMaybeMessage<::lego::elect::protobuf::member>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace lego {
namespace elect {
namespace protobuf {

// ===================================================================

class member : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.elect.protobuf.member) */ {
 public:
  member();
  virtual ~member();

  member(const member& from);

  inline member& operator=(const member& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  member(member&& from) noexcept
    : member() {
    *this = ::std::move(from);
  }

  inline member& operator=(member&& from) noexcept {
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
  static const member& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const member* internal_default_instance() {
    return reinterpret_cast<const member*>(
               &_member_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(member* other);
  friend void swap(member& a, member& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline member* New() const final {
    return CreateMaybeMessage<member>(NULL);
  }

  member* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<member>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const member& from);
  void MergeFrom(const member& from);
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
  void InternalSwap(member* other);
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

  // optional bytes id = 1;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 1;
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

  // optional bytes pubkey = 2;
  bool has_pubkey() const;
  void clear_pubkey();
  static const int kPubkeyFieldNumber = 2;
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

  // optional bytes sign = 3;
  bool has_sign() const;
  void clear_sign();
  static const int kSignFieldNumber = 3;
  const ::std::string& sign() const;
  void set_sign(const ::std::string& value);
  #if LANG_CXX11
  void set_sign(::std::string&& value);
  #endif
  void set_sign(const char* value);
  void set_sign(const void* value, size_t size);
  ::std::string* mutable_sign();
  ::std::string* release_sign();
  void set_allocated_sign(::std::string* sign);

  // optional uint32 net_id = 4;
  bool has_net_id() const;
  void clear_net_id();
  static const int kNetIdFieldNumber = 4;
  ::google::protobuf::uint32 net_id() const;
  void set_net_id(::google::protobuf::uint32 value);

  // optional uint32 country = 5;
  bool has_country() const;
  void clear_country();
  static const int kCountryFieldNumber = 5;
  ::google::protobuf::uint32 country() const;
  void set_country(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:lego.elect.protobuf.member)
 private:
  void set_has_id();
  void clear_has_id();
  void set_has_pubkey();
  void clear_has_pubkey();
  void set_has_sign();
  void clear_has_sign();
  void set_has_net_id();
  void clear_has_net_id();
  void set_has_country();
  void clear_has_country();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr pubkey_;
  ::google::protobuf::internal::ArenaStringPtr sign_;
  ::google::protobuf::uint32 net_id_;
  ::google::protobuf::uint32 country_;
  friend struct ::protobuf_elect_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ElectBlock : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.elect.protobuf.ElectBlock) */ {
 public:
  ElectBlock();
  virtual ~ElectBlock();

  ElectBlock(const ElectBlock& from);

  inline ElectBlock& operator=(const ElectBlock& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ElectBlock(ElectBlock&& from) noexcept
    : ElectBlock() {
    *this = ::std::move(from);
  }

  inline ElectBlock& operator=(ElectBlock&& from) noexcept {
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
  static const ElectBlock& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ElectBlock* internal_default_instance() {
    return reinterpret_cast<const ElectBlock*>(
               &_ElectBlock_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(ElectBlock* other);
  friend void swap(ElectBlock& a, ElectBlock& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ElectBlock* New() const final {
    return CreateMaybeMessage<ElectBlock>(NULL);
  }

  ElectBlock* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ElectBlock>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ElectBlock& from);
  void MergeFrom(const ElectBlock& from);
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
  void InternalSwap(ElectBlock* other);
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

  // repeated .lego.elect.protobuf.member in = 1;
  int in_size() const;
  void clear_in();
  static const int kInFieldNumber = 1;
  ::lego::elect::protobuf::member* mutable_in(int index);
  ::google::protobuf::RepeatedPtrField< ::lego::elect::protobuf::member >*
      mutable_in();
  const ::lego::elect::protobuf::member& in(int index) const;
  ::lego::elect::protobuf::member* add_in();
  const ::google::protobuf::RepeatedPtrField< ::lego::elect::protobuf::member >&
      in() const;

  // repeated .lego.elect.protobuf.member out = 2;
  int out_size() const;
  void clear_out();
  static const int kOutFieldNumber = 2;
  ::lego::elect::protobuf::member* mutable_out(int index);
  ::google::protobuf::RepeatedPtrField< ::lego::elect::protobuf::member >*
      mutable_out();
  const ::lego::elect::protobuf::member& out(int index) const;
  ::lego::elect::protobuf::member* add_out();
  const ::google::protobuf::RepeatedPtrField< ::lego::elect::protobuf::member >&
      out() const;

  // optional bytes acc_pubkey = 3;
  bool has_acc_pubkey() const;
  void clear_acc_pubkey();
  static const int kAccPubkeyFieldNumber = 3;
  const ::std::string& acc_pubkey() const;
  void set_acc_pubkey(const ::std::string& value);
  #if LANG_CXX11
  void set_acc_pubkey(::std::string&& value);
  #endif
  void set_acc_pubkey(const char* value);
  void set_acc_pubkey(const void* value, size_t size);
  ::std::string* mutable_acc_pubkey();
  ::std::string* release_acc_pubkey();
  void set_allocated_acc_pubkey(::std::string* acc_pubkey);

  // optional bytes acc_sign = 4;
  bool has_acc_sign() const;
  void clear_acc_sign();
  static const int kAccSignFieldNumber = 4;
  const ::std::string& acc_sign() const;
  void set_acc_sign(const ::std::string& value);
  #if LANG_CXX11
  void set_acc_sign(::std::string&& value);
  #endif
  void set_acc_sign(const char* value);
  void set_acc_sign(const void* value, size_t size);
  ::std::string* mutable_acc_sign();
  ::std::string* release_acc_sign();
  void set_allocated_acc_sign(::std::string* acc_sign);

  // @@protoc_insertion_point(class_scope:lego.elect.protobuf.ElectBlock)
 private:
  void set_has_acc_pubkey();
  void clear_has_acc_pubkey();
  void set_has_acc_sign();
  void clear_has_acc_sign();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::lego::elect::protobuf::member > in_;
  ::google::protobuf::RepeatedPtrField< ::lego::elect::protobuf::member > out_;
  ::google::protobuf::internal::ArenaStringPtr acc_pubkey_;
  ::google::protobuf::internal::ArenaStringPtr acc_sign_;
  friend struct ::protobuf_elect_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class ElectMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:lego.elect.protobuf.ElectMessage) */ {
 public:
  ElectMessage();
  virtual ~ElectMessage();

  ElectMessage(const ElectMessage& from);

  inline ElectMessage& operator=(const ElectMessage& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  ElectMessage(ElectMessage&& from) noexcept
    : ElectMessage() {
    *this = ::std::move(from);
  }

  inline ElectMessage& operator=(ElectMessage&& from) noexcept {
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
  static const ElectMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ElectMessage* internal_default_instance() {
    return reinterpret_cast<const ElectMessage*>(
               &_ElectMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(ElectMessage* other);
  friend void swap(ElectMessage& a, ElectMessage& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline ElectMessage* New() const final {
    return CreateMaybeMessage<ElectMessage>(NULL);
  }

  ElectMessage* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<ElectMessage>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const ElectMessage& from);
  void MergeFrom(const ElectMessage& from);
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
  void InternalSwap(ElectMessage* other);
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

  // optional .lego.elect.protobuf.ElectBlock elect_block = 1;
  bool has_elect_block() const;
  void clear_elect_block();
  static const int kElectBlockFieldNumber = 1;
  private:
  const ::lego::elect::protobuf::ElectBlock& _internal_elect_block() const;
  public:
  const ::lego::elect::protobuf::ElectBlock& elect_block() const;
  ::lego::elect::protobuf::ElectBlock* release_elect_block();
  ::lego::elect::protobuf::ElectBlock* mutable_elect_block();
  void set_allocated_elect_block(::lego::elect::protobuf::ElectBlock* elect_block);

  // @@protoc_insertion_point(class_scope:lego.elect.protobuf.ElectMessage)
 private:
  void set_has_elect_block();
  void clear_has_elect_block();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::lego::elect::protobuf::ElectBlock* elect_block_;
  friend struct ::protobuf_elect_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// member

// optional bytes id = 1;
inline bool member::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void member::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void member::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void member::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& member::id() const {
  // @@protoc_insertion_point(field_get:lego.elect.protobuf.member.id)
  return id_.GetNoArena();
}
inline void member::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.elect.protobuf.member.id)
}
#if LANG_CXX11
inline void member::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.elect.protobuf.member.id)
}
#endif
inline void member::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.elect.protobuf.member.id)
}
inline void member::set_id(const void* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.elect.protobuf.member.id)
}
inline ::std::string* member::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:lego.elect.protobuf.member.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* member::release_id() {
  // @@protoc_insertion_point(field_release:lego.elect.protobuf.member.id)
  if (!has_id()) {
    return NULL;
  }
  clear_has_id();
  return id_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void member::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:lego.elect.protobuf.member.id)
}

// optional bytes pubkey = 2;
inline bool member::has_pubkey() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void member::set_has_pubkey() {
  _has_bits_[0] |= 0x00000002u;
}
inline void member::clear_has_pubkey() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void member::clear_pubkey() {
  pubkey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_pubkey();
}
inline const ::std::string& member::pubkey() const {
  // @@protoc_insertion_point(field_get:lego.elect.protobuf.member.pubkey)
  return pubkey_.GetNoArena();
}
inline void member::set_pubkey(const ::std::string& value) {
  set_has_pubkey();
  pubkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.elect.protobuf.member.pubkey)
}
#if LANG_CXX11
inline void member::set_pubkey(::std::string&& value) {
  set_has_pubkey();
  pubkey_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.elect.protobuf.member.pubkey)
}
#endif
inline void member::set_pubkey(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_pubkey();
  pubkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.elect.protobuf.member.pubkey)
}
inline void member::set_pubkey(const void* value, size_t size) {
  set_has_pubkey();
  pubkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.elect.protobuf.member.pubkey)
}
inline ::std::string* member::mutable_pubkey() {
  set_has_pubkey();
  // @@protoc_insertion_point(field_mutable:lego.elect.protobuf.member.pubkey)
  return pubkey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* member::release_pubkey() {
  // @@protoc_insertion_point(field_release:lego.elect.protobuf.member.pubkey)
  if (!has_pubkey()) {
    return NULL;
  }
  clear_has_pubkey();
  return pubkey_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void member::set_allocated_pubkey(::std::string* pubkey) {
  if (pubkey != NULL) {
    set_has_pubkey();
  } else {
    clear_has_pubkey();
  }
  pubkey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pubkey);
  // @@protoc_insertion_point(field_set_allocated:lego.elect.protobuf.member.pubkey)
}

// optional bytes sign = 3;
inline bool member::has_sign() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void member::set_has_sign() {
  _has_bits_[0] |= 0x00000004u;
}
inline void member::clear_has_sign() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void member::clear_sign() {
  sign_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_sign();
}
inline const ::std::string& member::sign() const {
  // @@protoc_insertion_point(field_get:lego.elect.protobuf.member.sign)
  return sign_.GetNoArena();
}
inline void member::set_sign(const ::std::string& value) {
  set_has_sign();
  sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.elect.protobuf.member.sign)
}
#if LANG_CXX11
inline void member::set_sign(::std::string&& value) {
  set_has_sign();
  sign_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.elect.protobuf.member.sign)
}
#endif
inline void member::set_sign(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_sign();
  sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.elect.protobuf.member.sign)
}
inline void member::set_sign(const void* value, size_t size) {
  set_has_sign();
  sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.elect.protobuf.member.sign)
}
inline ::std::string* member::mutable_sign() {
  set_has_sign();
  // @@protoc_insertion_point(field_mutable:lego.elect.protobuf.member.sign)
  return sign_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* member::release_sign() {
  // @@protoc_insertion_point(field_release:lego.elect.protobuf.member.sign)
  if (!has_sign()) {
    return NULL;
  }
  clear_has_sign();
  return sign_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void member::set_allocated_sign(::std::string* sign) {
  if (sign != NULL) {
    set_has_sign();
  } else {
    clear_has_sign();
  }
  sign_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sign);
  // @@protoc_insertion_point(field_set_allocated:lego.elect.protobuf.member.sign)
}

// optional uint32 net_id = 4;
inline bool member::has_net_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void member::set_has_net_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void member::clear_has_net_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void member::clear_net_id() {
  net_id_ = 0u;
  clear_has_net_id();
}
inline ::google::protobuf::uint32 member::net_id() const {
  // @@protoc_insertion_point(field_get:lego.elect.protobuf.member.net_id)
  return net_id_;
}
inline void member::set_net_id(::google::protobuf::uint32 value) {
  set_has_net_id();
  net_id_ = value;
  // @@protoc_insertion_point(field_set:lego.elect.protobuf.member.net_id)
}

// optional uint32 country = 5;
inline bool member::has_country() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void member::set_has_country() {
  _has_bits_[0] |= 0x00000010u;
}
inline void member::clear_has_country() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void member::clear_country() {
  country_ = 0u;
  clear_has_country();
}
inline ::google::protobuf::uint32 member::country() const {
  // @@protoc_insertion_point(field_get:lego.elect.protobuf.member.country)
  return country_;
}
inline void member::set_country(::google::protobuf::uint32 value) {
  set_has_country();
  country_ = value;
  // @@protoc_insertion_point(field_set:lego.elect.protobuf.member.country)
}

// -------------------------------------------------------------------

// ElectBlock

// repeated .lego.elect.protobuf.member in = 1;
inline int ElectBlock::in_size() const {
  return in_.size();
}
inline void ElectBlock::clear_in() {
  in_.Clear();
}
inline ::lego::elect::protobuf::member* ElectBlock::mutable_in(int index) {
  // @@protoc_insertion_point(field_mutable:lego.elect.protobuf.ElectBlock.in)
  return in_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::lego::elect::protobuf::member >*
ElectBlock::mutable_in() {
  // @@protoc_insertion_point(field_mutable_list:lego.elect.protobuf.ElectBlock.in)
  return &in_;
}
inline const ::lego::elect::protobuf::member& ElectBlock::in(int index) const {
  // @@protoc_insertion_point(field_get:lego.elect.protobuf.ElectBlock.in)
  return in_.Get(index);
}
inline ::lego::elect::protobuf::member* ElectBlock::add_in() {
  // @@protoc_insertion_point(field_add:lego.elect.protobuf.ElectBlock.in)
  return in_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::lego::elect::protobuf::member >&
ElectBlock::in() const {
  // @@protoc_insertion_point(field_list:lego.elect.protobuf.ElectBlock.in)
  return in_;
}

// repeated .lego.elect.protobuf.member out = 2;
inline int ElectBlock::out_size() const {
  return out_.size();
}
inline void ElectBlock::clear_out() {
  out_.Clear();
}
inline ::lego::elect::protobuf::member* ElectBlock::mutable_out(int index) {
  // @@protoc_insertion_point(field_mutable:lego.elect.protobuf.ElectBlock.out)
  return out_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::lego::elect::protobuf::member >*
ElectBlock::mutable_out() {
  // @@protoc_insertion_point(field_mutable_list:lego.elect.protobuf.ElectBlock.out)
  return &out_;
}
inline const ::lego::elect::protobuf::member& ElectBlock::out(int index) const {
  // @@protoc_insertion_point(field_get:lego.elect.protobuf.ElectBlock.out)
  return out_.Get(index);
}
inline ::lego::elect::protobuf::member* ElectBlock::add_out() {
  // @@protoc_insertion_point(field_add:lego.elect.protobuf.ElectBlock.out)
  return out_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::lego::elect::protobuf::member >&
ElectBlock::out() const {
  // @@protoc_insertion_point(field_list:lego.elect.protobuf.ElectBlock.out)
  return out_;
}

// optional bytes acc_pubkey = 3;
inline bool ElectBlock::has_acc_pubkey() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ElectBlock::set_has_acc_pubkey() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ElectBlock::clear_has_acc_pubkey() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ElectBlock::clear_acc_pubkey() {
  acc_pubkey_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_acc_pubkey();
}
inline const ::std::string& ElectBlock::acc_pubkey() const {
  // @@protoc_insertion_point(field_get:lego.elect.protobuf.ElectBlock.acc_pubkey)
  return acc_pubkey_.GetNoArena();
}
inline void ElectBlock::set_acc_pubkey(const ::std::string& value) {
  set_has_acc_pubkey();
  acc_pubkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.elect.protobuf.ElectBlock.acc_pubkey)
}
#if LANG_CXX11
inline void ElectBlock::set_acc_pubkey(::std::string&& value) {
  set_has_acc_pubkey();
  acc_pubkey_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.elect.protobuf.ElectBlock.acc_pubkey)
}
#endif
inline void ElectBlock::set_acc_pubkey(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_acc_pubkey();
  acc_pubkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.elect.protobuf.ElectBlock.acc_pubkey)
}
inline void ElectBlock::set_acc_pubkey(const void* value, size_t size) {
  set_has_acc_pubkey();
  acc_pubkey_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.elect.protobuf.ElectBlock.acc_pubkey)
}
inline ::std::string* ElectBlock::mutable_acc_pubkey() {
  set_has_acc_pubkey();
  // @@protoc_insertion_point(field_mutable:lego.elect.protobuf.ElectBlock.acc_pubkey)
  return acc_pubkey_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ElectBlock::release_acc_pubkey() {
  // @@protoc_insertion_point(field_release:lego.elect.protobuf.ElectBlock.acc_pubkey)
  if (!has_acc_pubkey()) {
    return NULL;
  }
  clear_has_acc_pubkey();
  return acc_pubkey_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ElectBlock::set_allocated_acc_pubkey(::std::string* acc_pubkey) {
  if (acc_pubkey != NULL) {
    set_has_acc_pubkey();
  } else {
    clear_has_acc_pubkey();
  }
  acc_pubkey_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), acc_pubkey);
  // @@protoc_insertion_point(field_set_allocated:lego.elect.protobuf.ElectBlock.acc_pubkey)
}

// optional bytes acc_sign = 4;
inline bool ElectBlock::has_acc_sign() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ElectBlock::set_has_acc_sign() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ElectBlock::clear_has_acc_sign() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ElectBlock::clear_acc_sign() {
  acc_sign_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_acc_sign();
}
inline const ::std::string& ElectBlock::acc_sign() const {
  // @@protoc_insertion_point(field_get:lego.elect.protobuf.ElectBlock.acc_sign)
  return acc_sign_.GetNoArena();
}
inline void ElectBlock::set_acc_sign(const ::std::string& value) {
  set_has_acc_sign();
  acc_sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:lego.elect.protobuf.ElectBlock.acc_sign)
}
#if LANG_CXX11
inline void ElectBlock::set_acc_sign(::std::string&& value) {
  set_has_acc_sign();
  acc_sign_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:lego.elect.protobuf.ElectBlock.acc_sign)
}
#endif
inline void ElectBlock::set_acc_sign(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_acc_sign();
  acc_sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:lego.elect.protobuf.ElectBlock.acc_sign)
}
inline void ElectBlock::set_acc_sign(const void* value, size_t size) {
  set_has_acc_sign();
  acc_sign_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:lego.elect.protobuf.ElectBlock.acc_sign)
}
inline ::std::string* ElectBlock::mutable_acc_sign() {
  set_has_acc_sign();
  // @@protoc_insertion_point(field_mutable:lego.elect.protobuf.ElectBlock.acc_sign)
  return acc_sign_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ElectBlock::release_acc_sign() {
  // @@protoc_insertion_point(field_release:lego.elect.protobuf.ElectBlock.acc_sign)
  if (!has_acc_sign()) {
    return NULL;
  }
  clear_has_acc_sign();
  return acc_sign_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ElectBlock::set_allocated_acc_sign(::std::string* acc_sign) {
  if (acc_sign != NULL) {
    set_has_acc_sign();
  } else {
    clear_has_acc_sign();
  }
  acc_sign_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), acc_sign);
  // @@protoc_insertion_point(field_set_allocated:lego.elect.protobuf.ElectBlock.acc_sign)
}

// -------------------------------------------------------------------

// ElectMessage

// optional .lego.elect.protobuf.ElectBlock elect_block = 1;
inline bool ElectMessage::has_elect_block() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ElectMessage::set_has_elect_block() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ElectMessage::clear_has_elect_block() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ElectMessage::clear_elect_block() {
  if (elect_block_ != NULL) elect_block_->Clear();
  clear_has_elect_block();
}
inline const ::lego::elect::protobuf::ElectBlock& ElectMessage::_internal_elect_block() const {
  return *elect_block_;
}
inline const ::lego::elect::protobuf::ElectBlock& ElectMessage::elect_block() const {
  const ::lego::elect::protobuf::ElectBlock* p = elect_block_;
  // @@protoc_insertion_point(field_get:lego.elect.protobuf.ElectMessage.elect_block)
  return p != NULL ? *p : *reinterpret_cast<const ::lego::elect::protobuf::ElectBlock*>(
      &::lego::elect::protobuf::_ElectBlock_default_instance_);
}
inline ::lego::elect::protobuf::ElectBlock* ElectMessage::release_elect_block() {
  // @@protoc_insertion_point(field_release:lego.elect.protobuf.ElectMessage.elect_block)
  clear_has_elect_block();
  ::lego::elect::protobuf::ElectBlock* temp = elect_block_;
  elect_block_ = NULL;
  return temp;
}
inline ::lego::elect::protobuf::ElectBlock* ElectMessage::mutable_elect_block() {
  set_has_elect_block();
  if (elect_block_ == NULL) {
    auto* p = CreateMaybeMessage<::lego::elect::protobuf::ElectBlock>(GetArenaNoVirtual());
    elect_block_ = p;
  }
  // @@protoc_insertion_point(field_mutable:lego.elect.protobuf.ElectMessage.elect_block)
  return elect_block_;
}
inline void ElectMessage::set_allocated_elect_block(::lego::elect::protobuf::ElectBlock* elect_block) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete elect_block_;
  }
  if (elect_block) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      elect_block = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, elect_block, submessage_arena);
    }
    set_has_elect_block();
  } else {
    clear_has_elect_block();
  }
  elect_block_ = elect_block;
  // @@protoc_insertion_point(field_set_allocated:lego.elect.protobuf.ElectMessage.elect_block)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace elect
}  // namespace lego

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_elect_2eproto
