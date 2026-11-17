/* @k10d compute_adjusted_offset @ 0x000c1a06
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Returns a value derived from four integer parameters or a global, while updating a
 *   status flag.
 * summary:
 *   The function reads a global value into a local variable and sets bit 0 of DAT_0003c580.
 *   It then checks a combination of bits in DAT_0003c4d1 and DAT_0003c022. If the condition
 *   is met, it calculates (param_4 - param_2 + param_1 - param_3) and returns that result,
 *   also toggling bit 0 or bit 3 of DAT_0003c4d1 depending on its current state. Otherwise,
 *   it returns the initial global value. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint compute_adjusted_offset(int param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = (uint)_DAT_0003c562;
  DAT_0003c580 = DAT_0003c580 | 1;
  if ((((DAT_0003c4d1 & 1) == 0) || ((DAT_0003c4d1 & 8) == 0)) || ((DAT_0003c022 & 2) != 0)) {
    uVar1 = ((param_4 - param_2) + param_1) - param_3;
    if ((DAT_0003c4d1 & 1) == 0) {
      DAT_0003c4d1 = DAT_0003c4d1 & 0xf7;
    }
    else {
      DAT_0003c4d1 = DAT_0003c4d1 | 8;
    }
  }
  return uVar1;
}
