/* @k10d toggle_object_state_via_virtual_call_103ac2a0 @ 0x103ac2a0
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Reads a state value from an object, conditionally branches on it, and invokes a virtual
 *   method with 0 then 1.
 * summary:
 *   The function extracts a pointer from param_1+0x28 and queries its state via
 *   get_setting_by_mode_flag_104f147e and get_setting_by_two_probe_flags. It retrieves a
 *   sub-object at param_1+8 via menu_item_register and calls virtual slot 1 (offset 0xc)
 *   with argument 0. After a complex conditional check involving the state values and a
 *   byte at param_1+0x48, it calls the same virtual slot again with argument 1. The pattern
 *   suggests toggling or transitioning an object's state between two values.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_object_state_via_virtual_call_103ac2a0(void *param_1)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = get_setting_by_mode_flag_104f147e(*(uint32_t *)((int)param_1 + 0x28),0);
  iVar2 = get_setting_by_two_probe_flags(*(int *)((int)param_1 + 0x28));
  iVar3 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(iVar3 + *(short *)(*(int *)(iVar3 + 0xc) + 8),0);
  iVar3 = query_object_property_via_temp_104f2570(*(uint32_t *)((int)param_1 + 0x28));
  if ((((((iVar3 == 0) && (iVar3 = check_object_property_15(*(uint32_t *)((int)param_1 + 0x28)), iVar3 == 0))
        && ((iVar2 != 1 || (*(char *)((int)param_1 + 0x48) == '\n')))) &&
       ((iVar2 != 2 || (*(char *)((int)param_1 + 0x48) == '\n')))) &&
      ((iVar2 != 3 || (*(char *)((int)param_1 + 0x48) == '\n')))) &&
     ((iVar2 != 4 || (*(char *)((int)param_1 + 0x48) == '\n')))) {
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
  iVar2 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
