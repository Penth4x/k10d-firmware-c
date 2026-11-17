/* @k10d update_setting_based_on_check @ 0x104f14cc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Conditionally sets a setting value based on the result of a check function, then passes
 *   a related setting to a helper.
 * summary:
 *   Calls check_object_property_43 to check a condition. If the check returns 0, it sets
 *   the setting at offset 0xc to 1; otherwise, if the check returns non-zero again, it sets
 *   it to 0x129. It then reads setting 0xc1 and calls process_event_with_timeout with the
 *   value at offset 0x20, param_2, and the read setting.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_setting_based_on_check(int param_1,uint32_t param_2)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    setting_set(*(int *)(param_1 + 0xc),1,param_2);
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      setting_set(*(int *)(param_1 + 0xc),0x129,param_2);
    }
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),0xc1);
  process_event_with_timeout(*(uint32_t *)(param_1 + 0x20),param_2,uVar2);
  return;
}
