/* @k10d cls_10562b1c_new @ 0x103940d4
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x10562b1c; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562b1c (vtable 0x10562b1c, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x10562b1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10562b1c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x50), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_10562b1c/*ROM*/;
    cls_10563750_new(param_1 + 1);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    *(uint8_t *)(param_1 + 0x13) = 0;
    *(uint8_t *)((int)param_1 + 0x4d) = 0;
  }
  return param_1;
}
