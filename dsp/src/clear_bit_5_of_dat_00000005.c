/* @k10d clear_bit_5_of_dat_00000005 @ 0x000ed6ee
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls FUN_000ed6c8 then clears bit 5 of the global DAT_00000005.
 * summary:
 *   The function first invokes FUN_000ed6c8, whose role is unknown. It then performs a
 *   bitwise AND of DAT_00000005 with 0xef, which clears bit 5 (value 0x20) while preserving
 *   all other bits. No other side effects or MMIO operations are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_5_of_dat_00000005(void)

{
  FUN_000ed6c8();
  DAT_00000005 = DAT_00000005 & 0xef;
  return;
}
