/* @k10d register_six_menu_items_103d6b6a @ 0x103d6b6a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Resolves an object via a helper and invokes its virtual slot 1 with alternating 0 and 1
 *   arguments six times.
 * summary:
 *   The function calls menu_item_register with *param_1 to obtain an object pointer iVar1.
 *   It then performs a Cfront-style virtual call on slot 1 (offset 0xc) of the vtable found
 *   at iVar1+0xc, passing a this-adjusted pointer and a second argument. This sequence is
 *   repeated six times: the first four calls pass 0 as the second argument, and the last
 *   two pass 1. The caller context indicates this is a virtual method of class
 *   cls_1059639c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_six_menu_items_103d6b6a(int *param_1)

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
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
