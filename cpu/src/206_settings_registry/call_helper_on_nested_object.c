/* @k10d call_helper_on_nested_object @ 0x104a3346
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Dereferences a pointer at offset 4 of the object, adds 8, and passes the result to a
 *   helper function.
 * summary:
 *   This is virtual slot 5 of cls_105b6424. It reads the integer at param_1 + 4, adds 8 to
 *   it, and passes the resulting address as the sole argument to kernel_diag_taskstack. The
 *   function acts as a thin wrapper that forwards a derived pointer to a callee.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_on_nested_object(cls_105b6424 *param_1)

{
  kernel_diag_taskstack((void *)(param_1->field_0x4 + 8));
  return;
}
