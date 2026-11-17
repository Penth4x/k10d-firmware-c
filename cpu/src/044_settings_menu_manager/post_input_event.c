/* @k10d post_input_event @ 0x1039fcda
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void post_input_event(int param_1)

{
  ui_post_input((void *)(param_1 + 8), __frv_reg_unset(5));
  return;
}
