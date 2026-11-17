/* @k10d call_single_helper_on_object_104b0406 @ 0x104b0406
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function with the first word of the passed object pointer.
 * summary:
 *   The function takes a pointer to an undefined4, dereferences it, and passes that value
 *   as the sole argument to kernel_diag_taskstack. It is called as virtual method slot 5 of
 *   class cls_105b8204. No other operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_on_object_104b0406(uint32_t *param_1)

{
  kernel_diag_taskstack((void *)(uintptr_t)(*param_1));
  return;
}
