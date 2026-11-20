/* @k10d register_six_menu_items_1037aaf6 @ 0x1037aaf6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object via a helper and invokes its virtual slot 1 with argument 1,
 *   repeated six times.
 * summary:
 *   The function calls menu_item_register(param_1) six times to obtain an object pointer.
 *   For each result, it performs a Cfront-style virtual call to slot 1 (offset 0xc in the
 *   vtable) with the object (adjusted by the this-adjustment short) and the integer 1. The
 *   caller is store_value_and_call_two_helpers. The specific subsystem is not identifiable
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_six_menu_items_1037aaf6(int param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
