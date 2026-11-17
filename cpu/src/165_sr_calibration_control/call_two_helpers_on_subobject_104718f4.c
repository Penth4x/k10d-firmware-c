/* @k10d call_two_helpers_on_subobject_104718f4 @ 0x104718f4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions on the object pointer stored at offset 0x2c of the
 *   input structure.
 * summary:
 *   The function dereferences the pointer at param_1 + 0x2c and passes it as the sole
 *   argument to clear_flag2_with_notify, then to clear_flag3_with_notify. No other
 *   operations, memory writes, or state changes are visible in the pseudocode. The specific
 *   roles of the callees and the subobject are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_subobject_104718f4(int param_1)

{
  clear_flag2_with_notify(*(void **)(param_1 + 0x2c));
  clear_flag3_with_notify(*(void **)(param_1 + 0x2c));
  return;
}
