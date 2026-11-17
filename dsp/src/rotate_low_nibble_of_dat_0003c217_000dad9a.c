/* @k10d rotate_low_nibble_of_dat_0003c217_000dad9a @ 0x000dad9a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Rotates the low nibble of DAT_0003c217 into the high nibble, shifting the value left by
 *   4 bits.
 * summary:
 *   The function calls wait_for_two_flags_and_clear_bit, captures the low 4 bits of
 *   DAT_0003c217, calls wait_for_two_flags_and_clear_bit again, and then updates
 *   DAT_0003c217 by shifting it left 4 bits and ORing in the saved low nibble. This
 *   performs a 4-bit left rotation on the byte stored at DAT_0003c217. The role of
 *   wait_for_two_flags_and_clear_bit and the specific purpose of DAT_0003c217 are not
 *   determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void rotate_low_nibble_of_dat_0003c217_000dad9a(void)

{
  byte bVar1;
  
  wait_for_two_flags_and_clear_bit();
  bVar1 = DAT_0003c217 & 0xf;
  wait_for_two_flags_and_clear_bit();
  DAT_0003c217 = DAT_0003c217 << 4 | bVar1;
  return;
}
