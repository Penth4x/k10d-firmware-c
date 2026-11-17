/* @k10d release_object_at_offset_0x14_1043bfba @ 0x1043bfba
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper on the pointer stored at offset 0x14 of the given object if it is non-
 *   null.
 * summary:
 *   Reads the pointer at param_1 + 0x14 and, if it is not NULL, passes it to
 *   clear_flag3_with_notify. The callee's role is unknown, so the operation is described
 *   mechanically as a conditional release/dispatch on a single embedded pointer. No other
 *   side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_object_at_offset_0x14_1043bfba(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    clear_flag3_with_notify(*(void **)(param_1 + 0x14));
  }
  return;
}
