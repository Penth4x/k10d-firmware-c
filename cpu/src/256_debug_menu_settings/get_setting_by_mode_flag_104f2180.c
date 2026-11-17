/* @k10d get_setting_by_mode_flag_104f2180 @ 0x104f2180
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_mode_flag_104f2180(int param_1)

{
  int extraout_r4;
  uint uVar1;
  uint32_t uVar2;
  int iVar3;
  
  read_setting_by_mode_flag(param_1);
  iVar3 = 0;
  if (extraout_r4 == 1) {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 == 0) {
      iVar3 = 0x55;
      goto LAB_104f21ca;
    }
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      iVar3 = 0x165;
      goto LAB_104f21ca;
    }
  }
  if (extraout_r4 == 0) {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 == 0) {
      iVar3 = 0x58;
    }
    else {
      uVar1 = check_object_property_43(param_1);
      if (uVar1 != 0) {
        iVar3 = 0x168;
      }
    }
  }
LAB_104f21ca:
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
