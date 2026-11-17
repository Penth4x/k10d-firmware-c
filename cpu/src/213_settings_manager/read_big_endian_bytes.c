/* @k10d read_big_endian_bytes @ 0x104acb30
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads up to 4 bytes from a memory address and packs them into a big-endian integer.
 * summary:
 *   The function takes a pointer (param_1) and a length (param_2, clamped to 4). It
 *   iterates through the bytes, shifting the accumulator left by 8 bits for each byte and
 *   OR-ing in the current byte. This constructs a big-endian integer from the memory
 *   contents. No callees are used.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_big_endian_bytes(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if (4 < param_2) {
    param_2 = 4;
  }
  uVar2 = 0;
  if (0 < (int)param_2) {
    do {
      uVar1 = (uint)*(byte *)(param_1 + uVar2) <<
              ((((char)param_2 + -1) - (char)uVar2) * '\b' & 0xfU) | uVar1;
      uVar2 = uVar2 + 1 & 0xff;
    } while ((int)uVar2 < (int)param_2);
  }
  return uVar1;
}
