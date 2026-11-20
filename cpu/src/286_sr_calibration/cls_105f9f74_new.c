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
  if ((param_1 != 0) ||
     (param_1 = (void *)heap_alloc((void *)0x2b80), param_1 != (cls_105ba124 *)0x0)) {
    cls_105ba124_new(param_1);
    *(uint32_t *)&((cls_105ba124 *)((int)param_1 + 0x1d38))->field_0xde0 = 0x105f9f74/*ROM*/;
    ((uint32_t *)(((cls_105ba124 *)((int)param_1 + 0x1d38))))[910] = 1;
    *(uint16_t *)((uint8_t *)(((cls_105ba124 *)((int)param_1 + 0x1d38))) + 3642) = 0;
    *(uint16_t *)((uint32_t *)(((cls_105ba124 *)((int)param_1 + 0x1d38))) + 911) = 0;
    *(uint32_t *)((uint32_t *)(((cls_105ba124 *)((int)param_1 + 0x1d38))) + 912) = 0;
    ((uint32_t *)(((cls_105ba124 *)((int)param_1 + 0x1d38))))[913] = 0;
  }
  return (int)param_1;
}
