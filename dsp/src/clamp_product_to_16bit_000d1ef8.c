/* @k10d clamp_product_to_16bit_000d1ef8 @ 0x000d1ef8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Multiplies two 16-bit values, shifts right by 8, clamps to 0xffff, and stores the
 *   result.
 * summary:
 *   Reads two 16-bit values from DAT_0003cc30 and DAT_0003ce0e, computes their product
 *   shifted right by 8 bits. If the result exceeds 0xffff, it is clamped to 0xffff. The
 *   final 16-bit value is written to DAT_0003cc6a. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clamp_product_to_16bit_000d1ef8(void)

{
  uint uVar1;
  
  uVar1 = (uint)_DAT_0003cc30 * (uint)_DAT_0003ce0e >> 8;
  if (0xffff < uVar1) {
    uVar1 = 0xffff;
  }
  _DAT_0003cc6a = (short)uVar1;
  return;
}
