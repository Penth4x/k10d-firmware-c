/* @k10d apply_bayer_pixel_mask @ 0x1048c506
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Applies a bitwise mask to pixel data in a buffer based on a flag in the object.
 * summary:
 *   The function initializes an object structure and then processes a data buffer (likely a
 *   Bayer image) by applying a bitwise mask. It uses a flag at offset 0x18 to select
 *   between shifting pixels right by 1 (clearing LSB) or masking with
 *   0x44444444/0x11111111. It iterates through rows of the buffer, applying the mask to
 *   each pixel.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x1048c606) overlaps instruction at (ram,0x1048c604)
    */

void apply_bayer_pixel_mask(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  void *pvVar5;
  uint extraout_r4;
  uint extraout_r4_00;
  uint extraout_r5;
  uint extraout_r5_00;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uintptr_t sp;
  uint64_t uVar11;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  int aiStack_6c [13];
  uint32_t auStack_38 [2];
  uint32_t auStack_30 [2];
  uint32_t auStack_28 [4];
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  aiStack_6c[0] = param_2;
  uVar3 = select_channel_by_index(*(uint32_t *)(param_1 + 0x1c));
  *(uint32_t *)(param_1 + 4) = uVar3;
  *(uint32_t *)(param_1 + 8) = 0;
  *(uint32_t *)(param_1 + 0xc) = 0;
  *(uint32_t *)(param_1 + 0x10) = 0;
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar8 = 8;
  do {
    iVar10 = iVar8 + -4;
    *(uint32_t *)((int)aiStack_6c + iVar8 + 8) = *(uint32_t *)(iVar10 + iVar2 + 0x10);
    iVar8 = iVar10;
  } while (iVar10 != 0);
  iVar8 = 8;
  do {
    iVar2 = iVar8 + -4;
    *(uint32_t *)((int)aiStack_6c + iVar8) = *(uint32_t *)((int)aiStack_6c + iVar8 + 8);
    iVar8 = iVar2;
  } while (iVar2 != 0);
  piVar6 = aiStack_6c + 1;
  uVar3 = return_first_word_1045c514(piVar6);
  *(short *)(param_1 + 0x14) = (short)uVar3;
  free_heap_if_flagged_1045c402(piVar6,2);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar8 = 8;
  do {
    iVar10 = iVar8 + -4;
    *(uint32_t *)((int)aiStack_6c + iVar8 + 8) = *(uint32_t *)(iVar10 + iVar2 + 0x10);
    iVar8 = iVar10;
  } while (iVar10 != 0);
  iVar8 = 8;
  do {
    iVar2 = iVar8 + -4;
    *(uint32_t *)((int)aiStack_6c + iVar8) = *(uint32_t *)((int)aiStack_6c + iVar8 + 8);
    iVar8 = iVar2;
  } while (iVar2 != 0);
  uVar3 = read_struct_field_at_offset_4(piVar6);
  *(short *)(param_1 + 0x16) = (short)uVar3;
  free_heap_if_flagged_1045c402(piVar6,2);
  iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
  uVar3 = (**(code **)(iVar8 + 0x24))(*(int *)(param_1 + 0x1c) + (int)*(short *)(iVar8 + 0x20));
  set_byte_at_offset_0x18(param_1,uVar3);
  (**(code **)(*(int *)(param_1 + 0x20) + 0x14))
            (*(short *)(*(int *)(param_1 + 0x20) + 0x10) + param_1);
  if (aiStack_6c[0] == 0) {
    (**(code **)(*(int *)(param_1 + 0x20) + 0x1c))
              (aiStack_6c + 9,*(short *)(*(int *)(param_1 + 0x20) + 0x18) + param_1);
    iVar8 = 0x10;
    do {
      iVar2 = iVar8 + -4;
      *(uint32_t *)((int)aiStack_6c + iVar8 + 0x10) =
           *(uint32_t *)((int)aiStack_6c + iVar8 + 0x20);
      iVar8 = iVar2;
    } while (iVar2 != 0);
    piVar6 = aiStack_6c + 5;
    if (*(char *)(param_1 + 0x18) == '\0') {
      iVar8 = call_single_helper_1045c0f2(piVar6);
      iVar10 = *(int *)(param_1 + 4);
      iVar2 = call_single_helper_with_param_1045c10e((int)piVar6);
      iVar8 = iVar10 + iVar8 + iVar2 * (uint)*(ushort *)(param_1 + 0x14);
      uStack_80 = 0;
      iVar2 = increment_callee_result_1045c1de(piVar6);
      if (iVar2 != 0) {
        do {
          iVar2 = increment_callee_result_1045c1c4();
          uVar4 = 0;
          if (iVar2 != 0) {
            do {
              *(char *)(uVar4 + iVar8) = (char)((int)(uint)*(byte *)(uVar4 + iVar8) >> 1);
              uVar4 = uVar4 + 1;
              uVar7 = increment_callee_result_1045c1c4();
            } while (uVar4 < uVar7);
          }
          iVar8 = (uint)*(ushort *)(param_1 + 0x14) + iVar8;
          uStack_80 = uStack_80 + 1;
          uVar4 = increment_callee_result_1045c1de(aiStack_6c + 5);
        } while (uStack_80 < uVar4);
      }
    }
    else {
      uVar4 = call_single_helper_1045c0f2(piVar6);
      iVar8 = uVar4 - (uVar4 & 0xfffffff8);
      if (iVar8 != 0) {
        forward_two_args_to_helper_1045c0e4(piVar6,uVar4 - iVar8);
        iVar2 = read_field_at_offset_8_1045c1b4((int)piVar6);
        uVar3 = call_helper_with_offset_pointer_1045c1ce((int)piVar6);
        pvVar5 = (void *)alloc_two_word_pair_1045c3dc(auStack_38,iVar2 + iVar8,uVar3);
        copy_four_words(piVar6,pvVar5);
        free_heap_if_flagged_1045c402(auStack_38,2);
      }
      uVar4 = read_field_at_offset_8_1045c1b4((int)piVar6);
      if (uVar4 == (uVar4 & 0xfffffff8)) {
        iVar8 = read_field_at_offset_8_1045c1b4((int)piVar6);
      }
      else {
        iVar8 = read_field_at_offset_8_1045c1b4((int)piVar6);
        uVar4 = read_field_at_offset_8_1045c1b4((int)piVar6);
        iVar8 = iVar8 + 8 + ((uVar4 & 0xfffffff8) - uVar4);
      }
      uVar3 = call_helper_with_offset_pointer_1045c1ce((int)piVar6);
      pvVar5 = (void *)alloc_two_word_pair_1045c3dc(auStack_30,iVar8,uVar3);
      copy_four_words(piVar6,pvVar5);
      free_heap_if_flagged_1045c402(auStack_30,2);
      uVar1 = *(ushort *)(param_1 + 0x14);
      uVar11 = abs_uint32(*(uint16_t *)(param_1 + 0x16));
      multiply_two_floats((uint)((ulonglong)uVar11 >> 0x20),(uint)uVar11,0x3ff80000,0);
      iVar8 = normalize_fixed_point_value_105448ac(extraout_r4,extraout_r5);
      iVar9 = *(int *)(param_1 + 4);
      iVar2 = call_single_helper_1045c0f2(piVar6);
      iVar10 = call_single_helper_with_param_1045c10e((int)piVar6);
      iVar2 = (uint)uVar1 * iVar8 + iVar9 + iVar2 / 2 +
              iVar10 * ((int)(uint)*(ushort *)(param_1 + 0x14) >> 1);
      uStack_84 = 0;
      iVar8 = increment_callee_result_1045c1de(piVar6);
      if (iVar8 != 0) {
        do {
          uVar4 = increment_callee_result_1045c1c4();
          uVar7 = 0;
          if (uVar4 >> 3 != 0) {
            iVar8 = 0;
            do {
              *(uint *)(iVar8 + iVar2) = *(uint *)(iVar8 + iVar2) & 0x44444444;
              uVar7 = uVar7 + 1;
              uVar4 = increment_callee_result_1045c1c4();
              iVar8 = iVar8 + 4;
            } while (uVar7 < uVar4 >> 3);
          }
          iVar2 = ((int)(uint)*(ushort *)(param_1 + 0x14) >> 3) * 4 + iVar2;
          uStack_84 = uStack_84 + 1;
          uVar4 = increment_callee_result_1045c1de(aiStack_6c + 5);
        } while (uStack_84 < uVar4);
      }
    }
    destroy_text_widget(aiStack_6c + 5,2);
  }
  if (*(char *)(param_1 + 0x19) != '\0') {
    (**(code **)(*(int *)(param_1 + 0x20) + 0x1c))
              (auStack_28,*(short *)(*(int *)(param_1 + 0x20) + 0x18) + param_1);
    uVar4 = call_single_helper_1045c0f2(auStack_28);
    iVar8 = uVar4 - (uVar4 & 0xfffffff8);
    if (iVar8 != 0) {
      forward_two_args_to_helper_1045c0e4(auStack_28,uVar4 - iVar8);
      iVar2 = read_field_at_offset_8_1045c1b4((int)auStack_28);
      uVar3 = call_helper_with_offset_pointer_1045c1ce((int)auStack_28);
      pvVar5 = (void *)alloc_two_word_pair_1045c3dc(auStack_18,iVar2 + iVar8,uVar3);
      copy_four_words(auStack_28,pvVar5);
      free_heap_if_flagged_1045c402(auStack_18,2);
    }
    uVar4 = read_field_at_offset_8_1045c1b4((int)auStack_28);
    if (uVar4 == (uVar4 & 0xfffffff8)) {
      iVar8 = read_field_at_offset_8_1045c1b4((int)auStack_28);
    }
    else {
      iVar8 = read_field_at_offset_8_1045c1b4((int)auStack_28);
      uVar4 = read_field_at_offset_8_1045c1b4((int)auStack_28);
      iVar8 = iVar8 + 8 + ((uVar4 & 0xfffffff8) - uVar4);
    }
    uVar3 = call_helper_with_offset_pointer_1045c1ce((int)auStack_28);
    pvVar5 = (void *)alloc_two_word_pair_1045c3dc(auStack_10,iVar8,uVar3);
    copy_four_words(auStack_28,pvVar5);
    free_heap_if_flagged_1045c402(auStack_10,2);
    uVar1 = *(ushort *)(param_1 + 0x14);
    uVar11 = abs_uint32(*(uint16_t *)(param_1 + 0x16));
    multiply_two_floats((uint)((ulonglong)uVar11 >> 0x20),(uint)uVar11,0x3ff80000,0);
    iVar8 = normalize_fixed_point_value_105448ac(extraout_r4_00,extraout_r5_00);
    iVar9 = *(int *)(param_1 + 4);
    iVar2 = call_single_helper_1045c0f2(auStack_28);
    iVar10 = call_single_helper_with_param_1045c10e((int)auStack_28);
    iVar2 = (uint)uVar1 * iVar8 + iVar9 + iVar2 / 2 +
            iVar10 * ((int)(uint)*(ushort *)(param_1 + 0x14) >> 1);
    uStack_88 = 0;
    iVar8 = increment_callee_result_1045c1de(auStack_28);
    if (iVar8 != 0) {
      do {
        uVar4 = increment_callee_result_1045c1c4();
        uVar7 = 0;
        if (uVar4 >> 3 != 0) {
          iVar8 = 0;
          do {
            *(uint *)(iVar8 + iVar2) = *(uint *)(iVar8 + iVar2) | 0x11111111;
            uVar7 = uVar7 + 1;
            uVar4 = increment_callee_result_1045c1c4();
            iVar8 = iVar8 + 4;
          } while (uVar7 < uVar4 >> 3);
        }
        iVar2 = ((int)(uint)*(ushort *)(param_1 + 0x14) >> 3) * 4 + iVar2;
        uStack_88 = uStack_88 + 1;
        uVar4 = increment_callee_result_1045c1de(auStack_28);
      } while (uStack_88 < uVar4);
    }
    destroy_text_widget(auStack_28,2);
  }
  return;
}
