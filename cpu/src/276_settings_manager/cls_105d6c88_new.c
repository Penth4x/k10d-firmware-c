/* @k10d cls_105d6c88_new @ 0x1051cd8c
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105d6c88; returns param_1)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6c88 (vtable 0x105d6c88, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105d6c88; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d6c88_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    cls_105b6174_new(param_1);
    param_1[1] = 0x105d6c88/*ROM*/;
    param_1[0xc] = 0;
  }
  return param_1;
}
