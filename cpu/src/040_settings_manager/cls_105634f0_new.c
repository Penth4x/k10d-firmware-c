/* @k10d cls_105634f0_new @ 0x103998ba
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105634f0; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105634f0 (vtable 0x105634f0, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105634f0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105634f0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c), param_1 != (uint32_t *)0x0)) {
    cls_10563dd8_new(param_1);
    *param_1 = (uint32_t)&DAT_105634f0/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10563560/*ROM*/;
    param_1[2] = (uint32_t)&DAT_10563588/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  return param_1;
}
