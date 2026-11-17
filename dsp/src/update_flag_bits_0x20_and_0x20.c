/* @k10d update_flag_bits_0x20_and_0x20 @ 0x000c1fda
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears bit 5 of DAT_0003c581 and conditionally sets it based on DAT_0003c129 and
 *   DAT_0003c579.
 * summary:
 *   The function first clears bit 5 (0x20) of the global variable DAT_0003c581. It then
 *   checks if bit 0 of DAT_0003c129 is set, or if bit 0 is clear and DAT_0003c579 is less
 *   than 0xf. If either condition is true, it sets bit 5 of DAT_0003c581. No other side
 *   effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_bits_0x20_and_0x20(void)

{
  DAT_0003c581 = DAT_0003c581 & 0xdf;
  if (((DAT_0003c129 & 1) != 0) || (((DAT_0003c129 & 1) == 0 && (DAT_0003c579 < 0xf)))) {
    DAT_0003c581 = DAT_0003c581 | 0x20;
  }
  return;
}
