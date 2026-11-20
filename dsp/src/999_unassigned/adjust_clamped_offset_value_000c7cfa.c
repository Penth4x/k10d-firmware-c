/* @k10d adjust_clamped_offset_value_000c7cfa @ 0x000c7cfa
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Updates the global value at DAT_0003c47e by adding or subtracting a lookup-table entry
 *   based on param_1, with clamping.
 * summary:
 *   The function branches on the sign of param_1. For negative values, it calls
 *   clamp_value_by_flags_000c7ea4, adjusts the result by 1-4 based on the lower 3 bits,
 *   subtracts a value from a lookup table (DAT_000fa1e8/000fa1f1/000fa1f7) indexed by the
 *   absolute value of param_1, and stores the result in DAT_0003c47e with a minimum clamp
 *   of 0x1c. For positive values, it adds a similar offset to the current DAT_0003c47e,
 *   adds a lookup table value, clamps against DAT_0003c578, and passes the result to
 *   clamp_value_by_flags_000c7e7e. The logic manages a signed offset value with direction-
 *   dependent adjustments and bounds checking.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void adjust_clamped_offset_value_000c7cfa(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  
  if (param_1 < 1) {
    if ((((param_1 < 0) &&
         (((DAT_0003c440 != '\x05' || ((DAT_0003c58a & 8) == 0)) || ((DAT_0003c58b & 1) != 0)))) &&
        ((DAT_0003c440 != '\b' || (((DAT_0003c58a & 8) == 0 && ((DAT_0003c58a & 0x10) == 0)))))) &&
       ((DAT_0003c440 != '\a' || (((DAT_0003c58a & 8) == 0 && ((DAT_0003c58a & 0x10) == 0)))))) {
      bVar2 = clamp_value_by_flags_000c7ea4(__frv_reg_unset(4));
      bVar1 = bVar2 & 7;
      if (bVar1 == 0) {
        bVar2 = bVar2 - 1;
      }
      else if (((bVar1 == 1) || (bVar1 == 3)) || (bVar1 == 6)) {
        bVar2 = bVar2 - 2;
      }
      else if (((bVar1 == 2) || (bVar1 == 4)) || (bVar1 == 7)) {
        bVar2 = bVar2 - 3;
      }
      else if (bVar1 == 5) {
        bVar2 = bVar2 - 4;
      }
      param_1 = -param_1;
      if ((bVar2 & 3) == 3) {
        cVar3 = *(char *)((int)&DAT_000fa1e8 + param_1 + 3);
      }
      else if ((bVar2 & 3) == 0) {
        cVar3 = (&DAT_000fa1f1)[param_1];
      }
      else {
        cVar3 = (&DAT_000fa1f7)[param_1];
      }
      DAT_0003c47e = bVar2 - cVar3;
      if (DAT_0003c47e < 0x1c) {
        DAT_0003c47e = 0x1c;
      }
    }
  }
  else if ((((DAT_0003c440 != '\x05') || ((DAT_0003c58a & 4) == 0)) || ((DAT_0003c58b & 1) != 0)) &&
          (((DAT_0003c440 != '\b' || (((DAT_0003c58a & 4) == 0 && ((DAT_0003c58a & 0x20) == 0)))) &&
           ((DAT_0003c440 != '\a' || (((DAT_0003c58a & 4) == 0 && ((DAT_0003c58a & 0x20) == 0)))))))
          ) {
    bVar2 = DAT_0003c47e & 7;
    if (((DAT_0003c47e & 7) == 0) || (bVar2 == 3)) {
      bVar1 = DAT_0003c47e + 4;
    }
    else if (((bVar2 == 1) || (bVar2 == 4)) || (bVar2 == 6)) {
      bVar1 = DAT_0003c47e + 3;
    }
    else if (((bVar2 == 2) || (bVar2 == 5)) || (bVar1 = DAT_0003c47e, bVar2 == 7)) {
      bVar1 = DAT_0003c47e + 2;
    }
    if ((bVar1 & 3) == 3) {
      cVar3 = (&DAT_000fa1f7)[param_1];
    }
    else if ((bVar1 & 3) == 0) {
      cVar3 = (&DAT_000fa1f1)[param_1];
    }
    else {
      cVar3 = *(char *)((int)&DAT_000fa1e8 + param_1 + 3);
    }
    bVar2 = bVar1 + cVar3;
    if (DAT_0003c578 <= (byte)(bVar1 + cVar3)) {
      bVar2 = DAT_0003c578;
    }
    DAT_0003c47e = clamp_value_by_flags_000c7e7e(bVar2);
  }
  return;
}
