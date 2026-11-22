/* @k10d forward_params_with_helper_result @ 0x10430174
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper to get a value and forwards it with the first and third arguments to
 *   another function.
 * summary:
 *   The function takes three parameters. It calls get_or_init_cached_value to obtain a
 *   value, then passes param_1, the result from get_or_init_cached_value, and param_3 to
 *   set_field_if_zero_1043018c. It does not return a value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_params_with_helper_result(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = get_or_init_cached_value((int)(param_1)/* B-3: stock r4 = param_1 */, __frv_reg_unset(5));
  set_field_if_zero_1043018c(param_1,uVar1,param_3);
  return;
}
