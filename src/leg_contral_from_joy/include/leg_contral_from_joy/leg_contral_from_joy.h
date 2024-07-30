//
//  leg_contral_from_joy.h
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


#ifndef leg_contral_from_joy_h_
#define leg_contral_from_joy_h_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#include "slros2_initialize.h"
#include "leg_contral_from_joy_types.h"

extern "C"
{

#include "rt_nonfinite.h"

}

extern "C"
{

#include "rtGetNaN.h"

}

#include <float.h>
#include <stddef.h>

// Macros for accessing real-time model data structure
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

// Block signals for system '<S1>/xyztoangle_lb'
struct B_xyztoangle_lb_leg_contral_f_T {
  real_T alfa;                         // '<S1>/xyztoangle_lb'
  real_T beta;                         // '<S1>/xyztoangle_lb'
  real_T gamma;                        // '<S1>/xyztoangle_lb'
};

// Block states (default storage) for system '<S1>/xyztoangle_lb'
struct DW_xyztoangle_lb_leg_contral__T {
  int32_T sfEvent;                     // '<S1>/xyztoangle_lb'
  boolean_T doneDoubleBufferReInit;    // '<S1>/xyztoangle_lb'
};

// Block signals (default storage)
struct B_leg_contral_from_joy_T {
  SL_Bus_sensor_msgs_Joy In1;          // '<S22>/In1'
  SL_Bus_sensor_msgs_Joy rtb_SourceBlock_o2_m;
  SL_Bus_robota_leg_pos_LegPos leg_lf_angle;// '<S1>/Bus Assignment6'
  real_T leg_pose[12];
  real32_T rot_mat[9];
  real32_T rtb_p_rx_x1_c[9];
  real32_T b[9];
  real32_T fv[9];
  real_T pos[3];
  SL_Bus_geometry_msgs_Vector3 leg_rb_angle;// '<S1>/Bus Assignment2'
  SL_Bus_geometry_msgs_Vector3 leg_rf_angle;// '<S1>/Bus Assignment3'
  SL_Bus_geometry_msgs_Vector3 leg_lb_angle;// '<S1>/Bus Assignment4'
  SL_Bus_geometry_msgs_Vector3 leg_lf_angle_o;// '<S1>/Bus Assignment5'
  sJ4ih70VmKcvCeguWN0mNVF deadline;
  sJ4ih70VmKcvCeguWN0mNVF deadline_k;
  sJ4ih70VmKcvCeguWN0mNVF deadline_c;
  sJ4ih70VmKcvCeguWN0mNVF deadline_b;
  sJ4ih70VmKcvCeguWN0mNVF deadline_p;
  sJ4ih70VmKcvCeguWN0mNVF deadline_cv;
  sJ4ih70VmKcvCeguWN0mNVF deadline_f;
  real_T Divide;                       // '<S3>/Divide'
  real_T rot_mat_tmp;
  real32_T p_ry_y1;                    // '<S1>/p_ry_y1'
  real32_T Product;                    // '<S3>/Product'
  real32_T Product1;                   // '<S3>/Product1'
  real32_T Product2;                   // '<S3>/Product2'
  real32_T Product3;                   // '<S3>/Product3'
  real32_T p_rx_x;                     // '<S1>/p_rx_x'
  B_xyztoangle_lb_leg_contral_f_T sf_xyztoangle_rf;// '<S1>/xyztoangle_rf'
  B_xyztoangle_lb_leg_contral_f_T sf_xyztoangle_rb;// '<S1>/xyztoangle_rb'
  B_xyztoangle_lb_leg_contral_f_T sf_xyztoangle_lf;// '<S1>/xyztoangle_lf'
  B_xyztoangle_lb_leg_contral_f_T sf_xyztoangle_lb;// '<S1>/xyztoangle_lb'
};

// Block states (default storage) for system '<Root>'
struct DW_leg_contral_from_joy_T {
  ros_slros2_internal_block_Pub_T obj; // '<S13>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_p;// '<S12>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_i;// '<S11>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_a;// '<S10>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_l;// '<S9>/SinkBlock'
  ros_slros2_internal_block_Pub_T obj_e;// '<S8>/SinkBlock'
  ros_slros2_internal_block_Sub_T obj_f;// '<S2>/SourceBlock'
  uint8_T Count_reg_DSTATE;            // '<S39>/Count_reg'
  uint8_T Count_reg_DSTATE_j;          // '<S41>/Count_reg'
  uint8_T Count_reg_DSTATE_b;          // '<S40>/Count_reg'
  int8_T EnabledSubsystem_SubsysRanBC; // '<S2>/Enabled Subsystem'
  int8_T Joy_2_Leg_Angle_SubsysRanBC;  // '<Root>/Joy_2_Leg_Angle'
  DW_xyztoangle_lb_leg_contral__T sf_xyztoangle_rf;// '<S1>/xyztoangle_rf'
  DW_xyztoangle_lb_leg_contral__T sf_xyztoangle_rb;// '<S1>/xyztoangle_rb'
  DW_xyztoangle_lb_leg_contral__T sf_xyztoangle_lf;// '<S1>/xyztoangle_lf'
  DW_xyztoangle_lb_leg_contral__T sf_xyztoangle_lb;// '<S1>/xyztoangle_lb'
};

