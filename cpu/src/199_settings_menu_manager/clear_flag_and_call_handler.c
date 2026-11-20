/* @k10d clear_flag_and_call_handler @ 0x10494e84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_and_call_handler(cls_105b4dac *param_1)

{
  invoke_virtual_method_on_range_104938a2((cls_105b47b4 *)param_1);
  if (param_1->field_0xac != '\0') {
    dispatch_virtual_event_callback((int)param_1);
    param_1->field_0xac = 0;
  }
  return;
}
