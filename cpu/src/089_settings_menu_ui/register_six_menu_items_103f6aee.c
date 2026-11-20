/* @k10d register_six_menu_items_103f6aee @ 0x103f6aee
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Repeatedly resolves an object via a helper and invokes its virtual slot 1 with argument
 *   0.
 * summary:
 *   The function takes a pointer to an object ID, calls menu_item_register six times to
 *   obtain an object pointer, and each time performs a Cfront-style virtual call to slot 1
 *   (vtable offset 0xc) with a this-adjustment and a single zero argument. The repeated
 *   pattern suggests a loop unrolled six times to trigger the same virtual operation on the
 *   resolved object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_six_menu_items_103f6aee(int *param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  return;
}
