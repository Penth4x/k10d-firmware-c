/* @k10d build_menu_items_for_mode_103efe12 @ 0x103efe12
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 086_exposure_mode_menu (unit names are model-proposed)
 * purpose:
 *   Resets UI objects and configures their layout/visibility based on mode state and
 *   settings.
 * summary:
 *   The function resets a series of objects via virtual calls (slot 1) with argument 0. It
 *   reads settings 0xb3 and 0xb2 and calls map_mode_index_to_code_1045b524 to determine a
 *   mode state. Depending on this state (2, 6-8, or other) and the setting values, it
 *   configures objects (via alloc_two_word_pair_1045bc2e and virtual slot 2 calls) with
 *   specific sizes and offsets, adjusting the layout for different modes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103f00ee) overlaps instruction at (ram,0x103f00ec)
    */

void build_menu_items_for_mode_103efe12(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint32_t uVar4;
  int iVar5;
  uint32_t uVar6;
  int iVar7;
  uint uVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  uint8_t auStack_144 [4];
  uint32_t auStack_58 [2];
  uint32_t auStack_50 [2];
  uint32_t auStack_48 [2];
  uint32_t auStack_40 [2];
  uint32_t auStack_38 [2];
  uint32_t auStack_30 [2];
  uint32_t auStack_28 [2];
  uint32_t auStack_20 [2];
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  puVar9 = auStack_144;
  iVar3 = get_or_create_singleton_object_104bb22a();
  write_exposure_settings_from_object(*(uint32_t *)(iVar3 + 4),param_1[2]);
  uVar4 = get_or_init_heap_block();
  sVar2 = 0;
  iVar3 = 0xc;
  do {
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iVar5 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  iVar3 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  iVar3 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  iVar3 = setting_get(param_1[2],0xb3);
  uVar6 = get_setting_by_index((int)param_1,0x48);
  iVar5 = map_mode_index_to_code_1045b524(uVar4,uVar6);
  iVar7 = setting_get(param_1[2],0xb2);
  if (iVar5 == 2) {
    iVar5 = get_setting_by_index((int)param_1,0x4d);
    puVar9[3] = (char)uVar6;
    lookup_two_byte_table_entry_1045a74a(uVar4,iVar5,iVar3,iVar7,puVar9[3]);
    iVar3 = 0xc;
    do {
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    iVar3 = menu_item_register(*param_1);
    iVar5 = *(int *)(iVar3 + 0xc);
    sVar2 = *(short *)(iVar5 + 0x10);
    uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_58,0x68,0xf0);
    (**(code **)(iVar5 + 0x14))(sVar2 + iVar3,uVar4);
    free_heap_block_if_flagged_1045bc54(auStack_58,2);
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
  }
  else if (((iVar5 == 6) || (iVar5 == 7)) || (iVar5 == 8)) {
    if (iVar3 == 0) {
      iVar3 = get_setting_by_index((int)param_1,0x18);
      if (iVar3 == 0) {
        get_setting_by_index((int)param_1,0x19);
      }
      iVar3 = 0xc;
      do {
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      iVar3 = menu_item_register(*param_1);
      iVar5 = *(int *)(iVar3 + 0xc);
      sVar2 = *(short *)(iVar5 + 0x10);
      uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_50,0x68,0xf0);
      (**(code **)(iVar5 + 0x14))(sVar2 + iVar3,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_50,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    }
    else if (iVar3 == 1) {
      if (iVar7 == 1) {
        iVar3 = get_setting_by_index((int)param_1,0x1b);
        if (iVar3 == 0) {
          get_setting_by_index((int)param_1,0x1c);
        }
        iVar3 = 0xc;
        do {
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        iVar3 = menu_item_register(*param_1);
        iVar5 = *(int *)(iVar3 + 0xc);
        sVar2 = *(short *)(iVar5 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_48,0x68,0xf0);
        (**(code **)(iVar5 + 0x14))(sVar2 + iVar3,uVar4);
        free_heap_block_if_flagged_1045bc54(auStack_48,2);
        (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      }
      else if (iVar7 == 0) {
        iVar3 = get_setting_by_index((int)param_1,0x1e);
        if (iVar3 == 0) {
          get_setting_by_index((int)param_1,0x1f);
        }
        iVar3 = 0xc;
        do {
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        iVar5 = menu_item_register(*param_1);
        iVar3 = *(int *)(iVar5 + 0xc);
        sVar2 = *(short *)(iVar3 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_40,0x68,0xf0);
        (**(code **)(iVar3 + 0x14))(sVar2 + iVar5,uVar4);
        free_heap_block_if_flagged_1045bc54(auStack_40,2);
        (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
      }
    }
  }
  else if (iVar3 == 0) {
    iVar3 = get_setting_by_index((int)param_1,0x18);
    if (iVar3 == 0) {
      iVar3 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      uVar8 = get_setting_by_index((int)param_1,0x19);
      iVar3 = 0;
      iVar5 = 0xc;
      do {
        if ((((byte)(&DAT_10597a34/*ROM*/)[iVar3] == uVar8) && (4 < iVar3)) && (iVar3 < 0x12)) {
          sVar2 = sVar2 + 1;
        }
        if ((((byte)(&DAT_10597a35/*ROM*/)[iVar3] == uVar8) && (4 < iVar3 + 1)) && (iVar3 + 1 < 0x12)) {
          sVar2 = sVar2 + 1;
        }
        iVar5 = iVar5 + -1;
        iVar3 = iVar3 + 2;
      } while (-1 < iVar5);
      iVar5 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar5 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_38,0xe0,0xf0);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar5,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_38,2);
      (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
      iVar5 = menu_item_register(*param_1);
      iVar3 = *(int *)(iVar5 + 0xc);
      sVar1 = *(short *)(iVar3 + 0x10);
      uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_38,0x140 - (uint)(ushort)(sVar2 * 0x18),0xf0);
      (**(code **)(iVar3 + 0x14))(sVar1 + iVar5,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_38,2);
      (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
      get_setting_by_index((int)param_1,0x1a);
      iVar3 = 0xc;
      do {
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      iVar3 = menu_item_register(*param_1);
      iVar5 = *(int *)(iVar3 + 0xc);
      sVar1 = *(short *)(iVar5 + 0x10);
      uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_38,0x158 - (uint)(ushort)(sVar2 * 0x18),0xf0);
      (**(code **)(iVar5 + 0x14))(sVar1 + iVar3,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_38,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    }
    else {
      iVar3 = 0xc;
      do {
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
      iVar3 = menu_item_register(*param_1);
      iVar5 = *(int *)(iVar3 + 0xc);
      sVar2 = *(short *)(iVar5 + 0x10);
      uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_30,0x68,0xf0);
      (**(code **)(iVar5 + 0x14))(sVar2 + iVar3,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_30,2);
      (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
    }
  }
  else if (iVar3 == 1) {
    if (iVar7 == 1) {
      iVar3 = get_setting_by_index((int)param_1,0x1b);
      if (iVar3 == 0) {
        iVar3 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
        uVar8 = get_setting_by_index((int)param_1,0x1c);
        iVar3 = 0;
        iVar5 = 0xc;
        do {
          if ((((byte)(&DAT_10597a34/*ROM*/)[iVar3] == uVar8) && (4 < iVar3)) && (iVar3 < 0x12)) {
            sVar2 = sVar2 + 1;
          }
          if ((((byte)(&DAT_10597a35/*ROM*/)[iVar3] == uVar8) && (4 < iVar3 + 1)) && (iVar3 + 1 < 0x12)) {
            sVar2 = sVar2 + 1;
          }
          iVar5 = iVar5 + -1;
          iVar3 = iVar3 + 2;
        } while (-1 < iVar5);
        iVar5 = menu_item_register(*param_1);
        iVar3 = *(int *)(iVar5 + 0xc);
        sVar1 = *(short *)(iVar3 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_28,0xe0,0xf0);
        (**(code **)(iVar3 + 0x14))(sVar1 + iVar5,uVar4);
        free_heap_block_if_flagged_1045bc54(auStack_28,2);
        (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
        iVar5 = menu_item_register(*param_1);
        iVar3 = *(int *)(iVar5 + 0xc);
        sVar1 = *(short *)(iVar3 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_28,0x140 - (uint)(ushort)(sVar2 * 0x18),0xf0);
        (**(code **)(iVar3 + 0x14))(sVar1 + iVar5,uVar4);
        free_heap_block_if_flagged_1045bc54(auStack_28,2);
        (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
        get_setting_by_index((int)param_1,0x1d);
        iVar3 = 0xc;
        do {
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        iVar3 = menu_item_register(*param_1);
        iVar5 = *(int *)(iVar3 + 0xc);
        sVar1 = *(short *)(iVar5 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_28,0x158 - (uint)(ushort)(sVar2 * 0x18),0xf0);
        (**(code **)(iVar5 + 0x14))(sVar1 + iVar3,uVar4);
        free_heap_block_if_flagged_1045bc54(auStack_28,2);
        (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      }
      else {
        iVar3 = 0xc;
        do {
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        iVar3 = menu_item_register(*param_1);
        iVar5 = *(int *)(iVar3 + 0xc);
        sVar2 = *(short *)(iVar5 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_20,0x68,0xf0);
        (**(code **)(iVar5 + 0x14))(sVar2 + iVar3,uVar4);
        free_heap_block_if_flagged_1045bc54(auStack_20,2);
        (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      }
    }
    else if (iVar7 == 0) {
      iVar3 = get_setting_by_index((int)param_1,0x1e);
      if (iVar3 == 0) {
        iVar3 = menu_item_register(*param_1);
        (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
        uVar8 = get_setting_by_index((int)param_1,0x1f);
        iVar5 = 0;
        iVar3 = 0xc;
        do {
          if ((((byte)(&DAT_10597a34/*ROM*/)[iVar5] == uVar8) && (4 < iVar5)) && (iVar5 < 0x12)) {
            sVar2 = sVar2 + 1;
          }
          if ((((byte)(&DAT_10597a35/*ROM*/)[iVar5] == uVar8) && (4 < iVar5 + 1)) && (iVar5 + 1 < 0x12)) {
            sVar2 = sVar2 + 1;
          }
          iVar3 = iVar3 + -1;
          iVar5 = iVar5 + 2;
        } while (-1 < iVar3);
        iVar5 = menu_item_register(*param_1);
        iVar3 = *(int *)(iVar5 + 0xc);
        sVar1 = *(short *)(iVar3 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,0xe0,0xf0);
        (**(code **)(iVar3 + 0x14))(sVar1 + iVar5,uVar4);
        free_heap_block_if_flagged_1045bc54(auStack_18,2);
        (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
        iVar5 = menu_item_register(*param_1);
        iVar3 = *(int *)(iVar5 + 0xc);
        sVar1 = *(short *)(iVar3 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,0x140 - (uint)(ushort)(sVar2 * 0x18),0xf0);
        (**(code **)(iVar3 + 0x14))(sVar1 + iVar5,uVar4);
        free_heap_block_if_flagged_1045bc54(auStack_18,2);
        (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
        get_setting_by_index((int)param_1,0x20);
        iVar3 = 0xc;
        do {
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        iVar3 = menu_item_register(*param_1);
        iVar5 = *(int *)(iVar3 + 0xc);
        sVar1 = *(short *)(iVar5 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,0x158 - (uint)(ushort)(sVar2 * 0x18),0xf0);
        (**(code **)(iVar5 + 0x14))(sVar1 + iVar3,uVar4);
        free_heap_block_if_flagged_1045bc54(auStack_18,2);
        (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      }
      else {
        iVar3 = 0xc;
        do {
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
        iVar3 = menu_item_register(*param_1);
        iVar5 = *(int *)(iVar3 + 0xc);
        sVar2 = *(short *)(iVar5 + 0x10);
        uVar4 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,0x68,0xf0);
        (**(code **)(iVar5 + 0x14))(sVar2 + iVar3,uVar4);
        free_heap_block_if_flagged_1045bc54(auStack_10,2);
        (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),1);
      }
    }
  }
  return;
}
