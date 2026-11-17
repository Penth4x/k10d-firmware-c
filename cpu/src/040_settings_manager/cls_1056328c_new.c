/* @k10d cls_1056328c_new @ 0x10397e26
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x1056328c; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1056328c (vtable 0x1056328c, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x1056328c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1056328c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c), param_1 != (uint32_t *)0x0)) {
    cls_10563dd8_new(param_1);
    *param_1 = (uint32_t)&DAT_1056328c/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105632fc/*ROM*/;
    param_1[2] = (uint32_t)&DAT_10563324/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  return param_1;
}
