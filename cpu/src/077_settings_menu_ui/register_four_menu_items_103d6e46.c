/* @k10d register_four_menu_items_103d6e46 @ 0x103d6e46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method with alternating 0/1 arguments four times on an object
 *   resolved from param_1.
 * summary:
 *   The function repeatedly calls menu_item_register with *param_1 to obtain an object
 *   pointer. It then performs a Cfront-style virtual call on slot 2 of that object (via
 *   vtable offset 0xc) with a this-adjustment and an integer argument. The argument
 *   sequence is 0, 1, 1, 0. The callee menu_item_register is not named, so the specific
 *   subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_four_menu_items_103d6e46(int *param_1)

{
  int iVar1;
  
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  return;
}
