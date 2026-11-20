/* @k10d call_helper_with_offset_arg_1047ca0c @ 0x1047ca0c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads a pointer from offset 4 of the object and calls a helper with that pointer plus
 *   4.
 * summary:
 *   The function takes an object pointer (param_1), dereferences the int at offset +4, adds
 *   4 to it, and passes the result as the sole argument to kernel_diag_taskstack. It is
 *   virtual slot 5 of cls_105aa9dc. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_1047ca0c(cls_105aa9dc *param_1)

{
  kernel_diag_taskstack((void *)(param_1->field_0x4 + 4));
  return;
}
