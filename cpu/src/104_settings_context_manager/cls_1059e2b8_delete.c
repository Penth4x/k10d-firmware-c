/* @k10d cls_1059e2b8_delete @ 0x10427598
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 104_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_1059e2b8: resets the vtable pointer and frees the
 *   object if the heap flag is set.
 * summary:
 *   Takes an object pointer (param_1) and a flags word (param_2). If the pointer is non-
 *   NULL, it overwrites the vtable pointer at offset 4 with 0x1059e2b8 (the class's own
 *   vtable) to mark the object as destroyed. If bit 0 of param_2 is set, it calls heap_free
 *   to release the object. This is virtual slot 1 of cls_1059e2b8 and follows the standard
 *   Cfront deleting-destructor pattern seen in sibling classes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e2b8_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 4) = 0x1059e2b8/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
