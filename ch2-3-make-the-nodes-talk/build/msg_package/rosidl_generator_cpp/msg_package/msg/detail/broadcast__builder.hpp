// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_package:msg/Broadcast.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msg_package/msg/broadcast.hpp"


#ifndef MSG_PACKAGE__MSG__DETAIL__BROADCAST__BUILDER_HPP_
#define MSG_PACKAGE__MSG__DETAIL__BROADCAST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_package/msg/detail/broadcast__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_package
{

namespace msg
{

namespace builder
{

class Init_Broadcast_num
{
public:
  Init_Broadcast_num()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_package::msg::Broadcast num(::msg_package::msg::Broadcast::_num_type arg)
  {
    msg_.num = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_package::msg::Broadcast msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_package::msg::Broadcast>()
{
  return msg_package::msg::builder::Init_Broadcast_num();
}

}  // namespace msg_package

#endif  // MSG_PACKAGE__MSG__DETAIL__BROADCAST__BUILDER_HPP_
