/* @k10d compute_exposure_compensation @ 0x10369d26
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 014_io_settings_control (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void compute_exposure_compensation(void *param_1)

{
  uint16_t uVar1;
  bool bVar2;
  bool bVar3;
  uint32_t *puVar4;
  uint32_t uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint32_t uVar12;
  void *pvVar13;
  int iVar14;
  uintptr_t sp;
  uint8_t *puVar15;
  longlong lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint8_t auStack_d8 [8];
  uint uStack_a4;
  uint32_t uStack_9c;
  uint32_t uStack_98;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint64_t uStack_60;
  uint8_t auStack_58 [4];
  uint32_t auStack_54 [4];
  uint32_t auStack_44 [7];
  uint32_t uStack_28;
  uint32_t auStack_24 [3];
  uint8_t auStack_18 [16];
  
  puVar15 = auStack_d8;
  uVar18 = uRam80004350;
  uVar17 = uRam80004358;
  if ((iRam80015b08 == 2) && (cRam80015d00 != '\0')) {
    copy_two_words_from_param2((int)auStack_18,-0x7ffea510);
    iVar6 = 8;
    do {
      iVar14 = iVar6 + -4;
      *(uint32_t *)((int)auStack_54 + iVar6) = *(uint32_t *)((int)auStack_24 + iVar6 + 8);
      iVar6 = iVar14;
    } while (iVar14 != 0);
    if (DAT_800043a0/*SDRAM*/ == '\0') {
      uVar5 = 5;
    }
    else {
      uVar5 = read_struct_field_at_index_104c2890((void *)0x80015b24/*SDRAM*/,0);
    }
    pvVar13 = (void *)((int)param_1 + 0x3c);
    (*(code *)0x104bbe6e/*ROM*/)(auStack_54 + 3);
    compute_signed_16bit_deltas(auStack_18,(int)pvVar13);
    iVar6 = 8;
    do {
      iVar14 = iVar6 + -4;
      *(uint32_t *)((int)auStack_44 + iVar6) = *(uint32_t *)((int)auStack_24 + iVar6 + 8);
      iVar6 = iVar14;
    } while (iVar14 != 0);
    (*(code *)0x104bbbc2/*ROM*/)(auStack_18,pvVar13);
    iVar6 = 8;
    do {
      iVar14 = iVar6 + -4;
      *(uint32_t *)((int)auStack_44 + iVar6 + 8U) = *(uint32_t *)((int)auStack_24 + iVar6 + 8);
      iVar6 = iVar14;
    } while (iVar14 != 0);
    iVar6 = dispatch_on_mode_field_104bb9c2(pvVar13);
    iVar14 = dispatch_on_mode_field_104bba12(pvVar13);
    iVar7 = dispatch_by_mode_field_104bb922(pvVar13);
    iVar8 = dispatch_on_mode_field_104bb972(pvVar13);
    bVar2 = false;
    if ((iVar6 != 0) || (iVar14 != 0)) {
      bVar2 = true;
    }
    bVar3 = false;
    if ((iVar7 != 0) || (iVar8 != 0)) {
      bVar3 = true;
    }
    uVar9 = return_first_word_1045c514((uint32_t *)0x80018058/*SDRAM*/);
    uVar10 = read_struct_field_at_offset_4((void *)0x80018058/*SDRAM*/);
    puVar4 = auStack_54 + 1;
    uVar11 = return_first_word_1045c514(puVar4);
    uVar12 = read_struct_field_at_offset_4(puVar4);
    uVar1 = *(uint16_t *)((uint)*(byte *)((int)param_1 + 0x2b0) * 2 + 0x10557b14/*ROM*/);
    *(short *)(puVar15 + 2) = (short)uVar12;
    *(uint16_t *)(puVar15 + 6) = uVar1;
    dispatch_six_param_object_ops(pvVar13,uVar9 & 0xffff,uVar10 & 0xffff,uVar11 & 0xffff,*(uint16_t *)(puVar15 + 2)
                 ,*(uint16_t *)(puVar15 + 6));
    transform_and_store_value(pvVar13,uVar5);
    if (*(char *)((int)param_1 + 0x2c1) == '\0') {
      uRam80004350 = (uRam80004350 & ~(((uint64_t)0xffffffff) << 0)) | ((((uint64_t)(0x3fe00000)) & ((uint64_t)0xffffffff)) << 0);
      uRam80004350 = (uRam80004350 & ~(((uint64_t)0xffffffff) << 32)) | ((((uint64_t)(0)) & ((uint64_t)0xffffffff)) << 32);
      uRam80004350 = 0x3fe0000000000000;
      uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 0)) | ((((uint64_t)(0x3fe00000)) & ((uint64_t)0xffffffff)) << 0);
      uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 32)) | ((((uint64_t)(0)) & ((uint64_t)0xffffffff)) << 32);
      if (bVar2) {
        if (iVar6 == 0) {
          uRam80004350 = 0;
        }
        else if (iVar14 == 0) {
          uRam80004350 = 0x3ff0000000000000;
        }
        else {
          read_first_word_1045bd4c(auStack_54 + 3);
          uVar18 = abs_uint32((uint32_t)param_1);
          uVar9 = return_first_word_1045c514(auStack_44 + 1);
          uVar17 = compute_lens_fw_crc32(uVar9);
          lVar16 = multiply_two_floats((uint)((ulonglong)uVar17 >> 0x20),(uint)uVar17,0x3fe00000,0);
          uVar19 = compare_64_bit_integers((uint)((ulonglong)uVar18 >> 0x20),(void *)uVar18,
                                (uint)((ulonglong)lVar16 >> 0x20),(uint)lVar16);
          iVar6 = return_first_word_1045c514(auStack_44 + 3);
          iVar14 = return_first_word_1045c514(auStack_44 + 1);
          uVar18 = compute_lens_fw_crc32(iVar6 - iVar14);
          uStack_9c = (uint32_t)(uVar19 >> 0x20);
          uStack_98 = (uint32_t)uVar19;
          uRam80004350 = multiply_fixed_point_values_105445a2(uStack_9c,uStack_98,(int)((ulonglong)uVar18 >> 0x20),
                                      (int)uVar18);
        }
      }
      if (bVar3) {
        if (iVar7 == 0) {
          uRam80004358 = 0;
        }
        else if (iVar8 == 0) {
          uRam80004358 = 0x3ff0000000000000;
        }
        else {
          get_second_word_of_struct(auStack_54 + 3);
          uVar18 = abs_uint32((uint32_t)param_1);
          uVar9 = read_struct_field_at_offset_4(auStack_44 + 1);
          uVar17 = compute_lens_fw_crc32(uVar9);
          lVar16 = multiply_two_floats((uint)((ulonglong)uVar17 >> 0x20),(uint)uVar17,0x3fe00000,0);
          uVar19 = compare_64_bit_integers((uint)((ulonglong)uVar18 >> 0x20),(void *)uVar18,
                                (uint)((ulonglong)lVar16 >> 0x20),(uint)lVar16);
          iVar6 = read_struct_field_at_offset_4(auStack_44 + 3);
          iVar14 = read_struct_field_at_offset_4(auStack_44 + 1);
          uVar18 = compute_lens_fw_crc32(iVar6 - iVar14);
          uRam80004358 = multiply_fixed_point_values_105445a2((int)(uVar19 >> 0x20),(int)uVar19,
                                      (int)((ulonglong)uVar18 >> 0x20),(int)uVar18);
        }
      }
      *(uint8_t *)((int)param_1 + 0x2c1) = 1;
    }
    (*(code *)0x104bb656/*ROM*/)(auStack_44 + 5,pvVar13);
    (*(code *)0x104bbbc2/*ROM*/)(&uStack_28,pvVar13);
    lVar16 = multiply_two_floats(((uint32_t)((uint64_t)(uRam80004350) >> 0)),((uint32_t)((uint64_t)(uRam80004350) >> 32)),0x408f4000,0);
    iVar6 = normalize_fixed_point_value_105448ac((uint)((ulonglong)lVar16 >> 0x20),(uint)lVar16);
    if (iVar6 == 0) {
      uStack_a4 = return_first_word_1045c514(auStack_44 + 5);
      uStack_a4 = uStack_a4 >> 1;
      uVar18 = uRam80004358;
    }
    else if (iVar6 == 500) {
      uStack_a4 = return_first_word_1045c514(&uStack_28);
      uStack_a4 = uStack_a4 >> 1;
      uVar18 = uRam80004358;
    }
    else if (iVar6 == 1000) {
      iVar6 = return_first_word_1045c514(&uStack_28);
      uVar9 = return_first_word_1045c514(auStack_44 + 5);
      iVar14 = compute_exposure_time_from_meter((int)param_1 + 0x3c);
      uStack_a4 = (iVar6 - (uVar9 >> 1)) + iVar14;
      uVar18 = uRam80004358;
    }
    else {
      uVar9 = return_first_word_1045c514(&uStack_28);
      uVar18 = compute_lens_fw_crc32(uVar9);
      uVar9 = return_first_word_1045c514(auStack_44 + 5);
      uVar17 = compute_lens_fw_crc32(uVar9);
      uVar9 = (uint)((ulonglong)uVar17 >> 0x20);
      lVar16 = multiply_two_floats(uVar9,(uint)uVar17,0x3fe00000,0);
      uVar19 = compare_64_bit_integers((uint)((ulonglong)uVar18 >> 0x20),(void *)uVar18,uVar9,(uint)uVar17);
      uStack_7c = (uint)((ulonglong)lVar16 >> 0x20);
      uStack_78 = (uint)lVar16;
      uVar20 = add_two_64_bit_integers(0x3fe00000,(void *)0x0,uStack_7c,uStack_78);
      lVar16 = multiply_two_floats((uint)(uVar19 >> 0x20),(uint)uVar19,((uint32_t)((uint64_t)(uRam80004350) >> 0)),
                            ((uint32_t)((uint64_t)(uRam80004350) >> 32)));
      uVar19 = add_two_64_bit_integers((uint)((ulonglong)lVar16 >> 0x20),(void *)lVar16,(uint)(uVar20 >> 0x20),
                            (uint)uVar20);
      uStack_a4 = normalize_fixed_point_value_105448ac((uint)(uVar19 >> 0x20),(uint)uVar19);
      uVar18 = uRam80004358;
    }
    uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 0)) | ((((uint64_t)((uint)((ulonglong)uVar18 >> 0x20))) & ((uint64_t)0xffffffff)) << 0);
    uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 32)) | ((((uint64_t)((uint)uVar18)) & ((uint64_t)0xffffffff)) << 32);
    lVar16 = multiply_two_floats(((uint32_t)((uint64_t)(uRam80004358) >> 0)),((uint32_t)((uint64_t)(uRam80004358) >> 32)),0x408f4000,0);
    uRam80004358 = uVar18;
    iVar6 = normalize_fixed_point_value_105448ac((uint)((ulonglong)lVar16 >> 0x20),(uint)lVar16);
    if (iVar6 == 0) {
      uVar9 = read_struct_field_at_offset_4(auStack_44 + 5);
      uVar9 = uVar9 >> 1;
    }
    else if (iVar6 == 500) {
      uVar9 = read_struct_field_at_offset_4(&uStack_28);
      uVar9 = uVar9 >> 1;
    }
    else if (iVar6 == 1000) {
      iVar6 = read_struct_field_at_offset_4(&uStack_28);
      uVar9 = read_struct_field_at_offset_4(auStack_44 + 5);
      iVar14 = compute_exposure_time_from_meter((int)param_1 + 0x3c);
      uVar9 = (iVar6 - (uVar9 >> 1)) + iVar14;
    }
    else {
      uVar9 = read_struct_field_at_offset_4(&uStack_28);
      uStack_60 = compute_lens_fw_crc32(uVar9);
      uVar9 = read_struct_field_at_offset_4(auStack_44 + 5);
      uVar18 = compute_lens_fw_crc32(uVar9);
      uVar9 = (uint)((ulonglong)uVar18 >> 0x20);
      lVar16 = multiply_two_floats(uVar9,(uint)uVar18,0x3fe00000,0);
      uVar19 = compare_64_bit_integers((uint)(((uint32_t)((uint64_t)(uStack_60) >> 0))),(void *)(((uint32_t)((uint64_t)(uStack_60) >> 32))),(uint)(uVar9),(uint)uVar18);
      uStack_68 = (uint)((ulonglong)lVar16 >> 0x20);
      uStack_64 = (uint)lVar16;
      uVar20 = add_two_64_bit_integers(0x3fe00000,(void *)0x0,uStack_68,uStack_64);
      uStack_70 = (uint)(uVar19 >> 0x20);
      uStack_6c = (uint)uVar19;
      lVar16 = multiply_two_floats(uStack_70,uStack_6c,((uint32_t)((uint64_t)(uRam80004358) >> 0)),((uint32_t)((uint64_t)(uRam80004358) >> 32)));
      uVar19 = add_two_64_bit_integers((uint)((ulonglong)lVar16 >> 0x20),(void *)lVar16,(uint)(uVar20 >> 0x20),
                            (uint)uVar20);
      uVar9 = normalize_fixed_point_value_105448ac((uint)(uVar19 >> 0x20),(uint)uVar19);
    }
    alloc_two_word_pair_1045bc2e(auStack_24 + 1,uStack_a4,uVar9);
    iVar6 = 8;
    do {
      iVar14 = iVar6 + -4;
      *(uint32_t *)(auStack_58 + iVar6 + -4) = *(uint32_t *)((int)auStack_24 + iVar6);
      iVar6 = iVar14;
    } while (iVar14 != 0);
    compute_two_deltas_by_mode((uint32_t *)((int)param_1 + 0x3c),(uint32_t *)(auStack_58));
    free_heap_block_if_flagged_1045bc54(auStack_58,2);
    free_heap_block_if_flagged_1045bc54(auStack_24 + 1,2);
    free_heap_if_flagged_1045c402(&uStack_28,2);
    free_heap_if_flagged_1045c402(auStack_44 + 5,2);
    free_heap_if_flagged_1045c402(auStack_44 + 3,2);
    free_heap_if_flagged_1045c402(auStack_44 + 1,2);
    free_heap_block_if_flagged_1045bc54(auStack_54 + 3,2);
    free_heap_if_flagged_1045c402(puVar4,2);
    uVar18 = uRam80004350;
    uVar17 = uRam80004358;
  }
  uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 0)) | ((((uint64_t)((uint)((ulonglong)uVar17 >> 0x20))) & ((uint64_t)0xffffffff)) << 0);
  uRam80004358 = (uRam80004358 & ~(((uint64_t)0xffffffff) << 32)) | ((((uint64_t)((uint)uVar17)) & ((uint64_t)0xffffffff)) << 32);
  uRam80004350 = (uRam80004350 & ~(((uint64_t)0xffffffff) << 0)) | ((((uint64_t)((uint)((ulonglong)uVar18 >> 0x20))) & ((uint64_t)0xffffffff)) << 0);
  uRam80004350 = (uRam80004350 & ~(((uint64_t)0xffffffff) << 32)) | ((((uint64_t)((uint)uVar18)) & ((uint64_t)0xffffffff)) << 32);
  return;
}
