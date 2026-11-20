/* @k10d cls_105b9a7c_new @ 0x104cf8a2
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x105b9a7c; returns param_1)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b9a7c (vtable 0x105b9a7c, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x105b9a7c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b9a3c * cls_105b9a7c_new(cls_105b9a7c *param_1)

{
  if ((param_1 != (cls_105b9a7c *)0x0) ||
     (param_1 = (cls_105b9a7c *)heap_alloc((void *)4), (cls_105b9a3c *)param_1 != (cls_105b9a3c *)0x0)) {
    cls_105b9a3c_new((cls_105b9a3c *)param_1);
    ((cls_105b9a3c *)param_1)->field_0x0 = 0x105b9a7c/*ROM*/;
  }
  return (cls_105b9a3c *)param_1;
}
