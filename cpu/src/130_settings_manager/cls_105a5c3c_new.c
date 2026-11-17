/* @k10d cls_105a5c3c_new @ 0x1045cd5e
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105a5c3c; returns param_1)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a5c3c (vtable 0x105a5c3c, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105a5c3c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a5c3c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)4), param_1 != (uint32_t *)0x0)) {
    *param_1 = (uint32_t)&DAT_105a5c3c/*ROM*/;
  }
  return;
}
