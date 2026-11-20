/* @k10d invoke_virtual_slot_one_on_objects @ 0x103d978a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Calls virtual method slot 1 on a series of objects retrieved from a container, with
 *   mode-dependent argument values.
 * summary:
 *   The function repeatedly calls menu_item_register to obtain object pointers and invokes
 *   virtual slot 1 (offset 0xc) on each, initially with argument 0. It also calls a method
 *   at offset 0x74 on the first retrieved object. Based on param_2 (1-4), it re-invokes
 *   slot 1 with argument 1 on specific objects; for param_2==1, it also reads setting 0x5c
 *   and calls empty_virtual_method. The mechanical behavior is a sequence of virtual calls
 *   with conditional state updates.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_one_on_objects(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = menu_item_register(*param_1);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj + iVar1,0);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  if (param_2 == 1) {
    iVar2 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj + iVar1,1);
    setting_get(param_1[2],0x5c);
    iVar1 = 1;
    do {
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
    empty_virtual_method();
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (param_2 == 2) {
    iVar2 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj + iVar1,1);
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (param_2 == 3) {
    iVar2 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj + iVar1,1);
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (param_2 == 4) {
    iVar2 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].fn)(((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[14].adj + iVar1,1);
    iVar1 = menu_item_register(*param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
