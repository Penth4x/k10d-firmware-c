/* @k10d render_decimal_digits_to_object @ 0x103a39c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Decomposes an integer into decimal digits and invokes per-digit rendering callbacks on
 *   a target object.
 * summary:
 *   The function iterates through decimal places (dividing by 10, 100, etc. from
 *   DAT_105649bc) to extract individual digits. For each non-zero digit, it selects a
 *   specific callback (map_mode_index_to_event_id_103a3d4a through
 *   map_mode_index_to_resource_id_103a40b0) based on the digit's position and a mode flag
 *   (param_5). It then calls a virtual method on an object obtained via menu_item_register
 *   to process the digit at a calculated offset. The layout logic (0x30 vs 0x18 spacing)
 *   suggests formatting a multi-digit numeric value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103a3d40) overlaps instruction at (ram,0x103a3d3e)
    */

void render_decimal_digits_to_object(int param_1,uint32_t param_2,int param_3,uint32_t param_4,char param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uintptr_t sp;
  int iStack_50;
  uint uStack_4c;
  int iStack_18;
  uint32_t auStack_10 [2];
  
  iVar3 = lookup_shutter_speed_value(*(uint32_t *)(param_1 + 0x28),param_2);
  if (param_5 == '\0') {
    iVar2 = 0x30;
  }
  else {
    iVar2 = 0x18;
  }
  iVar4 = check_buffer_size_by_type(*(uint32_t *)(param_1 + 0x28),param_2);
  iVar7 = 0;
  iStack_18 = 1;
  iStack_50 = 0;
  uStack_4c = iVar2 * 3 + param_3;
  do {
    if (iVar3 / *(int *)(&DAT_105649bc/*ROM*/ + iStack_50) != 0) {
      iVar6 = (iVar3 / *(int *)(&DAT_105649bc/*ROM*/ + iStack_50)) % 10;
      if (param_5 == '\0') {
        if (iVar4 == 0) {
          map_mode_index_to_event_id_103a3d4a(param_1,iVar6,iVar7);
        }
        else {
          map_mode_index_to_id_103a3df8(param_1,iVar6,iVar7);
        }
      }
      else if (param_5 == '\x01') {
        if (iVar4 == 0) {
          map_mode_index_to_event_id_103a3ea6(param_1,iVar6,iVar7);
        }
        else {
          map_mode_index_to_id_103a3f54(param_1,iVar6,iVar7);
        }
      }
      else if (param_5 == '\x02') {
        if (iVar4 == 0) {
          map_mode_index_to_constant_103a4002(param_1,iVar6,iVar7);
        }
        else {
          map_mode_index_to_resource_id_103a40b0(param_1,iVar6,iVar7);
        }
      }
      iVar6 = menu_item_register(param_1 + 8);
      iVar8 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar5 = (uint32_t)(alloc_two_word_pair_1045bc2e(auStack_10,uStack_4c & 0xffff,param_4));
      (((vtbl_entry*)(iVar8))[2].fn)(iVar6 + sVar1,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      iVar6 = menu_item_register(param_1 + 8);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    iVar6 = iVar7 + 1;
    if (iVar3 / *(int *)(&DAT_105649c0/*ROM*/ + iStack_50) != 0) {
      iVar8 = (iVar3 / *(int *)(&DAT_105649c0/*ROM*/ + iStack_50)) % 10;
      if (param_5 == '\0') {
        if (iVar4 == 0) {
          map_mode_index_to_event_id_103a3d4a(param_1,iVar8,iVar6);
        }
        else {
          map_mode_index_to_id_103a3df8(param_1,iVar8,iVar6);
        }
      }
      else if (param_5 == '\x01') {
        if (iVar4 == 0) {
          map_mode_index_to_event_id_103a3ea6(param_1,iVar8,iVar6);
        }
        else {
          map_mode_index_to_id_103a3f54(param_1,iVar8,iVar6);
        }
      }
      else if (param_5 == '\x02') {
        if (iVar4 == 0) {
          map_mode_index_to_constant_103a4002(param_1,iVar8,iVar6);
        }
        else {
          map_mode_index_to_resource_id_103a40b0(param_1,iVar8,iVar6);
        }
      }
      iVar6 = menu_item_register(param_1 + 8);
      iVar8 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar5 = (uint32_t)(alloc_two_word_pair_1045bc2e(auStack_10,uStack_4c - iVar2 & 0xffff,param_4));
      (((vtbl_entry*)(iVar8))[2].fn)(iVar6 + sVar1,uVar5);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      iVar6 = menu_item_register(param_1 + 8);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    iVar7 = iVar7 + 2;
    uStack_4c = (uStack_4c - iVar2) - iVar2;
    iStack_50 = iStack_50 + 8;
    iStack_18 = iStack_18 + -1;
  } while (-1 < iStack_18);
  return;
}
