/* @k10d dispatch_mode_transition_10389d5e @ 0x10389d5e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Calls a mode-specific handler and invokes a virtual method on objects retrieved from
 *   param_1.
 * summary:
 *   Retrieves seven object pointers from param_1 using menu_item_register. If param_2 is 1,
 *   calls register_and_select_menu_items_10389e9a and invokes a virtual method on the first
 *   object. Otherwise, calls invoke_virtual_slot_two_1038a0ae and invokes the same virtual
 *   method on all seven objects. The virtual call uses the Cfront idiom to call slot 2 of
 *   the object's vtable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_transition_10389d5e(int param_1,int param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  iVar4 = menu_item_register(param_1);
  iVar5 = menu_item_register(param_1);
  iVar6 = menu_item_register(param_1);
  iVar7 = menu_item_register(param_1);
  if (param_2 == 1) {
    register_and_select_menu_items_10389e9a(param_1,param_3,param_4,param_5);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  }
  else {
    invoke_virtual_slot_two_1038a0ae(param_1,param_2);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
    (((vtbl_entry*)(*(int *)(iVar6 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar7 + 0xc) + 8) + iVar7,0);
  }
  return;
}
