/* @k10d compute_aperture_scale_factors @ 0x104edda4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calculates aperture-related scaling coefficients and writes them to a parameter buffer
 *   based on lens data and mode.
 * summary:
 *   The function retrieves lens data via get_or_init_sram_buffer_1052c5b8 and performs
 *   fixed-point arithmetic (shifting by 0xd) to derive scaling factors from offsets
 *   0x18-0x3c of the lens structure. It branches on a mode field at param_3+0x1c to select
 *   different calculation paths or virtual method calls (compute_awb_gain_and_status,
 *   scale_sensor_readings_by_gain). The resulting values are stored in param_5 and passed
 *   to copy_two_point_arrays_to_struct, suggesting it prepares aperture or exposure scaling
 *   parameters for the image pipeline or metering subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ede68) overlaps instruction at (ram,0x104ede66)
    */

void compute_aperture_scale_factors(int param_1,ushort *param_2,int param_3,int param_4,ushort *param_5)

{
  struct {
    ushort uStack_9c;
    ushort uStack_9a;
    ushort uStack_98;
    ushort uStack_96;
    uint16_t uStack_94;
    uint16_t uStack_92;
    uint16_t uStack_90;
    uint16_t uStack_8e;
    ushort uStack_8c;
    short sStack_8a;
    short sStack_88;
    short sStack_86;
  } _cfg_9c;
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  short *psVar6;
  uintptr_t sp;
  int *piVar7;
  uint8_t auStack_c8 [8];
  int aiStack_84 [6];
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint16_t uStack_68;
  uint16_t uStack_66;
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
  
  piVar7 = (int *)auStack_c8;
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
  iVar3 = get_or_init_sram_buffer_1052c5b8();
  iVar2 = *(int *)(param_3 + 0x58);
  uVar5 = *(uint *)(iVar2 + 0x40);
  _cfg_9c.uStack_94 = 0x2000;
  _cfg_9c.uStack_92 = 0x2000;
  _cfg_9c.uStack_90 = 0x2000;
  if (iVar2 == 0) {
    _cfg_9c.uStack_8e = 0x2000;
    _cfg_9c.uStack_9c = param_5[0xd];
    _cfg_9c.uStack_9a = param_5[0xe];
    _cfg_9c.uStack_98 = param_5[0xf];
    _cfg_9c.uStack_96 = param_5[0x10];
  }
  else {
    _cfg_9c.uStack_9c = (ushort)(((uint)(*(int *)(iVar2 + 0x30) << 0xd) / *(uint *)(iVar2 + 0x34) & 0xffff)
                         * uVar5 >> 0xd);
    _cfg_9c.uStack_9a = (ushort)(((*(uint *)(iVar2 + 0x34) << 0xd) / *(uint *)(iVar2 + 0x34) & 0xffff) *
                         uVar5 >> 0xd);
    _cfg_9c.uStack_98 = (ushort)(((uint)(*(int *)(iVar2 + 0x38) << 0xd) / *(uint *)(iVar2 + 0x34) & 0xffff)
                         * uVar5 >> 0xd);
    _cfg_9c.uStack_96 = (ushort)(((uint)(*(int *)(iVar2 + 0x3c) << 0xd) / *(uint *)(iVar2 + 0x34) & 0xffff)
                         * uVar5 >> 0xd);
    _cfg_9c.uStack_94 = (uint16_t)((uint)(*(int *)(iVar2 + 0x18) << 0xd) / *(uint *)(iVar2 + 0x1c));
    _cfg_9c.uStack_92 = (uint16_t)((*(uint *)(iVar2 + 0x1c) << 0xd) / *(uint *)(iVar2 + 0x1c));
    _cfg_9c.uStack_90 = (uint16_t)((uint)(*(int *)(iVar2 + 0x20) << 0xd) / *(uint *)(iVar2 + 0x1c));
    _cfg_9c.uStack_8e = (uint16_t)((uint)(*(int *)(iVar2 + 0x24) << 0xd) / *(uint *)(iVar2 + 0x1c));
  }
  psVar6 = *(short **)(iVar3 + 0x38);
  _cfg_9c.uStack_8c = *psVar6 << 5;
  _cfg_9c.sStack_8a = psVar6[1] << 5;
  _cfg_9c.sStack_88 = psVar6[2] << 5;
  _cfg_9c.sStack_86 = psVar6[3] << 5;
  *piVar7 = param_3;
  piVar7[1] = param_4;
  populate_struct_from_sources(param_1,(int)aiStack_84,&_cfg_9c.uStack_9c,param_2,*piVar7,piVar7[1]);
  switch(*(uint32_t *)(param_3 + 0x1c)) {
  case 0:
    puVar4 = *(ushort **)(iVar3 + 0x3c);
    uStack_6c = (uint16_t)((uint)_cfg_9c.uStack_9c * (uint)*puVar4 >> 0xd);
    uStack_6a = (uint16_t)((uint)_cfg_9c.uStack_9a * (uint)puVar4[1] >> 0xd);
    uStack_68 = (uint16_t)((uint)_cfg_9c.uStack_98 * (uint)puVar4[2] >> 0xd);
    uStack_66 = (uint16_t)((uint)_cfg_9c.uStack_96 * (uint)puVar4[3] >> 0xd);
    compute_awb_gain_and_status(param_1 + 4,aiStack_84,param_5);
    goto LAB_104ee2f8;
  case 1:
    puVar4 = *(ushort **)(iVar3 + 0x40);
    *piVar7 = (int)param_5;
    break;
  case 2:
    puVar4 = *(ushort **)(iVar3 + 0x44);
    *piVar7 = (int)param_5;
    break;
  case 3:
    puVar4 = *(ushort **)(iVar3 + 0x48);
    *piVar7 = (int)param_5;
    break;
  case 4:
    puVar4 = *(ushort **)(iVar3 + 0x4c);
    *piVar7 = (int)param_5;
    break;
  case 5:
    puVar4 = *(ushort **)(iVar3 + 0x50);
    *piVar7 = (int)param_5;
    break;
  case 6:
    puVar4 = *(ushort **)(iVar3 + 0x54);
    *piVar7 = (int)param_5;
    break;
  case 7:
    puVar4 = *(ushort **)(iVar3 + 0x58);
    *piVar7 = (int)param_5;
    break;
  case 8:
    puVar4 = *(ushort **)(iVar3 + 0x5c);
    *piVar7 = (int)param_5;
    break;
  case 9:
    param_5[4] = (ushort)((uint)_cfg_9c.uStack_9c * (uint)*param_5 >> 0xd);
    param_5[5] = (ushort)((uint)_cfg_9c.uStack_9a * (uint)param_5[1] >> 0xd);
    param_5[6] = (ushort)((uint)_cfg_9c.uStack_98 * (uint)param_5[2] >> 0xd);
    param_5[7] = (ushort)((uint)_cfg_9c.uStack_96 * (uint)param_5[3] >> 0xd);
    param_5[8] = 0;
    goto LAB_104ee2f8;
  case 0xc:
  case 0xd:
  case 0xe:
    scale_sensor_readings_by_gain((cls_105fa760 *)(param_1 + 0x3128),aiStack_84,param_5);
    goto LAB_104ee2f8;
  default:
  case 10:
  case 0xb:
    param_5[4] = _cfg_9c.uStack_9c;
    param_5[5] = _cfg_9c.uStack_9a;
    param_5[6] = _cfg_9c.uStack_98;
    param_5[7] = _cfg_9c.uStack_96;
    param_5[8] = 0xffff;
    goto LAB_104ee2f8;
  }
  compute_ratio_of_three_arrays(param_1,&_cfg_9c.uStack_8c,&_cfg_9c.uStack_9c,puVar4,*piVar7);
LAB_104ee2f8:
  if (*(char *)(param_3 + 0x60) != '\0') {
    uVar1 = (ushort)(uVar5 >> 5);
    param_5[4] = uVar1;
    param_5[5] = uVar1;
    param_5[6] = uVar1;
    param_5[7] = uVar1;
  }
  *piVar7 = (int)param_5;
  copy_two_point_arrays_to_struct(param_1,&_cfg_9c.uStack_9c,&_cfg_9c.uStack_94,(short)uVar5,*piVar7);
  return;
}
