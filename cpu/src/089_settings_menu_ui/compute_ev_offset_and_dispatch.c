/* @k10d compute_ev_offset_and_dispatch @ 0x103f9a02
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Calculates an exposure value offset from settings and dispatches UI update events.
 * summary:
 *   The function reads settings 0xa4, 0xa5, and 0xa7 to determine an exposure offset. It
 *   performs arithmetic on values from a table at 0x10597f98, dividing by 0x3c (60) to
 *   derive a short offset and a remainder. It then dispatches multiple virtual calls and
 *   event messages (via menu_item_register and menu_list_build) to update the interface,
 *   likely reflecting the calculated EV shift.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_ev_offset_and_dispatch(int *param_1)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar10;
  uint32_t uVar7;
  uint uVar8;
  void *pvVar9;
  char *pcVar11;
  void *pvVar12;
  int iVar13;
  uintptr_t sp;
  bool bVar14;
  byte abStack_19 [5];
  uint32_t auStack_14 [2];
  short sStack_a;
  
  sStack_a = 0;
  bVar14 = *(char *)(param_1 + 9) != '\0';
  if (bVar14) {
    iVar6 = get_or_create_singleton_object_1046d20c();
  }
  else {
    iVar6 = get_or_create_singleton_object_1046d20c();
  }
  pvVar12 = (void *)(uint)bVar14;
  call_two_helpers_with_byte(*(uint32_t *)(iVar6 + 4),(uint16_t *)((int)param_1 + 0x2e),
               (uint)*(byte *)((int)param_1 + 0x22),bVar14);
  bVar10 = read_byte_at_offset_5((void *)((int)param_1 + 0x2e));
  *(ushort *)((int)param_1 + 0x26) = (ushort)bVar10;
  bVar10 = read_byte_at_offset_six((void *)((int)param_1 + 0x2e));
  *(ushort *)(param_1 + 10) = (ushort)bVar10;
  iVar6 = setting_get(param_1[2],0xa4);
  *(char *)((int)param_1 + 0x25) = (char)iVar6;
  if (iVar6 == 0) {
    iVar6 = menu_item_register(*param_1);
    iVar13 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar13 + 0x10);
    uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_14,0x1e8,0x198));
    (((vtbl_entry*)(iVar13))[2].fn)(iVar6 + sVar1,uVar7);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar6 = menu_item_register(*param_1);
    iVar13 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar13 + 0x10);
    uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_14,0x230,0x198));
    (((vtbl_entry*)(iVar13))[2].fn)(iVar6 + sVar1,uVar7);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar6 = menu_item_register(*param_1);
    iVar13 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar13 + 0x10);
    uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_14,0x218,0x198));
    (((vtbl_entry*)(iVar13))[2].fn)(iVar6 + sVar1,uVar7);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar6 = menu_item_register(*param_1);
    iVar13 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar13 + 0x10);
    uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_14,0x260,0x198));
    (((vtbl_entry*)(iVar13))[2].fn)(iVar6 + sVar1,uVar7);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar6 = menu_item_register(*param_1);
    iVar13 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar13 + 0x10);
    uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_14,0x260,0x198));
    (((vtbl_entry*)(iVar13))[2].fn)(iVar6 + sVar1,uVar7);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    uVar7 = menu_item_register(*param_1);
    menu_list_build((int *)(uVar7),(uint16_t *)((int)param_1 + 0x26),(uint8_t)(2),(uint8_t)(0));
    uVar7 = menu_item_register(*param_1);
    pvVar12 = (void *)0x0;
    menu_list_build((int *)(uVar7),(uint16_t *)(param_1 + 10),(uint8_t)(2), (uint8_t)(__frv_reg_unset(7)));
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),0);
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),0);
  }
  else if (iVar6 == 1) {
    iVar6 = menu_item_register(*param_1);
    iVar13 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar13 + 0x10);
    uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_14,0x1b8,0x198));
    (((vtbl_entry*)(iVar13))[2].fn)(iVar6 + sVar1,uVar7);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar6 = menu_item_register(*param_1);
    iVar13 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar13 + 0x10);
    uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_14,0x200,0x198));
    (((vtbl_entry*)(iVar13))[2].fn)(iVar6 + sVar1,uVar7);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar6 = menu_item_register(*param_1);
    iVar13 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar13 + 0x10);
    uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_14,0x1e8,0x198));
    (((vtbl_entry*)(iVar13))[2].fn)(iVar6 + sVar1,uVar7);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar6 = menu_item_register(*param_1);
    iVar13 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar13 + 0x10);
    uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_14,0x230,0x198));
    (((vtbl_entry*)(iVar13))[2].fn)(iVar6 + sVar1,uVar7);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    iVar6 = menu_item_register(*param_1);
    iVar13 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar13 + 0x10);
    uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_14,0x230,0x198));
    (((vtbl_entry*)(iVar13))[2].fn)(iVar6 + sVar1,uVar7);
    free_heap_block_if_flagged_1045bc54(auStack_14,2);
    uVar2 = *(ushort *)((int)param_1 + 0x26);
    if (uVar2 == 0) {
      sStack_a = 0xc;
      uVar7 = menu_item_register(*param_1);
      menu_list_build((int *)(uVar7),(uint16_t *)(&sStack_a),(uint8_t)(2),(uint8_t)(0));
      iVar6 = menu_item_register(*param_1);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),0);
      iVar6 = menu_item_register(*param_1);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    else if (uVar2 < 0xc) {
      uVar7 = menu_item_register(*param_1);
      menu_list_build((int *)(uVar7),(uint16_t *)((int)param_1 + 0x26),(uint8_t)(2),(uint8_t)(0));
      iVar6 = menu_item_register(*param_1);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),0);
      iVar6 = menu_item_register(*param_1);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    else if (uVar2 == 0xc) {
      uVar7 = menu_item_register(*param_1);
      menu_list_build((int *)(uVar7),(uint16_t *)((int)param_1 + 0x26),(uint8_t)(2),(uint8_t)(0));
      iVar6 = menu_item_register(*param_1);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),0);
      iVar6 = menu_item_register(*param_1);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    else {
      sStack_a = uVar2 - 0xc;
      uVar7 = menu_item_register(*param_1);
      menu_list_build((int *)(uVar7),(uint16_t *)(&sStack_a),(uint8_t)(2),(uint8_t)(0));
      iVar6 = menu_item_register(*param_1);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),0);
      iVar6 = menu_item_register(*param_1);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    uVar7 = menu_item_register(*param_1);
    pvVar12 = (void *)0x0;
    menu_list_build((int *)(uVar7),(uint16_t *)(param_1 + 10),(uint8_t)(2), (uint8_t)(__frv_reg_unset(7)));
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
  }
  cVar3 = *(char *)(param_1 + 9);
  iVar6 = setting_get(param_1[2],0xa7);
  iVar13 = setting_get(param_1[2],0xa5);
  uVar5 = *(uint *)(iVar13 * 4 + 0x10597f98/*ROM*/);
  if (iVar6 == 1) {
    uVar5 = uVar5 + 0xe10;
  }
  uVar5 = uVar5 / 0x3c;
  uVar4 = *(uint *)((uint)*(byte *)((int)param_1 + 0x22) * 4 + 0x10597f98/*ROM*/);
  if (cVar3 == '\x01') {
    uVar4 = uVar4 + 0xe10;
  }
  uVar4 = uVar4 / 0x3c;
  if (uVar4 < uVar5) {
    uVar8 = uVar5 - uVar4;
  }
  else {
    uVar8 = uVar4 - uVar5;
  }
  sVar1 = (short)(uVar8 / 0x3c);
  *(short *)((int)param_1 + 0x2a) = sVar1;
  *(short *)(param_1 + 0xb) = (short)uVar8 + sVar1 * -0x3c;
  pvVar9 = (void *)menu_item_register(*param_1);
  abStack_19[0] = 0;
  abStack_19[1] = 0;
  abStack_19[2] = 0;
  abStack_19[3] = 0;
  abStack_19[4] = 0;
  if (uVar4 < uVar5) {
    pcVar11 = (char *)0x10597dac/*ROM*/;
  }
  else if ((void *)(uint)*(ushort *)((int)param_1 + 0x2a) == 0) {
    pcVar11 = (char *)0x10597db4/*ROM*/;
  }
  else {
    pcVar11 = (char *)0x10597db0/*ROM*/;
  }
  format_string_to_buffer_10545140(abStack_19,pcVar11,(void *)(uint)*(ushort *)((int)param_1 + 0x2a),pvVar12);
  glyph_draw(pvVar9,abStack_19);
  uVar7 = menu_item_register(*param_1);
  menu_list_build((int *)(uVar7),(uint16_t *)(param_1 + 0xb),(uint8_t)(2),(uint8_t)(0));
  menu_item_register(*param_1);
  if (uVar5 == uVar4) {
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
  }
  else {
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    iVar6 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
  }
  return;
}
