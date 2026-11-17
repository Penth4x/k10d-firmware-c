/* @k10d adjust_and_call_subroutine @ 0x000cdf92
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calculates a signed difference between two globals, adjusts it if negative, and passes
 *   it to a callee.
 * summary:
 *   The function reads two 32-bit globals, _DAT_000000d8 and _DAT_000000e8. It computes a
 *   value based on the upper 16 bits of the first and the second, checking if it is a non-
 *   zero negative value. If so, it adds 32000 to the value, clears the upper byte of the
 *   second global, and calls accumulate_and_flush_counters with the adjusted value. The
 *   specific meaning of the globals and the callee is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void adjust_and_call_subroutine(void)

{
  uint uVar1;
  
  uVar1 = (_DAT_000000d8 & 0xff00) - _DAT_000000e8;
  if ((uVar1 < 0xffffff00) && (uVar1 != 0)) {
    if ((int)uVar1 < 0) {
      uVar1 = uVar1 + 32000;
    }
    _DAT_000000e8 = _DAT_000000e8 & 0xffffff;
    accumulate_and_flush_counters(uVar1);
  }
  return;
}
