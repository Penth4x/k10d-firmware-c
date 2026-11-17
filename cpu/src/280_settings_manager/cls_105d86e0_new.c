/* @k10d cls_105d86e0_new @ 0x10521c68
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105d86e0; returns param_1)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d86e0 (vtable 0x105d86e0, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105d86e0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d86e0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    param_1[3] = 0x105d86e0/*ROM*/;
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  return;
}
