/* @k10d call_helper_with_two_args_1051a82c @ 0x1051a82c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Forwards param_2 to write_to_dynamic_array with two zero arguments and returns.
 * summary:
 *   A one-line wrapper that calls write_to_dynamic_array(param_2, 0, 0). The role of
 *   write_to_dynamic_array is unknown, so the subsystem cannot be determined. No side
 *   effects beyond the callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_two_args_1051a82c(uint32_t param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,0);
  return;
}
