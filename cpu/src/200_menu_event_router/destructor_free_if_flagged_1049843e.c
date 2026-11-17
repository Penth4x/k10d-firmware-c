/* @k10d destructor_free_if_flagged_1049843e @ 0x1049843e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Sets the object's vtable pointer to the class vtable and frees the heap block if the
 *   second argument's low bit is set.
 * summary:
 *   This is virtual slot 1 of cls_105b55d4, acting as a C++ deleting destructor. It writes
 *   the vtable address 0x105b55d4 into the object header at offset 8, then calls heap_free
 *   on the object if param_2 & 1 is true. The heap_free callee is the standard operator
 *   delete used by Cfront deleting destructors.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void destructor_free_if_flagged_1049843e(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(void **)(param_1 + 8) = &DAT_105b55d4/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
