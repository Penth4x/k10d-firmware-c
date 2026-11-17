/* @k10d invoke_virtual_slot_and_dispatch @ 0x103b03f2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 049_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object derived from param_1, then calls two helpers and
 *   a final check.
 * summary:
 *   The function retrieves an object pointer via menu_item_register(param_1+8) and invokes
 *   virtual slot 2 (offset 0xc) twice with argument 1. It then calls
 *   register_error_menu_item and format_and_render_menu_item_103b1afc with param_1, and
 *   finally returns the result of check_heap_alloc_success using fields at offsets 0x40 and
 *   0x54 of param_1. The specific subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool invoke_virtual_slot_and_dispatch(void *param_1,uint32_t param_2,void *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  uint32_t extraout_r5;
  
  iVar1 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register((int)param_1 + 8);
  (**(code **)(*(int *)(iVar1 + 0xc) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  register_error_menu_item(param_1,extraout_r5,param_3,param_4);
  format_and_render_menu_item_103b1afc(param_1);
  bVar2 = check_heap_alloc_success((int *)((int)param_1 + 0x40),*(int *)((int)param_1 + 0x54));
  return bVar2;
}
