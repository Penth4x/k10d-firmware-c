/* @k10d compute_exposure_ratio_table @ 0x1052e9de
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Computes four scaled exposure ratios and clamped values into a struct based on a mode
 *   index and reference table.
 * summary:
 *   The function copies four 16-bit values from param_3 into param_1. It selects a pointer
 *   to a 4-element table (either from a base address returned by
 *   get_or_init_sram_buffer_1052c5b8 or from static data at 0x105fa136/0x105fa1e8) based on
 *   param_6. It then performs fixed-point arithmetic to calculate ratios (param_2 *
 *   param_3[i] / table[i]) and stores them in param_1. Finally, it clamps these values
 *   against param_5 and 0x2000, storing the results in specific offsets of param_1. The
 *   heavy use of shifts (>> 0xd, >> 8) and the 4-element structure suggests processing of
 *   multi-zone metering or exposure calculation data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_exposure_ratio_table(uint *param_1,int param_2,ushort *param_3,uint param_4,uint param_5,
                 uint8_t param_6,byte param_7,byte param_8,byte param_9,char param_10,
                 char param_11)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uintptr_t sp;
  ushort *puStack_54;
  uint auStack_40 [4];
  uint auStack_30 [4];
  uint auStack_20 [4];
  ushort auStack_10 [4];
  
  iVar3 = get_or_init_sram_buffer_1052c5b8();
  *(ushort *)(param_1 + 0x13) = *param_3;
  *(ushort *)((int)param_1 + 0x4e) = param_3[1];
  *(ushort *)(param_1 + 0x14) = param_3[2];
  *(ushort *)((int)param_1 + 0x52) = param_3[3];
  switch(param_6) {
  case 0:
    iVar7 = 0x38;
    break;
  case 1:
    iVar7 = 0x40;
    break;
  case 2:
    iVar7 = 0x44;
    break;
  case 3:
    iVar7 = 0x48;
    break;
  case 4:
    iVar7 = 0x4c;
    break;
  case 5:
    iVar7 = 0x50;
    break;
  case 6:
    iVar7 = 0x54;
    break;
  case 7:
    iVar7 = 0x58;
    break;
  case 8:
    iVar7 = 0x5c;
    break;
  case 9:
    iVar7 = 0x38;
    break;
  default:
    iVar7 = 0x40;
    break;
  case 0xc:
    auStack_10[0] = *(ushort *)(&DAT_105fa136/*ROM*/ + (uint)param_7 * 2) >> 5;
    auStack_10[1] = 0x100;
    auStack_10[2] = 0x100;
    puStack_54 = auStack_10;
    auStack_10[3] = *(ushort *)(&DAT_105fa1e8/*ROM*/ + (uint)param_7 * 2) >> 5;
    goto code_r0x1052eae6;
  case 0xd:
    auStack_10[0] = *(ushort *)(&DAT_105fa136/*ROM*/ + (uint)param_8 * 2) >> 5;
    auStack_10[1] = 0x100;
    auStack_10[2] = 0x100;
    auStack_10[3] = *(ushort *)(&DAT_105fa1e8/*ROM*/ + (uint)param_8 * 2) >> 5;
    puStack_54 = auStack_10;
    goto code_r0x1052eae6;
  case 0xe:
    auStack_10[0] = *(ushort *)(&DAT_105fa136/*ROM*/ + (uint)param_9 * 2) >> 5;
    auStack_10[1] = 0x100;
    auStack_10[2] = 0x100;
    auStack_10[3] = *(ushort *)(&DAT_105fa1e8/*ROM*/ + (uint)param_9 * 2) >> 5;
    puStack_54 = auStack_10;
    goto code_r0x1052eae6;
  }
  puStack_54 = *(ushort **)(iVar7 + iVar3);
code_r0x1052eae6:
  if (param_10 != '\0') {
    puStack_54 = *(ushort **)(iVar3 + 0x38);
  }
  if (param_11 == '\0') {
    uVar6 = (param_2 * (uint)*param_3 >> 0xd) * (uint)*puStack_54 >> 8;
    auStack_40[1] = (param_2 * (uint)param_3[1] >> 0xd) * (uint)puStack_54[1] >> 8;
    auStack_40[2] = (param_2 * (uint)param_3[2] >> 0xd) * (uint)puStack_54[2] >> 8;
    auStack_40[3] = (param_2 * (uint)param_3[3] >> 0xd) * (uint)puStack_54[3] >> 8;
  }
  else {
    uVar6 = param_2 * (uint)*param_3 >> 0xd;
    auStack_40[1] = param_2 * (uint)param_3[1] >> 0xd;
    auStack_40[2] = param_2 * (uint)param_3[2] >> 0xd;
    auStack_40[3] = param_2 * (uint)param_3[3] >> 0xd;
  }
  *(short *)(param_1 + 4) = (short)((uVar6 << 0xd) / auStack_40[1]);
  *(short *)((int)param_1 + 0x12) = (short)((auStack_40[1] << 0xd) / auStack_40[1]);
  *(short *)(param_1 + 5) = (short)((auStack_40[2] << 0xd) / auStack_40[1]);
  *(short *)((int)param_1 + 0x16) = (short)((auStack_40[3] << 0xd) / auStack_40[1]);
  param_4 = param_4 >> 4;
  auStack_40[0] = param_4 * uVar6 >> 9;
  auStack_40[1] = param_4 * auStack_40[1] >> 9;
  auStack_40[2] = param_4 * auStack_40[2] >> 9;
  auStack_40[3] = param_4 * auStack_40[3] >> 9;
  *param_1 = auStack_40[0];
  uVar6 = 0;
  param_1[1] = auStack_40[1];
  param_1[2] = auStack_40[2];
  param_1[3] = auStack_40[3];
  do {
    auStack_20[uVar6] = 0;
    uVar1 = auStack_40[uVar6];
    if (uVar1 < param_5) {
      if (uVar1 < 0x2000) {
        auStack_20[uVar6] = uVar1;
        auStack_30[uVar6] = 0x2000;
      }
      else {
        auStack_30[uVar6] = uVar1;
        auStack_20[uVar6] = 0x2000;
      }
    }
    else {
      iVar5 = 1;
      uVar1 = (uVar1 << 10) / param_5;
      iVar3 = 0;
      iVar2 = 0;
      iVar4 = 0;
      iVar7 = 0;
      do {
        iVar3 = iVar3 + uVar1;
        iVar2 = iVar2 + uVar1;
        iVar4 = iVar4 + uVar1;
        iVar5 = iVar5 + -1;
        iVar7 = iVar7 + uVar1;
      } while (-1 < iVar5);
      auStack_20[uVar6] = iVar4 + iVar7 + iVar3 + iVar2;
      auStack_30[uVar6] = param_5;
    }
    uVar6 = uVar6 + 1 & 0xff;
  } while (uVar6 < 4);
  param_1[6] = auStack_30[0];
  param_1[7] = auStack_30[1];
  param_1[8] = auStack_30[2];
  param_1[9] = auStack_30[3];
  param_1[0x10] = auStack_20[1];
  if (param_11 == '\0') {
    param_1[0xc] = auStack_20[0];
    param_1[0xd] = auStack_20[1];
    param_1[0xe] = auStack_20[2];
    param_1[0xf] = auStack_20[3];
  }
  else {
    param_1[0xc] = auStack_20[0] * *puStack_54 >> 8;
    param_1[0xd] = auStack_20[1] * puStack_54[1] >> 8;
    param_1[0xe] = auStack_20[2] * puStack_54[2] >> 8;
    param_1[0xf] = auStack_20[3] * puStack_54[3] >> 8;
  }
  return;
}
