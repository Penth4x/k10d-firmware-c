/* @k10d cls_105aae34_delete @ 0x1047dfa4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 169_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105aae34: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Sets the vtable pointer at offset 0x11c to 0x105aae34 (the class's own vtable) to mark
 *   the object as destroyed. If param_2 has bit 0 set, calls heap_free to release the
 *   object memory. This is virtual slot 1 of cls_105aae34, consistent with a C++ deleting
 *   destructor pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aae34_delete(void *param_1,uint param_2)

{
  if ((param_1 != 0) &&
     (*(uint32_t *)((int)param_1 + 0x11c) = 0x105aae34/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
