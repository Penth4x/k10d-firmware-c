/* @k10d call_helper_with_offset_arg_1047d0da @ 0x1047d0da
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Reads an integer at offset 4 of the object pointer and calls a helper with that value
 *   plus 8.
 * summary:
 *   The function takes an object pointer (param_1), dereferences the int at offset +4, adds
 *   8 to it, and passes the result as the sole argument to kernel_diag_taskstack. It is
 *   virtual slot 5 of cls_105aabd0. No other side effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_arg_1047d0da(cls_105aabd0 *param_1)

{
  kernel_diag_taskstack((void *)(param_1->field_0x4 + 8));
  return;
}
