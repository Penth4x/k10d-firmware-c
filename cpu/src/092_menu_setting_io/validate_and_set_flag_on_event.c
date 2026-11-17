/* @k10d validate_and_set_flag_on_event @ 0x1040a290
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t validate_and_set_flag_on_event(int param_1,uint32_t param_2,int *param_3)

{
  int iVar1;
  
  *(uint32_t *)(param_1 + 0x40) = param_2;
  *(int **)(param_1 + 0x44) = param_3;
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 == 0xc0004) goto LAB_1040a348;
  if (iVar1 < 0xc0005) {
    if (iVar1 == 0x1000e) {
      set_flag_from_pointer(param_1,param_3);
      goto LAB_1040a348;
    }
    if (iVar1 != 0xc0001) {
      if ((iVar1 != 0xc0002) && (iVar1 != 0xc0003)) {
        return 0;
      }
      goto LAB_1040a348;
    }
  }
  else {
    if (((iVar1 == 0xc0005) || (iVar1 == 0xc0006)) || (iVar1 == 0xc0007)) goto LAB_1040a348;
    if (iVar1 != 0xc0008) {
      return 0;
    }
  }
  if (((param_3 != (int *)0x0) && (param_3 != (int *)0x1)) &&
     ((param_3 != (int *)0x2 && (param_3 != (int *)0x3)))) {
    return 0;
  }
LAB_1040a348:
  set_flg_obj((uint32_t *)(param_1 + 0x18));
  return 0;
}
