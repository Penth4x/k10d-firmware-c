/* @k10d clear_high_bits_in_buffer @ 0x000d0548
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears the most significant bit of a sequence of bytes in a memory buffer based on a
 *   state flag.
 * summary:
 *   The function checks a flag in DAT_0003c4dd and a counter in DAT_0003c3ff. If conditions
 *   are met, it iterates through a buffer starting at 0x0003cf10, clearing the high bit
 *   (masking with 0x7f) of each byte. The loop length is determined by the value of
 *   DAT_0003c3ff, which selects between two different ranges of bytes to process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_high_bits_in_buffer(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((DAT_0003c391 & 2) == 0) {
    DAT_0003c4dd = DAT_0003c4dd & 0xfe;
  }
  if (((DAT_0003c4dd & 1) != 0) && (1 < DAT_0003c3ff)) {
    if (DAT_0003c3ff == 3) {
      uVar3 = 9;
      uVar1 = 0x13;
    }
    else {
      uVar3 = 0;
      uVar1 = 8;
    }
    iVar2 = (uVar1 - uVar3) + 1;
    if (uVar3 <= uVar1) {
      if (5 < iVar2) {
        do {
          (&DAT_0003cf10)[uVar3] = (&DAT_0003cf10)[uVar3] & 0x7f;
          *(byte *)(uVar3 + 0x3cf11) = *(byte *)(uVar3 + 0x3cf11) & 0x7f;
          *(byte *)(uVar3 + 0x3cf12) = *(byte *)(uVar3 + 0x3cf12) & 0x7f;
          uVar3 = uVar3 + 3;
          iVar2 = iVar2 + -3;
        } while (2 < iVar2);
      }
      if (iVar2 != 0) {
        do {
          (&DAT_0003cf10)[uVar3] = (&DAT_0003cf10)[uVar3] & 0x7f;
          uVar3 = uVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (0 < iVar2);
      }
    }
  }
  return;
}
