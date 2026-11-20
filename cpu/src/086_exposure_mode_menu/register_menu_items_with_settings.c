/* @k10d register_menu_items_with_settings @ 0x103efacc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 086_exposure_mode_menu (unit names are model-proposed)
 * purpose:
 *   Repeatedly calls virtual slot 2 of an object obtained via menu_item_register, passing 0
 *   or 1 as the second argument.
 * summary:
 *   The function calls menu_item_register(*param_1) to obtain an object pointer, then
 *   invokes virtual slot 2 (offset 0xc in the vtable) on that object with a this-adjustment
 *   and a second argument of 0, doing this 12 times. It then calls
 *   get_setting_by_index(param_1, 0xb) and branches on the return value (0-4) to call
 *   get_setting_by_index again with 0xc, 0xd, 0xe, or 0xf. Finally it calls the same
 *   virtual slot 2 with argument 1. The callees menu_item_register and get_setting_by_index
 *   are unnamed, so the subsystem is not determinable.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_items_with_settings(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = 1;
  do {
    iVar2 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar2 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = get_setting_by_index((int)param_1,0xb);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  if (iVar1 == 1) {
    get_setting_by_index((int)param_1,0xc);
    iVar1 = 1;
    do {
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    return;
  }
  if (iVar1 == 2) {
    iVar1 = 0xd;
  }
  else if (iVar1 == 3) {
    iVar1 = 0xe;
  }
  else {
    if (iVar1 != 4) goto LAB_103efdb8;
    iVar1 = 0xf;
  }
  get_setting_by_index((int)param_1,iVar1);
LAB_103efdb8:
  iVar1 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
