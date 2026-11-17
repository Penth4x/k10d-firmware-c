/* @k10d write_two_byte_status_pair @ 0x000d57a4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Writes a computed value to DAT_00000050 and a mode flag to DAT_00000056, then waits for
 *   bit 2 of DAT_00000057.
 * summary:
 *   The function branches on the low two bits of DAT_00000484. In one path it stores a
 *   clamped offset derived from param_1 into DAT_00000050 and sets DAT_00000056 to 0x13,
 *   then polls DAT_00000057 for bit 2 and clears it. In the other path it stores a
 *   shifted/clamped value into DAT_00000050, sets DAT_00000056 to 3, and polls DAT_00000057
 *   for bit 2 without clearing it. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_two_byte_status_pair(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((DAT_00000484 & 3) == 2) {
    if (param_1 < 6) {
      DAT_00000050 = '\0';
    }
    else {
      DAT_00000050 = (char)param_1 + -4;
    }
    DAT_00000056 = 0x13;
    do {
    } while ((DAT_00000057 & 4) == 0);
    DAT_00000057 = DAT_00000057 & 0xfb;
  }
  else {
    uVar1 = param_1 + 1 >> 1;
    iVar2 = uVar1 - 0x18;
    if (uVar1 < 0x18 || iVar2 == 0) {
      iVar2 = 0;
    }
    DAT_00000050 = (char)iVar2;
    DAT_00000056 = 3;
  }
  do {
  } while ((DAT_00000057 & 4) == 0);
  return;
}
