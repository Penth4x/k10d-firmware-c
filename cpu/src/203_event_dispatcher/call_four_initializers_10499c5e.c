/* @k10d call_four_initializers_10499c5e @ 0x10499c5e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Invokes four sequential helper functions with the same parameter and returns 1.
 * summary:
 *   The function takes a single integer argument and passes it unchanged to four callees
 *   (check_and_set_object_flag_10499c7a, check_and_set_status_flags_10499cbc,
 *   check_and_set_object_flag_10499d0a, check_and_set_flag_at_offset_0x34) in order. It
 *   then returns the constant value 1. No other operations or side effects are visible in
 *   the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_four_initializers_10499c5e(int param_1)

{
  check_and_set_object_flag_10499c7a(param_1);
  check_and_set_status_flags_10499cbc(param_1);
  check_and_set_object_flag_10499d0a(param_1);
  check_and_set_flag_at_offset_0x34(param_1);
  return 1;
}
