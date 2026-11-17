/* @k10d dispatch_mode_four_event_1036dd1a @ 0x1036dd1a
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 023_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Validates a mode/event pair and forwards a selected constant to a handler when the mode
 *   is 4.
 * summary:
 *   Reads the first two ints from param_2. If the first is 4 and the second passes a small
 *   whitelist (0,1,3,7,10,0x29), it selects a constant from _DAT_105bb5f4 or _DAT_105bb5f8
 *   (the latter chosen when DAT_800043a1 is non-zero for the 0x29 case) and calls
 *   forward_param_to_global_offset with param_1 and that constant. Otherwise it returns
 *   without action. The role of the constants and the handler is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_mode_four_event_1036dd1a(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  iVar1 = *param_2;
  if (((iVar1 != 1) && (iVar1 != 2)) && (iVar1 == 4)) {
    uVar2 = param_2[1];
    uVar3 = _DAT_105bb5f4/*ROM*/;
    if (uVar2 != 3) {
      if (uVar2 < 4) {
        if ((uVar2 != 0) && (uVar2 != 1)) {
          return;
        }
      }
      else if ((uVar2 != 7) && (uVar2 != 10)) {
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
