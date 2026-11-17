/* @k10d call_helper_with_fixed_args_104e08b6 @ 0x104e08b6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the object pointer and two fixed integer
 *   arguments.
 * summary:
 *   This function is a thin wrapper that calls dispatch_state_handler, passing the input
 *   pointer as the first argument, 8 as the second, and 0 as the third. It is virtual slot
 *   9 of class cls_105bce58. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_fixed_args_104e08b6(int *param_1)

{
  dispatch_state_handler(param_1,8,0);
  return;
}
