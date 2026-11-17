/* @k10d call_subobject_method_1043fff2 @ 0x1043fff2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a single function on the object pointer stored at offset 0x10 of the given
 *   structure.
 * summary:
 *   The function dereferences param_1 + 0x10 and passes that pointer as the sole argument
 *   to set_flag3_with_notify. It acts as a thin wrapper or thunk around the callee. No
 *   other side effects, flags, or memory writes are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_method_1043fff2(int param_1)

{
  set_flag3_with_notify(*(void **)(param_1 + 0x10));
  return;
}
