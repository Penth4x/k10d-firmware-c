/* @k10d clear_bit2_of_dat_00000005 @ 0x000ed698
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls FUN_000ed66c then clears bit 2 of the global DAT_00000005.
 * summary:
 *   The function first invokes the callee FUN_000ed66c, whose role is unknown. It then
 *   performs a bitwise AND of the global DAT_00000005 with 0xf7, which clears bit 2 (value
 *   0x04) of that global. No other side effects or MMIO accesses are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit2_of_dat_00000005(void)

{
  FUN_000ed66c();
  DAT_00000005 = DAT_00000005 & 0xf7;
  return;
}
