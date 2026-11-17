/* @k10d invoke_object_method_at_offset_0x18_1044087a @ 0x1044087a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a function pointer stored at offset 0x18 of the object passed in param_1.
 * summary:
 *   The function dereferences param_1 + 0x18 and passes that value as an argument to
 *   set_flag2_with_notify. It acts as a thin wrapper or thunk around set_flag2_with_notify,
 *   specifically targeting a field at offset 0x18 of the input structure. No other side
 *   effects or register manipulations are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_object_method_at_offset_0x18_1044087a(void *param_1)

{
  set_flag2_with_notify(*(void **)((int)param_1 + 0x18));
  return;
}
