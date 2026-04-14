cmake_minimum_required(VERSION 3.8)
project(entri_ros2_pubsub_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)

# TODO: Find the required packages 'rclcpp' and 'rosidl_default_generators'


# TODO: Generate the custom interface msg/RobotStatus.msg
#       Make sure to depend on 'rosidl_default_generators'
# rosidl_generate_interfaces(${PROJECT_NAME}
#   ...
# )

# TODO: Create the executable for 'publisher_node' from 'src/publisher_node.cpp'
# TODO: Add 'rclcpp' as a dependency for 'publisher_node'
# TODO: Call rosidl_target_interfaces for publisher_node to link the custom message target


# TODO: Create the executable for 'subscriber_node' from 'src/subscriber_node.cpp'
# TODO: Add 'rclcpp' as a dependency for 'subscriber_node'
# TODO: Call rosidl_target_interfaces for subscriber_node to link the custom message target


# Install targets
install(TARGETS
  # TODO: Add publisher_node and subscriber_node here
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
