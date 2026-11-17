/* @k10d call_subobject_at_offset_0x14_104407c6 @ 0x104407c6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x14 of the object in param_1 and passes it to
 *   set_flag2_with_notify.
 * summary:
 *   The function performs a single indirect call. It loads the pointer stored at param_1 +
 *   0x14 and passes it as the sole argument to the callee set_flag2_with_notify. No other
 *   operations, side effects, or state modifications are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_at_offset_0x14_104407c6(int param_1)

{
  set_flag2_with_notify(*(void **)(param_1 + 0x14));
  return;
}
