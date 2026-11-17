/* @k10d FUN_000db604 @ 0x000db604
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000db604(void)

{
  byte bVar1;
  
  if ((DAT_0003c000 & 0x40) == 0) {
    bVar1 = DAT_0003f50a << 4;
  }
  else {
    bVar1 = (DAT_0003f50a & 0xf) << 3;
  }
  if (((DAT_0003ce62 & 2) == 0) || ((DAT_0003f50c & 0xf) == 0)) {
    if (DAT_0003c199 < (DAT_0003f50a & 0xf0)) {
      if ((bVar1 <= DAT_0003c199) && (((DAT_0003f50d & 2) != 0 || ((DAT_0003c198 & 1) == 0)))) {
        DAT_0003c193 = DAT_0003c193 | 0x10;
        DAT_0003c02f = DAT_0003c02f | 2;
      }
    }
    else {
      if ((DAT_0003c198 & 1) == 0) {
        DAT_0003c198 = DAT_0003c198 | 0x10;
      }
      DAT_0003ce62 = DAT_0003ce62 & 0xfd;
      clear_flag_and_reset_state();
    }
  }
  else if ((byte)((DAT_0003f50c & 0xf) * '\x04') <= DAT_0003c199) {
    DAT_0003ce62 = DAT_0003ce62 & 0xfd | 4;
    if (((DAT_0003f50c & 0x40) != 0) && ((DAT_0003c198 & 2) == 0)) {
      DAT_0003c193 = DAT_0003c193 | 0x10;
      DAT_0003c02f = DAT_0003c02f | 2;
    }
    clear_flag_and_reset_state();
  }
  return;
}
