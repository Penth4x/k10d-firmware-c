/* @k10d register_nine_menu_items_103fa390 @ 0x103fa390
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Repeatedly resolves an object via a helper and invokes its virtual slot 1 with argument
 *   0.
 * summary:
 *   The function calls menu_item_register on *param_1 eight times, each time performing a
 *   Cfront-style virtual call to slot 1 (offset 0xc) of the resolved object with a this-
 *   adjustment and argument 0. On the seventh iteration it also calls
 *   forward_two_args_to_helper_10493bf8 with argument 0 before the virtual call. The
 *   repeated pattern suggests a sequence of state resets or notifications on a related
 *   object, but the specific subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_nine_menu_items_103fa390(int *param_1)

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
  iVar1 = menu_item_register(*param_1);
  forward_two_args_to_helper_10493bf8((int *)(iVar1),(uint8_t)(0));
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  return;
}
