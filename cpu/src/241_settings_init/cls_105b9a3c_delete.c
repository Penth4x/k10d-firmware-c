/* @k10d cls_105b9a3c_delete @ 0x104cf7f2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b9a3c: resets the vtable pointer and frees the
 *   object if the flag bit is set.
 * summary:
 *   Sets the first word of the object (param_1) to the vtable address 0x105b9a3c, then
 *   calls heap_free on the object if param_2 has bit 0 set. This matches the standard
 *   Cfront deleting-destructor idiom: store the vtable, then free the heap block when the
 *   allocation flag is present. It is virtual slot 1 of cls_105b9a3c and is invoked by the
 *   deleting destructors of cls_105b9a7c and cls_105b9b2c, indicating it is a base-class
 *   cleanup routine.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9a3c_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b9a3c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
