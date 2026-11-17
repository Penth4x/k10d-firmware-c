/* @k10d cls_105fa760_delete @ 0x1052e246
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105fa760: resets the vtable and frees the object when
 *   the heap flag bit0 is set.
 * summary:
 *   Sets the first word (vtable pointer) of the object to 0x105d9168, then calls heap_free
 *   on the object if param_2 bit0 is set. This matches the C++ deleting-destructor idiom
 *   (store vtable, free if heap-allocated). It is virtual slot 1 of cls_105fa760, a 4-byte
 *   object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105fa760_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105d9168/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
