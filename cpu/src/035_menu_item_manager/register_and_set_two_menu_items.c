/* @k10d register_and_set_two_menu_items @ 0x1037fb50
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves two objects via a helper and invokes a virtual method on each with a
 *   parameter and its boolean negation.
 * summary:
 *   Calls menu_item_register twice with param_1 to obtain two object pointers. Performs a
 *   virtual call on the second object with param_2, then a virtual call on the first object
 *   with (param_2 == 0). The virtual calls use the Cfront idiom with a this-adjustment from
 *   the vtable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_set_two_menu_items(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),param_2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)
            (iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_2 == 0);
  return;
}
