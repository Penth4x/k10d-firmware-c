/* @k10d swap_first_word_and_call_helper_1045cdf2 @ 0x1045cdf2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Saves the first word of param_2, calls a helper on param_2, then stores the saved word
 *   into param_5.
 * summary:
 *   Reads *param_2 into a local, invokes advance_pointer_by_four with param_2 as its
 *   argument, and writes the previously read value to *param_5. param_1, param_3, and
 *   param_4 are unused. The callee's role is unknown, so the overall operation is a save-
 *   call-store sequence on two pointer arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_first_word_and_call_helper_1045cdf2(uint32_t param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t *param_5)

{
  uint32_t uVar1;
  
  uVar1 = *param_2;
  advance_pointer_by_four(param_2);
  *param_5 = uVar1;
  return;
}
