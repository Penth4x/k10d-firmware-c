/* @k10d branch_on_flag_bit0 @ 0x000c3792
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Checks bit 0 of DAT_0003c4de and either calls update_pair_from_flagged_source or writes
 *   two bytes to DAT_0003c564/565.
 * summary:
 *   Reads the low bit of DAT_0003c4de. If clear, invokes update_pair_from_flagged_source.
 *   If set, stores 0x74 into DAT_0003c564 and copies DAT_0003c480 into DAT_0003c565. No
 *   other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void branch_on_flag_bit0(void)

{
  if ((DAT_0003c4de & 1) == 0) {
    update_pair_from_flagged_source();
  }
  else {
    DAT_0003c564 = 0x74;
    DAT_0003c565 = DAT_0003c480;
  }
  return;
}
