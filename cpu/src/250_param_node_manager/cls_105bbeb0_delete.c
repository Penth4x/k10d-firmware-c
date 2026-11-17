/* @k10d cls_105bbeb0_delete @ 0x104dfab4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105bbeb0: resets the vtable pointer and frees the
 *   object when the heap flag is set.
 * summary:
 *   Takes a this pointer and a flags word. If this is non-NULL, it overwrites the vtable
 *   pointer at offset 0x40 with 0x105bbeb0 (the class vtable) to mark the object as
 *   destroyed. If bit 0 of the flags parameter is set, it calls heap_free to release the
 *   object. This is virtual slot 1 of cls_105bbeb0 and is called by the deleting
 *   destructors of derived classes cls_105bc1c4 and cls_105bc4d8.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bbeb0_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x40) = 0x105bbeb0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
