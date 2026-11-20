/* @k10d cls_105a5bf8_new @ 0x1045b964
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105a5bf8; returns param_1)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a5bf8 (vtable 0x105a5bf8, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105a5bf8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a5bf8_new(cls_105a5bf8 *param_1)

{
  if ((param_1 != (cls_105a5bf8 *)0x0) ||
     (param_1 = (cls_105a5bf8 *)heap_alloc((void *)4), param_1 != (cls_105a5bf8 *)0x0)) {
    param_1->field_0x0 = 0x105a5bf8/*ROM*/;
  }
  return;
}
