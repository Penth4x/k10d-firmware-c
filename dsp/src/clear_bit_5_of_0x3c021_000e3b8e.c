/* @k10d clear_bit_5_of_0x3c021_000e3b8e @ 0x000e3b8e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Calls write_two_bit_field_to_dat_0003c008(0) and clears bit 5 of the global byte at
 *   0x3c021.
 * summary:
 *   The function invokes write_two_bit_field_to_dat_0003c008 with argument 0, then performs
 *   a bitwise AND with 0xf3 on DAT_0003c021, which clears bit 5 (value 0x20) of that byte.
 *   No other side effects or MMIO operations are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_5_of_0x3c021_000e3b8e(void)

{
  write_two_bit_field_to_dat_0003c008(0);
  DAT_0003c021 = DAT_0003c021 & 0xf3;
  return;
}
