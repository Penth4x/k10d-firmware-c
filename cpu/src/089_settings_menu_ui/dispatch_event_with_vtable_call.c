/* @k10d dispatch_event_with_vtable_call @ 0x103fc2dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores an event ID in the object and conditionally invokes a virtual method with
 *   parameters derived from a lookup table.
 * summary:
 *   The function writes param_2 to offset 0x18 of the object. If the ID matches 0x18e0011
 *   or 0x18e005d, it calls two helper functions, retrieves a pointer via
 *   menu_item_register, and invokes a virtual method (slot at offset 0xf4) with arguments
 *   from a table at 0x8001cca0. It then calls forward_two_args_to_helper_10493bf8 and
 *   another virtual method (slot at offset 0xc). Finally, it calls
 *   forward_two_args_to_helper_10493bf8 with 0 and the virtual method with 0, and sets a
 *   flag at offset 0x24 based on the event ID being 0x18e0067 or 0x18e0066.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_with_vtable_call(cls_10597dcc *param_1,int param_2)

{
  short sVar1;
  uint16_t uVar2;
  uint16_t uVar3;
  code *pcVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t *puVar6;
  uint8_t *puVar7;
  uint8_t auStack_14 [8];
  
  puVar7 = auStack_14;
  puVar6 = auStack_14;
  param_1->field_0x18 = param_2;
  if (param_2 == 0x18e0011) {
    set_exposure_mode_state(param_1,param_1->field_0x22);
    dispatch_state_based_on_setting(param_1);
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
  }
  else if (param_2 == 0x18e005d) {
    set_exposure_mode_state(param_1,param_1->field_0x22);
    dispatch_state_based_on_setting(param_1);
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
  }
  iVar5 = menu_item_register((int)param_1->field_0x0);
  forward_two_args_to_helper_10493bf8((int *)(iVar5),(uint8_t)(0));
  (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
  if (param_1->field_0x18 == 0x18e0067) {
    param_1->field_0x24 = 1;
    dispatch_state_based_on_setting(param_1);
  }
  else if (param_1->field_0x18 == 0x18e0066) {
    param_1->field_0x24 = 0;
    dispatch_state_based_on_setting(param_1);
  }
  return;
}
