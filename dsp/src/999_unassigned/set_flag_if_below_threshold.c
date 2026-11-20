/* @k10d set_flag_if_below_threshold @ 0x000c1336
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 0 of DAT_0003c581 and clamps DAT_0003c5a0 to 0x90 if it is currently below
 *   0x90.
 * summary:
 *   Checks if the signed value in DAT_0003c5a0 is less than 0x90. If true, it sets the
 *   lowest bit of DAT_0003c581 and assigns 0x90 to DAT_0003c5a0. No other side effects or
 *   callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flag_if_below_threshold(void)

{
  if (_DAT_0003c5a0 < 0x90) {
    DAT_0003c581 = DAT_0003c581 | 1;
    _DAT_0003c5a0 = 0x90;
  }
  return;
}
