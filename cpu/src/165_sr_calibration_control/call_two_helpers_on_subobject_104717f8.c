/* @k10d call_two_helpers_on_subobject_104717f8 @ 0x104717f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions on the object pointer stored at offset 0x24 of the
 *   input structure.
 * summary:
 *   The function dereferences the pointer at param_1 + 0x24 and passes it as the sole
 *   argument to clear_flag2_with_notify, then to clear_flag3_with_notify. No other
 *   operations, memory writes, or state changes are visible in the pseudocode. The specific
 *   roles of the two callees are unknown, so the camera subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_subobject_104717f8(int param_1)

{
  clear_flag2_with_notify(*(void **)(param_1 + 0x24));
  clear_flag3_with_notify(*(void **)(param_1 + 0x24));
  return;
}
