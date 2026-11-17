/* @k10d invoke_virtual_method_on_object_1038f2ae @ 0x1038f2ae
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes a virtual method on it with a single
 *   parameter.
 * summary:
 *   Calls menu_item_register with param_1 to obtain an object pointer. Dereferences the
 *   vtable at offset 0xc of that object and calls the method at vtable slot 1 (offset 0xc)
 *   with a this-pointer adjusted by the short at vtable offset 8 and param_2 as the
 *   argument. The callee menu_item_register is not named, so the specific subsystem is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_method_on_object_1038f2ae(int param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),param_2);
  return;
}
