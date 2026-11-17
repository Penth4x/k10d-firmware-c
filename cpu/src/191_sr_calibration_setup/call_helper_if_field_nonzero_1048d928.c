/* @k10d call_helper_if_field_nonzero_1048d928 @ 0x1048d928
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Calls a helper function if the second field of the passed structure is non-zero.
 * summary:
 *   Checks the integer at offset 4 of the object pointed to by param_1. If it is not zero,
 *   it invokes deinterlace_rgb_to_yuv with no arguments. The function returns void and has
 *   no other side effects.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_field_nonzero_1048d928(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    deinterlace_rgb_to_yuv((ushort *)__frv_reg_unset(4));
  }
  return;
}
