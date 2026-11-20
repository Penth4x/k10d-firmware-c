/* @k10d set_nibble_in_word @ 0x000c74ea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes a 4-bit value into a specific nibble of a 16-bit global word.
 * summary:
 *   The function reads a 16-bit value from DAT_0003c4a0 and a nibble index from
 *   DAT_0003c4a2. It clamps the input parameter to the range 0-15, then uses bitwise
 *   operations to replace the selected nibble in the global word with the new value. No
 *   other side effects or memory accesses are observed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_nibble_in_word(short param_1)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = (int)(short)(((ushort)((int)(uint)_DAT_0003c4a0 >> ((uint)DAT_0003c4a2 << 2 & 0x1f)) & 0xf
                       ) + param_1);
  if (iVar2 < 0) {
    iVar2 = 0xf;
  }
  if (0xf < iVar2) {
    iVar2 = 0;
  }
  bVar1 = (byte)((uint)DAT_0003c4a2 << 2);
  _DAT_0003c4a0 =
       ((ushort)(0xf << (bVar1 & 0xf)) ^ 0xffff) & _DAT_0003c4a0 | (ushort)(iVar2 << (bVar1 & 0xf));
  return;
}
