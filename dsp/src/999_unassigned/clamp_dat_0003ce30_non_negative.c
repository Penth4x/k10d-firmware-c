/* @k10d clamp_dat_0003ce30_non_negative @ 0x000d1dd2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Resets the global at 0x0003ce30 to zero if it is negative.
 * summary:
 *   Checks the sign bit of the 32-bit global _DAT_0003ce30 and writes 0 to it when the
 *   value is negative. No other side effects or callees are present. The role of
 *   _DAT_0003ce30 is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_dat_0003ce30_non_negative(void)

{
  if (_DAT_0003ce30 < 0) {
    _DAT_0003ce30 = 0;
  }
  return;
}
