/* @k10d dispatch_event_by_type_and_code_1036cb20 @ 0x1036cb20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 020_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_by_type_and_code_1036cb20(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  int iVar4;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    if (*(int *)((int)param_1 + 0x70) != 0) {
      *(int *)((int)param_1 + 0x248) = param_2[1];
      iVar1 = **(int **)((int)param_1 + 0x70);
      iVar1 = (**(code **)(iVar1 + 0xcc))
                        ((int)*(int **)((int)param_1 + 0x70) + (int)*(short *)(iVar1 + 200));
      if (iVar1 != 0) {
        iVar4 = **(int **)((int)param_1 + 0x70);
        (**(code **)(iVar4 + 0xc4))
                  ((int)*(int **)((int)param_1 + 0x70) + (int)*(short *)(iVar4 + 0xc0),iVar1 + -1);
      }
    }
  }
  else if ((iVar1 != 2) && (iVar1 == 4)) {
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
          if (*(int *)((int)param_1 + 0x244) != 0) {
            return;
          }
          *(uint8_t *)((int)param_1 + 0x14) = 1;
          *(uint8_t *)((int)param_1 + 0x15) = 1;
          return;
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
  return;
}
