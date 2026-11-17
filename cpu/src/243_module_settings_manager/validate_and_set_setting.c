/* @k10d validate_and_set_setting @ 0x104d1ae0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 243_module_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_and_set_setting(int param_1,int param_2,uint param_3)

{
  bool bVar2;
  bool bVar3;
  int iVar1;
  
  bVar2 = check_field_at_offset_0x18(param_1);
  if (!bVar2) {
    return 0x82;
  }
  bVar3 = check_object_field_via_helper(*(void **)(param_1 + 8));
  bVar2 = false;
  if (bVar3) {
    settings_refresh_working_copy(*(void **)(param_1 + 8));
  }
  if ((param_2 < 0xb1) || (0xd7 < param_2)) {
    if ((param_2 < 0xd9) || (0xff < param_2)) {
      if (((param_2 < 0x101) || (0x127 < param_2)) ||
         (iVar1 = setting_get(*(int *)(param_1 + 8),0x100), iVar1 == 1)) goto LAB_104d1b7e;
    }
    else {
      iVar1 = setting_get(*(int *)(param_1 + 8),0xd8);
      if (iVar1 == 1) {
        bVar2 = true;
      }
    }
  }
  else {
    iVar1 = setting_get(*(int *)(param_1 + 8),0xb0);
    if (iVar1 == 1) {
      bVar2 = true;
    }
  }
  if (!bVar2) {
    return 0x82;
  }
LAB_104d1b7e:
  setting_set(*(int *)(param_1 + 8),param_2,param_3 & 0xff);
  return 0;
}
