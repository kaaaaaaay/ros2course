// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from msg_package:srv/Transmit.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "msg_package/srv/detail/transmit__functions.h"
#include "msg_package/srv/detail/transmit__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace msg_package
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Transmit_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Transmit_Request_type_support_ids_t;

static const _Transmit_Request_type_support_ids_t _Transmit_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Transmit_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Transmit_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Transmit_Request_type_support_symbol_names_t _Transmit_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_package, srv, Transmit_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_package, srv, Transmit_Request)),
  }
};

typedef struct _Transmit_Request_type_support_data_t
{
  void * data[2];
} _Transmit_Request_type_support_data_t;

static _Transmit_Request_type_support_data_t _Transmit_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Transmit_Request_message_typesupport_map = {
  2,
  "msg_package",
  &_Transmit_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Transmit_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Transmit_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Transmit_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Transmit_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &msg_package__srv__Transmit_Request__get_type_hash,
  &msg_package__srv__Transmit_Request__get_type_description,
  &msg_package__srv__Transmit_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace msg_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_package::srv::Transmit_Request>()
{
  return &::msg_package::srv::rosidl_typesupport_cpp::Transmit_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, msg_package, srv, Transmit_Request)() {
  return get_message_type_support_handle<msg_package::srv::Transmit_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msg_package/srv/detail/transmit__functions.h"
// already included above
// #include "msg_package/srv/detail/transmit__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_package
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Transmit_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Transmit_Response_type_support_ids_t;

static const _Transmit_Response_type_support_ids_t _Transmit_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Transmit_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Transmit_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Transmit_Response_type_support_symbol_names_t _Transmit_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_package, srv, Transmit_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_package, srv, Transmit_Response)),
  }
};

typedef struct _Transmit_Response_type_support_data_t
{
  void * data[2];
} _Transmit_Response_type_support_data_t;

static _Transmit_Response_type_support_data_t _Transmit_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Transmit_Response_message_typesupport_map = {
  2,
  "msg_package",
  &_Transmit_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Transmit_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Transmit_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Transmit_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Transmit_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &msg_package__srv__Transmit_Response__get_type_hash,
  &msg_package__srv__Transmit_Response__get_type_description,
  &msg_package__srv__Transmit_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace msg_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_package::srv::Transmit_Response>()
{
  return &::msg_package::srv::rosidl_typesupport_cpp::Transmit_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, msg_package, srv, Transmit_Response)() {
  return get_message_type_support_handle<msg_package::srv::Transmit_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "msg_package/srv/detail/transmit__functions.h"
// already included above
// #include "msg_package/srv/detail/transmit__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_package
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Transmit_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Transmit_Event_type_support_ids_t;

static const _Transmit_Event_type_support_ids_t _Transmit_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Transmit_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Transmit_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Transmit_Event_type_support_symbol_names_t _Transmit_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_package, srv, Transmit_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_package, srv, Transmit_Event)),
  }
};

typedef struct _Transmit_Event_type_support_data_t
{
  void * data[2];
} _Transmit_Event_type_support_data_t;

static _Transmit_Event_type_support_data_t _Transmit_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Transmit_Event_message_typesupport_map = {
  2,
  "msg_package",
  &_Transmit_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Transmit_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Transmit_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Transmit_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Transmit_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &msg_package__srv__Transmit_Event__get_type_hash,
  &msg_package__srv__Transmit_Event__get_type_description,
  &msg_package__srv__Transmit_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace msg_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_package::srv::Transmit_Event>()
{
  return &::msg_package::srv::rosidl_typesupport_cpp::Transmit_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, msg_package, srv, Transmit_Event)() {
  return get_message_type_support_handle<msg_package::srv::Transmit_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "msg_package/srv/detail/transmit__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace msg_package
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Transmit_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Transmit_type_support_ids_t;

static const _Transmit_type_support_ids_t _Transmit_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Transmit_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Transmit_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Transmit_type_support_symbol_names_t _Transmit_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_package, srv, Transmit)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_package, srv, Transmit)),
  }
};

typedef struct _Transmit_type_support_data_t
{
  void * data[2];
} _Transmit_type_support_data_t;

static _Transmit_type_support_data_t _Transmit_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Transmit_service_typesupport_map = {
  2,
  "msg_package",
  &_Transmit_service_typesupport_ids.typesupport_identifier[0],
  &_Transmit_service_typesupport_symbol_names.symbol_name[0],
  &_Transmit_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Transmit_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Transmit_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<msg_package::srv::Transmit_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<msg_package::srv::Transmit_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<msg_package::srv::Transmit_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<msg_package::srv::Transmit>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<msg_package::srv::Transmit>,
  &msg_package__srv__Transmit__get_type_hash,
  &msg_package__srv__Transmit__get_type_description,
  &msg_package__srv__Transmit__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace msg_package

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<msg_package::srv::Transmit>()
{
  return &::msg_package::srv::rosidl_typesupport_cpp::Transmit_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, msg_package, srv, Transmit)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<msg_package::srv::Transmit>();
}

#ifdef __cplusplus
}
#endif
