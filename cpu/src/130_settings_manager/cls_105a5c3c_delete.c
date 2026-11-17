/* @k10d cls_105a5c3c_delete @ 0x1045cd7e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105a5c3c: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Sets the object's first word to the vtable address 0x105a5c3c (marking it as deleted).
 *   If param_2 has bit 0 set, it calls heap_free on the object. It is called by the
 *   deleting destructors of cls_105b6a10 and cls_105d67dc, indicating it is a base-class
 *   destructor. The class has a 4-byte object size and 3 virtual slots.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a5c3c_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_105a5c3c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
