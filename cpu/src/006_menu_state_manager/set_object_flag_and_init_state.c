/* @k10d set_object_flag_and_init_state @ 0x10365d7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_object_flag_and_init_state(void *param_1)

{
  *(uint32_t *)((int)param_1 + 0x14) = 2;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x14,2,1,1);
  call_helper_on_struct_field_1036c46c();
  call_helper_on_struct_field_1036c41a(param_1,(void *)0x80018060/*SDRAM*/,1);
  return;
}
