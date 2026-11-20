/* @k10d release_object_at_offset_0x14_1043c5d0 @ 0x1043c5d0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper on the pointer stored at offset 0x14 of the input object if it is non-
 *   null.
 * summary:
 *   Reads the pointer at param_1 + 0x14 and, if it is not NULL, passes it to
 *   clear_flag_with_notify. The callee's role is unknown, so the operation is described
 *   mechanically as a conditional release/dispatch on a sub-object pointer. No other side
 *   effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x14_1043c5d0(int param_1)

{
  if (*(void **)(param_1 + 0x14) != 0) {
    clear_flag_with_notify(*(void **)(param_1 + 0x14));
  }
  return;
}
