// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ptos/s_buy_item.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* s_buy_item_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  s_buy_item_reflection_ = NULL;
const ::google::protobuf::Descriptor* s_buy_item_PhoneNumber_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  s_buy_item_PhoneNumber_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* s_buy_item_PhoneType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_ptos_2fs_5fbuy_5fitem_2eproto() {
  protobuf_AddDesc_ptos_2fs_5fbuy_5fitem_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ptos/s_buy_item.proto");
  GOOGLE_CHECK(file != NULL);
  s_buy_item_descriptor_ = file->message_type(0);
  static const int s_buy_item_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(s_buy_item, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(s_buy_item, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(s_buy_item, email_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(s_buy_item, phone_),
  };
  s_buy_item_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      s_buy_item_descriptor_,
      s_buy_item::default_instance_,
      s_buy_item_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(s_buy_item, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(s_buy_item, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(s_buy_item));
  s_buy_item_PhoneNumber_descriptor_ = s_buy_item_descriptor_->nested_type(0);
  static const int s_buy_item_PhoneNumber_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(s_buy_item_PhoneNumber, number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(s_buy_item_PhoneNumber, type_),
  };
  s_buy_item_PhoneNumber_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      s_buy_item_PhoneNumber_descriptor_,
      s_buy_item_PhoneNumber::default_instance_,
      s_buy_item_PhoneNumber_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(s_buy_item_PhoneNumber, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(s_buy_item_PhoneNumber, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(s_buy_item_PhoneNumber));
  s_buy_item_PhoneType_descriptor_ = s_buy_item_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ptos_2fs_5fbuy_5fitem_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    s_buy_item_descriptor_, &s_buy_item::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    s_buy_item_PhoneNumber_descriptor_, &s_buy_item_PhoneNumber::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ptos_2fs_5fbuy_5fitem_2eproto() {
  delete s_buy_item::default_instance_;
  delete s_buy_item_reflection_;
  delete s_buy_item_PhoneNumber::default_instance_;
  delete s_buy_item_PhoneNumber_reflection_;
}

void protobuf_AddDesc_ptos_2fs_5fbuy_5fitem_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025ptos/s_buy_item.proto\"\324\001\n\ns_buy_item\022\014"
    "\n\004name\030\001 \002(\t\022\n\n\002id\030\002 \002(\005\022\r\n\005email\030\003 \001(\t\022"
    "&\n\005phone\030\004 \003(\0132\027.s_buy_item.PhoneNumber\032"
    "H\n\013PhoneNumber\022\016\n\006number\030\001 \002(\t\022)\n\004type\030\002"
    " \001(\0162\025.s_buy_item.PhoneType:\004HOME\"+\n\tPho"
    "neType\022\n\n\006MOBILE\020\000\022\010\n\004HOME\020\001\022\010\n\004WORK\020\002", 238);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ptos/s_buy_item.proto", &protobuf_RegisterTypes);
  s_buy_item::default_instance_ = new s_buy_item();
  s_buy_item_PhoneNumber::default_instance_ = new s_buy_item_PhoneNumber();
  s_buy_item::default_instance_->InitAsDefaultInstance();
  s_buy_item_PhoneNumber::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ptos_2fs_5fbuy_5fitem_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ptos_2fs_5fbuy_5fitem_2eproto {
  StaticDescriptorInitializer_ptos_2fs_5fbuy_5fitem_2eproto() {
    protobuf_AddDesc_ptos_2fs_5fbuy_5fitem_2eproto();
  }
} static_descriptor_initializer_ptos_2fs_5fbuy_5fitem_2eproto_;


// ===================================================================

const ::google::protobuf::EnumDescriptor* s_buy_item_PhoneType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return s_buy_item_PhoneType_descriptor_;
}
bool s_buy_item_PhoneType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const s_buy_item_PhoneType s_buy_item::MOBILE;
const s_buy_item_PhoneType s_buy_item::HOME;
const s_buy_item_PhoneType s_buy_item::WORK;
const s_buy_item_PhoneType s_buy_item::PhoneType_MIN;
const s_buy_item_PhoneType s_buy_item::PhoneType_MAX;
const int s_buy_item::PhoneType_ARRAYSIZE;
#endif  // _MSC_VER
const ::std::string s_buy_item_PhoneNumber::_default_number_;
#ifndef _MSC_VER
const int s_buy_item_PhoneNumber::kNumberFieldNumber;
const int s_buy_item_PhoneNumber::kTypeFieldNumber;
#endif  // !_MSC_VER

s_buy_item_PhoneNumber::s_buy_item_PhoneNumber()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void s_buy_item_PhoneNumber::InitAsDefaultInstance() {
}

s_buy_item_PhoneNumber::s_buy_item_PhoneNumber(const s_buy_item_PhoneNumber& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void s_buy_item_PhoneNumber::SharedCtor() {
  _cached_size_ = 0;
  number_ = const_cast< ::std::string*>(&_default_number_);
  type_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

s_buy_item_PhoneNumber::~s_buy_item_PhoneNumber() {
  SharedDtor();
}

void s_buy_item_PhoneNumber::SharedDtor() {
  if (number_ != &_default_number_) {
    delete number_;
  }
  if (this != default_instance_) {
  }
}

void s_buy_item_PhoneNumber::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* s_buy_item_PhoneNumber::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return s_buy_item_PhoneNumber_descriptor_;
}

const s_buy_item_PhoneNumber& s_buy_item_PhoneNumber::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ptos_2fs_5fbuy_5fitem_2eproto();  return *default_instance_;
}

s_buy_item_PhoneNumber* s_buy_item_PhoneNumber::default_instance_ = NULL;

s_buy_item_PhoneNumber* s_buy_item_PhoneNumber::New() const {
  return new s_buy_item_PhoneNumber;
}

void s_buy_item_PhoneNumber::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (number_ != &_default_number_) {
        number_->clear();
      }
    }
    type_ = 1;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool s_buy_item_PhoneNumber::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string number = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_number()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->number().data(), this->number().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_type;
        break;
      }
      
      // optional .s_buy_item.PhoneType type = 2 [default = HOME];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::s_buy_item_PhoneType_IsValid(value)) {
            set_type(static_cast< ::s_buy_item_PhoneType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(2, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void s_buy_item_PhoneNumber::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string number = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->number().data(), this->number().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->number(), output);
  }
  
  // optional .s_buy_item.PhoneType type = 2 [default = HOME];
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* s_buy_item_PhoneNumber::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string number = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->number().data(), this->number().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->number(), target);
  }
  
  // optional .s_buy_item.PhoneType type = 2 [default = HOME];
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int s_buy_item_PhoneNumber::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string number = 1;
    if (has_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->number());
    }
    
    // optional .s_buy_item.PhoneType type = 2 [default = HOME];
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void s_buy_item_PhoneNumber::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const s_buy_item_PhoneNumber* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const s_buy_item_PhoneNumber*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void s_buy_item_PhoneNumber::MergeFrom(const s_buy_item_PhoneNumber& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_number(from.number());
    }
    if (from._has_bit(1)) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void s_buy_item_PhoneNumber::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void s_buy_item_PhoneNumber::CopyFrom(const s_buy_item_PhoneNumber& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool s_buy_item_PhoneNumber::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  
  return true;
}

