/* @k10d check_value_in_range_9_to_11 @ 0x104f0842
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns 1 if the result of get_setting_by_mode_flag_104f07f4 is 9, 10, or 11, otherwise
 *   0.
 * summary:
 *   Calls get_setting_by_mode_flag_104f07f4 with param_1 and tests if the returned integer
 *   is in the inclusive range [9, 0xb]. Returns a boolean-like value (1 or 0). The specific
 *   meaning of the values 9-11 is not determinable from this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_value_in_range_9_to_11(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  iVar1 = get_setting_by_mode_flag_104f07f4(param_1);
  if (((iVar1 == 9) || (iVar1 == 10)) || (iVar1 == 0xb)) {
    uVar2 = 1;
  }
  return uVar2;
}
