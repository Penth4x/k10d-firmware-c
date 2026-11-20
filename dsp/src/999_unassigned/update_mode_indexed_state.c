/* @k10d update_mode_indexed_state @ 0x000c1618
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Updates a control word and a derived value based on a mode index and a status flag.
 * summary:
 *   The function reads a mode index from DAT_0003c102 and a status flag from DAT_0003c127.
 *   If the flag is set, it looks up a value from a table at DAT_000f90e0, adjusts a control
 *   word in DAT_0003c580, and computes a value stored in _DAT_0003c598. The calculation
 *   branches based on whether the upper bits of the mode index are less than 0x21. No MMIO
 *   writes are visible, only internal state updates.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint update_mode_indexed_state(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)DAT_000f9dec;
  bVar1 = DAT_0003c580 | 0x10;
  if ((DAT_0003c127 & 8) != 0) {
    uVar2 = (uint)(byte)(&DAT_000f90e0)[DAT_0003c102 & 7];
    if (uVar2 != 0x38) {
      bVar1 = DAT_0003c580 & 0xef;
    }
    DAT_0003c580 = bVar1;
    uVar3 = (DAT_0003c102 & 0xf8) >> 1;
    bVar1 = DAT_0003c580;
    if (uVar3 < 0x21) {
      uVar2 = uVar2 - 8;
    }
    else {
      uVar2 = (uVar2 + uVar3) - 0x28;
    }
  }
  DAT_0003c580 = bVar1;
  _DAT_0003c598 = (short)uVar2;
  return uVar2;
}
