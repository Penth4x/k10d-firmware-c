/* @k10d call_single_helper_103ea798 @ 0x103ea798
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 084_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function and returns.
 * summary:
 *   This function is a virtual method (slot 7) of class cls_10597840. It contains no local
 *   logic other than calling update_state_and_notify. The specific behavior is entirely
 *   dependent on the unannotated callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103ea798(uint32_t param_x0, uint32_t param_x1)
{
  update_state_and_notify((uint32_t *)(uint32_t)param_x0,(uint32_t)param_x1);
  return;
}
