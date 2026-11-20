/* @k10d dispatch_ui_state_transition @ 0x103f873e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Handles UI state transitions based on event IDs, updating settings and invoking virtual
 *   methods for display updates.
 * summary:
 *   The function acts as a state machine dispatcher for a UI object (cls_10597d1c). It
 *   caches specific settings (0xa6, 0xa9, 0xa8) into the object's state fields. Depending
 *   on the event ID (param_2), it triggers different sequences: for 0x18f0072, it performs
 *   two virtual calls with different parameters (likely updating display elements); for
 *   0x18f0011 and 0x18f005d, it calls set_level_state_and_notify and a virtual method at
 *   offset 0xf4 with data from a lookup table (DAT_8001cca0); for 0x18f0064, it checks a
 *   setting and calls compute_ev_offset_and_dispatch. It returns a new state ID or 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_ui_state_transition(cls_10597d1c *param_1,int param_2)

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
    uVar5 = setting_get(param_1->field_0x8,0xa6);
    param_1->field_0x22 = (char)uVar5;
    puVar10 = puVar9;
  }
  if (param_2 == 0x18f0072) {
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
    uVar7 = 0x18f0011;
  }
  if (param_2 == 0x18f0011) {
    set_level_state_and_notify(param_1,param_1->field_0x22);
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
  if (param_2 == 0x18f005d) {
    set_level_state_and_notify(param_1,param_1->field_0x22);
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
  if (param_2 == 0x18f0064) {
    if (param_1->field_0x24 == -1) {
      uVar7 = setting_get(param_1->field_0x8,0xa8);
      param_1->field_0x24 = (char)uVar7;
    }
    if (param_1->field_0x24 == '\0') {
      uVar7 = 0x18f0066;
    }
    else {
      uVar7 = 0x18f0067;
    }
    compute_ev_offset_and_dispatch(param_1);
  }
  return uVar7;
}
