/* @k10d cls_10594c54_delete @ 0x103b898a
 * name: verified (structural evidence: stores vtable 0x10594c54 to *this; heap_free(this) under (param_2 & 1))
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10594c54 (vtable 0x10594c54): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10594c54 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

void cls_10594c54_delete(cls_10594c54 *param_1,uint param_2)

{
  if (param_1 != (cls_10594c54 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x10594c54/*ROM*/);
    param_1->field_0x4 = (uintptr_t)((void *)0x10594d24/*ROM*/);
    param_1->field_0x18 = (uintptr_t)((void *)0x10594d44/*ROM*/);
    param_1->field_0x2c = (uintptr_t)((void *)0x10594d74/*ROM*/);
    param_1->field_0x30 = (uintptr_t)((void *)0x10594d8c/*ROM*/);
    param_1->field_0x34 = (uintptr_t)((void *)0x10594dac/*ROM*/);
    param_1->field_0x44 = 0x10594dec/*ROM*/;
    cls_105a2af8_delete(&param_1->field_0x48,2);
    cls_105a2a8c_delete(&param_1->field_0x40,0);
    cls_1059e128_delete((cls_1059e128 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
