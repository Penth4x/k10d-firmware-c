/* @k10d call_two_helpers_with_params_104b464e @ 0x104b464e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a helper at 0x104b0426 with param_2 and passes its result plus param_3 to
 *   FUN_104b3e0e.
 * summary:
 *   The function takes three arguments, calls an unknown function at 0x104b0426 using the
 *   second argument, and then calls FUN_104b3e0e with the third argument and the return
 *   value from the first call. It acts as a simple wrapper or dispatcher between these two
 *   operations. No specific camera subsystem behavior is evident from the limited
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_with_params_104b464e(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  uint32_t uVar1;
  
  uVar1 = (*(code *)0x104b0426/*ROM*/)(param_2);
  FUN_104b3e0e(param_3,uVar1);
  return;
}
