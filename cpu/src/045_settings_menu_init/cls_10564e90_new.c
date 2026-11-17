/* @k10d cls_10564e90_new @ 0x103a568a
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x10564e90; returns param_1)
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10564e90 (vtable 0x10564e90, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x10564e90; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10564e90_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    *param_1 = 0x10564e90/*ROM*/;
  }
  return param_1;
}
