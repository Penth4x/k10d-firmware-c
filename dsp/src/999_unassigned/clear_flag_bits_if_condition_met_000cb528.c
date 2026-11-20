/* @k10d clear_flag_bits_if_condition_met_000cb528 @ 0x000cb528
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears specific bits in two global variables if a combined condition is true.
 * summary:
 *   Checks if bit 0 of DAT_0003c491 or bit 3 of DAT_0003c4d6 is set, and bit 2 of
 *   DAT_0003c000 is clear. If true, it clears bit 0 of DAT_0003c491 and bit 3 of
 *   DAT_0003c4d6. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_bits_if_condition_met_000cb528(void)

{
  if ((((DAT_0003c491 & 1) != 0) || ((DAT_0003c4d6 & 8) != 0)) && ((DAT_0003c000 & 4) == 0)) {
    DAT_0003c491 = 0;
    DAT_0003c4d6 = DAT_0003c4d6 & 0xf7;
  }
  return;
}
