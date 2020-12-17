#include "ros2_test_base/ros2_test_base_node.hpp"

namespace ros2_test_base
{

Ros2TestBaseNode::Ros2TestBaseNode(const rclcpp::NodeOptions & node_options)
: Node("test_node", node_options)
{
  setvbuf(stdout, nullptr, _IONBF, BUFSIZ);
  RCLCPP_INFO(this->get_logger(), "Test node was started.");
}

Ros2TestBaseNode::~Ros2TestBaseNode()
{
  RCLCPP_INFO(this->get_logger(), "Shutdown test node.");
  rclcpp::shutdown();
}

}  // namespace ros2_test_base

RCLCPP_COMPONENTS_REGISTER_NODE(ros2_test_base::Ros2TestBaseNode)
