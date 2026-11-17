/* @k10d free_pointer_at_offset_0x10c_1043d79a @ 0x1043d79a
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x10c of the given object if it is non-null.
 * summary:
 *   Reads the pointer at param_1 + 0x10c and, if it is not NULL, passes it to
 *   set_flag_with_notify. The callee's role is unknown, so the operation is described
 *   mechanically as a conditional free/dispose of a single member pointer. No other fields
 *   are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_pointer_at_offset_0x10c_1043d79a(int param_1)

{
  if (*(void **)(param_1 + 0x10c) != (void *)0x0) {
    set_flag_with_notify(*(void **)(param_1 + 0x10c));
  }
  return;
}
