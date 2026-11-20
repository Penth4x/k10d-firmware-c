/* @k10d dispatch_object_state_change_10382d98 @ 0x10382d98
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on objects retrieved via menu_item_register based on param_2
 *   and param_3 values.
 * summary:
 *   The function calls menu_item_register twice with param_1 to obtain object pointers. It
 *   then performs virtual calls on these objects using the Cfront idiom. The specific
 *   virtual slot and arguments depend on the values of param_2 and param_3: if param_2 is
 *   0, it calls with argument 0 on both objects; if param_3 is 0, it calls with argument 1
 *   on the first object; otherwise, it calls with no additional argument on the second
 *   object. The role of menu_item_register and the specific objects are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_object_state_change_10382d98(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  if (param_2 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  }
  else if (param_3 == 0) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  else {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2);
  }
  return;
}
