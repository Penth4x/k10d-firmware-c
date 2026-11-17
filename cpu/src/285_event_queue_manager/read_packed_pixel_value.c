/* @k10d read_packed_pixel_value @ 0x1052a0f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 285_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Extracts a 16-bit value from a packed byte array using a computed offset and bit-
 *   shifting logic.
 * summary:
 *   The function calculates a pointer into a data buffer defined by param_1 (base + stride
 *   * index) and param_2 (offset). It reads two consecutive bytes and combines them into a
 *   16-bit integer. The combination logic depends on the least significant bit of param_2:
 *   if even, it shifts the first byte left by 4 and the second right by 4; if odd, it masks
 *   the first byte to the lower 4 bits and shifts it left by 8. This pattern is
 *   characteristic of unpacking 12-bit or 10-bit pixel data stored in a packed format.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_packed_pixel_value(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = (byte *)(*(int *)(param_1 + 0x10) + param_3 * *(int *)(param_1 + 0xc) +
                   ((param_2 & 0xffff) * 3) / 2);
  uVar3 = (uint)*pbVar2;
  uVar1 = (uint)pbVar2[1];
  if ((param_2 & 1) == 0) {
    uVar3 = uVar3 << 4;
    uVar1 = (int)(uVar1 & 0xf0) >> 4;
  }
  else {
    uVar3 = (uVar3 & 0xf) << 8;
  }
  return uVar3 | uVar1;
}
