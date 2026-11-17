/* @k10d call_two_ops_on_subobject_1047181c @ 0x1047181c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions on the object pointer stored at offset 0x24 of the input
 *   structure.
 * summary:
 *   The function dereferences the pointer at param_1 + 0x24 and passes it as the sole
 *   argument to set_flag2_with_notify, then to clear_flag3_with_notify. It performs no
 *   other operations or state modifications. The specific roles of the callees are unknown,
 *   so the operation is described mechanically as sequential calls on a sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_ops_on_subobject_1047181c(int param_1)

{
  set_flag2_with_notify(*(void **)(param_1 + 0x24));
  clear_flag3_with_notify(*(void **)(param_1 + 0x24));
  return;
}
