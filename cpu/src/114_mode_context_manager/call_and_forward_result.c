/* @k10d call_and_forward_result @ 0x1043015c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 114_mode_context_manager (unit names are model-proposed)
 * purpose:
 *   Calls app_mode_activate and forwards its return value as the second argument to
 *   set_field_if_zero_1043018c.
 * summary:
 *   This function takes three parameters, calls app_mode_activate (which is noted in the
 *   brief as 'app_mode_activate' but is a tier-3 hypothesis), and passes the result along
 *   with param_1 and param_3 to set_field_if_zero_1043018c. It acts as a simple wrapper or
 *   dispatcher that chains these two calls together. No other side effects or global state
 *   modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_and_forward_result(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = app_mode_activate(__frv_reg_unset(4), __frv_reg_unset(5));
  set_field_if_zero_1043018c(param_1,uVar1,param_3);
  return;
}
