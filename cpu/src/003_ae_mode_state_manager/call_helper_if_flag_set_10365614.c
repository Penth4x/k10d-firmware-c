/* @k10d call_helper_if_flag_set_10365614 @ 0x10365614
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_flag_set_10365614(cls_105576e0 *param_1)

{
  if (param_1->field_0xe0 != '\0') {
    invoke_callback_at_8000439c();
  }
  return;
}
