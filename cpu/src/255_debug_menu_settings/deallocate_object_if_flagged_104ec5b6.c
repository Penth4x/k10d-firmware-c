/* @k10d deallocate_object_if_flagged_104ec5b6 @ 0x104ec5b6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Restores the vtable pointer and frees the object if the low bit of param_2 is set.
 * summary:
 *   This is virtual slot 1 of cls_105c2b5c, acting as a C++ deleting destructor. It writes
 *   the vtable address 0x105c2b5c back into the object header at offset 0x24, then calls
 *   heap_free on the object if param_2 & 1 is true. The heap_free callee is verified to be
 *   the operator delete used by C++ deleting destructors.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deallocate_object_if_flagged_104ec5b6(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x24) = 0x105c2b5c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
