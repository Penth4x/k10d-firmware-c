/* @k10d cls_105b99ec_delete @ 0x104cf7b2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b99ec: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Sets the object's first word (vtable pointer) to 0x105b99ec, then calls heap_free on
 *   the object if param_2 has bit 0 set. This matches the standard C++ deleting destructor
 *   pattern (store vtable, free if owned). It is virtual slot 1 of cls_105b99ec and is
 *   called by the deleting destructors of cls_105b68e8 and cls_105b9aac, indicating it is a
 *   base-class destructor.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b99ec_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b99ec/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
