/* @k10d cls_105b74d8_delete @ 0x104ad718
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b74d8: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Sets the object's first word (vtable pointer) to 0x105b74d8, then calls heap_free on
 *   the object if param_2 has bit 0 set. This matches the standard Cfront deleting-
 *   destructor idiom: store the vtable, then free if the heap-allocated flag is set. It is
 *   virtual slot 1 of cls_105b74d8 and is called by the deleting destructors of
 *   cls_105b7458 and cls_105b7498, indicating cls_105b74d8 is a base class.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b74d8_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b74d8/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
