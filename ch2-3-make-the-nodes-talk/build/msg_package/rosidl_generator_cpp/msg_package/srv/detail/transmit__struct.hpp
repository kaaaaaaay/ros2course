// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_package:srv/Transmit.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msg_package/srv/transmit.hpp"


#ifndef MSG_PACKAGE__SRV__DETAIL__TRANSMIT__STRUCT_HPP_
#define MSG_PACKAGE__SRV__DETAIL__TRANSMIT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg_package__srv__Transmit_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg_package__srv__Transmit_Request __declspec(deprecated)
#endif

namespace msg_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Transmit_Request_
{
  using Type = Transmit_Request_<ContainerAllocator>;

  explicit Transmit_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0ll;
      this->value2 = 0ll;
      this->value3 = 0ll;
    }
  }

  explicit Transmit_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = 0ll;
      this->value2 = 0ll;
      this->value3 = 0ll;
    }
  }

  // field types and members
  using _value_type =
    int64_t;
  _value_type value;
  using _value2_type =
    int64_t;
  _value2_type value2;
  using _value3_type =
    int64_t;
  _value3_type value3;

  // setters for named parameter idiom
  Type & set__value(
    const int64_t & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__value2(
    const int64_t & _arg)
  {
    this->value2 = _arg;
    return *this;
  }
  Type & set__value3(
    const int64_t & _arg)
  {
    this->value3 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_package::srv::Transmit_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_package::srv::Transmit_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_package::srv::Transmit_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_package::srv::Transmit_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_package::srv::Transmit_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_package::srv::Transmit_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_package::srv::Transmit_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_package::srv::Transmit_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_package::srv::Transmit_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_package::srv::Transmit_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_package__srv__Transmit_Request
    std::shared_ptr<msg_package::srv::Transmit_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_package__srv__Transmit_Request
    std::shared_ptr<msg_package::srv::Transmit_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Transmit_Request_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->value2 != other.value2) {
      return false;
    }
    if (this->value3 != other.value3) {
      return false;
    }
    return true;
  }
  bool operator!=(const Transmit_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Transmit_Request_

// alias to use template instance with default allocator
using Transmit_Request =
  msg_package::srv::Transmit_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_package


#ifndef _WIN32
# define DEPRECATED__msg_package__srv__Transmit_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg_package__srv__Transmit_Response __declspec(deprecated)
#endif

namespace msg_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Transmit_Response_
{
  using Type = Transmit_Response_<ContainerAllocator>;

  explicit Transmit_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  explicit Transmit_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->result = 0ll;
    }
  }

  // field types and members
  using _result_type =
    int64_t;
  _result_type result;

  // setters for named parameter idiom
  Type & set__result(
    const int64_t & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_package::srv::Transmit_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_package::srv::Transmit_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_package::srv::Transmit_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_package::srv::Transmit_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_package::srv::Transmit_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_package::srv::Transmit_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_package::srv::Transmit_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_package::srv::Transmit_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_package::srv::Transmit_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_package::srv::Transmit_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_package__srv__Transmit_Response
    std::shared_ptr<msg_package::srv::Transmit_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_package__srv__Transmit_Response
    std::shared_ptr<msg_package::srv::Transmit_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Transmit_Response_ & other) const
  {
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const Transmit_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Transmit_Response_

// alias to use template instance with default allocator
using Transmit_Response =
  msg_package::srv::Transmit_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_package


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg_package__srv__Transmit_Event __attribute__((deprecated))
#else
# define DEPRECATED__msg_package__srv__Transmit_Event __declspec(deprecated)
#endif

namespace msg_package
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Transmit_Event_
{
  using Type = Transmit_Event_<ContainerAllocator>;

  explicit Transmit_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit Transmit_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<msg_package::srv::Transmit_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg_package::srv::Transmit_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<msg_package::srv::Transmit_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg_package::srv::Transmit_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<msg_package::srv::Transmit_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg_package::srv::Transmit_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<msg_package::srv::Transmit_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<msg_package::srv::Transmit_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_package::srv::Transmit_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_package::srv::Transmit_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_package::srv::Transmit_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_package::srv::Transmit_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_package::srv::Transmit_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_package::srv::Transmit_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_package::srv::Transmit_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_package::srv::Transmit_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_package::srv::Transmit_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_package::srv::Transmit_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_package__srv__Transmit_Event
    std::shared_ptr<msg_package::srv::Transmit_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_package__srv__Transmit_Event
    std::shared_ptr<msg_package::srv::Transmit_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Transmit_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const Transmit_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Transmit_Event_

// alias to use template instance with default allocator
using Transmit_Event =
  msg_package::srv::Transmit_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_package

namespace msg_package
{

namespace srv
{

struct Transmit
{
  using Request = msg_package::srv::Transmit_Request;
  using Response = msg_package::srv::Transmit_Response;
  using Event = msg_package::srv::Transmit_Event;
};

}  // namespace srv

}  // namespace msg_package

#endif  // MSG_PACKAGE__SRV__DETAIL__TRANSMIT__STRUCT_HPP_
