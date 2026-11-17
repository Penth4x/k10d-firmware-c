/* @k10d search_and_apply_zoom_factor @ 0x104c73fa
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 233_menu_settings_init (unit names are model-proposed)
 * purpose:
 *   Iteratively doubles a zoom factor to find a valid configuration, then applies it to
 *   sensor/AF parameters.
 * summary:
 *   The function initializes a local object and enters a loop that doubles a factor
 *   (starting at 2) up to 8. It uses this factor to scale values derived from param_3
 *   (offsets 0x50/0x52) and checks validity via test_two_mmio_writes. Upon finding a valid
 *   factor, it constructs a parameter structure (piVar19) containing scaled coordinates and
 *   calls clamp_crop_to_sensor_bounds and compute_six_fixed_point_values, likely to
 *   configure the image pipeline or AF system with the new zoom/region settings. It sets a
 *   flag at param_1+0x219 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int search_and_apply_zoom_factor(int param_1,uint32_t *param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint16_t uVar4;
  uint uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint uVar8;
  uint32_t uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint32_t *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uintptr_t sp;
  int *piVar19;
  uint8_t local_394 [40];
  uint32_t auStack_2e4 [3];
  uint8_t auStack_2d8 [16];
  int iStack_2c8;
  uint32_t local_2bc;
  uint32_t uStack_2b8;
  uint32_t uStack_2b4;
  uint32_t uStack_2b0;
  uint32_t auStack_2ac [122];
  uint32_t auStack_c4 [2];
  uint32_t uStack_bc;
  uint32_t uStack_b8;
  uint32_t uStack_b4;
  uint32_t uStack_b0;
  uint16_t uStack_ac;
  uint16_t uStack_aa;
  uint16_t uStack_a8;
  uint16_t uStack_a6;
  uint16_t uStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  uint32_t uStack_98;
  uint32_t uStack_94;
  uint16_t uStack_90;
  uint16_t uStack_8e;
  uint16_t uStack_8c;
  uint16_t uStack_8a;
  uint16_t auStack_88 [2];
  uint8_t local_84 [8];
  uint8_t auStack_7c [16];
  uint16_t uStack_6c;
  uint16_t uStack_6a;
  uint16_t uStack_68;
  uint16_t uStack_66;
  uint16_t uStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint32_t uStack_58;
  uint32_t uStack_54;
  uint16_t uStack_50;
  uint16_t uStack_4e;
  uint16_t uStack_4c;
  uint16_t uStack_4a;
  uint16_t auStack_48 [2];
  uint32_t local_44 [2];
  uint32_t uStack_3c;
  uint32_t uStack_38;
  uint32_t uStack_34;
  uint32_t uStack_30;
  uint32_t uStack_2c;
  uint32_t uStack_28;
  uint uStack_24;
  uint auStack_20 [5];
  uint16_t uStack_c;
  uint16_t uStack_a;
  
  piVar19 = (int *)local_394;
  *(uint8_t *)(param_1 + 0x219) = 0;
  cls_105b9458_new((void *)auStack_2d8);
  uVar5 = negate_signed_integer((uint)*(ushort *)(param_3 + 0x50));
  uVar6 = compare_version_fields(0x43800000,uVar5);
  uVar5 = negate_signed_integer((uint)*(ushort *)(param_3 + 0x52));
  uVar7 = compare_version_fields(0x43800000,uVar5);
  uVar5 = 2;
  while( true ) {
    uVar8 = negate_signed_integer(uVar5);
    uVar9 = compute_float_division(uVar8,uVar6);
    iVar10 = test_two_mmio_writes(param_1,uVar9);
    uVar9 = compute_float_division(uVar7,uVar8);
    iVar11 = test_two_mmio_writes(param_1,uVar9);
    if ((iVar10 != 0) && (iVar11 != 0)) break;
    uVar5 = uVar5 * 2;
    if (10 < (int)uVar5) goto LAB_104c7df2;
  }
  alloc_and_zero_two_words_1045c3bc(auStack_c4);
  iVar10 = return_first_word_1045c514(param_2);
  store_value_to_pointer_1045c510(auStack_c4,iVar10 * uVar5);
  iVar10 = read_struct_field_at_offset_4(param_2);
  write_field_at_offset_four_1045c518(auStack_c4,iVar10 * uVar5);
  iVar10 = compute_buffer_size_and_init(auStack_2d8,auStack_c4,2);
  if (iVar10 == 0) {
    if (iStack_2c8 == 2) {
      *(uint8_t *)(param_1 + 0x219) = 1;
    }
  }
  else {
    uStack_ac = 0;
    uStack_aa = 0;
    uStack_a8 = 0;
    uStack_a6 = 0;
    uStack_a4 = 0;
    uStack_b8 = uStack_2b8;
    uStack_b4 = uStack_2b4;
    uStack_b0 = uStack_2b0;
    uStack_bc = local_2bc;
    uVar6 = return_first_word_1045c514(auStack_2ac);
    uStack_a8 = (uint16_t)uVar6;
    uVar6 = return_first_word_1045c514(auStack_2ac);
    uStack_ac = (uint16_t)uVar6;
    uVar6 = read_struct_field_at_offset_4(auStack_2ac);
    iVar10 = param_6 * 3;
    uStack_aa = (short)uVar6;
    uStack_a6 = 0;
    uStack_a4 = 0;
    uVar6 = *(uint32_t *)(param_1 + 0x4c);
    bVar2 = (&DAT_105b94e1/*ROM*/)[iVar10];
    bVar1 = (&DAT_105b94e0/*ROM*/)[iVar10];
    *(ushort *)((int)piVar19 + 2) = (ushort)(byte)(&DAT_105b94e2/*ROM*/)[iVar10];
    forward_event_with_payload(uVar6,&uStack_bc,(ushort)bVar1,(ushort)bVar2,*(uint16_t *)((int)piVar19 + 2));
    uStack_90 = 0;
    uStack_8e = 0;
    uStack_8c = 0;
    uStack_8a = 0;
    auStack_88[0] = 0;
    uStack_9c = *(uint32_t *)(param_4 + 0x20);
    uStack_98 = *(uint32_t *)(param_4 + 0x24);
    uStack_94 = *(uint32_t *)(param_4 + 0x28);
    uStack_a0 = *(uint32_t *)(param_4 + 0x1c);
    puVar14 = (uint32_t *)(param_4 + 0x2c);
    uVar6 = return_first_word_1045c514(puVar14);
    uStack_8c = (uint16_t)uVar6;
    uVar6 = return_first_word_1045c514(puVar14);
    uStack_90 = (uint16_t)uVar6;
    uVar6 = read_struct_field_at_offset_4(puVar14);
    uStack_8e = (uint16_t)uVar6;
    uStack_8a = 0;
    auStack_88[0] = 0;
    copy_transformed_pair(local_84,(void *)param_3);
    iVar11 = 8;
    do {
      iVar15 = iVar11 + -4;
      *(uint32_t *)((int)auStack_2e4 + iVar11) = *(uint32_t *)((int)auStack_88 + iVar11);
      iVar11 = iVar15;
    } while (iVar15 != 0);
    puVar14 = auStack_2e4 + 1;
    iVar15 = return_first_word_1045c514(puVar14);
    free_heap_if_flagged_1045c402(puVar14,2);
    copy_transformed_pair(local_84,(void *)param_3);
    iVar11 = 8;
    do {
      iVar16 = iVar11 + -4;
      *(uint32_t *)((int)auStack_2e4 + iVar11) = *(uint32_t *)((int)auStack_88 + iVar11);
      iVar11 = iVar16;
    } while (iVar16 != 0);
    iVar16 = read_struct_field_at_offset_4(puVar14);
    free_heap_if_flagged_1045c402(puVar14,2);
    iVar12 = return_first_word_1045c514(auStack_c4);
    copy_transformed_pair(local_84,(void *)param_3);
    iVar11 = 8;
    do {
      iVar17 = iVar11 + -4;
      *(uint32_t *)((int)auStack_2e4 + iVar11) = *(uint32_t *)((int)auStack_88 + iVar11);
      iVar11 = iVar17;
    } while (iVar17 != 0);
    iVar17 = return_first_word_1045c514(puVar14);
    free_heap_if_flagged_1045c402(puVar14,2);
    iVar13 = read_struct_field_at_offset_4(auStack_c4);
    copy_transformed_pair(local_84,(void *)param_3);
    iVar11 = 8;
    do {
      iVar18 = iVar11 + -4;
      *(uint32_t *)((int)auStack_2e4 + iVar11) = *(uint32_t *)((int)auStack_88 + iVar11);
      iVar11 = iVar18;
    } while (iVar18 != 0);
    iVar11 = read_struct_field_at_offset_4(puVar14);
    free_heap_if_flagged_1045c402(puVar14,2);
    uStack_c = (short)((int)(uint)*(ushort *)(param_3 + 0x50) / (int)uVar5);
    uStack_a = (short)((int)(uint)*(ushort *)(param_3 + 0x52) / (int)uVar5);
    uStack_3c = *(uint32_t *)(param_3 + 0x38);
    uStack_38 = *(uint32_t *)(param_3 + 0x3c);
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    *piVar19 = (int)&uStack_c;
    piVar19[1] = (int)&uStack_a;
    piVar19[2] = (int)&uStack_3c;
    piVar19[3] = (int)&uStack_38;
    clamp_crop_to_sensor_bounds(param_1,param_4,iVar15 * uVar5 & 0xffff,iVar16 * uVar5 & 0xffff,(ushort *)*piVar19,
                 (ushort *)piVar19[1],(uint *)piVar19[2],(uint *)piVar19[3]);
    uVar6 = return_first_word_1045c514(auStack_2ac);
    uStack_a8 = (short)uVar6;
    uStack_ac = (short)(iVar15 * uVar5);
    uStack_aa = (short)(iVar16 * uVar5);
    uStack_a6 = (short)(iVar12 - iVar17 * uVar5 >> 1);
    uStack_a4 = (short)(iVar13 - iVar11 * uVar5 >> 1);
    bVar2 = (&DAT_105b94e1/*ROM*/)[iVar10];
    bVar3 = (&DAT_105b94e2/*ROM*/)[iVar10];
    uVar6 = *(uint32_t *)(param_1 + 0x4c);
    bVar1 = (&DAT_105b94e0/*ROM*/)[iVar10];
    *(uint16_t *)((int)piVar19 + 2) = uStack_a;
    *(uint32_t **)((int)piVar19 + 4) = &uStack_3c;
    *(uint32_t **)((int)piVar19 + 8) = &uStack_38;
    *(uint32_t **)((int)piVar19 + 0xc) = &uStack_34;
    *(uint32_t **)((int)piVar19 + 0x10) = &uStack_30;
    *(uint32_t **)((int)piVar19 + 0x14) = &uStack_2c;
    *(uint32_t **)((int)piVar19 + 0x18) = &uStack_28;
    *(ushort *)((int)piVar19 + 0x1e) = (ushort)bVar1;
    *(ushort *)((int)piVar19 + 0x22) = (ushort)bVar2;
    *(ushort *)((int)piVar19 + 0x26) = (ushort)bVar3;
    iVar10 = compute_six_fixed_point_values(uVar6,&uStack_a0,&uStack_bc,uStack_c,*(uint16_t *)((int)piVar19 + 2),
                          *(int **)((int)piVar19 + 4),*(int **)((int)piVar19 + 8),
                          *(int **)((int)piVar19 + 0xc),*(int **)((int)piVar19 + 0x10),
                          *(int **)((int)piVar19 + 0x14),*(int **)((int)piVar19 + 0x18),
                          *(uint16_t *)((int)piVar19 + 0x1e),*(uint16_t *)((int)piVar19 + 0x22),
                          *(uint16_t *)((int)piVar19 + 0x26));
    if (iVar10 != 0) {
      iVar10 = compute_buffer_size_and_init((void *)param_5,param_2,2);
      if (iVar10 == 0) {
        if (*(int *)(param_5 + 0x10) == 2) {
          *(uint8_t *)(param_1 + 0x219) = 1;
        }
      }
      else {
        uStack_6c = 0;
        uStack_6a = 0;
        uStack_68 = 0;
        uStack_66 = 0;
        uStack_64 = 0;
        uVar6 = return_first_word_1045c514(auStack_2ac);
        uStack_68 = (uint16_t)uVar6;
        uVar6 = return_first_word_1045c514(auStack_2ac);
        uStack_6c = (uint16_t)uVar6;
        uVar6 = read_struct_field_at_offset_4(auStack_2ac);
        uStack_6a = (uint16_t)uVar6;
        uStack_66 = 0;
        uStack_64 = uStack_66;
        uStack_24 = return_first_word_1045c514(auStack_c4);
        uStack_24 = uStack_24 >> 1;
        auStack_20[0] = read_struct_field_at_offset_4(auStack_c4);
        auStack_20[0] = auStack_20[0] >> 1;
        auStack_20[1] = 0;
        auStack_20[2] = 0;
        auStack_20[3] = 0;
        auStack_20[4] = 0;
        uStack_50 = 0;
        uStack_5c = *(uint32_t *)(param_5 + 0x20);
        uStack_58 = *(uint32_t *)(param_5 + 0x24);
        uStack_54 = *(uint32_t *)(param_5 + 0x28);
        uStack_60 = *(uint32_t *)(param_5 + 0x1c);
        uStack_4e = uStack_50;
        uStack_4c = uStack_50;
        uStack_4a = uStack_50;
        auStack_48[0] = uStack_50;
        uVar6 = return_first_word_1045c514((uint32_t *)(param_5 + 0x2c));
        uStack_4c = (uint16_t)uVar6;
        copy_two_words_from_param2((int)local_84,param_5);
        iVar10 = 8;
        do {
          iVar11 = iVar10 + -4;
          *(uint32_t *)((int)auStack_48 + iVar10) = *(uint32_t *)((int)auStack_88 + iVar10);
          iVar10 = iVar11;
        } while (iVar11 != 0);
        uVar6 = return_first_word_1045c514(local_44);
        uStack_50 = (uint16_t)uVar6;
        free_heap_if_flagged_1045c402(local_44,2);
        copy_two_words_from_param2((int)local_44,param_5);
        uVar6 = read_struct_field_at_offset_4(local_44);
        uStack_4e = (uint16_t)uVar6;
        free_heap_if_flagged_1045c402(local_44,2);
        uStack_4a = 0;
        auStack_48[0] = 0;
        uVar6 = *(uint32_t *)(param_1 + 0x4c);
        uVar4 = (uint16_t)((uVar5 & 0xff) << 8);
        *(uint16_t *)((int)piVar19 + 2) = uVar4;
        *(uint **)((int)piVar19 + 4) = &uStack_24;
        *(uint **)((int)piVar19 + 8) = auStack_20;
        *(uint **)((int)piVar19 + 0xc) = auStack_20 + 1;
        *(uint **)((int)piVar19 + 0x10) = auStack_20 + 2;
        *(uint **)((int)piVar19 + 0x14) = auStack_20 + 3;
        *(uint **)((int)piVar19 + 0x18) = auStack_20 + 4;
        *(uint16_t *)((int)piVar19 + 0x1e) = 0;
        *(uint16_t *)((int)piVar19 + 0x22) = 0x80;
        *(uint16_t *)((int)piVar19 + 0x26) = 0x80;
        iVar10 = compute_six_fixed_point_values(uVar6,auStack_7c,&uStack_60,uVar4,*(uint16_t *)((int)piVar19 + 2),
                              *(int **)((int)piVar19 + 4),*(int **)((int)piVar19 + 8),
                              *(int **)((int)piVar19 + 0xc),*(int **)((int)piVar19 + 0x10),
                              *(int **)((int)piVar19 + 0x14),*(int **)((int)piVar19 + 0x18),
                              *(uint16_t *)((int)piVar19 + 0x1e),
                              *(uint16_t *)((int)piVar19 + 0x22),
                              *(uint16_t *)((int)piVar19 + 0x26));
        if (iVar10 != 0) {
          *(uint16_t *)((int)piVar19 + 2) = uStack_a;
          *(uint32_t *)((int)piVar19 + 4) = uStack_3c;
          *(uint32_t *)((int)piVar19 + 8) = uStack_38;
          *(uint32_t *)((int)piVar19 + 0xc) = uStack_34;
          *(uint32_t *)((int)piVar19 + 0x10) = uStack_30;
          *(uint32_t *)((int)piVar19 + 0x14) = uStack_2c;
          *(uint32_t *)((int)piVar19 + 0x18) = uStack_28;
          update_viewfinder_overlay_bounds(param_3,&uStack_a0);
          free_heap_if_flagged_1045c402(auStack_c4,2);
          cls_105b9458_delete(auStack_2d8,2);
          return iVar10;
        }
      }
    }
  }
  free_heap_if_flagged_1045c402(auStack_c4,2);
LAB_104c7df2:
  cls_105b9458_delete(auStack_2d8,2);
  return 0;
}
