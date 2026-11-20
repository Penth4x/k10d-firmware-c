/* @k10d cls_105b8234_new @ 0x104b4716
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b8234; returns param_1)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b8234 (vtable 0x105b8234, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b8234; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b8234_new(cls_105b8234 *param_1)

{
  if ((param_1 != (cls_105b8234 *)0x0) ||
     (param_1 = (cls_105b8234 *)heap_alloc((void *)4), param_1 != (cls_105b8234 *)0x0)) {
    param_1->field_0x0 = 0x105b8234/*ROM*/;
  }
  return;
}
