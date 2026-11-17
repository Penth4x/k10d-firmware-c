/* @k10d add_two_64_bit_integers @ 0x10544224
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Performs signed 64-bit integer addition of two 64-bit values passed as (high,low)
 *   pairs.
 * summary:
 *   The function takes two 64-bit integers (param_1/param_2 and param_3/param_4) and
 *   returns their sum as a 64-bit value in r4/r5. It handles sign extension, overflow
 *   detection, and normalization of the result. No callees are invoked; it is a pure
 *   arithmetic routine. The 'lens_firmware_update' module context suggests it may be used
 *   for checksum or offset calculations during lens firmware operations, but the code
 *   itself is generic integer addition.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

ulonglong add_two_64_bit_integers(uint param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar1 = param_1 * 2;
  uVar4 = param_3 * 2;
  uVar2 = uVar1;
  uVar5 = param_3;
  pvVar6 = (void *)param_4;
  if ((uVar4 <= uVar1) && ((uVar1 + param_3 * -2 != 0 || (param_4 <= param_2)))) {
    uVar2 = uVar4;
    uVar4 = uVar1;
    uVar5 = param_1;
    pvVar6 = param_2;
    param_1 = param_3;
    param_2 = (void *)param_4;
  }
  uVar4 = uVar4 >> 0x15;
  if (uVar4 == 0) {
    return (ulonglong)(uVar5 & param_1 & 0x80000000/*SDRAM*/) << 0x20;
  }
  uVar2 = uVar2 >> 0x15;
  if (uVar4 == 0x7ff) {
    if (((uVar5 & 0xfffff) != 0 || pvVar6 != (void *)0x0) ||
       ((uVar2 == 0x7ff &&
        (((param_1 & 0xfffff) != 0 || param_2 != (void *)0x0 || ((int)(param_1 ^ uVar5) < 0)))))) {
      return CONCAT44(uVar5,pvVar6) | 0x8000000000000;
    }
LAB_10544212:
    return CONCAT44(uVar5,pvVar6);
  }
  if (uVar2 == 0) goto LAB_10544212;
  uVar7 = (int)pvVar6 * 0x800;
  uVar1 = uVar5 << 0xb | (uint)pvVar6 >> 0x15 | 0x80000000/*SDRAM*/;
  uVar10 = (int)param_2 << 0xb;
  uVar9 = param_1 << 0xb | (uint)param_2 >> 0x15 | 0x80000000/*SDRAM*/;
  uVar2 = uVar4 - uVar2;
  if ((int)uVar2 < 2) {
    if (uVar2 == 1) {
      uVar10 = ((uint)param_2 & 0x1fffff) << 10 | ((uint)param_2 >> 0x15) << 0x1f;
      uVar9 = uVar9 >> 1;
    }
    if (-1 < (int)(uVar5 ^ param_1)) goto LAB_105442ac;
    uVar8 = uVar7 - uVar10;
    uVar2 = (uVar1 - uVar9) - (uint)(uVar7 < uVar10);
    if ((int)uVar2 < 0) goto LAB_105442b6;
    iVar3 = 0;
    uVar1 = uVar8;
    if (uVar2 == 0) {
      uVar10 = 0;
      uVar4 = uVar4 - 0x20;
      uVar9 = 0;
      uVar2 = uVar8;
      uVar1 = uVar10;
      if (uVar8 == 0) goto LAB_10544310;
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
    uVar9 = (uVar2 & 0x3fffffff) >> 10;
    uVar10 = uVar1;
    if (uVar7 != 0xb) {
      if (uVar7 < 0xc) {
        uVar10 = uVar1 >> (0xb - uVar7 & 0x1f) | uVar2 << 0x16;
      }
      else {
        uVar10 = uVar1 << ((byte)(iVar3 + -10) & 0xf);
        uVar9 = uVar9 | uVar1 >> (0x20U - (iVar3 + -10) & 0x1f);
      }
    }
  }
  else {
    iVar3 = 0x20 - uVar2;
    if (iVar3 < 0) {
      uVar2 = uVar2 - 0x20;
      if ((int)(0x16 - uVar2) < 0) {
        return CONCAT44(uVar5,(uint)pvVar6 & 0x1fffff | ((uint)pvVar6 >> 0x15) << 0x15);
      }
      iVar3 = uVar9 << ((char)(0x16 - uVar2) + 10U & 0xf);
      uVar11 = uVar9 >> (uVar2 & 0x1f);
      uVar9 = 0;
      if (uVar10 != 0 || iVar3 != 0) goto LAB_1054429c;
    }
    else {
      if (iVar3 == 0) {
        uVar11 = uVar9;
        uVar9 = 0;
      }
      else {
        uVar11 = uVar10 >> (uVar2 & 0x1f) | uVar9 << ((byte)iVar3 & 0xf);
        uVar9 = uVar9 >> (uVar2 & 0x1f);
        uVar10 = uVar10 << ((byte)iVar3 & 0xf);
      }
      if (uVar10 != 0) {
LAB_1054429c:
        uVar11 = uVar11 | uVar2;
      }
    }
    uVar10 = uVar11;
    if ((int)(uVar5 ^ param_1) < 0) {
      uVar8 = uVar7 - uVar11;
      uVar2 = (uVar1 - uVar9) - (uint)(uVar7 < uVar11);
      if ((int)uVar2 < 0) goto LAB_105442b6;
      uVar4 = uVar4 - 1;
      uVar2 = uVar2 * 4 | uVar8 >> 0x1e;
      uVar8 = uVar8 * 4;
    }
    else {
LAB_105442ac:
      uVar8 = uVar7 + uVar10;
      uVar10 = (uint)CARRY4(uVar7,uVar10);
      uVar7 = uVar1 + uVar9;
      uVar2 = uVar7 + uVar10;
      uVar4 = uVar4 + (CARRY4(uVar1,uVar9) || CARRY4(uVar7,uVar10));
      if (!CARRY4(uVar1,uVar9) && !CARRY4(uVar7,uVar10)) {
LAB_105442b6:
        uVar2 = uVar2 << 1 | uVar8 >> 0x1f;
        uVar8 = uVar8 << 1;
      }
    }
    uVar9 = uVar2 >> 0xc;
    uVar10 = uVar8 >> 0xc | uVar2 << 0x14;
    if ((uVar8 & 0x800) != 0) {
      uVar2 = (uint)((uVar8 & 0x7ff) == 0 && (uVar8 >> 0xc & 1) != 0);
      uVar9 = uVar9 + CARRY4(uVar10,uVar2);
      uVar10 = uVar10 + uVar2;
    }
  }
  uVar9 = uVar9 + uVar4 * 0x100000;
  if (((int)uVar9 < 0) || ((uVar9 & 0x7ff00000) == 0)) {
    return (ulonglong)(uVar5 & 0x80000000/*SDRAM*/) << 0x20;
  }
  if ((uVar9 & 0x7ff00000) == 0x7ff00000) {
    return (ulonglong)(uVar5 & 0x80000000/*SDRAM*/ | 0x7ff00000) << 0x20;
  }
  uVar9 = uVar9 | uVar5 & 0x80000000/*SDRAM*/;
LAB_10544310:
  return CONCAT44(uVar9,uVar10);
}
