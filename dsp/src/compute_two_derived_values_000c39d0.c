/* @k10d compute_two_derived_values_000c39d0 @ 0x000c39d0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Stores two computed values into adjacent globals based on a flag and a pointer check.
 * summary:
 *   Calls clamp_value_to_max with DAT_0003c47d and stores the result in DAT_0003c564. Then,
 *   if bit 1 of DAT_0003c004 is clear or DAT_0003c57a is zero, it calls FUN_000c66b0 with
 *   the first result; otherwise, it calls compute_and_check_range. The second result is
 *   stored in DAT_0003c565. No specific subsystem or hardware role is evident from the
 *   code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_two_derived_values_000c39d0(void)

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
