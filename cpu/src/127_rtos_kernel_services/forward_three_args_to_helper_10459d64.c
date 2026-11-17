/* @k10d forward_three_args_to_helper_10459d64 @ 0x10459d64
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Passes its three arguments to create_or_open_kernel_object with a zero inserted as the
 *   second parameter and returns the result.
 * summary:
 *   A thin one-call wrapper that forwards param_1, param_2, and param_3 to
 *   create_or_open_kernel_object, inserting a constant 0 as the second argument. It returns
 *   the callee's return value unchanged. The callee's role is not yet named, so the
 *   wrapper's higher-level purpose is undetermined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t forward_three_args_to_helper_10459d64(void *param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = create_or_open_kernel_object(param_1,0,param_2,param_3);
  return uVar1;
}
