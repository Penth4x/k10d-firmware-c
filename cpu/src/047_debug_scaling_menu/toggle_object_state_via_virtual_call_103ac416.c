/* @k10d toggle_object_state_via_virtual_call_103ac416 @ 0x103ac416
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Reads a state field, calls a virtual method with 0 or 1 based on that state, and
 *   invokes two unknown helpers.
 * summary:
 *   The function retrieves an object pointer from param_1+8 via menu_item_register and
 *   performs a virtual call (slot 2) with argument 0. It then calls
 *   empty_stub_function_103b76f0 and empty_noop_stub_103b76f2. It reads a value from
 *   param_1+0x28 via query_object_byte_property_104f19c4; if the result is 1, it returns
 *   early. If the result is 0 or 2, it performs the same virtual call but with argument 1.
 *   The specific subsystem is not identifiable from the available callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_object_state_via_virtual_call_103ac416(void *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  empty_stub_function_103b76f0();
  empty_noop_stub_103b76f2();
  iVar2 = query_object_byte_property_104f19c4(*(uint32_t *)((int)param_1 + 0x28));
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else if (iVar2 == 1) {
    bVar1 = false;
  }
  else {
    if (iVar2 == 2) goto LAB_103ac48c;
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
LAB_103ac48c:
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
