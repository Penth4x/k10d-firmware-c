/* @k10d rotate_low_nibble_of_dat_0003c217_000dadbc @ 0x000dadbc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Rotates the low nibble of DAT_0003c217 into the high nibble after calling two helper
 *   functions.
 * summary:
 *   Calls wait_for_two_flags_and_clear_bit, then captures the low 4 bits of DAT_0003c217.
 *   It calls toggle_bit_18_in_dat_00000061, then left-shifts DAT_0003c217 by 4 and ORs in
 *   the saved low nibble, effectively rotating the byte's nibbles. No other side effects
 *   are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void rotate_low_nibble_of_dat_0003c217_000dadbc(void)

{
  byte bVar1;
  
  wait_for_two_flags_and_clear_bit();
  bVar1 = DAT_0003c217 & 0xf;
  toggle_bit_18_in_dat_00000061();
  DAT_0003c217 = DAT_0003c217 << 4 | bVar1;
  return;
}
