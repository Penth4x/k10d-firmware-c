/* @k10d clear_bit1_of_dat_00000005 @ 0x000ed6a6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls FUN_000ed66c then clears bit 1 of the global DAT_00000005.
 * summary:
 *   The function invokes the single callee FUN_000ed66c, then performs a bitwise AND of
 *   DAT_00000005 with 0xef, which clears bit 1 (value 0x02) while leaving all other bits
 *   unchanged. No other side effects or MMIO accesses are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit1_of_dat_00000005(void)

{
  FUN_000ed66c();
  DAT_00000005 = DAT_00000005 & 0xef;
  return;
}
