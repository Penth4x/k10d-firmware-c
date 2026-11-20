/* @k10d parse_float_string_to_fixed @ 0x10546978
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 294_runtime_lib_fatfs_lens_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10546c1e) overlaps instruction at (ram,0x10546c1c)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong parse_float_string_to_fixed(byte *param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint32_t extraout_r4;
  uint extraout_r4_00;
  uint extraout_r4_01;
  uint extraout_r4_02;
  int iVar5;
  uint extraout_r4_03;
  byte bVar7;
  uint extraout_r5;
  void *extraout_r5_00;
  uint extraout_r5_01;
  uint extraout_r5_02;
  int iVar6;
  uint extraout_r5_03;
  byte *pbVar8;
  ushort uVar9;
  int iVar10;
  short *psVar11;
  uint uVar12;
  bool bVar13;
  int iStack_30;
  uint32_t uStack_28;
  uint uStack_24;
  
  while (((&DAT_106220f1)[*param_1] & 4) != 0) {
    param_1 = param_1 + 1;
  }
  bVar2 = false;
  if (*param_1 == 0x2d) {
    bVar2 = true;
LAB_105469b2:
    param_1 = param_1 + 1;
    bVar7 = *param_1;
  }
  else {
    if (*param_1 == 0x2b) goto LAB_105469b2;
    bVar7 = *param_1;
  }
  if ((((&DAT_106220f1)[bVar7] & 0x20) != 0) ||
     ((*param_1 == 0x2e && (((&DAT_106220f1)[param_1[1]] & 0x20) != 0)))) {
    uVar12 = 0;
    uVar4 = 0;
    iStack_30 = 0;
    bVar3 = false;
    for (; *param_1 == 0x30; param_1 = param_1 + 1) {
    }
    iVar10 = 0;
    while (iVar10 < 9) {
      if (((&DAT_106220f1)[*param_1] & 0x20) == 0) {
        if ((*param_1 != 0x2e) || (bVar3)) break;
        bVar3 = true;
        param_1 = param_1 + 1;
        iStack_30 = iVar10;
        if (iVar10 == 0) {
          bVar3 = true;
          for (; *param_1 == 0x30; param_1 = param_1 + 1) {
            iStack_30 = iStack_30 + -1;
          }
        }
      }
      else {
        uVar12 = (uVar12 * 10 + (uint)*param_1) - 0x30;
        iVar10 = iVar10 + 1;
        param_1 = param_1 + 1;
      }
    }
    do {
      if (0x12 < iVar10) goto LAB_10546ad2;
      if (((&DAT_106220f1)[*param_1] & 0x20) == 0) {
        if ((*param_1 != 0x2e) || (bVar3)) goto LAB_10546ad2;
        bVar3 = true;
        iStack_30 = iVar10;
      }
      else {
        uVar4 = (uVar4 * 10 + (uVar12 >> 0x1d)) - ((int)uVar12 >> 0x1f);
        uVar1 = uVar12 * 10;
        if (uVar1 <= uVar12 * 8 && uVar12 * -2 != 0) {
          uVar4 = uVar4 + 1;
        }
        uVar12 = (uVar1 + *param_1) - 0x30;
        if (uVar12 < uVar1) {
          uVar4 = uVar4 + 1;
        }
        iVar10 = iVar10 + 1;
      }
      param_1 = param_1 + 1;
    } while( true );
  }
  uStack_28 = 0;
  uStack_24 = 0;
  goto LAB_10546cc6;
LAB_10546ad2:
  bVar7 = 0x30;
  do {
    if (((&DAT_106220f1)[*param_1] & 0x20) == 0) {
      if ((*param_1 != 0x2e) || (bVar3)) break;
      bVar3 = true;
      iStack_30 = iVar10;
    }
    else {
      iVar10 = iVar10 + 1;
      bVar7 = bVar7 | *param_1;
    }
    param_1 = param_1 + 1;
  } while( true );
  if (bVar7 != 0x30) {
    uVar12 = uVar12 | 1;
  }
  if (uVar4 == 0) {
    compute_lens_fw_crc32(uVar12);
    uStack_24 = extraout_r5_02;
    uStack_28 = extraout_r4_02;
  }
  else {
    compute_lens_fw_crc32(uVar4);
    uStack_28 = (uStack_28 & ~(((uint64_t)0xffff) << 0)) | ((((uint64_t)((short)((uint)extraout_r4 >> 0x10))) & ((uint64_t)0xffff)) << 0);
    uStack_28 = (uStack_28 & ~(((uint64_t)0xffff) << 16)) | ((((uint64_t)((uint16_t)extraout_r4)) & ((uint64_t)0xffff)) << 16);
    uStack_28 = CONCAT22(((uint16_t)((uint64_t)(uStack_28) >> 0)) + 0x200,((uint16_t)((uint64_t)(uStack_28) >> 16)));
    compute_lens_fw_crc32(uVar12);
    add_two_64_bit_integers(extraout_r4_00,extraout_r5_00,uStack_28,extraout_r5);
    uStack_24 = extraout_r5_01;
    uStack_28 = extraout_r4_01;
  }
  uVar12 = 0;
  if ((*param_1 == 0x65) || (*param_1 == 0x45)) {
    pbVar8 = param_1 + 1;
    bVar13 = false;
    if (*pbVar8 == 0x2d) {
      bVar13 = true;
LAB_10546b7c:
      pbVar8 = param_1 + 2;
      bVar7 = *pbVar8;
    }
    else {
      if (*pbVar8 == 0x2b) goto LAB_10546b7c;
      bVar7 = *pbVar8;
    }
    if (((&DAT_106220f1)[bVar7] & 0x20) == 0) goto LAB_10546bd4;
    uVar12 = *pbVar8 - 0x30;
    do {
      pbVar8 = pbVar8 + 1;
      if (((&DAT_106220f1)[*pbVar8] & 0x20) == 0) {
        if (bVar13) {
          uVar12 = -uVar12;
        }
        goto LAB_10546bd4;
      }
      uVar12 = (uVar12 * 10 + (uint)*pbVar8) - 0x30;
    } while (uVar12 < 0xccccccd);
LAB_10546c8a:
    _DAT_80014a70/*SDRAM*/ = 0x21;
    if (bVar13) {
      uStack_28 = 0;
      uStack_24 = 0;
    }
    else {
      uStack_28 = 0x7ff00000;
      if (bVar2) {
        uStack_28 = 0xfff00000;
      }
      uStack_24 = 0;
    }
  }
  else {
LAB_10546bd4:
    if (iVar10 != 0) {
      iVar6 = iVar10;
      if (bVar3) {
        iVar6 = iStack_30;
      }
      iVar5 = 0x13;
      if (iVar10 < 0x14) {
        iVar5 = iVar10;
      }
      uVar12 = uVar12 + (iVar6 - iVar5);
      if (uVar12 != 0) {
        uVar9 = 0x3ff0;
        bVar13 = -1 < (int)uVar12;
        if (bVar13) {
          psVar11 = (short *)0x106222a8;
        }
        else {
          uVar12 = -uVar12;
          psVar11 = &DAT_1062223c;
        }
        bVar13 = !bVar13;
        if (0x1ff < uVar12) goto LAB_10546c8a;
        do {
          if ((uVar12 & 1) != 0) {
            multiply_two_floats(uStack_28,uStack_24,*(uint *)(psVar11 + 2),*(uint *)(psVar11 + 4));
            uStack_28 = (uStack_28 & ~(((uint64_t)0xffff) << 0)) | ((((uint64_t)((short)(extraout_r4_03 >> 0x10))) & ((uint64_t)0xffff)) << 0);
            uVar9 = ((uint16_t)((uint64_t)(uStack_28) >> 0)) + (uVar9 & 0x7ff0) + *psVar11;
            uStack_28 = extraout_r4_03 & 0x800fffff/*SDRAM*/ | 0x3ff00000;
            if ((0x7fef < uVar9) || (uStack_24 = extraout_r5_03, uVar9 == 0)) goto LAB_10546c8a;
          }
          uVar12 = uVar12 >> 1;
          psVar11 = psVar11 + 6;
        } while (uVar12 != 0);
        uStack_28 = CONCAT22(uVar9,((uint16_t)((uint64_t)(uStack_28) >> 16)));
      }
    }
    if (bVar2) {
      uStack_28 = uStack_28 ^ 0x80000000/*SDRAM*/;
    }
  }
LAB_10546cc6:
  return CONCAT44(uStack_28,uStack_24);
}
