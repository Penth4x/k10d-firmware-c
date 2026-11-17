/* @k10d clear_bit3_of_dat_00000005 @ 0x000ed6fc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls FUN_000ed6c8 then clears bit 3 of the global DAT_00000005.
 * summary:
 *   The function invokes the callee FUN_000ed6c8 and then performs a bitwise AND with 0xf7
 *   on DAT_00000005, which clears bit 3 (value 0x08) of that global variable. No other side
 *   effects or MMIO operations are visible in the pseudocode. The role of DAT_00000005 and
 *   FUN_000ed6c8 is not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit3_of_dat_00000005(void)

{
  FUN_000ed6c8();
  DAT_00000005 = DAT_00000005 & 0xf7;
  return;
}
