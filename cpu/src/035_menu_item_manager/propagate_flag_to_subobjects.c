/* @k10d propagate_flag_to_subobjects @ 0x10376178
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores a flag in the object and invokes a virtual method on twelve sub-objects with
 *   complementary boolean values.
 * summary:
 *   The function writes param_2 to offset 0x6c of the object pointed to by param_1. It then
 *   retrieves twelve sub-objects via menu_item_register and calls a virtual method (slot 2)
 *   on each. The first six calls pass the original flag (param_2 == 0), while the last six
 *   pass the inverted flag, suggesting a complementary state update for paired sub-objects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void propagate_flag_to_subobjects(cls_10558568 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = param_2 == 0;
  param_1->field_0x6c = (char)param_2;
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
