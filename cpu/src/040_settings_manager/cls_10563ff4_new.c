/* @k10d cls_10563ff4_new @ 0x1039cfc2
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x10563ff4; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563ff4 (vtable 0x10563ff4, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x10563ff4; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10563ff4_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    param_1[1] = (uint32_t)&DAT_10563ff4/*ROM*/;
    *param_1 = 0;
  }
  return;
}
