/* @k10d set_setting_by_mode_and_index @ 0x104f0e98
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_by_mode_and_index(int param_1,uint32_t param_2,int param_3)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    if (param_3 == 0xc) {
      uVar2 = 0x2b;
    }
    else if (param_3 == 0xd) {
      uVar2 = 0x2e;
    }
    else if (param_3 == 0xe) {
      uVar2 = 0x31;
    }
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      if (param_3 == 0xc) {
        uVar2 = 0x153;
      }
      else if (param_3 == 0xd) {
        uVar2 = 0x156;
      }
      else if (param_3 == 0xe) {
        uVar2 = 0x159;
      }
    }
  }
  setting_set(*(int *)(param_1 + 0xc),uVar2,param_2);
  return;
}
