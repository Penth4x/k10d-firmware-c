/* @k10d get_setting_by_mode_flag_104f0946 @ 0x104f0946
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns a setting value selected by the result of a mode/status query on the object.
 * summary:
 *   Calls check_object_property_43(param_1) to obtain a status or mode indicator. If the
 *   result is zero, it reads setting ID 0x10 from the object's sub-block pointer at offset
 *   0xc via setting_get. If the result is non-zero, it re-checks check_object_property_43
 *   and, if still non-zero, reads setting ID 0x138 instead. Returns 0 if the second check
 *   fails or the first check was zero but the logic path doesn't set a value (though the
 *   code structure implies one of the two setting_get calls executes when the first check
 *   is non-zero). The function acts as a conditional selector between two different setting
 *   IDs based on the object's state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_mode_flag_104f0946(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    uVar2 = setting_get(*(int *)(param_1 + 0xc),0x10);
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      uVar2 = setting_get(*(int *)(param_1 + 0xc),0x138);
    }
  }
  return uVar2;
}
