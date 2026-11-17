/* @k10d shift_and_call_two_routines @ 0x000dad7a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies a byte to DAT_0003c217, calls wait_for_two_flags_and_clear_bit, then stores the
 *   upper nibble of DAT_0003c216 and calls toggle_bit_18_in_dat_00000061.
 * summary:
 *   The function performs two simple assignments to DAT_0003c217 based on DAT_0003c216,
 *   interleaved with calls to two unknown routines. First it copies DAT_0003c216 to
 *   DAT_0003c217 and calls wait_for_two_flags_and_clear_bit. Then it stores the upper 4
 *   bits of DAT_0003c216 into DAT_0003c217 and calls toggle_bit_18_in_dat_00000061. No
 *   MMIO, kernel, or camera-specific operations are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void shift_and_call_two_routines(void)

{
  DAT_0003c217 = DAT_0003c216;
  wait_for_two_flags_and_clear_bit();
  DAT_0003c217 = (byte)((int)(uint)DAT_0003c216 >> 4);
  toggle_bit_18_in_dat_00000061();
  return;
}
