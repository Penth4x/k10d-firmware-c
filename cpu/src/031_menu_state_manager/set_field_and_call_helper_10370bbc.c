/* @k10d set_field_and_call_helper_10370bbc @ 0x10370bbc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 031_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_10370bbc(int param_1)

{
  *(uint32_t *)(param_1 + 0x14) = 4;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x18,0,0,0);
  return;
}
