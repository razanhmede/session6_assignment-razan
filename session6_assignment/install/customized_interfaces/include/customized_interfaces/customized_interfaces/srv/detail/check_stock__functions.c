// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from customized_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice
#include "customized_interfaces/srv/detail/check_stock__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `item_name`
#include "rosidl_runtime_c/string_functions.h"

bool
customized_interfaces__srv__CheckStock_Request__init(customized_interfaces__srv__CheckStock_Request * msg)
{
  if (!msg) {
    return false;
  }
  // item_name
  if (!rosidl_runtime_c__String__init(&msg->item_name)) {
    customized_interfaces__srv__CheckStock_Request__fini(msg);
    return false;
  }
  return true;
}

void
customized_interfaces__srv__CheckStock_Request__fini(customized_interfaces__srv__CheckStock_Request * msg)
{
  if (!msg) {
    return;
  }
  // item_name
  rosidl_runtime_c__String__fini(&msg->item_name);
}

bool
customized_interfaces__srv__CheckStock_Request__are_equal(const customized_interfaces__srv__CheckStock_Request * lhs, const customized_interfaces__srv__CheckStock_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // item_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->item_name), &(rhs->item_name)))
  {
    return false;
  }
  return true;
}

bool
customized_interfaces__srv__CheckStock_Request__copy(
  const customized_interfaces__srv__CheckStock_Request * input,
  customized_interfaces__srv__CheckStock_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // item_name
  if (!rosidl_runtime_c__String__copy(
      &(input->item_name), &(output->item_name)))
  {
    return false;
  }
  return true;
}

customized_interfaces__srv__CheckStock_Request *
customized_interfaces__srv__CheckStock_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customized_interfaces__srv__CheckStock_Request * msg = (customized_interfaces__srv__CheckStock_Request *)allocator.allocate(sizeof(customized_interfaces__srv__CheckStock_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_interfaces__srv__CheckStock_Request));
  bool success = customized_interfaces__srv__CheckStock_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
customized_interfaces__srv__CheckStock_Request__destroy(customized_interfaces__srv__CheckStock_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    customized_interfaces__srv__CheckStock_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
customized_interfaces__srv__CheckStock_Request__Sequence__init(customized_interfaces__srv__CheckStock_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customized_interfaces__srv__CheckStock_Request * data = NULL;

  if (size) {
    data = (customized_interfaces__srv__CheckStock_Request *)allocator.zero_allocate(size, sizeof(customized_interfaces__srv__CheckStock_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_interfaces__srv__CheckStock_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_interfaces__srv__CheckStock_Request__fini(&data[i - 1]);
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
customized_interfaces__srv__CheckStock_Request__Sequence__fini(customized_interfaces__srv__CheckStock_Request__Sequence * array)
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
      customized_interfaces__srv__CheckStock_Request__fini(&array->data[i]);
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

customized_interfaces__srv__CheckStock_Request__Sequence *
customized_interfaces__srv__CheckStock_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customized_interfaces__srv__CheckStock_Request__Sequence * array = (customized_interfaces__srv__CheckStock_Request__Sequence *)allocator.allocate(sizeof(customized_interfaces__srv__CheckStock_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = customized_interfaces__srv__CheckStock_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
customized_interfaces__srv__CheckStock_Request__Sequence__destroy(customized_interfaces__srv__CheckStock_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    customized_interfaces__srv__CheckStock_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
customized_interfaces__srv__CheckStock_Request__Sequence__are_equal(const customized_interfaces__srv__CheckStock_Request__Sequence * lhs, const customized_interfaces__srv__CheckStock_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!customized_interfaces__srv__CheckStock_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
customized_interfaces__srv__CheckStock_Request__Sequence__copy(
  const customized_interfaces__srv__CheckStock_Request__Sequence * input,
  customized_interfaces__srv__CheckStock_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(customized_interfaces__srv__CheckStock_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    customized_interfaces__srv__CheckStock_Request * data =
      (customized_interfaces__srv__CheckStock_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!customized_interfaces__srv__CheckStock_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          customized_interfaces__srv__CheckStock_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!customized_interfaces__srv__CheckStock_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
customized_interfaces__srv__CheckStock_Response__init(customized_interfaces__srv__CheckStock_Response * msg)
{
  if (!msg) {
    return false;
  }
  // stock_level
  return true;
}

void
customized_interfaces__srv__CheckStock_Response__fini(customized_interfaces__srv__CheckStock_Response * msg)
{
  if (!msg) {
    return;
  }
  // stock_level
}

bool
customized_interfaces__srv__CheckStock_Response__are_equal(const customized_interfaces__srv__CheckStock_Response * lhs, const customized_interfaces__srv__CheckStock_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stock_level
  if (lhs->stock_level != rhs->stock_level) {
    return false;
  }
  return true;
}

bool
customized_interfaces__srv__CheckStock_Response__copy(
  const customized_interfaces__srv__CheckStock_Response * input,
  customized_interfaces__srv__CheckStock_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // stock_level
  output->stock_level = input->stock_level;
  return true;
}

customized_interfaces__srv__CheckStock_Response *
customized_interfaces__srv__CheckStock_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customized_interfaces__srv__CheckStock_Response * msg = (customized_interfaces__srv__CheckStock_Response *)allocator.allocate(sizeof(customized_interfaces__srv__CheckStock_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(customized_interfaces__srv__CheckStock_Response));
  bool success = customized_interfaces__srv__CheckStock_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
customized_interfaces__srv__CheckStock_Response__destroy(customized_interfaces__srv__CheckStock_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    customized_interfaces__srv__CheckStock_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
customized_interfaces__srv__CheckStock_Response__Sequence__init(customized_interfaces__srv__CheckStock_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customized_interfaces__srv__CheckStock_Response * data = NULL;

  if (size) {
    data = (customized_interfaces__srv__CheckStock_Response *)allocator.zero_allocate(size, sizeof(customized_interfaces__srv__CheckStock_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = customized_interfaces__srv__CheckStock_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        customized_interfaces__srv__CheckStock_Response__fini(&data[i - 1]);
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
customized_interfaces__srv__CheckStock_Response__Sequence__fini(customized_interfaces__srv__CheckStock_Response__Sequence * array)
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
      customized_interfaces__srv__CheckStock_Response__fini(&array->data[i]);
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

customized_interfaces__srv__CheckStock_Response__Sequence *
customized_interfaces__srv__CheckStock_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  customized_interfaces__srv__CheckStock_Response__Sequence * array = (customized_interfaces__srv__CheckStock_Response__Sequence *)allocator.allocate(sizeof(customized_interfaces__srv__CheckStock_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = customized_interfaces__srv__CheckStock_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
customized_interfaces__srv__CheckStock_Response__Sequence__destroy(customized_interfaces__srv__CheckStock_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    customized_interfaces__srv__CheckStock_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
customized_interfaces__srv__CheckStock_Response__Sequence__are_equal(const customized_interfaces__srv__CheckStock_Response__Sequence * lhs, const customized_interfaces__srv__CheckStock_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!customized_interfaces__srv__CheckStock_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
customized_interfaces__srv__CheckStock_Response__Sequence__copy(
  const customized_interfaces__srv__CheckStock_Response__Sequence * input,
  customized_interfaces__srv__CheckStock_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(customized_interfaces__srv__CheckStock_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    customized_interfaces__srv__CheckStock_Response * data =
      (customized_interfaces__srv__CheckStock_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!customized_interfaces__srv__CheckStock_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          customized_interfaces__srv__CheckStock_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!customized_interfaces__srv__CheckStock_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
