// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: o_net_base.proto

#ifndef PROTOBUF_o_5fnet_5fbase_2eproto__INCLUDED
#define PROTOBUF_o_5fnet_5fbase_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace oo {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_o_5fnet_5fbase_2eproto();
void protobuf_AssignDesc_o_5fnet_5fbase_2eproto();
void protobuf_ShutdownFile_o_5fnet_5fbase_2eproto();

class proxy_pkg;

// ===================================================================

class proxy_pkg : public ::google::protobuf::Message {
 public:
  proxy_pkg();
  virtual ~proxy_pkg();
  
  proxy_pkg(const proxy_pkg& from);
  
  inline proxy_pkg& operator=(const proxy_pkg& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const proxy_pkg& default_instance();
  
  void Swap(proxy_pkg* other);
  
  // implements Message ----------------------------------------------
  
  proxy_pkg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const proxy_pkg& from);
  void MergeFrom(const proxy_pkg& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required string from = 1;
  inline bool has_from() const;
  inline void clear_from();
  static const int kFromFieldNumber = 1;
  inline const ::std::string& from() const;
  inline void set_from(const ::std::string& value);
  inline void set_from(const char* value);
  inline void set_from(const char* value, size_t size);
  inline ::std::string* mutable_from();
  
  // required string to = 2;
  inline bool has_to() const;
  inline void clear_to();
  static const int kToFieldNumber = 2;
  inline const ::std::string& to() const;
  inline void set_to(const ::std::string& value);
  inline void set_to(const char* value);
  inline void set_to(const char* value, size_t size);
  inline ::std::string* mutable_to();
  
  // required string pkg_type = 3;
  inline bool has_pkg_type() const;
  inline void clear_pkg_type();
  static const int kPkgTypeFieldNumber = 3;
  inline const ::std::string& pkg_type() const;
  inline void set_pkg_type(const ::std::string& value);
  inline void set_pkg_type(const char* value);
  inline void set_pkg_type(const char* value, size_t size);
  inline ::std::string* mutable_pkg_type();
  
  // required string pkg_body = 4;
  inline bool has_pkg_body() const;
  inline void clear_pkg_body();
  static const int kPkgBodyFieldNumber = 4;
  inline const ::std::string& pkg_body() const;
  inline void set_pkg_body(const ::std::string& value);
  inline void set_pkg_body(const char* value);
  inline void set_pkg_body(const char* value, size_t size);
  inline ::std::string* mutable_pkg_body();
  
  // @@protoc_insertion_point(class_scope:oo.proto.proxy_pkg)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::std::string* from_;
  static const ::std::string _default_from_;
  ::std::string* to_;
  static const ::std::string _default_to_;
  ::std::string* pkg_type_;
  static const ::std::string _default_pkg_type_;
  ::std::string* pkg_body_;
  static const ::std::string _default_pkg_body_;
  friend void  protobuf_AddDesc_o_5fnet_5fbase_2eproto();
  friend void protobuf_AssignDesc_o_5fnet_5fbase_2eproto();
  friend void protobuf_ShutdownFile_o_5fnet_5fbase_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static proxy_pkg* default_instance_;
};
// ===================================================================


// ===================================================================

// proxy_pkg

// required string from = 1;
inline bool proxy_pkg::has_from() const {
  return _has_bit(0);
}
inline void proxy_pkg::clear_from() {
  if (from_ != &_default_from_) {
    from_->clear();
  }
  _clear_bit(0);
}
inline const ::std::string& proxy_pkg::from() const {
  return *from_;
}
inline void proxy_pkg::set_from(const ::std::string& value) {
  _set_bit(0);
  if (from_ == &_default_from_) {
    from_ = new ::std::string;
  }
  from_->assign(value);
}
inline void proxy_pkg::set_from(const char* value) {
  _set_bit(0);
  if (from_ == &_default_from_) {
    from_ = new ::std::string;
  }
  from_->assign(value);
}
inline void proxy_pkg::set_from(const char* value, size_t size) {
  _set_bit(0);
  if (from_ == &_default_from_) {
    from_ = new ::std::string;
  }
  from_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* proxy_pkg::mutable_from() {
  _set_bit(0);
  if (from_ == &_default_from_) {
    from_ = new ::std::string;
  }
  return from_;
}

// required string to = 2;
inline bool proxy_pkg::has_to() const {
  return _has_bit(1);
}
inline void proxy_pkg::clear_to() {
  if (to_ != &_default_to_) {
    to_->clear();
  }
  _clear_bit(1);
}
inline const ::std::string& proxy_pkg::to() const {
  return *to_;
}
inline void proxy_pkg::set_to(const ::std::string& value) {
  _set_bit(1);
  if (to_ == &_default_to_) {
    to_ = new ::std::string;
  }
  to_->assign(value);
}
inline void proxy_pkg::set_to(const char* value) {
  _set_bit(1);
  if (to_ == &_default_to_) {
    to_ = new ::std::string;
  }
  to_->assign(value);
}
inline void proxy_pkg::set_to(const char* value, size_t size) {
  _set_bit(1);
  if (to_ == &_default_to_) {
    to_ = new ::std::string;
  }
  to_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* proxy_pkg::mutable_to() {
  _set_bit(1);
  if (to_ == &_default_to_) {
    to_ = new ::std::string;
  }
  return to_;
}

// required string pkg_type = 3;
inline bool proxy_pkg::has_pkg_type() const {
  return _has_bit(2);
}
inline void proxy_pkg::clear_pkg_type() {
  if (pkg_type_ != &_default_pkg_type_) {
    pkg_type_->clear();
  }
  _clear_bit(2);
}
inline const ::std::string& proxy_pkg::pkg_type() const {
  return *pkg_type_;
}
inline void proxy_pkg::set_pkg_type(const ::std::string& value) {
  _set_bit(2);
  if (pkg_type_ == &_default_pkg_type_) {
    pkg_type_ = new ::std::string;
  }
  pkg_type_->assign(value);
}
inline void proxy_pkg::set_pkg_type(const char* value) {
  _set_bit(2);
  if (pkg_type_ == &_default_pkg_type_) {
    pkg_type_ = new ::std::string;
  }
  pkg_type_->assign(value);
}
inline void proxy_pkg::set_pkg_type(const char* value, size_t size) {
  _set_bit(2);
  if (pkg_type_ == &_default_pkg_type_) {
    pkg_type_ = new ::std::string;
  }
  pkg_type_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* proxy_pkg::mutable_pkg_type() {
  _set_bit(2);
  if (pkg_type_ == &_default_pkg_type_) {
    pkg_type_ = new ::std::string;
  }
  return pkg_type_;
}

// required string pkg_body = 4;
inline bool proxy_pkg::has_pkg_body() const {
  return _has_bit(3);
}
inline void proxy_pkg::clear_pkg_body() {
  if (pkg_body_ != &_default_pkg_body_) {
    pkg_body_->clear();
  }
  _clear_bit(3);
}
inline const ::std::string& proxy_pkg::pkg_body() const {
  return *pkg_body_;
}
inline void proxy_pkg::set_pkg_body(const ::std::string& value) {
  _set_bit(3);
  if (pkg_body_ == &_default_pkg_body_) {
    pkg_body_ = new ::std::string;
  }
  pkg_body_->assign(value);
}
inline void proxy_pkg::set_pkg_body(const char* value) {
  _set_bit(3);
  if (pkg_body_ == &_default_pkg_body_) {
    pkg_body_ = new ::std::string;
  }
  pkg_body_->assign(value);
}
inline void proxy_pkg::set_pkg_body(const char* value, size_t size) {
  _set_bit(3);
  if (pkg_body_ == &_default_pkg_body_) {
    pkg_body_ = new ::std::string;
  }
  pkg_body_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* proxy_pkg::mutable_pkg_body() {
  _set_bit(3);
  if (pkg_body_ == &_default_pkg_body_) {
    pkg_body_ = new ::std::string;
  }
  return pkg_body_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace oo

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_o_5fnet_5fbase_2eproto__INCLUDED
