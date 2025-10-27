// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_package:msg/Broadcast.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_package/msg/detail/broadcast__rosidl_typesupport_introspection_c.h"
#include "msg_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_package/msg/detail/broadcast__functions.h"
#include "msg_package/msg/detail/broadcast__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_package__msg__Broadcast__init(message_memory);
}

void msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_fini_function(void * message_memory)
{
  msg_package__msg__Broadcast__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_message_member_array[1] = {
  {
    "num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_package__msg__Broadcast, num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_message_members = {
  "msg_package__msg",  // message namespace
  "Broadcast",  // message name
  1,  // number of fields
  sizeof(msg_package__msg__Broadcast),
  false,  // has_any_key_member_
  msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_message_member_array,  // message members
  msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_init_function,  // function to initialize message memory (memory has to be allocated)
  msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_message_type_support_handle = {
  0,
  &msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_message_members,
  get_message_typesupport_handle_function,
  &msg_package__msg__Broadcast__get_type_hash,
  &msg_package__msg__Broadcast__get_type_description,
  &msg_package__msg__Broadcast__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, msg, Broadcast)() {
  if (!msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_message_type_support_handle.typesupport_identifier) {
    msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg_package__msg__Broadcast__rosidl_typesupport_introspection_c__Broadcast_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
