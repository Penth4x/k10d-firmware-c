/* @k10d call_two_helpers_with_params_10485e6c @ 0x10485e6c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing the last four arguments to the second one.
 * summary:
 *   The function first calls store_two_word_pair with no arguments. It then calls
 *   build_and_apply_two_stage_update, forwarding param_3, param_4, param_5, and param_6.
 *   The first argument param_1 is unused. The specific roles of the callees are unknown, so
 *   the function acts as a simple wrapper or sequence of two operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_params_10485e6c(uint32_t param_1,uint32_t param_2,void *param_3,char *param_4,
                 uint16_t param_5,uint16_t param_6)

{
  store_two_word_pair(__frv_reg_unset(4), __frv_reg_unset(5));
  build_and_apply_two_stage_update(param_3,param_4,param_5,param_6);
  return;
}
