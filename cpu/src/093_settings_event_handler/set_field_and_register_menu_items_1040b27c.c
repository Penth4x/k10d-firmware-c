/* @k10d set_field_and_register_menu_items_1040b27c @ 0x1040b27c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 093_settings_event_handler (unit names are model-proposed)
 * purpose:
 *   Stores param_2 at offset 0x1c of the object and, if it equals 0x1bb000a, calls virtual
 *   slot 1 twice with argument 0.
 * summary:
 *   Writes the second argument into the object's 8th int field (offset 0x1c). When that
 *   value is 0x1bb000a, it fetches a related object via menu_item_register(*param_1) and
 *   invokes virtual slot 1 (vtable offset 0xc) on it twice, passing 0 as the sole argument.
 *   The callee menu_item_register is unnamed, so the subsystem role is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_register_menu_items_1040b27c(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[7] = param_2;
  if (param_2 == 0x1bb000a) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  return;
}
