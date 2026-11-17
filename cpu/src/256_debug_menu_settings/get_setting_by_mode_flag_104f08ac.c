/* @k10d get_setting_by_mode_flag_104f08ac @ 0x104f08ac
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Returns a setting value selected based on the result of check_object_property_43 and a
 *   sub-object pointer.
 * summary:
 *   Calls check_object_property_43 with param_1. If the result is 0, it retrieves setting
 *   0xe from the object at *(param_1 + 0xc). If the result is non-zero, it calls
 *   check_object_property_43 again; if still non-zero, it retrieves setting 0x136 from the
 *   same sub-object. Returns 0 if neither condition is met. The specific meaning of
 *   settings 0xe and 0x136 is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_mode_flag_104f08ac(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    uVar2 = setting_get(*(int *)(param_1 + 0xc),0xe);
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      uVar2 = setting_get(*(int *)(param_1 + 0xc),0x136);
    }
  }
  return uVar2;
}
