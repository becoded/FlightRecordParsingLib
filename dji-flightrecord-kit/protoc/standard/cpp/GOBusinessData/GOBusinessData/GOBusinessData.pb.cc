// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GOBusinessData/GOBusinessData.proto

#include "GOBusinessData/GOBusinessData.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace DJIFRProto {
namespace Standard {
PROTOBUF_CONSTEXPR GOBusinessData::GOBusinessData(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.tips_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.warning_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.seriouswarning_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.gobusinessdata_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.version_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GOBusinessDataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GOBusinessDataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GOBusinessDataDefaultTypeInternal() {}
  union {
    GOBusinessData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GOBusinessDataDefaultTypeInternal _GOBusinessData_default_instance_;
}  // namespace Standard
}  // namespace DJIFRProto
static ::_pb::Metadata file_level_metadata_GOBusinessData_2fGOBusinessData_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GOBusinessData_2fGOBusinessData_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GOBusinessData_2fGOBusinessData_2eproto = nullptr;

const uint32_t TableStruct_GOBusinessData_2fGOBusinessData_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, _impl_.version_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, _impl_.tips_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, _impl_.warning_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, _impl_.seriouswarning_),
  PROTOBUF_FIELD_OFFSET(::DJIFRProto::Standard::GOBusinessData, _impl_.gobusinessdata_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::DJIFRProto::Standard::GOBusinessData)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::DJIFRProto::Standard::_GOBusinessData_default_instance_._instance,
};

const char descriptor_table_protodef_GOBusinessData_2fGOBusinessData_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#GOBusinessData/GOBusinessData.proto\022\023D"
  "JIFRProto.Standard\"p\n\016GOBusinessData\022\017\n\007"
  "version\030\001 \001(\r\022\014\n\004tips\030\002 \001(\t\022\017\n\007warning\030\003"
  " \001(\t\022\026\n\016seriousWarning\030\004 \001(\t\022\026\n\016goBusine"
  "ssData\030\005 \001(\014B\r\242\002\nDJIFRProtob\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_GOBusinessData_2fGOBusinessData_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GOBusinessData_2fGOBusinessData_2eproto = {
    false, false, 195, descriptor_table_protodef_GOBusinessData_2fGOBusinessData_2eproto,
    "GOBusinessData/GOBusinessData.proto",
    &descriptor_table_GOBusinessData_2fGOBusinessData_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_GOBusinessData_2fGOBusinessData_2eproto::offsets,
    file_level_metadata_GOBusinessData_2fGOBusinessData_2eproto, file_level_enum_descriptors_GOBusinessData_2fGOBusinessData_2eproto,
    file_level_service_descriptors_GOBusinessData_2fGOBusinessData_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GOBusinessData_2fGOBusinessData_2eproto_getter() {
  return &descriptor_table_GOBusinessData_2fGOBusinessData_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GOBusinessData_2fGOBusinessData_2eproto(&descriptor_table_GOBusinessData_2fGOBusinessData_2eproto);
namespace DJIFRProto {
namespace Standard {

// ===================================================================

class GOBusinessData::_Internal {
 public:
};

GOBusinessData::GOBusinessData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:DJIFRProto.Standard.GOBusinessData)
}
GOBusinessData::GOBusinessData(const GOBusinessData& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GOBusinessData* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.tips_){}
    , decltype(_impl_.warning_){}
    , decltype(_impl_.seriouswarning_){}
    , decltype(_impl_.gobusinessdata_){}
    , decltype(_impl_.version_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.tips_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.tips_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_tips().empty()) {
    _this->_impl_.tips_.Set(from._internal_tips(), 
      _this->GetArenaForAllocation());
  }
  _impl_.warning_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.warning_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_warning().empty()) {
    _this->_impl_.warning_.Set(from._internal_warning(), 
      _this->GetArenaForAllocation());
  }
  _impl_.seriouswarning_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.seriouswarning_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_seriouswarning().empty()) {
    _this->_impl_.seriouswarning_.Set(from._internal_seriouswarning(), 
      _this->GetArenaForAllocation());
  }
  _impl_.gobusinessdata_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.gobusinessdata_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_gobusinessdata().empty()) {
    _this->_impl_.gobusinessdata_.Set(from._internal_gobusinessdata(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.version_ = from._impl_.version_;
  // @@protoc_insertion_point(copy_constructor:DJIFRProto.Standard.GOBusinessData)
}

inline void GOBusinessData::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.tips_){}
    , decltype(_impl_.warning_){}
    , decltype(_impl_.seriouswarning_){}
    , decltype(_impl_.gobusinessdata_){}
    , decltype(_impl_.version_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.tips_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.tips_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.warning_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.warning_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.seriouswarning_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.seriouswarning_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.gobusinessdata_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.gobusinessdata_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GOBusinessData::~GOBusinessData() {
  // @@protoc_insertion_point(destructor:DJIFRProto.Standard.GOBusinessData)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GOBusinessData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.tips_.Destroy();
  _impl_.warning_.Destroy();
  _impl_.seriouswarning_.Destroy();
  _impl_.gobusinessdata_.Destroy();
}

void GOBusinessData::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GOBusinessData::Clear() {
// @@protoc_insertion_point(message_clear_start:DJIFRProto.Standard.GOBusinessData)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.tips_.ClearToEmpty();
  _impl_.warning_.ClearToEmpty();
  _impl_.seriouswarning_.ClearToEmpty();
  _impl_.gobusinessdata_.ClearToEmpty();
  _impl_.version_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GOBusinessData::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 version = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.version_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string tips = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_tips();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "DJIFRProto.Standard.GOBusinessData.tips"));
        } else
          goto handle_unusual;
        continue;
      // string warning = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_warning();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "DJIFRProto.Standard.GOBusinessData.warning"));
        } else
          goto handle_unusual;
        continue;
      // string seriousWarning = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_seriouswarning();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "DJIFRProto.Standard.GOBusinessData.seriousWarning"));
        } else
          goto handle_unusual;
        continue;
      // bytes goBusinessData = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_gobusinessdata();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* GOBusinessData::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:DJIFRProto.Standard.GOBusinessData)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 version = 1;
  if (this->_internal_version() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_version(), target);
  }

  // string tips = 2;
  if (!this->_internal_tips().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_tips().data(), static_cast<int>(this->_internal_tips().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "DJIFRProto.Standard.GOBusinessData.tips");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_tips(), target);
  }

  // string warning = 3;
  if (!this->_internal_warning().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_warning().data(), static_cast<int>(this->_internal_warning().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "DJIFRProto.Standard.GOBusinessData.warning");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_warning(), target);
  }

  // string seriousWarning = 4;
  if (!this->_internal_seriouswarning().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_seriouswarning().data(), static_cast<int>(this->_internal_seriouswarning().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "DJIFRProto.Standard.GOBusinessData.seriousWarning");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_seriouswarning(), target);
  }

  // bytes goBusinessData = 5;
  if (!this->_internal_gobusinessdata().empty()) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_gobusinessdata(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:DJIFRProto.Standard.GOBusinessData)
  return target;
}

