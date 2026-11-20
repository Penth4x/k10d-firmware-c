/* @k10d fill_four_bytes_with_pattern @ 0x000f6c12
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes a 4-byte repeating pattern (0xff, 0xaa, 0x55, or 0x00) to four consecutive
 *   memory locations.
 * summary:
 *   The function selects a byte value based on param_1 (0->0xff, 1->0xaa, 2->0x55, else
 *   0x00) and writes that value to four distinct memory addresses: 0x0003c4b0, 0x0003c4b1,
 *   0x0003c4b2, and 0x0003c4b3. It uses a loop to perform the four writes. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void fill_four_bytes_with_pattern(int param_1)

{
  int iVar1;
  uint8_t uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    uVar2 = 0xff;
  }
  else if (param_1 == 1) {
    uVar2 = 0xaa;
  }
  else if (param_1 == 2) {
    uVar2 = 0x55;
  }
  else {
    uVar2 = 0;
  }
  iVar1 = 0;
  iVar3 = 4;
  do {
    (&DAT_0003c4b0)[iVar1] = uVar2;
    (&DAT_0003c4b1)[iVar1] = uVar2;
    (&DAT_0003c4b2)[iVar1] = uVar2;
    (&DAT_0003c4b3)[iVar1] = uVar2;
    iVar1 = iVar1 + 4;
    iVar3 = iVar3 + -1;
  } while (0 < iVar3);
  return;
}
