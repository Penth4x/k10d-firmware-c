/* @k10d call_helper_if_pointer_nonzero @ 0x10493de4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Calls a helper function when the first word of the passed structure is non-zero.
 * summary:
 *   Checks if the first 32-bit field of param_1 is non-zero. If so, it invokes
 *   apply_bayer_pixel_mask with no arguments. The function returns void and has no other
 *   side effects. The role of the helper and the structure is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_if_pointer_nonzero(cls_1061e4c0 *param_1, uint32_t param_2)
{
  if (param_1->field_0x0 != 0) {
    apply_bayer_pixel_mask((uint32_t)param_1, (uint32_t)param_2);
  }
  return;
}
