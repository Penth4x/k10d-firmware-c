/* @k10d accumulate_dat_0003cbf0 @ 0x000d3efc
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Adds DAT_0003cc2a to DAT_0003cbf0 after updating DAT_0003cc2a via clamp_signed_value.
 * summary:
 *   The function calls clamp_signed_value with the sum of DAT_0003cc2a and DAT_0003cd7a,
 *   stores the result back into DAT_0003cc2a, then adds that value to DAT_0003cbf0. No
 *   MMIO, no branches, no other side effects are visible. The roles of the three DAT
 *   globals and the callee are unknown, so the behavior is described mechanically only.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_dat_0003cbf0(void)

{
  _DAT_0003cc2a = clamp_signed_value((int)_DAT_0003cc2a + (int)_DAT_0003cd7a);
  _DAT_0003cbf0 = _DAT_0003cbf0 + _DAT_0003cc2a;
  return;
}
