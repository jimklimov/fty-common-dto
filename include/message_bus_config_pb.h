// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_bus_config.proto

#ifndef PROTOBUF_INCLUDED_message_5fbus_5fconfig_2eproto
#define PROTOBUF_INCLUDED_message_5fbus_5fconfig_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protobuf_message_5fbus_5fconfig_2eproto 

namespace protobuf_message_5fbus_5fconfig_2eproto {
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
}  // namespace protobuf_message_5fbus_5fconfig_2eproto
namespace messagebus {
class MalamuteClientConfig;
class MalamuteClientConfigDefaultTypeInternal;
extern MalamuteClientConfigDefaultTypeInternal _MalamuteClientConfig_default_instance_;
class MessageBusConfig;
class MessageBusConfigDefaultTypeInternal;
extern MessageBusConfigDefaultTypeInternal _MessageBusConfig_default_instance_;
class UnixSocketClientConfig;
class UnixSocketClientConfigDefaultTypeInternal;
extern UnixSocketClientConfigDefaultTypeInternal _UnixSocketClientConfig_default_instance_;
}  // namespace messagebus
namespace google {
namespace protobuf {
template<> ::messagebus::MalamuteClientConfig* Arena::CreateMaybeMessage<::messagebus::MalamuteClientConfig>(Arena*);
template<> ::messagebus::MessageBusConfig* Arena::CreateMaybeMessage<::messagebus::MessageBusConfig>(Arena*);
template<> ::messagebus::UnixSocketClientConfig* Arena::CreateMaybeMessage<::messagebus::UnixSocketClientConfig>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace messagebus {

// ===================================================================

class MalamuteClientConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:messagebus.MalamuteClientConfig) */ {
 public:
  MalamuteClientConfig();
  virtual ~MalamuteClientConfig();

  MalamuteClientConfig(const MalamuteClientConfig& from);

