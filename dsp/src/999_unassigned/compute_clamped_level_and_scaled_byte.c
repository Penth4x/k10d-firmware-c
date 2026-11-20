/* @k10d compute_clamped_level_and_scaled_byte @ 0x000ccf84
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Derives a clamped 0-5 level from a counter and stores a scaled byte using a lookup
 *   table and a selected multiplier.
 * summary:
 *   Gated by bit 2 of DAT_0003ce00, the function subtracts 0x44 from DAT_0003c576, clamps
 *   the result to 0-5, and forces it to 3 if either of the low two bits of DAT_0003c127 is
 *   set. It selects a multiplier from DAT_0003f2c2 or DAT_0003f1b1 based on bit 4 of
 *   DAT_0003ce07, defaults to 0x20 if zero, and stores the level in DAT_0003ce68 and
 *   DAT_0003cef2. The scaled result is stored in DAT_0003ce12 using a lookup table at
 *   offset 0xfae48.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_clamped_level_and_scaled_byte(void)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if ((DAT_0003ce00 & 4) == 0) {
    uVar2 = DAT_0003c576 - 0x44;
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    uVar2 = uVar2 >> 3;
    if (5 < uVar2) {
      uVar2 = 5;
    }
    if (((DAT_0003c127 & 2) != 0) || ((DAT_0003c127 & 1) != 0)) {
      uVar2 = 3;
    }
    DAT_0003ce68 = (uint8_t)uVar2;
    bVar1 = DAT_0003f2c2;
    if ((DAT_0003ce07 & 0x10) != 0) {
      bVar1 = DAT_0003f1b1;
    }
    uVar3 = (uint)bVar1;
    if (uVar3 == 0) {
      uVar3 = 0x20;
    }
    DAT_0003ce12 = (uint8_t)(*(byte *)(uVar2 + 0xfae48) * uVar3 >> 5);
    DAT_0003cef2 = DAT_0003ce68;
  }
  return;
}
