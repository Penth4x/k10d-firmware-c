/* @k10d invoke_virtual_method_on_object_10387fe8 @ 0x10387fe8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes a virtual method on it with a single
 *   argument.
 * summary:
 *   Calls menu_item_register with param_1 to obtain an object pointer. It then performs a
 *   Cfront-style virtual call through the vtable at offset 0xc of that object, using the
 *   this-adjustment at offset 8 and passing param_2 as the argument. The specific subsystem
 *   or role of the virtual method is not determinable from the provided pseudocode and
 *   unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_object_10387fe8(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_2);
  return;
}
