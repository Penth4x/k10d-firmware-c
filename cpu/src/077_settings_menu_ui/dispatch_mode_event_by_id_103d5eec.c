/* @k10d dispatch_mode_event_by_id_103d5eec @ 0x103d5eec
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores an event ID in the object and dispatches to specific handlers based on the ID
 *   value.
 * summary:
 *   The function writes param_2 to offset 0x18 of the object. It then uses a large if-else
 *   chain to check param_2 against specific constants (0x18c0013-0x18c004f). For each
 *   match, it calls a specific helper function (write_three_field_groups,
 *   build_menu_with_dynamic_item, etc.) and sets a state byte at offset 0x22 or 0x23. For
 *   higher IDs, it retrieves an object via menu_item_register and invokes virtual method
 *   slot 2 with arguments 0 and 1. The specific camera subsystem is not identifiable from
 *   the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_event_by_id_103d5eec(cls_1059639c *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  param_1->field_0x18 = param_2;
  if (param_2 == 0x18c0013) {
    write_three_field_groups(param_1);
    param_1->field_0x23 = 0;
    register_six_menu_items_103d69a2(param_1);
  }
  else if (param_2 == 0x18c0014) {
    write_three_field_groups(param_1);
    param_1->field_0x23 = 1;
    register_six_menu_items_103d6b6a(param_1);
  }
  else if (param_2 == 0x18c0015) {
    write_three_field_groups(param_1);
    param_1->field_0x23 = 2;
    register_six_menu_items_103d6a86(param_1);
  }
  else if (param_2 == 0x18c001a) {
    build_menu_with_dynamic_item(param_1);
    param_1->field_0x22 = 1;
    dispatch_menu_item_by_range(param_1);
  }
  else if (param_2 == 0x18c001b) {
    build_menu_with_dynamic_item(param_1);
    param_1->field_0x22 = 0;
    register_four_menu_items_103d6c4e(param_1);
  }
  else if (param_2 == 0x18c001e) {
    cVar1 = param_1->field_0x23;
    if (cVar1 == '\0') {
      register_six_menu_items_103d69a2(param_1);
    }
    else if (cVar1 == '\x01') {
      register_six_menu_items_103d6b6a(param_1);
    }
    else if (cVar1 == '\x02') {
      register_six_menu_items_103d6a86(param_1);
    }
  }
  else if (param_2 == 0x18c0033) {
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  else if (param_2 == 0x18c0034) {
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  else if (param_2 == 0x18c0046) {
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  else if (param_2 == 0x18c0047) {
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  else if (param_2 == 0x18c004e) {
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  else if (param_2 == 0x18c004f) {
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  }
  return;
}
