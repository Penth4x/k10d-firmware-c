/* @k10d wait_for_bit0_clear @ 0x000f2856
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls FUN_000f293a until its return value has bit 0 clear.
 * summary:
 *   Calls FUN_000f293a in a loop, re-invoking it while the least significant bit of the
 *   returned value is set. No other side effects are visible in the pseudocode. The role of
 *   FUN_000f293a is unknown, so the specific hardware or state being polled is not
 *   determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_bit0_clear(void)

{
  uint uVar1;
  
  uVar1 = FUN_000f293a();
  while ((uVar1 & 1) != 0) {
    uVar1 = FUN_000f293a();
  }
  return;
}
