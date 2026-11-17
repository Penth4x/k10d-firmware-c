/* @k10d call_subobject_method_at_offset_0x20 @ 0x10443eba
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Invokes a helper on the object pointer stored at offset 0x20 of the given structure.
 * summary:
 *   The function dereferences param_1, reads the pointer at offset 0x20, and passes it as
 *   the sole argument to set_flag2_with_notify. It acts as a thin wrapper or virtual-method
 *   trampoline for a sub-object field. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_method_at_offset_0x20(void *param_1)

{
  set_flag2_with_notify(*(void **)((int)param_1 + 0x20));
  return;
}
