/* @k10d call_helper_with_size_608 @ 0x1039cda8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Forwards two parameters to compute_delta_and_call_virtuals with a fixed third argument
 *   of 0x260.
 * summary:
 *   This is a thin wrapper that calls compute_delta_and_call_virtuals, passing param_1 and
 *   param_2 through unchanged and supplying the constant 0x260 (608) as the third argument.
 *   No other operations, side effects, or state modifications are visible in this function.
 *   The role of compute_delta_and_call_virtuals is unknown, so the specific subsystem
 *   cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_size_608(uint32_t param_1,uint32_t param_2)

{
  compute_delta_and_call_virtuals(param_1,param_2,0x260);
  return;
}