// Parameters (default storage)
struct P_leg_contral_from_joy_T_ {
  real32_T foot_step_x[200];           // Variable: foot_step_x
                                          //  Referenced by:
                                          //    '<S3>/lut_foot_step_x'
                                          //    '<S3>/lut_foot_step_x1'

  real32_T foot_step_y[200];           // Variable: foot_step_y
                                          //  Referenced by:
                                          //    '<S3>/lut_foot_step_y'
                                          //    '<S3>/lut_foot_step_y1'

  real_T conter_200_CountStep;         // Mask Parameter: conter_200_CountStep
                                          //  Referenced by: '<S44>/Pos_step'

  real_T conter_200_d_CountStep;       // Mask Parameter: conter_200_d_CountStep
                                          //  Referenced by: '<S49>/Pos_step'

  real_T conter_50_CountStep;          // Mask Parameter: conter_50_CountStep
                                          //  Referenced by: '<S54>/Pos_step'

  real32_T CompareToConstant_const;   // Mask Parameter: CompareToConstant_const
                                         //  Referenced by: '<S23>/Constant'

  real32_T CompareToConstant1_const; // Mask Parameter: CompareToConstant1_const
                                        //  Referenced by: '<S24>/Constant'

  boolean_T CompareToConstant13_const;
                                    // Mask Parameter: CompareToConstant13_const
                                       //  Referenced by: '<S28>/Constant'

  uint8_T CompareToConstant8_const;  // Mask Parameter: CompareToConstant8_const
                                        //  Referenced by: '<S37>/Constant'

  uint8_T CompareToConstant9_const;  // Mask Parameter: CompareToConstant9_const
                                        //  Referenced by: '<S38>/Constant'

  uint8_T CompareToConstant10_const;// Mask Parameter: CompareToConstant10_const
                                       //  Referenced by: '<S25>/Constant'

  uint8_T CompareToConstant4_const;  // Mask Parameter: CompareToConstant4_const
                                        //  Referenced by: '<S33>/Constant'

  uint8_T CompareToConstant11_const;// Mask Parameter: CompareToConstant11_const
                                       //  Referenced by: '<S26>/Constant'

  uint8_T CompareToConstant2_const;  // Mask Parameter: CompareToConstant2_const
                                        //  Referenced by: '<S31>/Constant'

  uint8_T CompareToConstant3_const;  // Mask Parameter: CompareToConstant3_const
                                        //  Referenced by: '<S32>/Constant'

  uint8_T CompareToConstant12_const;// Mask Parameter: CompareToConstant12_const
                                       //  Referenced by: '<S27>/Constant'

  uint8_T CompareToConstant14_const;// Mask Parameter: CompareToConstant14_const
                                       //  Referenced by: '<S29>/Constant'

  uint8_T CompareToConstant15_const;// Mask Parameter: CompareToConstant15_const
                                       //  Referenced by: '<S30>/Constant'

  uint8_T CompareToConstant5_const;  // Mask Parameter: CompareToConstant5_const
                                        //  Referenced by: '<S34>/Constant'

  uint8_T CompareToConstant6_const;  // Mask Parameter: CompareToConstant6_const
                                        //  Referenced by: '<S35>/Constant'

  uint8_T CompareToConstant7_const;  // Mask Parameter: CompareToConstant7_const
                                        //  Referenced by: '<S36>/Constant'

  SL_Bus_sensor_msgs_Joy Constant_Value;// Computed Parameter: Constant_Value
                                           //  Referenced by: '<S4>/Constant'

  SL_Bus_sensor_msgs_Joy Out1_Y0;      // Computed Parameter: Out1_Y0
                                          //  Referenced by: '<S22>/Out1'

  SL_Bus_sensor_msgs_Joy Constant_Value_l;// Computed Parameter: Constant_Value_l
                                             //  Referenced by: '<S2>/Constant'

  SL_Bus_robota_leg_pos_LegPos Constant_Value_e;// Computed Parameter: Constant_Value_e
                                                   //  Referenced by: '<S6>/Constant'

