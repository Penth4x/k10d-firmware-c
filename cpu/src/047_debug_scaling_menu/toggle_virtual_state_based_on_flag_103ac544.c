/* @k10d toggle_virtual_state_based_on_flag_103ac544 @ 0x103ac544
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Reads a state flag and conditionally invokes a virtual method with 0 or 1 to toggle an
 *   object's state.
 * summary:
 *   The function retrieves an object pointer via menu_item_register and calls a virtual
 *   method (slot 2) with argument 0. It then checks a value from
 *   query_object_via_temp_buffer_104f1a6c; if the value is 1, it returns early. If the
 *   value is 0 or 2, it calls the same virtual method again with argument 1. This pattern
 *   suggests a state machine or toggle mechanism where the virtual call sets a specific
 *   state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_virtual_state_based_on_flag_103ac544(void *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = query_object_via_temp_buffer_104f1a6c(*(uint32_t *)((int)param_1 + 0x28));
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else if (iVar2 == 1) {
    bVar1 = false;
  }
  else {
    if (iVar2 == 2) goto LAB_103ac5aa;
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
LAB_103ac5aa:
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
