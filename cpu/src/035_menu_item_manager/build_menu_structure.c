/* @k10d build_menu_structure @ 0x1038762a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores a parameter in an object field and invokes virtual methods on associated sub-
 *   objects.
 * summary:
 *   The function writes param_2 to offset 0x30 of the object pointed to by param_1. It
 *   retrieves a sub-object via menu_item_register, calls menu_list_build with calculated
 *   offsets, and performs virtual calls on the sub-object. It repeats this pattern for a
 *   second sub-object and finally calls two other functions on the main object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_menu_structure(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x30) = param_2;
  iVar1 = menu_item_register(param_1);
  menu_list_build((void *)iVar1,(void *)(param_1 + 0x34 + param_2 * 2),3,0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  menu_list_build((void *)iVar1,(void *)(param_1 + 0x46 + param_2 * 2),4,0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  setup_menu_item_with_split(param_1);
  invoke_virtual_slot_twice_103879d6(param_1);
  return;
}
