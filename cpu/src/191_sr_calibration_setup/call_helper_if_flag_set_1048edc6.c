/* @k10d call_helper_if_flag_set_1048edc6 @ 0x1048edc6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Invokes copy_setting_into_buffer only when the integer at offset 4 of the object is
 *   non-zero.
 * summary:
 *   Checks the 4th field (offset 4) of the object pointed to by param_1. If that field is
 *   non-zero, it calls the single callee copy_setting_into_buffer with no arguments. This
 *   is virtual slot 2 of cls_105b3ee0. No other side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_flag_set_1048edc6(cls_105b3ee0 *param_1)
{
  if (param_1->field_0x4 != 0) {
    copy_setting_into_buffer((uint32_t)param_1);
  }
  return;
}
