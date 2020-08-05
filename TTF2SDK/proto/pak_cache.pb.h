// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pak_cache.proto

#ifndef PROTOBUF_pak_5fcache_2eproto__INCLUDED
#define PROTOBUF_pak_5fcache_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_pak_5fcache_2eproto {
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
void InitDefaultsMaterialDataImpl();
void InitDefaultsMaterialData();
void InitDefaultsPakCacheImpl();
void InitDefaultsPakCache();
inline void InitDefaults() {
  InitDefaultsMaterialData();
  InitDefaultsPakCache();
}
}  // namespace protobuf_pak_5fcache_2eproto
namespace ttf2sdk {
class MaterialData;
class MaterialDataDefaultTypeInternal;
extern MaterialDataDefaultTypeInternal _MaterialData_default_instance_;
class PakCache;
class PakCacheDefaultTypeInternal;
extern PakCacheDefaultTypeInternal _PakCache_default_instance_;
}  // namespace ttf2sdk
namespace ttf2sdk {

// ===================================================================

class MaterialData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ttf2sdk.MaterialData) */ {
 public:
  MaterialData();
  virtual ~MaterialData();

  MaterialData(const MaterialData& from);

  inline MaterialData& operator=(const MaterialData& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  MaterialData(MaterialData&& from) noexcept
    : MaterialData() {
    *this = ::std::move(from);
  }

  inline MaterialData& operator=(MaterialData&& from) noexcept {
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
  static const MaterialData& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MaterialData* internal_default_instance() {
    return reinterpret_cast<const MaterialData*>(
               &_MaterialData_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(MaterialData* other);
  friend void swap(MaterialData& a, MaterialData& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline MaterialData* New() const PROTOBUF_FINAL { return New(NULL); }

  MaterialData* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const MaterialData& from);
  void MergeFrom(const MaterialData& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(MaterialData* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated string pakFiles = 2;
  int pakfiles_size() const;
  void clear_pakfiles();
  static const int kPakFilesFieldNumber = 2;
  const ::std::string& pakfiles(int index) const;
  ::std::string* mutable_pakfiles(int index);
  void set_pakfiles(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_pakfiles(int index, ::std::string&& value);
  #endif
  void set_pakfiles(int index, const char* value);
  void set_pakfiles(int index, const char* value, size_t size);
  ::std::string* add_pakfiles();
  void add_pakfiles(const ::std::string& value);
  #if LANG_CXX11
  void add_pakfiles(::std::string&& value);
  #endif
  void add_pakfiles(const char* value);
  void add_pakfiles(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& pakfiles() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_pakfiles();

  // repeated string shaderNames = 3;
  int shadernames_size() const;
  void clear_shadernames();
  static const int kShaderNamesFieldNumber = 3;
  const ::std::string& shadernames(int index) const;
  ::std::string* mutable_shadernames(int index);
  void set_shadernames(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_shadernames(int index, ::std::string&& value);
  #endif
  void set_shadernames(int index, const char* value);
  void set_shadernames(int index, const char* value, size_t size);
  ::std::string* add_shadernames();
  void add_shadernames(const ::std::string& value);
  #if LANG_CXX11
  void add_shadernames(::std::string&& value);
  #endif
  void add_shadernames(const char* value);
  void add_shadernames(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& shadernames() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_shadernames();

  // repeated string textures = 4;
  int textures_size() const;
  void clear_textures();
  static const int kTexturesFieldNumber = 4;
  const ::std::string& textures(int index) const;
  ::std::string* mutable_textures(int index);
  void set_textures(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_textures(int index, ::std::string&& value);
  #endif
  void set_textures(int index, const char* value);
  void set_textures(int index, const char* value, size_t size);
  ::std::string* add_textures();
  void add_textures(const ::std::string& value);
  #if LANG_CXX11
  void add_textures(::std::string&& value);
  #endif
  void add_textures(const char* value);
  void add_textures(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& textures() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_textures();

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:ttf2sdk.MaterialData)
 private:
  void set_has_name();
  void clear_has_name();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> pakfiles_;
  ::google::protobuf::RepeatedPtrField< ::std::string> shadernames_;
  ::google::protobuf::RepeatedPtrField< ::std::string> textures_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  friend struct ::protobuf_pak_5fcache_2eproto::TableStruct;
  friend void ::protobuf_pak_5fcache_2eproto::InitDefaultsMaterialDataImpl();
};
// -------------------------------------------------------------------

class PakCache : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ttf2sdk.PakCache) */ {
 public:
  PakCache();
  virtual ~PakCache();

  PakCache(const PakCache& from);

  inline PakCache& operator=(const PakCache& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PakCache(PakCache&& from) noexcept
    : PakCache() {
    *this = ::std::move(from);
  }

  inline PakCache& operator=(PakCache&& from) noexcept {
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
  static const PakCache& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PakCache* internal_default_instance() {
    return reinterpret_cast<const PakCache*>(
               &_PakCache_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(PakCache* other);
  friend void swap(PakCache& a, PakCache& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PakCache* New() const PROTOBUF_FINAL { return New(NULL); }

  PakCache* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const PakCache& from);
  void MergeFrom(const PakCache& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(PakCache* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .ttf2sdk.MaterialData materials = 3;
  int materials_size() const;
  void clear_materials();
  static const int kMaterialsFieldNumber = 3;
  const ::ttf2sdk::MaterialData& materials(int index) const;
  ::ttf2sdk::MaterialData* mutable_materials(int index);
  ::ttf2sdk::MaterialData* add_materials();
  ::google::protobuf::RepeatedPtrField< ::ttf2sdk::MaterialData >*
      mutable_materials();
  const ::google::protobuf::RepeatedPtrField< ::ttf2sdk::MaterialData >&
      materials() const;

  // required string gameBuild = 2;
  bool has_gamebuild() const;
  void clear_gamebuild();
  static const int kGameBuildFieldNumber = 2;
  const ::std::string& gamebuild() const;
  void set_gamebuild(const ::std::string& value);
  #if LANG_CXX11
  void set_gamebuild(::std::string&& value);
  #endif
  void set_gamebuild(const char* value);
  void set_gamebuild(const char* value, size_t size);
  ::std::string* mutable_gamebuild();
  ::std::string* release_gamebuild();
  void set_allocated_gamebuild(::std::string* gamebuild);

  // required int32 cacheVersion = 1;
  bool has_cacheversion() const;
  void clear_cacheversion();
  static const int kCacheVersionFieldNumber = 1;
  ::google::protobuf::int32 cacheversion() const;
  void set_cacheversion(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ttf2sdk.PakCache)
 private:
  void set_has_cacheversion();
  void clear_has_cacheversion();
  void set_has_gamebuild();
  void clear_has_gamebuild();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::ttf2sdk::MaterialData > materials_;
  ::google::protobuf::internal::ArenaStringPtr gamebuild_;
  ::google::protobuf::int32 cacheversion_;
  friend struct ::protobuf_pak_5fcache_2eproto::TableStruct;
  friend void ::protobuf_pak_5fcache_2eproto::InitDefaultsPakCacheImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MaterialData

// required string name = 1;
inline bool MaterialData::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MaterialData::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MaterialData::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MaterialData::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& MaterialData::name() const {
  // @@protoc_insertion_point(field_get:ttf2sdk.MaterialData.name)
  return name_.GetNoArena();
}
inline void MaterialData::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ttf2sdk.MaterialData.name)
}
#if LANG_CXX11
inline void MaterialData::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ttf2sdk.MaterialData.name)
}
#endif
inline void MaterialData::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ttf2sdk.MaterialData.name)
}
inline void MaterialData::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ttf2sdk.MaterialData.name)
}
inline ::std::string* MaterialData::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:ttf2sdk.MaterialData.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MaterialData::release_name() {
  // @@protoc_insertion_point(field_release:ttf2sdk.MaterialData.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MaterialData::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:ttf2sdk.MaterialData.name)
}

// repeated string pakFiles = 2;
inline int MaterialData::pakfiles_size() const {
  return pakfiles_.size();
}
inline void MaterialData::clear_pakfiles() {
  pakfiles_.Clear();
}
inline const ::std::string& MaterialData::pakfiles(int index) const {
  // @@protoc_insertion_point(field_get:ttf2sdk.MaterialData.pakFiles)
  return pakfiles_.Get(index);
}
inline ::std::string* MaterialData::mutable_pakfiles(int index) {
  // @@protoc_insertion_point(field_mutable:ttf2sdk.MaterialData.pakFiles)
  return pakfiles_.Mutable(index);
}
inline void MaterialData::set_pakfiles(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:ttf2sdk.MaterialData.pakFiles)
  pakfiles_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void MaterialData::set_pakfiles(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:ttf2sdk.MaterialData.pakFiles)
  pakfiles_.Mutable(index)->assign(std::move(value));
}
#endif
inline void MaterialData::set_pakfiles(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  pakfiles_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ttf2sdk.MaterialData.pakFiles)
}
inline void MaterialData::set_pakfiles(int index, const char* value, size_t size) {
  pakfiles_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ttf2sdk.MaterialData.pakFiles)
}
inline ::std::string* MaterialData::add_pakfiles() {
  // @@protoc_insertion_point(field_add_mutable:ttf2sdk.MaterialData.pakFiles)
  return pakfiles_.Add();
}
inline void MaterialData::add_pakfiles(const ::std::string& value) {
  pakfiles_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ttf2sdk.MaterialData.pakFiles)
}
#if LANG_CXX11
inline void MaterialData::add_pakfiles(::std::string&& value) {
  pakfiles_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ttf2sdk.MaterialData.pakFiles)
}
#endif
inline void MaterialData::add_pakfiles(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  pakfiles_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ttf2sdk.MaterialData.pakFiles)
}
inline void MaterialData::add_pakfiles(const char* value, size_t size) {
  pakfiles_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ttf2sdk.MaterialData.pakFiles)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MaterialData::pakfiles() const {
  // @@protoc_insertion_point(field_list:ttf2sdk.MaterialData.pakFiles)
  return pakfiles_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MaterialData::mutable_pakfiles() {
  // @@protoc_insertion_point(field_mutable_list:ttf2sdk.MaterialData.pakFiles)
  return &pakfiles_;
}

// repeated string shaderNames = 3;
inline int MaterialData::shadernames_size() const {
  return shadernames_.size();
}
inline void MaterialData::clear_shadernames() {
  shadernames_.Clear();
}
inline const ::std::string& MaterialData::shadernames(int index) const {
  // @@protoc_insertion_point(field_get:ttf2sdk.MaterialData.shaderNames)
  return shadernames_.Get(index);
}
inline ::std::string* MaterialData::mutable_shadernames(int index) {
  // @@protoc_insertion_point(field_mutable:ttf2sdk.MaterialData.shaderNames)
  return shadernames_.Mutable(index);
}
inline void MaterialData::set_shadernames(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:ttf2sdk.MaterialData.shaderNames)
  shadernames_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void MaterialData::set_shadernames(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:ttf2sdk.MaterialData.shaderNames)
  shadernames_.Mutable(index)->assign(std::move(value));
}
#endif
inline void MaterialData::set_shadernames(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  shadernames_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ttf2sdk.MaterialData.shaderNames)
}
inline void MaterialData::set_shadernames(int index, const char* value, size_t size) {
  shadernames_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ttf2sdk.MaterialData.shaderNames)
}
inline ::std::string* MaterialData::add_shadernames() {
  // @@protoc_insertion_point(field_add_mutable:ttf2sdk.MaterialData.shaderNames)
  return shadernames_.Add();
}
inline void MaterialData::add_shadernames(const ::std::string& value) {
  shadernames_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ttf2sdk.MaterialData.shaderNames)
}
#if LANG_CXX11
inline void MaterialData::add_shadernames(::std::string&& value) {
  shadernames_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ttf2sdk.MaterialData.shaderNames)
}
#endif
inline void MaterialData::add_shadernames(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  shadernames_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ttf2sdk.MaterialData.shaderNames)
}
inline void MaterialData::add_shadernames(const char* value, size_t size) {
  shadernames_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ttf2sdk.MaterialData.shaderNames)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MaterialData::shadernames() const {
  // @@protoc_insertion_point(field_list:ttf2sdk.MaterialData.shaderNames)
  return shadernames_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MaterialData::mutable_shadernames() {
  // @@protoc_insertion_point(field_mutable_list:ttf2sdk.MaterialData.shaderNames)
  return &shadernames_;
}

// repeated string textures = 4;
inline int MaterialData::textures_size() const {
  return textures_.size();
}
inline void MaterialData::clear_textures() {
  textures_.Clear();
}
inline const ::std::string& MaterialData::textures(int index) const {
  // @@protoc_insertion_point(field_get:ttf2sdk.MaterialData.textures)
  return textures_.Get(index);
}
inline ::std::string* MaterialData::mutable_textures(int index) {
  // @@protoc_insertion_point(field_mutable:ttf2sdk.MaterialData.textures)
  return textures_.Mutable(index);
}
inline void MaterialData::set_textures(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:ttf2sdk.MaterialData.textures)
  textures_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void MaterialData::set_textures(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:ttf2sdk.MaterialData.textures)
  textures_.Mutable(index)->assign(std::move(value));
}
#endif
inline void MaterialData::set_textures(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  textures_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ttf2sdk.MaterialData.textures)
}
inline void MaterialData::set_textures(int index, const char* value, size_t size) {
  textures_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ttf2sdk.MaterialData.textures)
}
inline ::std::string* MaterialData::add_textures() {
  // @@protoc_insertion_point(field_add_mutable:ttf2sdk.MaterialData.textures)
  return textures_.Add();
}
inline void MaterialData::add_textures(const ::std::string& value) {
  textures_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ttf2sdk.MaterialData.textures)
}
#if LANG_CXX11
inline void MaterialData::add_textures(::std::string&& value) {
  textures_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:ttf2sdk.MaterialData.textures)
}
#endif
inline void MaterialData::add_textures(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  textures_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ttf2sdk.MaterialData.textures)
}
inline void MaterialData::add_textures(const char* value, size_t size) {
  textures_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ttf2sdk.MaterialData.textures)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MaterialData::textures() const {
  // @@protoc_insertion_point(field_list:ttf2sdk.MaterialData.textures)
  return textures_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MaterialData::mutable_textures() {
  // @@protoc_insertion_point(field_mutable_list:ttf2sdk.MaterialData.textures)
  return &textures_;
}

// -------------------------------------------------------------------

// PakCache

// required int32 cacheVersion = 1;
inline bool PakCache::has_cacheversion() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PakCache::set_has_cacheversion() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PakCache::clear_has_cacheversion() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PakCache::clear_cacheversion() {
  cacheversion_ = 0;
  clear_has_cacheversion();
}
inline ::google::protobuf::int32 PakCache::cacheversion() const {
  // @@protoc_insertion_point(field_get:ttf2sdk.PakCache.cacheVersion)
  return cacheversion_;
}
inline void PakCache::set_cacheversion(::google::protobuf::int32 value) {
  set_has_cacheversion();
  cacheversion_ = value;
  // @@protoc_insertion_point(field_set:ttf2sdk.PakCache.cacheVersion)
}

// required string gameBuild = 2;
inline bool PakCache::has_gamebuild() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PakCache::set_has_gamebuild() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PakCache::clear_has_gamebuild() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PakCache::clear_gamebuild() {
  gamebuild_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_gamebuild();
}
inline const ::std::string& PakCache::gamebuild() const {
  // @@protoc_insertion_point(field_get:ttf2sdk.PakCache.gameBuild)
  return gamebuild_.GetNoArena();
}
inline void PakCache::set_gamebuild(const ::std::string& value) {
  set_has_gamebuild();
  gamebuild_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ttf2sdk.PakCache.gameBuild)
}
#if LANG_CXX11
inline void PakCache::set_gamebuild(::std::string&& value) {
  set_has_gamebuild();
  gamebuild_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ttf2sdk.PakCache.gameBuild)
}
#endif
inline void PakCache::set_gamebuild(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_gamebuild();
  gamebuild_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ttf2sdk.PakCache.gameBuild)
}
inline void PakCache::set_gamebuild(const char* value, size_t size) {
  set_has_gamebuild();
  gamebuild_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ttf2sdk.PakCache.gameBuild)
}
inline ::std::string* PakCache::mutable_gamebuild() {
  set_has_gamebuild();
  // @@protoc_insertion_point(field_mutable:ttf2sdk.PakCache.gameBuild)
  return gamebuild_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PakCache::release_gamebuild() {
  // @@protoc_insertion_point(field_release:ttf2sdk.PakCache.gameBuild)
  clear_has_gamebuild();
  return gamebuild_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PakCache::set_allocated_gamebuild(::std::string* gamebuild) {
  if (gamebuild != NULL) {
    set_has_gamebuild();
  } else {
    clear_has_gamebuild();
  }
  gamebuild_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), gamebuild);
  // @@protoc_insertion_point(field_set_allocated:ttf2sdk.PakCache.gameBuild)
}

