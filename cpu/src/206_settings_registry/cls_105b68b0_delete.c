/* @k10d cls_105b68b0_delete @ 0x104a736a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b68b0: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Takes a this pointer (param_1) and a flags word (param_2). If the object is non-NULL,
 *   it overwrites the vtable pointer at offset 8 with 0x105b68b0 (the class's own vtable)
 *   to mark the object as destroyed. If bit 0 of param_2 is set, it calls heap_free to
 *   release the object. This is virtual slot 1 of cls_105b68b0, which has only one virtual
 *   slot, making this the deleting destructor. The class is small (0xc bytes) and the
 *   vtable reset is the only member cleanup performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b68b0_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 8) = 0x105b68b0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
