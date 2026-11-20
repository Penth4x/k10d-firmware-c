/* @k10d register_and_activate_menu_item @ 0x103c7bd0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 058_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a flag in the object, invokes virtual slot 9 on two derived objects with a
 *   conditional argument, and refreshes the settings working copy if valid.
 * summary:
 *   The function writes param_2 to offset 0xc of the object. It retrieves two pointers via
 *   menu_item_register and calls virtual slot 9 (offset 0x74) on the objects pointed to by
 *   offset 0xc of those pointers, passing 0 or 1 based on bit 1 of the stored flag. It then
 *   checks the validity of the object at offset 8 using check_object_field_via_helper; if
 *   valid, it calls settings_refresh_working_copy to update the local settings copy.
 *   Finally, it calls check_mode_transition_validity with the object and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_activate_menu_item(cls_10595788 *param_1,uint16_t param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  param_1->field_0xc = param_2;
  iVar1 = menu_item_register((int)param_1->field_0x0);
  iVar2 = menu_item_register((int)param_1->field_0x0);
  if ((param_1->field_0xc & 2) == 2) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj + iVar1,0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].adj + iVar2,0);
  }
  else {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj + iVar1,1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[14].adj + iVar2,1);
  }
  bVar3 = check_object_field_via_helper((char*)(param_1) ->field_0x8);
  if (bVar3) {
    settings_refresh_working_copy((char*)(param_1) ->field_0x8);
  }
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
