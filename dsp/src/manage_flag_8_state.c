/* @k10d manage_flag_8_state @ 0x000e3b4e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Toggles bit 3 of DAT_0003c021 based on DAT_0003c008 and a comparison of
 *   DAT_0003c028/29.
 * summary:
 *   The function checks if bit 3 of DAT_0003c021 is set and DAT_0003c029 differs from
 *   DAT_0003c028, clearing bit 3 if so. It then checks if bit 0 of DAT_0003c008 is set and
 *   bit 3 of DAT_0003c021 is clear, calling write_two_bit_field_to_dat_0003c008(0), syncing
 *   DAT_0003c029 to DAT_0003c028, and setting bit 3. Finally, it clears bit 2 of
 *   DAT_0003c021. The specific roles of the DAT globals and the callee are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void manage_flag_8_state(void)

{
  if (((DAT_0003c021 & 8) != 0) && (DAT_0003c029 != DAT_0003c028)) {
    DAT_0003c021 = DAT_0003c021 & 0xf7;
  }
  if (((DAT_0003c008 & 1) != 0) && ((DAT_0003c021 & 8) == 0)) {
    write_two_bit_field_to_dat_0003c008(0);
    DAT_0003c029 = DAT_0003c028;
    DAT_0003c021 = DAT_0003c021 | 8;
  }
  DAT_0003c021 = DAT_0003c021 & 0xfb;
  return;
}
