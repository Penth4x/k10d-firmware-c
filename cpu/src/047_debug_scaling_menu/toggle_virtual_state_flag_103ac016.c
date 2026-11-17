/* @k10d toggle_virtual_state_flag_103ac016 @ 0x103ac016
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Retrieves an object pointer and invokes a virtual method with 0, then with 1, to toggle
 *   a state.
 * summary:
 *   The function calls menu_item_register with param_1 + 8 to obtain an object pointer
 *   (iVar2). It then performs a virtual call on this object, passing 0 as the argument. It
 *   subsequently calls get_setting_by_mode_flag_104f147e and executes a switch statement on
 *   the result if param_2 is 0, though the switch cases are empty. Finally, it retrieves
 *   the object pointer again and performs the same virtual call, this time passing 1 as the
 *   argument. The pattern suggests toggling a boolean state or mode on the object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_virtual_state_flag_103ac016(int param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  uVar1 = get_setting_by_mode_flag_104f147e(*(uint32_t *)(param_1 + 0x28),0);
  iVar2 = menu_item_register(param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if (param_2 == 0) {
    switch(uVar1) {
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
  iVar2 = menu_item_register(param_1 + 8);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
