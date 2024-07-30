//
//  leg_contral_from_joy_types.h
//
//  Academic License - for use in teaching, academic research, and meeting
//  course requirements at degree granting institutions only.  Not for
//  government, commercial, or other organizational use.
//
//  Code generation for model "leg_contral_from_joy".
//
//  Model version              : 10.131
//  Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
//  C++ source code generated on : Sat Jul 20 23:32:04 2024
//
//  Target selection: ert.tlc
//  Embedded hardware selection: AMD->x86-64 (Linux 64)
//  Code generation objectives: Unspecified
//  Validation result: Not run


#ifndef leg_contral_from_joy_types_h_
#define leg_contral_from_joy_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_builtin_interfaces_Time_

struct SL_Bus_builtin_interfaces_Time
{
  int32_T sec;
  uint32_T nanosec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_std_msgs_Header_

struct SL_Bus_std_msgs_Header
{
  SL_Bus_builtin_interfaces_Time stamp;
  uint8_T frame_id[128];
  SL_Bus_ROSVariableLengthArrayInfo frame_id_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_Joy_
#define DEFINED_TYPEDEF_FOR_SL_Bus_sensor_msgs_Joy_

struct SL_Bus_sensor_msgs_Joy
{
  SL_Bus_std_msgs_Header header;
  real32_T axes[128];
  SL_Bus_ROSVariableLengthArrayInfo axes_SL_Info;
  int32_T buttons[128];
  SL_Bus_ROSVariableLengthArrayInfo buttons_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_geometry_msgs_Vector3_

struct SL_Bus_geometry_msgs_Vector3
{
  real_T x;
  real_T y;
  real_T z;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_robota_leg_pos_LegPos_
#define DEFINED_TYPEDEF_FOR_SL_Bus_robota_leg_pos_LegPos_

struct SL_Bus_robota_leg_pos_LegPos
{
  real_T rb_alfa;
  real_T rb_beta;
  real_T rb_gamma;
  real_T rf_alfa;
  real_T rf_beta;
  real_T rf_gamma;
  real_T lb_alfa;
  real_T lb_beta;
  real_T lb_gamma;
  real_T lf_alfa;
  real_T lf_beta;
  real_T lf_gamma;
};

#endif

// Custom Type definition for MATLABSystem: '<S2>/SourceBlock'
#include "rmw/qos_profiles.h"
#ifndef struct_sJ4ih70VmKcvCeguWN0mNVF
#define struct_sJ4ih70VmKcvCeguWN0mNVF

struct sJ4ih70VmKcvCeguWN0mNVF
{
  real_T sec;
  real_T nsec;
};

#endif                                 // struct_sJ4ih70VmKcvCeguWN0mNVF

#ifndef struct_ros_slros2_internal_block_Pub_T
#define struct_ros_slros2_internal_block_Pub_T

struct ros_slros2_internal_block_Pub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T QOSAvoidROSNamespaceConventions;
};

#endif                                // struct_ros_slros2_internal_block_Pub_T

#ifndef struct_ros_slros2_internal_block_Sub_T
#define struct_ros_slros2_internal_block_Sub_T

struct ros_slros2_internal_block_Sub_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T QOSAvoidROSNamespaceConventions;
};

#endif                                // struct_ros_slros2_internal_block_Sub_T

// Parameters (default storage)
typedef struct P_leg_contral_from_joy_T_ P_leg_contral_from_joy_T;

// Forward declaration for rtModel
typedef struct tag_RTM_leg_contral_from_joy_T RT_MODEL_leg_contral_from_joy_T;

#endif                                 // leg_contral_from_joy_types_h_
