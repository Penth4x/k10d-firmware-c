/* @k10d dispatch_virtual_call_on_nested_object @ 0x104948f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object reached via a double pointer dereference from
 *   param_1.
 * summary:
 *   The function first calls invoke_virtual_method_on_range_10494388, then dereferences the
 *   pointer at param_1+0x48 and reads an offset at +0xc to get a vtable-like pointer. It
 *   performs a virtual call using the standard Cfront idiom, passing the adjusted object
 *   pointer and param_2 as arguments. The specific subsystem or role of the object is not
 *   determinable from the provided pseudocode and single unnamed callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_call_on_nested_object(int param_1,uint32_t param_2)

{
  int iVar1;
  
  invoke_virtual_method_on_range_10494388(__frv_reg_unset(4), __frv_reg_unset(5));
  iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0xc);
  (**(code **)(iVar1 + 0xac))(*(int *)(param_1 + 0x48) + (int)*(short *)(iVar1 + 0xa8),param_2);
  return;
}
