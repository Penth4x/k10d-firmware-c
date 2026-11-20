/* @k10d cls_1056b154_delete @ 0x103b86f2
 * name: verified (structural evidence: stores vtable 0x1056b154 to *this; heap_free(this) under (param_2 & 1))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1056b154 (vtable 0x1056b154): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1056b154 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1056b154_delete(cls_1056b154 *param_1,uint param_2)

{
  if (param_1 != (cls_1056b154 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_1056b154/*ROM*/;
    *(uint32_t *)&param_1->field_0x4 = (uint32_t)&DAT_1056b1dc/*ROM*/;
    *(uint32_t *)&param_1->field_0x8 = (uint32_t)&DAT_1056b204/*ROM*/;
    cls_10559fc0_delete((cls_10559fc0 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
