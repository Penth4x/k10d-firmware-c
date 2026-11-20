/* @k10d toggle_settings_flag_and_notify @ 0x103bb5f2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Sets a flag in the object, refreshes settings if valid, and triggers a series of
 *   virtual notifications based on the flag state.
 * summary:
 *   The function writes param_2 to offset 0x06 of the object. It checks if the object is
 *   valid via check_object_field_via_helper and refreshes the settings working copy if so.
 *   It then compares the new flag (bit 0 of offset 0x06) with a state byte at offset 0x0e.
 *   If the state changes, it calls write_value_to_seventy_ids and
 *   register_menu_item_with_value with specific parameters, and issues a sequence of
 *   virtual calls (slot 2) via menu_item_register with alternating 1/0 arguments. Finally,
 *   it issues a long sequence of virtual calls with 0 arguments, calls
 *   check_mode_transition_validity, and registers the object's offset 0x14 with a global
 *   manager (get_or_create_singleton_object_1050b118) and another object
 *   (get_or_create_camera_object).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_settings_flag_and_notify(cls_10594e70 *param_1,uint16_t param_2)

{
  bool bVar3;
  ushort uVar2;
  int iVar1;
  int iVar4;
  
  param_1->field_0xc = param_2;
  bVar3 = check_object_field_via_helper((char*)(param_1) ->field_0x8);
  if (bVar3) {
    settings_refresh_working_copy((char*)(param_1) ->field_0x8);
  }
  uVar2 = param_1->field_0xc & 1;
  if ((uVar2 == 1) && (param_1->field_0x38 == '\0')) {
    write_value_to_seventy_ids(param_1,1);
    register_menu_item_with_value(param_1,0x1010014,0xffffffe8);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    param_1->field_0x38 = 1;
  }
  else if ((uVar2 != 1) && (param_1->field_0x38 != '\0')) {
    write_value_to_seventy_ids(param_1,0);
    register_menu_item_with_value(param_1,0x1010014,0x18);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register((int)param_1->field_0x0);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    param_1->field_0x38 = 0;
  }
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register((int)param_1->field_0x0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  check_mode_transition_validity(&param_1->field_0x0,0);
  iVar1 = get_or_create_singleton_object_1050b118();
  *(uint32_t **)(iVar1 + 0x58) = &param_1->field_0x14;
  iVar1 = get_or_create_camera_object();
  iVar4 = **(int **)(iVar1 + 4);
  (((vtbl_entry*)(iVar4))[19].fn)
            ((int)*(int **)(iVar1 + 4) + (int)((vtbl_entry*)(iVar4))[19].adj,&param_1->field_0x14,
             param_1->field_0x30,&param_1->field_0x28);
  param_1->field_0x39 = 1;
  return;
}
