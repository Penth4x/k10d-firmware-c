/* @k10d build_menu_item_list_103876dc @ 0x103876dc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores a parameter into an object field, updates two derived pointers, and triggers
 *   virtual notifications.
 * summary:
 *   Writes param_2 to offset 0x30 of the object in param_1. Calls menu_item_register to
 *   retrieve a related object, then calls menu_list_build with calculated offsets (0x34 and
 *   0x46 plus param_2*2) and constants 3 and 4. Invokes virtual method slot 1 on the
 *   related object three times after each update step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_menu_item_list_103876dc(int param_1,int param_2)

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
  return;
}
