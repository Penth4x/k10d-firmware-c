/* @k10d cls_105bc1c4_new @ 0x104dfb08
 * name: verified (structural evidence: heap_alloc(0x54) when NULL; stores vtable 0x105bc1c4; returns param_1)
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bc1c4 (vtable 0x105bc1c4, 0x54 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x54) when NULL; stores vtable 0x105bc1c4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bc1c4_new(cls_105bc1c4 *param_1)

{
  void *pvVar1;
  
  if ((param_1 != (cls_105bc1c4 *)0x0) ||
     (param_1 = (cls_105bc1c4 *)heap_alloc((void *)0x54), param_1 != (cls_105bc1c4 *)0x0)) {
    cls_105bbeb0_new((cls_105bbeb0 *)param_1);
    param_1->field_0x40 = 0x105bc1c4/*ROM*/;
    param_1->field_0x44 = 0;
    param_1->field_0x48 = 0;
    param_1->field_0x4c = 0;
    param_1->field_0x50 = (uint32_t)((void *)0x0);
    pvVar1 = (void *)heap_alloc((void *)0x2f4);
    if (pvVar1 == 0) {
      pvVar1 = (void *)0x0;
    }
    else {
      init_0x2f4_byte_object(pvVar1);
    }
    param_1->field_0x50 = (uint32_t)(pvVar1);
  }
  return (int)param_1;
}
