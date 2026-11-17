/* @k10d deallocate_object_if_flagged_1051d6f6 @ 0x1051d6f6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Restores the vtable pointer and frees the object if the second argument's low bit is
 *   set.
 * summary:
 *   Takes an object pointer (param_1) and a flag (param_2). If the pointer is non-NULL, it
 *   writes the class vtable address (0x105d6d90) into the object's vtable slot at offset
 *   0x6c. If bit 0 of param_2 is set, it then calls heap_free on the object. This is the
 *   virtual destructor (slot 1) for class cls_105d6d90, which cleans up the object and
 *   conditionally deallocates it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deallocate_object_if_flagged_1051d6f6(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 0x6c) = &DAT_105d6d90/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
