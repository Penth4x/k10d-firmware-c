/* @k10d compute_wb_gain_from_meter @ 0x104ee7c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Computes white balance gain coefficients from metering data and dispatches to a WB
 *   processing routine based on a mode selector.
 * summary:
 *   The function reads a 16-bit mode selector from param_3+0x1c and a set of metering/scene
 *   parameters from a structure pointed to by param_3+0x58. It performs fixed-point
 *   arithmetic (shifting by 0xd and dividing) to derive four gain values, which are then
 *   passed to one of several virtual method callees (populate_struct_from_sources,
 *   compute_awb_gain_and_status, compute_ratio_of_three_arrays,
 *   calculate_white_balance_gains, scale_sensor_readings_by_gain) depending on the mode.
 *   The presence of four-channel gain calculations and mode-specific branches (including
 *   cases 0x0c-0x0e which likely correspond to custom WB or flash modes) strongly suggests
 *   this is the core white balance (WB) gain computation and dispatch logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_wb_gain_from_meter(int param_1,ushort *param_2,int param_3,int param_4,ushort *param_5)

{
  struct {
    ushort uStack_9c;
    uint16_t uStack_9a;
    uint16_t uStack_98;
    uint16_t uStack_96;
  } _cfg_9c;
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ushort *puVar12;
  uintptr_t sp;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint8_t auStack_c8 [8];
  ushort auStack_94 [5];
  ushort uStack_8a;
  ushort uStack_88;
  ushort uStack_86;
  int aiStack_84 [6];
  ushort uStack_6c;
  ushort uStack_6a;
  ushort uStack_68;
  ushort uStack_66;
  uint32_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint32_t uStack_50;
  uint32_t uStack_4c;
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint32_t uStack_1c;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint32_t uStack_10;
  uint8_t uStack_c;
  uint8_t uStack_b;
  
  piVar13 = (int *)auStack_c8;
  uStack_6c = 0x100;
  uStack_6a = 0x100;
  uStack_68 = 0x100;
  uStack_66 = 0x100;
  aiStack_84[0] = -0x44;
  aiStack_84[1] = 0xffffffbc;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  aiStack_84[3] = 0x40;
  uStack_18 = 0xd;
  aiStack_84[2] = 8;
  aiStack_84[4] = 0;
  aiStack_84[5] = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = 8;
  uStack_10 = 0;
  uStack_c = 0;
  uStack_b = 0;
  iVar10 = get_or_init_sram_buffer_1052c5b8();
  iVar11 = *(int *)(param_3 + 0x58);
  iVar9 = *(int *)(iVar11 + 0x40);
  iVar5 = *(int *)(iVar11 + 0x30);
  uVar8 = *(uint *)(iVar11 + 0x34);
  iVar6 = *(int *)(iVar11 + 0x38);
  iVar7 = *(int *)(iVar11 + 0x3c);
  uVar1 = param_5[0xd];
  uVar2 = param_5[0xe];
  uVar3 = param_5[0xf];
  uVar4 = param_5[0x10];
  uVar14 = ((uint)*(ushort *)(iVar11 + 0x4c) << 0xd) / (uint)*(ushort *)(iVar11 + 0x10);
  _cfg_9c.uStack_9c = (ushort)uVar14;
  uVar15 = ((uint)*(ushort *)(iVar11 + 0x4e) << 0xd) / (uint)*(ushort *)(iVar11 + 0x12);
  _cfg_9c.uStack_9a = (uint16_t)uVar15;
  uVar16 = ((uint)*(ushort *)(iVar11 + 0x50) << 0xd) / (uint)*(ushort *)(iVar11 + 0x14);
  _cfg_9c.uStack_98 = (uint16_t)uVar16;
  uVar17 = ((uint)*(ushort *)(iVar11 + 0x52) << 0xd) / (uint)*(ushort *)(iVar11 + 0x16);
  _cfg_9c.uStack_96 = (uint16_t)uVar17;
  auStack_94[0] = 0x2000;
  auStack_94[1] = 0x2000;
  auStack_94[2] = 0x2000;
  auStack_94[3] = 0x2000;
  puVar12 = *(ushort **)(iVar10 + 0x38);
  auStack_94[4] = (ushort)((uint)*puVar12 * (uVar14 & 0xffff) >> 8);
  uStack_8a = (ushort)((uint)puVar12[1] * (uVar15 & 0xffff) >> 8);
  uStack_88 = (ushort)((uint)puVar12[2] * (uVar16 & 0xffff) >> 8);
  uStack_86 = (ushort)((uint)puVar12[3] * (uVar17 & 0xffff) >> 8);
  *piVar13 = param_3;
  piVar13[1] = param_4;
  populate_struct_from_sources(param_1,(int)aiStack_84,auStack_94 + 4,param_2,*piVar13,piVar13[1]);
  switch(*(uint32_t *)(param_3 + 0x1c)) {
  case 0:
    puVar12 = *(ushort **)(iVar10 + 0x3c);
    uStack_6c = (ushort)((uint)auStack_94[4] * (uint)*puVar12 >> 0xd);
    uStack_6a = (ushort)((uint)uStack_8a * (uint)puVar12[1] >> 0xd);
    uStack_68 = (ushort)((uint)uStack_88 * (uint)puVar12[2] >> 0xd);
    uStack_66 = (ushort)((uint)uStack_86 * (uint)puVar12[3] >> 0xd);
  case 10:
  case 0xb:
LAB_104eecf4:
    compute_awb_gain_and_status(param_1 + 4,aiStack_84,param_5);
    return;
  case 1:
    iVar5 = 0x40;
    break;
  case 2:
    puVar12 = *(ushort **)(iVar10 + 0x44);
    *piVar13 = (int)param_5;
    goto LAB_104eec56;
  case 3:
    puVar12 = *(ushort **)(iVar10 + 0x48);
    *piVar13 = (int)param_5;
    goto LAB_104eec56;
  case 4:
    puVar12 = *(ushort **)(iVar10 + 0x4c);
    goto LAB_104eebe0;
  case 5:
    iVar5 = 0x50;
    break;
  case 6:
    iVar5 = 0x54;
    break;
  case 7:
    iVar5 = 0x58;
    break;
  case 8:
    iVar5 = 0x5c;
    break;
  case 9:
    if (*(char *)(param_3 + 0x40) == '\0') {
      param_5[4] = (ushort)((uint)auStack_94[4] * (uint)*param_5 >> 0xd);
      param_5[5] = (ushort)((uint)uStack_8a * (uint)param_5[1] >> 0xd);
      param_5[6] = (ushort)((uint)uStack_88 * (uint)param_5[2] >> 0xd);
      param_5[7] = (ushort)((uint)uStack_86 * (uint)param_5[3] >> 0xd);
    }
    else {
      uStack_6c = (ushort)((((uint)(iVar5 << 0xd) / uVar8 & 0xffff) * iVar9 >> 0xd & 0xffff) *
                           (uint)uVar1 >> 0xd) >> 5;
      uStack_6a = (ushort)((((uVar8 << 0xd) / uVar8 & 0xffff) * iVar9 >> 0xd & 0xffff) * (uint)uVar2
                          >> 0xd) >> 5;
      uStack_68 = (ushort)((((uint)(iVar6 << 0xd) / uVar8 & 0xffff) * iVar9 >> 0xd & 0xffff) *
                           (uint)uVar3 >> 0xd) >> 5;
      uStack_66 = (ushort)((((uint)(iVar7 << 0xd) / uVar8 & 0xffff) * iVar9 >> 0xd & 0xffff) *
                           (uint)uVar4 >> 0xd) >> 5;
      *(uint8_t *)(param_1 + 0x3124) = *(uint8_t *)(param_3 + 0x41);
      calculate_white_balance_gains(param_1 + 0x3120,aiStack_84,param_5);
    }
    param_5[8] = 0;
    return;
  case 0xc:
  case 0xd:
  case 0xe:
    scale_sensor_readings_by_gain((cls_105fa760 *)(param_1 + 0x3128),aiStack_84,param_5);
    return;
  default:
    goto LAB_104eecf4;
  }
  puVar12 = *(ushort **)(iVar5 + iVar10);
LAB_104eebe0:
  *piVar13 = (int)param_5;
LAB_104eec56:
  compute_ratio_of_three_arrays(param_1,auStack_94,&_cfg_9c.uStack_9c,puVar12,*piVar13);
  return;
}
