/* @k10d set_setting_based_on_check @ 0x104f0798
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Sets a specific setting value based on the result of a check function, then calls
 *   another function with the object and value.
 * summary:
 *   The function calls check_object_property_43 twice to check a condition. If the first
 *   check returns 0, it calls setting_set with ID 0xd. If the first check is non-zero and
 *   the second check is also non-zero, it calls setting_set with ID 0x135. Finally, it
 *   calls send_message_with_timeout_104b8a3c with a pointer from the object (offset 0x20)
 *   and the input value param_2. The object structure is accessed via param_1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_based_on_check(int param_1,uint32_t param_2)

{
  uint uVar1;
  
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    setting_set(*(int *)(param_1 + 0xc),0xd,param_2);
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      setting_set(*(int *)(param_1 + 0xc),0x135,param_2);
    }
  }
  send_message_with_timeout_104b8a3c(*(uint32_t *)(param_1 + 0x20),param_2);
  return;
}
