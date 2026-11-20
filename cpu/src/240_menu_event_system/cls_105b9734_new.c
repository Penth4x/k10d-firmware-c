/* @k10d cls_105b9734_new @ 0x104cee4e
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105b9734; returns param_1)
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9734 (vtable 0x105b9734, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105b9734; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9734_new(cls_105b9734 *param_1)

{
  if ((param_1 != (cls_105b9734 *)0x0) ||
     (param_1 = (cls_105b9734 *)heap_alloc((void *)8), param_1 != (cls_105b9734 *)0x0)) {
    param_1->field_0x4 = 0x105b9734/*ROM*/;
    param_1->field_0x0 = 0;
  }
  return;
}
