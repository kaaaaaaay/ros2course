// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_package:msg/Broadcast.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "msg_package/msg/broadcast.hpp"


#ifndef MSG_PACKAGE__MSG__DETAIL__BROADCAST__STRUCT_HPP_
#define MSG_PACKAGE__MSG__DETAIL__BROADCAST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__msg_package__msg__Broadcast __attribute__((deprecated))
#else
# define DEPRECATED__msg_package__msg__Broadcast __declspec(deprecated)
#endif

namespace msg_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Broadcast_
{
  using Type = Broadcast_<ContainerAllocator>;

  explicit Broadcast_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  explicit Broadcast_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num = 0ll;
    }
  }

  // field types and members
  using _num_type =
    int64_t;
  _num_type num;

  // setters for named parameter idiom
  Type & set__num(
    const int64_t & _arg)
  {
    this->num = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_package::msg::Broadcast_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_package::msg::Broadcast_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_package::msg::Broadcast_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_package::msg::Broadcast_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_package::msg::Broadcast_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_package::msg::Broadcast_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_package::msg::Broadcast_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_package::msg::Broadcast_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_package::msg::Broadcast_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_package::msg::Broadcast_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_package__msg__Broadcast
    std::shared_ptr<msg_package::msg::Broadcast_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_package__msg__Broadcast
    std::shared_ptr<msg_package::msg::Broadcast_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Broadcast_ & other) const
  {
    if (this->num != other.num) {
      return false;
    }
    return true;
  }
  bool operator!=(const Broadcast_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Broadcast_

// alias to use template instance with default allocator
using Broadcast =
  msg_package::msg::Broadcast_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_package

#endif  // MSG_PACKAGE__MSG__DETAIL__BROADCAST__STRUCT_HPP_
