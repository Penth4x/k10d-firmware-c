/* @k10d multiply_two_floats @ 0x105449cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

longlong multiply_two_floats(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar11 = (param_1 ^ param_3) & 0x80000000/*SDRAM*/;
  uVar7 = (param_1 & 0x7fffffff) >> 0x14;
  if (uVar7 == 0) {
    if ((int)(param_3 << 1) >> 0x15 != -1) {
LAB_10544988:
      return (ulonglong)uVar11 << 0x20;
    }
  }
  else {
    if (uVar7 == 0x7ff) {
      if (param_2 != 0 || (param_1 & 0xfffff) != 0) {
        return -1;
      }
      iVar9 = (int)(param_3 << 1) >> 0x15;
      if (iVar9 == 0) {
        return -1;
      }
      if (iVar9 != -1) {
        return CONCAT44(param_1 & 0x7fffffff | uVar11,param_2);
      }
    }
    else {
      uVar10 = (param_3 & 0x7fffffff) >> 0x14;
      if (uVar10 == 0) goto LAB_10544988;
      if (uVar10 != 0x7ff) {
        uVar1 = (param_1 << 0xb | 0x80000000/*SDRAM*/) >> 5 | param_2 >> 0x1a;
        uVar2 = (param_3 << 0xb | 0x80000000/*SDRAM*/) >> 5 | param_4 >> 0x1a;
        lVar3 = (ulonglong)(param_4 << 6) * (ulonglong)(param_2 << 6);
        uVar8 = (uint)((ulonglong)lVar3 >> 0x20);
        if (lVar3 != 0) {
          uVar8 = uVar8 | 1;
        }
        uVar4 = (ulonglong)(param_4 << 6) * (ulonglong)uVar1 + (ulonglong)uVar8 +
                (ulonglong)uVar2 * (ulonglong)(param_2 << 6);
        uVar5 = (ulonglong)uVar2 * (ulonglong)uVar1 + (uVar4 >> 0x20);
        if (uVar5 < 0x20000000000000) {
          uVar6 = uVar5 ^ 0x10000000000000;
          bVar12 = false;
        }
        else {
          uVar6 = uVar5 >> 1;
          bVar12 = false;
          if ((uVar5 & 1) != 0) {
            uVar1 = (uint)((int)uVar4 != 0 || ((uint)uVar5 >> 1 & 1) != 0);
            bVar12 = CARRY4((uint)uVar6,uVar1);
            uVar6 = CONCAT44((int)(uVar6 >> 0x20),(uint)uVar6 + uVar1);
          }
        }
        uVar7 = (int)(uVar6 >> 0x20) + (uVar7 + uVar10 + -0x3ff) * 0x100000 + (uint)bVar12;
        if (((int)(uVar7 + 0x80100000/*SDRAM*/) < 0) && ((uVar7 & 0x7ff00000) != 0)) {
          return CONCAT44(uVar7 | uVar11,(int)uVar6);
        }
        if (0x3fe < uVar10) {
          return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
        }
        return (ulonglong)uVar11 << 0x20;
      }
    }
    if (param_4 == 0 && (param_3 & 0xfffff) == 0) {
      return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
    }
  }
  return -1;
}
