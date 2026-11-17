/* @k10d cls_105b68b0_new @ 0x104a733e
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b68b0; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b68b0 (vtable 0x105b68b0, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b68b0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b68b0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0xc), param_1 != (uint32_t *)0x0)) {
    param_1[2] = 0x105b68b0/*ROM*/;
    *param_1 = 0;
    param_1[1] = 8;
  }
  return;
}
