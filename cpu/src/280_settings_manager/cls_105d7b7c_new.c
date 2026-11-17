/* @k10d cls_105d7b7c_new @ 0x10521674
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105d7b7c; returns param_1)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d7b7c (vtable 0x105d7b7c, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105d7b7c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d7b7c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    cls_105d8304_new(param_1);
    cls_105d786c_new(param_1 + 8);
    param_1[3] = 0x105d7b7c/*ROM*/;
    param_1[4] = 0x105d7c44/*ROM*/;
    param_1[8] = 0x105d7c5c/*ROM*/;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  return param_1;
}
