/* @k10d cls_10562b1c_new @ 0x103940d4
 * name: verified (structural evidence: heap_alloc(0x50) when NULL; stores vtable 0x10562b1c; returns param_1)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10562b1c (vtable 0x10562b1c, 0x50 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x50) when NULL; stores vtable 0x10562b1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10562b98 * cls_10562b1c_new(cls_10562b1c *param_1)

{
  if ((param_1 != (cls_10562b1c *)0x0) ||
     (param_1 = (cls_10562b1c *)heap_alloc((void *)0x50), (cls_10562b98 *)param_1 != (cls_10562b98 *)0x0)) {
    cls_10562b98_new((cls_10562b98 *)param_1);
    ((cls_10562b98 *)param_1)->field_0x0 = (uintptr_t)(&DAT_10562b1c/*ROM*/);
    cls_10563750_new((cls_10563750 *)&((cls_10562b98 *)param_1)->field_0x4);
    ((cls_10562b98 *)param_1)->field_0x44 = 0;
    ((cls_10562b98 *)param_1)->field_0x48 = 0;
    ((cls_10562b98 *)param_1)->field_0x4c = 0;
    ((cls_10562b98 *)param_1)->field_0x4d = 0;
  }
  return (cls_10562b98 *)param_1;
}