  SL_Bus_robota_leg_pos_LegPos leg_angle_Y0;// Computed Parameter: leg_angle_Y0
                                               //  Referenced by: '<S1>/leg_angle'

  SL_Bus_geometry_msgs_Vector3 Constant_Value_m;// Computed Parameter: Constant_Value_m
                                                   //  Referenced by: '<S5>/Constant'

  real_T ZERO_Value;                   // Expression: 0
                                          //  Referenced by: '<S1>/ZERO'

  real_T Constant1_Value;              // Expression: 150
                                          //  Referenced by: '<S1>/Constant1'

  real_T Constant_Value_d;             // Expression: 5
                                          //  Referenced by: '<S3>/Constant'

  int32_T Switch_Threshold;            // Computed Parameter: Switch_Threshold
                                          //  Referenced by: '<S1>/Switch'

  int32_T Switch1_Threshold;           // Computed Parameter: Switch1_Threshold
                                          //  Referenced by: '<S1>/Switch1'

  int32_T Switch2_Threshold;           // Computed Parameter: Switch2_Threshold
                                          //  Referenced by: '<S1>/Switch2'

  real32_T Gain_Gain;                  // Computed Parameter: Gain_Gain
                                          //  Referenced by: '<S1>/Gain'

  real32_T lut_foot_step_x_bp01Data[200];
                                 // Computed Parameter: lut_foot_step_x_bp01Data
                                    //  Referenced by: '<S3>/lut_foot_step_x'

  real32_T lut_foot_step_y_bp01Data[200];
                                 // Computed Parameter: lut_foot_step_y_bp01Data
                                    //  Referenced by: '<S3>/lut_foot_step_y'

  real32_T lut_foot_step_x1_bp01Data[200];
                                // Computed Parameter: lut_foot_step_x1_bp01Data
                                   //  Referenced by: '<S3>/lut_foot_step_x1'

  real32_T lut_foot_step_y1_bp01Data[200];
                                // Computed Parameter: lut_foot_step_y1_bp01Data
                                   //  Referenced by: '<S3>/lut_foot_step_y1'

  int16_T Switch_wrap_Threshold;    // Computed Parameter: Switch_wrap_Threshold
                                       //  Referenced by: '<S45>/Switch_wrap'

  int16_T Switch_wrap_Threshold_g;// Computed Parameter: Switch_wrap_Threshold_g
                                     //  Referenced by: '<S50>/Switch_wrap'

  int16_T Switch_wrap_Threshold_d;// Computed Parameter: Switch_wrap_Threshold_d
                                     //  Referenced by: '<S55>/Switch_wrap'

  uint16_T Mod_value_Value;            // Computed Parameter: Mod_value_Value
                                          //  Referenced by: '<S45>/Mod_value'

  uint16_T Mod_value_Value_g;          // Computed Parameter: Mod_value_Value_g
                                          //  Referenced by: '<S43>/Mod_value'

  uint16_T Switch_wrap_Threshold_l;
                                  // Computed Parameter: Switch_wrap_Threshold_l
                                     //  Referenced by: '<S43>/Switch_wrap'

  uint16_T Mod_value_Value_n;          // Computed Parameter: Mod_value_Value_n
                                          //  Referenced by: '<S50>/Mod_value'

  uint16_T Mod_value_Value_no;         // Computed Parameter: Mod_value_Value_no
                                          //  Referenced by: '<S48>/Mod_value'

  uint16_T Switch_wrap_Threshold_j;
                                  // Computed Parameter: Switch_wrap_Threshold_j
                                     //  Referenced by: '<S48>/Switch_wrap'

  uint16_T Mod_value_Value_a;          // Computed Parameter: Mod_value_Value_a
                                          //  Referenced by: '<S55>/Mod_value'

  uint16_T Mod_value_Value_e;          // Computed Parameter: Mod_value_Value_e
                                          //  Referenced by: '<S53>/Mod_value'

  uint16_T Switch_wrap_Threshold_i;
                                  // Computed Parameter: Switch_wrap_Threshold_i
                                     //  Referenced by: '<S53>/Switch_wrap'

  boolean_T Free_running_or_modulo_Value;// Expression:  freerun || modulo
                                            //  Referenced by: '<S39>/Free_running_or_modulo'

  boolean_T const_load_Value;          // Computed Parameter: const_load_Value
                                          //  Referenced by: '<S39>/const_load'

  boolean_T Free_running_or_modulo_Value_g;// Expression:  freerun || modulo
                                              //  Referenced by: '<S40>/Free_running_or_modulo'

