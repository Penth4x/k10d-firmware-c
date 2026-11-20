/* @k10d dispatch_event_by_id_103fbf42 @ 0x103fbf42
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_event_by_id_103fbf42(cls_10597dcc *param_1,int param_2)

{
  short sVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  code *pcVar4;
  uint32_t uVar5;
  int iVar6;
  uint32_t uVar7;
  int iVar8;
  uintptr_t sp;
  uint8_t *puVar9;
  uint8_t *puVar10;
  uint8_t auStack_4c [8];
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  puVar9 = auStack_4c;
  uVar7 = 0;
  puVar10 = auStack_4c;
  if (param_1->field_0x22 == -1) {
    uVar5 = setting_get(param_1->field_0x8,0xa5);
    param_1->field_0x22 = (char)uVar5;
    puVar10 = puVar9;
  }
  if (param_2 == 0x18e006f) {
    iVar6 = setting_get(param_1->field_0x8,0xa9);
    if (iVar6 < 10) {
      iVar6 = menu_item_register((int)param_1->field_0x0);
      iVar8 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_18,0x128,0x198));
      (((vtbl_entry*)(iVar8))[2].fn)(sVar1 + iVar6,uVar7);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
      iVar6 = menu_item_register((int)param_1->field_0x0);
      iVar8 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_18,0x170,0x198));
      (((vtbl_entry*)(iVar8))[2].fn)(sVar1 + iVar6,uVar7);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    else {
      iVar6 = menu_item_register((int)param_1->field_0x0);
      iVar8 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,0xf8,0x198));
      (((vtbl_entry*)(iVar8))[2].fn)(sVar1 + iVar6,uVar7);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
      iVar6 = menu_item_register((int)param_1->field_0x0);
      iVar8 = *(int *)(iVar6 + 0xc);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar7 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,0x140,0x198));
      (((vtbl_entry*)(iVar8))[2].fn)(sVar1 + iVar6,uVar7);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    }
    uVar7 = 0x18e0011;
  }
  if (param_2 == 0x18e0011) {
    set_exposure_mode_state(param_1,param_1->field_0x22);
    iVar6 = menu_item_register((int)param_1->field_0x0);
    uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)(byte)param_1->field_0x22 * 4);
    uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)(byte)param_1->field_0x22 * 2 + 1) * 2);
    pcVar4 = *(code **)(*(int *)(iVar6 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar6 + 0xc) + 0xf0);
    *(uint16_t *)(puVar10 + 2) = 0xc;
    *(uint16_t *)(puVar10 + 6) = 0xc;
    (*pcVar4)(sVar1 + iVar6,0x10,uVar2,uVar3);
    forward_two_args_to_helper_10493bf8((int *)(iVar6),(uint8_t)(1));
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    iVar6 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
  }
  if (param_2 == 0x18e005d) {
    set_exposure_mode_state(param_1,param_1->field_0x22);
    iVar6 = menu_item_register((int)param_1->field_0x0);
    uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)(byte)param_1->field_0x22 * 4);
    uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)(byte)param_1->field_0x22 * 2 + 1) * 2);
    pcVar4 = *(code **)(*(int *)(iVar6 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar6 + 0xc) + 0xf0);
    *(uint16_t *)(puVar10 + 2) = 0xc;
    *(uint16_t *)(puVar10 + 6) = 0xc;
    (*pcVar4)(sVar1 + iVar6,0x10,uVar2,uVar3);
    forward_two_args_to_helper_10493bf8((int *)(iVar6),(uint8_t)(1));
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
    iVar6 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(iVar6 + *(short *)(*(int *)(iVar6 + 0xc) + 8),1);
  }
  if (param_2 == 0x18e0064) {
    if (param_1->field_0x24 == -1) {
      uVar7 = setting_get(param_1->field_0x8,0xa7);
      param_1->field_0x24 = (char)uVar7;
    }
    if (param_1->field_0x24 == '\0') {
      uVar7 = 0x18e0066;
    }
    else {
      uVar7 = 0x18e0067;
    }
    dispatch_state_based_on_setting(param_1);
  }
  return uVar7;
}
