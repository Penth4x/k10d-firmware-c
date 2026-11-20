/* @k10d select_and_store_value_000c3b8e @ 0x000c3b8e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Selects a source based on a flag bit, processes it, and stores the result in a global
 *   variable.
 * summary:
 *   The function checks bit 5 of DAT_0003c4d0 to choose between DAT_0003c47d and
 *   DAT_0003c496 as an argument to clamp_value_to_max, storing the return value in
 *   DAT_0003c564. It then checks bit 3 of DAT_0003c4d2; if set, it calls
 *   compute_signed_offset_value_000c66f6(0) and update_state_pointer, and clears bit 3 of
 *   DAT_0003c4d2. The specific roles of the callees and data globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_and_store_value_000c3b8e(void)

{
  if ((DAT_0003c4d0 & 0x20) == 0) {
    DAT_0003c564 = clamp_value_to_max(DAT_0003c47d);
  }
  else {
    DAT_0003c564 = clamp_value_to_max(DAT_0003c496);
  }
  if ((DAT_0003c4d2 & 8) != 0) {
    DAT_0003c564 = compute_signed_offset_value_000c66f6(0);
    update_state_pointer();
    DAT_0003c4d2 = DAT_0003c4d2 & 0xf7;
  }
  return;
}