  boolean_T const_load_Value_j;        // Computed Parameter: const_load_Value_j
                                          //  Referenced by: '<S40>/const_load'

  boolean_T Free_running_or_modulo_Value_c;// Expression:  freerun || modulo
                                              //  Referenced by: '<S41>/Free_running_or_modulo'

  boolean_T const_load_Value_d;        // Computed Parameter: const_load_Value_d
                                          //  Referenced by: '<S41>/const_load'

  boolean_T const_dir_Value;           // Computed Parameter: const_dir_Value
                                          //  Referenced by: '<S39>/const_dir'

  boolean_T const_rst_Value;           // Computed Parameter: const_rst_Value
                                          //  Referenced by: '<S39>/const_rst'

  boolean_T const_dir_Value_e;         // Computed Parameter: const_dir_Value_e
                                          //  Referenced by: '<S40>/const_dir'

  boolean_T const_rst_Value_b;         // Computed Parameter: const_rst_Value_b
                                          //  Referenced by: '<S40>/const_rst'

  boolean_T const_rst_Value_p;         // Computed Parameter: const_rst_Value_p
                                          //  Referenced by: '<S41>/const_rst'

  uint8_T Init_value_Value;            // Computed Parameter: Init_value_Value
                                          //  Referenced by: '<S39>/Init_value'

  uint8_T const_load_val_Value;      // Computed Parameter: const_load_val_Value
                                        //  Referenced by: '<S39>/const_load_val'

  uint8_T From_value_Value;            // Computed Parameter: From_value_Value
                                          //  Referenced by: '<S39>/From_value'

  uint8_T Constant_Value_i;            // Computed Parameter: Constant_Value_i
                                          //  Referenced by: '<S39>/Constant'

  uint8_T Init_value_Value_k;          // Computed Parameter: Init_value_Value_k
                                          //  Referenced by: '<S40>/Init_value'

  uint8_T const_load_val_Value_m;  // Computed Parameter: const_load_val_Value_m
                                      //  Referenced by: '<S40>/const_load_val'

  uint8_T From_value_Value_d;          // Computed Parameter: From_value_Value_d
                                          //  Referenced by: '<S40>/From_value'

  uint8_T Constant_Value_ee;           // Computed Parameter: Constant_Value_ee
                                          //  Referenced by: '<S40>/Constant'

  uint8_T Init_value_Value_c;          // Computed Parameter: Init_value_Value_c
                                          //  Referenced by: '<S41>/Init_value'

  uint8_T const_load_val_Value_j;  // Computed Parameter: const_load_val_Value_j
                                      //  Referenced by: '<S41>/const_load_val'

  uint8_T From_value_Value_c;          // Computed Parameter: From_value_Value_c
                                          //  Referenced by: '<S41>/From_value'

  uint8_T Constant_Value_b;            // Computed Parameter: Constant_Value_b
                                          //  Referenced by: '<S41>/Constant'

  uint8_T Count_reg_InitialCondition;
                               // Computed Parameter: Count_reg_InitialCondition
                                  //  Referenced by: '<S39>/Count_reg'

  uint8_T Count_reg_InitialCondition_d;
                             // Computed Parameter: Count_reg_InitialCondition_d
                                //  Referenced by: '<S41>/Count_reg'

  uint8_T Count_reg_InitialCondition_e;
                             // Computed Parameter: Count_reg_InitialCondition_e
                                //  Referenced by: '<S40>/Count_reg'

  uint8_T Step_value_Value;            // Computed Parameter: Step_value_Value
                                          //  Referenced by: '<S39>/Step_value'

  uint8_T Step_value_Value_c;          // Computed Parameter: Step_value_Value_c
                                          //  Referenced by: '<S40>/Step_value'

  uint8_T Step_value_Value_k;          // Computed Parameter: Step_value_Value_k
                                          //  Referenced by: '<S41>/Step_value'

};

// Real-time Model Data Structure
struct tag_RTM_leg_contral_from_joy_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  //
  //  Sizes:
  //  The following substructure contains sizes information
  //  for many of the model attributes such as inputs, outputs,
  //  dwork, sample times, etc.

  struct {
    uint32_T checksums[4];
  } Sizes;

  //
  //  SpecialInfo:
  //  The following substructure contains special information
  //  related to other components that are dependent on RTW.

  struct {
    const void *mappingInfo;
  } SpecialInfo;

  //
  //  Timing:
  //  The following substructure contains information regarding
  //  the timing information for the model.

  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

// Block parameters (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern P_leg_contral_from_joy_T leg_contral_from_joy_P;

#ifdef __cplusplus

}

