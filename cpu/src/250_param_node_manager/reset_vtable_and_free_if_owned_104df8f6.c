/* @k10d reset_vtable_and_free_if_owned_104df8f6 @ 0x104df8f6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to its class vtable and frees the heap block when
 *   the ownership flag is set.
 * summary:
 *   Takes an object pointer (param_1) and a flags word (param_2). If the pointer is non-
 *   NULL, it overwrites the vtable pointer at offset 0x14 with the class vtable at
 *   0x105bbbb4. If bit 0 of param_2 is set, it calls heap_free on the object. This is
 *   virtual slot 1 of cls_105bbbb4 and is invoked by the deleting destructors of several
 *   derived classes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_owned_104df8f6(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 0x14) = &DAT_105bbbb4/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
