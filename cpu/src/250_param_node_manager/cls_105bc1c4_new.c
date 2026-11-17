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

int cls_105bc1c4_new(uint32_t *param_1)

{
  void *pvVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x54), param_1 != (uint32_t *)0x0)) {
    cls_105bbeb0_new(param_1);
    param_1[0x10] = 0x105bc1c4/*ROM*/;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    pvVar1 = (void *)heap_alloc((void *)0x2f4);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)0x0;
    }
    else {
      init_0x2f4_byte_object(pvVar1);
    }
    param_1[0x14] = (uint32_t)(uintptr_t)pvVar1;
  }
  return (int)param_1;
}
