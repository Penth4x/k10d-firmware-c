/* @k10d dispatch_event_by_type_and_code_103730b0 @ 0x103730b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_by_type_and_code_103730b0(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    return;
  }
  if (iVar1 == 2) {
    return;
  }
  if (iVar1 == 4) {
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
          invoke_callback_at_8000439c();
          *(uint8_t *)((int)param_1 + 0x14) = 1;
          iVar1 = 0x15;
          goto LAB_1037316a;
        }
        if (uVar2 != 0x29) {
          return;
        }
        if (DAT_800043a1/*SDRAM*/ != '\0') {
          uVar3 = _DAT_105bb5f8/*ROM*/;
        }
      }
    }
    forward_param_to_global_offset(param_1,uVar3);
  }
  else {
    if (iVar1 == 5) {
      if (param_2[1] == 0xe) {
        iVar1 = 0x1d;
      }
      else {
        if (param_2[1] != 0xd) {
          return;
        }
        iVar1 = 0x1e;
      }
    }
    else {
      if (iVar1 != 6) {
        return;
      }
      iVar1 = 0x28;
    }
LAB_1037316a:
    *(uint8_t *)(iVar1 + (int)param_1) = 1;
  }
  return;
}
