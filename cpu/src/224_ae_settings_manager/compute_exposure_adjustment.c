/* @k10d compute_exposure_adjustment @ 0x104bc3f8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 224_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Calculates and stores exposure compensation values based on metering data and current
 *   mode.
 * summary:
 *   The function reads metering values from param_1 and local structures, performs
 *   arithmetic to determine exposure adjustments, and writes results to offsets 0x38, 0x3c,
 *   0x50, and 0x52. It branches on the value at param_1+0x32 (likely a mode or state
 *   indicator) to apply different calculation paths, including a special case for value
 *   100. It uses helper functions to retrieve and store 16-bit values, suggesting it is
 *   part of the AE (auto exposure) or metering subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void compute_exposure_adjustment(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint32_t *puVar5;
  int iVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uintptr_t sp;
  uint8_t *puVar14;
  int *piVar15;
  char cVar16;
  uint8_t local_b8 [4];
  uint uStack_9c;
  uint uStack_8c;
  uint uStack_6c;
  uint8_t local_68 [4];
  uint32_t uStack_64;
  uint8_t local_60 [4];
  uint32_t uStack_5c;
  uint8_t local_58 [4];
  uint32_t uStack_54;
  uint8_t local_50 [8];
  uint32_t uStack_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  uint16_t uStack_38;
  uint16_t uStack_36;
  uint16_t uStack_34;
  uint16_t uStack_32;
  uint16_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint16_t uStack_18;
  uint16_t uStack_16;
  uint16_t uStack_14;
  uint8_t uStack_d;
  ushort uStack_c;
  uint16_t uStack_a;
  
  puVar14 = local_b8;
  if (*(short *)(param_1 + 0x32) != 0) {
    if ((*(int *)(param_1 + 0x38) == 0) ||
       (piVar15 = (int *)local_b8, *(int *)(param_1 + 0x3c) == 0)) {
      uVar3 = return_first_word_1045c514((uint32_t *)param_1);
      *(uint *)(param_1 + 0x38) = uVar3 >> 1;
      uVar3 = read_struct_field_at_offset_4((void *)param_1);
      *(uint *)(param_1 + 0x3c) = uVar3 >> 1;
      piVar15 = (int *)puVar14;
    }
    compute_percent_from_two_values(local_58,param_1);
    iVar6 = 8;
    do {
      iVar11 = iVar6 + -4;
      *(uint32_t *)((int)&uStack_6c + iVar6) = *(uint32_t *)(local_58 + iVar6 + -4);
      iVar6 = iVar11;
    } while (iVar11 != 0);
    uStack_9c = return_first_word_1045c514((uint32_t *)local_68);
    free_heap_if_flagged_1045c402(local_68,2);
    compute_percent_from_two_values(local_58,param_1);
    iVar6 = 8;
    do {
      iVar11 = iVar6 + -4;
      *(uint32_t *)((int)&uStack_6c + iVar6) = *(uint32_t *)(local_58 + iVar6 + -4);
      iVar6 = iVar11;
    } while (iVar11 != 0);
    uVar3 = read_struct_field_at_offset_4(local_68);
    free_heap_if_flagged_1045c402(local_68,2);
    if (*(short *)(param_1 + 0x32) == 100) {
      uVar4 = return_first_word_1045c514((uint32_t *)param_1);
      if (uVar4 < uStack_9c) {
        uStack_9c = return_first_word_1045c514((uint32_t *)param_1);
      }
      uVar4 = read_struct_field_at_offset_4((void *)param_1);
      if (uVar4 < uVar3) {
        uVar3 = read_struct_field_at_offset_4((void *)param_1);
      }
    }
    else {
      uVar4 = return_first_word_1045c514((uint32_t *)param_1);
      if (uVar4 < uStack_9c + 0x10) {
        uStack_9c = return_first_word_1045c514((uint32_t *)param_1);
        uVar4 = return_first_word_1045c514((uint32_t *)param_1);
        *(uint *)(param_1 + 0x38) = uVar4 >> 1;
      }
      uVar4 = read_struct_field_at_offset_4((void *)param_1);
      if (uVar4 < uVar3 + 0x10) {
        uVar3 = read_struct_field_at_offset_4((void *)param_1);
        uVar4 = read_struct_field_at_offset_4((void *)param_1);
        *(uint *)(param_1 + 0x3c) = uVar4 >> 1;
      }
    }
    puVar5 = (uint32_t *)(param_1 + 0x18);
    write_two_words_to_memory(puVar5,uStack_9c,uVar3);
    compute_percent_from_two_values(local_58,param_1);
    iVar6 = 8;
    do {
      iVar11 = iVar6 + -4;
      *(uint32_t *)((int)&uStack_6c + iVar6) = *(uint32_t *)(local_58 + iVar6 + -4);
      iVar6 = iVar11;
    } while (iVar11 != 0);
    iVar11 = return_first_word_1045c514((uint32_t *)local_68);
    copy_structured_record_104bbb28(local_50,(void *)param_1);
    iVar6 = 8;
    do {
      iVar12 = iVar6 + -4;
      *(uint32_t *)((int)&uStack_64 + iVar6) = *(uint32_t *)((int)&uStack_54 + iVar6);
      iVar6 = iVar12;
    } while (iVar12 != 0);
    uVar3 = return_first_word_1045c514((uint32_t *)local_60);
    *(short *)(param_1 + 0x50) = (short)((uint)(iVar11 << 8) / uVar3);
    free_heap_if_flagged_1045c402(local_60,2);
    free_heap_if_flagged_1045c402(local_68,2);
    *(uint16_t *)(param_1 + 0x52) = *(uint16_t *)(param_1 + 0x50);
    copy_structured_record_104bbb28(local_50,(void *)param_1);
    iVar6 = 8;
    do {
      iVar11 = iVar6 + -4;
      *(uint32_t *)((int)&uStack_64 + iVar6) = *(uint32_t *)((int)&uStack_54 + iVar6);
      iVar6 = iVar11;
    } while (iVar11 != 0);
    uVar4 = return_first_word_1045c514((uint32_t *)local_60);
    free_heap_if_flagged_1045c402(local_60,2);
    copy_structured_record_104bbb28(local_50,(void *)param_1);
    uVar3 = 8;
    do {
      cVar16 = 3 < uVar3;
      uVar13 = uVar3 - 4;
      *(uint32_t *)((int)&uStack_64 + uVar3) = *(uint32_t *)((int)&uStack_54 + uVar3);
      uVar3 = uVar13;
    } while (uVar13 != 0);
    uVar3 = read_struct_field_at_offset_4(local_60);
    free_heap_if_flagged_1045c402(local_60,2);
    uVar13 = read_struct_field_at_offset_4(puVar5);
    iVar6 = compute_log2_index(uVar13);
    uVar13 = return_first_word_1045c514(puVar5);
    iVar11 = compute_log2_index(uVar13);
    uVar7 = compare_version_fields(iVar6,iVar11);
    iVar6 = compute_log2_index(uVar3);
    iVar11 = compute_log2_index(uVar4);
    uVar8 = compare_version_fields(iVar6,iVar11);
    pack_lens_fw_update_word(uVar7,uVar8);
    if (cVar16 == '\x01') {
      iVar6 = read_struct_field_at_offset_4(puVar5);
      uVar13 = (uint)(iVar6 << 8) / (uint)*(ushort *)(param_1 + 0x50);
      uStack_8c = uVar4;
    }
    else {
      iVar6 = return_first_word_1045c514(puVar5);
      uVar13 = uVar3;
      uStack_8c = (uint)(iVar6 << 8) / (uint)*(ushort *)(param_1 + 0x50);
    }
    cVar16 = *(ushort *)(param_1 + 0x32) < 100;
    if ((*(ushort *)(param_1 + 0x32) == 100) && (pack_lens_fw_update_word(uVar7,uVar8), cVar16 != '\0')) {
      uStack_c = 0;
      uStack_a = 0;
      uStack_48 = 1;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_3c = 0;
      uStack_38 = 0;
      uStack_36 = 0;
      uStack_34 = 0;
      uStack_32 = 0;
      uStack_30 = 0;
      uStack_2c = 1;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_1a = 0;
      uStack_18 = 0;
      uStack_16 = 0;
      uStack_14 = 0;
      uVar7 = return_first_word_1045c514((uint32_t *)param_1);
      uStack_38 = (short)uVar7;
      uVar7 = read_struct_field_at_offset_4((void *)param_1);
      uStack_1c = (short)uVar4;
      uStack_36 = (short)uVar7;
      uStack_1a = (short)uVar3;
      *piVar15 = (int)&uStack_a;
      compute_centered_range_bounds(&uStack_d,(int)&uStack_48,(int)&uStack_2c,(short *)&uStack_c,(short *)*piVar15);
      uVar13 = uVar3 + (uint)uStack_c * -2;
      iVar6 = read_struct_field_at_offset_4((void *)param_1);
      *(short *)(param_1 + 0x52) = (short)((uint)(iVar6 << 8) / uVar13);
      *(ushort *)(param_1 + 0x58) = uStack_c;
      *(uint16_t *)(param_1 + 0x5a) = uStack_a;
    }
    bVar2 = false;
    uStack_6c = read_struct_field_at_offset_4((void *)param_1);
    bVar1 = false;
    compute_percent_from_two_values(local_60,param_1);
    uVar9 = read_struct_field_at_offset_4(local_60);
    if (uVar9 <= uStack_6c) {
      uVar9 = return_first_word_1045c514((uint32_t *)param_1);
      compute_percent_from_two_values(local_68,param_1);
      bVar2 = true;
      uVar10 = return_first_word_1045c514((uint32_t *)local_68);
      if (uVar10 <= uVar9) {
        bVar1 = true;
      }
    }
    if (bVar2) {
      free_heap_if_flagged_1045c402(local_68,2);
    }
    free_heap_if_flagged_1045c402(local_60,2);
    if (bVar1) {
      uVar13 = uVar3;
      uStack_8c = uVar4;
    }
    write_two_words_to_memory((uint32_t *)(param_1 + 0x20),(uint32_t)(uStack_8c & 0xfffffffe),(uint32_t)(uVar13 & 0xfffffffe));
  }
  return;
}
