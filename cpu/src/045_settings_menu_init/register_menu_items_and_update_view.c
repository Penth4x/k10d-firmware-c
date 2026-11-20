/* @k10d register_menu_items_and_update_view @ 0x103a4c30
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Checks a state byte at offset 0x50 and invokes virtual slot 1 on an object derived from
 *   param_1+8, with extra cleanup calls if state is 1.
 * summary:
 *   The function branches on the value of the byte at param_1+0x50. If it is 0 or 1, it
 *   calls menu_item_register with param_1+8 and then invokes virtual slot 1 (offset 0xc) on
 *   the returned object. If the state is 1, it additionally zeroes fields at 0x54 and 0x58
 *   and calls draw_viewfinder_crosshair and register_menu_item_on_state_match. Finally, it
 *   performs four more identical virtual slot 1 invocations on objects obtained from
 *   menu_item_register(param_1+8).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_items_and_update_view(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x50) == '\0') {
    iVar1 = menu_item_register((int)param_1 + 8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  }
  else if (*(char *)((int)param_1 + 0x50) == '\x01') {
    iVar1 = menu_item_register((int)param_1 + 8);
    (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
    *(uint32_t *)((int)param_1 + 0x54) = 0;
    *(uint32_t *)((int)param_1 + 0x58) = 0;
    draw_viewfinder_crosshair(param_1);
    register_menu_item_on_state_match(param_1);
  }
  iVar2 = (int)param_1 + 8;
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  iVar1 = menu_item_register(iVar2);
  (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[1].fn)(iVar1 + *(short *)(*(int *)(iVar1 + 0xc) + 8),1);
  return;
}
