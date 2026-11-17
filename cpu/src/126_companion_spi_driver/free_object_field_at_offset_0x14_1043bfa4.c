/* @k10d free_object_field_at_offset_0x14_1043bfa4 @ 0x1043bfa4
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x14 of the given object if it is non-null.
 * summary:
 *   Checks the pointer at param_1 + 0x14; if non-null, passes it to set_flag2_with_notify
 *   (likely a free/destroy helper) and returns. No other side effects are visible. The
 *   callee's exact role is unknown, so the operation is described mechanically as
 *   freeing/releasing the referenced object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_field_at_offset_0x14_1043bfa4(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    set_flag2_with_notify(*(void **)(param_1 + 0x14));
  }
  return;
}
