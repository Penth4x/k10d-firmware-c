/* @k10d call_single_helper_103c7c8c @ 0x103c7c8c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 058_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function and returns.
 * summary:
 *   This function is a thin wrapper that calls update_state_and_notify and returns
 *   immediately. It is virtual method slot 7 of class cls_10595788. No other operations or
 *   side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103c7c8c(void)

{
  update_state_and_notify((uint32_t *)__frv_reg_unset(4),__frv_reg_unset(5));
  return;
}
