/* @k10d compute_and_store_offset_value @ 0x000c1ea0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Computes a value from a 16-bit source and stores the result of a helper call into
 *   DAT_0003c574.
 * summary:
 *   Selects a 16-bit value from DAT_0003c565 or compute_signed_offset_value_000c66f6(1)
 *   based on bit 0 of DAT_0003c129. It then calls clamp_value_to_range_000d9ac0 with an
 *   arithmetic expression involving the selected value, DAT_0003c562, and DAT_0003c564, and
 *   stores the result in DAT_0003c574. The specific roles of the data globals and helper
 *   functions are not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_and_store_offset_value(void)

{
  ushort uVar1;
  
  if ((DAT_0003c129 & 1) == 0) {
    uVar1 = (ushort)DAT_0003c565;
  }
  else {
    uVar1 = compute_signed_offset_value_000c66f6(1);
  }
  DAT_0003c574 = clamp_value_to_range_000d9ac0((int)(short)(((uVar1 + 0x40) - _DAT_0003c562) + (ushort)DAT_0003c564),
                              0,0x80);
  return;
}
