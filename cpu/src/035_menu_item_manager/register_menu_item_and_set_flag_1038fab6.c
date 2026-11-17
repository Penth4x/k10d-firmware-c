/* @k10d register_menu_item_and_set_flag_1038fab6 @ 0x1038fab6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object, invokes a virtual method with argument 1, and sets a state flag
 *   at offset 0x28.
 * summary:
 *   The function calls invoke_virtual_slot_twenty_twice with the input parameter, then
 *   retrieves a pointer via menu_item_register. It performs a virtual function call on the
 *   retrieved object (slot 2) with an argument of 1. Finally, it writes the value 1 to the
 *   memory location at param_1 + 0x28, likely indicating an active or enabled state.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_and_set_flag_1038fab6(int param_1)

{
  int iVar1;
  
  invoke_virtual_slot_twenty_twice(param_1);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  *(uint32_t *)(param_1 + 0x28) = 1;
  return;
}
