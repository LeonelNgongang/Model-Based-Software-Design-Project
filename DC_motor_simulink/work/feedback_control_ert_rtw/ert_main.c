/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: ert_main.c
 *
 * Code generated for Simulink model 'feedback_control'.
 *
 * Model version                  : 1.43
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Tue Jul 18 01:58:38 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include <stddef.h>
#include <stdio.h>                     /* This ert_main.c example uses printf/fflush */
#include "feedback_control.h"          /* Model's header file */
#include "rtwtypes.h"

static RT_MODEL_feedback_control_T feedback_control_M_;
static RT_MODEL_feedback_control_T *const feedback_control_M =
  &feedback_control_M_;                /* Real-time model */

/* '<Root>/Error [Deg]' */
static real_T feedback_control_U_ErrorDeg;

/* '<Root>/Command [V]' */
static real_T feedback_control_Y_CommandV;

/*
 * Associating rt_OneStep with a real-time clock or interrupt service routine
 * is what makes the generated code "real-time".  The function rt_OneStep is
 * always associated with the base rate of the model.  Subrates are managed
 * by the base rate from inside the generated code.  Enabling/disabling
 * interrupts and floating point context switches are target specific.  This
 * example code indicates where these should take place relative to executing
 * the generated code step function.  Overrun behavior should be tailored to
 * your application needs.  This example simply sets an error status in the
 * real-time model and returns from rt_OneStep.
 */
void rt_OneStep(RT_MODEL_feedback_control_T *const feedback_control_M);
void rt_OneStep(RT_MODEL_feedback_control_T *const feedback_control_M)
{
  static boolean_T OverrunFlag = false;

  /* Disable interrupts here */

  /* Check for overrun */
  if (OverrunFlag) {
    rtmSetErrorStatus(feedback_control_M, "Overrun");
    return;
  }

  OverrunFlag = true;

  /* Save FPU context here (if necessary) */
  /* Re-enable timer or interrupt here */
  /* Set model inputs here */

  /* Step the model */
  feedback_control_step(feedback_control_M, feedback_control_U_ErrorDeg,
                        &feedback_control_Y_CommandV);

  /* Get model outputs here */

  /* Indicate task complete */
  OverrunFlag = false;

  /* Disable interrupts here */
  /* Restore FPU context here (if necessary) */
  /* Enable interrupts here */
}

/*
 * The example "main" function illustrates what is required by your
 * application code to initialize, execute, and terminate the generated code.
 * Attaching rt_OneStep to a real-time clock is target specific.  This example
 * illustrates how you do this relative to initializing the model.
 */
int_T main(int_T argc, const char *argv[])
{
  /* Unused arguments */
  (void)(argc);
  (void)(argv);

  /* Pack model data into RTM */

  /* Initialize model */
  feedback_control_initialize(feedback_control_M, &feedback_control_U_ErrorDeg,
    &feedback_control_Y_CommandV);

  /* Attach rt_OneStep to a timer or interrupt service routine with
   * period 0.001 seconds (the model's base sample time) here.  The
   * call syntax for rt_OneStep is
   *
   *  rt_OneStep(feedback_control_M);
   */
  printf("Warning: The simulation will run forever. "
         "Generated ERT main won't simulate model step behavior. "
         "To change this behavior select the 'MAT-file logging' option.\n");
  fflush((NULL));
  while (rtmGetErrorStatus(feedback_control_M) == (NULL)) {
    /*  Perform other application tasks here */
  }

  /* Disable rt_OneStep() here */

  /* Terminate model */
  feedback_control_terminate(feedback_control_M);
  return 0;
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
