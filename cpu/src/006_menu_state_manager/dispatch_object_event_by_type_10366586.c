/* @k10d dispatch_object_event_by_type_10366586 @ 0x10366586
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_object_event_by_type_10366586(cls_105577f8 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = *param_2;
  if (iVar1 == 1) {
    param_1->field_0x50 = param_2[1];
  }
  else if (iVar1 != 2) {
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
            if (param_1->field_0x1c != 0) {
              return;
            }
            invoke_callback_at_8000439c();
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
    else if ((iVar1 != 5) && (iVar1 == 6)) {
      param_1->field_0x494 = 1;
    }
  }
  return;
}
