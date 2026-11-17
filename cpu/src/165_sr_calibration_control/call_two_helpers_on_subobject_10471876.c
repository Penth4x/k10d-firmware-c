/* @k10d call_two_helpers_on_subobject_10471876 @ 0x10471876
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on the pointer stored at offset 0x28 of the given object.
 * summary:
 *   Reads the pointer at param_1 + 0x28 and passes it as the sole argument to
 *   clear_flag2_with_notify, then to clear_flag3_with_notify. No other state is touched and
 *   no return value is produced. The roles of the two callees are unknown, so the specific
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_subobject_10471876(int param_1)

{
  clear_flag2_with_notify(*(void **)(param_1 + 0x28));
  clear_flag3_with_notify(*(void **)(param_1 + 0x28));
  return;
}
