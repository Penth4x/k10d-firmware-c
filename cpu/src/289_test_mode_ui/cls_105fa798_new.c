/* @k10d cls_105fa798_new @ 0x1052e61e
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105fa798; returns param_1)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105fa798 (vtable 0x105fa798, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105fa798; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105fa798_new(cls_105fa798 *param_1)

{
  if ((param_1 != (cls_105fa798 *)0x0) ||
     (param_1 = (cls_105fa798 *)heap_alloc((void *)4), param_1 != (cls_105fa798 *)0x0)) {
    param_1->field_0x0 = 0x105fa798/*ROM*/;
  }
  return;
}
