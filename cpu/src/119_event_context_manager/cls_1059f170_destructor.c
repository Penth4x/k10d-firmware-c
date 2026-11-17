/* @k10d cls_1059f170_destructor @ 0x104330e6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   C++ deleting destructor for cls_1059f170: stores the vtable pointer and frees the
 *   object if the flag bit is set.
 * summary:
 *   This is virtual slot 1 of class cls_1059f170, matching the Cfront deleting-destructor
 *   idiom. It writes the vtable address 0x1059f170 into the object header at offset 0x10,
 *   then calls heap_free on the object when param_2 bit 0 is set. The heap_free callee is
 *   the operator delete used by C++ deleting destructors, confirming the role.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059f170_destructor(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) &&
     (*(void **)((int)param_1 + 0x10) = &DAT_1059f170/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
