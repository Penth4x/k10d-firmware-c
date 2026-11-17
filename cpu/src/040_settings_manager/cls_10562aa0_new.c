/* @k10d cls_10562aa0_new @ 0x10393f2e
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x10562aa0; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562aa0 (vtable 0x10562aa0, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x10562aa0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10562aa0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_10562aa0/*ROM*/;
    param_1[1] = 0;
    cls_10563694_new(param_1 + 2);
    param_1[0xb] = 0;
  }
  return param_1;
}
