/* @k10d call_helper_if_flag_set_103704de @ 0x103704de
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 029_menu_setting_update (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_flag_set_103704de(int param_1)

{
  if (*(char *)(param_1 + 0xd4) != '\0') {
    invoke_callback_at_8000439c();
  }
  return;
}
