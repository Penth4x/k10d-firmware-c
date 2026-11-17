/* @k10d cls_105b6358_delete @ 0x104a2acc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b6358: resets the vtable and frees the object when
 *   the flags word has bit 0 set.
 * summary:
 *   Takes the object pointer (param_1) and a flags word (param_2). If the pointer is non-
 *   NULL, it overwrites the vtable pointer at offset 0x1c with 0x105b6358 (the class's own
 *   vtable) to mark the object as destroyed. If bit 0 of param_2 is set, it calls heap_free
 *   to release the object. This is virtual slot 1 of cls_105b6358 and follows the standard
 *   Cfront deleting-destructor pattern seen in the other verified callers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b6358_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x1c) = 0x105b6358/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
