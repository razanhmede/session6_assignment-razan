// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from customized_interfaces:action/DeliveryItem.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_INTERFACES__ACTION__DETAIL__DELIVERY_ITEM__BUILDER_HPP_
#define CUSTOMIZED_INTERFACES__ACTION__DETAIL__DELIVERY_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "customized_interfaces/action/detail/delivery_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace customized_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryItem_Goal_quantity
{
public:
  explicit Init_DeliveryItem_Goal_quantity(::customized_interfaces::action::DeliveryItem_Goal & msg)
  : msg_(msg)
  {}
  ::customized_interfaces::action::DeliveryItem_Goal quantity(::customized_interfaces::action::DeliveryItem_Goal::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_Goal msg_;
};

class Init_DeliveryItem_Goal_item_name
{
public:
  Init_DeliveryItem_Goal_item_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryItem_Goal_quantity item_name(::customized_interfaces::action::DeliveryItem_Goal::_item_name_type arg)
  {
    msg_.item_name = std::move(arg);
    return Init_DeliveryItem_Goal_quantity(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_interfaces::action::DeliveryItem_Goal>()
{
  return customized_interfaces::action::builder::Init_DeliveryItem_Goal_item_name();
}

}  // namespace customized_interfaces


namespace customized_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryItem_Result_message
{
public:
  explicit Init_DeliveryItem_Result_message(::customized_interfaces::action::DeliveryItem_Result & msg)
  : msg_(msg)
  {}
  ::customized_interfaces::action::DeliveryItem_Result message(::customized_interfaces::action::DeliveryItem_Result::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_Result msg_;
};

class Init_DeliveryItem_Result_success
{
public:
  Init_DeliveryItem_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryItem_Result_message success(::customized_interfaces::action::DeliveryItem_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DeliveryItem_Result_message(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_interfaces::action::DeliveryItem_Result>()
{
  return customized_interfaces::action::builder::Init_DeliveryItem_Result_success();
}

}  // namespace customized_interfaces


namespace customized_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryItem_Feedback_status
{
public:
  Init_DeliveryItem_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customized_interfaces::action::DeliveryItem_Feedback status(::customized_interfaces::action::DeliveryItem_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_interfaces::action::DeliveryItem_Feedback>()
{
  return customized_interfaces::action::builder::Init_DeliveryItem_Feedback_status();
}

}  // namespace customized_interfaces


namespace customized_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryItem_SendGoal_Request_goal
{
public:
  explicit Init_DeliveryItem_SendGoal_Request_goal(::customized_interfaces::action::DeliveryItem_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::customized_interfaces::action::DeliveryItem_SendGoal_Request goal(::customized_interfaces::action::DeliveryItem_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_SendGoal_Request msg_;
};

class Init_DeliveryItem_SendGoal_Request_goal_id
{
public:
  Init_DeliveryItem_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryItem_SendGoal_Request_goal goal_id(::customized_interfaces::action::DeliveryItem_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DeliveryItem_SendGoal_Request_goal(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_interfaces::action::DeliveryItem_SendGoal_Request>()
{
  return customized_interfaces::action::builder::Init_DeliveryItem_SendGoal_Request_goal_id();
}

}  // namespace customized_interfaces


namespace customized_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryItem_SendGoal_Response_stamp
{
public:
  explicit Init_DeliveryItem_SendGoal_Response_stamp(::customized_interfaces::action::DeliveryItem_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::customized_interfaces::action::DeliveryItem_SendGoal_Response stamp(::customized_interfaces::action::DeliveryItem_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_SendGoal_Response msg_;
};

class Init_DeliveryItem_SendGoal_Response_accepted
{
public:
  Init_DeliveryItem_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryItem_SendGoal_Response_stamp accepted(::customized_interfaces::action::DeliveryItem_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_DeliveryItem_SendGoal_Response_stamp(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_interfaces::action::DeliveryItem_SendGoal_Response>()
{
  return customized_interfaces::action::builder::Init_DeliveryItem_SendGoal_Response_accepted();
}

}  // namespace customized_interfaces


namespace customized_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryItem_GetResult_Request_goal_id
{
public:
  Init_DeliveryItem_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customized_interfaces::action::DeliveryItem_GetResult_Request goal_id(::customized_interfaces::action::DeliveryItem_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_interfaces::action::DeliveryItem_GetResult_Request>()
{
  return customized_interfaces::action::builder::Init_DeliveryItem_GetResult_Request_goal_id();
}

}  // namespace customized_interfaces


namespace customized_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryItem_GetResult_Response_result
{
public:
  explicit Init_DeliveryItem_GetResult_Response_result(::customized_interfaces::action::DeliveryItem_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::customized_interfaces::action::DeliveryItem_GetResult_Response result(::customized_interfaces::action::DeliveryItem_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_GetResult_Response msg_;
};

class Init_DeliveryItem_GetResult_Response_status
{
public:
  Init_DeliveryItem_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryItem_GetResult_Response_result status(::customized_interfaces::action::DeliveryItem_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DeliveryItem_GetResult_Response_result(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_interfaces::action::DeliveryItem_GetResult_Response>()
{
  return customized_interfaces::action::builder::Init_DeliveryItem_GetResult_Response_status();
}

}  // namespace customized_interfaces


namespace customized_interfaces
{

namespace action
{

namespace builder
{

class Init_DeliveryItem_FeedbackMessage_feedback
{
public:
  explicit Init_DeliveryItem_FeedbackMessage_feedback(::customized_interfaces::action::DeliveryItem_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::customized_interfaces::action::DeliveryItem_FeedbackMessage feedback(::customized_interfaces::action::DeliveryItem_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_FeedbackMessage msg_;
};

class Init_DeliveryItem_FeedbackMessage_goal_id
{
public:
  Init_DeliveryItem_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryItem_FeedbackMessage_feedback goal_id(::customized_interfaces::action::DeliveryItem_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_DeliveryItem_FeedbackMessage_feedback(msg_);
  }

private:
  ::customized_interfaces::action::DeliveryItem_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_interfaces::action::DeliveryItem_FeedbackMessage>()
{
  return customized_interfaces::action::builder::Init_DeliveryItem_FeedbackMessage_goal_id();
}

}  // namespace customized_interfaces

#endif  // CUSTOMIZED_INTERFACES__ACTION__DETAIL__DELIVERY_ITEM__BUILDER_HPP_
