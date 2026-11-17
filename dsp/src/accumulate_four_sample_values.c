/* @k10d accumulate_four_sample_values @ 0x000d0c5c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Reads four 10-bit values from a buffer, sums them, and stores the average into a global
 *   variable.
 * summary:
 *   The function waits for a flag bit (0x40) in DAT_00000079 to be set before reading each
 *   of four consecutive ushort values from param_1. Each value is masked to 10 bits (0x3ff)
 *   and inverted (XOR 0xffff) before being added to a running sum. After the loop, if bit 6
 *   of DAT_0003f285 is set, the sum is right-shifted by 2 (divided by 4) and stored in
 *   _DAT_0003cfa8; otherwise, _DAT_0003cfa8 is cleared to 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void accumulate_four_sample_values(ushort *param_1)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = 4;
  uVar2 = 0;
  if ((DAT_0003ce09 & 0x80) == 0) {
    DAT_00000079 = DAT_00000079 & 0x3f;
  }
  do {
    do {
    } while ((DAT_00000079 & 0x40) == 0);
    DAT_00000079 = DAT_00000079 & 0xbf;
    *param_1 = ((ushort)_DAT_0000007e ^ 0xffff) & 0x3ff;
    uVar2 = uVar2 + *param_1 & 0xffff;
    sVar1 = sVar1 + -1;
    param_1 = param_1 + 1;
  } while (sVar1 != 0);
  if ((DAT_0003f285 & 0x40) == 0) {
    _DAT_0003cfa8 = 0;
  }
  else {
    _DAT_0003cfa8 = (uint16_t)((int)uVar2 >> 2);
  }
  return;
}
