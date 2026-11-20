/* @k10d cls_105a2a8c_delete @ 0x104593a6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105a2a8c: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   This is virtual slot 1 (the deleting destructor) of class cls_105a2a8c. It writes the
 *   class vtable address (0x105a2a8c) into the object's first word to mark it as destroyed,
 *   then calls heap_free on the object if param_2 bit 0 is set. It is called by the
 *   deleting destructors of several other classes, indicating cls_105a2a8c is a base class
 *   or member that is cleaned up during their destruction.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2a8c_delete(void *param_1,uint param_2)

{
  if ((param_1 != 0) &&
     (*(void **)((int)param_1 + 4) = &DAT_105a2a8c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
