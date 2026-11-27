/* @k10d compute_exposure_apex_values @ 0x1052ee84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 290_display_settings_init (unit names are model-proposed)
 * purpose:
 *   Computes and stores APEX exposure parameters (shutter, aperture, EV) into a struct
 *   based on metering data and mode.
 * summary:
 *   The function takes a pointer to an exposure struct (param_1) and calculates values for
 *   offsets 0x00-0x16. It uses a lookup table (DAT_105fa8cc) for shutter speeds (param_6)
 *   and a mode-dependent table (param_7) to scale the values. The calculations involve
 *   fixed-point arithmetic (shifts by 0xd) typical for APEX (base-2) exposure values. It
 *   also handles clamping of values against a limit (param_5) and stores intermediate
 *   results in the struct.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_exposure_apex_values(uint *param_1,int param_2,ushort *param_3,uint param_4,uint param_5,byte param_6,
                 uint8_t param_7,byte param_8,byte param_9,byte param_10,char param_11,
                 char param_12)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uintptr_t sp;
  ushort *puStack_4c;
  uint local_40 [4];
  uint local_30 [4];
  uint local_20 [4];
  ushort auStack_10 [4];
  
  iVar5 = get_or_init_sram_buffer_1052c5b8();
  uVar2 = 0x2000;
  uVar3 = (uint)param_6;
  if ((0x47 < uVar3) && (uVar3 < 0x54)) {
    uVar2 = (uint)*(ushort *)(&DAT_105fa8cc/*ROM*/ + (uVar3 - 0x48) * 2);
  }
  *(ushort *)(param_1 + 0x13) = *param_3;
  *(ushort *)((int)param_1 + 0x4e) = param_3[1];
  *(ushort *)(param_1 + 0x14) = param_3[2];
  *(ushort *)((int)param_1 + 0x52) = param_3[3];
  switch(param_7) {
  case 0:
    iVar8 = 0x38;
    break;
  case 1:
    iVar8 = 0x40;
    break;
  case 2:
    iVar8 = 0x44;
    break;
  case 3:
    iVar8 = 0x48;
    break;
  case 4:
    iVar8 = 0x4c;
    break;
  case 5:
    iVar8 = 0x50;
    break;
  case 6:
    iVar8 = 0x54;
    break;
  case 7:
    iVar8 = 0x58;
    break;
  case 8:
    iVar8 = 0x5c;
    break;
  case 9:
    iVar8 = 0x38;
    break;
  default:
    iVar8 = 0x40;
    break;
  case 0xc:
    auStack_10[0] = *(ushort *)(DAT_105fa136/*ROM*/ + (uint)param_8 * 2) >> 5;
    auStack_10[1] = 0x100;
    auStack_10[2] = 0x100;
    uVar1 = *(ushort *)(DAT_105fa1e8/*ROM*/ + (uint)param_8 * 2);
    goto LAB_1052ef80;
  case 0xd:
    auStack_10[0] = *(ushort *)(DAT_105fa136/*ROM*/ + (uint)param_9 * 2) >> 5;
    auStack_10[1] = 0x100;
    auStack_10[2] = 0x100;
    uVar1 = *(ushort *)(DAT_105fa1e8/*ROM*/ + (uint)param_9 * 2);
    goto LAB_1052ef80;
  case 0xe:
    auStack_10[0] = *(ushort *)(DAT_105fa136/*ROM*/ + (uint)param_10 * 2) >> 5;
    auStack_10[1] = 0x100;
    auStack_10[2] = 0x100;
    uVar1 = *(ushort *)(DAT_105fa1e8/*ROM*/ + (uint)param_10 * 2);
LAB_1052ef80:
    auStack_10[3] = uVar1 >> 5;
    puStack_4c = auStack_10;
    goto LAB_1052ef8c;
  }
  puStack_4c = *(ushort **)(iVar8 + iVar5);
