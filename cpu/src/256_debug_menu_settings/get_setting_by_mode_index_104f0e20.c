/* @k10d get_setting_by_mode_index_104f0e20 @ 0x104f0e20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_mode_index_104f0e20(int param_1,int param_2)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    if (param_2 == 0xc) {
      iVar3 = 0x2b;
    }
    else if (param_2 == 0xd) {
      iVar3 = 0x2e;
    }
    else if (param_2 == 0xe) {
      iVar3 = 0x31;
    }
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      if (param_2 == 0xc) {
        iVar3 = 0x153;
      }
      else if (param_2 == 0xd) {
        iVar3 = 0x156;
      }
      else if (param_2 == 0xe) {
        iVar3 = 0x159;
      }
    }
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
