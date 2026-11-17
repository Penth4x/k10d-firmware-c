/* @k10d dispatch_mode_by_state_id @ 0x1040dc92
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 096_sr_debug_menu (unit names are model-proposed)
 * purpose:
 *   Selects and calls a handler based on a state ID at offset 0x48, then invokes a common
 *   follow-up with a mode-specific offset.
 * summary:
 *   Reads an integer state ID from param_1+0x48 and branches on values 1-6, calling one of
 *   six distinct handler functions (populate_menu_item_strings, init_and_fill_buffer_table,
 *   populate_sixteen_byte_fields, populate_sixteen_ui_fields,
 *   populate_menu_with_eight_items, build_and_register_menu_items) and setting a
 *   corresponding offset constant (0x380, 0x50, 0x17c, 0x228, 0x518, 0x2d4). For unknown
 *   IDs it calls invoke_virtual_slot_one_1040de5a and returns early. After the handler, it
 *   calls check_heap_alloc_success with param_1+0x40 and the value at param_1+offset. The
 *   caller is a virtual method slot 5 of cls_10564150, suggesting this is a polymorphic
 *   state transition or mode activation routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_by_state_id(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 1) {
    populate_menu_item_strings(param_1);
    iVar1 = 0x380;
  }
  else if (iVar1 == 6) {
    init_and_fill_buffer_table(param_1);
    iVar1 = 0x50;
  }
  else if (iVar1 == 2) {
    populate_sixteen_byte_fields(param_1,__frv_reg_unset(5),__frv_reg_unset(6),(void *)__frv_reg_unset(7));
    iVar1 = 0x17c;
  }
  else if (iVar1 == 3) {
    populate_sixteen_ui_fields(param_1,__frv_reg_unset(5),__frv_reg_unset(6),(void *)__frv_reg_unset(7));
    iVar1 = 0x228;
  }
  else if (iVar1 == 4) {
    populate_menu_with_eight_items(param_1,__frv_reg_unset(5),__frv_reg_unset(6),(void *)__frv_reg_unset(7));
    iVar1 = 0x518;
  }
  else {
    if (iVar1 != 5) {
      invoke_virtual_slot_one_1040de5a(param_1);
      return;
    }
    build_and_register_menu_items(__frv_reg_unset(4),__frv_reg_unset(5),__frv_reg_unset(6),(void *)__frv_reg_unset(7));
    iVar1 = 0x2d4;
  }
  check_heap_alloc_success((int *)(param_1 + 0x40),*(int *)(iVar1 + param_1));
  return;
}