// repeated .ttf2sdk.MaterialData materials = 3;
inline int PakCache::materials_size() const {
  return materials_.size();
}
inline void PakCache::clear_materials() {
  materials_.Clear();
}
inline const ::ttf2sdk::MaterialData& PakCache::materials(int index) const {
  // @@protoc_insertion_point(field_get:ttf2sdk.PakCache.materials)
  return materials_.Get(index);
}
inline ::ttf2sdk::MaterialData* PakCache::mutable_materials(int index) {
  // @@protoc_insertion_point(field_mutable:ttf2sdk.PakCache.materials)
  return materials_.Mutable(index);
}
inline ::ttf2sdk::MaterialData* PakCache::add_materials() {
  // @@protoc_insertion_point(field_add:ttf2sdk.PakCache.materials)
  return materials_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::ttf2sdk::MaterialData >*
PakCache::mutable_materials() {
  // @@protoc_insertion_point(field_mutable_list:ttf2sdk.PakCache.materials)
  return &materials_;
}
inline const ::google::protobuf::RepeatedPtrField< ::ttf2sdk::MaterialData >&
PakCache::materials() const {
  // @@protoc_insertion_point(field_list:ttf2sdk.PakCache.materials)
  return materials_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ttf2sdk

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pak_5fcache_2eproto__INCLUDED
