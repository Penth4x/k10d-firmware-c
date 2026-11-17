/* @k10d free_object_field_at_offset_0x14_1043c612 @ 0x1043c612
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x14 of the object if it is non-null.
 * summary:
 *   Checks the pointer at param_1 + 0x14; if non-null, calls set_flag2_with_notify with
 *   that pointer as the argument. The callee's role is unknown, so the operation is
 *   described mechanically as a conditional free/dispose of a sub-object. No other side
 *   effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_field_at_offset_0x14_1043c612(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    set_flag2_with_notify(*(void **)(param_1 + 0x14));
  }
  return;
}