#endif

// Block signals (default storage)
#ifdef __cplusplus

extern "C"
{

#endif

  extern struct B_leg_contral_from_joy_T leg_contral_from_joy_B;

#ifdef __cplusplus

}

#endif

// Block states (default storage)
extern struct DW_leg_contral_from_joy_T leg_contral_from_joy_DW;

#ifdef __cplusplus

extern "C"
{

#endif

  // Model entry point functions
  extern void leg_contral_from_joy_initialize(void);
  extern void leg_contral_from_joy_step(void);
  extern void leg_contral_from_joy_terminate(void);

#ifdef __cplusplus

}

#endif

// Real-time Model object
#ifdef __cplusplus

extern "C"
{

#endif

  extern RT_MODEL_leg_contral_from_joy_T *const leg_contral_from_joy_M;

#ifdef __cplusplus

}

#endif

extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Use the MATLAB hilite_system command to trace the generated code back
//  to the model.  For example,
//
//  hilite_system('<S3>')    - opens system 3
//  hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'leg_contral_from_joy'
//  '<S1>'   : 'leg_contral_from_joy/Joy_2_Leg_Angle'
//  '<S2>'   : 'leg_contral_from_joy/Subscribe1'
//  '<S3>'   : 'leg_contral_from_joy/get_foot_step_lut'
//  '<S4>'   : 'leg_contral_from_joy/Joy_2_Leg_Angle/Blank Message1'
//  '<S5>'   : 'leg_contral_from_joy/Joy_2_Leg_Angle/Blank Message2'
//  '<S6>'   : 'leg_contral_from_joy/Joy_2_Leg_Angle/Blank Message3'
//  '<S7>'   : 'leg_contral_from_joy/Joy_2_Leg_Angle/MATLAB Function'
//  '<S8>'   : 'leg_contral_from_joy/Joy_2_Leg_Angle/Publish1'
//  '<S9>'   : 'leg_contral_from_joy/Joy_2_Leg_Angle/Publish2'
//  '<S10>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/Publish3'
//  '<S11>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/Publish4'
//  '<S12>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/Publish5'
//  '<S13>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/Publish6'
//  '<S14>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/joy_aexs_out'
//  '<S15>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/joy_button_out'
//  '<S16>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/xyztoangle_lb'
//  '<S17>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/xyztoangle_lf'
//  '<S18>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/xyztoangle_rb'
//  '<S19>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/xyztoangle_rf'
//  '<S20>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/joy_aexs_out/128_demux'
//  '<S21>'  : 'leg_contral_from_joy/Joy_2_Leg_Angle/joy_button_out/128_demux'
//  '<S22>'  : 'leg_contral_from_joy/Subscribe1/Enabled Subsystem'
//  '<S23>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant'
//  '<S24>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant1'
//  '<S25>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant10'
//  '<S26>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant11'
//  '<S27>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant12'
//  '<S28>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant13'
//  '<S29>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant14'
//  '<S30>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant15'
//  '<S31>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant2'
//  '<S32>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant3'
//  '<S33>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant4'
//  '<S34>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant5'
//  '<S35>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant6'
//  '<S36>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant7'
//  '<S37>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant8'
//  '<S38>'  : 'leg_contral_from_joy/get_foot_step_lut/Compare To Constant9'
//  '<S39>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200'
//  '<S40>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200_d'
//  '<S41>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_50'
//  '<S42>'  : 'leg_contral_from_joy/get_foot_step_lut/joy_aexs_out'
//  '<S43>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200/Add_wrap'
//  '<S44>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200/Dir_logic'
//  '<S45>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200/Sub_wrap'
//  '<S46>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200/Add_wrap/Compare To Constant'
//  '<S47>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200/Sub_wrap/Compare To Constant'
//  '<S48>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200_d/Add_wrap'
//  '<S49>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200_d/Dir_logic'
//  '<S50>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200_d/Sub_wrap'
//  '<S51>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200_d/Add_wrap/Compare To Constant'
//  '<S52>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_200_d/Sub_wrap/Compare To Constant'
//  '<S53>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_50/Add_wrap'
//  '<S54>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_50/Dir_logic'
//  '<S55>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_50/Sub_wrap'
//  '<S56>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_50/Add_wrap/Compare To Constant'
//  '<S57>'  : 'leg_contral_from_joy/get_foot_step_lut/conter_50/Sub_wrap/Compare To Constant'
//  '<S58>'  : 'leg_contral_from_joy/get_foot_step_lut/joy_aexs_out/128_demux'

#endif                                 // leg_contral_from_joy_h_
