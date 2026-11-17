/* @k10d cls_10563ff4_delete @ 0x1039cfe8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   C++ deleting destructor for cls_10563ff4: restores the vtable pointer and frees the
 *   object if the flag bit is set.
 * summary:
 *   Sets the object's vtable pointer (offset 4) back to the class vtable at 0x10563ff4,
 *   then calls heap_free on the object when param_2 bit 0 is set. This matches the standard
 *   Cfront deleting-destructor idiom where the flag controls whether the memory is actually
 *   released. No camera-specific behavior is evident from the code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10563ff4_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 4) = &DAT_10563ff4/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
