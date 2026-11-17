/* @k10d process_state_transition_000f71a6 @ 0x000f71a6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a flag and state value to invoke subroutines and update a linked list of state
 *   values.
 * summary:
 *   The function is gated by bit 6 of DAT_0003c128. If the low 3 bits of _DAT_0003ce22 are
 *   1, it calls FUN_000f7094 and increments _DAT_0003ce22. It always calls
 *   check_and_update_byte_flag if the initial flag is set. It then conditionally shifts
 *   values from _DAT_0003ce24 to _DAT_0003ce30 and _DAT_0003ce30 to _DAT_0003ce36, and
 *   manipulates bits in DAT_0003ce05.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_state_transition_000f71a6(void)

{
  if ((DAT_0003c128 & 0x40) != 0) {
    if ((_DAT_0003ce22 & 7) == 1) {
      FUN_000f7094();
      _DAT_0003ce22 = _DAT_0003ce22 + 1;
    }
    check_and_update_byte_flag();
    if ((((DAT_0003c12e & 0x20) != 0) || ((DAT_0003c12e & 0xc) == 0)) || (200 < _DAT_0003ce22)) {
      _DAT_0003ce36 = _DAT_0003ce30;
      _DAT_0003ce30 = _DAT_0003ce24;
      if ((DAT_0003ce05 & 2) != 0) {
        _DAT_0003ce38 = 0;
      }
      DAT_0003ce05 = DAT_0003ce05 & 0xef | 2;
    }
  }
  return;
}
