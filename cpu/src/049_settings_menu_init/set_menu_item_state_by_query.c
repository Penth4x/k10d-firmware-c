/* @k10d set_menu_item_state_by_query @ 0x103b10e2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object derived from param_1, passing 0 or 1 based on a
 *   state query.
 * summary:
 *   Retrieves an object pointer via menu_item_register(param_1+8) and invokes virtual slot
 *   2 with argument 0. Then queries a state via query_object_byte_at_offset(param_1+0x28).
 *   If the state is 2 or 3, it invokes the same virtual slot with argument 1. If the state
 *   is 0, 1, or other non-2/3 values, it returns after the first call.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_menu_item_state_by_query(void *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  iVar2 = query_object_byte_at_offset(*(uint32_t *)((int)param_1 + 0x28));
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else if (iVar2 == 1) {
    bVar1 = false;
  }
  else {
    if (iVar2 == 2) goto LAB_103b1152;
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
LAB_103b1152:
  iVar2 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
