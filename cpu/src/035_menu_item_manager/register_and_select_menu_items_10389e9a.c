/* @k10d register_and_select_menu_items_10389e9a @ 0x10389e9a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resets six objects obtained from a single source, then conditionally activates one of
 *   them based on priority parameters.
 * summary:
 *   The function calls menu_item_register six times with the same argument (param_1) to
 *   obtain six object pointers. It then invokes a virtual method (slot 2) on each object
 *   with an argument of 0, likely resetting or deactivating them. Based on the values of
 *   param_4, param_3, and param_2, it invokes the same virtual method with an argument of 1
 *   on one specific object, prioritizing param_4, then param_3, then param_2. The specific
 *   subsystem (e.g., flash, metering) is not identifiable from the provided callees or code
 *   structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_select_menu_items_10389e9a(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  iVar4 = menu_item_register(param_1);
  iVar5 = menu_item_register(param_1);
  iVar6 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
  (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
  (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
  if (param_4 == 3) {
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
  }
  else if (param_4 == 2) {
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
  }
  else if (param_3 == 2) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  else if (param_3 == 3) {
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
  }
  else if (param_2 == 1) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  else if (param_2 == 2) {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
  }
  return;
}
