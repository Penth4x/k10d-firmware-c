/* @k10d update_state_flags_000ccdc8 @ 0x000ccdc8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Conditionally sets bit 7 of DAT_0003ce04 or updates DAT_0003ce0e based on param_1 and
 *   global state.
 * summary:
 *   The function branches on param_1. If 0, it checks a complex combination of bits in
 *   DAT_0003c128, DAT_0003ce04, DAT_0003c102, DAT_0003ce02, and values in DAT_0003f4a6/7
 *   and _DAT_0003cc6a to set bit 7 of DAT_0003ce04. If param_1 is 3, it updates
 *   DAT_0003ce0e to the value of DAT_0003ce0c if DAT_0003ce0c is non-zero and less than
 *   DAT_0003ce0e. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_flags_000ccdc8(int param_1)

{
  if (param_1 == 0) {
    if (((((DAT_0003c128 & 0x40) == 0) && ((DAT_0003ce04 & 0x80) == 0)) &&
        ((((DAT_0003c102 & 7) == 7 && ((DAT_0003ce02 & 0x10) != 0)) ||
         (((DAT_0003c102 & 7) == 3 && ((DAT_0003ce02 & 0x20) != 0)))))) &&
       (((uint)DAT_0003f4a6 < ((_DAT_0000005a ^ 0xffffffff) & 0xffff) &&
        ((_DAT_0003cc6a < DAT_0003f4a7 && (1 < _DAT_0003cc6a)))))) {
      DAT_0003ce04 = DAT_0003ce04 | 0x80;
    }
  }
  else if (((param_1 == 3) && (_DAT_0003ce0c != 0)) && (_DAT_0003ce0c < _DAT_0003ce0e)) {
    _DAT_0003ce0e = _DAT_0003ce0c;
  }
  return;
}
