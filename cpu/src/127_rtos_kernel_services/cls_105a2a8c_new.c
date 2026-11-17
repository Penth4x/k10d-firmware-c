/* @k10d cls_105a2a8c_new @ 0x10459380
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a2a8c; returns param_1)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a2a8c (vtable 0x105a2a8c, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a2a8c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2a8c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    param_1[1] = (uint32_t)&DAT_105a2a8c/*ROM*/;
    *param_1 = 0;
  }
  return;
}
