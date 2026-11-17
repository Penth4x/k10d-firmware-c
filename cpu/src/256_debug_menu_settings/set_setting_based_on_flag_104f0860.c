/* @k10d set_setting_based_on_flag_104f0860 @ 0x104f0860
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_based_on_flag_104f0860(int param_1,uint32_t param_2)

{
  uint uVar1;
  
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    setting_set(*(int *)(param_1 + 0xc),0xe,param_2);
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      setting_set(*(int *)(param_1 + 0xc),0x136,param_2);
    }
  }
  return;
}
