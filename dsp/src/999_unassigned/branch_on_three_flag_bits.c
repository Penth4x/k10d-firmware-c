/* @k10d branch_on_three_flag_bits @ 0x000c5a74
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Reads three flag bytes and either calls a helper with a selected parameter or
 *   writes/masks three other flag bytes.
 * summary:
 *   Checks bit 0 of DAT_0003c4de, bit 3 of DAT_0003c4df, and bit 5 of DAT_0003c4d0. If the
 *   first two are clear, it calls store_value_and_clear_flag with either DAT_0003c47d or
 *   DAT_0003c496 depending on bit 5 of DAT_0003c4d0. Otherwise, it writes 0x80 or 0x74 to
 *   DAT_0003c564 and masks bits in DAT_0003c581 and DAT_0003c5a2. The role of the DAT
 *   globals is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void branch_on_three_flag_bits(void)

{
  if ((DAT_0003c4de & 1) == 0) {
    if ((DAT_0003c4df & 8) == 0) {
      if ((DAT_0003c4d0 & 0x20) == 0) {
        store_value_and_clear_flag(DAT_0003c47d);
      }
      else {
        store_value_and_clear_flag(DAT_0003c496);
      }
    }
    else {
      DAT_0003c564 = 0x80;
      DAT_0003c581 = DAT_0003c581 & 0xfc;
      DAT_0003c5a2 = DAT_0003c5a2 & 0xfe;
    }
  }
  else {
    DAT_0003c564 = 0x74;
    DAT_0003c581 = DAT_0003c581 & 0xfc;
    DAT_0003c5a2 = DAT_0003c5a2 & 0xfe;
  }
  return;
}
