/* @k10d cls_105d86e0_delete @ 0x10521c98
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105d86e0: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Takes an object pointer (param_1) and a flags word (param_2). If the pointer is non-
 *   NULL, it overwrites the vtable pointer at offset 0xc with 0x105d86e0 (the class's own
 *   vtable, a standard C++ deleting-destructor reset). If bit 0 of param_2 is set, it calls
 *   heap_free on the object. It is virtual slot 1 of cls_105d86e0 and is invoked by the
 *   deleting destructors of cls_105d7f58 and cls_105d831c, indicating it is a base-class
 *   destructor.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d86e0_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0xc) = 0x105d86e0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
