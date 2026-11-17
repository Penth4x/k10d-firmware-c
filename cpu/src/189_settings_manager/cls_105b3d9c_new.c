/* @k10d cls_105b3d9c_new @ 0x1048d2ba
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105b3d9c; returns param_1)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3d9c (vtable 0x105b3d9c, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105b3d9c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3d9c_new(uint16_t *param_1)

{
  if ((param_1 != (uint16_t *)0x0) ||
     (param_1 = (uint16_t *)heap_alloc((void *)0x2c), param_1 != (uint16_t *)0x0)) {
    cls_105b3cdc_new(param_1);
    *(void **)(param_1 + 0x10) = &DAT_105b3d9c/*ROM*/;
    param_1[0x12] = 7;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  return (int)param_1;
}
