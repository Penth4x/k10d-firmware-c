/* @k10d free_object_at_offset_0x10 @ 0x1043bf4c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x10 of the given object if it is non-null.
 * summary:
 *   Checks the pointer at param_1 + 0x10; if non-null, passes it to set_flag2_with_notify
 *   (likely a free/destroy helper). No other side effects. The callee's role is not
 *   independently verified, so the operation is described mechanically as a conditional
 *   release of a sub-object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_at_offset_0x10(int param_1)

{
  if (*(void **)(param_1 + 0x10) != 0) {
    set_flag2_with_notify(*(void **)(param_1 + 0x10));
  }
  return;
}
