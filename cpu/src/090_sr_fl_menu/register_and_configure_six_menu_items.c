/* @k10d register_and_configure_six_menu_items @ 0x104048be
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method with argument 0 on six objects retrieved from param_1, then
 *   conditionally calls it with argument 1 on a subset based on param_2.
 * summary:
 *   The function retrieves six object pointers by calling menu_item_register six times with
 *   param_1. It then invokes a virtual method (slot 2, offset 0xc) on each of the six
 *   objects with an argument of 0. Depending on the value of param_2 (2 or 3), it invokes
 *   the same virtual method with an argument of 1 on a specific subset of the objects
 *   (objects 1, 5, 6 for param_2==2; objects 3, 5, 6 for param_2==3). The role of
 *   menu_item_register and the specific objects is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_configure_six_menu_items(void *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = menu_item_register((int)param_1);
  iVar2 = menu_item_register((int)param_1);
  iVar3 = menu_item_register((int)param_1);
  iVar4 = menu_item_register((int)param_1);
  iVar5 = menu_item_register((int)param_1);
  iVar6 = menu_item_register((int)param_1);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  (**(code **)(*(int *)(iVar4 + 0xc) + 0xc))(iVar4 + *(short *)(*(int *)(iVar4 + 0xc) + 8),0);
  (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,0);
  (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,0);
  if (param_2 == 2) {
    (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
  }
  else if (param_2 == 3) {
    (**(code **)(*(int *)(iVar3 + 0xc) + 0xc))(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    (**(code **)(*(int *)(iVar5 + 0xc) + 0xc))(*(short *)(*(int *)(iVar5 + 0xc) + 8) + iVar5,1);
    (**(code **)(*(int *)(iVar6 + 0xc) + 0xc))(*(short *)(*(int *)(iVar6 + 0xc) + 8) + iVar6,1);
  }
  return;
}
