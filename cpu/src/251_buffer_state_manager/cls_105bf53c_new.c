/* @k10d cls_105bf53c_new @ 0x104e2cfc
 * name: verified (structural evidence: heap_alloc(0x3c) when NULL; stores vtable 0x105bf53c; returns param_1)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105bf53c (vtable 0x105bf53c, 0x3c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x3c) when NULL; stores vtable 0x105bf53c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105bf53c_new(cls_105bf53c *param_1)

{
  int iVar1;
  
  if ((param_1 != (cls_105bf53c *)0x0) ||
     (param_1 = (cls_105bf53c *)heap_alloc((void *)0x3c), param_1 != (cls_105bf53c *)0x0)) {
    cls_105bbbb4_new((cls_105bbbb4 *)param_1);
    param_1->field_0x14 = (uintptr_t)((void *)0x105bf53c/*ROM*/);
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = (uintptr_t)((void *)0x0);
    param_1->field_0x30 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x38 = 0;
    iVar1 = heap_alloc((void *)0x10);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      init_or_alloc_zeroed_block((uint32_t *)(iVar1));
    }
    param_1->field_0x18 = iVar1;
  }
  return (int)param_1;
}
