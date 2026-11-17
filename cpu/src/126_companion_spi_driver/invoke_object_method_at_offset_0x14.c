/* @k10d invoke_object_method_at_offset_0x14 @ 0x104407b4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a function pointer stored at offset 0x14 of the object passed in param_1.
 * summary:
 *   The function dereferences param_1 + 0x14 to obtain a function pointer and invokes it
 *   with no arguments. It acts as a thin wrapper or thunk around the callee at 0x10439938.
 *   The specific role of the object or the callee is not determinable from the provided
 *   pseudocode and unknown callee name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_object_method_at_offset_0x14(void *param_1)

{
  clear_flag2_with_notify(*(void **)((int)param_1 + 0x14));
  return;
}
