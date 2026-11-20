/* @k10d update_state_flags_and_counters_000f3cc6 @ 0x000f3cc6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Clears a flag, conditionally calls a helper, and sets two derived byte values based on
 *   a state variable.
 * summary:
 *   The function first clears DAT_0003c041. If DAT_0003c44d is 1, it calls
 *   update_state_flags_000f37ec; otherwise, it clears bit 5 of DAT_0003c4d0 and sets
 *   DAT_0003c44a to 0. It then copies DAT_0003c44a to DAT_0003c44c and sets DAT_0003c455 to
 *   5, 3, or 0 depending on whether DAT_0003c44a is 2, 1, or neither, finally copying that
 *   value to DAT_0003c457. The specific roles of these DAT globals are not determinable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_flags_and_counters_000f3cc6(void)

{
  DAT_0003c041 = 0;
  if (DAT_0003c44d == '\x01') {
    update_state_flags_000f37ec();
  }
  else {
    DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
    DAT_0003c44a = '\0';
  }
  DAT_0003c44c = DAT_0003c44a;
  if (DAT_0003c44a == '\x02') {
    DAT_0003c455 = 5;
  }
  else if (DAT_0003c44a == '\x01') {
    DAT_0003c455 = 3;
  }
  else {
    DAT_0003c455 = 0;
  }
  DAT_0003c457 = DAT_0003c455;
  return;
}
