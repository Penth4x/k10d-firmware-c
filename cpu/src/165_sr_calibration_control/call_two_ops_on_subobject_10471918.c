/* @k10d call_two_ops_on_subobject_10471918 @ 0x10471918
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on the object pointer stored at offset 0x2c of the given
 *   structure.
 * summary:
 *   Reads a pointer from param_1 + 0x2c and passes it as the sole argument to
 *   set_flag2_with_notify, then to clear_flag3_with_notify. No other state is read or
 *   modified. The callees are unnamed, so the specific subsystem role cannot be determined
 *   from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_ops_on_subobject_10471918(int param_1)

{
  set_flag2_with_notify(*(void **)(param_1 + 0x2c));
  clear_flag3_with_notify(*(void **)(param_1 + 0x2c));
  return;
}
