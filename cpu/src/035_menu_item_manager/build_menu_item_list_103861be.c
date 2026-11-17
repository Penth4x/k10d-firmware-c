/* @k10d build_menu_item_list_103861be @ 0x103861be
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores a parameter at offset 0x30 and invokes a sequence of virtual calls and helper
 *   functions on the object.
 * summary:
 *   The function writes param_2 to the object at offset 0x30. It then calls
 *   menu_item_register and menu_list_build with calculated offsets, followed by multiple
 *   virtual method invocations via the vtable pointer at offset 0xc. Finally, it calls
 *   register_menu_item_with_split_1038636e and invoke_virtual_slot_twice_1038656a. The
 *   specific subsystem is not identifiable from the provided pseudocode and unknown
 *   callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_menu_item_list_103861be(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x30) = param_2;
  iVar1 = menu_item_register(param_1);
  menu_list_build((void *)iVar1,(void *)(param_1 + 0x34 + param_2 * 2),3,0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  menu_list_build((void *)iVar1,(void *)(param_1 + 0x3c + param_2 * 2),4,0);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  register_menu_item_with_split_1038636e(param_1);
  invoke_virtual_slot_twice_1038656a(param_1);
  return;
}
