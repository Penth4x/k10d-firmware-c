/* @k10d call_single_helper_103de03c @ 0x103de03c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Calls a single helper function and returns.
 * summary:
 *   This function is a virtual method (slot 7) of class cls_10596968. It performs no local
 *   operations other than invoking update_state_and_notify. The role of the callee is
 *   unknown, so the specific behavior is determined entirely by that helper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103de03c(uint32_t param_x0, uint32_t param_x1)
{
  update_state_and_notify((uint32_t *)(uint32_t)param_x0,(uint32_t)param_x1);
  return;
}
