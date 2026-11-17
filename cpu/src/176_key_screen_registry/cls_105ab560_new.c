/* @k10d cls_105ab560_new @ 0x10481ac6
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105ab560; returns param_1)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab560 (vtable 0x105ab560, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105ab560; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105ab560_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e478_new(param_1 + 1);
    *param_1 = 0x105ab560/*ROM*/;
    param_1[1] = 0x105ab590/*ROM*/;
    param_1[2] = 0;
    param_1[6] = 0;
    alloc_and_zero_20_bytes(param_1 + 7);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return param_1;
}
