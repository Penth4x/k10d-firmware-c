/* @k10d call_helper_with_offset_0x44 @ 0x10390906
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 037_sr_settings_handler (unit names are model-proposed)
 * purpose:
 *   Passes param_1 plus 0x44 to check_kernel_object_id_valid and returns.
 * summary:
 *   Single-instruction wrapper that forwards a pointer offset by 0x44 to an unknown callee.
 *   No other operations, side effects, or camera-specific behavior are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_0x44(int param_1)

{
  check_kernel_object_id_valid((void *)(param_1 + 0x44));
  return;
}
