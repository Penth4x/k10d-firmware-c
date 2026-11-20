/* @k10d set_flag_and_invoke_virtual_slot_103cadf0 @ 0x103cadf0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 062_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Stores a 16-bit flag in the object, then calls a virtual method with an argument
 *   derived from that flag.
 * summary:
 *   The function writes param_2 to offset 0x0c of the object (param_1 + 3). It calls
 *   menu_item_register with the first word of the object, likely to obtain a related object
 *   or context. It then performs a virtual call on the result of menu_item_register,
 *   specifically invoking virtual slot 11 (offset 0x74 in the vtable). The argument to this
 *   virtual call is 0 if bit 1 or bit 2 of the stored flag is set, otherwise 1. Finally, it
 *   calls check_mode_transition_validity with the original object and 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103cae20) overlaps instruction at (ram,0x103cae1e)
    */

void set_flag_and_invoke_virtual_slot_103cadf0(cls_105958e8 *param_1,uint16_t param_2)

{
  int iVar1;
  
  param_1->field_0xc = param_2;
  iVar1 = menu_item_register((int)param_1->field_0x0);
  if (((param_1->field_0xc & 2) == 2) || ((param_1->field_0xc & 4) == 4)) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj + iVar1,0);
  }
  else {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj + iVar1,1);
  }
  check_mode_transition_validity(&param_1->field_0x0,0);
  return;
}
