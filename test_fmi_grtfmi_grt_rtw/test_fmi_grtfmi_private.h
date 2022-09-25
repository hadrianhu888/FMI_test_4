/*
 * test_fmi_grtfmi_private.h
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

#ifndef RTW_HEADER_test_fmi_grtfmi_private_h_
#define RTW_HEADER_test_fmi_grtfmi_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "test_fmi_grtfmi_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 rtmSetErrorStatus(test_fmi_grtfmi_M, RT_MEMORY_ALLOCATION_ERROR);\
 }
#endif

#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((ptr));\
 (ptr) = (NULL);\
 }
#else

/* Visual and other windows compilers declare free without const */
#define rt_FREE(ptr)                   if((ptr) != (NULL)) {\
 free((void *)(ptr));\
 (ptr) = (NULL);\
 }
#endif
#endif
#endif                               /* RTW_HEADER_test_fmi_grtfmi_private_h_ */
