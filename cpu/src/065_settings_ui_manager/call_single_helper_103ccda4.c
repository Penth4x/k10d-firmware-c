/* @k10d call_single_helper_103ccda4 @ 0x103ccda4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 065_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function and returns.
 * summary:
 *   This function is a virtual method (slot 7) of class cls_10595a64. It contains no local
 *   logic and simply calls update_state_and_notify before returning. The specific behavior
 *   is entirely delegated to the callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103ccda4(uint32_t param_x0, uint32_t param_x1)
{
  update_state_and_notify((uint32_t *)(uint32_t)param_x0,(uint32_t)param_x1);
  return;
}
