/* @k10d call_single_helper_and_return_zero_1052287e @ 0x1052287e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 281_test_mode_telemetry (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper with the given pointer argument and returns zero.
 * summary:
 *   The function takes one pointer parameter, passes it to
 *   invoke_virtual_slot_two_104ae2e4, and returns 0. No other operations, globals, or side
 *   effects are visible in the pseudocode. The role of the callee is unknown, so the
 *   wrapper's behavior is described mechanically.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_single_helper_and_return_zero_1052287e(void *param_1)

{
  invoke_virtual_slot_two_104ae2e4(param_1);
  return 0;
}
