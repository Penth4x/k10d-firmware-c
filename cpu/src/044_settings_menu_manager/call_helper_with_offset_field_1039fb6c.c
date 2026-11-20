/* @k10d call_helper_with_offset_field_1039fb6c @ 0x1039fb6c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Reads the 4-byte field at offset 4 of the object and passes it plus 4 to a helper
 *   function.
 * summary:
 *   This is virtual slot 5 of cls_105642d8. It dereferences param_1+4 to get an integer
 *   value, adds 4 to it, and passes the result as the sole argument to
 *   kernel_diag_taskstack. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_offset_field_1039fb6c(cls_105642d8 *param_1)

{
  kernel_diag_taskstack((void *)(param_1->field_0x4 + 4));
  return;
}
