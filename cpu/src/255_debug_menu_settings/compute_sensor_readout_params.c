/* @k10d compute_sensor_readout_params @ 0x104ee33a
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Calculates sensor readout timing and scaling parameters based on lens and mode data.
 * summary:
 *   The function initializes a parameter block with default values (0x100, 0x2000) and
 *   computes derived values from fields in the object pointed to by param_3. It calls
 *   populate_struct_from_sources and copy_two_point_arrays_to_struct with these computed
 *   parameters, and conditionally calls a virtual method (compute_awb_gain_and_status) if a
 *   specific mode flag is zero. The logic involves scaling factors and divisions typical of
 *   sensor readout or exposure timing calculations.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x104ee3fa) overlaps instruction at (ram,0x104ee3f8)
    */

void compute_sensor_readout_params(int param_1,ushort *param_2,int param_3,int param_4,ushort *param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uintptr_t sp;
  int *piVar6;
  uint8_t auStack_c0 [8];
  ushort uStack_94;
  ushort uStack_92;
  ushort uStack_90;
  ushort uStack_8e;
  uint16_t uStack_8c;
  uint16_t uStack_8a;
  uint16_t uStack_88;
  uint16_t uStack_86;
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
  
  piVar6 = (int *)auStack_c0;
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
  uVar4 = *(uint *)(iVar2 + 0x40);
  uStack_94 = 0x2000;
  uStack_92 = 0x2000;
  uStack_90 = 0x2000;
  uStack_8e = 0x2000;
  uStack_8c = 0x2000;
  uStack_8a = 0x2000;
  uStack_88 = 0x2000;
  if (iVar2 == 0) {
    uStack_86 = 0x2000;
  }
  else {
    uStack_94 = (ushort)(((uint)(*(int *)(iVar2 + 0x30) << 0xd) / *(uint *)(iVar2 + 0x34) & 0xffff)
                         * uVar4 >> 0xd);
    uStack_92 = (ushort)(((*(uint *)(iVar2 + 0x34) << 0xd) / *(uint *)(iVar2 + 0x34) & 0xffff) *
                         uVar4 >> 0xd);
    uStack_90 = (ushort)(((uint)(*(int *)(iVar2 + 0x38) << 0xd) / *(uint *)(iVar2 + 0x34) & 0xffff)
                         * uVar4 >> 0xd);
    uStack_8e = (ushort)(((uint)(*(int *)(iVar2 + 0x3c) << 0xd) / *(uint *)(iVar2 + 0x34) & 0xffff)
                         * uVar4 >> 0xd);
    uStack_8c = (uint16_t)((uint)(*(int *)(iVar2 + 0x18) << 0xd) / *(uint *)(iVar2 + 0x1c));
    uStack_8a = (uint16_t)((*(uint *)(iVar2 + 0x1c) << 0xd) / *(uint *)(iVar2 + 0x1c));
    uStack_88 = (uint16_t)((uint)(*(int *)(iVar2 + 0x20) << 0xd) / *(uint *)(iVar2 + 0x1c));
    uStack_86 = (uint16_t)((uint)(*(int *)(iVar2 + 0x24) << 0xd) / *(uint *)(iVar2 + 0x1c));
  }
  *piVar6 = param_3;
  piVar6[1] = param_4;
  populate_struct_from_sources(param_1,(int)aiStack_84,&uStack_94,param_2,*piVar6,piVar6[1]);
  if (*(int *)(param_3 + 0x1c) == 0) {
    puVar5 = *(ushort **)(iVar3 + 0x3c);
    uStack_6c = (uint16_t)((uint)uStack_94 * (uint)*puVar5 >> 0xd);
    uStack_6a = (uint16_t)((uint)uStack_92 * (uint)puVar5[1] >> 0xd);
    uStack_68 = (uint16_t)((uint)uStack_90 * (uint)puVar5[2] >> 0xd);
    uStack_66 = (uint16_t)((uint)uStack_8e * (uint)puVar5[3] >> 0xd);
    compute_awb_gain_and_status(param_1 + 4,aiStack_84,param_5);
  }
  else if (*(int *)(param_3 + 0x1c) == 9) {
    param_5[4] = (ushort)((uint)uStack_94 * (uint)*param_5 >> 0xd);
    param_5[5] = (ushort)((uint)uStack_92 * (uint)param_5[1] >> 0xd);
    param_5[6] = (ushort)((uint)uStack_90 * (uint)param_5[2] >> 0xd);
    param_5[7] = (ushort)((uint)uStack_8e * (uint)param_5[3] >> 0xd);
    param_5[8] = 0;
  }
  else {
    param_5[4] = uStack_94 >> 5;
    param_5[5] = uStack_92 >> 5;
    param_5[6] = uStack_90 >> 5;
    param_5[7] = uStack_8e >> 5;
    param_5[8] = 0xffff;
  }
  if (*(char *)(param_3 + 0x60) != '\0') {
    uVar1 = (ushort)(uVar4 >> 5);
    param_5[4] = uVar1;
    param_5[5] = uVar1;
    param_5[6] = uVar1;
    param_5[7] = uVar1;
  }
  *piVar6 = (int)param_5;
  copy_two_point_arrays_to_struct(param_1,&uStack_94,&uStack_8c,(short)uVar4,*piVar6);
  return;
}
