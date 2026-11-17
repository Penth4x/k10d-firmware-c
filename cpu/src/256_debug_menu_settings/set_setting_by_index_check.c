/* @k10d set_setting_by_index_check @ 0x104f08fa
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Checks a condition via check_object_property_43 and writes param_2 to a setting index
 *   derived from param_1+0xc.
 * summary:
 *   Calls check_object_property_43(param_1) to test a condition. If the result is zero, it
 *   calls setting_set with index *(param_1+0xc) and value 0x10. If non-zero, it re-checks
 *   the condition and, if still non-zero, calls setting_set with the same index and value
 *   0x138. The function acts as a conditional setter for a specific configuration
 *   parameter.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_by_index_check(int param_1,uint32_t param_2)

{
  uint uVar1;
  
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    setting_set(*(int *)(param_1 + 0xc),0x10,param_2);
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      setting_set(*(int *)(param_1 + 0xc),0x138,param_2);
    }
  }
  return;
}