LAB_1052ef8c:
  if (param_11 != '\0') {
    puStack_4c = *(ushort **)(iVar5 + 0x38);
  }
  if (param_12 == '\0') {
    uVar3 = ((param_2 * (uint)*param_3 >> 0xd) * uVar2 >> 0xd) * (uint)*puStack_4c >> 8;
    local_40[1] = ((param_2 * (uint)param_3[1] >> 0xd) * uVar2 >> 0xd) * (uint)puStack_4c[1] >> 8;
    local_40[2] = ((param_2 * (uint)param_3[2] >> 0xd) * uVar2 >> 0xd) * (uint)puStack_4c[2] >> 8;
    local_40[3] = ((param_2 * (uint)param_3[3] >> 0xd) * uVar2 >> 0xd) * (uint)puStack_4c[3] >> 8;
  }
  else {
    uVar3 = (param_2 * (uint)*param_3 >> 0xd) * uVar2 >> 0xd;
    local_40[1] = (param_2 * (uint)param_3[1] >> 0xd) * uVar2 >> 0xd;
    local_40[2] = (param_2 * (uint)param_3[2] >> 0xd) * uVar2 >> 0xd;
    local_40[3] = (param_2 * (uint)param_3[3] >> 0xd) * uVar2 >> 0xd;
  }
  *(short *)(param_1 + 4) = (short)((uVar3 << 0xd) / local_40[1]);
  *(short *)((int)param_1 + 0x12) = (short)((local_40[1] << 0xd) / local_40[1]);
  *(short *)(param_1 + 5) = (short)((local_40[2] << 0xd) / local_40[1]);
  *(short *)((int)param_1 + 0x16) = (short)((local_40[3] << 0xd) / local_40[1]);
  uVar2 = param_4 >> 4;
  local_40[0] = uVar2 * uVar3 >> 9;
  local_40[1] = uVar2 * local_40[1] >> 9;
  local_40[2] = uVar2 * local_40[2] >> 9;
  local_40[3] = uVar2 * local_40[3] >> 9;
  *param_1 = local_40[0];
  uVar2 = 0;
  param_1[1] = local_40[1];
  param_1[2] = local_40[2];
  param_1[3] = local_40[3];
  do {
    local_20[uVar2] = 0;
    uVar3 = local_40[uVar2];
    if (uVar3 < param_5) {
      if (uVar3 < 0x2000) {
        local_20[uVar2] = uVar3;
        local_30[uVar2] = 0x2000;
      }
      else {
        local_30[uVar2] = uVar3;
        local_20[uVar2] = 0x2000;
      }
    }
    else {
      iVar4 = 1;
      uVar3 = (uVar3 << 10) / param_5;
      iVar8 = 0;
      iVar5 = 0;
      iVar6 = 0;
      iVar7 = 0;
      do {
        iVar8 = iVar8 + uVar3;
        iVar5 = iVar5 + uVar3;
        iVar6 = iVar6 + uVar3;
        iVar4 = iVar4 + -1;
        iVar7 = iVar7 + uVar3;
      } while (-1 < iVar4);
      local_20[uVar2] = iVar6 + iVar7 + iVar8 + iVar5;
      local_30[uVar2] = param_5;
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  param_1[6] = local_30[0];
  param_1[7] = local_30[1];
  param_1[8] = local_30[2];
  param_1[9] = local_30[3];
  param_1[0x10] = local_20[1];
  if (param_12 == '\0') {
    param_1[0xc] = local_20[0];
    param_1[0xd] = local_20[1];
    param_1[0xe] = local_20[2];
    param_1[0xf] = local_20[3];
  }
  else {
    param_1[0xc] = local_20[0] * *puStack_4c >> 8;
    param_1[0xd] = local_20[1] * puStack_4c[1] >> 8;
    param_1[0xe] = local_20[2] * puStack_4c[2] >> 8;
    param_1[0xf] = local_20[3] * puStack_4c[3] >> 8;
  }
  uVar3 = param_4 >> 0xd & 0xff;
  uVar2 = 0x50;
  if (uVar3 < 0x51) {
    uVar2 = uVar3;
  }
  *(uint16_t *)(param_1 + 0x15) = *(uint16_t *)(&DAT_105fa828/*ROM*/ + uVar2 * 2);
  return;
}
