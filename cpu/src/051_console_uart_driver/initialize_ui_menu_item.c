/* @k10d initialize_ui_menu_item @ 0x103b6176
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Initializes an object structure by clearing fields, setting up internal pointers, and
 *   configuring state based on a flag parameter.
 * summary:
 *   The function clears specific byte offsets in the object pointed to by param_1 and
 *   initializes a sub-structure at offset 0x10. It calls several unnamed helper functions
 *   (set_object_and_three_substates, dispatch_virtual_slot_two_103b6fe0, etc.) to set up
 *   internal state. It extracts bits from param_2 to set boolean flags at offsets 0x55 and
 *   0x56, and uses virtual calls to configure additional state based on these flags and the
 *   result of get_field_at_offset_0x28.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_ui_menu_item(cls_10566724 *param_1,uint param_2)

{
  int iVar1;
  uint8_t *puVar2;
  
  param_1->field_0x57 = '\0';
  iVar1 = get_or_create_singleton_object_1050b118();
  *(uint8_t **)(iVar1 + 0x58) = &param_1->field_0x40;
  if (param_1->field_0x4 == '\0') {
    (((vtbl_entry*)(param_1->field_0x0))[8].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x0))[8].adj,0);
  }
  *(uint8_t *)&param_1->field_0x58 = 0;
  *(uint32_t *)&param_1->field_0x5c = 0;
  puVar2 = &param_1->field5_0x8;
  call_helper_on_fetched_object(puVar2,0x10);
  call_helper_on_fetched_object(puVar2,0xf);
  call_helper_on_fetched_object(puVar2,0xd);
  call_helper_on_fetched_object(puVar2,0xe);
  set_object_and_three_substates(param_1,0);
  dispatch_virtual_slot_two_103b6fe0(param_1);
  invoke_virtual_slot_two_103b70ce(param_1,0);
  render_dual_viewport_panels(param_1);
  iVar1 = get_or_create_singleton_object_1050b118();
  iVar1 = get_field_at_offset_0x28(iVar1);
  param_1->field_0x54 = iVar1 != 0;
  param_1->field_0x55 = (param_2 & 1) != 0;
  param_1->field_0x56 = (param_2 & 0x10) != 0;
  forward_two_params_via_helper(puVar2,0,1);
  forward_two_params_via_helper(puVar2,0xd,2);
  forward_two_params_via_helper(puVar2,0xe,2);
  forward_two_params_via_helper(puVar2,0xf,2);
  forward_two_params_via_helper(puVar2,0x10,2);
  if ((param_1->field_0x54 == '\0') && (param_1->field_0x55 == '\0')) {
    iVar1 = menu_item_register((int)puVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,1);
    iVar1 = menu_item_register((int)puVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,1);
  }
  else {
    iVar1 = menu_item_register((int)puVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,0);
    iVar1 = menu_item_register((int)puVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(iVar1 + ((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj,0);
  }
  if (((param_2 & 2) == 0) || ((param_2 & 8) == 0)) {
    iVar1 = menu_item_register((int)puVar2);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else {
    iVar1 = menu_item_register((int)&param_1->field5_0x8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  iVar1 = *(uint32_t *)(param_1->field_0x2c);
  (((vtbl_entry*)(iVar1))[2].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120075,0);
  dispatch_event_to_object_10492252((cls_105b4254 *)puVar2,param_1);
  request_ui_sync_and_set_flag((cls_105b4254 *)puVar2);
  request_ui_sync_with_flag_10491f5c(puVar2,1);
  request_ui_sync_with_flag_10491f36(puVar2,0);
  iVar1 = *(uint32_t *)(param_1->field_0x2c);
  (((vtbl_entry*)(iVar1))[2].fn)((int)param_1->field_0x2c + (int)((vtbl_entry*)(iVar1))[2].adj,0x1120064,0);
  return;
}
