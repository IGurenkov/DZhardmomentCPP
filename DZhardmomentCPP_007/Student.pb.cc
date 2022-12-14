// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Student.proto

#include "Student.pb.h"

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

namespace MyNameSpace {
PROTOBUF_CONSTEXPR FullName::FullName(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.lastname_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.fathername_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}} {}
struct FullNameDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FullNameDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FullNameDefaultTypeInternal() {}
  union {
    FullName _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FullNameDefaultTypeInternal _FullName_default_instance_;
PROTOBUF_CONSTEXPR Student::Student(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.points_)*/{}
  , /*decltype(_impl_._points_cached_byte_size_)*/{0}
  , /*decltype(_impl_.fullname_)*/nullptr
  , /*decltype(_impl_.pointsaverage_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StudentDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StudentDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StudentDefaultTypeInternal() {}
  union {
    Student _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StudentDefaultTypeInternal _Student_default_instance_;
PROTOBUF_CONSTEXPR StudentsGroup::StudentsGroup(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.student_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StudentsGroupDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StudentsGroupDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StudentsGroupDefaultTypeInternal() {}
  union {
    StudentsGroup _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StudentsGroupDefaultTypeInternal _StudentsGroup_default_instance_;
}  // namespace MyNameSpace
static ::_pb::Metadata file_level_metadata_Student_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Student_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Student_2eproto = nullptr;

const uint32_t TableStruct_Student_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::FullName, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::FullName, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::FullName, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::FullName, _impl_.lastname_),
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::FullName, _impl_.fathername_),
  ~0u,
  ~0u,
  0,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::Student, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::Student, _impl_.fullname_),
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::Student, _impl_.points_),
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::Student, _impl_.pointsaverage_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::StudentsGroup, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::MyNameSpace::StudentsGroup, _impl_.student_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::MyNameSpace::FullName)},
  { 12, -1, -1, sizeof(::MyNameSpace::Student)},
  { 21, -1, -1, sizeof(::MyNameSpace::StudentsGroup)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::MyNameSpace::_FullName_default_instance_._instance,
  &::MyNameSpace::_Student_default_instance_._instance,
  &::MyNameSpace::_StudentsGroup_default_instance_._instance,
};

const char descriptor_table_protodef_Student_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rStudent.proto\022\013MyNameSpace\"R\n\010FullName"
  "\022\014\n\004Name\030\001 \001(\t\022\020\n\010LastName\030\002 \001(\t\022\027\n\nFath"
  "erName\030\003 \001(\tH\000\210\001\001B\r\n\013_FatherName\"Y\n\007Stud"
  "ent\022\'\n\010fullname\030\001 \001(\0132\025.MyNameSpace.Full"
  "Name\022\016\n\006Points\030\002 \003(\005\022\025\n\rPointsAverage\030\003 "
  "\001(\002\"6\n\rStudentsGroup\022%\n\007student\030\001 \003(\0132\024."
  "MyNameSpace.Studentb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Student_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Student_2eproto = {
    false, false, 267, descriptor_table_protodef_Student_2eproto,
    "Student.proto",
    &descriptor_table_Student_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_Student_2eproto::offsets,
    file_level_metadata_Student_2eproto, file_level_enum_descriptors_Student_2eproto,
    file_level_service_descriptors_Student_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Student_2eproto_getter() {
  return &descriptor_table_Student_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Student_2eproto(&descriptor_table_Student_2eproto);
namespace MyNameSpace {

// ===================================================================

class FullName::_Internal {
 public:
  using HasBits = decltype(std::declval<FullName>()._impl_._has_bits_);
  static void set_has_fathername(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

FullName::FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:MyNameSpace.FullName)
}
FullName::FullName(const FullName& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  FullName* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.name_){}
    , decltype(_impl_.lastname_){}
    , decltype(_impl_.fathername_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  _impl_.lastname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.lastname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_lastname().empty()) {
    _this->_impl_.lastname_.Set(from._internal_lastname(), 
      _this->GetArenaForAllocation());
  }
  _impl_.fathername_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.fathername_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_fathername()) {
    _this->_impl_.fathername_.Set(from._internal_fathername(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:MyNameSpace.FullName)
}

inline void FullName::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.name_){}
    , decltype(_impl_.lastname_){}
    , decltype(_impl_.fathername_){}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.lastname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.lastname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.fathername_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.fathername_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

FullName::~FullName() {
  // @@protoc_insertion_point(destructor:MyNameSpace.FullName)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FullName::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
  _impl_.lastname_.Destroy();
  _impl_.fathername_.Destroy();
}

void FullName::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FullName::Clear() {
// @@protoc_insertion_point(message_clear_start:MyNameSpace.FullName)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _impl_.lastname_.ClearToEmpty();
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.fathername_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FullName::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string Name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "MyNameSpace.FullName.Name"));
        } else
          goto handle_unusual;
        continue;
      // string LastName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_lastname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "MyNameSpace.FullName.LastName"));
        } else
          goto handle_unusual;
        continue;
      // optional string FatherName = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_fathername();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "MyNameSpace.FullName.FatherName"));
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
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FullName::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MyNameSpace.FullName)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string Name = 1;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "MyNameSpace.FullName.Name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // string LastName = 2;
  if (!this->_internal_lastname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_lastname().data(), static_cast<int>(this->_internal_lastname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "MyNameSpace.FullName.LastName");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_lastname(), target);
  }

  // optional string FatherName = 3;
  if (_internal_has_fathername()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_fathername().data(), static_cast<int>(this->_internal_fathername().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "MyNameSpace.FullName.FatherName");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_fathername(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MyNameSpace.FullName)
  return target;
}

size_t FullName::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MyNameSpace.FullName)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string Name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // string LastName = 2;
  if (!this->_internal_lastname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_lastname());
  }

  // optional string FatherName = 3;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_fathername());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FullName::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FullName::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FullName::GetClassData() const { return &_class_data_; }


void FullName::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FullName*>(&to_msg);
  auto& from = static_cast<const FullName&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:MyNameSpace.FullName)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_lastname().empty()) {
    _this->_internal_set_lastname(from._internal_lastname());
  }
  if (from._internal_has_fathername()) {
    _this->_internal_set_fathername(from._internal_fathername());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FullName::CopyFrom(const FullName& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MyNameSpace.FullName)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FullName::IsInitialized() const {
  return true;
}

void FullName::InternalSwap(FullName* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.lastname_, lhs_arena,
      &other->_impl_.lastname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.fathername_, lhs_arena,
      &other->_impl_.fathername_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata FullName::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Student_2eproto_getter, &descriptor_table_Student_2eproto_once,
      file_level_metadata_Student_2eproto[0]);
}

// ===================================================================

class Student::_Internal {
 public:
  static const ::MyNameSpace::FullName& fullname(const Student* msg);
};

const ::MyNameSpace::FullName&
Student::_Internal::fullname(const Student* msg) {
  return *msg->_impl_.fullname_;
}
Student::Student(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:MyNameSpace.Student)
}
Student::Student(const Student& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Student* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.points_){from._impl_.points_}
    , /*decltype(_impl_._points_cached_byte_size_)*/{0}
    , decltype(_impl_.fullname_){nullptr}
    , decltype(_impl_.pointsaverage_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_fullname()) {
    _this->_impl_.fullname_ = new ::MyNameSpace::FullName(*from._impl_.fullname_);
  }
  _this->_impl_.pointsaverage_ = from._impl_.pointsaverage_;
  // @@protoc_insertion_point(copy_constructor:MyNameSpace.Student)
}

