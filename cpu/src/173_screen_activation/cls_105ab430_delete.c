/* @k10d cls_105ab430_delete @ 0x1048097c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 173_screen_activation (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105ab430: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Sets the object's first word (vtable pointer) to 0x105ab430, then calls heap_free on
 *   the object if param_2 has bit 0 set. This is virtual slot 1 of cls_105ab430, matching
 *   the standard C++ deleting destructor pattern seen in sibling classes cls_105ab47c and
 *   cls_105ab720. The object is 4 bytes (just the vtable pointer), so no member destruction
 *   is needed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ab430_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105ab430/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
