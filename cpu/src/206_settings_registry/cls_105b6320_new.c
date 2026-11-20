/* @k10d cls_105b6320_new @ 0x104a295a
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105b6320; returns param_1)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b6320 (vtable 0x105b6320, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105b6320; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b6320_new(cls_105b6320 *param_1)

{
  if ((param_1 != (cls_105b6320 *)0x0) ||
     (param_1 = (cls_105b6320 *)heap_alloc((void *)8), param_1 != (cls_105b6320 *)0x0)) {
    param_1->field_0x4 = 0x105b6320/*ROM*/;
    param_1->field_0x0 = 0;
  }
  return;
}
