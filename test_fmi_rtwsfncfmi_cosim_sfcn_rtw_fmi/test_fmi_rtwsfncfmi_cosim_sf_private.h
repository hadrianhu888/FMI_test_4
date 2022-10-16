/*
 * test_fmi_rtwsfncfmi_cosim_sf_private.h
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

#ifndef RTW_HEADER_test_fmi_rtwsfncfmi_cosim_sf_private_h_
#define RTW_HEADER_test_fmi_rtwsfncfmi_cosim_sf_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "test_fmi_rtwsfncfmi_cosim_sf_types.h"
#if !defined(ss_VALIDATE_MEMORY)
#define ss_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
 ssSetErrorStatus(S, RT_MEMORY_ALLOCATION_ERROR);\
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
#endif                  /* RTW_HEADER_test_fmi_rtwsfncfmi_cosim_sf_private_h_ */
