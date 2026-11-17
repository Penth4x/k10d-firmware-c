/* @k10d invoke_object_method_at_offset_0x10_10440712 @ 0x10440712
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a function pointer stored at offset 0x10 of the object passed in param_1.
 * summary:
 *   The function dereferences param_1 + 0x10 to obtain a function pointer and invokes it
 *   with no arguments. The callee set_flag2_with_notify is not named, so the specific
 *   behavior is unknown. This is a simple trampoline or virtual-call wrapper.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_object_method_at_offset_0x10_10440712(void *param_1)

{
  set_flag2_with_notify(*(void **)((int)param_1 + 0x10));
  return;
}
