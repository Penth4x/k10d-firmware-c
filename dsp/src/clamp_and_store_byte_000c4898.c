/* @k10d clamp_and_store_byte_000c4898 @ 0x000c4898
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Reads a value, applies an offset and scale, clamps it to 0-255, and stores it in a
 *   global byte.
 * summary:
 *   Calls compute_clamped_offset_value_000d8a3a with argument 1 to get a short value. Adds
 *   0x50, multiplies by 2, and clamps the result between 0 and 0xff. Stores the final byte
 *   value into DAT_0003c189. The specific meaning of the offset, scale, or the destination
 *   global is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clamp_and_store_byte_000c4898(void)

{
  short sVar1;
  
  sVar1 = compute_clamped_offset_value_000d8a3a(1);
  sVar1 = (sVar1 + 0x50) * 2;
  if (sVar1 < 0) {
    sVar1 = 0;
  }
  if (0xff < sVar1) {
    sVar1 = 0xff;
  }
  DAT_0003c189 = (char)sVar1;
  return;
}
