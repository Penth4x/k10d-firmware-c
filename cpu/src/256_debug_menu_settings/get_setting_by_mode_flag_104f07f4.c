/* @k10d get_setting_by_mode_flag_104f07f4 @ 0x104f07f4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns a setting value selected by a mode flag from check_object_property_43.
 * summary:
 *   Calls check_object_property_43(param_1) to obtain a flag. If the flag is zero, it reads
 *   setting ID 0xd from the object at *(param_1+0xc) via setting_get. If the flag is non-
 *   zero, it re-checks the flag and, if still non-zero, reads setting ID 0x135 instead.
 *   Returns 0 if the second check fails. The specific meaning of the flag and the two
 *   setting IDs is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_mode_flag_104f07f4(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    uVar2 = setting_get(*(int *)(param_1 + 0xc),0xd);
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      uVar2 = setting_get(*(int *)(param_1 + 0xc),0x135);
    }
  }
  return uVar2;
}
