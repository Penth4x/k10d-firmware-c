/* @k10d cls_105b7500_new @ 0x104ad738
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b7500; returns param_1)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b7500 (vtable 0x105b7500, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b7500; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7500_new(cls_105b7500 *param_1)

{
  if ((param_1 != (cls_105b7500 *)0x0) ||
     (param_1 = (cls_105b7500 *)heap_alloc((void *)4), param_1 != (cls_105b7500 *)0x0)) {
    param_1->field_0x0 = 0x105b7500/*ROM*/;
  }
  return;
}
