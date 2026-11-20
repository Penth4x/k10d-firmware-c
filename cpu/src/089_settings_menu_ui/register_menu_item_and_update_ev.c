/* @k10d register_menu_item_and_update_ev @ 0x103f8ad8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores an event ID in the object, conditionally calls two helpers, and invokes a
 *   virtual method with computed parameters.
 * summary:
 *   The function writes param_2 to offset 0x18 of the object. If the ID is 0x18f0011 or
 *   0x18f005d, it calls set_level_state_and_notify and compute_ev_offset_and_dispatch. It
 *   then retrieves a pointer via menu_item_register, calculates two values from a lookup
 *   table at 0x8001cca0 using a byte at offset 0x22, and calls a virtual method (slot 0xf4)
 *   with these values. It calls forward_two_args_to_helper_10493bf8 and another virtual
 *   method (slot 0x0c). Finally, if the ID is 0x18f0066 or 0x18f0067, it sets a flag at
 *   offset 0x24 and calls compute_ev_offset_and_dispatch again.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_update_ev(cls_10597d1c *param_1,int param_2)

{
  short sVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  code *pcVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t *puVar7;
  uint8_t *puVar8;
  uint8_t auStack_14 [8];
  
  puVar7 = auStack_14;
  puVar6 = auStack_14;
  param_1->field_0x18 = param_2;
  if (param_2 == 0x18f0011) {
    set_level_state_and_notify(param_1,param_1->field_0x22);
    compute_ev_offset_and_dispatch(param_1);
    iVar5 = menu_item_register((int)param_1->field_0x0);
    uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)(byte)param_1->field_0x22 * 4);
    uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)(byte)param_1->field_0x22 * 2 + 1) * 2);
    pcVar4 = *(code **)(*(int *)(iVar5 + 0xc) + 0xf4);
    sVar1 = *(short *)(*(int *)(iVar5 + 0xc) + 0xf0);
    *(uint16_t *)(puVar6 + 2) = 0xc;
    *(uint16_t *)(puVar6 + 6) = 0xc;
    (*pcVar4)(sVar1 + iVar5,0x10,uVar2,uVar3);
    forward_two_args_to_helper_10493bf8((int *)(iVar5),(uint8_t)(1));
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
    iVar5 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
    puVar8 = puVar6;
  }
  else {
    puVar8 = auStack_14;
    if (param_2 == 0x18f005d) {
      set_level_state_and_notify(param_1,param_1->field_0x22);
      compute_ev_offset_and_dispatch(param_1);
      iVar5 = menu_item_register((int)param_1->field_0x0);
      uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)(byte)param_1->field_0x22 * 4);
      uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)(byte)param_1->field_0x22 * 2 + 1) * 2);
      pcVar4 = *(code **)(*(int *)(iVar5 + 0xc) + 0xf4);
      sVar1 = *(short *)(*(int *)(iVar5 + 0xc) + 0xf0);
      *(uint16_t *)(puVar7 + 2) = 0xc;
      *(uint16_t *)(puVar7 + 6) = 0xc;
      (*pcVar4)(sVar1 + iVar5,0x10,uVar2,uVar3);
      forward_two_args_to_helper_10493bf8((int *)(iVar5),(uint8_t)(1));
      (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
      iVar5 = menu_item_register((int)param_1->field_0x0);
      (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
      puVar8 = puVar7;
    }
  }
  iVar5 = menu_item_register((int)param_1->field_0x0);
  uVar2 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + (uint)(byte)param_1->field_0x22 * 4);
  uVar3 = *(uint16_t *)(&DAT_8001cca0/*SDRAM*/ + ((uint)(byte)param_1->field_0x22 * 2 + 1) * 2);
  pcVar4 = *(code **)(*(int *)(iVar5 + 0xc) + 0xf4);
  sVar1 = *(short *)(*(int *)(iVar5 + 0xc) + 0xf0);
  *(uint16_t *)(puVar8 + 2) = 0xc;
  *(uint16_t *)(puVar8 + 6) = 0xc;
  (*pcVar4)(sVar1 + iVar5,0x10,uVar2,uVar3);
  forward_two_args_to_helper_10493bf8((int *)(iVar5),(uint8_t)(1));
  (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  if (param_1->field_0x18 == 0x18f0066) {
    param_1->field_0x24 = 0;
    compute_ev_offset_and_dispatch(param_1);
  }
  else if (param_1->field_0x18 == 0x18f0067) {
    param_1->field_0x24 = 1;
    compute_ev_offset_and_dispatch(param_1);
  }
  return;
}
