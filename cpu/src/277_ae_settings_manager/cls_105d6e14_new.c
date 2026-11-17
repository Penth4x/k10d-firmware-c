/* @k10d cls_105d6e14_new @ 0x1051f09e
 * name: verified (structural evidence: heap_alloc(0x54) when NULL; stores vtable 0x105d6e14; returns param_1)
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6e14 (vtable 0x105d6e14, 0x54 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x54) when NULL; stores vtable 0x105d6e14; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105d6e14_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x54), param_1 != (uint32_t *)0x0)) {
    cls_105b2e98_new(param_1);
    param_1[0x12] = (uint32_t)&DAT_105d6e14/*ROM*/;
    param_1[0x13] = 0;
    *(uint8_t *)(param_1 + 0x14) = 0;
    param_1[0x11] = 2;
  }
  return (int)param_1;
}
