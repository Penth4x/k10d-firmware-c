/* @k10d clear_member_at_offset_4 @ 0x105203c4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Sets the 4-byte field at offset 4 of the object to zero.
 * summary:
 *   This is virtual slot 2 of cls_105d70f0. It writes 0 to the second word of the 0x8-byte
 *   object. It is called by the class's deleting destructor, likely as part of member
 *   cleanup before the object is freed. No other callees or side effects are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_member_at_offset_4(void *param_1)

{
  *(uint32_t *)((int)param_1 + 4) = 0;
  return;
}
