/* @k10d process_ae_metering_update @ 0x104c94dc
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 235_settings_menu (unit names are model-proposed)
 * purpose:
 *   Updates auto-exposure metering state by reading sensor values and computing exposure
 *   adjustments.
 * summary:
 *   The function copies state from param_3 to param_4 and calls
 *   compute_buffer_size_and_init to check a condition. If the check fails, it reads 16-bit
 *   values from two pointers (param_3+0x2c and param_4+0x2c) using
 *   return_first_word_1045c514/1045c51e, processes them through abs_uint32 and
 *   normalize_fixed_point_value_105448ac, and constructs a stack structure with computed
 *   ratios. It finally calls compute_six_fixed_point_values with these parameters and
 *   stores the result in param_4+0x210. The use of 16-bit sensor reads and ratio
 *   calculations suggests AE metering logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

int process_ae_metering_update(int param_1,void *param_2,int param_3,int param_4,int param_5)

{
  struct {
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint16_t uStack_48;
    uint16_t uStack_46;
    uint16_t uStack_44;
    uint16_t uStack_42;
    uint16_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint16_t uStack_2c;
    uint16_t uStack_2a;
    uint16_t uStack_28;
    uint16_t uStack_26;
    uint16_t uStack_24;
    uint uStack_20;
  } _cfg_58;
  int iVar1;
  uint32_t *puVar2;
  uint32_t extraout_r4;
  uint32_t extraout_r4_00;
  uint32_t extraout_r4_01;
  uint32_t extraout_r4_02;
  uint uVar3;
  uint32_t uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint32_t extraout_r5_01;
  uint32_t extraout_r5_02;
  uint uVar8;
  uint32_t *puVar9;
  uintptr_t sp;
  uint8_t *puVar10;
  bool bVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint8_t auStack_d4 [40];
  uint uStack_9c;
  uint auStack_1c [5];
  
  puVar10 = auStack_d4;
  copy_large_struct((uint32_t *)(param_4 + 0x34),(uint32_t *)(param_3 + 0x34));
  *(uint32_t *)(param_4 + 0x18) = *(uint32_t *)(param_3 + 0x18);
  *(uint8_t *)(param_1 + 0x219) = 0;
  iVar1 = compute_buffer_size_and_init((void *)param_4,param_2,1);
  if (iVar1 == 0) {
    if (*(int *)(param_4 + 0x10) == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
    *(uint8_t *)(param_4 + 0x210) = 0;
    iVar1 = 0;
  }
  else {
    uVar8 = *(uint *)(&DAT_105b94ec/*ROM*/ + param_5 * 4);
    uStack_9c = *(uint *)(&DAT_105b9530/*ROM*/ + param_5 * 4);
    if (*(char *)(param_1 + 0xe0) == '\0') {
      iVar1 = 5;
      bVar11 = false;
    }
    else {
      iVar1 = read_struct_field_at_index_104c2890((uint32_t *)(param_3 + 0x34),0);
      bVar11 = iVar1 == 1;
    }
    uVar3 = uVar8;
    if (((!bVar11) && (iVar1 != 3)) && ((iVar1 == 6 || (iVar1 == 8)))) {
      uVar3 = uStack_9c;
      uStack_9c = uVar8;
    }
    puVar2 = (uint32_t *)(param_3 + 0x2c);
    uVar8 = return_first_word_1045c514(puVar2);
    uVar12 = abs_uint32(uVar8 & 0xffff);
    uVar8 = read_struct_field_at_offset_4(puVar2);
    uVar13 = abs_uint32(uVar8 & 0xffff);
    multiply_two_floats((uint)((ulonglong)uVar12 >> 0x20),(uint)uVar12,0x408f4000,0);
    compute_lens_fw_crc32(uVar3);
    uVar12 = multiply_fixed_point_values_105445a2(extraout_r4,extraout_r5,extraout_r4_00,extraout_r5_00);
    multiply_two_floats((uint)((ulonglong)uVar13 >> 0x20),(uint)uVar13,0x408f4000,0);
    compute_lens_fw_crc32(uStack_9c);
    uVar13 = multiply_fixed_point_values_105445a2(extraout_r4_01,extraout_r5_01,extraout_r4_02,extraout_r5_02);
    uVar8 = normalize_fixed_point_value_105448ac((uint)((ulonglong)uVar12 >> 0x20),(uint)uVar12);
    uVar3 = normalize_fixed_point_value_105448ac((uint)((ulonglong)uVar13 >> 0x20),(uint)uVar13);
    _cfg_58.uStack_48 = 0;
    _cfg_58.uStack_46 = 0;
    _cfg_58.uStack_44 = 0;
    _cfg_58.uStack_42 = 0;
    _cfg_58.uStack_40 = 0;
    _cfg_58.uStack_54 = *(uint32_t *)(param_3 + 0x20);
    _cfg_58.uStack_50 = *(uint32_t *)(param_3 + 0x24);
    _cfg_58.uStack_4c = *(uint32_t *)(param_3 + 0x28);
    _cfg_58.uStack_58 = *(uint32_t *)(param_3 + 0x1c);
    uVar4 = return_first_word_1045c514(puVar2);
    _cfg_58.uStack_44 = (short)uVar4;
    uVar4 = return_first_word_1045c514(puVar2);
    _cfg_58.uStack_48 = (short)uVar4;
    uVar4 = read_struct_field_at_offset_4(puVar2);
    _cfg_58.uStack_42 = 0;
    _cfg_58.uStack_40 = 0;
    _cfg_58.uStack_2c = 0;
    _cfg_58.uStack_2a = 0;
    _cfg_58.uStack_28 = 0;
    _cfg_58.uStack_26 = 0;
    _cfg_58.uStack_24 = 0;
    _cfg_58.uStack_38 = *(uint32_t *)(param_4 + 0x20);
    _cfg_58.uStack_34 = *(uint32_t *)(param_4 + 0x24);
    _cfg_58.uStack_30 = *(uint32_t *)(param_4 + 0x28);
    _cfg_58.uStack_3c = *(uint32_t *)(param_4 + 0x1c);
    puVar9 = (uint32_t *)(param_4 + 0x2c);
    _cfg_58.uStack_46 = (short)uVar4;
    uVar4 = return_first_word_1045c514(puVar9);
    _cfg_58.uStack_28 = (short)uVar4;
    uVar4 = return_first_word_1045c514(puVar9);
    _cfg_58.uStack_2c = (short)uVar4;
    uVar4 = read_struct_field_at_offset_4(puVar9);
    _cfg_58.uStack_26 = 0;
    _cfg_58.uStack_24 = 0;
    _cfg_58.uStack_2a = (short)uVar4;
    uVar5 = return_first_word_1045c514(puVar9);
    uVar6 = read_struct_field_at_offset_4(puVar9);
    uVar7 = return_first_word_1045c514(puVar2);
    _cfg_58.uStack_20 = (uVar7 & 0xffff) / 2;
    uVar7 = read_struct_field_at_offset_4(puVar2);
    auStack_1c[1] = 0;
    auStack_1c[2] = 0;
    auStack_1c[3] = 0;
    auStack_1c[4] = 0;
    auStack_1c[0] = (uVar7 & 0xffff) / 2;
    uVar4 = *(uint32_t *)(param_1 + 0x4c);
    *(short *)(puVar10 + 2) = (short)(((uVar3 & 0xfffe) << 8) / (uVar6 & 0xffff));
    *(uint **)(puVar10 + 4) = &_cfg_58.uStack_20;
    *(uint **)(puVar10 + 8) = auStack_1c;
    *(uint **)(puVar10 + 0xc) = auStack_1c + 1;
    *(uint **)(puVar10 + 0x10) = auStack_1c + 2;
    *(uint **)(puVar10 + 0x14) = auStack_1c + 3;
    *(uint **)(puVar10 + 0x18) = auStack_1c + 4;
    *(ushort *)(puVar10 + 0x1e) = (ushort)DAT_105b94e0/*ROM*/;
    *(ushort *)(puVar10 + 0x22) = (ushort)DAT_105b94e1/*ROM*/;
    *(ushort *)(puVar10 + 0x26) = (ushort)DAT_105b94e2/*ROM*/;
    iVar1 = compute_six_fixed_point_values(uVar4,&_cfg_58.uStack_58,&_cfg_58.uStack_3c,
                         (short)(((uVar8 & 0xfffe) << 8) / (uVar5 & 0xffff)),
                         *(uint16_t *)(puVar10 + 2),*(int **)(puVar10 + 4),*(int **)(puVar10 + 8),
                         *(int **)(puVar10 + 0xc),*(int **)(puVar10 + 0x10),
                         *(int **)(puVar10 + 0x14),*(int **)(puVar10 + 0x18),
                         *(uint16_t *)(puVar10 + 0x1e),*(uint16_t *)(puVar10 + 0x22),
                         *(uint16_t *)(puVar10 + 0x26));
    *(bool *)(param_4 + 0x210) = iVar1 != 0;
  }
  return iVar1;
}
