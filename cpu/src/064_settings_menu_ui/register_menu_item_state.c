/* @k10d register_menu_item_state @ 0x103cc4b4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 064_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Initializes an object by storing a pointer and a flag, then dispatches virtual calls
 *   based on a status check.
 * summary:
 *   Stores param_1+5 into a global structure at offset 0x58. Calls a virtual method (slot
 *   2) twice with argument 0. Stores param_2 into the object at offset 6. Checks a status
 *   via get_field_at_offset_0x28; if zero, calls the virtual method again with argument 1
 *   (conditionally), otherwise sets a byte at offset 0x27. Finally calls
 *   check_mode_transition_validity.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_state(int *param_1,uint16_t param_2)

{
  int iVar1;
  
  iVar1 = get_or_create_singleton_object_1050b118();
  *(int **)(iVar1 + 0x58) = param_1 + 5;
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),0);
  iVar1 = menu_item_register(*param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),0);
  *(uint16_t *)(param_1 + 3) = param_2;
  iVar1 = get_or_create_singleton_object_1050b118();
  iVar1 = get_field_at_offset_0x28(iVar1);
  if (iVar1 == 0) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 0x70),1);
    iVar1 = menu_item_register(*param_1);
    if (((*(ushort *)(param_1 + 3) & 2) != 2) || ((*(ushort *)(param_1 + 3) & 4) != 4)) {
      (**(code **)(*(int *)(iVar1 + 0xc) + 0x74))
                (*(short *)(*(int *)(iVar1 + 0xc) + 0x70) + iVar1,1);
    }
  }
  else {
    *(uint8_t *)((int)param_1 + 0x27) = 1;
  }
  check_mode_transition_validity(param_1,0);
  return;
}
