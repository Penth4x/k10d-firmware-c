/* @k10d clear_flag_bits_if_condition_met_000f4184 @ 0x000f4184
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Conditionally clears specific bits in two global byte variables and resets two other
 *   globals.
 * summary:
 *   Checks if bit 4 (0x10) is set in DAT_0003c4df. If so, it clears bit 2 (0xdf mask) in
 *   DAT_0003c4d0 and bit 3 (0xe7 mask) in DAT_0003c4d3, while also zeroing DAT_0003c44a and
 *   DAT_0003c041. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_bits_if_condition_met_000f4184(void)

{
  if ((DAT_0003c4df & 0x10) != 0) {
    DAT_0003c44a = 0;
    DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
    DAT_0003c041 = 0;
    DAT_0003c4d3 = DAT_0003c4d3 & 0xe7;
  }
  return;
}
