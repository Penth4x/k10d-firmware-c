/* @k10d init_object_with_state_three_10365dc4 @ 0x10365dc4
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets a field at offset 0x14 to 3 and calls four helpers with a fixed SDRAM address.
 * summary:
 *   Writes the constant 3 to *(param_1 + 0x14). Calls
 *   register_and_select_menu_items_1038c638 with 0x80018060 and constants 6,1,0,0; calls
 *   call_helper_on_struct_field_1036c46c with no args; calls
 *   compute_and_send_two_value_pairs_1038c44c with 0x80018060; calls
 *   call_helper_on_struct_field_1036c41a with param_1, 0x80018060, and 1. The callees are
 *   unnamed, so the subsystem role is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_state_three_10365dc4(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 3;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,6,1,0,0);
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_value_pairs_1038c44c((cls_10559b1c *)0x80018060/*SDRAM*/);
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
