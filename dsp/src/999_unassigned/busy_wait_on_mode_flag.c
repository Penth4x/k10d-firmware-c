/* @k10d busy_wait_on_mode_flag @ 0x000d5678
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Performs a busy-wait loop whose iteration count depends on param_1 and the value of
 *   DAT_00000484.
 * summary:
 *   Checks the low two bits of DAT_00000484. If they equal 2, it decrements a counter
 *   derived from param_1-2 down to zero. Otherwise, if param_1 exceeds 0x1f, it decrements
 *   a counter derived from (param_1-0x18)>>3 down to zero. No memory writes or function
 *   calls occur; the function only consumes CPU cycles in a tight loop.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void busy_wait_on_mode_flag(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((DAT_00000484 & 3) == 2) {
    iVar1 = param_1 - 2;
    if (1 < param_1 && iVar1 != 0) {
      do {
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  else if (0x1f < param_1) {
    uVar2 = param_1 - 0x18 >> 3;
    do {
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}
