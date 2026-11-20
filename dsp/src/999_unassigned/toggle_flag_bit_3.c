/* @k10d toggle_flag_bit_3 @ 0x000f3d24
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets or clears bit 3 of DAT_0003c4d3 based on the value of DAT_0003c45c, with side
 *   effects on related globals.
 * summary:
 *   If DAT_0003c45c is 1, it sets bit 3 of DAT_0003c4d3, clears bit 3 of DAT_0003c4d0, and
 *   zeroes several other globals (DAT_0003c4a4, DAT_0003c44a, DAT_0003c44c, DAT_0003c44d,
 *   DAT_0003c041). Otherwise, it clears bit 3 of DAT_0003c4d3 and copies DAT_0003c3bb into
 *   DAT_0003c4a4. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_flag_bit_3(void)

{
  if (DAT_0003c45c == '\x01') {
    DAT_0003c4d3 = DAT_0003c4d3 | 8;
    DAT_0003c4a4 = 0;
    DAT_0003c4d0 = DAT_0003c4d0 & 0xdf;
    DAT_0003c44a = 0;
    DAT_0003c44c = 0;
    DAT_0003c44d = 0;
    DAT_0003c041 = 0;
  }
  else {
    DAT_0003c4d3 = DAT_0003c4d3 & 0xf7;
    DAT_0003c4a4 = DAT_0003c3bb;
  }
  return;
}
