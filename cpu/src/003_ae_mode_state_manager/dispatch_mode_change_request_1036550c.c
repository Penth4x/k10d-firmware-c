/* @k10d dispatch_mode_change_request_1036550c @ 0x1036550c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_change_request_1036550c(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    *(int *)((int)param_1 + 0x68) = param_2[1];
    if (*(int *)((int)param_1 + 0x14) != 0) {
      return;
    }
    if (*(char *)((int)param_1 + 0x80) == '\0') {
      return;
    }
    uVar3 = 0;
LAB_10365562:
    dispatch_event_to_object_slot((int)param_1 + 0x18,param_2[1],uVar3);
    return;
  }
  if (iVar1 == 2) {
    if (*(int *)((int)param_1 + 0x14) != 0) {
      return;
    }
    if (*(char *)((int)param_1 + 0x80) == '\0') {
      return;
    }
    uVar3 = 1;
    goto LAB_10365562;
  }
  if (iVar1 != 4) {
    if (iVar1 == 5) {
      return;
    }
    if (iVar1 != 6) {
      return;
    }
    *(uint8_t *)((int)param_1 + 0x81) = 1;
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
        if (*(char *)((int)param_1 + 0xe0) == '\0') {
          return;
        }
        *(uint32_t *)((int)param_1 + 0x6c) = 0xc;
        invoke_callback_at_8000439c();
        return;
      }
      if (uVar2 != 0x29) {
        return;
      }
      if (*(char *)((int)param_1 + 0xe0) != '\0') {
        *(uint32_t *)((int)param_1 + 0x6c) = 0x29;
        return;
      }
      if (DAT_800043a1/*SDRAM*/ != '\0') {
        uVar3 = _DAT_105bb5f8/*ROM*/;
      }
      goto LAB_103655f8;
    }
  }
  if (*(char *)((int)param_1 + 0xe0) != '\0') {
    *(uint *)((int)param_1 + 0x6c) = uVar2;
    return;
  }
LAB_103655f8:
  forward_param_to_global_offset(param_1,uVar3);
  return;
}
