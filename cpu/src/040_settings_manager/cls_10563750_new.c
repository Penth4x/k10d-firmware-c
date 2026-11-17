/* @k10d cls_10563750_new @ 0x1039a150
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x10563750; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563750 (vtable 0x10563750, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x10563750; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10563750_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_10563dd8_new(param_1);
    *param_1 = (uint32_t)&DAT_10563750/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105637c0/*ROM*/;
    param_1[2] = (uint32_t)&DAT_105637e8/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return param_1;
}
