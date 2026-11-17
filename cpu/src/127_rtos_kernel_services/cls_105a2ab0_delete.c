/* @k10d cls_105a2ab0_delete @ 0x104594c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a2ab0: resets the vtable and frees the object when
 *   flags&1.
 * summary:
 *   Takes a pointer to a cls_105a2ab0 object (0xc bytes) and a flags word. If the pointer
 *   is non-NULL, it overwrites the vtable pointer at offset 8 with &DAT_105a2ab0 (the class
 *   vtable) and, if bit 0 of param_2 is set, calls heap_free on the object. This is the
 *   standard Cfront deleting-destructor pattern: mark the object as deleted by restoring
 *   its vtable, then release the heap block. It is virtual slot 1 of cls_105a2ab0 and is
 *   called by the deleting destructors of cls_105b8354, cls_105d54e0, and cls_105d624c,
 *   indicating cls_105a2ab0 is a base class of those types.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2ab0_delete(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) &&
     (*(void **)((int)param_1 + 8) = &DAT_105a2ab0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
