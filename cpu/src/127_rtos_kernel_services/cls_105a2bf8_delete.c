/* @k10d cls_105a2bf8_delete @ 0x10459eba
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105a2bf8: resets the vtable and frees the object when
 *   the heap flag is set.
 * summary:
 *   Takes a pointer to a cls_105a2bf8 object (param_1) and a flags word (param_2). If the
 *   pointer is non-NULL, it overwrites the vtable pointer at offset 4 with the class vtable
 *   address 0x105a2bf8. If bit 0 of param_2 is set, it calls heap_free to release the
 *   object. This is the standard C++ deleting destructor pattern for this 8-byte class,
 *   called by the deleting destructors of several derived classes.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2bf8_delete(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) &&
     (*(void **)((int)param_1 + 4) = &DAT_105a2bf8/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