  inline MalamuteClientConfig& operator=(const MalamuteClientConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MalamuteClientConfig(MalamuteClientConfig&& from) noexcept
    : MalamuteClientConfig() {
    *this = ::std::move(from);
  }

  inline MalamuteClientConfig& operator=(MalamuteClientConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MalamuteClientConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MalamuteClientConfig* internal_default_instance() {
    return reinterpret_cast<const MalamuteClientConfig*>(
               &_MalamuteClientConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(MalamuteClientConfig* other);
  friend void swap(MalamuteClientConfig& a, MalamuteClientConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MalamuteClientConfig* New() const final {
    return CreateMaybeMessage<MalamuteClientConfig>(NULL);
  }

  MalamuteClientConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MalamuteClientConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MalamuteClientConfig& from);
  void MergeFrom(const MalamuteClientConfig& from);
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
  void InternalSwap(MalamuteClientConfig* other);
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

  // string end_point = 1;
  void clear_end_point();
  static const int kEndPointFieldNumber = 1;
  const ::std::string& end_point() const;
  void set_end_point(const ::std::string& value);
  #if LANG_CXX11
  void set_end_point(::std::string&& value);
  #endif
  void set_end_point(const char* value);
  void set_end_point(const char* value, size_t size);
  ::std::string* mutable_end_point();
  ::std::string* release_end_point();
  void set_allocated_end_point(::std::string* end_point);

  // string agent_name = 2;
  void clear_agent_name();
  static const int kAgentNameFieldNumber = 2;
  const ::std::string& agent_name() const;
  void set_agent_name(const ::std::string& value);
  #if LANG_CXX11
  void set_agent_name(::std::string&& value);
  #endif
  void set_agent_name(const char* value);
  void set_agent_name(const char* value, size_t size);
  ::std::string* mutable_agent_name();
  ::std::string* release_agent_name();
  void set_allocated_agent_name(::std::string* agent_name);

  // @@protoc_insertion_point(class_scope:messagebus.MalamuteClientConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr end_point_;
  ::google::protobuf::internal::ArenaStringPtr agent_name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_message_5fbus_5fconfig_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class UnixSocketClientConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:messagebus.UnixSocketClientConfig) */ {
 public:
  UnixSocketClientConfig();
  virtual ~UnixSocketClientConfig();

  UnixSocketClientConfig(const UnixSocketClientConfig& from);

  inline UnixSocketClientConfig& operator=(const UnixSocketClientConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  UnixSocketClientConfig(UnixSocketClientConfig&& from) noexcept
    : UnixSocketClientConfig() {
    *this = ::std::move(from);
  }

  inline UnixSocketClientConfig& operator=(UnixSocketClientConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const UnixSocketClientConfig& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UnixSocketClientConfig* internal_default_instance() {
    return reinterpret_cast<const UnixSocketClientConfig*>(
               &_UnixSocketClientConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(UnixSocketClientConfig* other);
  friend void swap(UnixSocketClientConfig& a, UnixSocketClientConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline UnixSocketClientConfig* New() const final {
    return CreateMaybeMessage<UnixSocketClientConfig>(NULL);
  }

  UnixSocketClientConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<UnixSocketClientConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const UnixSocketClientConfig& from);
  void MergeFrom(const UnixSocketClientConfig& from);
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
  void InternalSwap(UnixSocketClientConfig* other);
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

  // string socket_path = 1;
  void clear_socket_path();
  static const int kSocketPathFieldNumber = 1;
  const ::std::string& socket_path() const;
  void set_socket_path(const ::std::string& value);
  #if LANG_CXX11
  void set_socket_path(::std::string&& value);
  #endif
  void set_socket_path(const char* value);
  void set_socket_path(const char* value, size_t size);
  ::std::string* mutable_socket_path();
  ::std::string* release_socket_path();
  void set_allocated_socket_path(::std::string* socket_path);

  // string agent_name = 2;
  void clear_agent_name();
  static const int kAgentNameFieldNumber = 2;
  const ::std::string& agent_name() const;
  void set_agent_name(const ::std::string& value);
  #if LANG_CXX11
  void set_agent_name(::std::string&& value);
  #endif
  void set_agent_name(const char* value);
  void set_agent_name(const char* value, size_t size);
  ::std::string* mutable_agent_name();
  ::std::string* release_agent_name();
  void set_allocated_agent_name(::std::string* agent_name);

  // @@protoc_insertion_point(class_scope:messagebus.UnixSocketClientConfig)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr socket_path_;
  ::google::protobuf::internal::ArenaStringPtr agent_name_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_message_5fbus_5fconfig_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class MessageBusConfig : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:messagebus.MessageBusConfig) */ {
 public:
  MessageBusConfig();
  virtual ~MessageBusConfig();

  MessageBusConfig(const MessageBusConfig& from);

  inline MessageBusConfig& operator=(const MessageBusConfig& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MessageBusConfig(MessageBusConfig&& from) noexcept
    : MessageBusConfig() {
    *this = ::std::move(from);
  }

  inline MessageBusConfig& operator=(MessageBusConfig&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const MessageBusConfig& default_instance();

  enum ParametersCase {
    kMalamuteClientConfig = 2,
    kUnixClientConfig = 3,
    PARAMETERS_NOT_SET = 0,
  };

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MessageBusConfig* internal_default_instance() {
    return reinterpret_cast<const MessageBusConfig*>(
               &_MessageBusConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  void Swap(MessageBusConfig* other);
  friend void swap(MessageBusConfig& a, MessageBusConfig& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MessageBusConfig* New() const final {
    return CreateMaybeMessage<MessageBusConfig>(NULL);
  }

  MessageBusConfig* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<MessageBusConfig>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const MessageBusConfig& from);
  void MergeFrom(const MessageBusConfig& from);
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
  void InternalSwap(MessageBusConfig* other);
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

  // string queue_name = 1;
  void clear_queue_name();
  static const int kQueueNameFieldNumber = 1;
  const ::std::string& queue_name() const;
  void set_queue_name(const ::std::string& value);
  #if LANG_CXX11
  void set_queue_name(::std::string&& value);
  #endif
  void set_queue_name(const char* value);
  void set_queue_name(const char* value, size_t size);
  ::std::string* mutable_queue_name();
  ::std::string* release_queue_name();
  void set_allocated_queue_name(::std::string* queue_name);

  // .messagebus.MalamuteClientConfig malamute_client_config = 2;
  bool has_malamute_client_config() const;
  void clear_malamute_client_config();
  static const int kMalamuteClientConfigFieldNumber = 2;
  private:
  const ::messagebus::MalamuteClientConfig& _internal_malamute_client_config() const;
  public:
  const ::messagebus::MalamuteClientConfig& malamute_client_config() const;
  ::messagebus::MalamuteClientConfig* release_malamute_client_config();
  ::messagebus::MalamuteClientConfig* mutable_malamute_client_config();
  void set_allocated_malamute_client_config(::messagebus::MalamuteClientConfig* malamute_client_config);

  // .messagebus.UnixSocketClientConfig unix_client_config = 3;
  bool has_unix_client_config() const;
  void clear_unix_client_config();
  static const int kUnixClientConfigFieldNumber = 3;
  private:
  const ::messagebus::UnixSocketClientConfig& _internal_unix_client_config() const;
  public:
  const ::messagebus::UnixSocketClientConfig& unix_client_config() const;
  ::messagebus::UnixSocketClientConfig* release_unix_client_config();
  ::messagebus::UnixSocketClientConfig* mutable_unix_client_config();
  void set_allocated_unix_client_config(::messagebus::UnixSocketClientConfig* unix_client_config);

  void clear_parameters();
  ParametersCase parameters_case() const;
  // @@protoc_insertion_point(class_scope:messagebus.MessageBusConfig)
 private:
  void set_has_malamute_client_config();
  void set_has_unix_client_config();

  inline bool has_parameters() const;
  inline void clear_has_parameters();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr queue_name_;
  union ParametersUnion {
    ParametersUnion() {}
    ::messagebus::MalamuteClientConfig* malamute_client_config_;
    ::messagebus::UnixSocketClientConfig* unix_client_config_;
  } parameters_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct ::protobuf_message_5fbus_5fconfig_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MalamuteClientConfig

// string end_point = 1;
inline void MalamuteClientConfig::clear_end_point() {
  end_point_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MalamuteClientConfig::end_point() const {
  // @@protoc_insertion_point(field_get:messagebus.MalamuteClientConfig.end_point)
  return end_point_.GetNoArena();
}
inline void MalamuteClientConfig::set_end_point(const ::std::string& value) {
  
  end_point_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messagebus.MalamuteClientConfig.end_point)
}
#if LANG_CXX11
inline void MalamuteClientConfig::set_end_point(::std::string&& value) {
  
  end_point_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messagebus.MalamuteClientConfig.end_point)
}
#endif
inline void MalamuteClientConfig::set_end_point(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  end_point_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messagebus.MalamuteClientConfig.end_point)
}
inline void MalamuteClientConfig::set_end_point(const char* value, size_t size) {
  
  end_point_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messagebus.MalamuteClientConfig.end_point)
}
inline ::std::string* MalamuteClientConfig::mutable_end_point() {
  
  // @@protoc_insertion_point(field_mutable:messagebus.MalamuteClientConfig.end_point)
  return end_point_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MalamuteClientConfig::release_end_point() {
  // @@protoc_insertion_point(field_release:messagebus.MalamuteClientConfig.end_point)
  
  return end_point_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MalamuteClientConfig::set_allocated_end_point(::std::string* end_point) {
  if (end_point != NULL) {
    
  } else {
    
  }
  end_point_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), end_point);
  // @@protoc_insertion_point(field_set_allocated:messagebus.MalamuteClientConfig.end_point)
}

// string agent_name = 2;
inline void MalamuteClientConfig::clear_agent_name() {
  agent_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MalamuteClientConfig::agent_name() const {
  // @@protoc_insertion_point(field_get:messagebus.MalamuteClientConfig.agent_name)
  return agent_name_.GetNoArena();
}
inline void MalamuteClientConfig::set_agent_name(const ::std::string& value) {
  
  agent_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messagebus.MalamuteClientConfig.agent_name)
}
#if LANG_CXX11
inline void MalamuteClientConfig::set_agent_name(::std::string&& value) {
  
  agent_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messagebus.MalamuteClientConfig.agent_name)
}
#endif
inline void MalamuteClientConfig::set_agent_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  agent_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messagebus.MalamuteClientConfig.agent_name)
}
inline void MalamuteClientConfig::set_agent_name(const char* value, size_t size) {
  
  agent_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messagebus.MalamuteClientConfig.agent_name)
}
inline ::std::string* MalamuteClientConfig::mutable_agent_name() {
  
  // @@protoc_insertion_point(field_mutable:messagebus.MalamuteClientConfig.agent_name)
  return agent_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MalamuteClientConfig::release_agent_name() {
  // @@protoc_insertion_point(field_release:messagebus.MalamuteClientConfig.agent_name)
  
  return agent_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MalamuteClientConfig::set_allocated_agent_name(::std::string* agent_name) {
  if (agent_name != NULL) {
    
  } else {
    
  }
  agent_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), agent_name);
  // @@protoc_insertion_point(field_set_allocated:messagebus.MalamuteClientConfig.agent_name)
}

// -------------------------------------------------------------------

// UnixSocketClientConfig

// string socket_path = 1;
inline void UnixSocketClientConfig::clear_socket_path() {
  socket_path_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UnixSocketClientConfig::socket_path() const {
  // @@protoc_insertion_point(field_get:messagebus.UnixSocketClientConfig.socket_path)
  return socket_path_.GetNoArena();
}
inline void UnixSocketClientConfig::set_socket_path(const ::std::string& value) {
  
  socket_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messagebus.UnixSocketClientConfig.socket_path)
}
#if LANG_CXX11
inline void UnixSocketClientConfig::set_socket_path(::std::string&& value) {
  
  socket_path_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messagebus.UnixSocketClientConfig.socket_path)
}
#endif
inline void UnixSocketClientConfig::set_socket_path(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  socket_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messagebus.UnixSocketClientConfig.socket_path)
}
inline void UnixSocketClientConfig::set_socket_path(const char* value, size_t size) {
  
  socket_path_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messagebus.UnixSocketClientConfig.socket_path)
}
inline ::std::string* UnixSocketClientConfig::mutable_socket_path() {
  
  // @@protoc_insertion_point(field_mutable:messagebus.UnixSocketClientConfig.socket_path)
  return socket_path_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UnixSocketClientConfig::release_socket_path() {
  // @@protoc_insertion_point(field_release:messagebus.UnixSocketClientConfig.socket_path)
  
  return socket_path_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UnixSocketClientConfig::set_allocated_socket_path(::std::string* socket_path) {
  if (socket_path != NULL) {
    
  } else {
    
  }
  socket_path_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), socket_path);
  // @@protoc_insertion_point(field_set_allocated:messagebus.UnixSocketClientConfig.socket_path)
}

// string agent_name = 2;
inline void UnixSocketClientConfig::clear_agent_name() {
  agent_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& UnixSocketClientConfig::agent_name() const {
  // @@protoc_insertion_point(field_get:messagebus.UnixSocketClientConfig.agent_name)
  return agent_name_.GetNoArena();
}
inline void UnixSocketClientConfig::set_agent_name(const ::std::string& value) {
  
  agent_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messagebus.UnixSocketClientConfig.agent_name)
}
#if LANG_CXX11
inline void UnixSocketClientConfig::set_agent_name(::std::string&& value) {
  
  agent_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messagebus.UnixSocketClientConfig.agent_name)
}
#endif
inline void UnixSocketClientConfig::set_agent_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  agent_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messagebus.UnixSocketClientConfig.agent_name)
}
inline void UnixSocketClientConfig::set_agent_name(const char* value, size_t size) {
  
  agent_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messagebus.UnixSocketClientConfig.agent_name)
}
inline ::std::string* UnixSocketClientConfig::mutable_agent_name() {
  
  // @@protoc_insertion_point(field_mutable:messagebus.UnixSocketClientConfig.agent_name)
  return agent_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* UnixSocketClientConfig::release_agent_name() {
  // @@protoc_insertion_point(field_release:messagebus.UnixSocketClientConfig.agent_name)
  
  return agent_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void UnixSocketClientConfig::set_allocated_agent_name(::std::string* agent_name) {
  if (agent_name != NULL) {
    
  } else {
    
  }
  agent_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), agent_name);
  // @@protoc_insertion_point(field_set_allocated:messagebus.UnixSocketClientConfig.agent_name)
}

// -------------------------------------------------------------------

// MessageBusConfig

// string queue_name = 1;
inline void MessageBusConfig::clear_queue_name() {
  queue_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MessageBusConfig::queue_name() const {
  // @@protoc_insertion_point(field_get:messagebus.MessageBusConfig.queue_name)
  return queue_name_.GetNoArena();
}
inline void MessageBusConfig::set_queue_name(const ::std::string& value) {
  
  queue_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:messagebus.MessageBusConfig.queue_name)
}
#if LANG_CXX11
inline void MessageBusConfig::set_queue_name(::std::string&& value) {
  
  queue_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:messagebus.MessageBusConfig.queue_name)
}
#endif
inline void MessageBusConfig::set_queue_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  queue_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:messagebus.MessageBusConfig.queue_name)
}
inline void MessageBusConfig::set_queue_name(const char* value, size_t size) {
  
  queue_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:messagebus.MessageBusConfig.queue_name)
}
inline ::std::string* MessageBusConfig::mutable_queue_name() {
  
  // @@protoc_insertion_point(field_mutable:messagebus.MessageBusConfig.queue_name)
  return queue_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageBusConfig::release_queue_name() {
  // @@protoc_insertion_point(field_release:messagebus.MessageBusConfig.queue_name)
  
  return queue_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageBusConfig::set_allocated_queue_name(::std::string* queue_name) {
  if (queue_name != NULL) {
    
  } else {
    
  }
  queue_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), queue_name);
  // @@protoc_insertion_point(field_set_allocated:messagebus.MessageBusConfig.queue_name)
}

