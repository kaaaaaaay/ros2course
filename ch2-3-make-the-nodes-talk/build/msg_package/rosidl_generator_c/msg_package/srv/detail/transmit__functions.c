// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_package:srv/Transmit.idl
// generated code does not contain a copyright notice
#include "msg_package/srv/detail/transmit__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
msg_package__srv__Transmit_Request__init(msg_package__srv__Transmit_Request * msg)
{
  if (!msg) {
    return false;
  }
  // value
  // value2
  // value3
  return true;
}

void
msg_package__srv__Transmit_Request__fini(msg_package__srv__Transmit_Request * msg)
{
  if (!msg) {
    return;
  }
  // value
  // value2
  // value3
}

bool
msg_package__srv__Transmit_Request__are_equal(const msg_package__srv__Transmit_Request * lhs, const msg_package__srv__Transmit_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  // value2
  if (lhs->value2 != rhs->value2) {
    return false;
  }
  // value3
  if (lhs->value3 != rhs->value3) {
    return false;
  }
  return true;
}

bool
msg_package__srv__Transmit_Request__copy(
  const msg_package__srv__Transmit_Request * input,
  msg_package__srv__Transmit_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  // value2
  output->value2 = input->value2;
  // value3
  output->value3 = input->value3;
  return true;
}

