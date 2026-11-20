/* @k10d compare_four_byte_blocks @ 0x000cb54e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Compares four 4-byte blocks at 0x3c4c0 against reference data at 0x3c4b0 and sets
 *   mismatch bits in 0x3c4d8.
 * summary:
 *   The function iterates over four 4-byte chunks, comparing each byte at 0x3c4c0+i against
 *   the corresponding byte in a reference table at 0x3c4b0+i. For each mismatched byte, it
 *   sets the corresponding bit in the global variable _DAT_0003c4d8. The bit position is
 *   determined by the byte offset within the 4-byte block (0-3) and the block index (0-3),
 *   resulting in a 16-bit mask where each bit represents a specific byte comparison result.
 *   No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compare_four_byte_blocks(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 1;
  _DAT_0003c4d8 = 0;
  iVar3 = 0;
  iVar1 = 4;
  do {
    if (*(char *)(iVar3 + 0x3c4c0) != (&DAT_0003c4b0)[iVar3]) {
      _DAT_0003c4d8 = _DAT_0003c4d8 | (ushort)uVar2;
    }
    if (*(char *)(iVar3 + 0x3c4c1) != (&DAT_0003c4b1)[iVar3]) {
      _DAT_0003c4d8 = _DAT_0003c4d8 | (ushort)(uVar2 << 1);
    }
    if (*(char *)(iVar3 + 0x3c4c2) != (&DAT_0003c4b2)[iVar3]) {
      _DAT_0003c4d8 = _DAT_0003c4d8 | (ushort)(uVar2 << 2);
    }
    if (*(char *)(iVar3 + 0x3c4c3) != (&DAT_0003c4b3)[iVar3]) {
      _DAT_0003c4d8 = _DAT_0003c4d8 | (ushort)(uVar2 << 3);
    }
    uVar2 = (uVar2 & 0xfff) << 4;
    iVar3 = iVar3 + 4;
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  return;
}
