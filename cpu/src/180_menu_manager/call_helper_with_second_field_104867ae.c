/* @k10d call_helper_with_second_field_104867ae @ 0x104867ae
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Passes the integer at offset 4 of the object to a single helper function.
 * summary:
 *   The function dereferences param_1 + 4 and passes that value as the sole argument to
 *   deactivate_display_state. It is invoked as virtual method slot 4 by several classes,
 *   suggesting it is a common interface operation. No other side effects or state
 *   modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_second_field_104867ae(int param_1)

{
  deactivate_display_state(*(int *)(param_1 + 4));
  return;
}
