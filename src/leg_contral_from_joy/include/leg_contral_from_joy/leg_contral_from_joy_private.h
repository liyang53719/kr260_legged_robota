//
//  leg_contral_from_joy_private.h
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


#ifndef leg_contral_from_joy_private_h_
#define leg_contral_from_joy_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "leg_contral_from_joy.h"
#include "leg_contral_from_joy_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

// Private macros used by the generated code to access rtModel
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFU) ) || ( SCHAR_MAX != (0x7F) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFFFFFU) ) || ( INT_MAX != (0x7FFFFFFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

// Skipping ulong/long check: insufficient preprocessor integer range.
extern real32_T look1_iu8bflftf_binlcpw(uint8_T u0, const real32_T bp0[], const
  real32_T table[], uint32_T maxIndex);
extern void leg_contral__xyztoangle_lb_Init(DW_xyztoangle_lb_leg_contral__T
  *localDW);
extern void leg_contral_from__xyztoangle_lb(real_T rtu_x, real_T rtu_y, real_T
  rtu_z, B_xyztoangle_lb_leg_contral_f_T *localB,
  DW_xyztoangle_lb_leg_contral__T *localDW);

#endif                                 // leg_contral_from_joy_private_h_
