/* @k10d dispatch_mode_change_request_10370416 @ 0x10370416
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 029_menu_setting_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_change_request_10370416(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    *(int *)((int)param_1 + 0x68) = param_2[1];
    return;
  }
  if (iVar1 == 2) {
    return;
  }
  if (iVar1 != 4) {
    if (iVar1 == 5) {
      return;
    }
    if (iVar1 != 6) {
      return;
    }
    *(uint8_t *)((int)param_1 + 0x75) = 1;
    return;
  }
  uVar2 = param_2[1];
  uVar3 = _DAT_105bb5f4/*ROM*/;
  if (uVar2 != 7) {
    if (uVar2 < 8) {
      if (((uVar2 != 0) && (uVar2 != 1)) && (uVar2 != 3)) {
        return;
      }
    }
    else if (uVar2 != 10) {
      if (uVar2 == 0xc) {
        if (*(char *)((int)param_1 + 0xd4) == '\0') {
          return;
        }
        *(uint32_t *)((int)param_1 + 0x6c) = 0xc;
        invoke_callback_at_8000439c();
        return;
      }
      if (uVar2 != 0x29) {
        return;
      }
      if (*(char *)((int)param_1 + 0xd4) != '\0') {
        *(uint32_t *)((int)param_1 + 0x6c) = 0x29;
        return;
      }
      if (DAT_800043a1/*SDRAM*/ != '\0') {
        uVar3 = _DAT_105bb5f8/*ROM*/;
      }
      goto LAB_103704c2;
    }
  }
  if (*(char *)((int)param_1 + 0xd4) != '\0') {
    *(uint *)((int)param_1 + 0x6c) = uVar2;
    return;
  }
LAB_103704c2:
  forward_param_to_global_offset(param_1,uVar3);
  return;
}
