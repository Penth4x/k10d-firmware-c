/* @k10d cls_105b73a8_new @ 0x104acc88
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105b73a8; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b73a8 (vtable 0x105b73a8, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105b73a8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b73a8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105b73a8/*ROM*/;
    param_1[2] = 0x105b73f0/*ROM*/;
    param_1[4] = 0;
  }
  return param_1;
}
