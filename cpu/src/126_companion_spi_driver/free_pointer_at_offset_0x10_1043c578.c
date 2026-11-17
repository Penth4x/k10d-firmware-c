/* @k10d free_pointer_at_offset_0x10_1043c578 @ 0x1043c578
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Calls a helper on the pointer stored at offset 0x10 of the object if it is non-null.
 * summary:
 *   Reads the pointer at param_1 + 0x10 and, if it is not NULL, passes it to
 *   clear_flag_with_notify. The callee's role is unknown, so the operation is described
 *   mechanically as a conditional call on a member pointer. No other side effects are
 *   visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_pointer_at_offset_0x10_1043c578(int param_1)

{
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    clear_flag_with_notify(*(void **)(param_1 + 0x10));
  }
  return;
}
