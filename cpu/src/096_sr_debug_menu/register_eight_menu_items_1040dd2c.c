/* @k10d register_eight_menu_items_1040dd2c @ 0x1040dd2c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * purpose:
 *   Calls virtual slot 1 of an object obtained via menu_item_register eight times with
 *   argument 0.
 * summary:
 *   The function takes param_1, adds 8 to form an offset, and repeatedly calls
 *   menu_item_register with that offset. Each call returns a pointer to an object whose
 *   vtable is at offset 0xc. It then invokes virtual slot 1 (offset 0xc in the vtable) on
 *   that object, passing the adjusted object pointer and 0 as arguments. This pattern is
 *   repeated eight times in sequence.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_eight_menu_items_1040dd2c(void *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)param_1 + 8;
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  return;
}
