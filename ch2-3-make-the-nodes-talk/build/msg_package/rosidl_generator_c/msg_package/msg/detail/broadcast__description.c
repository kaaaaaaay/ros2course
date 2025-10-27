// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from msg_package:msg/Broadcast.idl
// generated code does not contain a copyright notice

#include "msg_package/msg/detail/broadcast__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_msg_package
const rosidl_type_hash_t *
msg_package__msg__Broadcast__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x59, 0x83, 0x0b, 0x58, 0xb0, 0xb8, 0xaf, 0x87,
      0x88, 0xa1, 0xf9, 0x32, 0xe2, 0x4e, 0xaa, 0xbc,
      0x12, 0xe2, 0x80, 0x73, 0xd4, 0x85, 0x24, 0x15,
      0x74, 0xad, 0xfc, 0x7d, 0x9b, 0x34, 0xc2, 0x3b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char msg_package__msg__Broadcast__TYPE_NAME[] = "msg_package/msg/Broadcast";

// Define type names, field names, and default values
static char msg_package__msg__Broadcast__FIELD_NAME__num[] = "num";

static rosidl_runtime_c__type_description__Field msg_package__msg__Broadcast__FIELDS[] = {
  {
    {msg_package__msg__Broadcast__FIELD_NAME__num, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
msg_package__msg__Broadcast__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {msg_package__msg__Broadcast__TYPE_NAME, 25, 25},
      {msg_package__msg__Broadcast__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 num";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
msg_package__msg__Broadcast__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {msg_package__msg__Broadcast__TYPE_NAME, 25, 25},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 10, 10},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
msg_package__msg__Broadcast__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *msg_package__msg__Broadcast__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
