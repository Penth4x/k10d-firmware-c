/* @k10d cls_105a2b30_delete @ 0x10459834
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105a2b30: resets the vtable pointer and frees the
 *   object when the heap flag is set.
 * summary:
 *   Sets the object's vtable pointer (offset +4) to the class vtable at 0x105a2b30, then
 *   calls heap_free on the object if param_2 & 1 is set. This is virtual slot 1 of
 *   cls_105a2b30 and is invoked by the deleting destructors of cls_1059f088, cls_105a2b50,
 *   and cls_105a7d6c as a base-class cleanup step. The object is 0x8 bytes with no other
 *   members to destroy.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2b30_delete(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) &&
     (*(void **)((int)param_1 + 4) = &DAT_105a2b30/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
