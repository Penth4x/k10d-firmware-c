/* @k10d call_three_init_helpers_10392d02 @ 0x10392d02
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes three sequential helper functions, passing param_1 to the second and third.
 * summary:
 *   The function takes a single pointer argument and calls three unnamed callees in order:
 *   call_helper_with_offset_and_two_globals with no arguments,
 *   read_two_shorts_and_store_10392d36 with the integer value of param_1, and
 *   empty_stub_10392dc8 with param_1. It acts as a simple wrapper or initialization
 *   sequence for the three underlying operations. No camera-specific behavior is evident
 *   from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_init_helpers_10392d02(void *param_1)

{
  call_helper_with_offset_and_two_globals(__frv_reg_unset(4));
  read_two_shorts_and_store_10392d36((int)param_1);
  empty_stub_10392dc8((int)param_1);
  return;
}
