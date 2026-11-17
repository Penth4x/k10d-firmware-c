/* @k10d call_helper_with_offset_arg_104ce3f0 @ 0x104ce3f0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 237_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 4 of the object and calls a helper with that pointer plus
 *   4.
 * summary:
 *   This is virtual slot 5 of cls_105b9634. It dereferences the field at param_1+4, adds 4
 *   to the resulting value, and passes it as the sole argument to kernel_diag_taskstack. No
 *   other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_104ce3f0(int param_1)

{
  kernel_diag_taskstack((void *)(*(int *)(param_1 + 4) + 4));
  return;
}
