/* @k10d set_field_and_call_helper_1036510e @ 0x1036510e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_field_and_call_helper_1036510e(int param_1)

{
  *(uint32_t *)(param_1 + 0x204) = 6;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x18,0,0,0);
  return;
}
