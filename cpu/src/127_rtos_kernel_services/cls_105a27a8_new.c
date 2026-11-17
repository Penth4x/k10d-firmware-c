/* @k10d cls_105a27a8_new @ 0x10456ef6
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105a27a8; returns param_1)
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a27a8 (vtable 0x105a27a8, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105a27a8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a27a8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a27a8/*ROM*/;
    param_1[2] = 0x105a27d8/*ROM*/;
  }
  return param_1;
}