msg_package__srv__Transmit_Request *
msg_package__srv__Transmit_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__srv__Transmit_Request * msg = (msg_package__srv__Transmit_Request *)allocator.allocate(sizeof(msg_package__srv__Transmit_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_package__srv__Transmit_Request));
  bool success = msg_package__srv__Transmit_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_package__srv__Transmit_Request__destroy(msg_package__srv__Transmit_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_package__srv__Transmit_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_package__srv__Transmit_Request__Sequence__init(msg_package__srv__Transmit_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__srv__Transmit_Request * data = NULL;

  if (size) {
    data = (msg_package__srv__Transmit_Request *)allocator.zero_allocate(size, sizeof(msg_package__srv__Transmit_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_package__srv__Transmit_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_package__srv__Transmit_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_package__srv__Transmit_Request__Sequence__fini(msg_package__srv__Transmit_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_package__srv__Transmit_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_package__srv__Transmit_Request__Sequence *
msg_package__srv__Transmit_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__srv__Transmit_Request__Sequence * array = (msg_package__srv__Transmit_Request__Sequence *)allocator.allocate(sizeof(msg_package__srv__Transmit_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_package__srv__Transmit_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_package__srv__Transmit_Request__Sequence__destroy(msg_package__srv__Transmit_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_package__srv__Transmit_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_package__srv__Transmit_Request__Sequence__are_equal(const msg_package__srv__Transmit_Request__Sequence * lhs, const msg_package__srv__Transmit_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_package__srv__Transmit_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_package__srv__Transmit_Request__Sequence__copy(
  const msg_package__srv__Transmit_Request__Sequence * input,
  msg_package__srv__Transmit_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_package__srv__Transmit_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_package__srv__Transmit_Request * data =
      (msg_package__srv__Transmit_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_package__srv__Transmit_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_package__srv__Transmit_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_package__srv__Transmit_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
msg_package__srv__Transmit_Response__init(msg_package__srv__Transmit_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result
  return true;
}

void
msg_package__srv__Transmit_Response__fini(msg_package__srv__Transmit_Response * msg)
{
  if (!msg) {
    return;
  }
  // result
}

bool
msg_package__srv__Transmit_Response__are_equal(const msg_package__srv__Transmit_Response * lhs, const msg_package__srv__Transmit_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (lhs->result != rhs->result) {
    return false;
  }
  return true;
}

bool
msg_package__srv__Transmit_Response__copy(
  const msg_package__srv__Transmit_Response * input,
  msg_package__srv__Transmit_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  output->result = input->result;
  return true;
}

msg_package__srv__Transmit_Response *
msg_package__srv__Transmit_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__srv__Transmit_Response * msg = (msg_package__srv__Transmit_Response *)allocator.allocate(sizeof(msg_package__srv__Transmit_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_package__srv__Transmit_Response));
  bool success = msg_package__srv__Transmit_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_package__srv__Transmit_Response__destroy(msg_package__srv__Transmit_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_package__srv__Transmit_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_package__srv__Transmit_Response__Sequence__init(msg_package__srv__Transmit_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__srv__Transmit_Response * data = NULL;

  if (size) {
    data = (msg_package__srv__Transmit_Response *)allocator.zero_allocate(size, sizeof(msg_package__srv__Transmit_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_package__srv__Transmit_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_package__srv__Transmit_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_package__srv__Transmit_Response__Sequence__fini(msg_package__srv__Transmit_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_package__srv__Transmit_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_package__srv__Transmit_Response__Sequence *
msg_package__srv__Transmit_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__srv__Transmit_Response__Sequence * array = (msg_package__srv__Transmit_Response__Sequence *)allocator.allocate(sizeof(msg_package__srv__Transmit_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_package__srv__Transmit_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_package__srv__Transmit_Response__Sequence__destroy(msg_package__srv__Transmit_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_package__srv__Transmit_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_package__srv__Transmit_Response__Sequence__are_equal(const msg_package__srv__Transmit_Response__Sequence * lhs, const msg_package__srv__Transmit_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_package__srv__Transmit_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_package__srv__Transmit_Response__Sequence__copy(
  const msg_package__srv__Transmit_Response__Sequence * input,
  msg_package__srv__Transmit_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_package__srv__Transmit_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_package__srv__Transmit_Response * data =
      (msg_package__srv__Transmit_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_package__srv__Transmit_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_package__srv__Transmit_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_package__srv__Transmit_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "msg_package/srv/detail/transmit__functions.h"

bool
msg_package__srv__Transmit_Event__init(msg_package__srv__Transmit_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    msg_package__srv__Transmit_Event__fini(msg);
    return false;
  }
  // request
  if (!msg_package__srv__Transmit_Request__Sequence__init(&msg->request, 0)) {
    msg_package__srv__Transmit_Event__fini(msg);
    return false;
  }
  // response
  if (!msg_package__srv__Transmit_Response__Sequence__init(&msg->response, 0)) {
    msg_package__srv__Transmit_Event__fini(msg);
    return false;
  }
  return true;
}

void
msg_package__srv__Transmit_Event__fini(msg_package__srv__Transmit_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  msg_package__srv__Transmit_Request__Sequence__fini(&msg->request);
  // response
  msg_package__srv__Transmit_Response__Sequence__fini(&msg->response);
}

bool
msg_package__srv__Transmit_Event__are_equal(const msg_package__srv__Transmit_Event * lhs, const msg_package__srv__Transmit_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!msg_package__srv__Transmit_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!msg_package__srv__Transmit_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
msg_package__srv__Transmit_Event__copy(
  const msg_package__srv__Transmit_Event * input,
  msg_package__srv__Transmit_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!msg_package__srv__Transmit_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!msg_package__srv__Transmit_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

msg_package__srv__Transmit_Event *
msg_package__srv__Transmit_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__srv__Transmit_Event * msg = (msg_package__srv__Transmit_Event *)allocator.allocate(sizeof(msg_package__srv__Transmit_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_package__srv__Transmit_Event));
  bool success = msg_package__srv__Transmit_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
msg_package__srv__Transmit_Event__destroy(msg_package__srv__Transmit_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    msg_package__srv__Transmit_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
msg_package__srv__Transmit_Event__Sequence__init(msg_package__srv__Transmit_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__srv__Transmit_Event * data = NULL;

  if (size) {
    data = (msg_package__srv__Transmit_Event *)allocator.zero_allocate(size, sizeof(msg_package__srv__Transmit_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_package__srv__Transmit_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_package__srv__Transmit_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_package__srv__Transmit_Event__Sequence__fini(msg_package__srv__Transmit_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_package__srv__Transmit_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_package__srv__Transmit_Event__Sequence *
msg_package__srv__Transmit_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  msg_package__srv__Transmit_Event__Sequence * array = (msg_package__srv__Transmit_Event__Sequence *)allocator.allocate(sizeof(msg_package__srv__Transmit_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = msg_package__srv__Transmit_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
msg_package__srv__Transmit_Event__Sequence__destroy(msg_package__srv__Transmit_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    msg_package__srv__Transmit_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
msg_package__srv__Transmit_Event__Sequence__are_equal(const msg_package__srv__Transmit_Event__Sequence * lhs, const msg_package__srv__Transmit_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!msg_package__srv__Transmit_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
msg_package__srv__Transmit_Event__Sequence__copy(
  const msg_package__srv__Transmit_Event__Sequence * input,
  msg_package__srv__Transmit_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(msg_package__srv__Transmit_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    msg_package__srv__Transmit_Event * data =
      (msg_package__srv__Transmit_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!msg_package__srv__Transmit_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          msg_package__srv__Transmit_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!msg_package__srv__Transmit_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
