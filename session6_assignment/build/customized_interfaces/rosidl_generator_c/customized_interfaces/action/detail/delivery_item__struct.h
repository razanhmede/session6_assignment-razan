// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from customized_interfaces:action/DeliveryItem.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_INTERFACES__ACTION__DETAIL__DELIVERY_ITEM__STRUCT_H_
#define CUSTOMIZED_INTERFACES__ACTION__DETAIL__DELIVERY_ITEM__STRUCT_H_

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

/// Struct defined in action/DeliveryItem in the package customized_interfaces.
typedef struct customized_interfaces__action__DeliveryItem_Goal
{
  rosidl_runtime_c__String item_name;
  int32_t quantity;
} customized_interfaces__action__DeliveryItem_Goal;

// Struct for a sequence of customized_interfaces__action__DeliveryItem_Goal.
typedef struct customized_interfaces__action__DeliveryItem_Goal__Sequence
{
  customized_interfaces__action__DeliveryItem_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_interfaces__action__DeliveryItem_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/DeliveryItem in the package customized_interfaces.
typedef struct customized_interfaces__action__DeliveryItem_Result
{
  bool success;
  rosidl_runtime_c__String message;
} customized_interfaces__action__DeliveryItem_Result;

// Struct for a sequence of customized_interfaces__action__DeliveryItem_Result.
typedef struct customized_interfaces__action__DeliveryItem_Result__Sequence
{
  customized_interfaces__action__DeliveryItem_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_interfaces__action__DeliveryItem_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/DeliveryItem in the package customized_interfaces.
typedef struct customized_interfaces__action__DeliveryItem_Feedback
{
  rosidl_runtime_c__String status;
} customized_interfaces__action__DeliveryItem_Feedback;

// Struct for a sequence of customized_interfaces__action__DeliveryItem_Feedback.
typedef struct customized_interfaces__action__DeliveryItem_Feedback__Sequence
{
  customized_interfaces__action__DeliveryItem_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_interfaces__action__DeliveryItem_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "customized_interfaces/action/detail/delivery_item__struct.h"

/// Struct defined in action/DeliveryItem in the package customized_interfaces.
typedef struct customized_interfaces__action__DeliveryItem_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  customized_interfaces__action__DeliveryItem_Goal goal;
} customized_interfaces__action__DeliveryItem_SendGoal_Request;

// Struct for a sequence of customized_interfaces__action__DeliveryItem_SendGoal_Request.
typedef struct customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence
{
  customized_interfaces__action__DeliveryItem_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/DeliveryItem in the package customized_interfaces.
typedef struct customized_interfaces__action__DeliveryItem_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} customized_interfaces__action__DeliveryItem_SendGoal_Response;

// Struct for a sequence of customized_interfaces__action__DeliveryItem_SendGoal_Response.
typedef struct customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence
{
  customized_interfaces__action__DeliveryItem_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/DeliveryItem in the package customized_interfaces.
typedef struct customized_interfaces__action__DeliveryItem_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} customized_interfaces__action__DeliveryItem_GetResult_Request;

// Struct for a sequence of customized_interfaces__action__DeliveryItem_GetResult_Request.
typedef struct customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence
{
  customized_interfaces__action__DeliveryItem_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "customized_interfaces/action/detail/delivery_item__struct.h"

/// Struct defined in action/DeliveryItem in the package customized_interfaces.
typedef struct customized_interfaces__action__DeliveryItem_GetResult_Response
{
  int8_t status;
  customized_interfaces__action__DeliveryItem_Result result;
} customized_interfaces__action__DeliveryItem_GetResult_Response;

// Struct for a sequence of customized_interfaces__action__DeliveryItem_GetResult_Response.
typedef struct customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence
{
  customized_interfaces__action__DeliveryItem_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "customized_interfaces/action/detail/delivery_item__struct.h"

/// Struct defined in action/DeliveryItem in the package customized_interfaces.
typedef struct customized_interfaces__action__DeliveryItem_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  customized_interfaces__action__DeliveryItem_Feedback feedback;
} customized_interfaces__action__DeliveryItem_FeedbackMessage;

// Struct for a sequence of customized_interfaces__action__DeliveryItem_FeedbackMessage.
typedef struct customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence
{
  customized_interfaces__action__DeliveryItem_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMIZED_INTERFACES__ACTION__DETAIL__DELIVERY_ITEM__STRUCT_H_
