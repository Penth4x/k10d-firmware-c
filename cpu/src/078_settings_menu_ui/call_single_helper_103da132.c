/* @k10d call_single_helper_103da132 @ 0x103da132
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function and returns.
 * summary:
 *   This function is a virtual method (slot 7) of class cls_105965fc. It contains no local
 *   logic and simply calls update_state_and_notify before returning. The specific behavior
 *   is entirely determined by the callee, which is not yet named.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103da132(uint32_t param_x0, uint32_t param_x1)
{
  update_state_and_notify((uint32_t *)(uint32_t)param_x0,(uint32_t)param_x1);
  return;
}
