#ifndef _SLROS_BUSMSG_CONVERSION_H_
#define _SLROS_BUSMSG_CONVERSION_H_

#include "rclcpp/rclcpp.hpp"
#include <builtin_interfaces/msg/time.hpp>
#include <geometry_msgs/msg/vector3.hpp>
#include <robota_leg_pos/msg/leg_pos.hpp>
#include <sensor_msgs/msg/joy.hpp>
#include <std_msgs/msg/header.hpp>
#include "leg_contral_from_joy_types.h"
#include "slros_msgconvert_utils.h"


void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr);
void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr);

void convertFromBus(geometry_msgs::msg::Vector3& msgPtr, SL_Bus_geometry_msgs_Vector3 const* busPtr);
void convertToBus(SL_Bus_geometry_msgs_Vector3* busPtr, const geometry_msgs::msg::Vector3& msgPtr);

void convertFromBus(robota_leg_pos::msg::LegPos& msgPtr, SL_Bus_robota_leg_pos_LegPos const* busPtr);
void convertToBus(SL_Bus_robota_leg_pos_LegPos* busPtr, const robota_leg_pos::msg::LegPos& msgPtr);

void convertFromBus(sensor_msgs::msg::Joy& msgPtr, SL_Bus_sensor_msgs_Joy const* busPtr);
void convertToBus(SL_Bus_sensor_msgs_Joy* busPtr, const sensor_msgs::msg::Joy& msgPtr);

void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr);
void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr);


#endif
