/* @k10d process_sensor_readout_buffers @ 0x104cd5d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Allocates and processes up to four sensor data buffers based on a mode bitmask, writing
 *   results to output pointers.
 * summary:
 *   The function allocates four 1KB heap buffers and determines dimensions (width/height)
 *   from a source object. It checks a 4-bit mode mask at param_1+0x1fc to selectively
 *   process up to four data streams. For each enabled stream, it calls a processing routine
 *   (build_exposure_param_block) and stores the result pointer in the corresponding output
 *   slot (param_1+0x200..0x20c). If processing fails, it zeroes the output buffers.
 *   Finally, it sets a status code at param_1+0x214 and frees the temporary buffers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_sensor_readout_buffers(int param_1)

{
  uint16_t uVar1;
  uint16_t uVar2;
  uint32_t uVar3;
  cls_105b934c *pcVar4;
  cls_105b934c *pcVar5;
  cls_105b934c *pcVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint32_t extraout_r4;
  uint32_t extraout_r4_00;
  uint extraout_r4_01;
  uint extraout_r4_02;
  int iVar13;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint extraout_r5_01;
  uint extraout_r5_02;
  uint32_t *puVar14;
  int iVar15;
  int iVar16;
  uintptr_t sp;
  int *piVar17;
  uint64_t uVar18;
  uint8_t auStack_3b4 [12];
  uint uStack_38c;
  uint uStack_388;
  uint32_t auStack_310 [3];
  cls_105b9458 cStack_304;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  uint8_t auStack_e8 [8];
  uint8_t auStack_e0 [88];
  uint32_t auStack_88 [22];
  uint32_t auStack_30 [7];
  uint8_t uStack_11;
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  
  piVar17 = (int *)auStack_3b4;
  piVar7 = (int *)heap_alloc_2(0x400);
  piVar8 = (int *)heap_alloc_2(0x400);
  piVar9 = (int *)heap_alloc_2(0x400);
  piVar10 = (int *)heap_alloc_2(0x400);
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  uStack_a = 0;
  copy_two_words_from_param2((int)auStack_e8,*(int *)(param_1 + 0x1f8));
  iVar13 = 8;
  do {
    iVar15 = iVar13 + -4;
    *(uint32_t *)((int)auStack_310 + iVar13) = *(uint32_t *)((int)&uStack_ec + iVar13);
    iVar13 = iVar15;
  } while (iVar15 != 0);
  puVar14 = auStack_310 + 1;
  uVar11 = return_first_word_1045c514(puVar14);
  free_heap_if_flagged_1045c402(puVar14,2);
  copy_two_words_from_param2((int)auStack_e8,*(int *)(param_1 + 0x1f8));
  iVar13 = 8;
  do {
    iVar15 = iVar13 + -4;
    *(uint32_t *)((int)auStack_310 + iVar13) = *(uint32_t *)((int)&uStack_ec + iVar13);
    iVar13 = iVar15;
  } while (iVar15 != 0);
  uVar12 = read_struct_field_at_offset_4(puVar14);
  free_heap_if_flagged_1045c402(puVar14,2);
  if ((uVar11 < 0x281) || (uVar12 < 0x1e1)) {
    uStack_38c = ((uVar11 >> 5) - 1) * 0x20;
    compute_lens_fw_crc32(uVar11);
    compute_lens_fw_crc32(uVar12);
    compute_lens_fw_crc32(uStack_38c);
    uVar18 = multiply_fixed_point_values_105445a2(extraout_r4_00,extraout_r5_00,extraout_r4,extraout_r5);
    multiply_two_floats((uint)((ulonglong)uVar18 >> 0x20),(uint)uVar18,extraout_r4_01,extraout_r5_01);
    uStack_388 = normalize_fixed_point_value_105448ac(extraout_r4_02,extraout_r5_02);
    uStack_388 = uStack_388 & 0xfffe;
  }
  else {
    alloc_and_zero_struct_104bb416(auStack_e0);
    *(short *)((int)piVar17 + 2) = (short)uVar12;
    *(uint16_t *)((int)piVar17 + 6) = 100;
    dispatch_six_param_object_ops(auStack_e0,0x280,0x1e0,uVar11 & 0xffff,*(uint16_t *)((int)piVar17 + 2),
                 *(uint16_t *)((int)piVar17 + 6));
    transform_and_store_value(auStack_e0,5);
    copy_transformed_pair(auStack_e8,auStack_e0);
    iVar13 = 8;
    do {
      iVar15 = iVar13 + -4;
      *(uint32_t *)((int)auStack_88 + iVar13) = *(uint32_t *)((int)&uStack_ec + iVar13);
      iVar13 = iVar15;
    } while (iVar15 != 0);
    puVar14 = auStack_88 + 1;
    uStack_38c = return_first_word_1045c514(puVar14);
    free_heap_if_flagged_1045c402(puVar14,2);
    copy_transformed_pair(auStack_e8,auStack_e0);
    iVar13 = 8;
    do {
      iVar15 = iVar13 + -4;
      *(uint32_t *)((int)auStack_88 + iVar13) = *(uint32_t *)((int)&uStack_ec + iVar13);
      iVar13 = iVar15;
    } while (iVar15 != 0);
    uStack_388 = read_struct_field_at_offset_4(puVar14);
    free_heap_if_flagged_1045c402(puVar14,2);
    destroy_five_member_objects(auStack_e0,2);
  }
  cls_105b9458_new(&cStack_304);
  alloc_two_word_pair_1045c3dc(&uStack_f0,uStack_38c,uStack_388);
  iVar13 = process_two_point_event(param_1,&uStack_f0,*(uint8_t **)(param_1 + 0x1f8),&cStack_304);
  if (iVar13 != 0) {
    if (((*(uint *)(param_1 + 0x1fc) & 1) != 0) && (*(int *)(param_1 + 0x200) != 0)) {
      uVar3 = *(uint32_t *)(param_1 + 0x4c);
      copy_two_words_from_param2((int)auStack_e8,(int)&cStack_304);
      iVar15 = 8;
      do {
        iVar16 = iVar15 + -4;
        *(uint32_t *)((int)auStack_88 + iVar15 + 8) = *(uint32_t *)((int)&uStack_ec + iVar15);
        iVar15 = iVar16;
      } while (iVar16 != 0);
      *piVar17 = (int)&uStack_10;
      build_exposure_param_block(uVar3,cStack_304.field_0x20,auStack_88 + 3,piVar7,(uint16_t *)*piVar17);
      free_heap_if_flagged_1045c402(auStack_88 + 3,2);
      uVar11 = piVar7[uStack_10];
      puVar14 = *(uint32_t **)(param_1 + 0x200);
      uVar1 = *(uint16_t *)(puVar14 + 1);
      uVar2 = *(uint16_t *)((int)puVar14 + 6);
      *piVar17 = *puVar14;
      *(uint16_t *)((int)piVar17 + 6) = uVar1;
      *(uint16_t *)((int)piVar17 + 10) = uVar2;
      resample_histogram_to_bars_1052c3a4(&uStack_11,piVar7,uVar11,uStack_38c * uStack_388,(uint8_t *)*piVar17,
                   *(ushort *)((int)piVar17 + 6),*(ushort *)((int)piVar17 + 10));
    }
    if ((*(uint *)(param_1 + 0x1fc) & 0xe) != 0) {
      pcVar4 = (cls_105b934c *)(auStack_88 + 5);
      cls_105b934c_new(pcVar4);
      pcVar5 = (cls_105b934c *)(auStack_88 + 0xb);
      cls_105b934c_new(pcVar5);
      pcVar6 = (cls_105b934c *)(auStack_88 + 0x11);
      cls_105b934c_new(pcVar6);
      *piVar17 = (int)pcVar6;
      iVar13 = compute_three_channel_metric(param_1,(int)&cStack_304,(int *)pcVar4,(int *)pcVar5,(int *)*piVar17);
      if (iVar13 != 0) {
        uVar11 = 0;
        if (((*(uint *)(param_1 + 0x1fc) & 2) != 0) && (*(int *)(param_1 + 0x204) != 0)) {
          uVar3 = *(uint32_t *)(param_1 + 0x4c);
          uVar12 = get_aligned_next_pointer((int)pcVar4);
          copy_two_words_from_param2((int)auStack_e8,(int)&cStack_304);
          iVar15 = 8;
          do {
            iVar16 = iVar15 + -4;
            *(uint32_t *)((int)auStack_30 + iVar15) = *(uint32_t *)((int)&uStack_ec + iVar15);
            iVar15 = iVar16;
          } while (iVar16 != 0);
          *piVar17 = (int)&uStack_e;
          build_exposure_param_block(uVar3,uVar12,auStack_30 + 1,piVar8,(uint16_t *)*piVar17);
          free_heap_if_flagged_1045c402(auStack_30 + 1,2);
          if (piVar8[uStack_e] != 0) {
            uVar11 = piVar8[uStack_e];
          }
        }
        if (((*(uint *)(param_1 + 0x1fc) & 4) != 0) && (*(int *)(param_1 + 0x208) != 0)) {
          uVar3 = *(uint32_t *)(param_1 + 0x4c);
          uVar12 = get_aligned_next_pointer((int)pcVar5);
          copy_two_words_from_param2((int)auStack_e8,(int)&cStack_304);
          iVar15 = 8;
          do {
            iVar16 = iVar15 + -4;
            *(uint32_t *)((int)auStack_30 + iVar15 + 8) =
                 *(uint32_t *)((int)&uStack_ec + iVar15);
            iVar15 = iVar16;
          } while (iVar16 != 0);
          *piVar17 = (int)&uStack_c;
          build_exposure_param_block(uVar3,uVar12,auStack_30 + 3,piVar9,(uint16_t *)*piVar17);
          free_heap_if_flagged_1045c402(auStack_30 + 3,2);
          if (uVar11 < (uint)piVar9[uStack_c]) {
            uVar11 = piVar9[uStack_c];
          }
        }
        if (((*(uint *)(param_1 + 0x1fc) & 8) != 0) && (*(int *)(param_1 + 0x20c) != 0)) {
          auStack_310[0] = *(uint32_t *)(param_1 + 0x4c);
          uVar12 = get_aligned_next_pointer((int)pcVar6);
          copy_two_words_from_param2((int)(auStack_30 + 5),(int)&cStack_304);
          *piVar17 = (int)&uStack_a;
          build_exposure_param_block(auStack_310[0],uVar12,auStack_30 + 5,piVar10,(uint16_t *)*piVar17);
          free_heap_if_flagged_1045c402(auStack_30 + 5,2);
          if (uVar11 < (uint)piVar10[uStack_a]) {
            uVar11 = piVar10[uStack_a];
          }
        }
        if (((*(uint *)(param_1 + 0x1fc) & 2) != 0) &&
           (puVar14 = *(uint32_t **)(param_1 + 0x204), puVar14 != (uint32_t *)0x0)) {
          uVar1 = *(uint16_t *)(puVar14 + 1);
          uVar2 = *(uint16_t *)((int)puVar14 + 6);
          *piVar17 = *puVar14;
          *(uint16_t *)((int)piVar17 + 6) = uVar1;
          *(uint16_t *)((int)piVar17 + 10) = uVar2;
          resample_histogram_to_bars_1052c3a4(&uStack_11,piVar8,uVar11,uStack_38c * uStack_388,(uint8_t *)*piVar17,
                       *(ushort *)((int)piVar17 + 6),*(ushort *)((int)piVar17 + 10));
        }
        if (((*(uint *)(param_1 + 0x1fc) & 4) != 0) &&
           (puVar14 = *(uint32_t **)(param_1 + 0x208), puVar14 != (uint32_t *)0x0)) {
          uVar1 = *(uint16_t *)(puVar14 + 1);
          uVar2 = *(uint16_t *)((int)puVar14 + 6);
          *piVar17 = *puVar14;
          *(uint16_t *)((int)piVar17 + 6) = uVar1;
          *(uint16_t *)((int)piVar17 + 10) = uVar2;
          resample_histogram_to_bars_1052c3a4(&uStack_11,piVar9,uVar11,uStack_38c * uStack_388,(uint8_t *)*piVar17,
                       *(ushort *)((int)piVar17 + 6),*(ushort *)((int)piVar17 + 10));
        }
        if (((*(uint *)(param_1 + 0x1fc) & 8) != 0) &&
           (puVar14 = *(uint32_t **)(param_1 + 0x20c), puVar14 != (uint32_t *)0x0)) {
          uVar1 = *(uint16_t *)(puVar14 + 1);
          uVar2 = *(uint16_t *)((int)puVar14 + 6);
          *piVar17 = *puVar14;
          *(uint16_t *)((int)piVar17 + 6) = uVar1;
          *(uint16_t *)((int)piVar17 + 10) = uVar2;
          resample_histogram_to_bars_1052c3a4(&uStack_11,piVar10,uVar11,uStack_38c * uStack_388,(uint8_t *)*piVar17,
                       *(ushort *)((int)piVar17 + 6),*(ushort *)((int)piVar17 + 10));
        }
      }
      cls_105b934c_delete(pcVar6,2);
      cls_105b934c_delete(pcVar5,2);
      cls_105b934c_delete(pcVar4,2);
    }
  }
  heap_free_2((int)piVar7);
  heap_free_2((int)piVar8);
  heap_free_2((int)piVar9);
  heap_free_2((int)piVar10);
  if (iVar13 == 0) {
    if ((((*(uint *)(param_1 + 0x1fc) & 1) != 0) &&
        (piVar7 = *(int **)(param_1 + 0x200), piVar7 != (int *)0x0)) &&
       (iVar13 = 0, *(short *)((int)piVar7 + 6) != 0)) {
      do {
        *(uint8_t *)(*piVar7 + iVar13) = 0;
        piVar7 = *(int **)(param_1 + 0x200);
        iVar13 = iVar13 + 1;
      } while (iVar13 < (int)(uint)*(ushort *)((int)piVar7 + 6));
    }
    if ((*(uint *)(param_1 + 0x1fc) & 0xe) != 0) {
      if ((((*(uint *)(param_1 + 0x1fc) & 2) != 0) &&
          (piVar7 = *(int **)(param_1 + 0x204), piVar7 != (int *)0x0)) &&
         (iVar13 = 0, *(short *)((int)piVar7 + 6) != 0)) {
        do {
          *(uint8_t *)(*piVar7 + iVar13) = 0;
          piVar7 = *(int **)(param_1 + 0x204);
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)(uint)*(ushort *)((int)piVar7 + 6));
      }
      if ((((*(uint *)(param_1 + 0x1fc) & 4) != 0) &&
          (piVar7 = *(int **)(param_1 + 0x208), piVar7 != (int *)0x0)) &&
         (iVar13 = 0, *(short *)((int)piVar7 + 6) != 0)) {
        do {
          *(uint8_t *)(*piVar7 + iVar13) = 0;
          piVar7 = *(int **)(param_1 + 0x208);
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)(uint)*(ushort *)((int)piVar7 + 6));
      }
      if ((((*(uint *)(param_1 + 0x1fc) & 8) != 0) &&
          (piVar7 = *(int **)(param_1 + 0x20c), piVar7 != (int *)0x0)) &&
         (iVar13 = 0, *(short *)((int)piVar7 + 6) != 0)) {
        do {
          *(uint8_t *)(*piVar7 + iVar13) = 0;
          piVar7 = *(int **)(param_1 + 0x20c);
          iVar13 = iVar13 + 1;
        } while (iVar13 < (int)(uint)*(ushort *)((int)piVar7 + 6));
      }
    }
    if (*(char *)(param_1 + 0x219) == '\0') {
      *(uint32_t *)(param_1 + 0x214) = 0;
    }
    else {
      *(uint32_t *)(param_1 + 0x214) = 3;
    }
  }
  else {
    *(uint32_t *)(param_1 + 0x214) = 1;
  }
  *(uint32_t *)(param_1 + 0x210) = 0xc0017;
  free_heap_if_flagged_1045c402(&uStack_f0,2);
  cls_105b9458_delete(&cStack_304,2);
  return;
}
