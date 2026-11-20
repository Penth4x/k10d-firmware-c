/* @k10d toggle_virtual_state_flag_103ac4b0 @ 0x103ac4b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Calls a virtual method on an object derived from param_1, passing 0 or 1 based on the
 *   return value of query_object_byte_at_offset.
 * summary:
 *   The function retrieves an object pointer via menu_item_register(param_1 + 8) and
 *   invokes a virtual method (slot 2) with an argument of 0. It then checks the result of
 *   query_object_byte_at_offset(param_1 + 0x28). If the result is 2 or greater (excluding 0
 *   and 1), it invokes the same virtual method again with an argument of 1. If the result
 *   is 0 or 1, it returns after the first call. The specific subsystem is not identifiable
 *   from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_virtual_state_flag_103ac4b0(void *param_1)

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
    if (iVar2 == 2) goto LAB_103ac520;
    bVar1 = true;
  }
  if (bVar1) {
    return;
  }
LAB_103ac520:
  iVar2 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
  return;
}
