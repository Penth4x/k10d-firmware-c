/* @k10d classify_value_by_thresholds @ 0x000c566c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns 0, 1, or 2 based on comparing a threshold pair against a value derived from two
 *   adjacent globals.
 * summary:
 *   Selects two threshold constants (uVar4, uVar3) based on param_1 (0, 1, 2, or other).
 *   Computes a value from DAT_0003c52e and DAT_0003c52f. Returns 1 if the first threshold
 *   is >= the computed value, otherwise returns 2 if the second threshold is >= the
 *   computed value, else 0. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t classify_value_by_thresholds(int param_1)

{
  uint uVar1;
  uint32_t uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0x50;
  uVar3 = 0x80;
  if (param_1 == 1) {
    uVar4 = 0x54;
  }
  else if (param_1 == 2) {
    uVar4 = 0x4c;
    uVar3 = 0x84;
  }
  else if (param_1 == 0) {
    uVar3 = 0x7c;
  }
  uVar1 = (uint)DAT_0003c52e + (uint)DAT_0003c52f >> 1;
  if (uVar4 < uVar1) {
    if (uVar3 < uVar1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
