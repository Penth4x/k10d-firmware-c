/* @k10d cls_105b3658_new @ 0x10488f96
 * name: verified (structural evidence: heap_alloc(0x54) when NULL; stores vtable 0x105b3658; returns param_1)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3658 (vtable 0x105b3658, 0x54 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x54) when NULL; stores vtable 0x105b3658; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3658_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x54), param_1 != (uint32_t *)0x0)) {
    cls_105b2e98_new(param_1);
    param_1[0x12] = (uint32_t)&DAT_105b3658/*ROM*/;
    param_1[0x13] = 0;
    *(uint8_t *)(param_1 + 0x14) = 0;
    param_1[0x11] = 2;
  }
  return (int)param_1;
}
