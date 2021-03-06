/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: feedback_control.h
 *
 * Code generated for Simulink model 'feedback_control'.
 *
 * Model version                  : 1.45
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Thu Jul 06 11:55:34 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_feedback_control_h_
#define RTW_HEADER_feedback_control_h_
#include <stddef.h>
#ifndef feedback_control_COMMON_INCLUDES_
# define feedback_control_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* feedback_control_COMMON_INCLUDES_ */

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_feedback_control_T RT_MODEL_feedback_control_T;

/* Real-time Model Data Structure */
struct tag_RTM_feedback_control_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void feedback_control_initialize(RT_MODEL_feedback_control_T *const
  feedback_control_M, real_T *feedback_control_U_ErrorDeg, real_T
  *feedback_control_Y_CommandV);
extern void feedback_control_step(RT_MODEL_feedback_control_T *const
  feedback_control_M, real_T feedback_control_U_ErrorDeg, real_T
  *feedback_control_Y_CommandV);
extern void feedback_control_terminate(RT_MODEL_feedback_control_T *const
  feedback_control_M);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'feedback_control'
 */
#endif                                 /* RTW_HEADER_feedback_control_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
