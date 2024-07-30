#include "slros_busmsg_conversion.h"


// Conversions between SL_Bus_builtin_interfaces_Time and builtin_interfaces::msg::Time

void convertFromBus(builtin_interfaces::msg::Time& msgPtr, SL_Bus_builtin_interfaces_Time const* busPtr)
{
  const std::string rosMessageType("builtin_interfaces/Time");

  msgPtr.nanosec =  busPtr->nanosec;
  msgPtr.sec =  busPtr->sec;
}

void convertToBus(SL_Bus_builtin_interfaces_Time* busPtr, const builtin_interfaces::msg::Time& msgPtr)
{
  const std::string rosMessageType("builtin_interfaces/Time");

  busPtr->nanosec =  msgPtr.nanosec;
  busPtr->sec =  msgPtr.sec;
}


// Conversions between SL_Bus_geometry_msgs_Vector3 and geometry_msgs::msg::Vector3

void convertFromBus(geometry_msgs::msg::Vector3& msgPtr, SL_Bus_geometry_msgs_Vector3 const* busPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  msgPtr.x =  busPtr->x;
  msgPtr.y =  busPtr->y;
  msgPtr.z =  busPtr->z;
}

void convertToBus(SL_Bus_geometry_msgs_Vector3* busPtr, const geometry_msgs::msg::Vector3& msgPtr)
{
  const std::string rosMessageType("geometry_msgs/Vector3");

  busPtr->x =  msgPtr.x;
  busPtr->y =  msgPtr.y;
  busPtr->z =  msgPtr.z;
}


// Conversions between SL_Bus_robota_leg_pos_LegPos and robota_leg_pos::msg::LegPos

void convertFromBus(robota_leg_pos::msg::LegPos& msgPtr, SL_Bus_robota_leg_pos_LegPos const* busPtr)
{
  const std::string rosMessageType("robota_leg_pos/LegPos");

  msgPtr.lb_alfa =  busPtr->lb_alfa;
  msgPtr.lb_beta =  busPtr->lb_beta;
  msgPtr.lb_gamma =  busPtr->lb_gamma;
  msgPtr.lf_alfa =  busPtr->lf_alfa;
  msgPtr.lf_beta =  busPtr->lf_beta;
  msgPtr.lf_gamma =  busPtr->lf_gamma;
  msgPtr.rb_alfa =  busPtr->rb_alfa;
  msgPtr.rb_beta =  busPtr->rb_beta;
  msgPtr.rb_gamma =  busPtr->rb_gamma;
  msgPtr.rf_alfa =  busPtr->rf_alfa;
  msgPtr.rf_beta =  busPtr->rf_beta;
  msgPtr.rf_gamma =  busPtr->rf_gamma;
}

void convertToBus(SL_Bus_robota_leg_pos_LegPos* busPtr, const robota_leg_pos::msg::LegPos& msgPtr)
{
  const std::string rosMessageType("robota_leg_pos/LegPos");

  busPtr->lb_alfa =  msgPtr.lb_alfa;
  busPtr->lb_beta =  msgPtr.lb_beta;
  busPtr->lb_gamma =  msgPtr.lb_gamma;
  busPtr->lf_alfa =  msgPtr.lf_alfa;
  busPtr->lf_beta =  msgPtr.lf_beta;
  busPtr->lf_gamma =  msgPtr.lf_gamma;
  busPtr->rb_alfa =  msgPtr.rb_alfa;
  busPtr->rb_beta =  msgPtr.rb_beta;
  busPtr->rb_gamma =  msgPtr.rb_gamma;
  busPtr->rf_alfa =  msgPtr.rf_alfa;
  busPtr->rf_beta =  msgPtr.rf_beta;
  busPtr->rf_gamma =  msgPtr.rf_gamma;
}


// Conversions between SL_Bus_sensor_msgs_Joy and sensor_msgs::msg::Joy

void convertFromBus(sensor_msgs::msg::Joy& msgPtr, SL_Bus_sensor_msgs_Joy const* busPtr)
{
  const std::string rosMessageType("sensor_msgs/Joy");

  convertFromBusVariablePrimitiveArray(msgPtr.axes, busPtr->axes, busPtr->axes_SL_Info);
  convertFromBusVariablePrimitiveArray(msgPtr.buttons, busPtr->buttons, busPtr->buttons_SL_Info);
  convertFromBus(msgPtr.header, &busPtr->header);
}

void convertToBus(SL_Bus_sensor_msgs_Joy* busPtr, const sensor_msgs::msg::Joy& msgPtr)
{
  const std::string rosMessageType("sensor_msgs/Joy");

  convertToBusVariablePrimitiveArray(busPtr->axes, busPtr->axes_SL_Info, msgPtr.axes, slros::EnabledWarning(rosMessageType, "axes"));
  convertToBusVariablePrimitiveArray(busPtr->buttons, busPtr->buttons_SL_Info, msgPtr.buttons, slros::EnabledWarning(rosMessageType, "buttons"));
  convertToBus(&busPtr->header, msgPtr.header);
}


// Conversions between SL_Bus_std_msgs_Header and std_msgs::msg::Header

void convertFromBus(std_msgs::msg::Header& msgPtr, SL_Bus_std_msgs_Header const* busPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertFromBusVariablePrimitiveArray(msgPtr.frame_id, busPtr->frame_id, busPtr->frame_id_SL_Info);
  convertFromBus(msgPtr.stamp, &busPtr->stamp);
}

void convertToBus(SL_Bus_std_msgs_Header* busPtr, const std_msgs::msg::Header& msgPtr)
{
  const std::string rosMessageType("std_msgs/Header");

  convertToBusVariablePrimitiveArray(busPtr->frame_id, busPtr->frame_id_SL_Info, msgPtr.frame_id, slros::EnabledWarning(rosMessageType, "frame_id"));
  convertToBus(&busPtr->stamp, msgPtr.stamp);
}

