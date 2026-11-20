/* @k10d dispatch_two_object_virtual_calls @ 0x10382c84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves two objects via a helper and invokes a virtual method on one or both based on
 *   two flag parameters.
 * summary:
 *   Calls menu_item_register twice with param_1 to obtain two object pointers (iVar1,
 *   iVar2). Uses the Cfront virtual call idiom to invoke virtual slot 2 (offset 0xc) on the
 *   sub-object at offset 0xc of each pointer. If param_2 is 0, calls the method on both
 *   objects with argument 0. If param_3 is 0, calls it on the first object with argument 1.
 *   Otherwise, calls it on the second object with no additional argument. The specific role
 *   of the virtual method is unknown as the callee menu_item_register is unnamed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_two_object_virtual_calls(int param_1,int param_2,int param_3)

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
