/* @k10d init_object_with_fixed_state_10370b68 @ 0x10370b68
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Sets a field at offset 0x14 to 3 and calls four helper functions with a fixed SDRAM
 *   address.
 * summary:
 *   The function writes the value 3 to the memory location at param_1 + 0x14. It then calls
 *   register_and_select_menu_items_1038c638 with arguments (0x80018060, 6, 1, 0, 0),
 *   followed by call_helper_on_struct_field_1036c46c,
 *   compute_and_send_two_value_pairs_1038c44c(0x80018060), and finally
 *   call_helper_on_struct_field_1036c41a(param_1, 0x80018060, 1). The specific roles of the
 *   callees are unknown, but the pattern suggests initializing or configuring an object
 *   associated with the SDRAM address 0x80018060.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_fixed_state_10370b68(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 3;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,6,1,0,0);
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_value_pairs_1038c44c(0x80018060/*SDRAM*/);
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
