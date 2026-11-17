/* @k10d clear_flag_and_call_handler @ 0x10494e84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_handler(int param_1)

{
  invoke_virtual_method_on_range_104938a2(__frv_reg_unset(4));
  if (*(char *)(param_1 + 0xac) != '\0') {
    dispatch_virtual_event_callback(param_1);
    *(uint8_t *)(param_1 + 0xac) = 0;
  }
  return;
}
