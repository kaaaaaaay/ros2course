// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_package:msg/Broadcast.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msg_package/msg/broadcast.hpp"


#ifndef MSG_PACKAGE__MSG__DETAIL__BROADCAST__TRAITS_HPP_
#define MSG_PACKAGE__MSG__DETAIL__BROADCAST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "msg_package/msg/detail/broadcast__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace msg_package
{

namespace msg
{

inline void to_flow_style_yaml(
  const Broadcast & msg,
  std::ostream & out)
{
  out << "{";
  // member: num
  {
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Broadcast & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num: ";
    rosidl_generator_traits::value_to_yaml(msg.num, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Broadcast & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace msg_package

namespace rosidl_generator_traits
{

[[deprecated("use msg_package::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const msg_package::msg::Broadcast & msg,
  std::ostream & out, size_t indentation = 0)
{
  msg_package::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use msg_package::msg::to_yaml() instead")]]
inline std::string to_yaml(const msg_package::msg::Broadcast & msg)
{
  return msg_package::msg::to_yaml(msg);
}

template<>
inline const char * data_type<msg_package::msg::Broadcast>()
{
  return "msg_package::msg::Broadcast";
}

template<>
inline const char * name<msg_package::msg::Broadcast>()
{
  return "msg_package/msg/Broadcast";
}

template<>
struct has_fixed_size<msg_package::msg::Broadcast>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<msg_package::msg::Broadcast>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<msg_package::msg::Broadcast>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_PACKAGE__MSG__DETAIL__BROADCAST__TRAITS_HPP_
