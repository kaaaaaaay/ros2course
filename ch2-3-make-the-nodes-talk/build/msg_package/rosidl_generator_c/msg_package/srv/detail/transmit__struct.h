// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_package:srv/Transmit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msg_package/srv/transmit.h"


#ifndef MSG_PACKAGE__SRV__DETAIL__TRANSMIT__STRUCT_H_
#define MSG_PACKAGE__SRV__DETAIL__TRANSMIT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Transmit in the package msg_package.
typedef struct msg_package__srv__Transmit_Request
{
  int64_t value;
  int64_t value2;
  int64_t value3;
} msg_package__srv__Transmit_Request;

// Struct for a sequence of msg_package__srv__Transmit_Request.
typedef struct msg_package__srv__Transmit_Request__Sequence
{
  msg_package__srv__Transmit_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_package__srv__Transmit_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Transmit in the package msg_package.
typedef struct msg_package__srv__Transmit_Response
{
  int64_t result;
} msg_package__srv__Transmit_Response;

// Struct for a sequence of msg_package__srv__Transmit_Response.
typedef struct msg_package__srv__Transmit_Response__Sequence
{
  msg_package__srv__Transmit_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_package__srv__Transmit_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  msg_package__srv__Transmit_Event__request__MAX_SIZE = 1
};
// response
enum
{
  msg_package__srv__Transmit_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Transmit in the package msg_package.
typedef struct msg_package__srv__Transmit_Event
{
  service_msgs__msg__ServiceEventInfo info;
  msg_package__srv__Transmit_Request__Sequence request;
  msg_package__srv__Transmit_Response__Sequence response;
} msg_package__srv__Transmit_Event;

// Struct for a sequence of msg_package__srv__Transmit_Event.
typedef struct msg_package__srv__Transmit_Event__Sequence
{
  msg_package__srv__Transmit_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_package__srv__Transmit_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_PACKAGE__SRV__DETAIL__TRANSMIT__STRUCT_H_
