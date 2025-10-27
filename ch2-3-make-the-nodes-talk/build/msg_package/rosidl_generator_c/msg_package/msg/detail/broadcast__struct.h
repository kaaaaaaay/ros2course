// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_package:msg/Broadcast.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msg_package/msg/broadcast.h"


#ifndef MSG_PACKAGE__MSG__DETAIL__BROADCAST__STRUCT_H_
#define MSG_PACKAGE__MSG__DETAIL__BROADCAST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Broadcast in the package msg_package.
typedef struct msg_package__msg__Broadcast
{
  int64_t num;
} msg_package__msg__Broadcast;

// Struct for a sequence of msg_package__msg__Broadcast.
typedef struct msg_package__msg__Broadcast__Sequence
{
  msg_package__msg__Broadcast * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_package__msg__Broadcast__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_PACKAGE__MSG__DETAIL__BROADCAST__STRUCT_H_
