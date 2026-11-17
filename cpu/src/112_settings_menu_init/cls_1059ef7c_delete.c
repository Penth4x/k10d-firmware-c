/* @k10d cls_1059ef7c_delete @ 0x1042f3d2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_1059ef7c: resets the vtable pointer and frees the
 *   object if the heap flag is set.
 * summary:
 *   This is virtual slot 1 of class cls_1059ef7c. It writes the vtable address 0x1059ef6c
 *   into the object header (param_1 + 0x10) to mark the object as deleted, then calls
 *   heap_free on the object if param_2 & 1 is set. The pattern matches the Cfront deleting-
 *   destructor idiom where the vtable is overwritten before deallocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059ef7c_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 0x10) = 0x1059ef6c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
