/* @k10d cls_105aae7c_new @ 0x1047e03a
 * name: verified (structural evidence: heap_alloc(0x120) when NULL; stores vtable 0x105aae7c; returns param_1)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105aae7c (vtable 0x105aae7c, 0x120 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x120) when NULL; stores vtable 0x105aae7c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105aae7c_new(cls_105aae7c *param_1)

{
  if ((param_1 != (cls_105aae7c *)0x0) ||
     (param_1 = (cls_105aae7c *)heap_alloc((void *)0x120), param_1 != (cls_105aae7c *)0x0)) {
    cls_105aae34_new((cls_105aae34 *)param_1);
    ((cls_105aae34 *)param_1)->field_0x11c = 0x105aae7c/*ROM*/;
  }
  return (int)(cls_105aae34 *)param_1;
}
