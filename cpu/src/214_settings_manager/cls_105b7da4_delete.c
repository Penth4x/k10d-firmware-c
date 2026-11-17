/* @k10d cls_105b7da4_delete @ 0x104b056c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b7da4: resets the vtable and frees the object when
 *   the flag bit is set.
 * summary:
 *   Takes a this pointer (param_1) and a flags word (param_2). If the object is non-NULL,
 *   it overwrites the vtable pointer at offset 8 with 0x105b7da4 (the class's own vtable)
 *   to mark the object as destroyed. If bit 0 of param_2 is set, it calls heap_free to
 *   release the object. This is virtual slot 1 of cls_105b7da4 and follows the standard
 *   Cfront deleting-destructor idiom.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7da4_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 8) = 0x105b7da4/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
