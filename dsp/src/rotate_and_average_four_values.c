/* @k10d rotate_and_average_four_values @ 0x000d41dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Rotates a 4-element 16-bit ring buffer and stores the average of the four values.
 * summary:
 *   Selects a source value from DAT_0003c056 or DAT_0003c07a based on the flag at
 *   DAT_0003f1b2. If the buffer at DAT_0003cd70 is zero, it initializes all four slots with
 *   the source value. It then shifts the buffer contents (cd74->cd76, cd72->cd74,
 *   cd70->cd72) and inserts the new source value at cd70. Finally, it calculates the
 *   arithmetic mean of the four values and stores it at DAT_0003cd78. No MMIO or external
 *   calls are made.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void rotate_and_average_four_values(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar4 = _DAT_0003c056;
  if (DAT_0003f1b2 != '\0') {
    uVar4 = _DAT_0003c07a;
  }
  if (_DAT_0003cd70 == 0) {
    _DAT_0003cd70 = uVar4;
    _DAT_0003cd72 = uVar4;
    _DAT_0003cd74 = uVar4;
  }
  uVar3 = _DAT_0003cd74;
  uVar2 = _DAT_0003cd72;
  uVar1 = _DAT_0003cd70;
  _DAT_0003cd76 = _DAT_0003cd74;
  _DAT_0003cd74 = _DAT_0003cd72;
  _DAT_0003cd72 = _DAT_0003cd70;
  _DAT_0003cd70 = uVar4;
  _DAT_0003cd78 = (short)((uint)uVar4 + (uint)uVar1 + (uint)uVar2 + (uint)uVar3 >> 2);
  return;
}
