// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_package:srv/Transmit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msg_package/srv/transmit.hpp"


#ifndef MSG_PACKAGE__SRV__DETAIL__TRANSMIT__BUILDER_HPP_
#define MSG_PACKAGE__SRV__DETAIL__TRANSMIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "msg_package/srv/detail/transmit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace msg_package
{

namespace srv
{

namespace builder
{

class Init_Transmit_Request_value3
{
public:
  explicit Init_Transmit_Request_value3(::msg_package::srv::Transmit_Request & msg)
  : msg_(msg)
  {}
  ::msg_package::srv::Transmit_Request value3(::msg_package::srv::Transmit_Request::_value3_type arg)
  {
    msg_.value3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_package::srv::Transmit_Request msg_;
};

class Init_Transmit_Request_value2
{
public:
  explicit Init_Transmit_Request_value2(::msg_package::srv::Transmit_Request & msg)
  : msg_(msg)
  {}
  Init_Transmit_Request_value3 value2(::msg_package::srv::Transmit_Request::_value2_type arg)
  {
    msg_.value2 = std::move(arg);
    return Init_Transmit_Request_value3(msg_);
  }

private:
  ::msg_package::srv::Transmit_Request msg_;
};

class Init_Transmit_Request_value
{
public:
  Init_Transmit_Request_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transmit_Request_value2 value(::msg_package::srv::Transmit_Request::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_Transmit_Request_value2(msg_);
  }

private:
  ::msg_package::srv::Transmit_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_package::srv::Transmit_Request>()
{
  return msg_package::srv::builder::Init_Transmit_Request_value();
}

}  // namespace msg_package


namespace msg_package
{

namespace srv
{

namespace builder
{

class Init_Transmit_Response_result
{
public:
  Init_Transmit_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_package::srv::Transmit_Response result(::msg_package::srv::Transmit_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_package::srv::Transmit_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_package::srv::Transmit_Response>()
{
  return msg_package::srv::builder::Init_Transmit_Response_result();
}

}  // namespace msg_package


namespace msg_package
{

namespace srv
{

namespace builder
{

class Init_Transmit_Event_response
{
public:
  explicit Init_Transmit_Event_response(::msg_package::srv::Transmit_Event & msg)
  : msg_(msg)
  {}
  ::msg_package::srv::Transmit_Event response(::msg_package::srv::Transmit_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_package::srv::Transmit_Event msg_;
};

class Init_Transmit_Event_request
{
public:
  explicit Init_Transmit_Event_request(::msg_package::srv::Transmit_Event & msg)
  : msg_(msg)
  {}
  Init_Transmit_Event_response request(::msg_package::srv::Transmit_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Transmit_Event_response(msg_);
  }

private:
  ::msg_package::srv::Transmit_Event msg_;
};

class Init_Transmit_Event_info
{
public:
  Init_Transmit_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Transmit_Event_request info(::msg_package::srv::Transmit_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Transmit_Event_request(msg_);
  }

private:
  ::msg_package::srv::Transmit_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_package::srv::Transmit_Event>()
{
  return msg_package::srv::builder::Init_Transmit_Event_info();
}

}  // namespace msg_package

#endif  // MSG_PACKAGE__SRV__DETAIL__TRANSMIT__BUILDER_HPP_
