/* @k10d call_two_helpers_with_params_10485de0 @ 0x10485de0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 177_module_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions, passing the last three parameters to the second one.
 * summary:
 *   The function first calls store_two_word_pair with no arguments. It then calls
 *   call_single_helper_10485dd8, forwarding param_3, param_4, and param_5. The specific
 *   roles of these callees are unknown, so the function acts as a simple wrapper or
 *   sequence of two operations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_params_10485de0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint16_t param_5)

{
  store_two_word_pair(__frv_reg_unset(4), __frv_reg_unset(5));
  call_single_helper_10485dd8(param_3,param_4,param_5);
  return;
}
