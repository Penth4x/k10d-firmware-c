/* @k10d invoke_virtual_slot_on_objects @ 0x10385dfe
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Iteratively retrieves objects via a helper and invokes a virtual method on each.
 * summary:
 *   The function calls menu_item_register repeatedly to obtain object pointers. For each
 *   object, it performs a virtual call to slot 2 (offset 0xc in the vtable) with an
 *   argument of 0. It also clears a byte array at offset 0x44 of the input parameter during
 *   the first loop. The specific role of the objects and the virtual method is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_on_objects(cls_105592e8 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < (int)param_1->field_0x6c) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      (&param_1->field_0x44)[iVar2] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0x6c);
  }
  iVar2 = 0;
  if (0 < (int)param_1->field_0x6c) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0x6c);
  }
  iVar2 = 0;
  if (0 < (int)param_1->field_0x6c) {
    do {
      iVar1 = menu_item_register((int)param_1);
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_1->field_0x6c);
  }
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register((int)param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  return;
}
