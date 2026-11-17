/* @k10d set_flag_if_state_matches @ 0x000e113c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets bit 3 of DAT_0003c126 if the lower 5 bits of DAT_0003c110 equal 0x48.
 * summary:
 *   The function checks if (DAT_0003c110 & 0xf8) equals 0x48. If true, it sets bit 3 (value
 *   8) in DAT_0003c126. No other side effects or callees are present. The specific meaning
 *   of these globals is not determinable from the code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_state_matches(void)

{
  if ((DAT_0003c110 & 0xf8) == 0x48) {
    DAT_0003c126 = DAT_0003c126 | 8;
  }
  return;
}
