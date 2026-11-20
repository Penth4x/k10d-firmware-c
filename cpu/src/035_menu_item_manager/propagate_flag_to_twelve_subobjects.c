/* @k10d propagate_flag_to_twelve_subobjects @ 0x1037813c
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores a flag in an object and invokes a virtual method on twelve sub-objects with
 *   inverted or original flag values.
 * summary:
 *   The function writes param_2 to offset 0x60 of the object pointed to by param_1. It then
 *   retrieves twelve sub-objects via menu_item_register and calls a virtual method (slot 2)
 *   on each, passing the inverted flag for the first six and the original flag for the last
 *   six. The specific role of the virtual method is unknown as the callee
 *   menu_item_register is not named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void propagate_flag_to_twelve_subobjects(cls_105586cc *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = param_2 == 0;
  *(char *)&param_1->field_0x60 = (char)param_2;
  bVar1 = !bVar3;
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar3);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar3);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar3);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar3);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar3);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar3);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar1);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar1);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar1);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar1);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),bVar1);
  return;
}
