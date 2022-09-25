/*
 * test_fmi_grtfmi.c
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

#include "test_fmi_grtfmi.h"
#include "rt_logging_mmi.h"
#include "test_fmi_grtfmi_capi.h"
#include "test_fmi_grtfmi_private.h"
#include "rt_nonfinite.h"

/* Model step function */
void test_fmi_grtfmi_step(RT_MODEL_test_fmi_grtfmi_T *const test_fmi_grtfmi_M)
{
  ExtU_test_fmi_grtfmi_T *test_fmi_grtfmi_U = (ExtU_test_fmi_grtfmi_T *)
    test_fmi_grtfmi_M->inputs;
  ExtY_test_fmi_grtfmi_T *test_fmi_grtfmi_Y = (ExtY_test_fmi_grtfmi_T *)
    test_fmi_grtfmi_M->outputs;

  /* Outport: '<Root>/Out' incorporates:
   *  Gain: '<Root>/IOGain'
   */
  test_fmi_grtfmi_Y->Out = test_fmi_grtfmi_P.IOGain_Gain * test_fmi_grtfmi_U->In;

  /* Matfile logging */
  rt_UpdateTXYLogVars(test_fmi_grtfmi_M->rtwLogInfo,
                      (&test_fmi_grtfmi_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.2s, 0.0s] */
    if ((rtmGetTFinal(test_fmi_grtfmi_M)!=-1) &&
        !((rtmGetTFinal(test_fmi_grtfmi_M)-test_fmi_grtfmi_M->Timing.taskTime0) >
          test_fmi_grtfmi_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(test_fmi_grtfmi_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++test_fmi_grtfmi_M->Timing.clockTick0)) {
    ++test_fmi_grtfmi_M->Timing.clockTickH0;
  }

  test_fmi_grtfmi_M->Timing.taskTime0 = test_fmi_grtfmi_M->Timing.clockTick0 *
    test_fmi_grtfmi_M->Timing.stepSize0 + test_fmi_grtfmi_M->Timing.clockTickH0 *
    test_fmi_grtfmi_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void test_fmi_grtfmi_initialize(RT_MODEL_test_fmi_grtfmi_T *const
  test_fmi_grtfmi_M)
{
  UNUSED_PARAMETER(test_fmi_grtfmi_M);
}

/* Model terminate function */
void test_fmi_grtfmi_terminate(RT_MODEL_test_fmi_grtfmi_T * test_fmi_grtfmi_M)
{
  /* model code */
  rt_FREE(test_fmi_grtfmi_M->inputs);
  rt_FREE(test_fmi_grtfmi_M->outputs);

  {
    void *xptr = (void *) rtliGetLogXSignalPtrs(test_fmi_grtfmi_M->rtwLogInfo);
    void *yptr = (void *) rtliGetLogYSignalPtrs(test_fmi_grtfmi_M->rtwLogInfo);
    rt_FREE(xptr);
    rt_FREE(yptr);
  }

  rt_FREE(test_fmi_grtfmi_M->rtwLogInfo);
  rt_FREE(test_fmi_grtfmi_M);
}

/* Model data allocation function */
RT_MODEL_test_fmi_grtfmi_T *test_fmi_grtfmi(void)
{
  RT_MODEL_test_fmi_grtfmi_T *test_fmi_grtfmi_M;
  test_fmi_grtfmi_M = (RT_MODEL_test_fmi_grtfmi_T *) malloc(sizeof
    (RT_MODEL_test_fmi_grtfmi_T));
  if (test_fmi_grtfmi_M == (NULL)) {
    return (NULL);
  }

  (void) memset((char *)test_fmi_grtfmi_M, 0,
                sizeof(RT_MODEL_test_fmi_grtfmi_T));

  /* Setup for data logging */
  {
    RTWLogInfo *rt_DataLoggingInfo = (RTWLogInfo *) malloc(sizeof(RTWLogInfo));
    rt_VALIDATE_MEMORY(test_fmi_grtfmi_M,rt_DataLoggingInfo);
    rt_DataLoggingInfo->loggingInterval = (NULL);
    test_fmi_grtfmi_M->rtwLogInfo = rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(test_fmi_grtfmi_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(test_fmi_grtfmi_M->rtwLogInfo, (NULL));

    /*
     * Set pointers to the data and signal info for each output
     */
    {
      void **rt_LoggedOutputSignalPtrs = (void **)malloc(1*sizeof(void*));
      rt_VALIDATE_MEMORY(test_fmi_grtfmi_M,rt_LoggedOutputSignalPtrs);
      rtliSetLogYSignalPtrs(test_fmi_grtfmi_M->rtwLogInfo, ((LogSignalPtrsType)
        rt_LoggedOutputSignalPtrs));
    }
  }

  /* external inputs */
  {
    ExtU_test_fmi_grtfmi_T *test_fmi_grtfmi_U = (ExtU_test_fmi_grtfmi_T *)
      malloc(sizeof(ExtU_test_fmi_grtfmi_T));
    rt_VALIDATE_MEMORY(test_fmi_grtfmi_M,test_fmi_grtfmi_U);
    test_fmi_grtfmi_M->inputs = (((ExtU_test_fmi_grtfmi_T *) test_fmi_grtfmi_U));
  }

  /* external outputs */
  {
    ExtY_test_fmi_grtfmi_T *test_fmi_grtfmi_Y = (ExtY_test_fmi_grtfmi_T *)
      malloc(sizeof(ExtY_test_fmi_grtfmi_T));
    rt_VALIDATE_MEMORY(test_fmi_grtfmi_M,test_fmi_grtfmi_Y);
    test_fmi_grtfmi_M->outputs = (test_fmi_grtfmi_Y);
  }

  /* Initialize DataMapInfo substructure containing ModelMap for C API */
  test_fmi_grtfmi_InitializeDataMapInfo(test_fmi_grtfmi_M);

  {
    ExtU_test_fmi_grtfmi_T *test_fmi_grtfmi_U = (ExtU_test_fmi_grtfmi_T *)
      test_fmi_grtfmi_M->inputs;
    ExtY_test_fmi_grtfmi_T *test_fmi_grtfmi_Y = (ExtY_test_fmi_grtfmi_T *)
      test_fmi_grtfmi_M->outputs;

    /* initialize non-finites */
    rt_InitInfAndNaN(sizeof(real_T));
    rtmSetTFinal(test_fmi_grtfmi_M, 10.0);
    test_fmi_grtfmi_M->Timing.stepSize0 = 0.2;

    /* Setup for data logging */
    {
      rtliSetLogT(test_fmi_grtfmi_M->rtwLogInfo, "tout");
      rtliSetLogX(test_fmi_grtfmi_M->rtwLogInfo, "");
      rtliSetLogXFinal(test_fmi_grtfmi_M->rtwLogInfo, "");
      rtliSetLogVarNameModifier(test_fmi_grtfmi_M->rtwLogInfo, "rt_");
      rtliSetLogFormat(test_fmi_grtfmi_M->rtwLogInfo, 0);
      rtliSetLogMaxRows(test_fmi_grtfmi_M->rtwLogInfo, 0);
      rtliSetLogDecimation(test_fmi_grtfmi_M->rtwLogInfo, 1);

      /*
       * Set pointers to the data and signal info for each output
       */
      {
        ((void **) rtliGetLogYSignalPtrs(test_fmi_grtfmi_M->rtwLogInfo))[0] =
          &test_fmi_grtfmi_Y->Out;
      }

      {
        static int_T rt_LoggedOutputWidths[] = {
          1
        };

        static int_T rt_LoggedOutputNumDimensions[] = {
          1
        };

        static int_T rt_LoggedOutputDimensions[] = {
          1
        };

        static boolean_T rt_LoggedOutputIsVarDims[] = {
          0
        };

        static void* rt_LoggedCurrentSignalDimensions[] = {
          (NULL)
        };

        static int_T rt_LoggedCurrentSignalDimensionsSize[] = {
          4
        };

        static BuiltInDTypeId rt_LoggedOutputDataTypeIds[] = {
          SS_DOUBLE
        };

        static int_T rt_LoggedOutputComplexSignals[] = {
          0
        };

        static RTWPreprocessingFcnPtr rt_LoggingPreprocessingFcnPtrs[] = {
          (NULL)
        };

        static const char_T *rt_LoggedOutputLabels[] = {
          "" };

        static const char_T *rt_LoggedOutputBlockNames[] = {
          "test_fmi_grtfmi/Out" };

        static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert[] = {
          { 0, SS_DOUBLE, SS_DOUBLE, 0, 0, 0, 1.0, 0, 0.0 }
        };

        static RTWLogSignalInfo rt_LoggedOutputSignalInfo[] = {
          {
            1,
            rt_LoggedOutputWidths,
            rt_LoggedOutputNumDimensions,
            rt_LoggedOutputDimensions,
            rt_LoggedOutputIsVarDims,
            rt_LoggedCurrentSignalDimensions,
            rt_LoggedCurrentSignalDimensionsSize,
            rt_LoggedOutputDataTypeIds,
            rt_LoggedOutputComplexSignals,
            (NULL),
            rt_LoggingPreprocessingFcnPtrs,

            { rt_LoggedOutputLabels },
            (NULL),
            (NULL),
            (NULL),

            { rt_LoggedOutputBlockNames },

            { (NULL) },
            (NULL),
            rt_RTWLogDataTypeConvert
          }
        };

        rtliSetLogYSignalInfo(test_fmi_grtfmi_M->rtwLogInfo,
                              rt_LoggedOutputSignalInfo);

        /* set currSigDims field */
        rt_LoggedCurrentSignalDimensions[0] = &rt_LoggedOutputWidths[0];
      }

      rtliSetLogY(test_fmi_grtfmi_M->rtwLogInfo, "yout");
    }

    test_fmi_grtfmi_M->Timing.stepSize = (0.2);

    /* external inputs */
    test_fmi_grtfmi_U->In = 0.0;

    /* external outputs */
    test_fmi_grtfmi_Y->Out = 0.0;
  }

  return test_fmi_grtfmi_M;
}
