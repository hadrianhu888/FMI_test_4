/*
 * test_fmi_rtwsfncfmi_cosim_sf.h
 *
 * Code generation for model "test_fmi_rtwsfncfmi_cosim_sf".
 *
 * Model version              : 1.10
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Sun Oct 16 18:26:28 2022
 *
 * Target selection: rtwsfcnfmi.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_test_fmi_rtwsfncfmi_cosim_sf_h_
#define RTW_HEADER_test_fmi_rtwsfncfmi_cosim_sf_h_
#ifndef test_fmi_rtwsfncfmi_cosim_sf_COMMON_INCLUDES_
#define test_fmi_rtwsfncfmi_cosim_sf_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME                test_fmi_rtwsfncfmi_cosim_sf
#define S_FUNCTION_LEVEL               2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif

#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#if !defined(MATLAB_MEX_FILE)
#include "rt_matrx.h"
#endif

#if !defined(RTW_SFUNCTION_DEFINES)
#define RTW_SFUNCTION_DEFINES

typedef struct {
  void *blockIO;
  void *defaultParam;
  void *nonContDerivSig;
} LocalS;

#define ssSetLocalBlockIO(S, io)       ((LocalS *)ssGetUserData(S))->blockIO = ((void *)(io))
#define ssGetLocalBlockIO(S)           ((LocalS *)ssGetUserData(S))->blockIO
#define ssSetLocalDefaultParam(S, paramVector) ((LocalS *)ssGetUserData(S))->defaultParam = (paramVector)
#define ssGetLocalDefaultParam(S)      ((LocalS *)ssGetUserData(S))->defaultParam
#define ssSetLocalNonContDerivSig(S, pSig) ((LocalS *)ssGetUserData(S))->nonContDerivSig = (pSig)
#define ssGetLocalNonContDerivSig(S)   ((LocalS *)ssGetUserData(S))->nonContDerivSig
#endif
#endif                       /* test_fmi_rtwsfncfmi_cosim_sf_COMMON_INCLUDES_ */

#include "test_fmi_rtwsfncfmi_cosim_sf_types.h"
#include <string.h>
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <stddef.h>
#include "rt_defines.h"

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T *In;                          /* '<Root>/In' */
} ExternalUPtrs_test_fmi_rtwsfncfmi_cosim_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T *Out;                         /* '<Root>/Out' */
} ExtY_test_fmi_rtwsfncfmi_cosim_T;

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
 * '<Root>' : 'test_fmi_rtwsfncfmi_cosim_sf'
 */
#endif                          /* RTW_HEADER_test_fmi_rtwsfncfmi_cosim_sf_h_ */