// .messagebus.MalamuteClientConfig malamute_client_config = 2;
inline bool MessageBusConfig::has_malamute_client_config() const {
  return parameters_case() == kMalamuteClientConfig;
}
inline void MessageBusConfig::set_has_malamute_client_config() {
  _oneof_case_[0] = kMalamuteClientConfig;
}
inline void MessageBusConfig::clear_malamute_client_config() {
  if (has_malamute_client_config()) {
    delete parameters_.malamute_client_config_;
    clear_has_parameters();
  }
}
inline const ::messagebus::MalamuteClientConfig& MessageBusConfig::_internal_malamute_client_config() const {
  return *parameters_.malamute_client_config_;
}
inline ::messagebus::MalamuteClientConfig* MessageBusConfig::release_malamute_client_config() {
  // @@protoc_insertion_point(field_release:messagebus.MessageBusConfig.malamute_client_config)
  if (has_malamute_client_config()) {
    clear_has_parameters();
      ::messagebus::MalamuteClientConfig* temp = parameters_.malamute_client_config_;
    parameters_.malamute_client_config_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::messagebus::MalamuteClientConfig& MessageBusConfig::malamute_client_config() const {
  // @@protoc_insertion_point(field_get:messagebus.MessageBusConfig.malamute_client_config)
  return has_malamute_client_config()
      ? *parameters_.malamute_client_config_
      : *reinterpret_cast< ::messagebus::MalamuteClientConfig*>(&::messagebus::_MalamuteClientConfig_default_instance_);
}
inline ::messagebus::MalamuteClientConfig* MessageBusConfig::mutable_malamute_client_config() {
  if (!has_malamute_client_config()) {
    clear_parameters();
    set_has_malamute_client_config();
    parameters_.malamute_client_config_ = CreateMaybeMessage< ::messagebus::MalamuteClientConfig >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:messagebus.MessageBusConfig.malamute_client_config)
  return parameters_.malamute_client_config_;
}

// .messagebus.UnixSocketClientConfig unix_client_config = 3;
inline bool MessageBusConfig::has_unix_client_config() const {
  return parameters_case() == kUnixClientConfig;
}
inline void MessageBusConfig::set_has_unix_client_config() {
  _oneof_case_[0] = kUnixClientConfig;
}
inline void MessageBusConfig::clear_unix_client_config() {
  if (has_unix_client_config()) {
    delete parameters_.unix_client_config_;
    clear_has_parameters();
  }
}
inline const ::messagebus::UnixSocketClientConfig& MessageBusConfig::_internal_unix_client_config() const {
  return *parameters_.unix_client_config_;
}
inline ::messagebus::UnixSocketClientConfig* MessageBusConfig::release_unix_client_config() {
  // @@protoc_insertion_point(field_release:messagebus.MessageBusConfig.unix_client_config)
  if (has_unix_client_config()) {
    clear_has_parameters();
      ::messagebus::UnixSocketClientConfig* temp = parameters_.unix_client_config_;
    parameters_.unix_client_config_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline const ::messagebus::UnixSocketClientConfig& MessageBusConfig::unix_client_config() const {
  // @@protoc_insertion_point(field_get:messagebus.MessageBusConfig.unix_client_config)
  return has_unix_client_config()
      ? *parameters_.unix_client_config_
      : *reinterpret_cast< ::messagebus::UnixSocketClientConfig*>(&::messagebus::_UnixSocketClientConfig_default_instance_);
}
inline ::messagebus::UnixSocketClientConfig* MessageBusConfig::mutable_unix_client_config() {
  if (!has_unix_client_config()) {
    clear_parameters();
    set_has_unix_client_config();
    parameters_.unix_client_config_ = CreateMaybeMessage< ::messagebus::UnixSocketClientConfig >(
        GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(field_mutable:messagebus.MessageBusConfig.unix_client_config)
  return parameters_.unix_client_config_;
}

inline bool MessageBusConfig::has_parameters() const {
  return parameters_case() != PARAMETERS_NOT_SET;
}
inline void MessageBusConfig::clear_has_parameters() {
  _oneof_case_[0] = PARAMETERS_NOT_SET;
}
inline MessageBusConfig::ParametersCase MessageBusConfig::parameters_case() const {
  return MessageBusConfig::ParametersCase(_oneof_case_[0]);
}
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace messagebus

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_message_5fbus_5fconfig_2eproto
