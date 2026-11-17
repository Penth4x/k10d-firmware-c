/* @k10d set_two_flags_by_param @ 0x1051cd10
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes two 16-bit values (0 or 2) to a target object via a helper, based on a boolean
 *   parameter.
 * summary:
 *   The function selects a value (0 or 2) based on whether param_3 is zero. It then calls
 *   write_word_to_dynamic_array twice with param_2 as the first argument, using indices 0
 *   and 1 as the second argument, and the selected value as the third argument. The
 *   specific role of the target object and the helper function is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_two_flags_by_param(uint32_t param_1,void *param_2,int param_3)

{
  uint16_t uVar1;
  uint16_t uVar2;
  
  uVar1 = 0;
  uVar2 = 0;
  if (param_3 == 0) {
    uVar1 = 2;
    uVar2 = 2;
  }
  write_word_to_dynamic_array((int)param_2,0,uVar1);
  write_word_to_dynamic_array((int)param_2,1,uVar2);
  return;
}
