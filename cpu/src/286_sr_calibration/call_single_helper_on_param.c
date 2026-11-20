/* @k10d call_single_helper_on_param @ 0x1052ba4c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Invokes read_display_on_flag with the first argument passed through unchanged.
 * summary:
 *   One-line wrapper that forwards *param_1 to read_display_on_flag and returns. No other
 *   operations, no side effects visible in this function. The role of read_display_on_flag
 *   is unknown, so the camera subsystem cannot be inferred.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_on_param(uint32_t *param_1)

{
  read_display_on_flag(*param_1);
  return;
}
