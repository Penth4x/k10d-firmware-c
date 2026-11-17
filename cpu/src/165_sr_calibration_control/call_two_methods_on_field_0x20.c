/* @k10d call_two_methods_on_field_0x20 @ 0x1047179e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 165_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Invokes two unnamed helper functions on the object pointer stored at offset 0x20 of the
 *   input object.
 * summary:
 *   The function takes an object pointer in param_1, dereferences the pointer at offset
 *   0x20, and passes it as the sole argument to two consecutive callees
 *   (clear_flag2_with_notify and clear_flag3_with_notify). It is called as virtual method
 *   slot 3 of class cls_105a9ac8. No camera-specific behavior is evident from the
 *   pseudocode or the unnamed callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_methods_on_field_0x20(void *param_1)

{
  clear_flag2_with_notify(*(void **)((int)param_1 + 0x20));
  clear_flag3_with_notify(*(void **)((int)param_1 + 0x20));
  return;
}
