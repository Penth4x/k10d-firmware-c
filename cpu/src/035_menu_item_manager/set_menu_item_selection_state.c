/* @k10d set_menu_item_selection_state @ 0x1037e1d8
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Resets an object's state flags to zero and then sets a specific flag based on the
 *   second parameter.
 * summary:
 *   The function repeatedly calls menu_item_register to obtain an object pointer and
 *   invokes a virtual method (slot 2) with a value of 0 to clear state, followed by a call
 *   with 1 to set a state. The final state set depends on param_2, which selects one of
 *   four possible flag configurations. The repeated calls suggest a sequence of state
 *   transitions or a reset-then-set pattern for a multi-state object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_menu_item_selection_state(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = menu_item_register(param_1);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  if (param_2 == 0) {
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (param_2 == 1) {
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (param_2 == 2) {
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (param_2 == 3) {
    iVar1 = menu_item_register(param_1);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  return;
}
