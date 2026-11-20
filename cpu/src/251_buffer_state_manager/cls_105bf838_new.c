/* @k10d cls_105bf838_new @ 0x104e3034
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105bf838; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bf838 (vtable 0x105bf838, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105bf838; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bf838_new(cls_105bf838 *param_1)

{
  void *pvVar1;
  
  if ((param_1 != (cls_105bf838 *)0x0) ||
     (param_1 = (cls_105bf838 *)heap_alloc((void *)0x1c), param_1 != (cls_105bf838 *)0x0)) {
    cls_105bbbb4_new((cls_105bbbb4 *)param_1);
    param_1->field_0x14 = (uintptr_t)((void *)0x105bf838/*ROM*/);
    param_1->field_0x18 = (uintptr_t)((void *)0x0);
    pvVar1 = (void *)heap_alloc((void *)0x2f4);
    if (pvVar1 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      init_0x2f4_byte_object(pvVar1);
    }
    param_1->field_0x18 = (uintptr_t)(pvVar1);
  }
  return (int)param_1;
}
