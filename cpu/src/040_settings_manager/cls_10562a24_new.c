/* @k10d cls_10562a24_new @ 0x10393a66
 * name: verified (structural evidence: heap_alloc(0x84) when NULL; stores vtable 0x10562a24; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562a24 (vtable 0x10562a24, 0x84 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x84) when NULL; stores vtable 0x10562a24; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10562a24_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x84), param_1 != (uint32_t *)0x0)) {
    cls_10562b98_new(param_1);
    *param_1 = (uint32_t)&DAT_10562a24/*ROM*/;
    param_1[1] = 0;
    cls_105635ac_new(param_1 + 2);
    param_1[0x1b] = 0;
    *(uint8_t *)(param_1 + 0x1c) = 0;
    *(uint8_t *)((int)param_1 + 0x71) = 0;
    *(uint8_t *)((int)param_1 + 0x72) = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *(uint8_t *)(param_1 + 0x1f) = 0;
    param_1[0x20] = 2000;
  }
  return param_1;
}
