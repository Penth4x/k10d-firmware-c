/* @k10d multiply_fixed_point_values_105445a2 @ 0x105445a2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * purpose:
 *   Performs fixed-point multiplication of two 32-bit values with rounding and overflow
 *   handling.
 * summary:
 *   The function takes four parameters representing two 32-bit fixed-point numbers
 *   (param_1/param_2 and param_3/param_4) and computes their product. It handles special
 *   cases for zero, infinity, and NaN values, returning -1 for invalid inputs. The core
 *   logic performs the multiplication with proper sign handling, rounding, and overflow
 *   detection, returning a 64-bit result in r4/r5.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x10544616) */
/* WARNING: Removing unreachable block (ram,0x1054465c) */
/* WARNING: Removing unreachable block (ram,0x10544660) */
/* WARNING: Removing unreachable block (ram,0x10544674) */

longlong multiply_fixed_point_values_105445a2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  sbyte sVar17;
  uint uVar16;
  
  uVar14 = (param_1 ^ param_3) & 0x80000000/*SDRAM*/;
  uVar12 = (param_1 & 0x7fffffff) >> 0x14;
  if (uVar12 == 0) {
    iVar13 = (int)(param_3 << 1) >> 0x15;
    if (iVar13 == 0) {
      return -1;
    }
    if (iVar13 != -1) goto LAB_10544576;
  }
  else {
    if (uVar12 == 0x7ff) {
      if ((param_1 & 0xfffff) != 0 || param_2 != 0) {
        return -1;
      }
      if ((int)(param_3 << 1) >> 0x15 == -1) {
        return -1;
      }
LAB_10544598:
      return (ulonglong)(uVar14 | 0x7ff00000) << 0x20;
    }
    uVar8 = (param_3 & 0x7fffffff) >> 0x14;
    if (uVar8 == 0) goto LAB_10544598;
    if (uVar8 != 0x7ff) {
      uVar11 = (param_3 & 0xfffff) << 10 | param_4 >> 0x16;
      uVar2 = (param_1 & 0xfffff) << 10 | param_2 >> 0x16 | 0x40000000;
      param_2 = param_2 * 0x400;
      uVar7 = uVar2;
      uVar10 = param_2;
      if (param_4 * 0x400 != 0) {
        uVar7 = param_4 * -0x400;
        uVar9 = (uint)((ulonglong)(CONCAT44(-(uint)(param_4 * 0x400 != 0) - uVar11,uVar7) << 2) >>
                      0x20);
        lVar5 = ((ulonglong)uVar7 & 0x3fffffff) * 4 * (ulonglong)uVar2 +
                (((ulonglong)uVar7 & 0x3fffffff) * 4 * (ulonglong)param_2 >> 0x20);
        uVar6 = (uint)((ulonglong)lVar5 >> 0x20);
        lVar3 = (ulonglong)uVar9 * (ulonglong)param_2;
        uVar1 = (uint)((ulonglong)lVar3 >> 0x20);
        uVar7 = (uint)CARRY4((uint)lVar5,(uint)lVar3);
        uVar10 = uVar1 + uVar6;
        lVar3 = (ulonglong)uVar9 * (ulonglong)uVar2 +
                (ulonglong)CONCAT14(CARRY4(uVar1,uVar6) || CARRY4(uVar10,uVar7),uVar10 + uVar7);
        uVar7 = (uint)((ulonglong)lVar3 >> 0x20);
        sVar17 = 9;
        if (-1 < (int)(uVar7 * 2)) {
          sVar17 = 8;
        }
        uVar9 = ((uint)lVar3 >> sVar17) + 1;
        uVar10 = uVar9 << sVar17;
        uVar7 = (uVar7 & 0x7fffffff) + (uint)((0U >> sVar17 & uVar9) != 0);
        if ((uVar9 & 1) != 0) {
          uVar11 = uVar11 << 2 | (param_4 & 0x3fffff) >> 0x14;
          lVar3 = (ulonglong)(param_4 << 0xc) * (ulonglong)uVar10;
          uVar9 = (uint)((ulonglong)lVar3 >> 0x20);
          if (lVar3 != 0) {
            uVar9 = uVar9 | 1;
          }
          lVar3 = (ulonglong)(param_4 << 0xc) * (ulonglong)uVar7 + (ulonglong)uVar9;
          uVar16 = (uint)lVar3;
          uVar15 = (uint)((ulonglong)lVar3 >> 0x20);
          lVar3 = (ulonglong)uVar11 * (ulonglong)uVar10;
          uVar4 = (uint)lVar3;
          uVar6 = (uint)((ulonglong)lVar3 >> 0x20);
          uVar9 = (uint)CARRY4(uVar16,uVar4);
          uVar1 = uVar6 + uVar15;
          lVar3 = (ulonglong)uVar11 * (ulonglong)uVar7 +
                  (ulonglong)CONCAT14(CARRY4(uVar6,uVar15) || CARRY4(uVar1,uVar9),uVar1 + uVar9);
          uVar11 = (uint)lVar3 | (uint)(uVar16 + uVar4 != 0);
          if (((int)((int)((ulonglong)lVar3 >> 0x20) + uVar7 + (uint)CARRY4(uVar11,uVar10)) <
               (int)uVar2) || (-1 < (int)(param_2 - (uVar11 + uVar10)))) {
            sVar17 = 10;
            if (-1 < (int)(uVar7 * 2)) {
              sVar17 = 9;
            }
            uVar11 = (uVar10 >> sVar17) + 1;
            uVar7 = (uVar7 & 0x7fffffff) + (uint)((0U >> sVar17 & uVar11) != 0);
            uVar10 = uVar11 << sVar17;
          }
        }
      }
      iVar13 = (uVar12 - uVar8) + 0x3fe;
      if (0 < iVar13) {
        if (iVar13 < 0x7ff) {
          return CONCAT44((uVar7 & 0x1fffffff) >> 9 | iVar13 * 0x100000 | uVar14,
                          uVar10 >> 9 | uVar7 << 0x17);
        }
        return (ulonglong)(uVar14 | 0x7ff00000) << 0x20;
      }
      return (ulonglong)uVar14 << 0x20;
    }
  }
  if (param_4 != 0 || (param_3 & 0xfffff) != 0) {
    return -1;
  }
LAB_10544576:
  return (ulonglong)uVar14 << 0x20;
}
