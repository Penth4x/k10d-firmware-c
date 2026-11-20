/* @k10d free_object_at_offset_0x14_1043bf8e @ 0x1043bf8e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x14 of the given object if it is non-null.
 * summary:
 *   Checks the pointer at param_1 + 0x14; if non-null, passes it to clear_flag2_with_notify
 *   (likely a free/destroy helper). No other side effects. The callee's exact role is
 *   unknown, but the pattern is a conditional release of a sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_at_offset_0x14_1043bf8e(int param_1)

{
  if (*(void **)(param_1 + 0x14) != 0) {
    clear_flag2_with_notify(*(void **)(param_1 + 0x14));
  }
  return;
}
