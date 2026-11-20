/* @k10d select_and_dispatch_state_pair @ 0x000c59fc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Selects a pair of values from DAT_0003c4xx globals based on flag bits and passes them
 *   to update_pair_with_mode_offsets.
 * summary:
 *   The function branches on bits in DAT_0003c4de, DAT_0003c4df, and DAT_0003c4d0. In the
 *   primary path, it calls update_pair_with_mode_offsets with either (DAT_0003c47d,
 *   DAT_0003c480) or (DAT_0003c496, DAT_0003c497) depending on bit 5 of DAT_0003c4d0. If
 *   bit 3 of DAT_0003c4df is set, it sets DAT_0003c564 to 0x80 and calls
 *   update_pair_with_mode_offsets with 0x80 as the first argument. If bit 0 of DAT_0003c4de
 *   is set, it sets DAT_0003c564 to 0x74, copies DAT_0003c480 to DAT_0003c565, and masks
 *   bits in DAT_0003c581 and DAT_0003c5a2. The role of the specific data values and the
 *   callee update_pair_with_mode_offsets is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void select_and_dispatch_state_pair(void)

{
  if ((DAT_0003c4de & 1) == 0) {
    if ((DAT_0003c4df & 8) == 0) {
      if ((DAT_0003c4d0 & 0x20) == 0) {
        update_pair_with_mode_offsets(DAT_0003c47d,DAT_0003c480);
      }
      else {
        update_pair_with_mode_offsets(DAT_0003c496,DAT_0003c497);
      }
    }
    else {
      DAT_0003c564 = 0x80;
      if ((DAT_0003c4d0 & 0x20) == 0) {
        update_pair_with_mode_offsets(0x80,DAT_0003c480);
      }
      else {
        update_pair_with_mode_offsets(0x80,DAT_0003c497);
      }
    }
  }
  else {
    DAT_0003c564 = 0x74;
    DAT_0003c565 = DAT_0003c480;
    DAT_0003c581 = DAT_0003c581 & 0xfc;
    DAT_0003c5a2 = DAT_0003c5a2 & 0xfe;
  }
  return;
}
