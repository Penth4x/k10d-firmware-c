/* @k10d cls_10563694_new @ 0x1039a040
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x10563694; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10563694 (vtable 0x10563694, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x10563694; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10563694_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x24), param_1 != (uint32_t *)0x0)) {
    cls_10563dd8_new(param_1);
    *param_1 = (uint32_t)&DAT_10563694/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10563704/*ROM*/;
    param_1[2] = (uint32_t)&DAT_1056372c/*ROM*/;
  }
  return param_1;
}
