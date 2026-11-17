/* @k10d set_object_state_flag @ 0x103c4f50
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a state code in the object and toggles a virtual method based on the code value.
 * summary:
 *   Writes param_2 to offset 0x18 of the object. If the code is 0x10a0017, it calls virtual
 *   slot 2 of a sub-object (via menu_item_register) with arguments 0 then 1. For codes
 *   0x10a001c, 0x10a0024, 0x10a002a, 0x10a0032, or 0x10a003a, it calls the same virtual
 *   slot with arguments 1 then 0. The specific camera subsystem is not identifiable from
 *   the provided pseudocode and unknown callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_state_flag(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[6] = param_2;
  if (param_2 == 0x10a0017) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if ((((param_2 == 0x10a001c) || (param_2 == 0x10a0024)) || (param_2 == 0x10a002a)) ||
          ((param_2 == 0x10a0032 || (param_2 == 0x10a003a)))) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  return;
}
