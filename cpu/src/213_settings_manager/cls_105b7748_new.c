/* @k10d cls_105b7748_new @ 0x104ae214
 * name: verified (structural evidence: heap_alloc(0x20) when NULL; stores vtable 0x105b7748; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7748 (vtable 0x105b7748, 0x20 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x20) when NULL; stores vtable 0x105b7748; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b7748_new(cls_105b7748 *param_1)

{
  if ((param_1 != (cls_105b7748 *)0x0) ||
     (param_1 = (cls_105b7748 *)heap_alloc((void *)0x20), param_1 != (cls_105b7748 *)0x0)) {
    cls_105b7810_new((cls_105b7810 *)param_1);
    param_1->field_0x18 = 0x105b7748/*ROM*/;
    param_1->field_0x1c = (uintptr_t)((int *)0x0);
  }
  return (int)param_1;
}
