/* @k10d call_helper_with_offset_value_103b9508 @ 0x103b9508
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Reads a 32-bit value from offset 4 of the object and passes it plus 0x1c to a helper
 *   function.
 * summary:
 *   This is virtual slot 5 of cls_10594e04. It dereferences the pointer at param_1+4, adds
 *   0x1c to it, and passes the result as the sole argument to kernel_diag_taskstack. The
 *   callee's role is unknown, so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_value_103b9508(int param_1)

{
  kernel_diag_taskstack((void *)(*(int *)(param_1 + 4) + 0x1c));
  return;
}
