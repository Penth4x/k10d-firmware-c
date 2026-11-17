/* @k10d toggle_virtual_state_flag_103a9a46 @ 0x103a9a46
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Reads a status code, calls a virtual method with 0, checks a condition, then calls the
 *   same virtual method with 1.
 * summary:
 *   The function retrieves a value from param_1+0x28 via get_setting_by_mode_flag_104f147e
 *   and obtains a pointer via menu_item_register. It invokes a virtual function (slot 2)
 *   with argument 0, then performs a switch on the status value if a specific byte at
 *   param_1+0x40 is not 0x1c or the status is not 1. Finally, it re-fetches the pointer and
 *   invokes the same virtual function with argument 1. The specific camera subsystem is not
 *   identifiable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_virtual_state_flag_103a9a46(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = get_setting_by_mode_flag_104f147e(*(uint32_t *)((int)param_1 + 0x28), __frv_reg_unset(5));
  iVar2 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if ((*(char *)((int)param_1 + 0x40) != '\x1c') || (iVar1 != 1)) {
    switch(iVar1) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
    }
  }
  iVar1 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
