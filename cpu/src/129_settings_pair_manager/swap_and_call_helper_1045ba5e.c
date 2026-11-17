/* @k10d swap_and_call_helper_1045ba5e @ 0x1045ba5e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Reads the first word of param_2, calls advance_pointer_to_next_1045ba52 on param_2,
 *   then stores the saved word into param_5.
 * summary:
 *   The function captures *param_2 into a local, invokes the single callee
 *   advance_pointer_to_next_1045ba52 with param_2 as its argument, and writes the captured
 *   value to *param_5. param_1, param_3, and param_4 are unused. The callee's role is
 *   unknown, so the overall behavior is a save-call-store pattern on two pointer arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_and_call_helper_1045ba5e(uint32_t param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t *param_5)

{
  uint32_t uVar1;
  
  uVar1 = *param_2;
  advance_pointer_to_next_1045ba52(param_2);
  *param_5 = uVar1;
  return;
}
