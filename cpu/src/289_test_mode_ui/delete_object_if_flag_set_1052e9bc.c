/* @k10d delete_object_if_flag_set_1052e9bc @ 0x1052e9bc
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Restores the vtable pointer and frees the object if the low bit of param_2 is set.
 * summary:
 *   This is virtual slot 1 of cls_105fa8e4, acting as a C++ deleting destructor. It writes
 *   the class vtable address (0x105fa8e4) into the object header at offset 0x58, then calls
 *   heap_free on the object if param_1 is non-null and the least significant bit of param_2
 *   is set. This matches the standard Cfront idiom where the flag bit controls whether the
 *   memory is actually deallocated.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void delete_object_if_flag_set_1052e9bc(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 0x58) = &DAT_105fa8e4/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
