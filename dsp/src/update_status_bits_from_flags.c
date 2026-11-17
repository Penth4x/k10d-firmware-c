/* @k10d update_status_bits_from_flags @ 0x000d25be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Reads a 16-bit flag array and updates specific bits in a status byte based on their
 *   values.
 * summary:
 *   Iterates through 16 unsigned short values starting at DAT_0003ccc8, comparing each
 *   against a threshold at DAT_0003ccc4. It constructs a bitmask (uVar2) where bit i is set
 *   if the i-th flag exceeds the threshold. The resulting mask is masked with 0x2f or 0x1f
 *   depending on lower bits, and the result is written to the lower 7 bits of DAT_0003cb9b,
 *   preserving the upper 2 bits.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_status_bits_from_flags(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  ushort *puVar4;
  
  uVar1 = 0x801;
  uVar2 = 0xf0;
  puVar4 = (ushort *)&DAT_0003ccc8;
  do {
    if (_DAT_0003ccc4 < *puVar4) {
      uVar2 = uVar2 | uVar1;
    }
    uVar1 = uVar1 << 1;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  if (((uVar2 & 3) == 0) || ((uVar2 & 0xc) == 0)) {
    bVar3 = (byte)uVar2 & 0x2f;
  }
  else {
    bVar3 = (byte)uVar2 & 0x1f;
  }
  DAT_0003cb9b = DAT_0003cb9b & 0xc0 | bVar3;
  return;
}
