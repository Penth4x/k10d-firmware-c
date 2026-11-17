/* @k10d call_helper_with_offset_value_104b51ca @ 0x104b51ca
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 217_error_display_handler (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from offset 4 of the object and passes it plus 0x1c to a helper
 *   function.
 * summary:
 *   This is virtual slot 5 of cls_105b857c. It dereferences the pointer at param_1+4, adds
 *   0x1c to it, and passes the result as the sole argument to kernel_diag_taskstack. The
 *   specific role of kernel_diag_taskstack is unknown, so the camera subsystem cannot be
 *   determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_value_104b51ca(int param_1)

{
  kernel_diag_taskstack((void *)(*(int *)(param_1 + 4) + 0x1c));
  return;
}
