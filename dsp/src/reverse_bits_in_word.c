/* @k10d reverse_bits_in_word @ 0x000ea21a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Reverses the bit order of a 15-bit value stored in the lower bits of param_1.
 * summary:
 *   Iterates 15 times, shifting a mask down from bit 14 to bit 0. For each bit, it sets or
 *   clears bit 1 of the global bRam00000000, then reads bit 0 of that global into the
 *   result accumulator uVar2. The function returns the 15-bit reversed value in uVar2. No
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint reverse_bits_in_word(uint param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0x8000;
  do {
    if ((param_1 & uVar3) == 0) {
      bRam00000000 = bRam00000000 & 0xfd;
    }
    else {
      bRam00000000 = bRam00000000 | 2;
    }
    bVar1 = bRam00000000;
    uVar3 = uVar3 >> 1;
    uVar2 = (uVar2 & 0x7fff) << 1;
    bRam00000000 = bRam00000000 & 0xfb;
    if ((bVar1 & 1) != 0) {
      uVar2 = uVar2 | 1;
    }
  } while (uVar3 != 0);
  return uVar2;
}
