/* @k10d free_pointer_at_offset_0x10_1043c5a4 @ 0x1043c5a4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x10 of the given object if it is non-null.
 * summary:
 *   Checks the pointer at param_1 + 0x10; if non-null, passes it to clear_flag2_with_notify
 *   (callee role unknown) and returns. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_pointer_at_offset_0x10_1043c5a4(int param_1)

{
  if (*(void **)(param_1 + 0x10) != 0) {
    clear_flag2_with_notify(*(void **)(param_1 + 0x10));
  }
  return;
}
