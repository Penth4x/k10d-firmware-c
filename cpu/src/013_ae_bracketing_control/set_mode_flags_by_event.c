/* @k10d set_mode_flags_by_event @ 0x10369156
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 013_ae_bracketing_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_mode_flags_by_event(void *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint32_t uVar3;
  
  if (*param_2 == 5) {
    iVar1 = param_2[1];
    if (iVar1 == 0x10) {
      *(uint8_t *)((int)param_1 + 0x2b5) = 1;
      *(uint8_t *)((int)param_1 + 0x2b1) = 0;
      *(uint8_t *)((int)param_1 + 0x2b9) = 1;
    }
    else if (iVar1 == 0xf) {
      *(uint8_t *)((int)param_1 + 0x2b6) = 1;
      *(uint8_t *)((int)param_1 + 0x2b2) = 0;
      *(uint8_t *)((int)param_1 + 0x2ba) = 1;
    }
    else if (iVar1 == 0xe) {
      *(uint8_t *)((int)param_1 + 0x2b7) = 1;
      *(uint8_t *)((int)param_1 + 0x2b3) = 0;
      *(uint8_t *)((int)param_1 + 699) = 1;
    }
    else if (iVar1 == 0xd) {
      *(uint8_t *)((int)param_1 + 0x2b8) = 1;
      *(uint8_t *)((int)param_1 + 0x2b4) = 0;
      *(uint8_t *)((int)param_1 + 700) = 1;
    }
    else if (iVar1 == 6) {
      *(uint8_t *)((int)param_1 + 0x2bd) = 0;
      *(uint8_t *)((int)param_1 + 0x2bf) = 1;
    }
    else if (iVar1 == 0x12) {
      *(uint8_t *)((int)param_1 + 0x2be) = 0;
      *(uint8_t *)((int)param_1 + 0x2c0) = 1;
    }
  }
  else if (*param_2 == 4) {
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
