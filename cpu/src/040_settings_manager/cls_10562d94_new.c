/* @k10d cls_10562d94_new @ 0x1039573a
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x10562d94; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562d94 (vtable 0x10562d94, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x10562d94; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10562d94_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_10562d94/*ROM*/;
    param_1[1] = 0;
    cls_10563940_new(param_1 + 2);
    param_1[0xe] = 0;
    *(uint8_t *)(param_1 + 0xf) = 1;
    *(uint8_t *)((int)param_1 + 0x3d) = 0;
    *(uint8_t *)((int)param_1 + 0x3e) = 0;
  }
  return param_1;
}
