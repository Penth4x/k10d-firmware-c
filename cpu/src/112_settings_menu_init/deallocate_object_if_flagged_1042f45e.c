/* @k10d deallocate_object_if_flagged_1042f45e @ 0x1042f45e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Restores the vtable pointer and frees the heap block when the low bit of param_2 is
 *   set.
 * summary:
 *   This is virtual slot 1 of cls_1059ef9c, acting as a C++ deleting destructor. It writes
 *   the vtable address 0x1059ef9c back into the object header at offset 0x10, then calls
 *   heap_free on the object pointer if the low bit of param_2 is set. The heap_free callee
 *   is verified to be the operator delete used by C++ deleting destructors.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deallocate_object_if_flagged_1042f45e(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x10) = 0x1059ef9c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
