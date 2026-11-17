/* @k10d reset_vtable_and_free_if_flagged_10491534 @ 0x10491534
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to a base class and frees the heap block if the low
 *   bit of the flag parameter is set.
 * summary:
 *   This function is virtual slot 1 of class cls_105b40c4. It writes the address 0x105b40c4
 *   (the class's own vtable) into the first word of the object, effectively resetting the
 *   vtable pointer. If param_2 has bit 0 set, it calls heap_free to deallocate the object.
 *   It is called by deleting destructors of other classes to clean up this base/member.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_flagged_10491534(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_105b40c4/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
