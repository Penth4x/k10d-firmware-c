/* @k10d call_helper_if_flag_set_10367954 @ 0x10367954
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 008_mode_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_flag_set_10367954(int param_1)

{
  if (*(char *)(param_1 + 0xa6) != '\0') {
    invoke_callback_at_8000439c();
  }
  return;
}
