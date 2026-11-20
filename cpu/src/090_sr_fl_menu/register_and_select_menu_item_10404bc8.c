/* @k10d register_and_select_menu_item_10404bc8 @ 0x10404bc8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Resets three objects to state 0 via virtual calls, then sets one selected object to
 *   state 1.
 * summary:
 *   Calls menu_item_register three times with param_1 to obtain object pointers. For each
 *   object, performs a virtual call (slot 2) with argument 0. Then, based on param_2 (0, 1,
 *   or 2), performs a virtual call with argument 1 on the corresponding object. The
 *   specific subsystem (e.g., display, sensor) is not determinable from the pseudocode or
 *   verified callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_select_menu_item_10404bc8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  if (param_2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  else if (param_2 == 1) {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
  }
  else if (param_2 == 2) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  return;
}
