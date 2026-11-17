/* @k10d cls_105b56ec_delete @ 0x1049a39c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b56ec: resets the vtable pointer and frees the
 *   object when the heap flag is set.
 * summary:
 *   Takes an object pointer (param_1) and a flags word (param_2). If the pointer is non-
 *   NULL, it overwrites the vtable pointer at offset 0x10 with 0x105b56ec (the class's own
 *   vtable) to mark the object as destroyed. If bit 0 of param_2 is set, it calls heap_free
 *   to release the object. This is the standard Cfront deleting-destructor pattern: reset
 *   vtable, then free if heap-allocated. It is virtual slot 1 of cls_105b56ec and is called
 *   by the deleting destructors of cls_105b5628, cls_105b5694, and cls_105d6684, indicating
 *   cls_105b56ec is a base class of those types.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b56ec_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x10) = 0x105b56ec/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