size_t GOBusinessData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:DJIFRProto.Standard.GOBusinessData)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string tips = 2;
  if (!this->_internal_tips().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_tips());
  }

  // string warning = 3;
  if (!this->_internal_warning().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_warning());
  }

  // string seriousWarning = 4;
  if (!this->_internal_seriouswarning().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_seriouswarning());
  }

  // bytes goBusinessData = 5;
  if (!this->_internal_gobusinessdata().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_gobusinessdata());
  }

  // uint32 version = 1;
  if (this->_internal_version() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_version());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GOBusinessData::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GOBusinessData::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GOBusinessData::GetClassData() const { return &_class_data_; }


void GOBusinessData::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GOBusinessData*>(&to_msg);
  auto& from = static_cast<const GOBusinessData&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:DJIFRProto.Standard.GOBusinessData)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_tips().empty()) {
    _this->_internal_set_tips(from._internal_tips());
  }
  if (!from._internal_warning().empty()) {
    _this->_internal_set_warning(from._internal_warning());
  }
  if (!from._internal_seriouswarning().empty()) {
    _this->_internal_set_seriouswarning(from._internal_seriouswarning());
  }
  if (!from._internal_gobusinessdata().empty()) {
    _this->_internal_set_gobusinessdata(from._internal_gobusinessdata());
  }
  if (from._internal_version() != 0) {
    _this->_internal_set_version(from._internal_version());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GOBusinessData::CopyFrom(const GOBusinessData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:DJIFRProto.Standard.GOBusinessData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GOBusinessData::IsInitialized() const {
  return true;
}

void GOBusinessData::InternalSwap(GOBusinessData* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.tips_, lhs_arena,
      &other->_impl_.tips_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.warning_, lhs_arena,
      &other->_impl_.warning_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.seriouswarning_, lhs_arena,
      &other->_impl_.seriouswarning_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.gobusinessdata_, lhs_arena,
      &other->_impl_.gobusinessdata_, rhs_arena
  );
  swap(_impl_.version_, other->_impl_.version_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GOBusinessData::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GOBusinessData_2fGOBusinessData_2eproto_getter, &descriptor_table_GOBusinessData_2fGOBusinessData_2eproto_once,
      file_level_metadata_GOBusinessData_2fGOBusinessData_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Standard
}  // namespace DJIFRProto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::DJIFRProto::Standard::GOBusinessData*
Arena::CreateMaybeMessage< ::DJIFRProto::Standard::GOBusinessData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::DJIFRProto::Standard::GOBusinessData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
