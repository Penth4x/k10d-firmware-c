/* @k10d call_single_helper_103d7a90 @ 0x103d7a90
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function and returns.
 * summary:
 *   This function is a virtual method (slot 7) of class cls_105964c4. It contains no local
 *   logic other than calling update_state_and_notify. The role of the callee is unknown, so
 *   the specific subsystem behavior cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103d7a90(uint32_t param_x0, uint32_t param_x1)
{
  update_state_and_notify((uint32_t *)(uint32_t)param_x0,(uint32_t)param_x1);
  return;
}
