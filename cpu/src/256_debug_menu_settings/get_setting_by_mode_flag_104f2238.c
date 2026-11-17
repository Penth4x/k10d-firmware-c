/* @k10d get_setting_by_mode_flag_104f2238 @ 0x104f2238
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 256_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t get_setting_by_mode_flag_104f2238(int param_1)

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
      iVar3 = 0x57;
      goto LAB_104f2282;
    }
    uVar1 = check_object_property_43(param_1);
    if (uVar1 != 0) {
      iVar3 = 0x167;
      goto LAB_104f2282;
    }
  }
  if (extraout_r4 == 0) {
    uVar1 = check_object_property_43(param_1);
    if (uVar1 == 0) {
      iVar3 = 0x5a;
    }
    else {
      uVar1 = check_object_property_43(param_1);
      if (uVar1 != 0) {
        iVar3 = 0x16a;
      }
    }
  }
LAB_104f2282:
  uVar2 = setting_get(*(int *)(param_1 + 0xc),iVar3);
  return uVar2;
}
