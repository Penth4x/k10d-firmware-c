/* @k10d call_single_helper_103eafd0 @ 0x103eafd0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function and returns.
 * summary:
 *   This function is a thin wrapper that calls update_state_and_notify with no arguments
 *   and immediately returns. It is virtual method slot 7 of class cls_105978d4. No other
 *   operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103eafd0(uint32_t param_x0, uint32_t param_x1)
{
  update_state_and_notify((uint32_t *)(uint32_t)param_x0,(uint32_t)param_x1);
  return;
}
