/* @k10d call_single_helper_103a6382 @ 0x103a6382
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Forwards its single pointer argument to activate_object_state_once and returns.
 * summary:
 *   A one-line wrapper that passes param_1 to activate_object_state_once. No other logic,
 *   no globals touched. The callee's role is unknown, so the wrapper's behavior is purely
 *   delegation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_103a6382(void *param_1)

{
  activate_object_state_once(param_1);
  return;
}
