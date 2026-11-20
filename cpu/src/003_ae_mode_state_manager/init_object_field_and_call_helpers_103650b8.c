/* @k10d init_object_field_and_call_helpers_103650b8 @ 0x103650b8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_field_and_call_helpers_103650b8(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x204) = 5;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,6,1,0,0);
  call_helper_on_struct_field_1036c46c();
  compute_and_send_two_value_pairs_1038c44c((cls_10559b1c *)0x80018060/*SDRAM*/);
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
