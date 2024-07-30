//
//  leg_contral_from_joy.cpp
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


#include "leg_contral_from_joy.h"
#include "rtwtypes.h"
#include "leg_contral_from_joy_types.h"
#include "leg_contral_from_joy_private.h"
#include <math.h>

extern "C"
{

#include "rt_nonfinite.h"

}

#include "rmw/qos_profiles.h"
#include <stddef.h>
#include "leg_contral_from_joy_dt.h"

// Named constants for MATLAB Function: '<S1>/xyztoangle_lb'
const int32_T leg_contral_from_joy_CALL_EVENT = -1;

// Block signals (default storage)
B_leg_contral_from_joy_T leg_contral_from_joy_B;

// Block states (default storage)
DW_leg_contral_from_joy_T leg_contral_from_joy_DW;

// Real-time model
RT_MODEL_leg_contral_from_joy_T leg_contral_from_joy_M_ =
  RT_MODEL_leg_contral_from_joy_T();
RT_MODEL_leg_contral_from_joy_T *const leg_contral_from_joy_M =
  &leg_contral_from_joy_M_;

// Forward declaration for local functions
static void leg_contral_Publisher_setupImpl(const
  ros_slros2_internal_block_Pub_T *obj);
static void leg_contr_Publisher_setupImpl_k(const
  ros_slros2_internal_block_Pub_T *obj);
static void leg_cont_Publisher_setupImpl_kz(const
  ros_slros2_internal_block_Pub_T *obj);
static void leg_con_Publisher_setupImpl_kzl(const
  ros_slros2_internal_block_Pub_T *obj);
static void leg_co_Publisher_setupImpl_kzlr(const
  ros_slros2_internal_block_Pub_T *obj);
static void leg_c_Publisher_setupImpl_kzlr3(const
  ros_slros2_internal_block_Pub_T *obj);
static void leg_contra_Subscriber_setupImpl(const
  ros_slros2_internal_block_Sub_T *obj);
