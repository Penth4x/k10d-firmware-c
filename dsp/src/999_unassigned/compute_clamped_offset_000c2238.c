/* @k10d compute_clamped_offset_000c2238 @ 0x000c2238
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Computes a clamped offset by subtracting param_1 from a value derived from
 *   map_status_bits_to_code and DAT_0003c568, bounded by a threshold from a lookup table.
 * summary:
 *   Calls map_status_bits_to_code to get a base value. Reads a byte from a table indexed by
 *   DAT_0003c564 to determine a multiplier (uVar2). If the base value is non-zero, it
 *   calculates (base + DAT_0003c568 - param_1) and clamps the result to be at least
 *   2*uVar2, returning the adjusted value or 0 if the condition is not met. The role of
 *   DAT_0003c564, DAT_0003c568, and the table at PTR_caseD_9_000f9b7c is not determinable
 *   from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_clamped_offset_000c2238(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = map_status_bits_to_code();
  if ((int)(-(uint)DAT_0003c564 + 0xa4) < 0x24) {
    uVar2 = (uint)*(byte *)((int)&PTR_caseD_9_000f9b7c + -(uint)DAT_0003c564 + 2);
  }
  else {
    uVar2 = 1;
  }
  if (iVar1 != 0) {
    param_1 = (iVar1 + (uint)DAT_0003c568) - param_1;
    if (param_1 < (int)(uVar2 * 2)) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1 + uVar2 * -2;
    }
  }
  return iVar3;
}
