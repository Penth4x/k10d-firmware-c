/* @k10d toggle_virtual_state_with_cleanup @ 0x103b1060
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method with state 0, conditionally calls a cleanup helper, then
 *   invokes the same virtual method with state 1.
 * summary:
 *   The function retrieves a pointer via menu_item_register from an offset in param_1 and
 *   performs a virtual call (slot 2) with argument 0. It then checks a byte at offset 0x48
 *   in param_1; if it is not 0x1c, it calls check_object_property_value with a pointer from
 *   offset 0x28. Finally, it repeats the virtual call with argument 1. The pattern suggests
 *   a state transition or toggle operation with an intermediate cleanup step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_virtual_state_with_cleanup(void *param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  if (*(char *)((int)param_1 + 0x48) != '\x1c') {
    check_object_property_value(*(uint32_t *)((int)param_1 + 0x28));
  }
  iVar1 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
