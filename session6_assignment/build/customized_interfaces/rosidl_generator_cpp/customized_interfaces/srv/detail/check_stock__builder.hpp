// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from customized_interfaces:srv/CheckStock.idl
// generated code does not contain a copyright notice

#ifndef CUSTOMIZED_INTERFACES__SRV__DETAIL__CHECK_STOCK__BUILDER_HPP_
#define CUSTOMIZED_INTERFACES__SRV__DETAIL__CHECK_STOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "customized_interfaces/srv/detail/check_stock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace customized_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckStock_Request_item_name
{
public:
  Init_CheckStock_Request_item_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customized_interfaces::srv::CheckStock_Request item_name(::customized_interfaces::srv::CheckStock_Request::_item_name_type arg)
  {
    msg_.item_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_interfaces::srv::CheckStock_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_interfaces::srv::CheckStock_Request>()
{
  return customized_interfaces::srv::builder::Init_CheckStock_Request_item_name();
}

}  // namespace customized_interfaces


namespace customized_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckStock_Response_stock_level
{
public:
  Init_CheckStock_Response_stock_level()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::customized_interfaces::srv::CheckStock_Response stock_level(::customized_interfaces::srv::CheckStock_Response::_stock_level_type arg)
  {
    msg_.stock_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::customized_interfaces::srv::CheckStock_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::customized_interfaces::srv::CheckStock_Response>()
{
  return customized_interfaces::srv::builder::Init_CheckStock_Response_stock_level();
}

}  // namespace customized_interfaces

#endif  // CUSTOMIZED_INTERFACES__SRV__DETAIL__CHECK_STOCK__BUILDER_HPP_
