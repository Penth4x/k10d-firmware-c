/* @k10d toggle_two_menu_items_1038b5dc @ 0x1038b5dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on two objects to set or clear a boolean state based on param_2.
 * summary:
 *   Retrieves two object pointers via menu_item_register. If param_2 is 0, it invokes
 *   virtual slot 2 on the first object with argument 1 and on the second with argument 0.
 *   If param_2 is non-zero, it swaps the arguments, passing 0 to the first and 1 to the
 *   second. This pattern suggests mutually exclusive state management between two related
 *   components.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_two_menu_items_1038b5dc(cls_10559760 *param_1,int param_2)

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
