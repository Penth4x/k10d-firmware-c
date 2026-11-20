/* @k10d build_menu_item_groups @ 0x10386270
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Stores a value at offset 0x30 of an object, updates two sub-structures via a helper,
 *   and triggers virtual notifications.
 * summary:
 *   The function writes param_2 to the object at param_1 + 0x30. It retrieves a sub-object
 *   via menu_item_register and calls menu_list_build twice with calculated offsets (0x34
 *   and 0x3c) and constants 3 and 4. Between these calls, it invokes virtual methods (slot
 *   1) on the sub-objects to signal changes or updates. The specific camera subsystem is
 *   not identifiable from the provided pseudocode and unknown callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_menu_item_groups(cls_105592e8 *param_1,int param_2)

{
  int iVar1;
  
  param_1->field_0x30 = param_2;
  iVar1 = menu_item_register((int)param_1);
  menu_list_build((int *)(iVar1),(uint16_t *)(&param_1->field_0x34 + param_2 * 2),(uint8_t)(3),(uint8_t)(0));
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register((int)param_1);
  menu_list_build((int *)(iVar1),(uint16_t *)(&param_1->field_0x3c + param_2),(uint8_t)(4),(uint8_t)(0));
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
