/* @k10d FUN_000cd7fe @ 0x000cd7fe
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000cd7fe(void)

{
  uint32_t uVar1;
  
  DAT_0003ce00 = DAT_0003ce00 | 0x40;
  if ((DAT_0003ce01 & 1) != 0) {
    DAT_0003ce01 = DAT_0003ce01 | 8;
  }
  decrement_if_positive();
  uVar1 = 0;
  if (((DAT_0003ce08 & 8) == 0) && ((DAT_0003ce08 & 0x10) == 0)) {
    uVar1 = 1;
  }
  update_ce06_status_flags(uVar1);
  return;
}
