/* @k10d dispatch_on_state_flag_000efbb2 @ 0x000efbb2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a state byte and calls one of two handlers based on a secondary flag, then
 *   updates two status fields.
 * summary:
 *   The function tests DAT_0003c1f4 for the value 3. If true, it branches to
 *   clear_bit1_of_dat_00000005 or FUN_000efc4a depending on whether DAT_0003f3e2 is zero.
 *   It then copies DAT_0003f3c4 to _DAT_0003c1fc and sets DAT_0003c1fe to 4. The specific
 *   roles of the callees and data globals are not provided.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_on_state_flag_000efbb2(void)

{
  if (DAT_0003c1f4 == '\x03') {
    if (DAT_0003f3e2 == '\0') {
      clear_bit1_of_dat_00000005();
    }
    else {
      FUN_000efc4a();
    }
    _DAT_0003c1fc = (ushort)DAT_0003f3c4;
    DAT_0003c1fe = 4;
  }
  return;
}
