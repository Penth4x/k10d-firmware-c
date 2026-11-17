/* @k10d call_helper_with_offset_0x2c20 @ 0x10391562
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 039_sr_settings_handler (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus offset 0x2c20 to a single helper function.
 * summary:
 *   The function takes a single pointer-like argument, adds the constant offset 0x2c20, and
 *   forwards the result to check_kernel_object_id_valid. No other operations, side effects,
 *   or state changes are visible in the pseudocode. The caller is
 *   call_two_unnamed_helpers_10394af0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0x2c20(int param_1)

{
  check_kernel_object_id_valid((void *)(param_1 + 0x2c20));
  return;
}
