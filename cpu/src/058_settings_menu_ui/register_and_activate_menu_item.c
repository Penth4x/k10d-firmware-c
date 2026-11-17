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

void register_and_activate_menu_item(int *param_1,uint16_t param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  *(uint16_t *)(param_1 + 3) = param_2;
  iVar1 = menu_item_register(*param_1);
  iVar2 = menu_item_register(*param_1);
  if ((*(ushort *)(param_1 + 3) & 2) == 2) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(*(short *)(*(int *)(iVar1 + 0xc) + 0x70) + iVar1,0);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))(*(short *)(*(int *)(iVar2 + 0xc) + 0x70) + iVar2,0);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(*(short *)(*(int *)(iVar1 + 0xc) + 0x70) + iVar1,1);
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x74))(*(short *)(*(int *)(iVar2 + 0xc) + 0x70) + iVar2,1);
  }
  bVar3 = check_object_field_via_helper((void *)param_1[2]);
  if (bVar3) {
    settings_refresh_working_copy((void *)param_1[2]);
  }
  check_mode_transition_validity(param_1,0);
  return;
}
