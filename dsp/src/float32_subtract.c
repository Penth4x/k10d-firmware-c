/* @k10d float32_subtract @ 0x000f7b48
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Performs IEEE 754 single-precision floating-point subtraction of param_2 from param_1.
 * summary:
 *   The function implements the full IEEE 754 binary32 subtraction algorithm, handling
 *   special cases like NaN, infinity, and zero. It normalizes the result by computing the
 *   exponent difference, aligning the mantissas, and performing the subtraction with proper
 *   rounding. The result is returned as a 64-bit value where the upper 32 bits contain the
 *   float result and the lower 32 bits contain the fractional part of the normalized
 *   mantissa.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ulonglong float32_subtract(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  bool bVar9;
  uint uVar7;
  
  uVar2 = param_1 & 0x7f800000;
  if (uVar2 == 0) {
    if ((param_2 & 0x7f800000) != 0x7f800000) {
code_r0x000f7b2c:
      return CONCAT44(param_1 ^ param_2,param_2) & 0x80000000ffffffff;
    }
  }
  else {
    if (uVar2 == 0x7f800000) {
      if (((param_1 & 0x7fffff) != 0) || ((param_2 & 0x7f800000) == 0)) goto LAB_000f7b3a;
      if ((param_2 & 0x7f800000) != 0x7f800000) goto LAB_000f7b40;
    }
    else {
      uVar4 = param_2 & 0x7f800000;
      if (uVar4 == 0) goto code_r0x000f7b2c;
      if (uVar4 != 0x7f800000) {
        iVar3 = uVar2 + uVar4 + -0x3f800000;
        uVar5 = param_1 ^ param_2;
        uVar8 = param_2 << 8 | 0x80000000/*SDRAM*/;
        lVar1 = (ulonglong)uVar8 * (ulonglong)(param_1 << 9);
        uVar7 = (uint)((ulonglong)lVar1 >> 0x20);
        if (lVar1 != 0) {
          uVar7 = uVar7 | 1;
        }
        uVar6 = uVar7 + uVar8;
        if (CARRY4(uVar7,uVar8)) {
          iVar3 = uVar2 + uVar4 + -0x3f000000;
        }
        else {
          uVar6 = uVar6 * 2;
        }
        bVar9 = (uVar6 & 0x100) != 0;
        uVar8 = uVar6 >> 9;
        uVar2 = uVar6 & 0xff;
        if (((uVar6 & 0xff) == 0) && (uVar2 = uVar8, bVar9)) {
          bVar9 = (uVar8 & 1) != 0;
          uVar2 = uVar6 >> 10;
        }
        uVar8 = uVar8 + iVar3 + (uint)bVar9;
        if ((uVar8 < 0x7f800000) && ((uVar8 & 0x7f800000) != 0)) {
          return CONCAT44(uVar8 | uVar5 & 0x80000000/*SDRAM*/,uVar2);
        }
        if (0x3f7fffff < uVar4) {
          return CONCAT44(uVar5,uVar2) & 0x80000000ffffffff | 0x7f80000000000000;
        }
        return CONCAT44(uVar5,uVar2) & 0x80000000ffffffff;
      }
    }
    if ((param_2 & 0x7fffff) == 0) {
LAB_000f7b40:
      return CONCAT44(param_1 ^ param_2,param_2) & 0x80000000ffffffff | 0x7f80000000000000;
    }
  }
LAB_000f7b3a:
  return CONCAT44(0xffffffff,param_2);
}
