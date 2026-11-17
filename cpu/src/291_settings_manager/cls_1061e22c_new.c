/* @k10d cls_1061e22c_new @ 0x10531a6e
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x1061e22c; returns param_1)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1061e22c (vtable 0x1061e22c, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x1061e22c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1061e22c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    cls_105b57dc_new(param_1);
    cls_105b9734_new(param_1 + 1);
    *param_1 = 0x1061e22c;
    param_1[2] = 0x1061e25c;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  return param_1;
}
