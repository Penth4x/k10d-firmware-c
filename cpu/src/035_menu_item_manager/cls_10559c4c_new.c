/* @k10d cls_10559c4c_new @ 0x1038cdbc
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x10559c4c; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10559c4c (vtable 0x10559c4c, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x10559c4c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10559c4c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    cls_10559fc0_new(param_1);
    *param_1 = (uint32_t)&DAT_10559c4c/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10559d64/*ROM*/;
    param_1[2] = (uint32_t)&DAT_10559d8c/*ROM*/;
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  return param_1;
}
