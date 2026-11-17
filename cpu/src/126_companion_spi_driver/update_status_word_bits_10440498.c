/* @k10d update_status_word_bits_10440498 @ 0x10440498
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes a value to an object field and sets specific bits in two dereferenced
 *   status/control words.
 * summary:
 *   The function stores param_2 into the object at offset 0x30. It then modifies two 16-bit
 *   values pointed to by pointers at offsets 0x20 and 0x28, setting bits 0x200, 1, and
 *   0x80, and copying specific bit ranges from param_2 into the target words. No callees
 *   are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_word_bits_10440498(void *param_1,int param_2)

{
  *(ushort *)((int)param_1 + 0x30) = (ushort)param_2;
  **(ushort **)((int)param_1 + 0x20) = **(ushort **)((int)param_1 + 0x20) & 4 | 0x200;
  **(ushort **)((int)param_1 + 0x20) = **(ushort **)((int)param_1 + 0x20) | (ushort)param_2 & 0xe000
  ;
  if (param_2 != 0xa000) {
    **(ushort **)((int)param_1 + 0x20) = **(ushort **)((int)param_1 + 0x20) | 1;
  }
  **(byte **)((int)param_1 + 0x28) = **(byte **)((int)param_1 + 0x28) | (byte)param_2 & 0xf;
  **(byte **)((int)param_1 + 0x28) = **(byte **)((int)param_1 + 0x28) | 0x80;
  return;
}
