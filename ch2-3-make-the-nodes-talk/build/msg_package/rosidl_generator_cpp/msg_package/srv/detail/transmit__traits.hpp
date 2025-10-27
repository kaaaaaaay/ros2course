// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_package:srv/Transmit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msg_package/srv/transmit.hpp"


#ifndef MSG_PACKAGE__SRV__DETAIL__TRANSMIT__TRAITS_HPP_
#define MSG_PACKAGE__SRV__DETAIL__TRANSMIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_package/srv/detail/transmit__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const Transmit_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: value
  {
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << ", ";
  }

  // member: value2
  {
    out << "value2: ";
    rosidl_generator_traits::value_to_yaml(msg.value2, out);
    out << ", ";
  }

  // member: value3
  {
    out << "value3: ";
    rosidl_generator_traits::value_to_yaml(msg.value3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Transmit_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value: ";
    rosidl_generator_traits::value_to_yaml(msg.value, out);
    out << "\n";
  }

  // member: value2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value2: ";
    rosidl_generator_traits::value_to_yaml(msg.value2, out);
    out << "\n";
  }

  // member: value3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value3: ";
    rosidl_generator_traits::value_to_yaml(msg.value3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Transmit_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace msg_package

namespace rosidl_generator_traits
{

[[deprecated("use msg_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_package::srv::Transmit_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const msg_package::srv::Transmit_Request & msg)
{
  return msg_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msg_package::srv::Transmit_Request>()
{
  return "msg_package::srv::Transmit_Request";
}

template<>
inline const char * name<msg_package::srv::Transmit_Request>()
{
  return "msg_package/srv/Transmit_Request";
}

template<>
struct has_fixed_size<msg_package::srv::Transmit_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_package::srv::Transmit_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_package::srv::Transmit_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace msg_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const Transmit_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: result
  {
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Transmit_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result: ";
    rosidl_generator_traits::value_to_yaml(msg.result, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Transmit_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace msg_package

namespace rosidl_generator_traits
{

[[deprecated("use msg_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_package::srv::Transmit_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const msg_package::srv::Transmit_Response & msg)
{
  return msg_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msg_package::srv::Transmit_Response>()
{
  return "msg_package::srv::Transmit_Response";
}

template<>
inline const char * name<msg_package::srv::Transmit_Response>()
{
  return "msg_package/srv/Transmit_Response";
}

template<>
struct has_fixed_size<msg_package::srv::Transmit_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_package::srv::Transmit_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_package::srv::Transmit_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace msg_package
{

namespace srv
{

inline void to_flow_style_yaml(
  const Transmit_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Transmit_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Transmit_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace msg_package

namespace rosidl_generator_traits
{

[[deprecated("use msg_package::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_package::srv::Transmit_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_package::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_package::srv::to_yaml() instead")]]
inline std::string to_yaml(const msg_package::srv::Transmit_Event & msg)
{
  return msg_package::srv::to_yaml(msg);
}

template<>
inline const char * data_type<msg_package::srv::Transmit_Event>()
{
  return "msg_package::srv::Transmit_Event";
}

template<>
inline const char * name<msg_package::srv::Transmit_Event>()
{
  return "msg_package/srv/Transmit_Event";
}

template<>
struct has_fixed_size<msg_package::srv::Transmit_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<msg_package::srv::Transmit_Event>
  : std::integral_constant<bool, has_bounded_size<msg_package::srv::Transmit_Request>::value && has_bounded_size<msg_package::srv::Transmit_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<msg_package::srv::Transmit_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_package::srv::Transmit>()
{
  return "msg_package::srv::Transmit";
}

template<>
inline const char * name<msg_package::srv::Transmit>()
{
  return "msg_package/srv/Transmit";
}

template<>
struct has_fixed_size<msg_package::srv::Transmit>
  : std::integral_constant<
    bool,
    has_fixed_size<msg_package::srv::Transmit_Request>::value &&
    has_fixed_size<msg_package::srv::Transmit_Response>::value
  >
{
};

template<>
struct has_bounded_size<msg_package::srv::Transmit>
  : std::integral_constant<
    bool,
    has_bounded_size<msg_package::srv::Transmit_Request>::value &&
    has_bounded_size<msg_package::srv::Transmit_Response>::value
  >
{
};

template<>
struct is_service<msg_package::srv::Transmit>
  : std::true_type
{
};

template<>
struct is_service_request<msg_package::srv::Transmit_Request>
  : std::true_type
{
};

template<>
struct is_service_response<msg_package::srv::Transmit_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MSG_PACKAGE__SRV__DETAIL__TRANSMIT__TRAITS_HPP_
