/* @k10d compute_two_derived_values_000c3a0e @ 0x000c3a0e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Stores results of two conditional helper calls into adjacent globals.
 * summary:
 *   Calls clamp_value_to_max with DAT_0003c47d and stores the result in DAT_0003c564. Then,
 *   based on bit 1 of DAT_0003c004 and the value of _DAT_0003c57a, it calls either
 *   FUN_000c66b0 (passing the first result) or compute_and_check_range, storing the outcome
 *   in DAT_0003c565. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_two_derived_values_000c3a0e(void)

{
  uint32_t uVar1;
  
  DAT_0003c564 = clamp_value_to_max(DAT_0003c47d);
  if (((DAT_0003c004 & 2) == 0) || (_DAT_0003c57a == 0)) {
    uVar1 = FUN_000c66b0((uint)DAT_0003c564);
    DAT_0003c565 = (char)uVar1;
  }
  else {
    DAT_0003c565 = compute_and_check_range();
  }
  return;
}
