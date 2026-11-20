/* @k10d adjust_counter_by_flag @ 0x000ce27a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Decrements a global counter by 4 times the low nibble of a flag byte, clamping at zero.
 * summary:
 *   Reads a flag byte from DAT_0003c118 or DAT_0003f404 based on bits in DAT_0003c127.
 *   Subtracts 4 times the low 4 bits of the selected byte from the global counter at
 *   DAT_0003cc30. Clamps the result to zero if it goes negative. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_counter_by_flag(void)

{
  byte bVar1;
  
  if ((((DAT_0003c127 & 0x10) != 0) || ((DAT_0003c127 & 0x40) != 0)) ||
     (bVar1 = DAT_0003f404, (DAT_0003c127 & 0x80) != 0)) {
    bVar1 = DAT_0003c118;
  }
  _DAT_0003cc30 = _DAT_0003cc30 + (bVar1 & 0xf) * -4;
  if (_DAT_0003cc30 < 0) {
    _DAT_0003cc30 = 0;
  }
  return;
}
