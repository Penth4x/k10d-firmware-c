/* @k10d register_menu_items_with_state @ 0x1037e340
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 3 of an object derived from param_1 three times with argument 0,
 *   then conditionally a fourth time with argument 1.
 * summary:
 *   The function repeatedly calls menu_item_register(param_1) to obtain an object pointer,
 *   then performs a Cfront-style virtual call to slot 3 (offset 0xc) of the sub-object at
 *   offset 0xc of that pointer. The first three calls pass 0 as the second argument.
 *   Depending on param_2 (0, 1, or 2), it makes a fourth call passing 1. The callee
 *   menu_item_register is not named, so the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_items_with_state(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  if (param_2 == 0) {
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (param_2 == 1) {
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (param_2 == 2) {
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
