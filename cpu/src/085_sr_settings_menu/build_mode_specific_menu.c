/* @k10d build_mode_specific_menu @ 0x103ee8da
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 085_sr_settings_menu (unit names are model-proposed)
 * purpose:
 *   Dispatches on a mode ID to read settings and update multiple object fields via virtual
 *   calls and helper functions.
 * summary:
 *   The function checks if param_2 equals 0x19100a9. If so, it reads settings 0xa9 and
 *   0xb2, retrieves values via get_setting_by_index, and updates a series of fields
 *   (indices 5-10, 0x14-0x17, 0x47-0x50) using menu_list_build and virtual method calls. It
 *   splits some values into tens and units digits and calls several helper functions
 *   (register_menu_items_with_settings, build_menu_items_for_mode_103efe12,
 *   build_menu_with_setting_items, lookup_byte_in_table_and_call,
 *   map_byte_to_index_and_call_103f1a02, map_byte_to_index_and_call_103f1a54).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103ee91e) overlaps instruction at (ram,0x103ee91c)
    */

uint32_t build_mode_specific_menu(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  uintptr_t sp;
  int iStack_fc;
  int iStack_f4;
  uint32_t auStack_1c [2];
  uint32_t auStack_14 [2];
  ushort uStack_c;
  ushort uStack_a;
  
  iVar2 = get_or_create_singleton_object_104bb22a();
  write_exposure_settings_from_object(*(uint32_t *)(iVar2 + 4),param_1[2]);
  uVar3 = get_or_init_heap_block();
  uStack_c = 0;
  if (param_2 == 0x19100a9) {
    uStack_a = 0;
    iVar2 = setting_get(param_1[2],0xa9);
    if (iVar2 < 10) {
      iVar2 = menu_item_register(*param_1);
      iVar8 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar4 = alloc_two_word_pair_1045bc2e(auStack_1c,0x1e8,0x198);
      (**(code **)(iVar8 + 0x14))(sVar1 + iVar2,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_1c,2);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
      iVar2 = menu_item_register(*param_1);
      iVar8 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar4 = alloc_two_word_pair_1045bc2e(auStack_1c,0x230,0x198);
      (**(code **)(iVar8 + 0x14))(sVar1 + iVar2,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_1c,2);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    else {
      iVar2 = menu_item_register(*param_1);
      iVar8 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar4 = alloc_two_word_pair_1045bc2e(auStack_14,0x1b8,0x198);
      (**(code **)(iVar8 + 0x14))(sVar1 + iVar2,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_14,2);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
      iVar2 = menu_item_register(*param_1);
      iVar8 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar4 = alloc_two_word_pair_1045bc2e(auStack_14,0x200,0x198);
      (**(code **)(iVar8 + 0x14))(sVar1 + iVar2,uVar4);
      free_heap_block_if_flagged_1045bc54(auStack_14,2);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    iVar2 = 2;
    do {
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    uVar4 = get_setting_by_index((int)param_1,0x48);
    map_mode_index_to_code_1045b524(uVar3,uVar4);
    iVar2 = 2;
    do {
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    uVar4 = setting_get(param_1[2],0xb2);
    uVar5 = get_setting_by_index((int)param_1,0x4c);
    iVar2 = lookup_two_byte_table_entry_1045a89c(uVar3,uVar4,uVar5);
    if (iVar2 < 0) {
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      uStack_c = -(ushort)iVar2;
    }
    else if (iVar2 < 1) {
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    }
    else {
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      uStack_c = (ushort)iVar2;
    }
    uStack_a = uStack_c / 10;
    uVar4 = menu_item_register(*param_1);
    menu_list_build(uVar4,&uStack_a,1,1);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    uStack_a = uStack_c % 10;
    uVar4 = menu_item_register(*param_1);
    menu_list_build(uVar4,&uStack_a,1,1);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iStack_f4 = 2;
    do {
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iStack_f4 = iStack_f4 + -1;
    } while (-1 < iStack_f4);
    get_setting_by_index((int)param_1,0x15);
    iVar2 = 2;
    do {
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = 1;
    do {
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      iVar8 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),0);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    get_setting_by_index((int)param_1,0x14);
    iVar2 = 1;
    do {
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    register_menu_items_with_settings(param_1);
    iStack_fc = 3;
    do {
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iStack_fc = iStack_fc + -1;
    } while (-1 < iStack_fc);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = setting_get(param_1[2],0xb2);
    if (iVar2 == 0) {
      get_setting_by_index((int)param_1,0x16);
      iVar2 = 3;
      do {
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    else if (iVar2 == 1) {
      get_setting_by_index((int)param_1,0x17);
      iVar2 = 3;
      do {
        iVar2 = iVar2 + -1;
      } while (-1 < iVar2);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    uVar4 = get_setting_by_index((int)param_1,0x50);
    uStack_c = (ushort)uVar4;
    uVar5 = menu_item_register(*param_1);
    menu_list_build(uVar5,&uStack_c,1,1);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = setting_get(param_1[2],0xb2);
    if (iVar2 == 1) {
      uVar5 = get_setting_by_index((int)param_1,0x4f);
      uVar5 = (*(code *)0x1045b18e/*ROM*/)(uVar3,uVar5);
    }
    else {
      uVar5 = get_setting_by_index((int)param_1,0x4f);
      uVar5 = (*(code *)0x1045b164/*ROM*/)(uVar3,uVar5);
    }
    iVar2 = map_index_to_offset_1045a954(uVar3,uVar4,uVar5);
    uVar7 = (ushort)(iVar2 / 10);
    uStack_c = uVar7;
    uVar3 = menu_item_register(*param_1);
    menu_list_build(uVar3,&uStack_c,1,1);
    iVar8 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar8 + 0xc) + 0xc))(iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 8),1);
    uStack_c = (short)iVar2 + uVar7 * -10;
    uVar3 = menu_item_register(*param_1);
    menu_list_build(uVar3,&uStack_c,1,1);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    build_menu_items_for_mode_103efe12(param_1);
    iVar2 = get_setting_by_index((int)param_1,8);
    uVar6 = get_setting_by_index((int)param_1,(uint)(iVar2 != 0));
    lookup_byte_in_table_and_call(param_1,uVar6);
    build_menu_with_setting_items(param_1);
    iVar2 = get_setting_by_index((int)param_1,8);
    if (iVar2 == 0) {
      iVar2 = 3;
    }
    else {
      iVar2 = 4;
    }
    uVar6 = get_setting_by_index((int)param_1,iVar2);
    map_byte_to_index_and_call_103f1a02(param_1,uVar6);
    iVar2 = get_setting_by_index((int)param_1,0x47);
    if (iVar2 == 0) {
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    }
    else {
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
      iVar2 = menu_item_register(*param_1);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    }
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    get_setting_by_index((int)param_1,5);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    get_setting_by_index((int)param_1,6);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    get_setting_by_index((int)param_1,7);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    get_setting_by_index((int)param_1,8);
    iVar2 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    iVar2 = get_setting_by_index((int)param_1,8);
    if (iVar2 == 0) {
      iVar2 = 9;
    }
    else {
      iVar2 = 10;
    }
    uVar6 = get_setting_by_index((int)param_1,iVar2);
    map_byte_to_index_and_call_103f1a54(param_1,uVar6);
  }
  return 0;
}
