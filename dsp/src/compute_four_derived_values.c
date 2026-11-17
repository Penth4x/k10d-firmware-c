/* @k10d compute_four_derived_values @ 0x000d2756
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Calls compute_mean_deviation four times on two base pointers and their offset variants,
 *   storing results in four consecutive globals.
 * summary:
 *   Reads two 16-bit values from DAT_0003cc88 and DAT_0003cc8c, and their counterparts
 *   offset by DAT_0003cd4f*2. Passes each to compute_mean_deviation and stores the four
 *   return values into DAT_0003ccc8, DAT_0003ccca, DAT_0003cccc, and DAT_0003ccce. No other
 *   side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_four_derived_values(void)

{
  _DAT_0003ccc8 = compute_mean_deviation((void *)_DAT_0003cc88);
  _DAT_0003ccca = compute_mean_deviation((void *)(_DAT_0003cc88 + (uint)DAT_0003cd4f * 2));
  _DAT_0003cccc = compute_mean_deviation((void *)_DAT_0003cc8c);
  _DAT_0003ccce = compute_mean_deviation((void *)(_DAT_0003cc8c + (uint)DAT_0003cd4f * 2));
  return;
}
