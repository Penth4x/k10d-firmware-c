/* @k10d swap_first_word_and_call @ 0x1045cdc8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 130_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void swap_first_word_and_call(uint32_t *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  uVar1 = *param_2;
  decrement_pointer_value_1045cdc0(param_2);
  *param_1 = uVar1;
  return;
}
