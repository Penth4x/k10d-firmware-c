/* @k10d free_object_at_offset_0x14_1043c628 @ 0x1043c628
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Frees the pointer stored at offset 0x14 of the given object if it is non-null.
 * summary:
 *   Checks the pointer at param_1 + 0x14; if non-null, calls clear_flag3_with_notify with
 *   that pointer as its argument. The callee name is unknown, but the pattern (null-check
 *   then single call with the dereferenced pointer) is consistent with a deallocation or
 *   release operation on a sub-object. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void free_object_at_offset_0x14_1043c628(int param_1)

{
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    clear_flag3_with_notify(*(void **)(param_1 + 0x14));
  }
  return;
}
