/* @k10d compute_clamped_value @ 0x000c3ee8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calculates a value based on a flag bit, subtracts 8, and clamps it to a maximum limit.
 * summary:
 *   Checks bit 5 of DAT_0003c589. If clear, calls compute_and_write_scaled_value and
 *   subtracts 8 from the result; otherwise uses 0x1c. The result is stored in DAT_0003c570,
 *   then clamped to be no greater than DAT_0003c571. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_clamped_value(void)

{
  uint32_t uVar1;
  
  if ((DAT_0003c589 & 0x20) == 0) {
    uVar1 = compute_and_write_scaled_value();
    DAT_0003c570 = (char)uVar1 - 8;
  }
  else {
    DAT_0003c570 = 0x1c;
  }
  if (DAT_0003c571 < DAT_0003c570) {
    DAT_0003c570 = DAT_0003c571;
  }
  return;
}
