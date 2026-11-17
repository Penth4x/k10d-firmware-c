/* @k10d build_menu_item_list_10384c32 @ 0x10384c32
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores a parameter into an object field, updates two sub-structures via a helper, and
 *   triggers virtual calls.
 * summary:
 *   The function writes param_2 to offset 0x30 of the object in param_1. It retrieves a
 *   sub-object via menu_item_register and calls menu_list_build with calculated offsets
 *   (0x34 and 0x54) and constants 3 and 4. It performs virtual dispatches on the sub-object
 *   and finally calls two other functions with the original object pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_menu_item_list_10384c32(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x30) = param_2;
  iVar1 = menu_item_register(param_1);
  menu_list_build((void *)iVar1,(void *)(param_1 + 0x34 + param_2 * 2),3,0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  menu_list_build((void *)iVar1,(void *)(param_1 + 0x54 + param_2 * 2),4,0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  register_and_configure_menu_items(param_1);
  invoke_virtual_slot_twice_10384fde(param_1);
  return;
}
