/* @k10d init_object_with_fixed_state_1037228c @ 0x1037228c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 033_sr_menu_handler (unit names are model-proposed)
 * purpose:
 *   Sets a field at offset 0x18 to 4 and calls four helper functions with a fixed SDRAM
 *   address.
 * summary:
 *   The function writes the value 4 to the parameter struct at offset 0x18. It then calls
 *   register_and_select_menu_items_1038c638 with the SDRAM address 0x80018060 and specific
 *   arguments, followed by call_helper_on_struct_field_1036c46c,
 *   compute_and_send_two_value_pairs_1038c44c, and call_helper_on_struct_field_1036c41a.
 *   The callees are not named, so the specific subsystem role is not determinable from the
 *   provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_fixed_state_1037228c(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x18) = 4;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x16,0,0,1);
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_value_pairs_1038c44c((cls_10559b1c *)0x80018060/*SDRAM*/);
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
