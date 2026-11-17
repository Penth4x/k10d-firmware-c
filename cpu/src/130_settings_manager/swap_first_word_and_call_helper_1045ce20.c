/* @k10d swap_first_word_and_call_helper_1045ce20 @ 0x1045ce20
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Saves the first word of param_2, calls decrement_pointer_value_1045ce16 on param_2,
 *   then stores the saved word into param_5.
 * summary:
 *   The function reads *param_2 into a local, invokes the single callee
 *   decrement_pointer_value_1045ce16 with param_2 as its argument, and writes the
 *   previously saved value into *param_5. Parameters param_1, param_3, and param_4 are
 *   unused. The callee's role is unknown, so the overall operation is a save-call-store
 *   sequence on two memory locations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_first_word_and_call_helper_1045ce20(uint32_t param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t *param_5)

{
  uint32_t uVar1;
  
  uVar1 = *param_2;
  decrement_pointer_value_1045ce16(param_2);
  *param_5 = uVar1;
  return;
}
