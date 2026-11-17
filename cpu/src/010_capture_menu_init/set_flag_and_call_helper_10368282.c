/* @k10d set_flag_and_call_helper_10368282 @ 0x10368282
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 010_capture_menu_init (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_helper_10368282(int param_1)

{
  *(uint32_t *)(param_1 + 0x14) = 1;
  register_and_select_menu_items_1038c638(0x80018060/*SDRAM*/,0x18,0,0,0);
  return;
}
