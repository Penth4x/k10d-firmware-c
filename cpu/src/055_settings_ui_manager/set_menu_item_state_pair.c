/* @k10d set_menu_item_state_pair @ 0x103c1dc2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 055_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Stores a value in the object and toggles a virtual state flag based on the value.
 * summary:
 *   The function writes param_2 to offset 0x18 of the object. It then calls
 *   menu_item_register with the first field of the object to obtain a pointer, and invokes
 *   virtual slot 2 of the object pointed to by offset 0xc of that result. The argument to
 *   the virtual call is 1 if param_2 is one of a specific set of constants (0x1070020,
 *   0x1070027, 0x107002c, 0x1070031, 0x1070039), and 0 otherwise. The order of the 1/0
 *   arguments is swapped depending on this condition.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_menu_item_state_pair(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[6] = param_2;
  if ((((param_2 == 0x1070020) || (param_2 == 0x1070027)) || (param_2 == 0x107002c)) ||
     ((param_2 == 0x1070031 || (param_2 == 0x1070039)))) {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  else {
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    iVar1 = menu_item_register(*param_1);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
