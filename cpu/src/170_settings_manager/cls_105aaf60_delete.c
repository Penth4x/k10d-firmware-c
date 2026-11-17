/* @k10d cls_105aaf60_delete @ 0x1047f55c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for cls_105aaf60: resets the vtable pointer and frees the object if
 *   the heap flag is set.
 * summary:
 *   Sets the object's vtable pointer (offset 4) to 0x105aaf60 to mark it as destroyed. If
 *   param_2 has bit 0 set, calls heap_free to release the object. This is virtual slot 1 of
 *   cls_105aaf60, matching the standard C++ deleting destructor pattern seen in sibling
 *   classes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aaf60_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 4) = 0x105aaf60/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
