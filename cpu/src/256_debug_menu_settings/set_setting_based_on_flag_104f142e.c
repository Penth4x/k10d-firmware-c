/* @k10d set_setting_based_on_flag_104f142e @ 0x104f142e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Sets a setting value to 0 or 0x128 based on a flag check, then forwards the value to
 *   another handler.
 * summary:
 *   The function calls check_object_property_43 twice to check a condition. If the
 *   condition is false, it calls setting_set with value 0; if true, it calls setting_set
 *   with value 0x128. In both cases, it uses the integer at offset 0xc of param_1 as the
 *   setting ID. Finally, it calls dispatch_parameterized_request with the pointer at offset
 *   0x20 of param_1 and the original param_2 value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_based_on_flag_104f142e(int param_1,uint32_t param_2)

{
  uint uVar1;
  
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    setting_set(*(int *)(param_1 + 0xc),0,param_2);
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      setting_set(*(int *)(param_1 + 0xc),0x128,param_2);
    }
  }
  dispatch_parameterized_request(*(uint32_t *)(param_1 + 0x20),param_2);
  return;
}
