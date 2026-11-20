/* @k10d set_flag_bits_in_dat_0003ce00 @ 0x000ce106
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets bit 4 of DAT_0003ce00 and bit 1 of DAT_0003ce07, conditionally clearing bit 3 of
 *   DAT_0003ce00 first.
 * summary:
 *   The function checks if bit 4 of DAT_0003ce06 is clear. If so, it clears bit 3 of
 *   DAT_0003ce00. It then unconditionally sets bit 4 of DAT_0003ce00 and bit 1 of
 *   DAT_0003ce07. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_bits_in_dat_0003ce00(void)

{
  if ((DAT_0003ce06 & 0x10) == 0) {
    DAT_0003ce00 = DAT_0003ce00 & 0xf7;
  }
  DAT_0003ce00 = DAT_0003ce00 | 0x10;
  DAT_0003ce07 = DAT_0003ce07 | 2;
  return;
}
