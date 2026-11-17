/* @k10d FUN_000d5358 @ 0x000d5358
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t FUN_000d5358(void)

{
  uint32_t uVar1;
  
  uVar1 = 2;
  if (((((DAT_0003ce01 & 0x20) == 0) || ((DAT_0003f259 & 1) != 0)) && ((DAT_0003ce06 & 8) == 0)) &&
     ((((DAT_0003cb80 & 4) != 0 && (initialize_state_flags_and_buffers(), (DAT_0003cb80 & 0x40) == 0)) &&
      (((DAT_0003cb80 & 0x80) == 0 && ((DAT_0003cb80 & 2) != 0)))))) {
    uVar1 = FUN_000d539c();
  }
  return uVar1;
}
