/* @k10d normalize_fixed_point_value_10546d6a @ 0x10546d6a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int normalize_fixed_point_value_10546d6a(uint *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r4;
  uint32_t extraout_r4_00;
  uint32_t extraout_r4_01;
  int iVar4;
  uint extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  uint *puVar5;
  uint64_t uVar6;
  uint uStack_20;
  uint uStack_1c;
  
  if ((*(ushort *)param_1 & 0x7ff0) == 0) {
    *(uint16_t *)param_1 = 0;
    iVar2 = 0;
  }
  else {
    iVar2 = ((int)((*(ushort *)param_1 & 0x7ff0) - 0x3ff0) >> 4) * 0x4d10 >> 0x10;
    uVar3 = abs_int(iVar2);
    puVar5 = &DAT_1062235c;
    uStack_1c = 0;
    uStack_20 = 0x3ff00000;
    for (; uVar3 != 0; uVar3 = (int)uVar3 >> 1) {
      if ((uVar3 & 1) != 0) {
        multiply_two_floats(uStack_20,uStack_1c,*puVar5,puVar5[1]);
        uStack_20 = extraout_r4;
        uStack_1c = extraout_r5;
      }
      puVar5 = puVar5 + 2;
    }
    if (iVar2 < 0) {
      multiply_two_floats(*param_1,param_1[1],uStack_20,uStack_1c);
      uVar6 = CONCAT44(extraout_r4_00,extraout_r5_00);
    }
    else {
      uVar6 = multiply_fixed_point_values_105445a2(*param_1,param_1[1],uStack_20,uStack_1c);
    }
    uStack_20 = (uStack_20 & ~(0xffffULL << 0)) | ((((uint64_t)((ushort)((ulonglong)uVar6 >> 0x30))) & 0xffffULL) << 0);
    if (((uint16_t)((uint64_t)(uStack_20) >> 0)) < 0x4024) {
      while( true ) {
        if (0x3fef < ((uint16_t)((uint64_t)(uStack_20) >> 0))) break;
        multiply_two_floats((uint)((ulonglong)uVar6 >> 0x20),(uint)uVar6,0x40240000,0);
        uVar6 = CONCAT44(extraout_r4_01,extraout_r5_01);
        uStack_20 = (uStack_20 & ~(0xffffULL << 0)) | ((((uint64_t)((ushort)((uint)extraout_r4_01 >> 0x10))) & 0xffffULL) << 0);
        iVar2 = iVar2 + -1;
      }
    }
    else {
      do {
        uStack_20 = (uint)((ulonglong)uVar6 >> 0x20);
        uStack_1c = (uint)uVar6;
        uVar6 = multiply_fixed_point_values_105445a2(uStack_20,uStack_1c,0x40240000,0);
        uStack_20 = (uStack_20 & ~(0xffffULL << 0)) | ((((uint64_t)((ushort)((ulonglong)uVar6 >> 0x30))) & 0xffffULL) << 0);
        iVar2 = iVar2 + 1;
      } while (0x4023 < ((uint16_t)((uint64_t)(uStack_20) >> 0)));
    }
    uStack_20 = (uint)((ulonglong)uVar6 >> 0x20);
    uStack_1c = (uint)uVar6;
    uVar3 = uStack_20 >> 0x10;
    uStack_20 = uStack_20 & 0xfffff | 0x100000;
    iVar4 = ((int)((uVar3 & 0x7ff0) - 0x3ff0) >> 4) + 4;
    bVar1 = (byte)iVar4;
    uStack_20 = uStack_20 << (bVar1 & 0xf);
    *param_1 = uStack_20;
    *param_1 = uStack_20 | uStack_1c >> (0x20U - iVar4 & 0x1f);
    param_1[1] = uStack_1c << (bVar1 & 0xf);
  }
  return iVar2;
}
