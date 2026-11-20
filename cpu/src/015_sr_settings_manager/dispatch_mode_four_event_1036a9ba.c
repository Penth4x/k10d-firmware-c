/* @k10d dispatch_mode_four_event_1036a9ba @ 0x1036a9ba
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 015_sr_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates a mode/event pair and forwards a selected constant to a handler when the mode
 *   is 4.
 * summary:
 *   Reads the first two ints from param_2. If the first is 4 and the second passes a small
 *   whitelist (0,1,3,7,10,0x29), it selects a constant from _DAT_105bb5f4 or _DAT_105bb5f8
 *   (the latter chosen when DAT_800043a1 is non-zero and the second value is 0x29) and
 *   calls forward_param_to_global_offset(param_1, constant). Otherwise it returns without
 *   action. The callee forward_param_to_global_offset is unnamed, so the downstream effect
 *   is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_10557ba8 * dispatch_mode_four_event_1036a9ba(cls_10557ba8 *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  cls_10557ba8 *extraout_r4;
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
