/* @k10d toggle_two_menu_items_10408eb0 @ 0x10408eb0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Inverts the state of two objects retrieved from a container based on a boolean flag.
 * summary:
 *   The function calls menu_item_register twice with the same parameter to obtain two
 *   object pointers. It then performs virtual calls on slot 2 of each object, passing 1 and
 *   0 as the second argument. The order of these values is swapped depending on whether
 *   param_2 is zero, effectively toggling or setting opposite states for the two objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_two_menu_items_10408eb0(cls_10599780 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = menu_item_register((int)param_1);
  iVar2 = menu_item_register((int)param_1);
  if (param_2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  }
  else {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
  }
  return;
}
