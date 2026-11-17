/* @k10d register_menu_item_for_state @ 0x103a6b54
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 046_menu_display_control (unit names are model-proposed)
 * purpose:
 *   Dispatches a state-change event to an object when the parent state is 4 and the event
 *   ID is 0xd-0x10.
 * summary:
 *   Checks if the integer at offset 0x40 of param_1 is 4. If so, it switches on param_2.
 *   For values 0xd, 0xe, 0xf, and 0x10, it calls menu_item_register with param_1 + 8 to
 *   obtain an object pointer, then performs a virtual call to slot 2 of that object with an
 *   argument of 0. The role of the specific state or event is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_for_state(int param_1,uint32_t param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x40) == 5) || (*(int *)(param_1 + 0x40) != 4)) goto LAB_103a6c12;
  switch(param_2) {
  case 0xd:
    iVar1 = menu_item_register(param_1 + 8);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    break;
  case 0xe:
    iVar1 = menu_item_register(param_1 + 8);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  default:
LAB_103a6c12:
    break;
  case 0xf:
    iVar1 = menu_item_register(param_1 + 8);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
    break;
  case 0x10:
    iVar1 = menu_item_register(param_1 + 8);
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  }
  return;
}
