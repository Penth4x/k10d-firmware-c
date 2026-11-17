/* @k10d multiply_fixed_point_values_10544412 @ 0x10544412
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x105444f0) overlaps instruction at (ram,0x105444ee)
    */

uint multiply_fixed_point_values_10544412(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  uVar5 = param_1 << 1;
  uVar6 = param_2 << 1;
  uVar1 = (param_1 & 0x7fffffff) >> 0x17;
  if (uVar1 == 0) {
    uVar6 = (param_2 & 0x7fffffff) >> 0x17;
    if (uVar6 == 0) {
      return param_1 & param_2 & 0x80000000/*SDRAM*/;
    }
    if (uVar6 != 0xff) {
      return param_2;
    }
    uVar6 = param_2 & 0x7fffff;
joined_r0x105443ec:
    if (uVar6 != 0) {
      return 0xffffffff;
    }
    return param_2;
  }
  uVar4 = (param_2 & 0x7fffffff) >> 0x17;
  if (uVar1 == 0xff) {
    if ((param_1 & 0x7fffff) != 0) {
      return 0xffffffff;
    }
    if (uVar4 != 0xff) {
      return param_1;
    }
    if ((param_2 & 0x7fffff) != 0) {
      return 0xffffffff;
    }
    if ((int)(param_1 ^ param_2) < 0) {
      return 0xffffffff;
    }
    return param_2;
  }
  if (uVar4 == 0) {
    return param_1;
  }
  if (uVar4 == 0xff) {
    uVar6 = uVar6 & 0xffffff;
    goto joined_r0x105443ec;
  }
  if (uVar5 < uVar6) {
    uVar2 = uVar4 - uVar1;
    uVar3 = uVar6;
    uVar6 = param_2;
  }
  else {
    uVar2 = uVar1 - uVar4;
    uVar3 = uVar5;
    uVar4 = uVar1;
    uVar5 = uVar6;
    uVar6 = param_1;
  }
  uVar1 = uVar3 << 7 | 0x80000000/*SDRAM*/;
  uVar5 = uVar5 << 7 | 0x80000000/*SDRAM*/;
  if ((int)uVar2 < 2) {
    uVar2 = uVar5 >> (uVar2 & 0x1f);
    if (-1 < (int)(param_2 ^ param_1)) {
LAB_10544460:
      uVar5 = uVar1 + uVar2;
      uVar4 = uVar4 + 0x80000000/*SDRAM*/ + (uint)CARRY4(uVar1,uVar2);
      if (!CARRY4(uVar1,uVar2)) {
        uVar5 = uVar5 * 2;
      }
      goto LAB_105444d2;
    }
    iVar8 = uVar1 - uVar2;
    if (iVar8 == 0) {
      return 0;
    }
    uVar5 = iVar8 * 2;
    if (-1 < iVar8) {
      iVar7 = uVar4 - 1;
      uVar1 = uVar5;
      if (uVar5 < 0x100000) {
        uVar1 = iVar8 * 0x2000;
        iVar7 = uVar4 - 0xd;
      }
      if (uVar1 < 0x4000000) {
        uVar1 = uVar1 << 6;
        iVar7 = iVar7 + -6;
      }
      if (uVar1 < 0x20000000) {
        uVar1 = uVar1 << 3;
        iVar7 = iVar7 + -3;
      }
      uVar4 = iVar7 - 1;
      uVar5 = uVar1 << 2;
      if (-1 < (int)(uVar1 << 1)) {
        uVar5 = uVar1 << 3;
        uVar4 = iVar7 - 2;
      }
    }
    iVar8 = uVar4 << 0x17;
    uVar1 = uVar5 >> 9;
    if (-1 < iVar8) {
      if ((uVar5 & 0x100) != 0) goto LAB_105444e0;
      bVar9 = false;
      goto LAB_105444e2;
    }
    uVar5 = 0;
  }
  else {
    uVar3 = 0x1a - uVar2;
    if (0x1a < (int)uVar2 || uVar3 == 0) {
      return uVar6;
    }
    uVar2 = uVar5 >> (uVar2 & 0x1f);
    if (uVar5 << ((byte)uVar3 & 0xf) != 0) {
      uVar2 = uVar2 | uVar3;
    }
    if (-1 < (int)(param_2 ^ param_1)) goto LAB_10544460;
    iVar8 = uVar1 - uVar2;
    uVar5 = iVar8 * 2;
    if (-1 < iVar8) {
      uVar5 = iVar8 * 4;
      uVar4 = uVar4 - 1;
    }
LAB_105444d2:
    iVar8 = uVar4 << 0x17;
    bVar9 = (uVar5 & 0x100) != 0;
    uVar1 = uVar5 >> 9;
    if ((bVar9) && ((uVar5 & 0xff) == 0)) {
LAB_105444e0:
      bVar9 = (uVar1 & 1) != 0;
    }
LAB_105444e2:
    uVar5 = uVar1 + iVar8 + (uint)bVar9;
    uVar1 = uVar5 >> 0x17;
    if ((uVar1 != 0) && (uVar6 = uVar6 & 0x80000000/*SDRAM*/, uVar1 != 0xff)) goto code_r0x105444f2;
    uVar5 = uVar1 << 0x17;
  }
  uVar6 = uVar6 & 0x80000000/*SDRAM*/;
code_r0x105444f2:
  return uVar5 | uVar6;
}
