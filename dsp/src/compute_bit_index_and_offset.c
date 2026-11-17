/* @k10d compute_bit_index_and_offset @ 0x000c296c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Computes a 16-bit value encoding the position of the highest set bit and the lower 3
 *   bits of the input.
 * summary:
 *   The function first counts how many times the input can be right-shifted before it drops
 *   below 16, effectively finding the index of the most significant set bit. It then packs
 *   this count (masked to 13 bits) into the upper bits of a 16-bit result and places the
 *   lower 3 bits of the original input into the lower 3 bits. If the lower 3 bits are non-
 *   zero, it increments the result by 1. No memory accesses or external calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint compute_bit_index_and_offset(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; 0xf < param_1; param_1 = param_1 >> 1) {
    uVar1 = uVar1 + 1;
  }
  uVar1 = (uVar1 & 0x1fff) << 3 | param_1 & 7;
  if ((param_1 & 7) != 0) {
    uVar1 = uVar1 + 1 & 0xffff;
  }
  return uVar1;
}
