//
//  leg_contral_from_joy_dt.h
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


#include "ext_types.h"

// data type size table
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(int64_T),
  sizeof(uint64_T),
  sizeof(SL_Bus_builtin_interfaces_Time),
  sizeof(SL_Bus_ROSVariableLengthArrayInfo),
  sizeof(SL_Bus_std_msgs_Header),
  sizeof(SL_Bus_sensor_msgs_Joy),
  sizeof(SL_Bus_geometry_msgs_Vector3),
  sizeof(SL_Bus_robota_leg_pos_LegPos),
  sizeof(uint16_T),
  sizeof(int16_T),
  sizeof(int16_T),
  sizeof(ros_slros2_internal_block_Pub_T),
  sizeof(int32_T),
  sizeof(ros_slros2_internal_block_Sub_T),
  sizeof(uint64_T),
  sizeof(int64_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

// data type name table
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "int64_T",
  "uint64_T",
  "SL_Bus_builtin_interfaces_Time",
  "SL_Bus_ROSVariableLengthArrayInfo",
  "SL_Bus_std_msgs_Header",
  "SL_Bus_sensor_msgs_Joy",
  "SL_Bus_geometry_msgs_Vector3",
  "SL_Bus_robota_leg_pos_LegPos",
  "uint16_T",
  "int16_T",
  "int16_T",
  "ros_slros2_internal_block_Pub_T",
  "struct_OOJI99jf5phnnLyDue7spB",
  "ros_slros2_internal_block_Sub_T",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

// data type transitions for block I/O structure
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&leg_contral_from_joy_B.In1), 20, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_B.sf_xyztoangle_rf.alfa), 0, 0, 3 },

  { (char_T *)(&leg_contral_from_joy_B.sf_xyztoangle_rb.alfa), 0, 0, 3 },

  { (char_T *)(&leg_contral_from_joy_B.sf_xyztoangle_lf.alfa), 0, 0, 3 },

  { (char_T *)(&leg_contral_from_joy_B.sf_xyztoangle_lb.alfa), 0, 0, 3 }
  ,

  { (char_T *)(&leg_contral_from_joy_DW.obj), 26, 0, 6 },

  { (char_T *)(&leg_contral_from_joy_DW.obj_f), 28, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_DW.Count_reg_DSTATE), 3, 0, 3 },

  { (char_T *)(&leg_contral_from_joy_DW.EnabledSubsystem_SubsysRanBC), 2, 0, 2 },

  { (char_T *)(&leg_contral_from_joy_DW.sf_xyztoangle_rf.sfEvent), 6, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_DW.sf_xyztoangle_rf.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_DW.sf_xyztoangle_rb.sfEvent), 6, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_DW.sf_xyztoangle_rb.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_DW.sf_xyztoangle_lf.sfEvent), 6, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_DW.sf_xyztoangle_lf.doneDoubleBufferReInit),
    8, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_DW.sf_xyztoangle_lb.sfEvent), 6, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_DW.sf_xyztoangle_lb.doneDoubleBufferReInit),
    8, 0, 1 }
};

// data type transition table for block I/O structure
static DataTypeTransitionTable rtBTransTable = {
  17U,
  rtBTransitions
};

// data type transitions for Parameters structure
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&leg_contral_from_joy_P.foot_step_x[0]), 1, 0, 400 },

  { (char_T *)(&leg_contral_from_joy_P.conter_200_CountStep), 0, 0, 3 },

  { (char_T *)(&leg_contral_from_joy_P.CompareToConstant_const), 1, 0, 2 },

  { (char_T *)(&leg_contral_from_joy_P.CompareToConstant13_const), 8, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_P.CompareToConstant8_const), 3, 0, 13 },

  { (char_T *)(&leg_contral_from_joy_P.Constant_Value), 20, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_P.Out1_Y0), 20, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_P.Constant_Value_l), 20, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_P.Constant_Value_e), 22, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_P.leg_angle_Y0), 22, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_P.Constant_Value_m), 21, 0, 1 },

  { (char_T *)(&leg_contral_from_joy_P.ZERO_Value), 0, 0, 3 },

  { (char_T *)(&leg_contral_from_joy_P.Switch_Threshold), 6, 0, 3 },

  { (char_T *)(&leg_contral_from_joy_P.Gain_Gain), 1, 0, 801 },

  { (char_T *)(&leg_contral_from_joy_P.Switch_wrap_Threshold), 25, 0, 3 },

  { (char_T *)(&leg_contral_from_joy_P.Mod_value_Value), 23, 0, 9 },

  { (char_T *)(&leg_contral_from_joy_P.Free_running_or_modulo_Value), 8, 0, 11 },

  { (char_T *)(&leg_contral_from_joy_P.Init_value_Value), 3, 0, 18 }
};

// data type transition table for Parameters structure
static DataTypeTransitionTable rtPTransTable = {
  18U,
  rtPTransitions
};

// [EOF] leg_contral_from_joy_dt.h
