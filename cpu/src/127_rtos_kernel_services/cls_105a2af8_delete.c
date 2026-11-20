/* @k10d cls_105a2af8_delete @ 0x1045966c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105a2af8: resets the vtable pointer and frees the
 *   object when the heap flag is set.
 * summary:
 *   This is virtual slot 1 of class cls_105a2af8 (vtable 0x105a2af8, 0x8 bytes). It writes
 *   the vtable address into the object's first word (offset 4) and, if param_2 bit 0 is
 *   set, calls heap_free on the object. All callers are other classes' deleting destructors
 *   that invoke this as a base-class cleanup step. The class has no other virtual slots and
 *   no additional member cleanup is visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2af8_delete(void *param_1,uint param_2)

{
  if ((param_1 != 0) &&
     (*(void **)((int)param_1 + 4) = &DAT_105a2af8/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
