// Copyright 2022-2023 The MathWorks, Inc.
// Generated 20-Jul-2024 23:32:08
#ifndef _SLROS2_INITIALIZE_H_
#define _SLROS2_INITIALIZE_H_
#include "leg_contral_from_joy_types.h"
// Generic pub-sub header
#include "slros2_generic_pubsub.h"
extern rclcpp::Node::SharedPtr SLROSNodePtr;
#ifndef SET_QOS_VALUES
#define SET_QOS_VALUES(qosStruct, _history, _depth, _durability, _reliability, _deadline \
, _lifespan, _liveliness, _lease_duration, _avoid_ros_namespace_conventions)             \
    {                                                                                    \
        qosStruct.history = _history;                                                    \
        qosStruct.depth = _depth;                                                        \
        qosStruct.durability = _durability;                                              \
        qosStruct.reliability = _reliability;                                            \
        qosStruct.deadline.sec = _deadline.sec;                                          \
        qosStruct.deadline.nsec = _deadline.nsec;                                        \
        qosStruct.lifespan.sec = _lifespan.sec;                                          \
        qosStruct.lifespan.nsec = _lifespan.nsec;                                        \
        qosStruct.liveliness = _liveliness;                                              \
        qosStruct.liveliness_lease_duration.sec = _lease_duration.sec;                   \
        qosStruct.liveliness_lease_duration.nsec = _lease_duration.nsec;                 \
        qosStruct.avoid_ros_namespace_conventions = _avoid_ros_namespace_conventions;    \
    }
#endif
inline rclcpp::QoS getQOSSettingsFromRMW(const rmw_qos_profile_t& qosProfile) {
    rclcpp::QoS qos(rclcpp::QoSInitialization::from_rmw(qosProfile));
    if (RMW_QOS_POLICY_DURABILITY_TRANSIENT_LOCAL == qosProfile.durability) {
        qos.transient_local();
    } else {
        qos.durability_volatile();
    }
    if (RMW_QOS_POLICY_RELIABILITY_RELIABLE == qosProfile.reliability) {
        qos.reliable();
    } else {
        qos.best_effort();
    }
    return qos;
}
// leg_contral_from_joy/Joy_2_Leg_Angle/Publish1
extern SimulinkPublisher<sensor_msgs::msg::Joy,SL_Bus_sensor_msgs_Joy> Pub_leg_contral_from_joy_65;
// leg_contral_from_joy/Joy_2_Leg_Angle/Publish2
extern SimulinkPublisher<geometry_msgs::msg::Vector3,SL_Bus_geometry_msgs_Vector3> Pub_leg_contral_from_joy_122;
// leg_contral_from_joy/Joy_2_Leg_Angle/Publish3
extern SimulinkPublisher<geometry_msgs::msg::Vector3,SL_Bus_geometry_msgs_Vector3> Pub_leg_contral_from_joy_124;
// leg_contral_from_joy/Joy_2_Leg_Angle/Publish4
extern SimulinkPublisher<geometry_msgs::msg::Vector3,SL_Bus_geometry_msgs_Vector3> Pub_leg_contral_from_joy_127;
// leg_contral_from_joy/Joy_2_Leg_Angle/Publish5
extern SimulinkPublisher<geometry_msgs::msg::Vector3,SL_Bus_geometry_msgs_Vector3> Pub_leg_contral_from_joy_128;
// leg_contral_from_joy/Joy_2_Leg_Angle/Publish6
extern SimulinkPublisher<robota_leg_pos::msg::LegPos,SL_Bus_robota_leg_pos_LegPos> Pub_leg_contral_from_joy_532;
// leg_contral_from_joy/Subscribe1
extern SimulinkSubscriber<sensor_msgs::msg::Joy,SL_Bus_sensor_msgs_Joy> Sub_leg_contral_from_joy_46;
#endif
