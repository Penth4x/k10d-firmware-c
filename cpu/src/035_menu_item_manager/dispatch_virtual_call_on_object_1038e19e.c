/* @k10d dispatch_virtual_call_on_object_1038e19e @ 0x1038e19e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes a virtual method on it with a single
 *   parameter.
 * summary:
 *   Calls menu_item_register with param_1 to obtain an object pointer. Uses the Cfront
 *   virtual call idiom to invoke virtual slot 2 (offset 0xc) of the object's vtable,
 *   passing the this-adjusted object pointer and param_2. The specific subsystem is not
 *   identifiable from the available information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_on_object_1038e19e(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_2);
  return;
}
