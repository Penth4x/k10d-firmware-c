/* @k10d call_helper_with_offset_field_104b1e62 @ 0x104b1e62
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 0x48 of the object and calls a helper with that pointer
 *   plus 4.
 * summary:
 *   The function dereferences the integer at param_1 + 0x48, adds 4 to it, and passes the
 *   result as the sole argument to kernel_diag_taskstack. It performs no other operations
 *   and returns void. The role of the object field and the callee is not determinable from
 *   the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_field_104b1e62(int param_1)

{
  kernel_diag_taskstack((void *)(*(int *)(param_1 + 0x48) + 4));
  return;
}
