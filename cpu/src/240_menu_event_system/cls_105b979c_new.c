/* @k10d cls_105b979c_new @ 0x104cef80
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105b979c; returns param_1)
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b979c (vtable 0x105b979c, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105b979c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105b979c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_1059e100_new(param_1);
    cls_105a2c1c_new((void *)(param_1 + 1));
    *param_1 = 0x105b979c/*ROM*/;
    param_1[5] = 0x105b97cc/*ROM*/;
    cls_105a2af8_new((void *)(param_1 + 6));
    cls_1059e288_new((void *)(param_1 + 8));
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  return param_1;
}
