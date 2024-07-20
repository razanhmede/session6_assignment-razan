// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from customized_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice
#include "customized_interfaces/srv/detail/check_stock__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "customized_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "customized_interfaces/srv/detail/check_stock__struct.h"
#include "customized_interfaces/srv/detail/check_stock__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // item_name
#include "rosidl_runtime_c/string_functions.h"  // item_name

// forward declare type support functions


using _CheckStock_Request__ros_msg_type = customized_interfaces__srv__CheckStock_Request;

static bool _CheckStock_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CheckStock_Request__ros_msg_type * ros_message = static_cast<const _CheckStock_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: item_name
  {
    const rosidl_runtime_c__String * str = &ros_message->item_name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _CheckStock_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CheckStock_Request__ros_msg_type * ros_message = static_cast<_CheckStock_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: item_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->item_name.data) {
      rosidl_runtime_c__String__init(&ros_message->item_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->item_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'item_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customized_interfaces
size_t get_serialized_size_customized_interfaces__srv__CheckStock_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CheckStock_Request__ros_msg_type * ros_message = static_cast<const _CheckStock_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name item_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->item_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _CheckStock_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_customized_interfaces__srv__CheckStock_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customized_interfaces
size_t max_serialized_size_customized_interfaces__srv__CheckStock_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: item_name
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = customized_interfaces__srv__CheckStock_Request;
    is_plain =
      (
      offsetof(DataType, item_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CheckStock_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_customized_interfaces__srv__CheckStock_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CheckStock_Request = {
  "customized_interfaces::srv",
  "CheckStock_Request",
  _CheckStock_Request__cdr_serialize,
  _CheckStock_Request__cdr_deserialize,
  _CheckStock_Request__get_serialized_size,
  _CheckStock_Request__max_serialized_size
};

static rosidl_message_type_support_t _CheckStock_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CheckStock_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_interfaces, srv, CheckStock_Request)() {
  return &_CheckStock_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "customized_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "customized_interfaces/srv/detail/check_stock__struct.h"
// already included above
// #include "customized_interfaces/srv/detail/check_stock__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CheckStock_Response__ros_msg_type = customized_interfaces__srv__CheckStock_Response;

static bool _CheckStock_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CheckStock_Response__ros_msg_type * ros_message = static_cast<const _CheckStock_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: stock_level
  {
    cdr << ros_message->stock_level;
  }

  return true;
}

static bool _CheckStock_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CheckStock_Response__ros_msg_type * ros_message = static_cast<_CheckStock_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: stock_level
  {
    cdr >> ros_message->stock_level;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customized_interfaces
size_t get_serialized_size_customized_interfaces__srv__CheckStock_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CheckStock_Response__ros_msg_type * ros_message = static_cast<const _CheckStock_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name stock_level
  {
    size_t item_size = sizeof(ros_message->stock_level);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CheckStock_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_customized_interfaces__srv__CheckStock_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_customized_interfaces
size_t max_serialized_size_customized_interfaces__srv__CheckStock_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: stock_level
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = customized_interfaces__srv__CheckStock_Response;
    is_plain =
      (
      offsetof(DataType, stock_level) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _CheckStock_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_customized_interfaces__srv__CheckStock_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CheckStock_Response = {
  "customized_interfaces::srv",
  "CheckStock_Response",
  _CheckStock_Response__cdr_serialize,
  _CheckStock_Response__cdr_deserialize,
  _CheckStock_Response__get_serialized_size,
  _CheckStock_Response__max_serialized_size
};

static rosidl_message_type_support_t _CheckStock_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CheckStock_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_interfaces, srv, CheckStock_Response)() {
  return &_CheckStock_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "customized_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "customized_interfaces/srv/check_stock.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CheckStock__callbacks = {
  "customized_interfaces::srv",
  "CheckStock",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_interfaces, srv, CheckStock_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_interfaces, srv, CheckStock_Response)(),
};

static rosidl_service_type_support_t CheckStock__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CheckStock__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, customized_interfaces, srv, CheckStock)() {
  return &CheckStock__handle;
}

#if defined(__cplusplus)
}
#endif
