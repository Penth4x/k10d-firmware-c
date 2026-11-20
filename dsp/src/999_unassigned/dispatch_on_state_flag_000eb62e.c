/* @k10d dispatch_on_state_flag_000eb62e @ 0x000eb62e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a state byte and calls one of two handlers based on a secondary flag, then
 *   updates two status fields.
 * summary:
 *   The function tests DAT_0003c1f4 for the value 3. If true, it branches on DAT_0003f3dc:
 *   calling clear_bit1_of_dat_00000005 if zero, or FUN_000ecbac otherwise. It then copies
 *   DAT_0003f3c1 to _DAT_0003c1fc and sets DAT_0003c1fe to 4. The specific roles of the
 *   callees and data globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_on_state_flag_000eb62e(void)

{
  if (DAT_0003c1f4 == '\x03') {
    if (DAT_0003f3dc == '\0') {
      clear_bit1_of_dat_00000005();
    }
    else {
      FUN_000ecbac();
    }
    _DAT_0003c1fc = (ushort)DAT_0003f3c1;
    DAT_0003c1fe = 4;
  }
  return;
}
