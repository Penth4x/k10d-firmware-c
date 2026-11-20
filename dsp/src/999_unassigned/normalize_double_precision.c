/* @k10d normalize_double_precision @ 0x000f74c4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Normalizes a 64-bit IEEE 754 double-precision floating-point value.
 * summary:
 *   The function takes four 32-bit parameters representing the high and low 32-bit halves
 *   of a double-precision floating-point number. It handles special cases like zero,
 *   infinity, and NaN, then performs exponent normalization by shifting the mantissa and
 *   adjusting the exponent field. The logic includes handling subnormal numbers and
 *   rounding, which are characteristic of floating-point normalization routines.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ulonglong normalize_double_precision(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = param_1 * 2;
  uVar4 = param_3 * 2;
  uVar2 = uVar1;
  uVar5 = param_3;
  uVar7 = param_4;
  if ((uVar4 <= uVar1) && ((uVar1 + param_3 * -2 != 0 || (param_4 <= param_2)))) {
    uVar2 = uVar4;
    uVar4 = uVar1;
    uVar5 = param_1;
    uVar7 = param_2;
    param_1 = param_3;
    param_2 = param_4;
  }
  uVar4 = uVar4 >> 0x15;
  if (uVar4 == 0) {
    return (ulonglong)(uVar5 & param_1 & 0x80000000/*SDRAM*/) << 0x20;
  }
  uVar2 = uVar2 >> 0x15;
  if (uVar4 == 0x7ff) {
    if (((uVar5 & 0xfffff) != 0 || uVar7 != 0) ||
       ((uVar2 == 0x7ff &&
        (((param_1 & 0xfffff) != 0 || param_2 != 0 || ((int)(param_1 ^ uVar5) < 0)))))) {
      return CONCAT44(uVar5,uVar7) | 0x8000000000000;
    }
LAB_000f74b2:
    return CONCAT44(uVar5,uVar7);
  }
  if (uVar2 == 0) goto LAB_000f74b2;
  uVar6 = uVar7 * 0x800;
  uVar1 = uVar5 << 0xb | uVar7 >> 0x15 | 0x80000000/*SDRAM*/;
  uVar9 = param_2 << 0xb;
  uVar8 = param_1 << 0xb | param_2 >> 0x15 | 0x80000000/*SDRAM*/;
  uVar2 = uVar4 - uVar2;
  if ((int)uVar2 < 2) {
    if (uVar2 == 1) {
      uVar9 = (param_2 & 0x1fffff) << 10 | (param_2 >> 0x15) << 0x1f;
      uVar8 = uVar8 >> 1;
    }
    if (-1 < (int)(uVar5 ^ param_1)) goto LAB_000f754c;
    uVar7 = uVar6 - uVar9;
    uVar2 = (uVar1 - uVar8) - (uint)(uVar6 < uVar9);
    if ((int)uVar2 < 0) goto LAB_000f7556;
    iVar3 = 0;
    uVar1 = uVar7;
    if (uVar2 == 0) {
      uVar9 = 0;
      uVar4 = uVar4 - 0x20;
      uVar8 = 0;
      uVar2 = uVar7;
      uVar1 = uVar9;
      if (uVar7 == 0) goto LAB_000f75b0;
    }
    if (uVar2 < 0x10000) {
      uVar2 = uVar2 << 0x10;
      iVar3 = 0x10;
    }
    if (uVar2 < 0x1000000) {
      uVar2 = uVar2 << 8;
      iVar3 = iVar3 + 8;
    }
    if (uVar2 < 0x10000000/*ROM*/) {
      uVar2 = uVar2 << 4;
      iVar3 = iVar3 + 4;
    }
    if (uVar2 < 0x40000000) {
      uVar2 = uVar2 << 2;
      iVar3 = iVar3 + 2;
    }
    uVar7 = iVar3 + 1;
    uVar4 = uVar4 - uVar7;
    uVar8 = (uVar2 & 0x3fffffff) >> 10;
    uVar9 = uVar1;
    if (uVar7 != 0xb) {
      if (uVar7 < 0xc) {
        uVar9 = uVar1 >> (0xb - uVar7 & 0x1f) | uVar2 << 0x16;
      }
      else {
        uVar9 = uVar1 << ((byte)(iVar3 + -10) & 0xf);
        uVar8 = uVar8 | uVar1 >> (0x20U - (iVar3 + -10) & 0x1f);
      }
    }
  }
  else {
    iVar3 = 0x20 - uVar2;
    if (iVar3 < 0) {
      uVar2 = uVar2 - 0x20;
      if ((int)(0x16 - uVar2) < 0) {
        return CONCAT44(uVar5,uVar7 & 0x1fffff | (uVar7 >> 0x15) << 0x15);
      }
      iVar3 = uVar8 << ((char)(0x16 - uVar2) + 10U & 0xf);
      uVar10 = uVar8 >> (uVar2 & 0x1f);
      uVar8 = 0;
      if (uVar9 != 0 || iVar3 != 0) goto LAB_000f753c;
    }
    else {
      if (iVar3 == 0) {
        uVar10 = uVar8;
        uVar8 = 0;
      }
      else {
        uVar10 = uVar9 >> (uVar2 & 0x1f) | uVar8 << ((byte)iVar3 & 0xf);
        uVar8 = uVar8 >> (uVar2 & 0x1f);
        uVar9 = uVar9 << ((byte)iVar3 & 0xf);
      }
      if (uVar9 != 0) {
LAB_000f753c:
        uVar10 = uVar10 | uVar2;
      }
    }
    uVar9 = uVar10;
    if ((int)(uVar5 ^ param_1) < 0) {
      uVar7 = uVar6 - uVar10;
      uVar2 = (uVar1 - uVar8) - (uint)(uVar6 < uVar10);
      if ((int)uVar2 < 0) goto LAB_000f7556;
      uVar4 = uVar4 - 1;
      uVar2 = uVar2 * 4 | uVar7 >> 0x1e;
      uVar7 = uVar7 * 4;
    }
    else {
LAB_000f754c:
      uVar7 = uVar6 + uVar9;
      uVar9 = (uint)CARRY4(uVar6,uVar9);
      uVar6 = uVar1 + uVar8;
      uVar2 = uVar6 + uVar9;
      uVar4 = uVar4 + (CARRY4(uVar1,uVar8) || CARRY4(uVar6,uVar9));
      if (!CARRY4(uVar1,uVar8) && !CARRY4(uVar6,uVar9)) {
LAB_000f7556:
        uVar2 = uVar2 << 1 | uVar7 >> 0x1f;
        uVar7 = uVar7 << 1;
      }
    }
    uVar8 = uVar2 >> 0xc;
    uVar9 = uVar7 >> 0xc | uVar2 << 0x14;
    if ((uVar7 & 0x800) != 0) {
      uVar2 = (uint)((uVar7 & 0x7ff) == 0 && (uVar7 >> 0xc & 1) != 0);
      uVar8 = uVar8 + CARRY4(uVar9,uVar2);
      uVar9 = uVar9 + uVar2;
    }
  }
  uVar8 = uVar8 + uVar4 * 0x100000;
  if (((int)uVar8 < 0) || ((uVar8 & 0x7ff00000) == 0)) {
    return (ulonglong)(uVar5 & 0x80000000/*SDRAM*/) << 0x20;
  }
  if ((uVar8 & 0x7ff00000) == 0x7ff00000) {
    return (ulonglong)(uVar5 & 0x80000000/*SDRAM*/ | 0x7ff00000) << 0x20;
  }
  uVar8 = uVar8 | uVar5 & 0x80000000/*SDRAM*/;
LAB_000f75b0:
  return CONCAT44(uVar8,uVar9);
}
