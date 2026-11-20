/* @k10d compute_clamped_offset_value_000cd256 @ 0x000cd256
 * name: model (proposed by the local model from the decompile, confidence 0.72)
 * purpose:
 *   Computes a clamped 8-bit value from a base offset plus conditional increments, gated by
 *   a flag.
 * summary:
 *   Reads a flag bit from DAT_0003cb80; if set, takes DAT_0003f4b0 as a base, adds
 *   DAT_0003ce12 once or twice (second add gated by bit 4 of DAT_0003f2d8), then clamps the
 *   result to the range [_DAT_0003cc30, 0xff]. If the result is below the lower bound it
 *   returns 0; otherwise it stores the clamped value into DAT_0003ce13 and returns it. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ushort compute_clamped_offset_value_000cd256(void)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (((DAT_0003cb80 & 1) != 0) && (uVar1 = (ushort)DAT_0003f4b0, DAT_0003f4b0 != 0)) {
    uVar1 = uVar1 + DAT_0003ce12;
    if ((DAT_0003f2d8 & 0x10) != 0) {
      uVar1 = uVar1 + DAT_0003ce12;
    }
    if (uVar1 < _DAT_0003cc30) {
      uVar1 = 0;
    }
    else {
      if (0xff < uVar1) {
        uVar1 = 0xff;
      }
      DAT_0003ce13 = (uint8_t)uVar1;
    }
  }
  return uVar1;
}
