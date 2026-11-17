/* @k10d cls_105b68e8_new @ 0x104a7420
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105b68e8; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b68e8 (vtable 0x105b68e8, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105b68e8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b68e8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_105b99ec_new(param_1);
    *param_1 = 0x105b68e8/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    *(uint8_t *)(param_1 + 3) = 1;
    *(uint8_t *)((int)param_1 + 0xd) = 0;
    param_1[4] = 0;
  }
  return param_1;
}
