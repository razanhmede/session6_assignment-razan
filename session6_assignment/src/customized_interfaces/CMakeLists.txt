cmake_minimum_required(VERSION 3.5)
project(customized_interfaces)

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate the custom service files
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/CheckStock.srv"
  "action/DeliveryItem.action"
)

# Export dependencies
ament_export_dependencies(rosidl_default_runtime)

ament_package()