inline void Student::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.points_){arena}
    , /*decltype(_impl_._points_cached_byte_size_)*/{0}
    , decltype(_impl_.fullname_){nullptr}
    , decltype(_impl_.pointsaverage_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Student::~Student() {
  // @@protoc_insertion_point(destructor:MyNameSpace.Student)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Student::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.points_.~RepeatedField();
  if (this != internal_default_instance()) delete _impl_.fullname_;
}

void Student::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Student::Clear() {
// @@protoc_insertion_point(message_clear_start:MyNameSpace.Student)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.points_.Clear();
  if (GetArenaForAllocation() == nullptr && _impl_.fullname_ != nullptr) {
    delete _impl_.fullname_;
  }
  _impl_.fullname_ = nullptr;
  _impl_.pointsaverage_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Student::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .MyNameSpace.FullName fullname = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_fullname(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 Points = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_points(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 16) {
          _internal_add_points(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // float PointsAverage = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 29)) {
          _impl_.pointsaverage_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
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

uint8_t* Student::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MyNameSpace.Student)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .MyNameSpace.FullName fullname = 1;
  if (this->_internal_has_fullname()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::fullname(this),
        _Internal::fullname(this).GetCachedSize(), target, stream);
  }

  // repeated int32 Points = 2;
  {
    int byte_size = _impl_._points_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          2, _internal_points(), byte_size, target);
    }
  }

  // float PointsAverage = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_pointsaverage = this->_internal_pointsaverage();
  uint32_t raw_pointsaverage;
  memcpy(&raw_pointsaverage, &tmp_pointsaverage, sizeof(tmp_pointsaverage));
  if (raw_pointsaverage != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(3, this->_internal_pointsaverage(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MyNameSpace.Student)
  return target;
}

size_t Student::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MyNameSpace.Student)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 Points = 2;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.points_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._points_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // .MyNameSpace.FullName fullname = 1;
  if (this->_internal_has_fullname()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.fullname_);
  }

  // float PointsAverage = 3;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_pointsaverage = this->_internal_pointsaverage();
  uint32_t raw_pointsaverage;
  memcpy(&raw_pointsaverage, &tmp_pointsaverage, sizeof(tmp_pointsaverage));
  if (raw_pointsaverage != 0) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Student::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Student::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Student::GetClassData() const { return &_class_data_; }


