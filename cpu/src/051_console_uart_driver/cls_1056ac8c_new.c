/* @k10d cls_1056ac8c_new @ 0x103b76fe
 * name: verified (structural evidence: heap_alloc(0x48) when NULL; stores vtable 0x1056ac8c; returns param_1)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1056ac8c (vtable 0x1056ac8c, 0x48 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x48) when NULL; stores vtable 0x1056ac8c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_1056ac8c_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x48), param_1 != (uint32_t *)0x0)) {
    cls_105643d0_new(param_1);
    *param_1 = 0x1056ac8c/*ROM*/;
    param_1[0x10] = 3;
    param_1[0x11] = 0;
  }
  return param_1;
}
