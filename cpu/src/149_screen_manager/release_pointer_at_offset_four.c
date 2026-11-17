/* @k10d release_pointer_at_offset_four @ 0x1046bf5e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 149_screen_manager (unit names are model-proposed)
 * purpose:
 *   If the pointer at offset 4 of the object is non-null, passes the value at offset 12 to
 *   a helper.
 * summary:
 *   Checks the 4-byte field at offset 4 of the object (param_1). If it is non-zero, it
 *   dereferences that field, adds 8, and passes the resulting pointer to
 *   kernel_diag_taskstack. This is virtual slot 5 of cls_105a8c94. The helper's role is
 *   unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_pointer_at_offset_four(void *param_1)

{
  if (*(int *)((int)param_1 + 4) != 0) {
    kernel_diag_taskstack((void *)(*(int *)((int)param_1 + 4) + 8));
  }
  return;
}
