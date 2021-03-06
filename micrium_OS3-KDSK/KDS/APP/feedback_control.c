/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: feedback_control.c
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

#include "feedback_control.h"

/*===========*
 * Constants *
 *===========*/
#define RT_PI                          3.14159265358979323846
#define RT_PIF                         3.1415927F
#define RT_LN_10                       2.30258509299404568402
#define RT_LN_10F                      2.3025851F
#define RT_LOG10E                      0.43429448190325182765
#define RT_LOG10EF                     0.43429449F
#define RT_E                           2.7182818284590452354
#define RT_EF                          2.7182817F

/*
 * UNUSED_PARAMETER(x)
 *   Used to specify that a function parameter (argument) is required but not
 *   accessed by the function body.
 */
#ifndef UNUSED_PARAMETER
# if defined(__LCC__)
#   define UNUSED_PARAMETER(x)                                   /* do nothing */
# else

/*
 * This is the semi-ANSI standard way of indicating that an
 * unused function parameter is required.
 */
#   define UNUSED_PARAMETER(x)         (void) (x)
# endif
#endif

/* Model step function */
void feedback_control_step(RT_MODEL_feedback_control_T *const feedback_control_M,
  real_T feedback_control_U_ErrorDeg, real_T *feedback_control_Y_CommandV)
{
  real_T u0;

  /* Gain: '<Root>/Gain' incorporates:
   *  Inport: '<Root>/Error [Deg]'
   */
  u0 = 0.012
    *feedback_control_U_ErrorDeg;

  /* Saturate: '<Root>/Saturation' */
  if (u0 > 1.0) {
    /* Outport: '<Root>/Command [V]' */
    *feedback_control_Y_CommandV = 1.0;
  } else if (u0 < -1.0) {
    /* Outport: '<Root>/Command [V]' */
    *feedback_control_Y_CommandV = -1.0;
  } else {
    /* Outport: '<Root>/Command [V]' */
    *feedback_control_Y_CommandV = u0;
  }

  /* End of Saturate: '<Root>/Saturation' */
  UNUSED_PARAMETER(feedback_control_M);
}

/* Model initialize function */
void feedback_control_initialize(RT_MODEL_feedback_control_T *const
  feedback_control_M, real_T *feedback_control_U_ErrorDeg, real_T
  *feedback_control_Y_CommandV)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(feedback_control_M, (NULL));

  /* external inputs */
  (*feedback_control_U_ErrorDeg) = 0.0;

  /* external outputs */
  (*feedback_control_Y_CommandV) = 0.0;
  UNUSED_PARAMETER(feedback_control_M);
}

/* Model terminate function */
void feedback_control_terminate(RT_MODEL_feedback_control_T *const
  feedback_control_M)
{
  /* (no terminate code required) */
  UNUSED_PARAMETER(feedback_control_M);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
