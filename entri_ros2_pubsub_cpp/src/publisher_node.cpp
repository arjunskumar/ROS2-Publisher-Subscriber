#include <chrono>
#include <memory>

// TODO: Include necessary headers for rclcpp and your custom message: entri_ros2_pubsub_cpp/msg/robot_status.hpp

using namespace std::chrono_literals;

class MinimalPublisher : public rclcpp::Node
{
  public:
    MinimalPublisher()
    : Node("minimal_publisher"), battery_level_(100.0)
    {
      // TODO: Create a publisher for entri_ros2_pubsub_cpp::msg::RobotStatus on topic "robot_status"
      // publisher_ = ...

      // TODO: Create a wall timer that triggers the timer_callback every 500ms
      // timer_ = ...
    }

  private:
    void timer_callback()
    {
      // TODO: Create a RobotStatus message
      // auto message = ...

      // TODO: Set message fields:
      // message.robot_id = 12
      // message.battery_level = battery_level_
      // message.status_message = "Operating"

      // TODO: Print the message being published using RCLCPP_INFO
      // RCLCPP_INFO(...);

      // TODO: Publish the message
      // publisher_->publish(...);

      battery_level_ -= 0.5; // Simulate battery drain
    }

    // TODO: Declare the timer_ and publisher_ member variables
    
    double battery_level_;
};

int main(int argc, char * argv[])
{
  // TODO: Initialize rclcpp
  
  // TODO: spin the node to keep it running
  // rclcpp::spin(std::make_shared<MinimalPublisher>());

  // TODO: shutdown rclcpp
  return 0;
}
