/* @k10d handle_event_code_and_subcode @ 0x1036e84c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 025_settings_event_handler (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void handle_event_code_and_subcode(cls_10557f3c *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = *param_2;
  if ((iVar1 != 1) && (iVar1 != 2)) {
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
          if (uVar2 == 0xd) {
            param_1->field_0xc6 = 1;
            return;
          }
          if (uVar2 == 0xe) {
            param_1->field_0xc5 = 1;
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
    else if (iVar1 == 5) {
      if (param_2[1] == 0xe) {
        param_1->field_0xc5 = 0;
      }
      else if (param_2[1] == 0xd) {
        param_1->field_0xc6 = 0;
      }
    }
  }
  return;
}
