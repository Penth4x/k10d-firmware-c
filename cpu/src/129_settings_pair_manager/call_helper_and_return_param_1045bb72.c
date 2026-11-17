/* @k10d call_helper_and_return_param_1045bb72 @ 0x1045bb72
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Calls an unnamed helper function and returns the input parameter unchanged.
 * summary:
 *   The function invokes advance_pointer_to_next_1045ba52 with no arguments, then returns
 *   param_1 in the return register. The role of the callee is unknown, so the specific
 *   subsystem behavior cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void * call_helper_and_return_param_1045bb72(void *param_1)

{
  advance_pointer_to_next_1045ba52((int *)__frv_reg_unset(4));
  return param_1;
}
