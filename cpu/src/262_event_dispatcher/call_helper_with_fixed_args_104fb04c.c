/* @k10d call_helper_with_fixed_args_104fb04c @ 0x104fb04c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 262_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Calls event_dispatcher with param_1 and two fixed constants, returning its result.
 * summary:
 *   Thin wrapper that forwards its single pointer argument to event_dispatcher along with
 *   the constants -0x7fffffe5 and 1. The return value of the callee is passed back to the
 *   caller. No other side effects are visible in this function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_helper_with_fixed_args_104fb04c(void *param_1)

{
  uint32_t uVar1;
  
  uVar1 = event_dispatcher(param_1,-0x7fffffe5,1);
  return uVar1;
}
