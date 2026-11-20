/* @k10d cls_105b8a9c_new @ 0x104b7762
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105b8a9c; returns param_1)
 * unit: 221_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b8a9c (vtable 0x105b8a9c, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105b8a9c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b49ec * cls_105b8a9c_new(cls_105b8a9c *param_1)

{
  if ((param_1 != (cls_105b8a9c *)0x0) ||
     (param_1 = (cls_105b8a9c *)heap_alloc((void *)0x10), (cls_105b49ec *)param_1 != (cls_105b49ec *)0x0)) {
    cls_105b49ec_new((cls_105b49ec *)param_1);
    ((cls_105b49ec *)param_1)->field_0xc = (uint32_t)&DAT_105b8a9c/*ROM*/;
  }
  return (cls_105b49ec *)param_1;
}
