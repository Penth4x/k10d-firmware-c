/* @k10d cls_1056b154_new @ 0x103b86aa
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x1056b154; returns param_1)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1056b154 (vtable 0x1056b154, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x1056b154; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1056b154 * cls_1056b154_new(cls_1056b154 *param_1)

{
  if ((param_1 != (cls_1056b154 *)0x0) ||
     (param_1 = (cls_1056b154 *)heap_alloc((void *)0x28), param_1 != (cls_1056b154 *)0x0)) {
    cls_10559fc0_new((cls_10559fc0 *)param_1);
    param_1->field_0x0 = (uint32_t)&DAT_1056b154/*ROM*/;
    param_1->field_0x4 = (uint32_t)&DAT_1056b1dc/*ROM*/;
    param_1->field_0x8 = (uint32_t)&DAT_1056b204/*ROM*/;
  }
  return param_1;
}
