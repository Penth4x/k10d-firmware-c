/* @k10d cls_10557d70_delete @ 0x1036c774
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 020_settings_manager (unit names are model-proposed)
 * purpose:
 *   C++ deleting destructor for cls_10557d70: restores the vtable pointer and frees the
 *   object if the flag bit is set.
 * summary:
 *   Takes the object pointer in param_1 and a flag in param_2. If the pointer is non-NULL,
 *   it writes the class vtable address 0x10557d70 into the object's first word (offset 0x40
 *   relative to the passed pointer, consistent with a this-adjustment for the virtual
 *   slot). If bit 0 of param_2 is set, it calls heap_free to release the block. This
 *   matches the standard Cfront deleting-destructor idiom: store vtable, then free if
 *   flags&1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10557d70_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 0x40) = &DAT_10557d70/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
