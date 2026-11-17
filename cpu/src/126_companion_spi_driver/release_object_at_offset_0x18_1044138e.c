/* @k10d release_object_at_offset_0x18_1044138e @ 0x1044138e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper on the pointer stored at offset 0x18 of the given object.
 * summary:
 *   Dereferences the pointer at param_1 + 0x18 and passes it to clear_flag3_with_notify.
 *   The callee's role is unknown, so the operation is described mechanically as invoking a
 *   function on a sub-object pointer. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x18_1044138e(int param_1)

{
  clear_flag3_with_notify(*(void **)(param_1 + 0x18));
  return;
}
