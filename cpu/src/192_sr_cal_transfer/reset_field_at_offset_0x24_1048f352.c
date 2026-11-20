/* @k10d reset_field_at_offset_0x24_1048f352 @ 0x1048f352
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 192_sr_cal_transfer (unit names are model-proposed)
 * purpose:
 *   Calls a helper to write zero to the object field at offset 0x24 and returns 1.
 * summary:
 *   This is virtual slot 3 of cls_105b3fbc. It passes the address of the member at offset
 *   0x24 to wait_flg_obj with a second argument of 0, then returns 1. The specific role of
 *   wait_flg_obj is unknown, so the exact semantic effect (e.g., clearing a flag, resetting
 *   a timer, or invalidating a state) cannot be determined from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_field_at_offset_0x24_1048f352(cls_105b3fbc *param_1)

{
  wait_flg_obj(&param_1->field_0x24,0);
  return 1;
}
