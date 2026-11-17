/* @k10d clear_member_at_offset_four @ 0x10520304
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Writes zero to the 4-byte field at offset 4 of the object.
 * summary:
 *   A virtual method (slot 2) of cls_105d70c8 that simply stores 0 into the second word of
 *   the 0x8-byte object. No callees are invoked and no other state is touched. The caller
 *   is the class's deleting destructor, suggesting this slot is used to reset a member
 *   during teardown, but the specific role of that member is not determinable from the code
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_member_at_offset_four(void *param_1)

{
  *(uint32_t *)((int)param_1 + 4) = 0;
  return;
}
