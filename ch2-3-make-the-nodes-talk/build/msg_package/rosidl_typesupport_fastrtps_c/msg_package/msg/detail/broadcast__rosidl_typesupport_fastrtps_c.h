// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from msg_package:msg/Broadcast.idl
// generated code does not contain a copyright notice
#ifndef MSG_PACKAGE__MSG__DETAIL__BROADCAST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define MSG_PACKAGE__MSG__DETAIL__BROADCAST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msg_package/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "msg_package/msg/detail/broadcast__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_package
bool cdr_serialize_msg_package__msg__Broadcast(
  const msg_package__msg__Broadcast * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_package
bool cdr_deserialize_msg_package__msg__Broadcast(
  eprosima::fastcdr::Cdr &,
  msg_package__msg__Broadcast * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_package
size_t get_serialized_size_msg_package__msg__Broadcast(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_package
size_t max_serialized_size_msg_package__msg__Broadcast(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_package
bool cdr_serialize_key_msg_package__msg__Broadcast(
  const msg_package__msg__Broadcast * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_package
size_t get_serialized_size_key_msg_package__msg__Broadcast(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_package
size_t max_serialized_size_key_msg_package__msg__Broadcast(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_msg_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, msg_package, msg, Broadcast)();

#ifdef __cplusplus
}
#endif

#endif  // MSG_PACKAGE__MSG__DETAIL__BROADCAST__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
