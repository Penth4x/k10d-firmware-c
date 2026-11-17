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
  int *piVar3;
  uint32_t uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  uint32_t extraout_r4;
  uint32_t extraout_r4_00;
  uint extraout_r4_01;
  uint extraout_r4_02;
  int iVar11;
  uint32_t extraout_r5;
  uint32_t extraout_r5_00;
  uint extraout_r5_01;
  uint extraout_r5_02;
  uint32_t *puVar12;
  int iVar13;
  int iVar14;
  uintptr_t sp;
  int *piVar15;
  uint64_t uVar16;
  uint8_t auStack_3b4 [12];
  uint uStack_38c;
  uint uStack_388;
  uint32_t auStack_310 [3];
  uint8_t auStack_304 [32];
  uint32_t uStack_2e4;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  uint8_t auStack_e8 [8];
  uint8_t auStack_e0 [88];
  int aiStack_88 [11];
  int aiStack_5c [6];
  uint32_t auStack_44 [5];
  uint32_t auStack_30 [7];
  uint8_t uStack_11;
  ushort uStack_10;
  ushort uStack_e;
  ushort uStack_c;
  ushort uStack_a;
  
  piVar15 = (int *)auStack_3b4;
  piVar5 = (int *)heap_alloc_2(0x400);
  piVar6 = (int *)heap_alloc_2(0x400);
  piVar7 = (int *)heap_alloc_2(0x400);
  piVar8 = (int *)heap_alloc_2(0x400);
  uStack_10 = 0;
  uStack_e = 0;
  uStack_c = 0;
  uStack_a = 0;
  copy_two_words_from_param2((int)auStack_e8,*(int *)(param_1 + 0x1f8));
  iVar11 = 8;
  do {
    iVar13 = iVar11 + -4;
    *(uint32_t *)((int)auStack_310 + iVar11) = *(uint32_t *)((int)&uStack_ec + iVar11);
    iVar11 = iVar13;
  } while (iVar13 != 0);
  puVar12 = auStack_310 + 1;
  uVar9 = return_first_word_1045c514(puVar12);
  free_heap_if_flagged_1045c402(puVar12,2);
  copy_two_words_from_param2((int)auStack_e8,*(int *)(param_1 + 0x1f8));
  iVar11 = 8;
  do {
    iVar13 = iVar11 + -4;
    *(uint32_t *)((int)auStack_310 + iVar11) = *(uint32_t *)((int)&uStack_ec + iVar11);
    iVar11 = iVar13;
  } while (iVar13 != 0);
  uVar10 = read_struct_field_at_offset_4(puVar12);
  free_heap_if_flagged_1045c402(puVar12,2);
  if ((uVar9 < 0x281) || (uVar10 < 0x1e1)) {
    uStack_38c = ((uVar9 >> 5) - 1) * 0x20;
    compute_lens_fw_crc32(uVar9);
    compute_lens_fw_crc32(uVar10);
    compute_lens_fw_crc32(uStack_38c);
    uVar16 = multiply_fixed_point_values_105445a2(extraout_r4_00,extraout_r5_00,extraout_r4,extraout_r5);
    multiply_two_floats((uint)((ulonglong)uVar16 >> 0x20),(uint)uVar16,extraout_r4_01,extraout_r5_01);
    uStack_388 = normalize_fixed_point_value_105448ac(extraout_r4_02,extraout_r5_02);
    uStack_388 = uStack_388 & 0xfffe;
  }
  else {
    alloc_and_zero_struct_104bb416((void *)auStack_e0);
    *(short *)((int)piVar15 + 2) = (short)uVar10;
    *(uint16_t *)((int)piVar15 + 6) = 100;
    dispatch_six_param_object_ops(auStack_e0,0x280,0x1e0,uVar9 & 0xffff,*(uint16_t *)((int)piVar15 + 2),
                 *(uint16_t *)((int)piVar15 + 6));
    transform_and_store_value(auStack_e0,5);
    copy_transformed_pair(auStack_e8,auStack_e0);
    iVar11 = 8;
    do {
      iVar13 = iVar11 + -4;
      *(uint32_t *)((int)aiStack_88 + iVar11) = *(uint32_t *)((int)&uStack_ec + iVar11);
      iVar11 = iVar13;
    } while (iVar13 != 0);
    piVar3 = aiStack_88 + 1;
    uStack_38c = return_first_word_1045c514(piVar3);
    free_heap_if_flagged_1045c402(piVar3,2);
    copy_transformed_pair(auStack_e8,auStack_e0);
    iVar11 = 8;
    do {
      iVar13 = iVar11 + -4;
      *(uint32_t *)((int)aiStack_88 + iVar11) = *(uint32_t *)((int)&uStack_ec + iVar11);
      iVar11 = iVar13;
    } while (iVar13 != 0);
    uStack_388 = read_struct_field_at_offset_4(piVar3);
    free_heap_if_flagged_1045c402(piVar3,2);
    destroy_five_member_objects(auStack_e0,2);
  }
  cls_105b9458_new((void *)auStack_304);
  alloc_two_word_pair_1045c3dc(&uStack_f0,uStack_38c,uStack_388);
  iVar11 = process_two_point_event(param_1,&uStack_f0,*(uint8_t **)(param_1 + 0x1f8),auStack_304);
  if (iVar11 != 0) {
    if (((*(uint *)(param_1 + 0x1fc) & 1) != 0) && (*(int *)(param_1 + 0x200) != 0)) {
      uVar4 = *(uint32_t *)(param_1 + 0x4c);
      copy_two_words_from_param2((int)auStack_e8,(int)auStack_304);
      iVar13 = 8;
      do {
        iVar14 = iVar13 + -4;
        *(uint32_t *)((int)aiStack_88 + iVar13 + 8) = *(uint32_t *)((int)&uStack_ec + iVar13);
        iVar13 = iVar14;
      } while (iVar14 != 0);
      *piVar15 = (int)&uStack_10;
      build_exposure_param_block(uVar4,uStack_2e4,aiStack_88 + 3,piVar5,(uint16_t *)*piVar15);
      free_heap_if_flagged_1045c402(aiStack_88 + 3,2);
      uVar9 = piVar5[uStack_10];
      puVar12 = *(uint32_t **)(param_1 + 0x200);
      uVar1 = *(uint16_t *)(puVar12 + 1);
      uVar2 = *(uint16_t *)((int)puVar12 + 6);
      *piVar15 = *puVar12;
      *(uint16_t *)((int)piVar15 + 6) = uVar1;
      *(uint16_t *)((int)piVar15 + 10) = uVar2;
      apply_tone_curve_lut(&uStack_11,piVar5,uVar9,uStack_38c * uStack_388,(uint8_t *)*piVar15,
                   *(ushort *)((int)piVar15 + 6),*(ushort *)((int)piVar15 + 10));
    }
    if ((*(uint *)(param_1 + 0x1fc) & 0xe) != 0) {
      piVar3 = aiStack_88 + 5;
      cls_105b934c_new(piVar3);
      cls_105b934c_new(aiStack_5c);
      cls_105b934c_new(auStack_44);
      *piVar15 = (int)auStack_44;
      iVar11 = compute_three_channel_metric(param_1,(int)auStack_304,piVar3,aiStack_5c,(int *)*piVar15);
      if (iVar11 != 0) {
        uVar9 = 0;
        if (((*(uint *)(param_1 + 0x1fc) & 2) != 0) && (*(int *)(param_1 + 0x204) != 0)) {
          uVar4 = *(uint32_t *)(param_1 + 0x4c);
          uVar10 = get_aligned_next_pointer((int)piVar3);
          copy_two_words_from_param2((int)auStack_e8,(int)auStack_304);
          iVar13 = 8;
          do {
            iVar14 = iVar13 + -4;
            *(uint32_t *)((int)auStack_30 + iVar13) = *(uint32_t *)((int)&uStack_ec + iVar13);
            iVar13 = iVar14;
          } while (iVar14 != 0);
          *piVar15 = (int)&uStack_e;
          build_exposure_param_block(uVar4,uVar10,auStack_30 + 1,piVar6,(uint16_t *)*piVar15);
          free_heap_if_flagged_1045c402(auStack_30 + 1,2);
          if (piVar6[uStack_e] != 0) {
            uVar9 = piVar6[uStack_e];
          }
        }
        if (((*(uint *)(param_1 + 0x1fc) & 4) != 0) && (*(int *)(param_1 + 0x208) != 0)) {
          uVar4 = *(uint32_t *)(param_1 + 0x4c);
          uVar10 = get_aligned_next_pointer((int)aiStack_5c);
          copy_two_words_from_param2((int)auStack_e8,(int)auStack_304);
          iVar13 = 8;
          do {
            iVar14 = iVar13 + -4;
            *(uint32_t *)((int)auStack_30 + iVar13 + 8) =
                 *(uint32_t *)((int)&uStack_ec + iVar13);
            iVar13 = iVar14;
          } while (iVar14 != 0);
          *piVar15 = (int)&uStack_c;
          build_exposure_param_block(uVar4,uVar10,auStack_30 + 3,piVar7,(uint16_t *)*piVar15);
          free_heap_if_flagged_1045c402(auStack_30 + 3,2);
          if (uVar9 < (uint)piVar7[uStack_c]) {
            uVar9 = piVar7[uStack_c];
          }
        }
        if (((*(uint *)(param_1 + 0x1fc) & 8) != 0) && (*(int *)(param_1 + 0x20c) != 0)) {
          auStack_310[0] = *(uint32_t *)(param_1 + 0x4c);
          uVar10 = get_aligned_next_pointer((int)auStack_44);
          copy_two_words_from_param2((int)(auStack_30 + 5),(int)auStack_304);
          *piVar15 = (int)&uStack_a;
          build_exposure_param_block(auStack_310[0],uVar10,auStack_30 + 5,piVar8,(uint16_t *)*piVar15);
          free_heap_if_flagged_1045c402(auStack_30 + 5,2);
          if (uVar9 < (uint)piVar8[uStack_a]) {
            uVar9 = piVar8[uStack_a];
          }
        }
        if (((*(uint *)(param_1 + 0x1fc) & 2) != 0) &&
           (puVar12 = *(uint32_t **)(param_1 + 0x204), puVar12 != (uint32_t *)0x0)) {
          uVar1 = *(uint16_t *)(puVar12 + 1);
          uVar2 = *(uint16_t *)((int)puVar12 + 6);
          *piVar15 = *puVar12;
          *(uint16_t *)((int)piVar15 + 6) = uVar1;
          *(uint16_t *)((int)piVar15 + 10) = uVar2;
          apply_tone_curve_lut(&uStack_11,piVar6,uVar9,uStack_38c * uStack_388,(uint8_t *)*piVar15,
                       *(ushort *)((int)piVar15 + 6),*(ushort *)((int)piVar15 + 10));
        }
        if (((*(uint *)(param_1 + 0x1fc) & 4) != 0) &&
           (puVar12 = *(uint32_t **)(param_1 + 0x208), puVar12 != (uint32_t *)0x0)) {
          uVar1 = *(uint16_t *)(puVar12 + 1);
          uVar2 = *(uint16_t *)((int)puVar12 + 6);
          *piVar15 = *puVar12;
          *(uint16_t *)((int)piVar15 + 6) = uVar1;
          *(uint16_t *)((int)piVar15 + 10) = uVar2;
          apply_tone_curve_lut(&uStack_11,piVar7,uVar9,uStack_38c * uStack_388,(uint8_t *)*piVar15,
                       *(ushort *)((int)piVar15 + 6),*(ushort *)((int)piVar15 + 10));
        }
        if (((*(uint *)(param_1 + 0x1fc) & 8) != 0) &&
           (puVar12 = *(uint32_t **)(param_1 + 0x20c), puVar12 != (uint32_t *)0x0)) {
          uVar1 = *(uint16_t *)(puVar12 + 1);
          uVar2 = *(uint16_t *)((int)puVar12 + 6);
          *piVar15 = *puVar12;
          *(uint16_t *)((int)piVar15 + 6) = uVar1;
          *(uint16_t *)((int)piVar15 + 10) = uVar2;
          apply_tone_curve_lut(&uStack_11,piVar8,uVar9,uStack_38c * uStack_388,(uint8_t *)*piVar15,
                       *(ushort *)((int)piVar15 + 6),*(ushort *)((int)piVar15 + 10));
        }
      }
      cls_105b934c_delete(auStack_44,2);
      cls_105b934c_delete(aiStack_5c,2);
      cls_105b934c_delete(piVar3,2);
    }
  }
  heap_free_2((int)piVar5);
  heap_free_2((int)piVar6);
  heap_free_2((int)piVar7);
  heap_free_2((int)piVar8);
  if (iVar11 == 0) {
    if ((((*(uint *)(param_1 + 0x1fc) & 1) != 0) &&
        (piVar5 = *(int **)(param_1 + 0x200), piVar5 != (int *)0x0)) &&
       (iVar11 = 0, *(short *)((int)piVar5 + 6) != 0)) {
      do {
        *(uint8_t *)(*piVar5 + iVar11) = 0;
        piVar5 = *(int **)(param_1 + 0x200);
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)(uint)*(ushort *)((int)piVar5 + 6));
    }
    if ((*(uint *)(param_1 + 0x1fc) & 0xe) != 0) {
      if ((((*(uint *)(param_1 + 0x1fc) & 2) != 0) &&
          (piVar5 = *(int **)(param_1 + 0x204), piVar5 != (int *)0x0)) &&
         (iVar11 = 0, *(short *)((int)piVar5 + 6) != 0)) {
        do {
          *(uint8_t *)(*piVar5 + iVar11) = 0;
          piVar5 = *(int **)(param_1 + 0x204);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)(uint)*(ushort *)((int)piVar5 + 6));
      }
      if ((((*(uint *)(param_1 + 0x1fc) & 4) != 0) &&
          (piVar5 = *(int **)(param_1 + 0x208), piVar5 != (int *)0x0)) &&
         (iVar11 = 0, *(short *)((int)piVar5 + 6) != 0)) {
        do {
          *(uint8_t *)(*piVar5 + iVar11) = 0;
          piVar5 = *(int **)(param_1 + 0x208);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)(uint)*(ushort *)((int)piVar5 + 6));
      }
      if ((((*(uint *)(param_1 + 0x1fc) & 8) != 0) &&
          (piVar5 = *(int **)(param_1 + 0x20c), piVar5 != (int *)0x0)) &&
         (iVar11 = 0, *(short *)((int)piVar5 + 6) != 0)) {
        do {
          *(uint8_t *)(*piVar5 + iVar11) = 0;
          piVar5 = *(int **)(param_1 + 0x20c);
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)(uint)*(ushort *)((int)piVar5 + 6));
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
  cls_105b9458_delete(auStack_304,2);
  return;
}
