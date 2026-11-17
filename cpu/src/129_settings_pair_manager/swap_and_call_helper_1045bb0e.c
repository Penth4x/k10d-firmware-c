/* @k10d swap_and_call_helper_1045bb0e @ 0x1045bb0e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Reads the first word of param_2, calls a helper on param_2, then stores the saved word
 *   into param_5.
 * summary:
 *   The function dereferences param_2 into a local, invokes
 *   call_helper_and_return_param_1045bafc with param_2 as its sole argument, and writes the
 *   previously saved value to the location pointed to by param_5. Parameters param_1,
 *   param_3, and param_4 are unused. The callee call_helper_and_return_param_1045bafc is
 *   not named, so the specific subsystem role is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_and_call_helper_1045bb0e(uint32_t param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t *param_5)

{
  uint32_t uVar1;
  
  uVar1 = *param_2;
  call_helper_and_return_param_1045bafc(param_2);
  *param_5 = uVar1;
  return;
}
