/* @k10d call_subobject_at_offset_0x14_10440082 @ 0x10440082
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a function on the pointer stored at offset 0x14 of the object passed in
 *   param_1.
 * summary:
 *   The function dereferences the pointer at param_1 + 0x14 and passes it as the sole
 *   argument to set_flag3_with_notify. It acts as a thin wrapper or accessor that forwards
 *   a sub-object reference to a callee. No other state is modified or inspected within this
 *   function.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_at_offset_0x14_10440082(int param_1)

{
  set_flag3_with_notify(*(void **)(param_1 + 0x14));
  return;
}
