// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from customized_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_INTERFACES__SRV__DETAIL__CHECK_STOCK__STRUCT_H_
#define CUSTOMIZED_INTERFACES__SRV__DETAIL__CHECK_STOCK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'item_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/CheckStock in the package customized_interfaces.
typedef struct customized_interfaces__srv__CheckStock_Request
{
  rosidl_runtime_c__String item_name;
} customized_interfaces__srv__CheckStock_Request;

// Struct for a sequence of customized_interfaces__srv__CheckStock_Request.
typedef struct customized_interfaces__srv__CheckStock_Request__Sequence
{
  customized_interfaces__srv__CheckStock_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_interfaces__srv__CheckStock_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CheckStock in the package customized_interfaces.
typedef struct customized_interfaces__srv__CheckStock_Response
{
  int32_t stock_level;
} customized_interfaces__srv__CheckStock_Response;

// Struct for a sequence of customized_interfaces__srv__CheckStock_Response.
typedef struct customized_interfaces__srv__CheckStock_Response__Sequence
{
  customized_interfaces__srv__CheckStock_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_interfaces__srv__CheckStock_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMIZED_INTERFACES__SRV__DETAIL__CHECK_STOCK__STRUCT_H_
