/* @k10d copy_two_byte_words_from_offset @ 0x000d2e8e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Copies a variable number of 16-bit words from a source buffer to two destination
 *   buffers.
 * summary:
 *   The function reads a count from the global variable DAT_0003cd47. If the count is non-
 *   zero, it iterates that many times, copying 16-bit values from a source location
 *   (param_1 - 0xdf0) to param_1 and from (param_2 - 0xdf0) to param_2. It effectively
 *   performs a block copy of 2*DAT_0003cd47 bytes from a region offset by -0xdf0 to two
 *   separate destination regions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_byte_words_from_offset(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (DAT_0003cd47 != 0) {
    iVar1 = 0;
    do {
      *(uint16_t *)(iVar1 + param_1) = *(uint16_t *)(iVar1 + param_1 + -0xdf0);
      *(uint16_t *)(iVar1 + param_2) = *(uint16_t *)(iVar1 + param_2 + -0xdf0);
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 2;
    } while (uVar2 < DAT_0003cd47);
  }
  return;
}
