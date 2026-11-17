/* @k10d cls_10598538_new @ 0x104024d6
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x10598538; returns param_1)
 * unit: 090_sr_fl_menu (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10598538 (vtable 0x10598538, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x10598538; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_10598538_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c), param_1 != (uint32_t *)0x0)) {
    cls_10559fc0_new(param_1);
    *param_1 = (uint32_t)&DAT_10598538/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105985c0/*ROM*/;
    param_1[2] = (uint32_t)&DAT_105985e8/*ROM*/;
    param_1[10] = 0;
  }
  return param_1;
}
