/* @k10d invoke_virtual_slot_two_on_two_objects_104eb596 @ 0x104eb596
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_two_on_two_objects_104eb596(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 8)))[1].fn)(*(short *)(*(int *)(iVar1 + 8) + 8) + iVar1,3);
  }
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 != 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 8)))[1].fn)(*(short *)(*(int *)(iVar1 + 8) + 8) + iVar1,3);
  }
  return;
}
