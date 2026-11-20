/* @k10d register_and_select_menu_items_10389b7a @ 0x10389b7a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resets three objects obtained from param_1 and then activates one of them based on
 *   param_2.
 * summary:
 *   The function calls menu_item_register three times with param_1 to obtain three object
 *   pointers. It performs a virtual call (slot 2) with argument 0 on each of the three
 *   objects. Depending on the value of param_2 (7, 8, or 4), it performs the same virtual
 *   call with argument 1 on the first, second, or third object respectively. The specific
 *   role of the objects and the meaning of the virtual calls are not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_and_select_menu_items_10389b7a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = menu_item_register(param_1);
  iVar2 = menu_item_register(param_1);
  iVar3 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,0);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,0);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
  if (param_2 == 7) {
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar1 + 0xc) + 8) + iVar1,1);
  }
  else if (param_2 == 8) {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar2 + 0xc) + 8) + iVar2,1);
  }
  else if (param_2 == 4) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
  }
  return;
}
