/* @k10d cls_105b68b0_new @ 0x104a733e
 * name: verified (structural evidence: heap_alloc(0xc) when NULL; stores vtable 0x105b68b0; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b68b0 (vtable 0x105b68b0, 0xc bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0xc) when NULL; stores vtable 0x105b68b0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b68b0_new(cls_105b68b0 *param_1)

{
  if ((param_1 != (cls_105b68b0 *)0x0) ||
     (param_1 = (cls_105b68b0 *)heap_alloc((void *)0xc), param_1 != (cls_105b68b0 *)0x0)) {
    param_1->field_0x8 = 0x105b68b0/*ROM*/;
    param_1->field_0x0 = 0;
    param_1->field_0x4 = 8;
  }
  return;
}
