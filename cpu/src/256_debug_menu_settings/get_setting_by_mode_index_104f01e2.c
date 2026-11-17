/* @k10d get_setting_by_mode_index_104f01e2 @ 0x104f01e2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_mode_index_104f01e2(int param_1,int param_2)

{
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = check_object_property_43(param_1);
  if (uVar1 == 0) {
    if (param_2 == 0) {
      iVar3 = 6;
    }
    else if (param_2 == 1) {
      iVar3 = 0xc;
    }
    else if (param_2 == 2) {
      iVar3 = 9;
    }
  }
  else {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      if (param_2 == 0) {
        iVar3 = 0x12e;
      }
      else if (param_2 == 1) {
        iVar3 = 0x134;
      }
      else if (param_2 == 2) {
        iVar3 = 0x131;
      }
    }
  }
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
