/* @k10d adjust_clamped_value_by_table @ 0x000c8296
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Adjusts a clamped byte value using a lookup table selected by the low two bits of the
 *   stored value.
 * summary:
 *   Reads the byte at DAT_0003c48b and uses its low two bits to select one of three lookup
 *   tables. Depending on the sign of param_1, it adds or subtracts the table entry at index
 *   |param_1| from the stored value. The result is clamped to the range [0x30, 0x50] and
 *   written back to DAT_0003c48b. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_clamped_value_by_table(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)DAT_0003c48b;
  if (param_1 < 0) {
    param_1 = -param_1;
    if ((uVar2 & 3) == 3) {
      uVar1 = (uint)(byte)((char *)(&LAB_000fa1f8))[param_1];
    }
    else if ((DAT_0003c48b & 3) == 0) {
      uVar1 = (uint)(byte)(&DAT_000fa1f2)[param_1];
    }
    else {
      uVar1 = (uint)(byte)(&DAT_000fa1ec)[param_1];
    }
    uVar2 = uVar2 + uVar1;
    if (0x50 < uVar2) {
      uVar2 = 0x50;
    }
  }
  else {
    if ((uVar2 & 3) == 3) {
      uVar1 = (uint)(byte)(&DAT_000fa1ec)[param_1];
    }
    else if ((DAT_0003c48b & 3) == 0) {
      uVar1 = (uint)(byte)(&DAT_000fa1f2)[param_1];
    }
    else {
      uVar1 = (uint)(byte)((char *)(&LAB_000fa1f8))[param_1];
    }
    uVar2 = uVar2 - uVar1;
    if (uVar2 < 0x30) {
      uVar2 = 0x30;
    }
  }
  DAT_0003c48b = (char)uVar2;
  return;
}
