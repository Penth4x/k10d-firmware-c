/* @k10d update_two_counter_deltas @ 0x000e60b2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Computes deltas between two RAM counters and their stored baselines, setting a flag bit
 *   if non-zero.
 * summary:
 *   The function calculates the difference between bRam000000b6 and DAT_0003c04e, and
 *   between DAT_000000b5 and DAT_0003c04f, storing the results divided by 2 into
 *   DAT_0003c043 and DAT_0003c044. If either delta is non-zero, it sets bit 5 (0x20) in
 *   DAT_0003c021. It then conditionally updates the baseline values (DAT_0003c04e and
 *   DAT_0003c04f) based on the LSB of the source counters and specific bits in
 *   DAT_00000003, potentially resetting associated control bytes (DAT_000000b5/b7 and
 *   DAT_000000b9/bb).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_two_counter_deltas(void)

{
  DAT_0003c043 = (char)(bRam000000b6 - DAT_0003c04e) / '\x02';
  DAT_0003c044 = (char)(DAT_000000b5 - DAT_0003c04f) / '\x02';
  if ((DAT_0003c043 != '\0') || (DAT_0003c044 != '\0')) {
    DAT_0003c021 = DAT_0003c021 | 0x20;
  }
  if (DAT_0003c04e != bRam000000b6) {
    if ((bRam000000b6 & 1) == 0) {
      DAT_0003c04e = bRam000000b6;
    }
    else if (((DAT_00000003 & 4) != 0) && ((DAT_00000003 & 8) != 0)) {
      DAT_000000b5 = DAT_000000b5 & 0xf7;
      DAT_000000b7 = DAT_000000b7 & 0x7f | 0x80;
      DAT_0003c043 = '\0';
      DAT_0003c04e = 0;
    }
  }
  if (DAT_0003c04f != DAT_000000b5) {
    if ((DAT_000000b5 & 1) == 0) {
      DAT_0003c04f = DAT_000000b5;
    }
    else if (((DAT_00000003 & 0x20) != 0) && ((DAT_00000003 & 0x40) != 0)) {
      DAT_000000b9 = DAT_000000b9 & 0xf7;
      DAT_000000bb = DAT_000000bb & 0x7f | 0x80;
      DAT_0003c044 = '\0';
      DAT_0003c04f = 0;
    }
  }
  return;
}
