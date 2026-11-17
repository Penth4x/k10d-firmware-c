/* @k10d cls_105629a8_new @ 0x10393854
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x105629a8; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105629a8 (vtable 0x105629a8, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x105629a8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105629a8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x38), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_105629a8/*ROM*/;
    param_1[1] = 0;
    cls_105634f0_new(param_1 + 2);
    param_1[0xd] = 0;
  }
  return param_1;
}
