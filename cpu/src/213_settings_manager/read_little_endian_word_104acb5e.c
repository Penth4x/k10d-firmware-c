/* @k10d read_little_endian_word_104acb5e @ 0x104acb5e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads up to 4 bytes from a buffer and assembles them into a little-endian integer.
 * summary:
 *   The function takes a pointer and a length (clamped to 4). It iterates through the
 *   bytes, shifting the accumulator left by 8 bits for each subsequent byte and ORing in
 *   the current byte. This constructs a little-endian value from the input buffer. No
 *   callees are used.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint read_little_endian_word_104acb5e(void *param_1,uint param_2)

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
      uVar1 = (uint)*(byte *)((int)param_1 + uVar2) << ((byte)(uVar2 << 3) & 0xf) | uVar1;
      uVar2 = uVar2 + 1 & 0xff;
    } while ((int)uVar2 < (int)param_2);
  }
  return uVar1;
}