real32_T look1_iu8bflftf_binlcpw(uint8_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex)
{
  real32_T frac;
  real32_T yL_0d0;
  uint32_T iLeft;

  // Column-major Lookup 1-D
  // Search method: 'binary'
  // Use previous index: 'off'
  // Interpolation method: 'Linear point-slope'
  // Extrapolation method: 'Clip'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  // Prelookup - Index and Fraction
  // Index Search method: 'binary'
  // Extrapolation method: 'Clip'
  // Use previous index: 'off'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Remove protection against out-of-range input in generated code: 'off'

  if (u0 < bp0[0U]) {
    iLeft = 0U;
    frac = 0.0F;
  } else if (u0 < bp0[maxIndex]) {
    uint32_T bpIdx;
    uint32_T iRght;

    // Binary Search
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (static_cast<real32_T>(u0) - bp0[iLeft]) / (bp0[iLeft + 1U] -
      bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = 1.0F;
  }

  // Column-major Interpolation 1-D
  // Interpolation method: 'Linear point-slope'
  // Use last breakpoint for index at or above upper limit: 'off'
  // Overflow mode: 'portable wrapping'

  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

//
// System initialize for atomic system:
//    '<S1>/xyztoangle_lb'
//    '<S1>/xyztoangle_lf'
//    '<S1>/xyztoangle_rb'
//    '<S1>/xyztoangle_rf'
//
void leg_contral__xyztoangle_lb_Init(DW_xyztoangle_lb_leg_contral__T *localDW)
{
  localDW->sfEvent = leg_contral_from_joy_CALL_EVENT;
}

//
// Output and update for atomic system:
//    '<S1>/xyztoangle_lb'
//    '<S1>/xyztoangle_lf'
//    '<S1>/xyztoangle_rb'
//    '<S1>/xyztoangle_rf'
//
void leg_contral_from__xyztoangle_lb(real_T rtu_x, real_T rtu_y, real_T rtu_z,
  B_xyztoangle_lb_leg_contral_f_T *localB, DW_xyztoangle_lb_leg_contral__T
  *localDW)
{
  real_T lxzp;
  real_T lyz;
  real_T n;
  localDW->sfEvent = leg_contral_from_joy_CALL_EVENT;

  // MATLAB Function 'Joy_2_Leg_Angle/xyztoangle_lb': '<S16>:1'
  // '<S16>:1:4'
  // '<S16>:1:5'
  // '<S16>:1:13'
  lyz = sqrt(rtu_y * rtu_y + rtu_z * rtu_z);

  // '<S16>:1:14'
  lyz = sqrt(lyz * lyz - 2401.0);

  // '<S16>:1:15'
  // '<S16>:1:16'
  // '<S16>:1:17'
  localB->gamma = -atan(rtu_y / rtu_z) - (-atan(49.0 / lyz));

  // '<S16>:1:19'
  lxzp = sqrt(lyz * lyz + rtu_x * rtu_x);

  // '<S16>:1:20'
  n = ((lxzp * lxzp - 18496.0) - 15772.82298201) / 251.1798;

  // '<S16>:1:21'
  localB->beta = -acos(n / 136.0);

  // '<S16>:1:23'
  // '<S16>:1:24'
  // '<S16>:1:25'
  localB->alfa = acos((n + 125.5899) / lxzp) - atan(rtu_x / lyz);
}

static void leg_contral_Publisher_setupImpl(const
  ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  char_T b_zeroDelimTopic[9];
  static const char_T b_zeroDelimTopic_0[9] = "/joy_neo";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S8>/SinkBlock'
  leg_contral_from_joy_B.deadline_cv.sec = 0.0;
  leg_contral_from_joy_B.deadline_cv.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                 leg_contral_from_joy_B.deadline_cv, lifespan,
                 RMW_QOS_POLICY_LIVELINESS_AUTOMATIC, liveliness_lease_duration,
                 (bool)obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 9; i++) {
    // Start for MATLABSystem: '<S8>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_leg_contral_from_joy_65.createPublisher(&b_zeroDelimTopic[0], qos_profile);
}

static void leg_contr_Publisher_setupImpl_k(const
  ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  char_T b_zeroDelimTopic[14];
  static const char_T b_zeroDelimTopic_0[14] = "/leg_rb_angle";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S9>/SinkBlock'
  leg_contral_from_joy_B.deadline_b.sec = 0.0;
  leg_contral_from_joy_B.deadline_b.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                 leg_contral_from_joy_B.deadline_b, lifespan,
                 RMW_QOS_POLICY_LIVELINESS_AUTOMATIC, liveliness_lease_duration,
                 (bool)obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 14; i++) {
    // Start for MATLABSystem: '<S9>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_leg_contral_from_joy_122.createPublisher(&b_zeroDelimTopic[0], qos_profile);
}

static void leg_cont_Publisher_setupImpl_kz(const
  ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  char_T b_zeroDelimTopic[14];
  static const char_T b_zeroDelimTopic_0[14] = "/leg_rf_angle";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S10>/SinkBlock'
  leg_contral_from_joy_B.deadline_c.sec = 0.0;
  leg_contral_from_joy_B.deadline_c.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                 leg_contral_from_joy_B.deadline_c, lifespan,
                 RMW_QOS_POLICY_LIVELINESS_AUTOMATIC, liveliness_lease_duration,
                 (bool)obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 14; i++) {
    // Start for MATLABSystem: '<S10>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_leg_contral_from_joy_124.createPublisher(&b_zeroDelimTopic[0], qos_profile);
}

static void leg_con_Publisher_setupImpl_kzl(const
  ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  char_T b_zeroDelimTopic[14];
  static const char_T b_zeroDelimTopic_0[14] = "/leg_lb_angle";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S11>/SinkBlock'
  leg_contral_from_joy_B.deadline_k.sec = 0.0;
  leg_contral_from_joy_B.deadline_k.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                 leg_contral_from_joy_B.deadline_k, lifespan,
                 RMW_QOS_POLICY_LIVELINESS_AUTOMATIC, liveliness_lease_duration,
                 (bool)obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 14; i++) {
    // Start for MATLABSystem: '<S11>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_leg_contral_from_joy_127.createPublisher(&b_zeroDelimTopic[0], qos_profile);
}

static void leg_co_Publisher_setupImpl_kzlr(const
  ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  char_T b_zeroDelimTopic[14];
  static const char_T b_zeroDelimTopic_0[14] = "/leg_lf_angle";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S12>/SinkBlock'
  leg_contral_from_joy_B.deadline.sec = 0.0;
  leg_contral_from_joy_B.deadline.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                 leg_contral_from_joy_B.deadline, lifespan,
                 RMW_QOS_POLICY_LIVELINESS_AUTOMATIC, liveliness_lease_duration,
                 (bool)obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 14; i++) {
    // Start for MATLABSystem: '<S12>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_leg_contral_from_joy_128.createPublisher(&b_zeroDelimTopic[0], qos_profile);
}

static void leg_c_Publisher_setupImpl_kzlr3(const
  ros_slros2_internal_block_Pub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  char_T b_zeroDelimTopic[12];
  static const char_T b_zeroDelimTopic_0[12] = "/legs_angle";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S13>/SinkBlock'
  leg_contral_from_joy_B.deadline_p.sec = 0.0;
  leg_contral_from_joy_B.deadline_p.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)10.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                 leg_contral_from_joy_B.deadline_p, lifespan,
                 RMW_QOS_POLICY_LIVELINESS_AUTOMATIC, liveliness_lease_duration,
                 (bool)obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 12; i++) {
    // Start for MATLABSystem: '<S13>/SinkBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Pub_leg_contral_from_joy_532.createPublisher(&b_zeroDelimTopic[0], qos_profile);
}

static void leg_contra_Subscriber_setupImpl(const
  ros_slros2_internal_block_Sub_T *obj)
{
  rmw_qos_profile_t qos_profile;
  sJ4ih70VmKcvCeguWN0mNVF lifespan;
  sJ4ih70VmKcvCeguWN0mNVF liveliness_lease_duration;
  char_T b_zeroDelimTopic[5];
  static const char_T b_zeroDelimTopic_0[5] = "/joy";
  qos_profile = rmw_qos_profile_default;

  // Start for MATLABSystem: '<S2>/SourceBlock'
  leg_contral_from_joy_B.deadline_f.sec = 0.0;
  leg_contral_from_joy_B.deadline_f.nsec = 0.0;
  lifespan.sec = 0.0;
  lifespan.nsec = 0.0;
  liveliness_lease_duration.sec = 0.0;
  liveliness_lease_duration.nsec = 0.0;
  SET_QOS_VALUES(qos_profile, RMW_QOS_POLICY_HISTORY_KEEP_LAST, (size_t)1.0,
                 RMW_QOS_POLICY_DURABILITY_VOLATILE,
                 RMW_QOS_POLICY_RELIABILITY_RELIABLE,
                 leg_contral_from_joy_B.deadline_f, lifespan,
                 RMW_QOS_POLICY_LIVELINESS_AUTOMATIC, liveliness_lease_duration,
                 (bool)obj->QOSAvoidROSNamespaceConventions);
  for (int32_T i = 0; i < 5; i++) {
    // Start for MATLABSystem: '<S2>/SourceBlock'
    b_zeroDelimTopic[i] = b_zeroDelimTopic_0[i];
  }

  Sub_leg_contral_from_joy_46.createSubscriber(&b_zeroDelimTopic[0], qos_profile);
}

// Model step function
void leg_contral_from_joy_step(void)
{
  int32_T b;
  int32_T i;
  int32_T leg_pose_tmp;
  real32_T rtb_Switch2;
  real32_T rtb_p_rx_x1;
  real32_T u0;
  int16_T rtb_Add_g;
  uint16_T rtb_Add_c;
  int8_T d;
  int8_T d_0;
  int8_T d_1;
  uint8_T rtb_Switch_dir;
  uint8_T rtb_Switch_dir_f;
  uint8_T rtb_Switch_dir_l;
  boolean_T b_varargout_1;
  boolean_T rtb_OR10;
  boolean_T rtb_OR9;
  boolean_T rtb_have_joy_aex_cmd;
  static const int8_T e[3] = { 0, 0, 1 };

  static const int8_T d_2[12] = { 15, 39, 0, 15, -39, 0, -15, 39, 0, -15, -39, 0
  };

  static const int8_T footpoint_struc[12] = { 0, 93, 0, 0, -93, 0, 0, 93, 0, 0,
    -93, 0 };

  // Reset subsysRan breadcrumbs
  srClearBC(leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC);

  // Reset subsysRan breadcrumbs
  srClearBC(leg_contral_from_joy_DW.EnabledSubsystem_SubsysRanBC);

  // MATLABSystem: '<S2>/SourceBlock'
  b_varargout_1 = Sub_leg_contral_from_joy_46.getLatestMessage
    (&leg_contral_from_joy_B.rtb_SourceBlock_o2_m);

  // Outputs for Enabled SubSystem: '<S2>/Enabled Subsystem' incorporates:
  //   EnablePort: '<S22>/Enable'

  // Start for MATLABSystem: '<S2>/SourceBlock'
  if (b_varargout_1) {
    // SignalConversion generated from: '<S22>/In1'
    leg_contral_from_joy_B.In1 = leg_contral_from_joy_B.rtb_SourceBlock_o2_m;
    srUpdateBC(leg_contral_from_joy_DW.EnabledSubsystem_SubsysRanBC);
  }

  // End of Outputs for SubSystem: '<S2>/Enabled Subsystem'

  // Product: '<S3>/Divide' incorporates:
  //   Constant: '<S3>/Constant'
  //   UnitDelay: '<S41>/Count_reg'

  leg_contral_from_joy_B.Divide = static_cast<real_T>
    (leg_contral_from_joy_DW.Count_reg_DSTATE_j) /
    leg_contral_from_joy_P.Constant_Value_d;

  // Product: '<S3>/Product' incorporates:
  //   Lookup_n-D: '<S3>/lut_foot_step_x'
  //   UnitDelay: '<S39>/Count_reg'

  leg_contral_from_joy_B.Product = static_cast<real32_T>(look1_iu8bflftf_binlcpw
    (leg_contral_from_joy_DW.Count_reg_DSTATE,
     leg_contral_from_joy_P.lut_foot_step_x_bp01Data,
     leg_contral_from_joy_P.foot_step_x, 199U) * leg_contral_from_joy_B.Divide);

  // Product: '<S3>/Product1' incorporates:
  //   Lookup_n-D: '<S3>/lut_foot_step_y'
  //   UnitDelay: '<S39>/Count_reg'

  leg_contral_from_joy_B.Product1 = static_cast<real32_T>
    (look1_iu8bflftf_binlcpw(leg_contral_from_joy_DW.Count_reg_DSTATE,
      leg_contral_from_joy_P.lut_foot_step_y_bp01Data,
      leg_contral_from_joy_P.foot_step_y, 199U) * leg_contral_from_joy_B.Divide);

  // Product: '<S3>/Product2' incorporates:
  //   Lookup_n-D: '<S3>/lut_foot_step_x1'
  //   UnitDelay: '<S40>/Count_reg'

  leg_contral_from_joy_B.Product2 = static_cast<real32_T>
    (look1_iu8bflftf_binlcpw(leg_contral_from_joy_DW.Count_reg_DSTATE_b,
      leg_contral_from_joy_P.lut_foot_step_x1_bp01Data,
      leg_contral_from_joy_P.foot_step_x, 199U) * leg_contral_from_joy_B.Divide);

  // Product: '<S3>/Product3' incorporates:
  //   Lookup_n-D: '<S3>/lut_foot_step_y1'
  //   UnitDelay: '<S40>/Count_reg'

  leg_contral_from_joy_B.Product3 = static_cast<real32_T>
    (look1_iu8bflftf_binlcpw(leg_contral_from_joy_DW.Count_reg_DSTATE_b,
      leg_contral_from_joy_P.lut_foot_step_y1_bp01Data,
      leg_contral_from_joy_P.foot_step_y, 199U) * leg_contral_from_joy_B.Divide);

  // Logic: '<S3>/OR' incorporates:
  //   Constant: '<S23>/Constant'
  //   Constant: '<S24>/Constant'
  //   RelationalOperator: '<S23>/Compare'
  //   RelationalOperator: '<S24>/Compare'

  rtb_have_joy_aex_cmd = ((leg_contral_from_joy_B.In1.axes[3] !=
    leg_contral_from_joy_P.CompareToConstant_const) ||
    (leg_contral_from_joy_B.In1.axes[4] !=
     leg_contral_from_joy_P.CompareToConstant1_const));

  // Logic: '<S3>/OR9' incorporates:
  //   Constant: '<S25>/Constant'
  //   Constant: '<S37>/Constant'
  //   Constant: '<S38>/Constant'
  //   Logic: '<S3>/OR7'
  //   Logic: '<S3>/OR8'
  //   RelationalOperator: '<S25>/Compare'
  //   RelationalOperator: '<S37>/Compare'
  //   RelationalOperator: '<S38>/Compare'
  //   UnitDelay: '<S39>/Count_reg'

  rtb_OR9 = (((leg_contral_from_joy_DW.Count_reg_DSTATE <
               leg_contral_from_joy_P.CompareToConstant8_const) &&
              (leg_contral_from_joy_DW.Count_reg_DSTATE >
               leg_contral_from_joy_P.CompareToConstant9_const)) ||
             ((leg_contral_from_joy_DW.Count_reg_DSTATE ==
               leg_contral_from_joy_P.CompareToConstant10_const) &&
              rtb_have_joy_aex_cmd));

  // Logic: '<S3>/OR10' incorporates:
  //   Constant: '<S26>/Constant'
  //   Constant: '<S31>/Constant'
  //   Constant: '<S32>/Constant'
  //   Constant: '<S33>/Constant'
  //   Logic: '<S3>/OR1'
  //   Logic: '<S3>/OR3'
  //   RelationalOperator: '<S26>/Compare'
  //   RelationalOperator: '<S31>/Compare'
  //   RelationalOperator: '<S32>/Compare'
  //   RelationalOperator: '<S33>/Compare'
  //   UnitDelay: '<S39>/Count_reg'
  //   UnitDelay: '<S40>/Count_reg'

  rtb_OR10 = (((leg_contral_from_joy_DW.Count_reg_DSTATE_b <
                leg_contral_from_joy_P.CompareToConstant4_const) &&
               (leg_contral_from_joy_DW.Count_reg_DSTATE_b >
                leg_contral_from_joy_P.CompareToConstant11_const)) ||
              ((leg_contral_from_joy_DW.Count_reg_DSTATE_b ==
                leg_contral_from_joy_P.CompareToConstant2_const) &&
               (leg_contral_from_joy_DW.Count_reg_DSTATE ==
                leg_contral_from_joy_P.CompareToConstant3_const)));

  // Outputs for Enabled SubSystem: '<Root>/Joy_2_Leg_Angle' incorporates:
  //   EnablePort: '<S1>/Enable'

  // Logic: '<S3>/OR2' incorporates:
  //   MATLABSystem: '<S2>/SourceBlock'
  //
  if (b_varargout_1 || rtb_OR9 || rtb_OR10) {
    // MATLABSystem: '<S8>/SinkBlock' incorporates:
    //   BusAssignment: '<S1>/Bus Assignment1'

    Pub_leg_contral_from_joy_65.publish(&leg_contral_from_joy_B.In1);

    // Switch: '<S1>/Switch' incorporates:
    //   Constant: '<S1>/ZERO'

    if (leg_contral_from_joy_B.In1.buttons[5] >=
        leg_contral_from_joy_P.Switch_Threshold) {
      leg_contral_from_joy_B.Divide = leg_contral_from_joy_B.In1.axes[3];
    } else {
      leg_contral_from_joy_B.Divide = leg_contral_from_joy_P.ZERO_Value;
    }

    // End of Switch: '<S1>/Switch'

    // MATLAB Function: '<S1>/MATLAB Function' incorporates:
    //   Constant: '<S1>/Constant1'
    //   Constant: '<S1>/ZERO'
    //   Gain: '<S1>/Gain'
    //   Sum: '<S1>/Add'

    // MATLAB Function 'Joy_2_Leg_Angle/MATLAB Function': '<S7>:1'
    // '<S7>:1:25'
    // '<S7>:1:53'
    // '<S7>:1:28'
    // '<S7>:1:6'
    // '<S7>:1:16'
    leg_contral_from_joy_B.pos[0] = leg_contral_from_joy_P.ZERO_Value;
    leg_contral_from_joy_B.pos[1] = leg_contral_from_joy_P.ZERO_Value;
    leg_contral_from_joy_B.pos[2] = leg_contral_from_joy_P.Gain_Gain *
      leg_contral_from_joy_B.In1.axes[2] +
      leg_contral_from_joy_P.Constant1_Value;

    // '<S7>:1:17'
    // '<S7>:1:20'
    // '<S7>:1:23'
    // '<S7>:1:26'
    leg_contral_from_joy_B.p_rx_x = static_cast<real32_T>(sin(static_cast<real_T>
      (leg_contral_from_joy_B.In1.axes[0])));
    leg_contral_from_joy_B.p_ry_y1 = static_cast<real32_T>(cos
      (static_cast<real_T>(leg_contral_from_joy_B.In1.axes[0])));
    rtb_Switch2 = static_cast<real32_T>(sin(static_cast<real_T>
      (leg_contral_from_joy_B.In1.axes[1])));
    rtb_p_rx_x1 = static_cast<real32_T>(cos(static_cast<real_T>
      (leg_contral_from_joy_B.In1.axes[1])));
    leg_contral_from_joy_B.rot_mat_tmp = sin(leg_contral_from_joy_B.Divide);
    leg_contral_from_joy_B.rot_mat[1] = 0.0F;
    leg_contral_from_joy_B.rot_mat[4] = leg_contral_from_joy_B.p_ry_y1;
    leg_contral_from_joy_B.rot_mat[7] = -leg_contral_from_joy_B.p_rx_x;
    leg_contral_from_joy_B.rot_mat[2] = 0.0F;
    leg_contral_from_joy_B.rot_mat[5] = leg_contral_from_joy_B.p_rx_x;
    leg_contral_from_joy_B.rot_mat[8] = leg_contral_from_joy_B.p_ry_y1;
    leg_contral_from_joy_B.rtb_p_rx_x1_c[0] = rtb_p_rx_x1;
    leg_contral_from_joy_B.rtb_p_rx_x1_c[3] = 0.0F;
    leg_contral_from_joy_B.rtb_p_rx_x1_c[6] = -rtb_Switch2;
    leg_contral_from_joy_B.rot_mat[0] = 1.0F;
    leg_contral_from_joy_B.rtb_p_rx_x1_c[1] = 0.0F;
    leg_contral_from_joy_B.rot_mat[3] = 0.0F;
    leg_contral_from_joy_B.rtb_p_rx_x1_c[4] = 1.0F;
    leg_contral_from_joy_B.rot_mat[6] = 0.0F;
    leg_contral_from_joy_B.rtb_p_rx_x1_c[7] = 0.0F;
    leg_contral_from_joy_B.rtb_p_rx_x1_c[2] = rtb_Switch2;
    leg_contral_from_joy_B.rtb_p_rx_x1_c[5] = 0.0F;
    leg_contral_from_joy_B.rtb_p_rx_x1_c[8] = rtb_p_rx_x1;
    leg_contral_from_joy_B.p_rx_x = static_cast<real32_T>(cos
      (leg_contral_from_joy_B.Divide));
    leg_contral_from_joy_B.fv[0] = leg_contral_from_joy_B.p_rx_x;
    leg_contral_from_joy_B.fv[3] = static_cast<real32_T>
      (-leg_contral_from_joy_B.rot_mat_tmp);
    leg_contral_from_joy_B.fv[6] = 0.0F;
    leg_contral_from_joy_B.fv[1] = static_cast<real32_T>
      (leg_contral_from_joy_B.rot_mat_tmp);
    leg_contral_from_joy_B.fv[4] = leg_contral_from_joy_B.p_rx_x;
    leg_contral_from_joy_B.fv[7] = 0.0F;
    for (i = 0; i < 3; i++) {
      leg_contral_from_joy_B.p_rx_x = leg_contral_from_joy_B.rot_mat[i + 3];
      b = static_cast<int32_T>(leg_contral_from_joy_B.rot_mat[i]);
      leg_contral_from_joy_B.p_ry_y1 = leg_contral_from_joy_B.rot_mat[i + 6];
      for (leg_pose_tmp = 0; leg_pose_tmp < 3; leg_pose_tmp++) {
        leg_contral_from_joy_B.b[i + 3 * leg_pose_tmp] =
          (leg_contral_from_joy_B.rtb_p_rx_x1_c[3 * leg_pose_tmp + 1] *
           leg_contral_from_joy_B.p_rx_x + leg_contral_from_joy_B.rtb_p_rx_x1_c
           [3 * leg_pose_tmp] * static_cast<real32_T>(b)) +
          leg_contral_from_joy_B.rtb_p_rx_x1_c[3 * leg_pose_tmp + 2] *
          leg_contral_from_joy_B.p_ry_y1;
      }

      leg_contral_from_joy_B.fv[3 * i + 2] = e[i];
    }

    for (i = 0; i < 3; i++) {
      leg_contral_from_joy_B.p_rx_x = leg_contral_from_joy_B.fv[3 * i + 1];
      leg_contral_from_joy_B.p_ry_y1 = leg_contral_from_joy_B.fv[3 * i];
      rtb_Switch2 = leg_contral_from_joy_B.fv[3 * i + 2];
      for (leg_pose_tmp = 0; leg_pose_tmp < 3; leg_pose_tmp++) {
        leg_contral_from_joy_B.rot_mat[leg_pose_tmp + 3 * i] =
          (leg_contral_from_joy_B.b[leg_pose_tmp + 3] *
           leg_contral_from_joy_B.p_rx_x + leg_contral_from_joy_B.p_ry_y1 *
           leg_contral_from_joy_B.b[leg_pose_tmp]) +
          leg_contral_from_joy_B.b[leg_pose_tmp + 6] * rtb_Switch2;
      }
    }

    // '<S7>:1:28'
    // '<S7>:1:32'
    // '<S7>:1:50'
    // '<S7>:1:51'
    for (b = 0; b < 4; b++) {
      // '<S7>:1:53'
      d = d_2[3 * b + 1];
      d_0 = d_2[3 * b];
      d_1 = d_2[3 * b + 2];
      for (i = 0; i <= 0; i += 2) {
        leg_pose_tmp = 3 * b + i;
        leg_contral_from_joy_B.leg_pose[leg_pose_tmp] =
          (((leg_contral_from_joy_B.rot_mat[i + 3] * static_cast<real32_T>(d) +
             static_cast<real32_T>(d_0) * leg_contral_from_joy_B.rot_mat[i]) +
            leg_contral_from_joy_B.rot_mat[i + 6] * static_cast<real32_T>(d_1))
           + static_cast<real32_T>(leg_contral_from_joy_B.pos[i])) -
          static_cast<real32_T>(footpoint_struc[leg_pose_tmp]);
        leg_contral_from_joy_B.leg_pose[leg_pose_tmp + 1] =
          (((leg_contral_from_joy_B.rot_mat[i + 4] * static_cast<real32_T>(d) +
             leg_contral_from_joy_B.rot_mat[i + 1] * static_cast<real32_T>(d_0))
            + leg_contral_from_joy_B.rot_mat[i + 7] * static_cast<real32_T>(d_1))
           + static_cast<real32_T>(leg_contral_from_joy_B.pos[i + 1])) -
          static_cast<real32_T>(footpoint_struc[leg_pose_tmp + 1]);
      }

      for (i = 2; i < 3; i++) {
        leg_pose_tmp = 3 * b + i;
        leg_contral_from_joy_B.leg_pose[leg_pose_tmp] =
          (((leg_contral_from_joy_B.rot_mat[i + 3] * static_cast<real32_T>(d) +
             static_cast<real32_T>(d_0) * leg_contral_from_joy_B.rot_mat[i]) +
            leg_contral_from_joy_B.rot_mat[i + 6] * static_cast<real32_T>(d_1))
           + static_cast<real32_T>(leg_contral_from_joy_B.pos[i])) -
          static_cast<real32_T>(footpoint_struc[leg_pose_tmp]);
      }
    }

    // Switch: '<S1>/Switch1' incorporates:
    //   Constant: '<S1>/ZERO'

    // '<S7>:1:68'
    // '<S7>:1:69'
    // '<S7>:1:70'
    // '<S7>:1:71'
    // '<S7>:1:72'
    // '<S7>:1:73'
    // '<S7>:1:74'
    // '<S7>:1:75'
    // '<S7>:1:76'
    // '<S7>:1:77'
    // '<S7>:1:78'
    // '<S7>:1:79'
    if (leg_contral_from_joy_B.In1.buttons[5] >=
        leg_contral_from_joy_P.Switch1_Threshold) {
      leg_contral_from_joy_B.p_ry_y1 = static_cast<real32_T>
        (leg_contral_from_joy_P.ZERO_Value);
    } else {
      leg_contral_from_joy_B.p_ry_y1 = leg_contral_from_joy_B.In1.axes[3];
    }

    // End of Switch: '<S1>/Switch1'

    // DotProduct: '<S1>/p_rx_x'
    leg_contral_from_joy_B.p_rx_x = leg_contral_from_joy_B.p_ry_y1 *
      leg_contral_from_joy_B.Product;

    // Switch: '<S1>/Switch2' incorporates:
    //   Constant: '<S1>/ZERO'

    if (leg_contral_from_joy_B.In1.buttons[5] >=
        leg_contral_from_joy_P.Switch2_Threshold) {
      rtb_Switch2 = static_cast<real32_T>(leg_contral_from_joy_P.ZERO_Value);
    } else {
      rtb_Switch2 = leg_contral_from_joy_B.In1.axes[4];
    }

    // End of Switch: '<S1>/Switch2'

    // DotProduct: '<S1>/p_ry_x'
    leg_contral_from_joy_B.Product *= rtb_Switch2;

    // DotProduct: '<S1>/p_rx_y'
    u0 = leg_contral_from_joy_B.p_ry_y1 * leg_contral_from_joy_B.Product1;

    // DotProduct: '<S1>/p_ry_y'
    leg_contral_from_joy_B.Product1 *= rtb_Switch2;

    // MinMax: '<S1>/Max'
    if ((u0 >= leg_contral_from_joy_B.Product1) || rtIsNaNF
        (leg_contral_from_joy_B.Product1)) {
      leg_contral_from_joy_B.Product1 = u0;
    }

    // End of MinMax: '<S1>/Max'

    // MATLAB Function: '<S1>/xyztoangle_rb' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function'
    //   Sum: '<S1>/Add4'
    //   Sum: '<S1>/Add5'
    //   Sum: '<S1>/Add6'

    leg_contral_from__xyztoangle_lb(leg_contral_from_joy_B.leg_pose[6] +
      leg_contral_from_joy_B.p_rx_x, -leg_contral_from_joy_B.leg_pose[7] +
      leg_contral_from_joy_B.Product, leg_contral_from_joy_B.leg_pose[8] +
      leg_contral_from_joy_B.Product1, &leg_contral_from_joy_B.sf_xyztoangle_rb,
      &leg_contral_from_joy_DW.sf_xyztoangle_rb);

    // BusAssignment: '<S1>/Bus Assignment2'
    leg_contral_from_joy_B.leg_rb_angle.x =
      leg_contral_from_joy_B.sf_xyztoangle_rb.alfa;
    leg_contral_from_joy_B.leg_rb_angle.y =
      leg_contral_from_joy_B.sf_xyztoangle_rb.beta;
    leg_contral_from_joy_B.leg_rb_angle.z =
      leg_contral_from_joy_B.sf_xyztoangle_rb.gamma;

    // MATLABSystem: '<S9>/SinkBlock'
    Pub_leg_contral_from_joy_122.publish(&leg_contral_from_joy_B.leg_rb_angle);

    // DotProduct: '<S1>/p_rx_x1'
    rtb_p_rx_x1 = leg_contral_from_joy_B.p_ry_y1 *
      leg_contral_from_joy_B.Product2;

    // DotProduct: '<S1>/p_ry_x1'
    leg_contral_from_joy_B.Product2 *= rtb_Switch2;

    // DotProduct: '<S1>/p_rx_y1'
    u0 = leg_contral_from_joy_B.p_ry_y1 * leg_contral_from_joy_B.Product3;

    // DotProduct: '<S1>/p_ry_y1'
    leg_contral_from_joy_B.Product3 *= rtb_Switch2;

    // MinMax: '<S1>/Max1'
    if ((u0 >= leg_contral_from_joy_B.Product3) || rtIsNaNF
        (leg_contral_from_joy_B.Product3)) {
      leg_contral_from_joy_B.Product3 = u0;
    }

    // End of MinMax: '<S1>/Max1'

    // MATLAB Function: '<S1>/xyztoangle_rf' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function'
    //   Sum: '<S1>/Add7'
    //   Sum: '<S1>/Add8'
    //   Sum: '<S1>/Add9'

    leg_contral_from__xyztoangle_lb(leg_contral_from_joy_B.leg_pose[0] +
      rtb_p_rx_x1, -leg_contral_from_joy_B.leg_pose[1] +
      leg_contral_from_joy_B.Product2, leg_contral_from_joy_B.leg_pose[2] +
      leg_contral_from_joy_B.Product3, &leg_contral_from_joy_B.sf_xyztoangle_rf,
      &leg_contral_from_joy_DW.sf_xyztoangle_rf);

    // BusAssignment: '<S1>/Bus Assignment3'
    leg_contral_from_joy_B.leg_rf_angle.x =
      leg_contral_from_joy_B.sf_xyztoangle_rf.alfa;
    leg_contral_from_joy_B.leg_rf_angle.y =
      leg_contral_from_joy_B.sf_xyztoangle_rf.beta;
    leg_contral_from_joy_B.leg_rf_angle.z =
      leg_contral_from_joy_B.sf_xyztoangle_rf.gamma;

    // MATLABSystem: '<S10>/SinkBlock'
    Pub_leg_contral_from_joy_124.publish(&leg_contral_from_joy_B.leg_rf_angle);

    // MATLAB Function: '<S1>/xyztoangle_lb' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function'
    //   Sum: '<S1>/Add10'
    //   Sum: '<S1>/Add11'
    //   Sum: '<S1>/Add12'

    leg_contral_from__xyztoangle_lb(leg_contral_from_joy_B.leg_pose[9] +
      rtb_p_rx_x1, -leg_contral_from_joy_B.leg_pose[10] +
      leg_contral_from_joy_B.Product2, leg_contral_from_joy_B.leg_pose[11] +
      leg_contral_from_joy_B.Product3, &leg_contral_from_joy_B.sf_xyztoangle_lb,
      &leg_contral_from_joy_DW.sf_xyztoangle_lb);

    // BusAssignment: '<S1>/Bus Assignment4'
    leg_contral_from_joy_B.leg_lb_angle.x =
      leg_contral_from_joy_B.sf_xyztoangle_lb.alfa;
    leg_contral_from_joy_B.leg_lb_angle.y =
      leg_contral_from_joy_B.sf_xyztoangle_lb.beta;
    leg_contral_from_joy_B.leg_lb_angle.z =
      leg_contral_from_joy_B.sf_xyztoangle_lb.gamma;

    // MATLABSystem: '<S11>/SinkBlock'
    Pub_leg_contral_from_joy_127.publish(&leg_contral_from_joy_B.leg_lb_angle);

    // MATLAB Function: '<S1>/xyztoangle_lf' incorporates:
    //   MATLAB Function: '<S1>/MATLAB Function'
    //   Sum: '<S1>/Add1'
    //   Sum: '<S1>/Add2'
    //   Sum: '<S1>/Add3'

    leg_contral_from__xyztoangle_lb(leg_contral_from_joy_B.leg_pose[3] +
      leg_contral_from_joy_B.p_rx_x, -leg_contral_from_joy_B.leg_pose[4] +
      leg_contral_from_joy_B.Product, leg_contral_from_joy_B.leg_pose[5] +
      leg_contral_from_joy_B.Product1, &leg_contral_from_joy_B.sf_xyztoangle_lf,
      &leg_contral_from_joy_DW.sf_xyztoangle_lf);

    // BusAssignment: '<S1>/Bus Assignment5'
    leg_contral_from_joy_B.leg_lf_angle_o.x =
      leg_contral_from_joy_B.sf_xyztoangle_lf.alfa;
    leg_contral_from_joy_B.leg_lf_angle_o.y =
      leg_contral_from_joy_B.sf_xyztoangle_lf.beta;
    leg_contral_from_joy_B.leg_lf_angle_o.z =
      leg_contral_from_joy_B.sf_xyztoangle_lf.gamma;

    // MATLABSystem: '<S12>/SinkBlock'
    Pub_leg_contral_from_joy_128.publish(&leg_contral_from_joy_B.leg_lf_angle_o);

    // BusAssignment: '<S1>/Bus Assignment6'
    leg_contral_from_joy_B.leg_lf_angle.rb_alfa =
      leg_contral_from_joy_B.sf_xyztoangle_rb.alfa;
    leg_contral_from_joy_B.leg_lf_angle.rb_beta =
      leg_contral_from_joy_B.sf_xyztoangle_rb.beta;
    leg_contral_from_joy_B.leg_lf_angle.rb_gamma =
      leg_contral_from_joy_B.sf_xyztoangle_rb.gamma;
    leg_contral_from_joy_B.leg_lf_angle.rf_alfa =
      leg_contral_from_joy_B.sf_xyztoangle_rf.alfa;
    leg_contral_from_joy_B.leg_lf_angle.rf_beta =
      leg_contral_from_joy_B.sf_xyztoangle_rf.beta;
    leg_contral_from_joy_B.leg_lf_angle.rf_gamma =
      leg_contral_from_joy_B.sf_xyztoangle_rf.gamma;
    leg_contral_from_joy_B.leg_lf_angle.lb_alfa =
      leg_contral_from_joy_B.sf_xyztoangle_lb.alfa;
    leg_contral_from_joy_B.leg_lf_angle.lb_beta =
      leg_contral_from_joy_B.sf_xyztoangle_lb.beta;
    leg_contral_from_joy_B.leg_lf_angle.lb_gamma =
      leg_contral_from_joy_B.sf_xyztoangle_lb.gamma;
    leg_contral_from_joy_B.leg_lf_angle.lf_alfa =
      leg_contral_from_joy_B.sf_xyztoangle_lf.alfa;
    leg_contral_from_joy_B.leg_lf_angle.lf_beta =
      leg_contral_from_joy_B.sf_xyztoangle_lf.beta;
    leg_contral_from_joy_B.leg_lf_angle.lf_gamma =
      leg_contral_from_joy_B.sf_xyztoangle_lf.gamma;

    // MATLABSystem: '<S13>/SinkBlock'
    Pub_leg_contral_from_joy_532.publish(&leg_contral_from_joy_B.leg_lf_angle);
    srUpdateBC(leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC);
  }

  // End of Logic: '<S3>/OR2'
  // End of Outputs for SubSystem: '<Root>/Joy_2_Leg_Angle'

  // Logic: '<S44>/Logical Operator' incorporates:
  //   Constant: '<S44>/Pos_step'

  if (rtIsNaN(leg_contral_from_joy_P.conter_200_CountStep)) {
    leg_contral_from_joy_B.Divide = (rtNaN);
  } else if (leg_contral_from_joy_P.conter_200_CountStep < 0.0) {
    leg_contral_from_joy_B.Divide = -1.0;
  } else {
    leg_contral_from_joy_B.Divide = (leg_contral_from_joy_P.conter_200_CountStep
      > 0.0);
  }

  // Switch: '<S39>/Switch_dir' incorporates:
  //   Constant: '<S39>/const_dir'
  //   Constant: '<S44>/Pos_step'
  //   Logic: '<S44>/Logical Operator'

  if (static_cast<boolean_T>((leg_contral_from_joy_B.Divide == 1.0) ^
       leg_contral_from_joy_P.const_dir_Value)) {
    // Sum: '<S45>/Add' incorporates:
    //   Constant: '<S39>/Step_value'
    //   UnitDelay: '<S39>/Count_reg'

    rtb_Add_g = static_cast<int16_T>(leg_contral_from_joy_DW.Count_reg_DSTATE -
      leg_contral_from_joy_P.Step_value_Value);

    // Switch: '<S45>/Switch_wrap' incorporates:
    //   Constant: '<S45>/Mod_value'
    //   Sum: '<S45>/Add'
    //   Sum: '<S45>/Wrap'

    if (rtb_Add_g >= leg_contral_from_joy_P.Switch_wrap_Threshold) {
      rtb_Switch_dir = static_cast<uint8_T>(rtb_Add_g);
    } else {
      rtb_Switch_dir = static_cast<uint8_T>(rtb_Add_g + static_cast<int16_T>
        (leg_contral_from_joy_P.Mod_value_Value));
    }

    // End of Switch: '<S45>/Switch_wrap'
  } else {
    // Sum: '<S43>/Add' incorporates:
    //   Constant: '<S39>/Step_value'
    //   UnitDelay: '<S39>/Count_reg'

    rtb_Add_c = static_cast<uint16_T>(static_cast<uint32_T>
      (leg_contral_from_joy_P.Step_value_Value) +
      leg_contral_from_joy_DW.Count_reg_DSTATE);

    // Switch: '<S43>/Switch_wrap' incorporates:
    //   Constant: '<S43>/Mod_value'
    //   Sum: '<S43>/Add'
    //   Sum: '<S43>/Wrap'

    if (rtb_Add_c > leg_contral_from_joy_P.Switch_wrap_Threshold_l) {
      rtb_Switch_dir = static_cast<uint8_T>(rtb_Add_c - static_cast<int16_T>
        (leg_contral_from_joy_P.Mod_value_Value_g));
    } else {
      rtb_Switch_dir = static_cast<uint8_T>(rtb_Add_c);
    }

    // End of Switch: '<S43>/Switch_wrap'
  }

  // End of Switch: '<S39>/Switch_dir'

  // Switch: '<S39>/Switch_reset' incorporates:
  //   Constant: '<S39>/Init_value'
  //   Constant: '<S39>/const_load'
  //   Constant: '<S39>/const_rst'
  //   Switch: '<S39>/Switch_enb'
  //   Switch: '<S39>/Switch_load'

  if (leg_contral_from_joy_P.const_rst_Value) {
    rtb_Switch_dir = leg_contral_from_joy_P.Init_value_Value;
  } else if (leg_contral_from_joy_P.const_load_Value) {
    // Switch: '<S39>/Switch_load' incorporates:
    //   Constant: '<S39>/const_load_val'

    rtb_Switch_dir = leg_contral_from_joy_P.const_load_val_Value;
  } else if (rtb_OR9) {
    // Switch: '<S39>/Switch_type' incorporates:
    //   Constant: '<S39>/Free_running_or_modulo'
    //   Switch: '<S39>/Switch_enb'
    //   Switch: '<S39>/Switch_load'

    if (!leg_contral_from_joy_P.Free_running_or_modulo_Value) {
      // Switch: '<S39>/Switch_max' incorporates:
      //   Constant: '<S39>/Constant'
      //   Constant: '<S39>/From_value'
      //   RelationalOperator: '<S39>/Relational Operator'
      //   UnitDelay: '<S39>/Count_reg'

      if (leg_contral_from_joy_DW.Count_reg_DSTATE ==
          leg_contral_from_joy_P.Constant_Value_i) {
        rtb_Switch_dir = leg_contral_from_joy_P.From_value_Value;
      }

      // End of Switch: '<S39>/Switch_max'
    }

    // End of Switch: '<S39>/Switch_type'
  } else {
    // Switch: '<S39>/Switch_enb' incorporates:
    //   Switch: '<S39>/Switch_load'
    //   UnitDelay: '<S39>/Count_reg'

    rtb_Switch_dir = leg_contral_from_joy_DW.Count_reg_DSTATE;
  }

  // End of Switch: '<S39>/Switch_reset'

  // Logic: '<S49>/Logical Operator' incorporates:
  //   Constant: '<S49>/Pos_step'

  if (rtIsNaN(leg_contral_from_joy_P.conter_200_d_CountStep)) {
    leg_contral_from_joy_B.Divide = (rtNaN);
  } else if (leg_contral_from_joy_P.conter_200_d_CountStep < 0.0) {
    leg_contral_from_joy_B.Divide = -1.0;
  } else {
    leg_contral_from_joy_B.Divide =
      (leg_contral_from_joy_P.conter_200_d_CountStep > 0.0);
  }

  // Switch: '<S40>/Switch_dir' incorporates:
  //   Constant: '<S40>/const_dir'
  //   Constant: '<S49>/Pos_step'
  //   Logic: '<S49>/Logical Operator'

  if (static_cast<boolean_T>((leg_contral_from_joy_B.Divide == 1.0) ^
       leg_contral_from_joy_P.const_dir_Value_e)) {
    // Sum: '<S50>/Add' incorporates:
    //   Constant: '<S40>/Step_value'
    //   UnitDelay: '<S40>/Count_reg'

    rtb_Add_g = static_cast<int16_T>(leg_contral_from_joy_DW.Count_reg_DSTATE_b
      - leg_contral_from_joy_P.Step_value_Value_c);

    // Switch: '<S50>/Switch_wrap' incorporates:
    //   Constant: '<S50>/Mod_value'
    //   Sum: '<S50>/Add'
    //   Sum: '<S50>/Wrap'

    if (rtb_Add_g >= leg_contral_from_joy_P.Switch_wrap_Threshold_g) {
      rtb_Switch_dir_f = static_cast<uint8_T>(rtb_Add_g);
    } else {
      rtb_Switch_dir_f = static_cast<uint8_T>(rtb_Add_g + static_cast<int16_T>
        (leg_contral_from_joy_P.Mod_value_Value_n));
    }

    // End of Switch: '<S50>/Switch_wrap'
  } else {
    // Sum: '<S48>/Add' incorporates:
    //   Constant: '<S40>/Step_value'
    //   UnitDelay: '<S40>/Count_reg'

    rtb_Add_c = static_cast<uint16_T>(static_cast<uint32_T>
      (leg_contral_from_joy_P.Step_value_Value_c) +
      leg_contral_from_joy_DW.Count_reg_DSTATE_b);

    // Switch: '<S48>/Switch_wrap' incorporates:
    //   Constant: '<S48>/Mod_value'
    //   Sum: '<S48>/Add'
    //   Sum: '<S48>/Wrap'

    if (rtb_Add_c > leg_contral_from_joy_P.Switch_wrap_Threshold_j) {
      rtb_Switch_dir_f = static_cast<uint8_T>(rtb_Add_c - static_cast<int16_T>
        (leg_contral_from_joy_P.Mod_value_Value_no));
    } else {
      rtb_Switch_dir_f = static_cast<uint8_T>(rtb_Add_c);
    }

    // End of Switch: '<S48>/Switch_wrap'
  }

  // End of Switch: '<S40>/Switch_dir'

  // Switch: '<S40>/Switch_reset' incorporates:
  //   Constant: '<S40>/Init_value'
  //   Constant: '<S40>/const_load'
  //   Constant: '<S40>/const_rst'
  //   Switch: '<S40>/Switch_enb'
  //   Switch: '<S40>/Switch_load'

  if (leg_contral_from_joy_P.const_rst_Value_b) {
    rtb_Switch_dir_f = leg_contral_from_joy_P.Init_value_Value_k;
  } else if (leg_contral_from_joy_P.const_load_Value_j) {
    // Switch: '<S40>/Switch_load' incorporates:
    //   Constant: '<S40>/const_load_val'

    rtb_Switch_dir_f = leg_contral_from_joy_P.const_load_val_Value_m;
  } else if (rtb_OR10) {
    // Switch: '<S40>/Switch_type' incorporates:
    //   Constant: '<S40>/Free_running_or_modulo'
    //   Switch: '<S40>/Switch_enb'
    //   Switch: '<S40>/Switch_load'

    if (!leg_contral_from_joy_P.Free_running_or_modulo_Value_g) {
      // Switch: '<S40>/Switch_max' incorporates:
      //   Constant: '<S40>/Constant'
      //   Constant: '<S40>/From_value'
      //   RelationalOperator: '<S40>/Relational Operator'
      //   UnitDelay: '<S40>/Count_reg'

      if (leg_contral_from_joy_DW.Count_reg_DSTATE_b ==
          leg_contral_from_joy_P.Constant_Value_ee) {
        rtb_Switch_dir_f = leg_contral_from_joy_P.From_value_Value_d;
      }

      // End of Switch: '<S40>/Switch_max'
    }

    // End of Switch: '<S40>/Switch_type'
  } else {
    // Switch: '<S40>/Switch_enb' incorporates:
    //   Switch: '<S40>/Switch_load'
    //   UnitDelay: '<S40>/Count_reg'

    rtb_Switch_dir_f = leg_contral_from_joy_DW.Count_reg_DSTATE_b;
  }

  // End of Switch: '<S40>/Switch_reset'

  // Logic: '<S54>/Logical Operator' incorporates:
  //   Constant: '<S54>/Pos_step'

  if (rtIsNaN(leg_contral_from_joy_P.conter_50_CountStep)) {
    leg_contral_from_joy_B.Divide = (rtNaN);
  } else if (leg_contral_from_joy_P.conter_50_CountStep < 0.0) {
    leg_contral_from_joy_B.Divide = -1.0;
  } else {
    leg_contral_from_joy_B.Divide = (leg_contral_from_joy_P.conter_50_CountStep >
      0.0);
  }

  // Switch: '<S41>/Switch_dir' incorporates:
  //   Constant: '<S54>/Pos_step'
  //   Logic: '<S54>/Logical Operator'

  if (static_cast<boolean_T>((leg_contral_from_joy_B.Divide == 1.0) ^
       rtb_have_joy_aex_cmd)) {
    // Sum: '<S55>/Add' incorporates:
    //   Constant: '<S41>/Step_value'
    //   UnitDelay: '<S41>/Count_reg'

    rtb_Add_g = static_cast<int16_T>(leg_contral_from_joy_DW.Count_reg_DSTATE_j
      - leg_contral_from_joy_P.Step_value_Value_k);

    // Switch: '<S55>/Switch_wrap' incorporates:
    //   Constant: '<S55>/Mod_value'
    //   Sum: '<S55>/Add'
    //   Sum: '<S55>/Wrap'

    if (rtb_Add_g >= leg_contral_from_joy_P.Switch_wrap_Threshold_d) {
      rtb_Switch_dir_l = static_cast<uint8_T>(rtb_Add_g);
    } else {
      rtb_Switch_dir_l = static_cast<uint8_T>(rtb_Add_g + static_cast<int16_T>
        (leg_contral_from_joy_P.Mod_value_Value_a));
    }

    // End of Switch: '<S55>/Switch_wrap'
  } else {
    // Sum: '<S53>/Add' incorporates:
    //   Constant: '<S41>/Step_value'
    //   UnitDelay: '<S41>/Count_reg'

    rtb_Add_c = static_cast<uint16_T>(static_cast<uint32_T>
      (leg_contral_from_joy_P.Step_value_Value_k) +
      leg_contral_from_joy_DW.Count_reg_DSTATE_j);

    // Switch: '<S53>/Switch_wrap' incorporates:
    //   Constant: '<S53>/Mod_value'
    //   Sum: '<S53>/Add'
    //   Sum: '<S53>/Wrap'

    if (rtb_Add_c > leg_contral_from_joy_P.Switch_wrap_Threshold_i) {
      rtb_Switch_dir_l = static_cast<uint8_T>(rtb_Add_c - static_cast<int16_T>
        (leg_contral_from_joy_P.Mod_value_Value_e));
    } else {
      rtb_Switch_dir_l = static_cast<uint8_T>(rtb_Add_c);
    }

    // End of Switch: '<S53>/Switch_wrap'
  }

  // End of Switch: '<S41>/Switch_dir'

  // Switch: '<S41>/Switch_reset' incorporates:
  //   Constant: '<S27>/Constant'
  //   Constant: '<S28>/Constant'
  //   Constant: '<S29>/Constant'
  //   Constant: '<S30>/Constant'
  //   Constant: '<S34>/Constant'
  //   Constant: '<S35>/Constant'
  //   Constant: '<S36>/Constant'
  //   Constant: '<S41>/Init_value'
  //   Constant: '<S41>/const_load'
  //   Constant: '<S41>/const_rst'
  //   Logic: '<S3>/OR11'
  //   Logic: '<S3>/OR12'
  //   Logic: '<S3>/OR4'
  //   Logic: '<S3>/OR5'
  //   Logic: '<S3>/OR6'
  //   RelationalOperator: '<S27>/Compare'
  //   RelationalOperator: '<S28>/Compare'
  //   RelationalOperator: '<S29>/Compare'
  //   RelationalOperator: '<S30>/Compare'
  //   RelationalOperator: '<S34>/Compare'
  //   RelationalOperator: '<S35>/Compare'
  //   RelationalOperator: '<S36>/Compare'
  //   Switch: '<S41>/Switch_enb'
  //   Switch: '<S41>/Switch_load'
  //   UnitDelay: '<S39>/Count_reg'
  //   UnitDelay: '<S40>/Count_reg'
  //   UnitDelay: '<S41>/Count_reg'

  if (leg_contral_from_joy_P.const_rst_Value_p) {
    rtb_Switch_dir_l = leg_contral_from_joy_P.Init_value_Value_c;
  } else if (leg_contral_from_joy_P.const_load_Value_d) {
    // Switch: '<S41>/Switch_load' incorporates:
    //   Constant: '<S41>/const_load_val'

    rtb_Switch_dir_l = leg_contral_from_joy_P.const_load_val_Value_j;
  } else if (((leg_contral_from_joy_DW.Count_reg_DSTATE_j <
               leg_contral_from_joy_P.CompareToConstant5_const) &&
              (leg_contral_from_joy_DW.Count_reg_DSTATE_j >
               leg_contral_from_joy_P.CompareToConstant6_const)) ||
             ((leg_contral_from_joy_DW.Count_reg_DSTATE_j ==
               leg_contral_from_joy_P.CompareToConstant12_const) &&
              ((rtb_have_joy_aex_cmd ==
                leg_contral_from_joy_P.CompareToConstant13_const) &&
               (leg_contral_from_joy_DW.Count_reg_DSTATE_b ==
                leg_contral_from_joy_P.CompareToConstant14_const) &&
               (leg_contral_from_joy_DW.Count_reg_DSTATE ==
                leg_contral_from_joy_P.CompareToConstant15_const))) ||
             ((leg_contral_from_joy_DW.Count_reg_DSTATE_j ==
               leg_contral_from_joy_P.CompareToConstant7_const) &&
              rtb_have_joy_aex_cmd)) {
    // Switch: '<S41>/Switch_type' incorporates:
    //   Constant: '<S41>/Free_running_or_modulo'
    //   Switch: '<S41>/Switch_enb'
    //   Switch: '<S41>/Switch_load'

    if (!leg_contral_from_joy_P.Free_running_or_modulo_Value_c) {
      // Switch: '<S41>/Switch_max' incorporates:
      //   Constant: '<S41>/Constant'
      //   Constant: '<S41>/From_value'
      //   RelationalOperator: '<S41>/Relational Operator'
      //   UnitDelay: '<S41>/Count_reg'

      if (leg_contral_from_joy_DW.Count_reg_DSTATE_j ==
          leg_contral_from_joy_P.Constant_Value_b) {
        rtb_Switch_dir_l = leg_contral_from_joy_P.From_value_Value_c;
      }

      // End of Switch: '<S41>/Switch_max'
    }

    // End of Switch: '<S41>/Switch_type'
  } else {
    // Switch: '<S41>/Switch_enb' incorporates:
    //   Switch: '<S41>/Switch_load'
    //   UnitDelay: '<S41>/Count_reg'

    rtb_Switch_dir_l = leg_contral_from_joy_DW.Count_reg_DSTATE_j;
  }

  // End of Switch: '<S41>/Switch_reset'

  // Update for UnitDelay: '<S39>/Count_reg'
  leg_contral_from_joy_DW.Count_reg_DSTATE = rtb_Switch_dir;

  // Update for UnitDelay: '<S41>/Count_reg'
  leg_contral_from_joy_DW.Count_reg_DSTATE_j = rtb_Switch_dir_l;

  // Update for UnitDelay: '<S40>/Count_reg'
  leg_contral_from_joy_DW.Count_reg_DSTATE_b = rtb_Switch_dir_f;

  // External mode
  rtExtModeUploadCheckTrigger(1);

  {                                    // Sample time: [0.01s, 0.0s]
    rtExtModeUpload(0, (real_T)leg_contral_from_joy_M->Timing.taskTime0);
  }

  // signal main to stop simulation
  {                                    // Sample time: [0.01s, 0.0s]
    if ((rtmGetTFinal(leg_contral_from_joy_M)!=-1) &&
        !((rtmGetTFinal(leg_contral_from_joy_M)-
           leg_contral_from_joy_M->Timing.taskTime0) >
          leg_contral_from_joy_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(leg_contral_from_joy_M, "Simulation finished");
    }

    if (rtmGetStopRequested(leg_contral_from_joy_M)) {
      rtmSetErrorStatus(leg_contral_from_joy_M, "Simulation finished");
    }
  }

  // Update absolute time for base rate
  // The "clockTick0" counts the number of times the code of this task has
  //  been executed. The absolute time is the multiplication of "clockTick0"
  //  and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
  //  overflow during the application lifespan selected.

  leg_contral_from_joy_M->Timing.taskTime0 =
    ((time_T)(++leg_contral_from_joy_M->Timing.clockTick0)) *
    leg_contral_from_joy_M->Timing.stepSize0;
}

// Model initialize function
void leg_contral_from_joy_initialize(void)
{
  // Registration code

  // initialize non-finites
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(leg_contral_from_joy_M, -1);
  leg_contral_from_joy_M->Timing.stepSize0 = 0.01;

  // External mode info
  leg_contral_from_joy_M->Sizes.checksums[0] = (3387587197U);
  leg_contral_from_joy_M->Sizes.checksums[1] = (1456395381U);
  leg_contral_from_joy_M->Sizes.checksums[2] = (1971490541U);
  leg_contral_from_joy_M->Sizes.checksums[3] = (2166823230U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[48];
    leg_contral_from_joy_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[2] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[3] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[4] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[5] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[6] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[7] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[8] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[9] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[10] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[11] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[12] = (sysRanDType *)
      &leg_contral_from_joy_DW.Joy_2_Leg_Angle_SubsysRanBC;
    systemRan[13] = (sysRanDType *)
      &leg_contral_from_joy_DW.EnabledSubsystem_SubsysRanBC;
    systemRan[14] = &rtAlwaysEnabled;
    systemRan[15] = &rtAlwaysEnabled;
    systemRan[16] = &rtAlwaysEnabled;
    systemRan[17] = &rtAlwaysEnabled;
    systemRan[18] = &rtAlwaysEnabled;
    systemRan[19] = &rtAlwaysEnabled;
    systemRan[20] = &rtAlwaysEnabled;
    systemRan[21] = &rtAlwaysEnabled;
    systemRan[22] = &rtAlwaysEnabled;
    systemRan[23] = &rtAlwaysEnabled;
    systemRan[24] = &rtAlwaysEnabled;
    systemRan[25] = &rtAlwaysEnabled;
    systemRan[26] = &rtAlwaysEnabled;
    systemRan[27] = &rtAlwaysEnabled;
    systemRan[28] = &rtAlwaysEnabled;
    systemRan[29] = &rtAlwaysEnabled;
    systemRan[30] = &rtAlwaysEnabled;
    systemRan[31] = &rtAlwaysEnabled;
    systemRan[32] = &rtAlwaysEnabled;
    systemRan[33] = &rtAlwaysEnabled;
    systemRan[34] = &rtAlwaysEnabled;
    systemRan[35] = &rtAlwaysEnabled;
    systemRan[36] = &rtAlwaysEnabled;
    systemRan[37] = &rtAlwaysEnabled;
    systemRan[38] = &rtAlwaysEnabled;
    systemRan[39] = &rtAlwaysEnabled;
    systemRan[40] = &rtAlwaysEnabled;
    systemRan[41] = &rtAlwaysEnabled;
    systemRan[42] = &rtAlwaysEnabled;
    systemRan[43] = &rtAlwaysEnabled;
    systemRan[44] = &rtAlwaysEnabled;
    systemRan[45] = &rtAlwaysEnabled;
    systemRan[46] = &rtAlwaysEnabled;
    systemRan[47] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(leg_contral_from_joy_M->extModeInfo,
      &leg_contral_from_joy_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(leg_contral_from_joy_M->extModeInfo,
                        leg_contral_from_joy_M->Sizes.checksums);
    rteiSetTPtr(leg_contral_from_joy_M->extModeInfo, rtmGetTPtr
                (leg_contral_from_joy_M));
  }

  // data type transition information
  {
    static DataTypeTransInfo dtInfo;
    leg_contral_from_joy_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 35;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    // Block I/O transition table
    dtInfo.BTransTable = &rtBTransTable;

    // Parameters transition table
    dtInfo.PTransTable = &rtPTransTable;
  }

  // InitializeConditions for UnitDelay: '<S39>/Count_reg'
  leg_contral_from_joy_DW.Count_reg_DSTATE =
    leg_contral_from_joy_P.Count_reg_InitialCondition;

  // InitializeConditions for UnitDelay: '<S41>/Count_reg'
  leg_contral_from_joy_DW.Count_reg_DSTATE_j =
    leg_contral_from_joy_P.Count_reg_InitialCondition_d;

  // InitializeConditions for UnitDelay: '<S40>/Count_reg'
  leg_contral_from_joy_DW.Count_reg_DSTATE_b =
    leg_contral_from_joy_P.Count_reg_InitialCondition_e;

  // SystemInitialize for Enabled SubSystem: '<S2>/Enabled Subsystem'
  // SystemInitialize for SignalConversion generated from: '<S22>/In1' incorporates:
  //   Outport: '<S22>/Out1'

  leg_contral_from_joy_B.In1 = leg_contral_from_joy_P.Out1_Y0;

  // End of SystemInitialize for SubSystem: '<S2>/Enabled Subsystem'

  // SystemInitialize for Enabled SubSystem: '<Root>/Joy_2_Leg_Angle'
  // SystemInitialize for MATLAB Function: '<S1>/xyztoangle_rb'
  leg_contral__xyztoangle_lb_Init(&leg_contral_from_joy_DW.sf_xyztoangle_rb);

  // SystemInitialize for MATLAB Function: '<S1>/xyztoangle_rf'
  leg_contral__xyztoangle_lb_Init(&leg_contral_from_joy_DW.sf_xyztoangle_rf);

  // SystemInitialize for MATLAB Function: '<S1>/xyztoangle_lb'
  leg_contral__xyztoangle_lb_Init(&leg_contral_from_joy_DW.sf_xyztoangle_lb);

  // SystemInitialize for MATLAB Function: '<S1>/xyztoangle_lf'
  leg_contral__xyztoangle_lb_Init(&leg_contral_from_joy_DW.sf_xyztoangle_lf);

  // Start for MATLABSystem: '<S8>/SinkBlock'
  leg_contral_from_joy_DW.obj_e.QOSAvoidROSNamespaceConventions = false;
  leg_contral_from_joy_DW.obj_e.matlabCodegenIsDeleted = false;
  leg_contral_from_joy_DW.obj_e.isSetupComplete = false;
  leg_contral_from_joy_DW.obj_e.isInitialized = 1;
  leg_contral_Publisher_setupImpl(&leg_contral_from_joy_DW.obj_e);
  leg_contral_from_joy_DW.obj_e.isSetupComplete = true;

  // Start for MATLABSystem: '<S9>/SinkBlock'
  leg_contral_from_joy_DW.obj_l.QOSAvoidROSNamespaceConventions = false;
  leg_contral_from_joy_DW.obj_l.matlabCodegenIsDeleted = false;
  leg_contral_from_joy_DW.obj_l.isSetupComplete = false;
  leg_contral_from_joy_DW.obj_l.isInitialized = 1;
  leg_contr_Publisher_setupImpl_k(&leg_contral_from_joy_DW.obj_l);
  leg_contral_from_joy_DW.obj_l.isSetupComplete = true;

  // Start for MATLABSystem: '<S10>/SinkBlock'
  leg_contral_from_joy_DW.obj_a.QOSAvoidROSNamespaceConventions = false;
  leg_contral_from_joy_DW.obj_a.matlabCodegenIsDeleted = false;
  leg_contral_from_joy_DW.obj_a.isSetupComplete = false;
  leg_contral_from_joy_DW.obj_a.isInitialized = 1;
  leg_cont_Publisher_setupImpl_kz(&leg_contral_from_joy_DW.obj_a);
  leg_contral_from_joy_DW.obj_a.isSetupComplete = true;

  // Start for MATLABSystem: '<S11>/SinkBlock'
  leg_contral_from_joy_DW.obj_i.QOSAvoidROSNamespaceConventions = false;
  leg_contral_from_joy_DW.obj_i.matlabCodegenIsDeleted = false;
  leg_contral_from_joy_DW.obj_i.isSetupComplete = false;
  leg_contral_from_joy_DW.obj_i.isInitialized = 1;
  leg_con_Publisher_setupImpl_kzl(&leg_contral_from_joy_DW.obj_i);
  leg_contral_from_joy_DW.obj_i.isSetupComplete = true;

  // Start for MATLABSystem: '<S12>/SinkBlock'
  leg_contral_from_joy_DW.obj_p.QOSAvoidROSNamespaceConventions = false;
  leg_contral_from_joy_DW.obj_p.matlabCodegenIsDeleted = false;
  leg_contral_from_joy_DW.obj_p.isSetupComplete = false;
  leg_contral_from_joy_DW.obj_p.isInitialized = 1;
  leg_co_Publisher_setupImpl_kzlr(&leg_contral_from_joy_DW.obj_p);
  leg_contral_from_joy_DW.obj_p.isSetupComplete = true;

  // Start for MATLABSystem: '<S13>/SinkBlock'
  leg_contral_from_joy_DW.obj.QOSAvoidROSNamespaceConventions = false;
  leg_contral_from_joy_DW.obj.matlabCodegenIsDeleted = false;
  leg_contral_from_joy_DW.obj.isSetupComplete = false;
  leg_contral_from_joy_DW.obj.isInitialized = 1;
  leg_c_Publisher_setupImpl_kzlr3(&leg_contral_from_joy_DW.obj);
  leg_contral_from_joy_DW.obj.isSetupComplete = true;

  // SystemInitialize for Outport: '<S1>/leg_angle'
  leg_contral_from_joy_B.sf_xyztoangle_rb.alfa =
    leg_contral_from_joy_P.leg_angle_Y0.rb_alfa;
  leg_contral_from_joy_B.sf_xyztoangle_rb.beta =
    leg_contral_from_joy_P.leg_angle_Y0.rb_beta;
  leg_contral_from_joy_B.sf_xyztoangle_rb.gamma =
    leg_contral_from_joy_P.leg_angle_Y0.rb_gamma;
  leg_contral_from_joy_B.sf_xyztoangle_rf.alfa =
    leg_contral_from_joy_P.leg_angle_Y0.rf_alfa;
  leg_contral_from_joy_B.sf_xyztoangle_rf.beta =
    leg_contral_from_joy_P.leg_angle_Y0.rf_beta;
  leg_contral_from_joy_B.sf_xyztoangle_rf.gamma =
    leg_contral_from_joy_P.leg_angle_Y0.rf_gamma;
  leg_contral_from_joy_B.sf_xyztoangle_lb.alfa =
    leg_contral_from_joy_P.leg_angle_Y0.lb_alfa;
  leg_contral_from_joy_B.sf_xyztoangle_lb.beta =
    leg_contral_from_joy_P.leg_angle_Y0.lb_beta;
  leg_contral_from_joy_B.sf_xyztoangle_lb.gamma =
    leg_contral_from_joy_P.leg_angle_Y0.lb_gamma;
  leg_contral_from_joy_B.sf_xyztoangle_lf.alfa =
    leg_contral_from_joy_P.leg_angle_Y0.lf_alfa;
  leg_contral_from_joy_B.sf_xyztoangle_lf.beta =
    leg_contral_from_joy_P.leg_angle_Y0.lf_beta;
  leg_contral_from_joy_B.sf_xyztoangle_lf.gamma =
    leg_contral_from_joy_P.leg_angle_Y0.lf_gamma;

  // End of SystemInitialize for SubSystem: '<Root>/Joy_2_Leg_Angle'

  // Start for MATLABSystem: '<S2>/SourceBlock'
  leg_contral_from_joy_DW.obj_f.QOSAvoidROSNamespaceConventions = false;
  leg_contral_from_joy_DW.obj_f.matlabCodegenIsDeleted = false;
  leg_contral_from_joy_DW.obj_f.isSetupComplete = false;
  leg_contral_from_joy_DW.obj_f.isInitialized = 1;
  leg_contra_Subscriber_setupImpl(&leg_contral_from_joy_DW.obj_f);
  leg_contral_from_joy_DW.obj_f.isSetupComplete = true;
}

// Model terminate function
void leg_contral_from_joy_terminate(void)
{
  // Terminate for MATLABSystem: '<S2>/SourceBlock'
  if (!leg_contral_from_joy_DW.obj_f.matlabCodegenIsDeleted) {
    leg_contral_from_joy_DW.obj_f.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S2>/SourceBlock'

  // Terminate for Enabled SubSystem: '<Root>/Joy_2_Leg_Angle'
  // Terminate for MATLABSystem: '<S8>/SinkBlock'
  if (!leg_contral_from_joy_DW.obj_e.matlabCodegenIsDeleted) {
    leg_contral_from_joy_DW.obj_e.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S8>/SinkBlock'

  // Terminate for MATLABSystem: '<S9>/SinkBlock'
  if (!leg_contral_from_joy_DW.obj_l.matlabCodegenIsDeleted) {
    leg_contral_from_joy_DW.obj_l.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S9>/SinkBlock'

  // Terminate for MATLABSystem: '<S10>/SinkBlock'
  if (!leg_contral_from_joy_DW.obj_a.matlabCodegenIsDeleted) {
    leg_contral_from_joy_DW.obj_a.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S10>/SinkBlock'

  // Terminate for MATLABSystem: '<S11>/SinkBlock'
  if (!leg_contral_from_joy_DW.obj_i.matlabCodegenIsDeleted) {
    leg_contral_from_joy_DW.obj_i.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S11>/SinkBlock'

  // Terminate for MATLABSystem: '<S12>/SinkBlock'
  if (!leg_contral_from_joy_DW.obj_p.matlabCodegenIsDeleted) {
    leg_contral_from_joy_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S12>/SinkBlock'

  // Terminate for MATLABSystem: '<S13>/SinkBlock'
  if (!leg_contral_from_joy_DW.obj.matlabCodegenIsDeleted) {
    leg_contral_from_joy_DW.obj.matlabCodegenIsDeleted = true;
  }

  // End of Terminate for MATLABSystem: '<S13>/SinkBlock'
  // End of Terminate for SubSystem: '<Root>/Joy_2_Leg_Angle'
}
