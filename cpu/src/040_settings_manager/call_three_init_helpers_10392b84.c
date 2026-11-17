/* @k10d call_three_init_helpers_10392b84 @ 0x10392b84
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions in sequence, passing param_1 to the third.
 * summary:
 *   The function is a thin wrapper that calls get_or_create_sram_object_1040a240 and
 *   set_flag_and_call_two_helpers_1040ad90 with no arguments, then calls
 *   process_event_if_valid with the input pointer param_1. No local state is modified and
 *   no return value is produced. The specific roles of the callees are unknown, so the
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_init_helpers_10392b84(void *param_1)

{
  get_or_create_sram_object_1040a240();
  set_flag_and_call_two_helpers_1040ad90(__frv_reg_unset(4));
  process_event_if_valid(param_1);
  return;
}
