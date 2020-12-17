#ifndef ROS2_TEST_BASE__ROS2_TEST_BASE_NODE_HPP_
#define ROS2_TEST_BASE__ROS2_TEST_BASE_NODE_HPP_

#include "ros2_test_base/visibility_control.h"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_components/register_node_macro.hpp"

namespace ros2_test_base
{

class Ros2TestBaseNode : public rclcpp::Node
{
public:
  Ros2TestBaseNode(const rclcpp::NodeOptions & node_options = rclcpp::NodeOptions());

  virtual ~Ros2TestBaseNode();
};

}  // namespace ros2_test_base

#endif  // ROS2_TEST_BASE__ROS2_TEST_BASE_NODE_HPP_
