/* @k10d toggle_bit0_from_bit1 @ 0x000dd9ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets or clears bit 0 of DAT_0003c804 based on the inverted value of bit 1 of
 *   DAT_0003c07e.
 * summary:
 *   Reads bit 1 of the global DAT_0003c07e. If that bit is 0, it clears bit 0 of
 *   DAT_0003c804; if that bit is 1, it sets bit 0 of DAT_0003c804. The function has no
 *   callees and only modifies the low bit of the target global.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_bit0_from_bit1(void)

{
  if ((((DAT_0003c07e & 3) >> 1 ^ 0xffffffff) & 1) == 0) {
    DAT_0003c804 = DAT_0003c804 & 0xfe;
  }
  else {
    DAT_0003c804 = DAT_0003c804 | 1;
  }
  return;
}
