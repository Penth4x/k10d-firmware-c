/* @k10d cls_10563098_new @ 0x10397332
 * name: verified (structural evidence: heap_alloc(0x4c) when NULL; stores vtable 0x10563098; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563098 (vtable 0x10563098, 0x4c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4c) when NULL; stores vtable 0x10563098; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10563098_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x4c), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_10563098/*ROM*/;
    param_1[1] = 0;
    cls_10563d1c_new(param_1 + 2);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  return param_1;
}
