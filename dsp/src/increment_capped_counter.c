/* @k10d increment_capped_counter @ 0x000ddbee
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Increments a 16-bit counter, caps it at 0xffff, and sets a flag if it exceeds a
 *   threshold.
 * summary:
 *   The function checks if bit 5 of DAT_0003c804 is clear. If so, it adds the value at
 *   _DAT_0003c884 to _DAT_0003c88e, clamping the result to 0xffff. It then sets bit 5 of
 *   DAT_0003c804 if the new counter value is greater than the value at _DAT_0003f3b6.
 *   Finally, it clears _DAT_0003c806. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void increment_capped_counter(void)

{
  uint uVar1;
  
  if ((DAT_0003c804 & 0x20) == 0) {
    uVar1 = (uint)_DAT_0003c88e + (uint)_DAT_0003c884;
    if (0xffff < uVar1) {
      uVar1 = 0xffff;
    }
    _DAT_0003c88e = (ushort)uVar1;
    if ((uint)_DAT_0003f3b6 < (uVar1 & 0xffff)) {
      DAT_0003c804 = DAT_0003c804 | 0x20;
    }
    _DAT_0003c806 = 0;
  }
  return;
}
