/*
 * feedback_plant_data.c
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "feedback_plant".
 *
 * Model version              : 1.30
 * Simulink Coder version : 8.10 (R2016a) 10-Feb-2016
 * C source code generated on : Tue Jul 18 02:04:25 2017
 *
 * Target selection: NIVeriStand.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86/Pentium
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "feedback_plant.h"
#include "feedback_plant_private.h"

/* Constant parameters (auto storage) */
const ConstP_feedback_plant_T feedback_plant_ConstP = {
  /* Expression: rep_seq_y
   * Referenced by: '<S3>/Look-Up Table1'
   */
  { 0.0, 88.0, 88.0, 0.0, 0.0 },

  /* Expression: rep_seq_t - min(rep_seq_t)
   * Referenced by: '<S3>/Look-Up Table1'
   */
  { 0.0, 0.1, 2.0, 2.1, 4.0 }
};
