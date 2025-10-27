// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_package:srv/Transmit.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_package/srv/detail/transmit__rosidl_typesupport_introspection_c.h"
#include "msg_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_package/srv/detail/transmit__functions.h"
#include "msg_package/srv/detail/transmit__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_package__srv__Transmit_Request__init(message_memory);
}

void msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_fini_function(void * message_memory)
{
  msg_package__srv__Transmit_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_message_member_array[3] = {
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_package__srv__Transmit_Request, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_package__srv__Transmit_Request, value2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_package__srv__Transmit_Request, value3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_message_members = {
  "msg_package__srv",  // message namespace
  "Transmit_Request",  // message name
  3,  // number of fields
  sizeof(msg_package__srv__Transmit_Request),
  false,  // has_any_key_member_
  msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_message_member_array,  // message members
  msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_message_type_support_handle = {
  0,
  &msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_message_members,
  get_message_typesupport_handle_function,
  &msg_package__srv__Transmit_Request__get_type_hash,
  &msg_package__srv__Transmit_Request__get_type_description,
  &msg_package__srv__Transmit_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Request)() {
  if (!msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_message_type_support_handle.typesupport_identifier) {
    msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_package/srv/detail/transmit__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_package/srv/detail/transmit__functions.h"
// already included above
// #include "msg_package/srv/detail/transmit__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_package__srv__Transmit_Response__init(message_memory);
}

void msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_fini_function(void * message_memory)
{
  msg_package__srv__Transmit_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_message_member_array[1] = {
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_package__srv__Transmit_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_message_members = {
  "msg_package__srv",  // message namespace
  "Transmit_Response",  // message name
  1,  // number of fields
  sizeof(msg_package__srv__Transmit_Response),
  false,  // has_any_key_member_
  msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_message_member_array,  // message members
  msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_message_type_support_handle = {
  0,
  &msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_message_members,
  get_message_typesupport_handle_function,
  &msg_package__srv__Transmit_Response__get_type_hash,
  &msg_package__srv__Transmit_Response__get_type_description,
  &msg_package__srv__Transmit_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Response)() {
  if (!msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_message_type_support_handle.typesupport_identifier) {
    msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_package/srv/detail/transmit__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_package/srv/detail/transmit__functions.h"
// already included above
// #include "msg_package/srv/detail/transmit__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "msg_package/srv/transmit.h"
// Member `request`
// Member `response`
// already included above
// #include "msg_package/srv/detail/transmit__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_package__srv__Transmit_Event__init(message_memory);
}

void msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_fini_function(void * message_memory)
{
  msg_package__srv__Transmit_Event__fini(message_memory);
}

size_t msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__size_function__Transmit_Event__request(
  const void * untyped_member)
{
  const msg_package__srv__Transmit_Request__Sequence * member =
    (const msg_package__srv__Transmit_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_const_function__Transmit_Event__request(
  const void * untyped_member, size_t index)
{
  const msg_package__srv__Transmit_Request__Sequence * member =
    (const msg_package__srv__Transmit_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_function__Transmit_Event__request(
  void * untyped_member, size_t index)
{
  msg_package__srv__Transmit_Request__Sequence * member =
    (msg_package__srv__Transmit_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__fetch_function__Transmit_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msg_package__srv__Transmit_Request * item =
    ((const msg_package__srv__Transmit_Request *)
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_const_function__Transmit_Event__request(untyped_member, index));
  msg_package__srv__Transmit_Request * value =
    (msg_package__srv__Transmit_Request *)(untyped_value);
  *value = *item;
}

void msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__assign_function__Transmit_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msg_package__srv__Transmit_Request * item =
    ((msg_package__srv__Transmit_Request *)
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_function__Transmit_Event__request(untyped_member, index));
  const msg_package__srv__Transmit_Request * value =
    (const msg_package__srv__Transmit_Request *)(untyped_value);
  *item = *value;
}

bool msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__resize_function__Transmit_Event__request(
  void * untyped_member, size_t size)
{
  msg_package__srv__Transmit_Request__Sequence * member =
    (msg_package__srv__Transmit_Request__Sequence *)(untyped_member);
  msg_package__srv__Transmit_Request__Sequence__fini(member);
  return msg_package__srv__Transmit_Request__Sequence__init(member, size);
}

size_t msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__size_function__Transmit_Event__response(
  const void * untyped_member)
{
  const msg_package__srv__Transmit_Response__Sequence * member =
    (const msg_package__srv__Transmit_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_const_function__Transmit_Event__response(
  const void * untyped_member, size_t index)
{
  const msg_package__srv__Transmit_Response__Sequence * member =
    (const msg_package__srv__Transmit_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_function__Transmit_Event__response(
  void * untyped_member, size_t index)
{
  msg_package__srv__Transmit_Response__Sequence * member =
    (msg_package__srv__Transmit_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__fetch_function__Transmit_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const msg_package__srv__Transmit_Response * item =
    ((const msg_package__srv__Transmit_Response *)
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_const_function__Transmit_Event__response(untyped_member, index));
  msg_package__srv__Transmit_Response * value =
    (msg_package__srv__Transmit_Response *)(untyped_value);
  *value = *item;
}

void msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__assign_function__Transmit_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  msg_package__srv__Transmit_Response * item =
    ((msg_package__srv__Transmit_Response *)
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_function__Transmit_Event__response(untyped_member, index));
  const msg_package__srv__Transmit_Response * value =
    (const msg_package__srv__Transmit_Response *)(untyped_value);
  *item = *value;
}

bool msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__resize_function__Transmit_Event__response(
  void * untyped_member, size_t size)
{
  msg_package__srv__Transmit_Response__Sequence * member =
    (msg_package__srv__Transmit_Response__Sequence *)(untyped_member);
  msg_package__srv__Transmit_Response__Sequence__fini(member);
  return msg_package__srv__Transmit_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_package__srv__Transmit_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(msg_package__srv__Transmit_Event, request),  // bytes offset in struct
    NULL,  // default value
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__size_function__Transmit_Event__request,  // size() function pointer
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_const_function__Transmit_Event__request,  // get_const(index) function pointer
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_function__Transmit_Event__request,  // get(index) function pointer
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__fetch_function__Transmit_Event__request,  // fetch(index, &value) function pointer
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__assign_function__Transmit_Event__request,  // assign(index, value) function pointer
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__resize_function__Transmit_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(msg_package__srv__Transmit_Event, response),  // bytes offset in struct
    NULL,  // default value
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__size_function__Transmit_Event__response,  // size() function pointer
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_const_function__Transmit_Event__response,  // get_const(index) function pointer
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__get_function__Transmit_Event__response,  // get(index) function pointer
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__fetch_function__Transmit_Event__response,  // fetch(index, &value) function pointer
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__assign_function__Transmit_Event__response,  // assign(index, value) function pointer
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__resize_function__Transmit_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_members = {
  "msg_package__srv",  // message namespace
  "Transmit_Event",  // message name
  3,  // number of fields
  sizeof(msg_package__srv__Transmit_Event),
  false,  // has_any_key_member_
  msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_member_array,  // message members
  msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_type_support_handle = {
  0,
  &msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_members,
  get_message_typesupport_handle_function,
  &msg_package__srv__Transmit_Event__get_type_hash,
  &msg_package__srv__Transmit_Event__get_type_description,
  &msg_package__srv__Transmit_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_package
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Event)() {
  msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Request)();
  msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Response)();
  if (!msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_type_support_handle.typesupport_identifier) {
    msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_package/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_package/srv/detail/transmit__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_package__srv__detail__transmit__rosidl_typesupport_introspection_c__Transmit_service_members = {
  "msg_package__srv",  // service namespace
  "Transmit",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // msg_package__srv__detail__transmit__rosidl_typesupport_introspection_c__Transmit_Request_message_type_support_handle,
  NULL,  // response message
  // msg_package__srv__detail__transmit__rosidl_typesupport_introspection_c__Transmit_Response_message_type_support_handle
  NULL  // event_message
  // msg_package__srv__detail__transmit__rosidl_typesupport_introspection_c__Transmit_Response_message_type_support_handle
};


static rosidl_service_type_support_t msg_package__srv__detail__transmit__rosidl_typesupport_introspection_c__Transmit_service_type_support_handle = {
  0,
  &msg_package__srv__detail__transmit__rosidl_typesupport_introspection_c__Transmit_service_members,
  get_service_typesupport_handle_function,
  &msg_package__srv__Transmit_Request__rosidl_typesupport_introspection_c__Transmit_Request_message_type_support_handle,
  &msg_package__srv__Transmit_Response__rosidl_typesupport_introspection_c__Transmit_Response_message_type_support_handle,
  &msg_package__srv__Transmit_Event__rosidl_typesupport_introspection_c__Transmit_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    msg_package,
    srv,
    Transmit
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    msg_package,
    srv,
    Transmit
  ),
  &msg_package__srv__Transmit__get_type_hash,
  &msg_package__srv__Transmit__get_type_description,
  &msg_package__srv__Transmit__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_package
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit)(void) {
  if (!msg_package__srv__detail__transmit__rosidl_typesupport_introspection_c__Transmit_service_type_support_handle.typesupport_identifier) {
    msg_package__srv__detail__transmit__rosidl_typesupport_introspection_c__Transmit_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_package__srv__detail__transmit__rosidl_typesupport_introspection_c__Transmit_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_package, srv, Transmit_Event)()->data;
  }

  return &msg_package__srv__detail__transmit__rosidl_typesupport_introspection_c__Transmit_service_type_support_handle;
}
