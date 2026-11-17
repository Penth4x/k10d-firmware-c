/* @k10d cls_105f9f74_new @ 0x1052bd44
 * name: verified (structural evidence: heap_alloc(0x2b80) when NULL; stores vtable 0x105f9f74; returns param_1)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105f9f74 (vtable 0x105f9f74, 0x2b80 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2b80) when NULL; stores vtable 0x105f9f74; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105f9f74_new(void *param_1)

{
  if ((param_1 != (void *)0x0) || (param_1 = (void *)heap_alloc((void *)0x2b80), param_1 != (void *)0x0)) {
    cls_105ba124_new(param_1);
    *(uint32_t *)((int)param_1 + 0x2b18) = 0x105f9f74/*ROM*/;
    *(uint8_t *)((int)param_1 + 0x2b70) = 1;
    *(uint16_t *)((int)param_1 + 0x2b72) = 0;
    *(uint16_t *)((int)param_1 + 0x2b74) = 0;
    *(uint32_t *)((int)param_1 + 0x2b78) = 0;
    *(uint8_t *)((int)param_1 + 0x2b7c) = 0;
  }
  return (int)param_1;
}
