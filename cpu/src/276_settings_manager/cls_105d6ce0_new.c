/* @k10d cls_105d6ce0_new @ 0x1051cf32
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x105d6ce0; returns param_1)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6ce0 (vtable 0x105d6ce0, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x105d6ce0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d6ce0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)100), param_1 != (uint32_t *)0x0)) {
    cls_105d6c2c_new(param_1);
    param_1[1] = 0x105d6ce0/*ROM*/;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  return param_1;
}
