/* @k10d dispatch_event_by_type_and_code_1040b634 @ 0x1040b634
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 094_settings_menu (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_event_by_type_and_code_1040b634(void *param_1,int *param_2)

{
  uint uVar1;
  uint32_t uVar2;
  
  if (*param_2 == 4) {
    uVar1 = param_2[1];
    uVar2 = _DAT_105bb5f4/*ROM*/;
    if (uVar1 != 7) {
      if (uVar1 < 8) {
        if (((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 3)) {
          return;
        }
      }
      else if ((uVar1 != 10) && (uVar2 = _DAT_105bb5ac/*ROM*/, uVar1 != 0xc)) {
        if (uVar1 != 0x29) {
          return;
        }
        uVar2 = _DAT_105bb5f4/*ROM*/;
        if (DAT_800043a1/*SDRAM*/ != '\0') {
          uVar2 = _DAT_105bb5f8/*ROM*/;
        }
      }
    }
    forward_param_to_global_offset(param_1,uVar2);
  }
  return;
}
