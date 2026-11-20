/* @k10d toggle_virtual_state_flag_103b1788 @ 0x103b1788
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method with argument 0, checks a state value, and conditionally
 *   invokes the same virtual method with argument 1.
 * summary:
 *   The function retrieves an object pointer via menu_item_register and calls virtual slot
 *   2 (offset 0xc) with argument 0. It then queries a state via call_helper_on_field_0x24;
 *   if the state is 1, it sets a flag, otherwise it proceeds to call the same virtual slot
 *   with argument 1. The logic appears to toggle or update a state based on the result of
 *   the state query.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_virtual_state_flag_103b1788(void *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = menu_item_register((int)param_1 + 8);
  iVar2 = 0;
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),0);
  iVar1 = call_helper_on_field_0x24(*(int *)((int)param_1 + 0x28));
  if (iVar1 == 4) {
    bVar3 = false;
  }
  else if (iVar1 == 3) {
    bVar3 = false;
  }
  else if (iVar1 == 2) {
    bVar3 = false;
  }
  else {
    if (iVar1 == 1) {
      iVar2 = 0x20a006f;
    }
    else if (iVar1 != 0) goto LAB_103b180c;
    bVar3 = iVar2 == 0;
  }
  if (bVar3) {
    return;
  }
LAB_103b180c:
  iVar1 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
