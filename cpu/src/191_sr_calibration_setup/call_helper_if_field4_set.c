/* @k10d call_helper_if_field4_set @ 0x1048ebbe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Invokes compute_and_write_scaled_offset when the object's 4th field (offset +4) is non-
 *   zero.
 * summary:
 *   Checks the int at param_1+4; if it is not zero, calls the single callee
 *   compute_and_write_scaled_offset. This is virtual slot 2 of cls_105b3ec0. No other side
 *   effects or globals are touched.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_field4_set(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    compute_and_write_scaled_offset((ushort *)__frv_reg_unset(4));
  }
  return;
}
