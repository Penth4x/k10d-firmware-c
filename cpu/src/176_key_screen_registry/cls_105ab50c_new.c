/* @k10d cls_105ab50c_new @ 0x10481a46
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105ab50c; returns param_1)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab50c (vtable 0x105ab50c, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105ab50c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105ab50c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = 0x105ab50c/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return param_1;
}