void s_buy_item_PhoneNumber::Swap(s_buy_item_PhoneNumber* other) {
  if (other != this) {
    std::swap(number_, other->number_);
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata s_buy_item_PhoneNumber::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = s_buy_item_PhoneNumber_descriptor_;
  metadata.reflection = s_buy_item_PhoneNumber_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

const ::std::string s_buy_item::_default_name_;
const ::std::string s_buy_item::_default_email_;
#ifndef _MSC_VER
const int s_buy_item::kNameFieldNumber;
const int s_buy_item::kIdFieldNumber;
const int s_buy_item::kEmailFieldNumber;
const int s_buy_item::kPhoneFieldNumber;
#endif  // !_MSC_VER

s_buy_item::s_buy_item()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void s_buy_item::InitAsDefaultInstance() {
}

s_buy_item::s_buy_item(const s_buy_item& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void s_buy_item::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&_default_name_);
  id_ = 0;
  email_ = const_cast< ::std::string*>(&_default_email_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

s_buy_item::~s_buy_item() {
  SharedDtor();
}

void s_buy_item::SharedDtor() {
  if (name_ != &_default_name_) {
    delete name_;
  }
  if (email_ != &_default_email_) {
    delete email_;
  }
  if (this != default_instance_) {
  }
}

void s_buy_item::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* s_buy_item::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return s_buy_item_descriptor_;
}

const s_buy_item& s_buy_item::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ptos_2fs_5fbuy_5fitem_2eproto();  return *default_instance_;
}

s_buy_item* s_buy_item::default_instance_ = NULL;

s_buy_item* s_buy_item::New() const {
  return new s_buy_item;
}

void s_buy_item::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (name_ != &_default_name_) {
        name_->clear();
      }
    }
    id_ = 0;
    if (_has_bit(2)) {
      if (email_ != &_default_email_) {
        email_->clear();
      }
    }
  }
  phone_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool s_buy_item::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_id;
        break;
      }
      
      // required int32 id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          _set_bit(1);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_email;
        break;
      }
      
      // optional string email = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_email:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_email()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->email().data(), this->email().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_phone;
        break;
      }
      
      // repeated .s_buy_item.PhoneNumber phone = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_phone:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_phone()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_phone;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void s_buy_item::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string name = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }
  
  // required int32 id = 2;
  if (_has_bit(1)) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }
  
  // optional string email = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->email(), output);
  }
  
  // repeated .s_buy_item.PhoneNumber phone = 4;
  for (int i = 0; i < this->phone_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->phone(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* s_buy_item::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string name = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }
  
  // required int32 id = 2;
  if (_has_bit(1)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }
  
  // optional string email = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->email().data(), this->email().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->email(), target);
  }
  
  // repeated .s_buy_item.PhoneNumber phone = 4;
  for (int i = 0; i < this->phone_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->phone(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int s_buy_item::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }
    
    // required int32 id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }
    
    // optional string email = 3;
    if (has_email()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->email());
    }
    
  }
  // repeated .s_buy_item.PhoneNumber phone = 4;
  total_size += 1 * this->phone_size();
  for (int i = 0; i < this->phone_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->phone(i));
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void s_buy_item::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const s_buy_item* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const s_buy_item*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void s_buy_item::MergeFrom(const s_buy_item& from) {
  GOOGLE_CHECK_NE(&from, this);
  phone_.MergeFrom(from.phone_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      set_name(from.name());
    }
    if (from._has_bit(1)) {
      set_id(from.id());
    }
    if (from._has_bit(2)) {
      set_email(from.email());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void s_buy_item::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void s_buy_item::CopyFrom(const s_buy_item& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool s_buy_item::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  for (int i = 0; i < phone_size(); i++) {
    if (!this->phone(i).IsInitialized()) return false;
  }
  return true;
}

void s_buy_item::Swap(s_buy_item* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(id_, other->id_);
    std::swap(email_, other->email_);
    phone_.Swap(&other->phone_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata s_buy_item::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = s_buy_item_descriptor_;
  metadata.reflection = s_buy_item_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
