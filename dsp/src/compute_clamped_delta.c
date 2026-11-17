/* @k10d compute_clamped_delta @ 0x000cca04
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Computes the difference between two 16-bit globals and clamps the result to a minimum
 *   of 1.
 * summary:
 *   Subtracts the 16-bit value at 0x000000d4 from the 16-bit value at 0x000000e4, storing
 *   the result in 0x0003ce2a. If the result is less than 1, it is forced to 1. No callees
 *   are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_clamped_delta(void)

{
  _DAT_0003ce2a = (short)_DAT_000000e4 - (short)_DAT_000000d4;
  if (_DAT_0003ce2a < 1) {
    _DAT_0003ce2a = 1;
  }
  return;
}
