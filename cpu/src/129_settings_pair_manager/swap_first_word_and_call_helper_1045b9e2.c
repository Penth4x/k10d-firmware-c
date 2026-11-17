/* @k10d swap_first_word_and_call_helper_1045b9e2 @ 0x1045b9e2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Saves the first word of param_2, calls a helper on param_2, then stores the saved word
 *   into param_1.
 * summary:
 *   Reads *param_2 into a local, invokes advance_pointer_to_next_1045b9d8 with param_2 as
 *   its sole argument, and writes the saved value to *param_1. The callee's role is
 *   unknown, so the overall operation is a save-call-store sequence on two pointer
 *   arguments. No camera-specific behavior is evident from the pseudocode or callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_first_word_and_call_helper_1045b9e2(uint32_t *param_1, uint32_t *param_2, uint32_t param_x2)

{
  uint32_t uVar1;
  
  uVar1 = *param_2;
  advance_pointer_to_next_1045b9d8(param_2);
  *param_1 = uVar1;
  return;
}
