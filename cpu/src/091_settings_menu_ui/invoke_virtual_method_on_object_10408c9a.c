/* @k10d invoke_virtual_method_on_object_10408c9a @ 0x10408c9a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes a virtual method on it with a single
 *   argument.
 * summary:
 *   Calls menu_item_register with param_1 to obtain an object pointer. Uses the Cfront
 *   virtual call idiom to invoke virtual slot 2 (offset 0xc) of that object, passing the
 *   this-adjusted pointer and param_2. The specific role of the object or method is not
 *   determinable from the provided pseudocode and unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_object_10408c9a(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_2);
  return;
}
