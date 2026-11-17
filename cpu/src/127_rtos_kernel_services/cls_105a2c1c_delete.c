/* @k10d cls_105a2c1c_delete @ 0x1045a034
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105a2c1c: resets the vtable pointer and frees the
 *   object if the flag bit is set.
 * summary:
 *   Takes a pointer to a cls_105a2c1c object and a flags word. If the pointer is non-null,
 *   it overwrites the vtable pointer at offset 0x10 with the class vtable address
 *   (0x105a2c1c). If bit 0 of the flags parameter is set, it calls heap_free to release the
 *   object. This is the standard C++ deleting destructor pattern for this class.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2c1c_delete(void *param_1,uint param_2)

{
  if ((param_1 != (void *)0x0) &&
     (*(void **)((int)param_1 + 0x10) = &DAT_105a2c1c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
