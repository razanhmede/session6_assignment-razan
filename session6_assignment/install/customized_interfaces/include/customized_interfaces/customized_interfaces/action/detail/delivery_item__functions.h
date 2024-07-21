// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from customized_interfaces:action/DeliveryItem.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_INTERFACES__ACTION__DETAIL__DELIVERY_ITEM__FUNCTIONS_H_
#define CUSTOMIZED_INTERFACES__ACTION__DETAIL__DELIVERY_ITEM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "customized_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "customized_interfaces/action/detail/delivery_item__struct.h"

/// Initialize action/DeliveryItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_interfaces__action__DeliveryItem_Goal
 * )) before or use
 * customized_interfaces__action__DeliveryItem_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Goal__init(customized_interfaces__action__DeliveryItem_Goal * msg);

/// Finalize action/DeliveryItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Goal__fini(customized_interfaces__action__DeliveryItem_Goal * msg);

/// Create action/DeliveryItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_interfaces__action__DeliveryItem_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_Goal *
customized_interfaces__action__DeliveryItem_Goal__create();

/// Destroy action/DeliveryItem message.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Goal__destroy(customized_interfaces__action__DeliveryItem_Goal * msg);

/// Check for action/DeliveryItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Goal__are_equal(const customized_interfaces__action__DeliveryItem_Goal * lhs, const customized_interfaces__action__DeliveryItem_Goal * rhs);

/// Copy a action/DeliveryItem message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Goal__copy(
  const customized_interfaces__action__DeliveryItem_Goal * input,
  customized_interfaces__action__DeliveryItem_Goal * output);

/// Initialize array of action/DeliveryItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_interfaces__action__DeliveryItem_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Goal__Sequence__init(customized_interfaces__action__DeliveryItem_Goal__Sequence * array, size_t size);

/// Finalize array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Goal__Sequence__fini(customized_interfaces__action__DeliveryItem_Goal__Sequence * array);

