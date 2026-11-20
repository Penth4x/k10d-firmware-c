/* @k10d set_flag_if_zero_and_call_helper @ 0x10363602
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 002_settings_context (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_if_zero_and_call_helper(cls_105575b0 *param_1)

{
  if (param_1->field_0x204 == 0) {
    param_1->field_0x14 = 1;
  }
  if (param_1->field_0x16 != '\0') {
    invoke_callback_at_8000439c();
  }
  return;
}
