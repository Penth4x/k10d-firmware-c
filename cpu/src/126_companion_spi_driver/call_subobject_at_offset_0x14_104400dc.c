/* @k10d call_subobject_at_offset_0x14_104400dc @ 0x104400dc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Dereferences the pointer at offset 0x14 of param_1 and passes it to
 *   clear_flag2_with_notify.
 * summary:
 *   The function reads a pointer from the object at param_1 + 0x14 and invokes
 *   clear_flag2_with_notify with that pointer as its sole argument. No other operations or
 *   side effects are visible in the pseudocode. The role of clear_flag2_with_notify is
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_subobject_at_offset_0x14_104400dc(int param_1)

{
  clear_flag2_with_notify(*(void **)(param_1 + 0x14));
  return;
}
