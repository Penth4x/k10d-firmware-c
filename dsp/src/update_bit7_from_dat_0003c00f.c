/* @k10d update_bit7_from_dat_0003c00f @ 0x000e3a68
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Conditionally sets bit 7 of DAT_00000006 based on bit 6 of DAT_0003c00f if bit 3 of
 *   DAT_0003c038 is clear.
 * summary:
 *   The function checks if bit 3 (value 8) of DAT_0003c038 is zero. If so, it clears bit 7
 *   of DAT_00000006 and sets it if bit 6 (value 0x40) of DAT_0003c00f is set. No other side
 *   effects or callees are present. The roles of the DAT globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_bit7_from_dat_0003c00f(void)

{
  if ((DAT_0003c038 & 8) == 0) {
    DAT_00000006 = DAT_00000006 & 0x7f | ((DAT_0003c00f & 0x40) != 0) << 7;
  }
  return;
}
