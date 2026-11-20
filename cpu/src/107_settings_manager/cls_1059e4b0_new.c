/* @k10d cls_1059e4b0_new @ 0x104281e2
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1059e4b0; returns param_1)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e4b0 (vtable 0x1059e4b0, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1059e4b0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e4b0_new(cls_1059e4b0 *param_1)

{
  if ((param_1 != (cls_1059e4b0 *)0x0) ||
     (param_1 = (cls_1059e4b0 *)heap_alloc((void *)4), param_1 != (cls_1059e4b0 *)0x0)) {
    param_1->field_0x0 = 0x1059e4b0/*ROM*/;
  }
  return;
}
