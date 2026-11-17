/* @k10d cls_105b7d6c_delete @ 0x104b051e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b7d6c: resets the vtable and frees the object when
 *   the flag bit is set.
 * summary:
 *   Sets the first word of the object to its own vtable address 0x105b7d6c, then calls
 *   heap_free on the object pointer if param_2 has bit 0 set. This matches the standard
 *   Cfront deleting-destructor idiom (store vtable, free if heap-allocated). It is virtual
 *   slot 1 of cls_105b7d6c and is invoked by cls_105bca70_delete, indicating it is a base-
 *   class or member destructor.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7d6c_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b7d6c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
