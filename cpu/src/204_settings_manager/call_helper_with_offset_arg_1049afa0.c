/* @k10d call_helper_with_offset_arg_1049afa0 @ 0x1049afa0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes the value at offset 4 of the object plus 8 to a single callee.
 * summary:
 *   This is virtual slot 5 of cls_105b57ac. It dereferences the pointer at offset 4 of the
 *   object (param_1), adds 8 to it, and passes that result as the sole argument to
 *   kernel_diag_taskstack. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_1049afa0(cls_105b57ac *param_1)

{
  kernel_diag_taskstack((void *)(param_1->field_0x4 + 8));
  return;
}
