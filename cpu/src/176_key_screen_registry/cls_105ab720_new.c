/* @k10d cls_105ab720_new @ 0x10482a78
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105ab720; returns param_1)
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105ab720 (vtable 0x105ab720, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105ab720; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105ab720_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_105ab430_new(param_1 + 1);
    cls_1059e4b0_new(param_1 + 2);
    *param_1 = 0x105ab720/*ROM*/;
    param_1[1] = 0x105ab780/*ROM*/;
    param_1[2] = 0x105ab7b8/*ROM*/;
    param_1[5] = 0;
    cls_105a2be0_new(param_1 + 6);
    cls_105a2af8_new(param_1 + 8);
    *(uint8_t *)(param_1 + 10) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return param_1;
}
