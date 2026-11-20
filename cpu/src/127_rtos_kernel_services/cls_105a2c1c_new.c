/* @k10d cls_105a2c1c_new @ 0x1045a000
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105a2c1c; returns param_1)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a2c1c (vtable 0x105a2c1c, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105a2c1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2c1c_new(cls_105a2c1c *param_1)

{
  if ((param_1 != (cls_105a2c1c *)0x0) ||
     (param_1 = (cls_105a2c1c *)heap_alloc((void *)0x14), param_1 != (cls_105a2c1c *)0x0)) {
    param_1->field_0x10 = (uint32_t)&DAT_105a2c1c/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 0;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
  }
  return;
}
