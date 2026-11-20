/* @k10d cls_105aae4c_new @ 0x1047dffa
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105aae4c; returns param_1)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aae4c (vtable 0x105aae4c, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105aae4c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aae4c_new(cls_105aae4c *param_1)

{
  if ((param_1 != (cls_105aae4c *)0x0) ||
     (param_1 = (cls_105aae4c *)heap_alloc((void *)4), param_1 != (cls_105aae4c *)0x0)) {
    param_1->field_0x0 = 0x105aae4c/*ROM*/;
  }
  return;
}
