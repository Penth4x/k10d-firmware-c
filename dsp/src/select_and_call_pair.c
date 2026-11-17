/* @k10d select_and_call_pair @ 0x000c5ad0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Selects one of two data pairs based on a bit in DAT_0003c4d0 and passes them to
 *   update_pair_with_mode_offsets.
 * summary:
 *   Checks bit 5 (0x20) of the global DAT_0003c4d0. If clear, it calls
 *   update_pair_with_mode_offsets with DAT_0003c47d and DAT_0003c480. If set, it calls
 *   update_pair_with_mode_offsets with DAT_0003c496 and DAT_0003c497. The specific roles of
 *   the data pairs and the callee are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_and_call_pair(void)

{
  if ((DAT_0003c4d0 & 0x20) == 0) {
    update_pair_with_mode_offsets(DAT_0003c47d,DAT_0003c480);
  }
  else {
    update_pair_with_mode_offsets(DAT_0003c496,DAT_0003c497);
  }
  return;
}
