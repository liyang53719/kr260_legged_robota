// Copyright 2016 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <robota_leg_pos/msg/leg_pos.hpp>

using std::placeholders::_1;

class legs_angle_scriber : public rclcpp::Node
{
public:
  legs_angle_scriber()
      : Node("get_legs_angle")
  {
    subscription_legs_angle = this->create_subscription<robota_leg_pos::msg::LegPos>(
        "/legs_angle", 10, std::bind(&legs_angle_scriber::topic_callback_legs_angle, this, _1));
  }

private:
  void topic_callback_legs_angle(const robota_leg_pos::msg::LegPos &msg) const
  {
    RCLCPP_INFO(this->get_logger(), ": rb_alfa: '%f';  rb_beta: '%f';  rb_gamma: '%f';  rf_alfa: '%f';  rf_beta: '%f';  rf_gamma: '%f';  lb_alfa: '%f';  lb_beta: '%f';  lb_gamma: '%f';  lf_alfa: '%f';  lf_beta: '%f';  lf_gamma: '%f'", msg.rb_alfa, msg.rb_beta, msg.rb_gamma, msg.rf_alfa, msg.rf_beta, msg.rf_gamma, msg.lb_alfa, msg.lb_beta, msg.lb_gamma, msg.lf_alfa, msg.lf_beta, msg.lf_gamma);
  }
  rclcpp::Subscription<robota_leg_pos::msg::LegPos>::SharedPtr subscription_legs_angle;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<legs_angle_scriber>());
  rclcpp::shutdown();
  return 0;
}
