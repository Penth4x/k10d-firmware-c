/* @k10d toggle_virtual_state_flag_103b0700 @ 0x103b0700
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Retrieves a sub-object, calls its virtual slot 1 with 0, checks a status, then calls
 *   the same slot with 1.
 * summary:
 *   The function calls menu_item_register with param_1+8 to obtain a sub-object pointer. It
 *   performs a virtual call (slot 1) on this sub-object with argument 0. It then calls
 *   get_setting_by_mode_flag_104f147e with a value from param_1+0x28 and checks a byte at
 *   param_1+0x48. Finally, it retrieves the sub-object again and calls the same virtual
 *   slot with argument 1. The pattern suggests toggling or resetting a state via a virtual
 *   interface.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_virtual_state_flag_103b0700(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = get_setting_by_mode_flag_104f147e(*(uint32_t *)((int)param_1 + 0x28),0);
  iVar2 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if ((*(char *)((int)param_1 + 0x48) != '\x1c') || (iVar1 != 1)) {
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
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