/// Create array of action/DeliveryItem messages.
/**
 * It allocates the memory for the array and calls
 * customized_interfaces__action__DeliveryItem_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_Goal__Sequence *
customized_interfaces__action__DeliveryItem_Goal__Sequence__create(size_t size);

/// Destroy array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Goal__Sequence__destroy(customized_interfaces__action__DeliveryItem_Goal__Sequence * array);

/// Check for action/DeliveryItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Goal__Sequence__are_equal(const customized_interfaces__action__DeliveryItem_Goal__Sequence * lhs, const customized_interfaces__action__DeliveryItem_Goal__Sequence * rhs);

/// Copy an array of action/DeliveryItem messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Goal__Sequence__copy(
  const customized_interfaces__action__DeliveryItem_Goal__Sequence * input,
  customized_interfaces__action__DeliveryItem_Goal__Sequence * output);

/// Initialize action/DeliveryItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_interfaces__action__DeliveryItem_Result
 * )) before or use
 * customized_interfaces__action__DeliveryItem_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Result__init(customized_interfaces__action__DeliveryItem_Result * msg);

/// Finalize action/DeliveryItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Result__fini(customized_interfaces__action__DeliveryItem_Result * msg);

/// Create action/DeliveryItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_interfaces__action__DeliveryItem_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_Result *
customized_interfaces__action__DeliveryItem_Result__create();

/// Destroy action/DeliveryItem message.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Result__destroy(customized_interfaces__action__DeliveryItem_Result * msg);

/// Check for action/DeliveryItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Result__are_equal(const customized_interfaces__action__DeliveryItem_Result * lhs, const customized_interfaces__action__DeliveryItem_Result * rhs);

/// Copy a action/DeliveryItem message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Result__copy(
  const customized_interfaces__action__DeliveryItem_Result * input,
  customized_interfaces__action__DeliveryItem_Result * output);

/// Initialize array of action/DeliveryItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_interfaces__action__DeliveryItem_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Result__Sequence__init(customized_interfaces__action__DeliveryItem_Result__Sequence * array, size_t size);

/// Finalize array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Result__Sequence__fini(customized_interfaces__action__DeliveryItem_Result__Sequence * array);

/// Create array of action/DeliveryItem messages.
/**
 * It allocates the memory for the array and calls
 * customized_interfaces__action__DeliveryItem_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_Result__Sequence *
customized_interfaces__action__DeliveryItem_Result__Sequence__create(size_t size);

/// Destroy array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Result__Sequence__destroy(customized_interfaces__action__DeliveryItem_Result__Sequence * array);

/// Check for action/DeliveryItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Result__Sequence__are_equal(const customized_interfaces__action__DeliveryItem_Result__Sequence * lhs, const customized_interfaces__action__DeliveryItem_Result__Sequence * rhs);

/// Copy an array of action/DeliveryItem messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Result__Sequence__copy(
  const customized_interfaces__action__DeliveryItem_Result__Sequence * input,
  customized_interfaces__action__DeliveryItem_Result__Sequence * output);

/// Initialize action/DeliveryItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_interfaces__action__DeliveryItem_Feedback
 * )) before or use
 * customized_interfaces__action__DeliveryItem_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Feedback__init(customized_interfaces__action__DeliveryItem_Feedback * msg);

/// Finalize action/DeliveryItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Feedback__fini(customized_interfaces__action__DeliveryItem_Feedback * msg);

/// Create action/DeliveryItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_interfaces__action__DeliveryItem_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_Feedback *
customized_interfaces__action__DeliveryItem_Feedback__create();

/// Destroy action/DeliveryItem message.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Feedback__destroy(customized_interfaces__action__DeliveryItem_Feedback * msg);

/// Check for action/DeliveryItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Feedback__are_equal(const customized_interfaces__action__DeliveryItem_Feedback * lhs, const customized_interfaces__action__DeliveryItem_Feedback * rhs);

/// Copy a action/DeliveryItem message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Feedback__copy(
  const customized_interfaces__action__DeliveryItem_Feedback * input,
  customized_interfaces__action__DeliveryItem_Feedback * output);

/// Initialize array of action/DeliveryItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_interfaces__action__DeliveryItem_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Feedback__Sequence__init(customized_interfaces__action__DeliveryItem_Feedback__Sequence * array, size_t size);

/// Finalize array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Feedback__Sequence__fini(customized_interfaces__action__DeliveryItem_Feedback__Sequence * array);

/// Create array of action/DeliveryItem messages.
/**
 * It allocates the memory for the array and calls
 * customized_interfaces__action__DeliveryItem_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_Feedback__Sequence *
customized_interfaces__action__DeliveryItem_Feedback__Sequence__create(size_t size);

/// Destroy array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_Feedback__Sequence__destroy(customized_interfaces__action__DeliveryItem_Feedback__Sequence * array);

/// Check for action/DeliveryItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Feedback__Sequence__are_equal(const customized_interfaces__action__DeliveryItem_Feedback__Sequence * lhs, const customized_interfaces__action__DeliveryItem_Feedback__Sequence * rhs);

/// Copy an array of action/DeliveryItem messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_Feedback__Sequence__copy(
  const customized_interfaces__action__DeliveryItem_Feedback__Sequence * input,
  customized_interfaces__action__DeliveryItem_Feedback__Sequence * output);

/// Initialize action/DeliveryItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_interfaces__action__DeliveryItem_SendGoal_Request
 * )) before or use
 * customized_interfaces__action__DeliveryItem_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Request__init(customized_interfaces__action__DeliveryItem_SendGoal_Request * msg);

/// Finalize action/DeliveryItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_SendGoal_Request__fini(customized_interfaces__action__DeliveryItem_SendGoal_Request * msg);

/// Create action/DeliveryItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_SendGoal_Request *
customized_interfaces__action__DeliveryItem_SendGoal_Request__create();

/// Destroy action/DeliveryItem message.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_SendGoal_Request__destroy(customized_interfaces__action__DeliveryItem_SendGoal_Request * msg);

/// Check for action/DeliveryItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Request__are_equal(const customized_interfaces__action__DeliveryItem_SendGoal_Request * lhs, const customized_interfaces__action__DeliveryItem_SendGoal_Request * rhs);

/// Copy a action/DeliveryItem message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Request__copy(
  const customized_interfaces__action__DeliveryItem_SendGoal_Request * input,
  customized_interfaces__action__DeliveryItem_SendGoal_Request * output);

/// Initialize array of action/DeliveryItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence__init(customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence__fini(customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence * array);

/// Create array of action/DeliveryItem messages.
/**
 * It allocates the memory for the array and calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence *
customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence__destroy(customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence * array);

/// Check for action/DeliveryItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence__are_equal(const customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence * lhs, const customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/DeliveryItem messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence__copy(
  const customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence * input,
  customized_interfaces__action__DeliveryItem_SendGoal_Request__Sequence * output);

/// Initialize action/DeliveryItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_interfaces__action__DeliveryItem_SendGoal_Response
 * )) before or use
 * customized_interfaces__action__DeliveryItem_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Response__init(customized_interfaces__action__DeliveryItem_SendGoal_Response * msg);

/// Finalize action/DeliveryItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_SendGoal_Response__fini(customized_interfaces__action__DeliveryItem_SendGoal_Response * msg);

/// Create action/DeliveryItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_SendGoal_Response *
customized_interfaces__action__DeliveryItem_SendGoal_Response__create();

/// Destroy action/DeliveryItem message.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_SendGoal_Response__destroy(customized_interfaces__action__DeliveryItem_SendGoal_Response * msg);

/// Check for action/DeliveryItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Response__are_equal(const customized_interfaces__action__DeliveryItem_SendGoal_Response * lhs, const customized_interfaces__action__DeliveryItem_SendGoal_Response * rhs);

/// Copy a action/DeliveryItem message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Response__copy(
  const customized_interfaces__action__DeliveryItem_SendGoal_Response * input,
  customized_interfaces__action__DeliveryItem_SendGoal_Response * output);

/// Initialize array of action/DeliveryItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence__init(customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence__fini(customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence * array);

/// Create array of action/DeliveryItem messages.
/**
 * It allocates the memory for the array and calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence *
customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence__destroy(customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence * array);

/// Check for action/DeliveryItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence__are_equal(const customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence * lhs, const customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/DeliveryItem messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence__copy(
  const customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence * input,
  customized_interfaces__action__DeliveryItem_SendGoal_Response__Sequence * output);

/// Initialize action/DeliveryItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_interfaces__action__DeliveryItem_GetResult_Request
 * )) before or use
 * customized_interfaces__action__DeliveryItem_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Request__init(customized_interfaces__action__DeliveryItem_GetResult_Request * msg);

/// Finalize action/DeliveryItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_GetResult_Request__fini(customized_interfaces__action__DeliveryItem_GetResult_Request * msg);

/// Create action/DeliveryItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_interfaces__action__DeliveryItem_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_GetResult_Request *
customized_interfaces__action__DeliveryItem_GetResult_Request__create();

/// Destroy action/DeliveryItem message.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_GetResult_Request__destroy(customized_interfaces__action__DeliveryItem_GetResult_Request * msg);

/// Check for action/DeliveryItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Request__are_equal(const customized_interfaces__action__DeliveryItem_GetResult_Request * lhs, const customized_interfaces__action__DeliveryItem_GetResult_Request * rhs);

/// Copy a action/DeliveryItem message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Request__copy(
  const customized_interfaces__action__DeliveryItem_GetResult_Request * input,
  customized_interfaces__action__DeliveryItem_GetResult_Request * output);

/// Initialize array of action/DeliveryItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_interfaces__action__DeliveryItem_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence__init(customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence__fini(customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence * array);

/// Create array of action/DeliveryItem messages.
/**
 * It allocates the memory for the array and calls
 * customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence *
customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence__destroy(customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence * array);

/// Check for action/DeliveryItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence__are_equal(const customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence * lhs, const customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence * rhs);

/// Copy an array of action/DeliveryItem messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence__copy(
  const customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence * input,
  customized_interfaces__action__DeliveryItem_GetResult_Request__Sequence * output);

/// Initialize action/DeliveryItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_interfaces__action__DeliveryItem_GetResult_Response
 * )) before or use
 * customized_interfaces__action__DeliveryItem_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Response__init(customized_interfaces__action__DeliveryItem_GetResult_Response * msg);

/// Finalize action/DeliveryItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_GetResult_Response__fini(customized_interfaces__action__DeliveryItem_GetResult_Response * msg);

/// Create action/DeliveryItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_interfaces__action__DeliveryItem_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_GetResult_Response *
customized_interfaces__action__DeliveryItem_GetResult_Response__create();

/// Destroy action/DeliveryItem message.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_GetResult_Response__destroy(customized_interfaces__action__DeliveryItem_GetResult_Response * msg);

/// Check for action/DeliveryItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Response__are_equal(const customized_interfaces__action__DeliveryItem_GetResult_Response * lhs, const customized_interfaces__action__DeliveryItem_GetResult_Response * rhs);

/// Copy a action/DeliveryItem message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Response__copy(
  const customized_interfaces__action__DeliveryItem_GetResult_Response * input,
  customized_interfaces__action__DeliveryItem_GetResult_Response * output);

/// Initialize array of action/DeliveryItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_interfaces__action__DeliveryItem_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence__init(customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence__fini(customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence * array);

/// Create array of action/DeliveryItem messages.
/**
 * It allocates the memory for the array and calls
 * customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence *
customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence__destroy(customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence * array);

/// Check for action/DeliveryItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence__are_equal(const customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence * lhs, const customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence * rhs);

/// Copy an array of action/DeliveryItem messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence__copy(
  const customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence * input,
  customized_interfaces__action__DeliveryItem_GetResult_Response__Sequence * output);

/// Initialize action/DeliveryItem message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * customized_interfaces__action__DeliveryItem_FeedbackMessage
 * )) before or use
 * customized_interfaces__action__DeliveryItem_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_FeedbackMessage__init(customized_interfaces__action__DeliveryItem_FeedbackMessage * msg);

/// Finalize action/DeliveryItem message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_FeedbackMessage__fini(customized_interfaces__action__DeliveryItem_FeedbackMessage * msg);

/// Create action/DeliveryItem message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * customized_interfaces__action__DeliveryItem_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_FeedbackMessage *
customized_interfaces__action__DeliveryItem_FeedbackMessage__create();

/// Destroy action/DeliveryItem message.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_FeedbackMessage__destroy(customized_interfaces__action__DeliveryItem_FeedbackMessage * msg);

/// Check for action/DeliveryItem message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_FeedbackMessage__are_equal(const customized_interfaces__action__DeliveryItem_FeedbackMessage * lhs, const customized_interfaces__action__DeliveryItem_FeedbackMessage * rhs);

/// Copy a action/DeliveryItem message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_FeedbackMessage__copy(
  const customized_interfaces__action__DeliveryItem_FeedbackMessage * input,
  customized_interfaces__action__DeliveryItem_FeedbackMessage * output);

/// Initialize array of action/DeliveryItem messages.
/**
 * It allocates the memory for the number of elements and calls
 * customized_interfaces__action__DeliveryItem_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence__init(customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence__fini(customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence * array);

/// Create array of action/DeliveryItem messages.
/**
 * It allocates the memory for the array and calls
 * customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence *
customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/DeliveryItem messages.
/**
 * It calls
 * customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
void
customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence__destroy(customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence * array);

/// Check for action/DeliveryItem message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence__are_equal(const customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence * lhs, const customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/DeliveryItem messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_customized_interfaces
bool
customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence__copy(
  const customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence * input,
  customized_interfaces__action__DeliveryItem_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOMIZED_INTERFACES__ACTION__DETAIL__DELIVERY_ITEM__FUNCTIONS_H_
