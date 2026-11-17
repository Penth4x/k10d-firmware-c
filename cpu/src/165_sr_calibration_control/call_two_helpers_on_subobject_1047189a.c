/* @k10d call_two_helpers_on_subobject_1047189a @ 0x1047189a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions on the object pointer stored at offset 0x28 of the
 *   input structure.
 * summary:
 *   The function dereferences the pointer at param_1 + 0x28 and passes it as the sole
 *   argument to set_flag2_with_notify, then to clear_flag3_with_notify. No other
 *   operations, memory writes, or state changes are visible in the pseudocode. The specific
 *   roles of the callees and the subobject are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_subobject_1047189a(int param_1)

{
  set_flag2_with_notify(*(void **)(param_1 + 0x28));
  clear_flag3_with_notify(*(void **)(param_1 + 0x28));
  return;
}
