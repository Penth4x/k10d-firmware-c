/* @k10d call_three_initializers_10396762 @ 0x10396762
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions in sequence, passing the input pointer to the last one.
 * summary:
 *   The function calls get_or_create_sram_object_1040a240 and
 *   set_flag_and_call_two_helpers_1040ad90 with no arguments, then calls
 *   initialize_object_and_dispatch with param_1. It acts as a thin wrapper or
 *   initialization sequence for the three callees. No other operations or side effects are
 *   visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_initializers_10396762(void *param_1)

{
  get_or_create_sram_object_1040a240();
  set_flag_and_call_two_helpers_1040ad90(__frv_reg_unset(4));
  initialize_object_and_dispatch(param_1);
  return;
}
