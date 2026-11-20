/* @k10d cls_105be63c_new @ 0x104e2094
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105be63c; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105be63c (vtable 0x105be63c, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105be63c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105be63c_new(cls_105be63c *param_1)

{
  void *pvVar1;
  
  if ((param_1 != (cls_105be63c *)0x0) ||
     (param_1 = (cls_105be63c *)heap_alloc((void *)0x20), param_1 != (cls_105be63c *)0x0)) {
    cls_105bbbb4_new((cls_105bbbb4 *)param_1);
    param_1->field_0x14 = (uintptr_t)((void *)0x105be63c/*ROM*/);
    param_1->field_0x18 = (uintptr_t)((void *)0x0);
    param_1->field_0x1c = 0;
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
