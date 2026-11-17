/* @k10d set_bit2_if_param_is_0x50 @ 0x000d6522
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 2 of DAT_0003c086, calls update_state_flags_and_dispatch, then clears bit 2,
 *   only when param_1 equals 0x50.
 * summary:
 *   The function checks if its single argument is 0x50. If so, it sets bit 2 (value 4) of
 *   the global DAT_0003c086, invokes the unverified callee update_state_flags_and_dispatch,
 *   and then clears bit 2 by masking with 0xfb. The role of DAT_0003c086 and
 *   update_state_flags_and_dispatch is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_bit2_if_param_is_0x50(int param_1)

{
  if (param_1 == 0x50) {
    DAT_0003c086 = DAT_0003c086 | 4;
    update_state_flags_and_dispatch();
    DAT_0003c086 = DAT_0003c086 & 0xfb;
  }
  return;
}
