#include <memory>

// TODO: Include necessary headers for rclcpp and entri_ros2_pubsub_cpp/msg/robot_status.hpp

using std::placeholders::_1;

class MinimalSubscriber : public rclcpp::Node
{
  public:
    MinimalSubscriber()
    : Node("minimal_subscriber")
    {
      // TODO: Create a subscriber for entri_ros2_pubsub_cpp::msg::RobotStatus messages on topic "robot_status"
      // Bind the callback function topic_callback.
      // subscription_ = ...
    }

  private:
    // TODO: Implement the callback function 'topic_callback' that takes a RobotStatus::SharedPtr as an argument
    // void topic_callback(const entri_ros2_pubsub_cpp::msg::RobotStatus::SharedPtr msg) const
    // {
    //   // TODO: Print the received message using RCLCPP_INFO to match: "Robot 12 is at 99.5% battery. Status: Operating"
    //   // RCLCPP_INFO(..., "Robot %d is at %.1f%% battery. Status: %s", ...);
    // }

    // TODO: Declare the subscription_ member variable
};

int main(int argc, char * argv[])
{
  // TODO: Initialize rclcpp

  // TODO: spin the node to keep it running
  // rclcpp::spin(std::make_shared<MinimalSubscriber>());

  // TODO: shutdown rclcpp
  return 0;
}
