/* @k10d call_subobject_method_at_offset_0x14_10440736 @ 0x10440736
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences a pointer at offset 0x14 of param_1 and passes it to
 *   set_flag3_with_notify.
 * summary:
 *   The function extracts a pointer from offset 0x14 of the input structure and passes it
 *   as the sole argument to set_flag3_with_notify. It acts as a thin wrapper or accessor
 *   that forwards a specific member of the object to another routine. No other side effects
 *   or state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_method_at_offset_0x14_10440736(void *param_1)

{
  set_flag3_with_notify(*(void **)((int)param_1 + 0x14));
  return;
}
