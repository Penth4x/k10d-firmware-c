/* @k10d set_flag_and_toggle_state @ 0x10418444
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_toggle_state(int param_1,int param_2)

{
  *(char *)(param_1 + 0x90) = (char)param_2;
  if (param_2 == 0) {
    call_single_helper_104185ec();
  }
  else {
    set_flg_obj((uint32_t *)(param_1 + 0x1538));
  }
  return;
}
