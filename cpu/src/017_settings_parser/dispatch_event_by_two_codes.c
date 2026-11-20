/* @k10d dispatch_event_by_two_codes @ 0x1036b0a0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 017_settings_parser (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_10557c18 * dispatch_event_by_two_codes(cls_10557c18 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  cls_10557c18 *extraout_r4;
  uint32_t uVar3;
  
  iVar1 = *param_2;
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 == 4)) {
    uVar2 = param_2[1];
    uVar3 = _DAT_105bb5f4/*ROM*/;
    if (uVar2 != 3) {
      if (uVar2 < 4) {
        if ((uVar2 != 0) && (uVar2 != 1)) {
          return param_1;
        }
      }
      else if ((uVar2 != 7) && (uVar2 != 10)) {
        if (uVar2 != 0x29) {
          return param_1;
        }
        if (DAT_800043a1/*SDRAM*/ != '\0') {
          uVar3 = _DAT_105bb5f8/*ROM*/;
        }
      }
    }
    forward_param_to_global_offset(param_1,uVar3);
    param_1 = extraout_r4;
  }
  return param_1;
}
