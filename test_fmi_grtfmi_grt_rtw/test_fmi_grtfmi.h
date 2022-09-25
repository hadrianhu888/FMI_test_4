/*
 * test_fmi_grtfmi.h
 *
 * Code generation for model "test_fmi_grtfmi".
 *
 * Model version              : 1.8
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Sun Sep 25 16:56:22 2022
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_test_fmi_grtfmi_h_
#define RTW_HEADER_test_fmi_grtfmi_h_
#ifndef test_fmi_grtfmi_COMMON_INCLUDES_
#define test_fmi_grtfmi_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* test_fmi_grtfmi_COMMON_INCLUDES_ */

#include "test_fmi_grtfmi_types.h"
#include "rtw_modelmap.h"
#include <float.h>
#include <stddef.h>
#include "rt_nonfinite.h"
#include "rt_defines.h"
#include <string.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         ((rtm)->DataMapInfo)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)    ((rtm)->DataMapInfo = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetU
#define rtmGetU(rtm)                   ((rtm)->inputs)
#endif

#ifndef rtmSetU
#define rtmSetU(rtm, val)              ((rtm)->inputs = (val))
#endif

#ifndef rtmGetY
#define rtmGetY(rtm)                   ((rtm)->outputs)
#endif

#ifndef rtmSetY
#define rtmSetY(rtm, val)              ((rtm)->outputs = (val))
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

#define test_fmi_grtfmi_M_TYPE         RT_MODEL_test_fmi_grtfmi_T

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In;                           /* '<Root>/In' */
} ExtU_test_fmi_grtfmi_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out;                          /* '<Root>/Out' */
} ExtY_test_fmi_grtfmi_T;

/* Parameters (default storage) */
struct P_test_fmi_grtfmi_T_ {
  real_T IOGain_Gain;                  /* Expression: 1
                                        * Referenced by: '<Root>/IOGain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_test_fmi_grtfmi_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  ExtU_test_fmi_grtfmi_T *inputs;
  ExtY_test_fmi_grtfmi_T *outputs;

  /*
   * DataMapInfo:
   * The following substructure contains information regarding
   * structures generated in the model's C API.
   */
  struct {
    rtwCAPI_ModelMappingInfo mmi;
    void* dataAddress[3];
    int32_T* vardimsAddress[3];
    RTWLoggingFcnPtr loggingPtrs[3];
  } DataMapInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_test_fmi_grtfmi_T test_fmi_grtfmi_P;

/* External data declarations for dependent source files */
extern const char *RT_MEMORY_ALLOCATION_ERROR;
extern P_test_fmi_grtfmi_T test_fmi_grtfmi_P;/* parameters */

/* Model entry point functions */
extern RT_MODEL_test_fmi_grtfmi_T *test_fmi_grtfmi(void);
extern void test_fmi_grtfmi_initialize(RT_MODEL_test_fmi_grtfmi_T *const
  test_fmi_grtfmi_M);
extern void test_fmi_grtfmi_step(RT_MODEL_test_fmi_grtfmi_T *const
  test_fmi_grtfmi_M);
extern void test_fmi_grtfmi_terminate(RT_MODEL_test_fmi_grtfmi_T
  * test_fmi_grtfmi_M);

/* Function to get C API Model Mapping Static Info */
extern const rtwCAPI_ModelMappingStaticInfo*
  test_fmi_grtfmi_GetCAPIStaticMap(void);

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
 * '<Root>' : 'test_fmi_grtfmi'
 */
#endif                                 /* RTW_HEADER_test_fmi_grtfmi_h_ */
