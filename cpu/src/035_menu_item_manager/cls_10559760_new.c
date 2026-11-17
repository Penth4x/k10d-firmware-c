/* @k10d cls_10559760_new @ 0x103883fe
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x10559760; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10559760 (vtable 0x10559760, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x10559760; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10559760_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x28), param_1 != (uint32_t *)0x0)) {
    cls_10559fc0_new(param_1);
    *param_1 = (uint32_t)&DAT_10559760/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105597e8/*ROM*/;
    param_1[2] = (uint32_t)&DAT_10559810/*ROM*/;
  }
  return param_1;
}
