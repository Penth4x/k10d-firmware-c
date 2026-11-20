/* @k10d dispatch_event_by_type_and_code_1036cb20 @ 0x1036cb20
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 020_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_by_type_and_code_1036cb20(cls_10557d80 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  int iVar4;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    if (param_1->field_0x70 != 0) {
      param_1->field_0x248 = param_2[1];
      iVar1 = *(int *)param_1->field_0x70;
      iVar1 = (((vtbl_entry*)(iVar1))[25].fn)((int)param_1->field_0x70 + (int)*(short *)(iVar1 + 200));
      if (iVar1 != 0) {
        iVar4 = *(int *)param_1->field_0x70;
        (((vtbl_entry*)(iVar4))[24].fn)
                  ((int)param_1->field_0x70 + (int)((vtbl_entry*)(iVar4))[24].adj,iVar1 + -1);
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
          if (param_1->field_0x244 != 0) {
            return;
          }
          param_1->field_0x14 = 1;
          param_1->field_0x15 = 1;
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
