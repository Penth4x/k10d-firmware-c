/* @k10d virtual_destructor_free_10428222 @ 0x10428222
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Sets the object's vtable pointer to the class vtable and frees the heap block if the
 *   low flag bit is set.
 * summary:
 *   This is virtual slot 1 of cls_1059e4d0, acting as a C++ deleting destructor. It writes
 *   the vtable address 0x1059e4d0 into the object header at offset 0x10, then calls
 *   heap_free on the object if param_2 & 1 is true. The heap_free callee is the standard
 *   operator delete used by C++ destructors. Callers include font atlas builders,
 *   suggesting this class manages UI font resources.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void virtual_destructor_free_10428222(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) &&
     (*(void **)((int)param_1 + 0x10) = &DAT_1059e4d0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
