/* @k10d call_single_helper_103d747a @ 0x103d747a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a single unnamed helper function and returns.
 * summary:
 *   This function is a virtual method (slot 7) of class cls_10596430. It contains no local
 *   logic and simply calls update_state_and_notify before returning. The specific behavior
 *   is entirely dependent on the unannotated callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103d747a(uint32_t param_x0, uint32_t param_x1)
{
  update_state_and_notify((uint32_t *)(uint32_t)param_x0,(uint32_t)param_x1);
  return;
}