void Student::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Student*>(&to_msg);
  auto& from = static_cast<const Student&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:MyNameSpace.Student)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.points_.MergeFrom(from._impl_.points_);
  if (from._internal_has_fullname()) {
    _this->_internal_mutable_fullname()->::MyNameSpace::FullName::MergeFrom(
        from._internal_fullname());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_pointsaverage = from._internal_pointsaverage();
  uint32_t raw_pointsaverage;
  memcpy(&raw_pointsaverage, &tmp_pointsaverage, sizeof(tmp_pointsaverage));
  if (raw_pointsaverage != 0) {
    _this->_internal_set_pointsaverage(from._internal_pointsaverage());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Student::CopyFrom(const Student& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MyNameSpace.Student)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Student::IsInitialized() const {
  return true;
}

void Student::InternalSwap(Student* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.points_.InternalSwap(&other->_impl_.points_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Student, _impl_.pointsaverage_)
      + sizeof(Student::_impl_.pointsaverage_)
      - PROTOBUF_FIELD_OFFSET(Student, _impl_.fullname_)>(
          reinterpret_cast<char*>(&_impl_.fullname_),
          reinterpret_cast<char*>(&other->_impl_.fullname_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Student::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Student_2eproto_getter, &descriptor_table_Student_2eproto_once,
      file_level_metadata_Student_2eproto[1]);
}

// ===================================================================

class StudentsGroup::_Internal {
 public:
};

StudentsGroup::StudentsGroup(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:MyNameSpace.StudentsGroup)
}
StudentsGroup::StudentsGroup(const StudentsGroup& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  StudentsGroup* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.student_){from._impl_.student_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:MyNameSpace.StudentsGroup)
}

inline void StudentsGroup::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.student_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

StudentsGroup::~StudentsGroup() {
  // @@protoc_insertion_point(destructor:MyNameSpace.StudentsGroup)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StudentsGroup::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.student_.~RepeatedPtrField();
}

void StudentsGroup::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StudentsGroup::Clear() {
// @@protoc_insertion_point(message_clear_start:MyNameSpace.StudentsGroup)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.student_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StudentsGroup::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .MyNameSpace.Student student = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_student(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

uint8_t* StudentsGroup::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MyNameSpace.StudentsGroup)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .MyNameSpace.Student student = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_student_size()); i < n; i++) {
    const auto& repfield = this->_internal_student(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MyNameSpace.StudentsGroup)
  return target;
}

size_t StudentsGroup::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MyNameSpace.StudentsGroup)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .MyNameSpace.Student student = 1;
  total_size += 1UL * this->_internal_student_size();
  for (const auto& msg : this->_impl_.student_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StudentsGroup::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StudentsGroup::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StudentsGroup::GetClassData() const { return &_class_data_; }


void StudentsGroup::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<StudentsGroup*>(&to_msg);
  auto& from = static_cast<const StudentsGroup&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:MyNameSpace.StudentsGroup)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.student_.MergeFrom(from._impl_.student_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StudentsGroup::CopyFrom(const StudentsGroup& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MyNameSpace.StudentsGroup)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StudentsGroup::IsInitialized() const {
  return true;
}

void StudentsGroup::InternalSwap(StudentsGroup* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.student_.InternalSwap(&other->_impl_.student_);
}

::PROTOBUF_NAMESPACE_ID::Metadata StudentsGroup::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Student_2eproto_getter, &descriptor_table_Student_2eproto_once,
      file_level_metadata_Student_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace MyNameSpace
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::MyNameSpace::FullName*
Arena::CreateMaybeMessage< ::MyNameSpace::FullName >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MyNameSpace::FullName >(arena);
}
template<> PROTOBUF_NOINLINE ::MyNameSpace::Student*
Arena::CreateMaybeMessage< ::MyNameSpace::Student >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MyNameSpace::Student >(arena);
}
template<> PROTOBUF_NOINLINE ::MyNameSpace::StudentsGroup*
Arena::CreateMaybeMessage< ::MyNameSpace::StudentsGroup >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MyNameSpace::StudentsGroup >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
